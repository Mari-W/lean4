// Lean compiler output
// Module: LeanExport.Parse
// Imports: public import Std.Data.HashMap public import Lean.Declaration import Init.Data.Array.GetLit import Init.Data.String.Search import Init.System.IO import Std.Internal.Parsec.String import Lean.Data.Json.Parser
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
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__0;
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__1;
static const lean_array_object l_LeanExport_instInhabitedExportedEnv_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__2 = (const lean_object*)&l_LeanExport_instInhabitedExportedEnv_default___closed__2_value;
static const lean_array_object l_LeanExport_instInhabitedExportedEnv_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__3 = (const lean_object*)&l_LeanExport_instInhabitedExportedEnv_default___closed__3_value;
static lean_once_cell_t l_LeanExport_instInhabitedExportedEnv_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_instInhabitedExportedEnv_default___closed__4;
LEAN_EXPORT lean_object* l_LeanExport_instInhabitedExportedEnv_default;
LEAN_EXPORT lean_object* l_LeanExport_instInhabitedExportedEnv;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3;
static const lean_array_object l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Name not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Name index "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " bound twice"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Level not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Level index "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Expr not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Expr index "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "RecursorRule not found "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "RecursorRule index "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0_value;
static const lean_closure_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Duplicate declaration: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Invalid JSON: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Expected JSON object"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__1_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Name.str invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2_value;
static lean_once_cell_t l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Name.num invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Level.succ invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Level.max invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Level.imax invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Level.param invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.bvar invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.sort invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Expr.const invalid"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Expr.app invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "fn"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Invalid binder info: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Expr.lam invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Expr.forallE invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.letE invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Expr.proj invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Expr.lit natVal invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Expr.lit strVal invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Expr.mdata invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "failed to convert to name idx"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__0_value)}};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "axiomInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "levelParams"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isUnsafe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "rewrite invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prio"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "rewrite rule "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " before its theorem"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "defnInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hints"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "safety"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "safe"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Unknown safety parameter: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "thmInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "opaqueInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "quotInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unknown quot kind: "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "inductInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numIndices"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctors"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isRec"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isReflexive"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "inductInfo invalid: Expected JSON object"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__8_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ctorInfo invalid"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "induct"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numFields"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "recInfo invalid"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__0_value)}};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1_value;
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2_value;
static const lean_string_object l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3 = (const lean_object*)&l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numMotives"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numMinors"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Inductive invalid, no `recs`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__0_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Inductive invalid, no `ctors`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__2_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Inductive invalid, no `types`"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__4_value)}};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "recs"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0_value;
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1_value;
static const lean_string_object l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2 = (const lean_object*)&l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Unknown export object with keys "};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "il"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ie"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24_value;
static const lean_string_object l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__25 = (const lean_object*)&l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__25_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_parseStream(lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_parseStream___boxed(lean_object*, lean_object*);
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__0, &l_LeanExport_instInhabitedExportedEnv_default___closed__0_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default___closed__4(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_11_ = ((lean_object*)(l_LeanExport_instInhabitedExportedEnv_default___closed__3));
v___x_12_ = ((lean_object*)(l_LeanExport_instInhabitedExportedEnv_default___closed__2));
v___x_13_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__1, &l_LeanExport_instInhabitedExportedEnv_default___closed__1_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__1);
v___x_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_11_);
return v___x_14_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv_default(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_LeanExport_instInhabitedExportedEnv_default___closed__4, &l_LeanExport_instInhabitedExportedEnv_default___closed__4_once, _init_l_LeanExport_instInhabitedExportedEnv_default___closed__4);
return v___x_15_;
}
}
static lean_object* _init_l_LeanExport_instInhabitedExportedEnv(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_LeanExport_instInhabitedExportedEnv_default;
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
return v_x_17_;
}
else
{
lean_object* v_key_19_; lean_object* v_value_20_; lean_object* v_tail_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_44_; 
v_key_19_ = lean_ctor_get(v_x_18_, 0);
v_value_20_ = lean_ctor_get(v_x_18_, 1);
v_tail_21_ = lean_ctor_get(v_x_18_, 2);
v_isSharedCheck_44_ = !lean_is_exclusive(v_x_18_);
if (v_isSharedCheck_44_ == 0)
{
v___x_23_ = v_x_18_;
v_isShared_24_ = v_isSharedCheck_44_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_tail_21_);
lean_inc(v_value_20_);
lean_inc(v_key_19_);
lean_dec(v_x_18_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_44_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint64_t v___x_26_; uint64_t v___x_27_; uint64_t v___x_28_; uint64_t v_fold_29_; uint64_t v___x_30_; uint64_t v___x_31_; uint64_t v___x_32_; size_t v___x_33_; size_t v___x_34_; size_t v___x_35_; size_t v___x_36_; size_t v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_25_ = lean_array_get_size(v_x_17_);
v___x_26_ = lean_uint64_of_nat(v_key_19_);
v___x_27_ = 32ULL;
v___x_28_ = lean_uint64_shift_right(v___x_26_, v___x_27_);
v_fold_29_ = lean_uint64_xor(v___x_26_, v___x_28_);
v___x_30_ = 16ULL;
v___x_31_ = lean_uint64_shift_right(v_fold_29_, v___x_30_);
v___x_32_ = lean_uint64_xor(v_fold_29_, v___x_31_);
v___x_33_ = lean_uint64_to_usize(v___x_32_);
v___x_34_ = lean_usize_of_nat(v___x_25_);
v___x_35_ = ((size_t)1ULL);
v___x_36_ = lean_usize_sub(v___x_34_, v___x_35_);
v___x_37_ = lean_usize_land(v___x_33_, v___x_36_);
v___x_38_ = lean_array_uget_borrowed(v_x_17_, v___x_37_);
lean_inc(v___x_38_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 2, v___x_38_);
v___x_40_ = v___x_23_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_key_19_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_value_20_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v___x_38_);
v___x_40_ = v_reuseFailAlloc_43_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; 
v___x_41_ = lean_array_uset(v_x_17_, v___x_37_, v___x_40_);
v_x_17_ = v___x_41_;
v_x_18_ = v_tail_21_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(lean_object* v_i_45_, lean_object* v_source_46_, lean_object* v_target_47_){
_start:
{
lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_48_ = lean_array_get_size(v_source_46_);
v___x_49_ = lean_nat_dec_lt(v_i_45_, v___x_48_);
if (v___x_49_ == 0)
{
lean_dec_ref(v_source_46_);
lean_dec(v_i_45_);
return v_target_47_;
}
else
{
lean_object* v_es_50_; lean_object* v___x_51_; lean_object* v_source_52_; lean_object* v_target_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v_es_50_ = lean_array_fget(v_source_46_, v_i_45_);
v___x_51_ = lean_box(0);
v_source_52_ = lean_array_fset(v_source_46_, v_i_45_, v___x_51_);
v_target_53_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(v_target_47_, v_es_50_);
v___x_54_ = lean_unsigned_to_nat(1u);
v___x_55_ = lean_nat_add(v_i_45_, v___x_54_);
lean_dec(v_i_45_);
v_i_45_ = v___x_55_;
v_source_46_ = v_source_52_;
v_target_47_ = v_target_53_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(lean_object* v_data_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v_nbuckets_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_58_ = lean_array_get_size(v_data_57_);
v___x_59_ = lean_unsigned_to_nat(2u);
v_nbuckets_60_ = lean_nat_mul(v___x_58_, v___x_59_);
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = lean_box(0);
v___x_63_ = lean_mk_array(v_nbuckets_60_, v___x_62_);
v___x_64_ = lean_array_propagate_mark(v_data_57_, v___x_63_);
v___x_65_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(v___x_61_, v_data_57_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(lean_object* v_a_66_, lean_object* v_b_67_, lean_object* v_x_68_){
_start:
{
if (lean_obj_tag(v_x_68_) == 0)
{
lean_dec(v_b_67_);
lean_dec(v_a_66_);
return v_x_68_;
}
else
{
lean_object* v_key_69_; lean_object* v_value_70_; lean_object* v_tail_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_83_; 
v_key_69_ = lean_ctor_get(v_x_68_, 0);
v_value_70_ = lean_ctor_get(v_x_68_, 1);
v_tail_71_ = lean_ctor_get(v_x_68_, 2);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_68_);
if (v_isSharedCheck_83_ == 0)
{
v___x_73_ = v_x_68_;
v_isShared_74_ = v_isSharedCheck_83_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_tail_71_);
lean_inc(v_value_70_);
lean_inc(v_key_69_);
lean_dec(v_x_68_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_83_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
uint8_t v___x_75_; 
v___x_75_ = lean_nat_dec_eq(v_key_69_, v_a_66_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_66_, v_b_67_, v_tail_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 2, v___x_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_key_69_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_value_70_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_value_70_);
lean_dec(v_key_69_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v_b_67_);
lean_ctor_set(v___x_73_, 0, v_a_66_);
v___x_81_ = v___x_73_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_66_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v_b_67_);
lean_ctor_set(v_reuseFailAlloc_82_, 2, v_tail_71_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(lean_object* v_a_84_, lean_object* v_x_85_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
uint8_t v___x_86_; 
v___x_86_ = 0;
return v___x_86_;
}
else
{
lean_object* v_key_87_; lean_object* v_tail_88_; uint8_t v___x_89_; 
v_key_87_ = lean_ctor_get(v_x_85_, 0);
v_tail_88_ = lean_ctor_get(v_x_85_, 2);
v___x_89_ = lean_nat_dec_eq(v_key_87_, v_a_84_);
if (v___x_89_ == 0)
{
v_x_85_ = v_tail_88_;
goto _start;
}
else
{
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg___boxed(lean_object* v_a_91_, lean_object* v_x_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_91_, v_x_92_);
lean_dec(v_x_92_);
lean_dec(v_a_91_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(lean_object* v_m_95_, lean_object* v_a_96_, lean_object* v_b_97_){
_start:
{
lean_object* v_size_98_; lean_object* v_buckets_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_142_; 
v_size_98_ = lean_ctor_get(v_m_95_, 0);
v_buckets_99_ = lean_ctor_get(v_m_95_, 1);
v_isSharedCheck_142_ = !lean_is_exclusive(v_m_95_);
if (v_isSharedCheck_142_ == 0)
{
v___x_101_ = v_m_95_;
v_isShared_102_ = v_isSharedCheck_142_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_buckets_99_);
lean_inc(v_size_98_);
lean_dec(v_m_95_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_142_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; uint64_t v___x_104_; uint64_t v___x_105_; uint64_t v___x_106_; uint64_t v_fold_107_; uint64_t v___x_108_; uint64_t v___x_109_; uint64_t v___x_110_; size_t v___x_111_; size_t v___x_112_; size_t v___x_113_; size_t v___x_114_; size_t v___x_115_; lean_object* v_bkt_116_; uint8_t v___x_117_; 
v___x_103_ = lean_array_get_size(v_buckets_99_);
v___x_104_ = lean_uint64_of_nat(v_a_96_);
v___x_105_ = 32ULL;
v___x_106_ = lean_uint64_shift_right(v___x_104_, v___x_105_);
v_fold_107_ = lean_uint64_xor(v___x_104_, v___x_106_);
v___x_108_ = 16ULL;
v___x_109_ = lean_uint64_shift_right(v_fold_107_, v___x_108_);
v___x_110_ = lean_uint64_xor(v_fold_107_, v___x_109_);
v___x_111_ = lean_uint64_to_usize(v___x_110_);
v___x_112_ = lean_usize_of_nat(v___x_103_);
v___x_113_ = ((size_t)1ULL);
v___x_114_ = lean_usize_sub(v___x_112_, v___x_113_);
v___x_115_ = lean_usize_land(v___x_111_, v___x_114_);
v_bkt_116_ = lean_array_uget_borrowed(v_buckets_99_, v___x_115_);
v___x_117_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_96_, v_bkt_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v_size_x27_119_; lean_object* v___x_120_; lean_object* v_buckets_x27_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v_size_x27_119_ = lean_nat_add(v_size_98_, v___x_118_);
lean_dec(v_size_98_);
lean_inc(v_bkt_116_);
v___x_120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_120_, 0, v_a_96_);
lean_ctor_set(v___x_120_, 1, v_b_97_);
lean_ctor_set(v___x_120_, 2, v_bkt_116_);
v_buckets_x27_121_ = lean_array_uset(v_buckets_99_, v___x_115_, v___x_120_);
v___x_122_ = lean_unsigned_to_nat(4u);
v___x_123_ = lean_nat_mul(v_size_x27_119_, v___x_122_);
v___x_124_ = lean_unsigned_to_nat(3u);
v___x_125_ = lean_nat_div(v___x_123_, v___x_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_array_get_size(v_buckets_x27_121_);
v___x_127_ = lean_nat_dec_le(v___x_125_, v___x_126_);
lean_dec(v___x_125_);
if (v___x_127_ == 0)
{
lean_object* v_val_128_; lean_object* v___x_130_; 
v_val_128_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(v_buckets_x27_121_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v_val_128_);
lean_ctor_set(v___x_101_, 0, v_size_x27_119_);
v___x_130_ = v___x_101_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_size_x27_119_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_val_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
else
{
lean_object* v___x_133_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v_buckets_x27_121_);
lean_ctor_set(v___x_101_, 0, v_size_x27_119_);
v___x_133_ = v___x_101_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_size_x27_119_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_buckets_x27_121_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v___x_135_; lean_object* v_buckets_x27_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
lean_inc(v_bkt_116_);
v___x_135_ = lean_box(0);
v_buckets_x27_136_ = lean_array_uset(v_buckets_99_, v___x_115_, v___x_135_);
v___x_137_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_96_, v_b_97_, v_bkt_116_);
v___x_138_ = lean_array_uset(v_buckets_x27_136_, v___x_115_, v___x_137_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___x_138_);
v___x_140_ = v___x_101_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_size_98_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_143_ = lean_box(0);
v___x_144_ = lean_unsigned_to_nat(16u);
v___x_145_ = lean_mk_array(v___x_144_, v___x_143_);
return v___x_145_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__0);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
return v___x_148_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = lean_box(0);
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1);
v___x_152_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v___x_151_, v___x_150_, v___x_149_);
return v___x_152_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_153_ = lean_box(0);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1);
v___x_156_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v___x_155_, v___x_154_, v___x_153_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(lean_object* v_x_159_, lean_object* v_stream_160_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_162_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__1);
v___x_163_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__2);
v___x_164_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__3);
v___x_165_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___closed__4));
v___x_166_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_166_, 0, v_stream_160_);
lean_ctor_set(v___x_166_, 1, v___x_163_);
lean_ctor_set(v___x_166_, 2, v___x_164_);
lean_ctor_set(v___x_166_, 3, v___x_162_);
lean_ctor_set(v___x_166_, 4, v___x_162_);
lean_ctor_set(v___x_166_, 5, v___x_162_);
lean_ctor_set(v___x_166_, 6, v___x_165_);
lean_ctor_set(v___x_166_, 7, v___x_165_);
v___x_167_ = lean_apply_2(v_x_159_, v___x_166_, lean_box(0));
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg___boxed(lean_object* v_x_168_, lean_object* v_stream_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v_x_168_, v_stream_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(lean_object* v_00_u03b1_172_, lean_object* v_x_173_, lean_object* v_stream_174_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v_x_173_, v_stream_174_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___boxed(lean_object* v_00_u03b1_177_, lean_object* v_x_178_, lean_object* v_stream_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run(v_00_u03b1_177_, v_x_178_, v_stream_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0(lean_object* v_00_u03b2_182_, lean_object* v_m_183_, lean_object* v_a_184_, lean_object* v_b_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_m_183_, v_a_184_, v_b_185_);
return v___x_186_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(lean_object* v_00_u03b2_187_, lean_object* v_a_188_, lean_object* v_x_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_188_, v_x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___boxed(lean_object* v_00_u03b2_191_, lean_object* v_a_192_, lean_object* v_x_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0(v_00_u03b2_191_, v_a_192_, v_x_193_);
lean_dec(v_x_193_);
lean_dec(v_a_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1(lean_object* v_00_u03b2_196_, lean_object* v_data_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1___redArg(v_data_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2(lean_object* v_00_u03b2_199_, lean_object* v_a_200_, lean_object* v_b_201_, lean_object* v_x_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__2___redArg(v_a_200_, v_b_201_, v_x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_204_, lean_object* v_i_205_, lean_object* v_source_206_, lean_object* v_target_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2___redArg(v_i_205_, v_source_206_, v_target_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_209_, lean_object* v_x_210_, lean_object* v_x_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__1_spec__2_spec__3___redArg(v_x_210_, v_x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(lean_object* v_msg_213_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_215_, 0, v_msg_213_);
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg___boxed(lean_object* v_msg_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_LeanExport_Parse_0__LeanExport_Parse_fail___redArg(v_msg_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail(lean_object* v_00_u03b1_220_, lean_object* v_msg_221_, lean_object* v_a_222_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_224_, 0, v_msg_221_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_fail___boxed(lean_object* v_00_u03b1_226_, lean_object* v_msg_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_LeanExport_Parse_0__LeanExport_Parse_fail(v_00_u03b1_226_, v_msg_227_, v_a_228_);
lean_dec_ref(v_a_228_);
return v_res_230_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___f_233_; 
v___x_232_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_233_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_233_, 0, v___x_232_);
return v___f_233_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName(lean_object* v_nidx_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_nameMap_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___x_241_; 
v_nameMap_238_ = lean_ctor_get(v_a_236_, 1);
v___f_239_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_240_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_nidx_235_);
v___x_241_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_240_, v___f_239_, v_nameMap_238_, v_nidx_235_);
if (lean_obj_tag(v___x_241_) == 1)
{
lean_object* v_val_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_250_; 
lean_dec(v_nidx_235_);
v_val_242_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_250_ == 0)
{
v___x_244_ = v___x_241_;
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_val_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v_val_242_);
lean_ctor_set(v___x_246_, 1, v_a_236_);
if (v_isShared_245_ == 0)
{
lean_ctor_set_tag(v___x_244_, 0);
lean_ctor_set(v___x_244_, 0, v___x_246_);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec(v___x_241_);
lean_dec_ref(v_a_236_);
v___x_251_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_252_ = l_Nat_reprFast(v_nidx_235_);
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
lean_dec_ref(v___x_252_);
v___x_254_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
v___x_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getName___boxed(lean_object* v_nidx_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getName(v_nidx_256_, v_a_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName(lean_object* v_nidx_262_, lean_object* v_n_263_, lean_object* v_a_264_){
_start:
{
lean_object* v_stream_266_; lean_object* v_nameMap_267_; lean_object* v_levelMap_268_; lean_object* v_exprMap_269_; lean_object* v_recursorRuleMap_270_; lean_object* v_constMap_271_; lean_object* v_constOrder_272_; lean_object* v_rewrites_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_294_; 
v_stream_266_ = lean_ctor_get(v_a_264_, 0);
v_nameMap_267_ = lean_ctor_get(v_a_264_, 1);
v_levelMap_268_ = lean_ctor_get(v_a_264_, 2);
v_exprMap_269_ = lean_ctor_get(v_a_264_, 3);
v_recursorRuleMap_270_ = lean_ctor_get(v_a_264_, 4);
v_constMap_271_ = lean_ctor_get(v_a_264_, 5);
v_constOrder_272_ = lean_ctor_get(v_a_264_, 6);
v_rewrites_273_ = lean_ctor_get(v_a_264_, 7);
v_isSharedCheck_294_ = !lean_is_exclusive(v_a_264_);
if (v_isSharedCheck_294_ == 0)
{
v___x_275_ = v_a_264_;
v_isShared_276_ = v_isSharedCheck_294_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_rewrites_273_);
lean_inc(v_constOrder_272_);
lean_inc(v_constMap_271_);
lean_inc(v_recursorRuleMap_270_);
lean_inc(v_exprMap_269_);
lean_inc(v_levelMap_268_);
lean_inc(v_nameMap_267_);
lean_inc(v_stream_266_);
lean_dec(v_a_264_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_294_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___f_277_; lean_object* v___f_278_; uint8_t v___x_279_; 
v___f_277_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_278_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_nidx_262_);
v___x_279_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_278_, v___f_277_, v_nameMap_267_, v_nidx_262_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_280_ = lean_box(0);
v___x_281_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_278_, v___f_277_, v_nameMap_267_, v_nidx_262_, v_n_263_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_281_);
v___x_283_ = v___x_275_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_stream_266_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_levelMap_268_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v_exprMap_269_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_recursorRuleMap_270_);
lean_ctor_set(v_reuseFailAlloc_286_, 5, v_constMap_271_);
lean_ctor_set(v_reuseFailAlloc_286_, 6, v_constOrder_272_);
lean_ctor_set(v_reuseFailAlloc_286_, 7, v_rewrites_273_);
v___x_283_ = v_reuseFailAlloc_286_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_280_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
return v___x_285_;
}
}
else
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_del_object(v___x_275_);
lean_dec_ref(v_rewrites_273_);
lean_dec_ref(v_constOrder_272_);
lean_dec_ref(v_constMap_271_);
lean_dec_ref(v_recursorRuleMap_270_);
lean_dec_ref(v_exprMap_269_);
lean_dec_ref(v_levelMap_268_);
lean_dec_ref(v_nameMap_267_);
lean_dec_ref(v_stream_266_);
lean_dec(v_n_263_);
v___x_287_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0));
v___x_288_ = l_Nat_reprFast(v_nidx_262_);
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
lean_dec_ref(v___x_288_);
v___x_290_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
v___x_292_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addName___boxed(lean_object* v_nidx_295_, lean_object* v_n_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addName(v_nidx_295_, v_n_296_, v_a_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(lean_object* v_uidx_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_levelMap_304_; lean_object* v___f_305_; lean_object* v___f_306_; lean_object* v___x_307_; 
v_levelMap_304_ = lean_ctor_get(v_a_302_, 2);
v___f_305_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_306_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_uidx_301_);
v___x_307_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_306_, v___f_305_, v_levelMap_304_, v_uidx_301_);
if (lean_obj_tag(v___x_307_) == 1)
{
lean_object* v_val_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_uidx_301_);
v_val_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_val_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v_val_308_);
lean_ctor_set(v___x_312_, 1, v_a_302_);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 0);
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_314_ = v___x_310_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_dec(v___x_307_);
lean_dec_ref(v_a_302_);
v___x_317_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_318_ = l_Nat_reprFast(v_uidx_301_);
v___x_319_ = lean_string_append(v___x_317_, v___x_318_);
lean_dec_ref(v___x_318_);
v___x_320_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
v___x_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___boxed(lean_object* v_uidx_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel(v_uidx_322_, v_a_323_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(lean_object* v_uidx_327_, lean_object* v_l_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_stream_331_; lean_object* v_nameMap_332_; lean_object* v_levelMap_333_; lean_object* v_exprMap_334_; lean_object* v_recursorRuleMap_335_; lean_object* v_constMap_336_; lean_object* v_constOrder_337_; lean_object* v_rewrites_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_359_; 
v_stream_331_ = lean_ctor_get(v_a_329_, 0);
v_nameMap_332_ = lean_ctor_get(v_a_329_, 1);
v_levelMap_333_ = lean_ctor_get(v_a_329_, 2);
v_exprMap_334_ = lean_ctor_get(v_a_329_, 3);
v_recursorRuleMap_335_ = lean_ctor_get(v_a_329_, 4);
v_constMap_336_ = lean_ctor_get(v_a_329_, 5);
v_constOrder_337_ = lean_ctor_get(v_a_329_, 6);
v_rewrites_338_ = lean_ctor_get(v_a_329_, 7);
v_isSharedCheck_359_ = !lean_is_exclusive(v_a_329_);
if (v_isSharedCheck_359_ == 0)
{
v___x_340_ = v_a_329_;
v_isShared_341_ = v_isSharedCheck_359_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_rewrites_338_);
lean_inc(v_constOrder_337_);
lean_inc(v_constMap_336_);
lean_inc(v_recursorRuleMap_335_);
lean_inc(v_exprMap_334_);
lean_inc(v_levelMap_333_);
lean_inc(v_nameMap_332_);
lean_inc(v_stream_331_);
lean_dec(v_a_329_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_359_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___f_342_; lean_object* v___f_343_; uint8_t v___x_344_; 
v___f_342_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_343_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_uidx_327_);
v___x_344_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_343_, v___f_342_, v_levelMap_333_, v_uidx_327_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_345_ = lean_box(0);
v___x_346_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_343_, v___f_342_, v_levelMap_333_, v_uidx_327_, v_l_328_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 2, v___x_346_);
v___x_348_ = v___x_340_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_stream_331_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_nameMap_332_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_351_, 3, v_exprMap_334_);
lean_ctor_set(v_reuseFailAlloc_351_, 4, v_recursorRuleMap_335_);
lean_ctor_set(v_reuseFailAlloc_351_, 5, v_constMap_336_);
lean_ctor_set(v_reuseFailAlloc_351_, 6, v_constOrder_337_);
lean_ctor_set(v_reuseFailAlloc_351_, 7, v_rewrites_338_);
v___x_348_ = v_reuseFailAlloc_351_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_345_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_del_object(v___x_340_);
lean_dec_ref(v_rewrites_338_);
lean_dec_ref(v_constOrder_337_);
lean_dec_ref(v_constMap_336_);
lean_dec_ref(v_recursorRuleMap_335_);
lean_dec_ref(v_exprMap_334_);
lean_dec_ref(v_levelMap_333_);
lean_dec_ref(v_nameMap_332_);
lean_dec_ref(v_stream_331_);
lean_dec(v_l_328_);
v___x_352_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0));
v___x_353_ = l_Nat_reprFast(v_uidx_327_);
v___x_354_ = lean_string_append(v___x_352_, v___x_353_);
lean_dec_ref(v___x_353_);
v___x_355_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_356_ = lean_string_append(v___x_354_, v___x_355_);
v___x_357_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___boxed(lean_object* v_uidx_360_, lean_object* v_l_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel(v_uidx_360_, v_l_361_, v_a_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(lean_object* v_eidx_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_exprMap_369_; lean_object* v___f_370_; lean_object* v___f_371_; lean_object* v___x_372_; 
v_exprMap_369_ = lean_ctor_get(v_a_367_, 3);
v___f_370_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_371_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_eidx_366_);
v___x_372_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_371_, v___f_370_, v_exprMap_369_, v_eidx_366_);
if (lean_obj_tag(v___x_372_) == 1)
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_eidx_366_);
v_val_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_381_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v_val_373_);
lean_ctor_set(v___x_377_, 1, v_a_367_);
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 0);
lean_ctor_set(v___x_375_, 0, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
else
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec(v___x_372_);
lean_dec_ref(v_a_367_);
v___x_382_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_383_ = l_Nat_reprFast(v_eidx_366_);
v___x_384_ = lean_string_append(v___x_382_, v___x_383_);
lean_dec_ref(v___x_383_);
v___x_385_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___boxed(lean_object* v_eidx_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr(v_eidx_387_, v_a_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(lean_object* v_eidx_392_, lean_object* v_e_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_stream_396_; lean_object* v_nameMap_397_; lean_object* v_levelMap_398_; lean_object* v_exprMap_399_; lean_object* v_recursorRuleMap_400_; lean_object* v_constMap_401_; lean_object* v_constOrder_402_; lean_object* v_rewrites_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_424_; 
v_stream_396_ = lean_ctor_get(v_a_394_, 0);
v_nameMap_397_ = lean_ctor_get(v_a_394_, 1);
v_levelMap_398_ = lean_ctor_get(v_a_394_, 2);
v_exprMap_399_ = lean_ctor_get(v_a_394_, 3);
v_recursorRuleMap_400_ = lean_ctor_get(v_a_394_, 4);
v_constMap_401_ = lean_ctor_get(v_a_394_, 5);
v_constOrder_402_ = lean_ctor_get(v_a_394_, 6);
v_rewrites_403_ = lean_ctor_get(v_a_394_, 7);
v_isSharedCheck_424_ = !lean_is_exclusive(v_a_394_);
if (v_isSharedCheck_424_ == 0)
{
v___x_405_ = v_a_394_;
v_isShared_406_ = v_isSharedCheck_424_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_rewrites_403_);
lean_inc(v_constOrder_402_);
lean_inc(v_constMap_401_);
lean_inc(v_recursorRuleMap_400_);
lean_inc(v_exprMap_399_);
lean_inc(v_levelMap_398_);
lean_inc(v_nameMap_397_);
lean_inc(v_stream_396_);
lean_dec(v_a_394_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_424_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___f_407_; lean_object* v___f_408_; uint8_t v___x_409_; 
v___f_407_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_408_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_eidx_392_);
v___x_409_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_408_, v___f_407_, v_exprMap_399_, v_eidx_392_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_410_ = lean_box(0);
v___x_411_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_408_, v___f_407_, v_exprMap_399_, v_eidx_392_, v_e_393_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 3, v___x_411_);
v___x_413_ = v___x_405_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_stream_396_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_nameMap_397_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_levelMap_398_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v_recursorRuleMap_400_);
lean_ctor_set(v_reuseFailAlloc_416_, 5, v_constMap_401_);
lean_ctor_set(v_reuseFailAlloc_416_, 6, v_constOrder_402_);
lean_ctor_set(v_reuseFailAlloc_416_, 7, v_rewrites_403_);
v___x_413_ = v_reuseFailAlloc_416_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_410_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
lean_del_object(v___x_405_);
lean_dec_ref(v_rewrites_403_);
lean_dec_ref(v_constOrder_402_);
lean_dec_ref(v_constMap_401_);
lean_dec_ref(v_recursorRuleMap_400_);
lean_dec_ref(v_exprMap_399_);
lean_dec_ref(v_levelMap_398_);
lean_dec_ref(v_nameMap_397_);
lean_dec_ref(v_stream_396_);
lean_dec_ref(v_e_393_);
v___x_417_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_418_ = l_Nat_reprFast(v_eidx_392_);
v___x_419_ = lean_string_append(v___x_417_, v___x_418_);
lean_dec_ref(v___x_418_);
v___x_420_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_421_ = lean_string_append(v___x_419_, v___x_420_);
v___x_422_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
v___x_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___boxed(lean_object* v_eidx_425_, lean_object* v_e_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr(v_eidx_425_, v_e_426_, v_a_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(lean_object* v_ridx_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_recursorRuleMap_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___x_437_; 
v_recursorRuleMap_434_ = lean_ctor_get(v_a_432_, 4);
v___f_435_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_436_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_ridx_431_);
v___x_437_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_436_, v___f_435_, v_recursorRuleMap_434_, v_ridx_431_);
if (lean_obj_tag(v___x_437_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_446_; 
lean_dec(v_ridx_431_);
v_val_438_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_446_ == 0)
{
v___x_440_ = v___x_437_;
v_isShared_441_ = v_isSharedCheck_446_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v___x_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_446_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v_val_438_);
lean_ctor_set(v___x_442_, 1, v_a_432_);
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 0);
lean_ctor_set(v___x_440_, 0, v___x_442_);
v___x_444_ = v___x_440_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v___x_437_);
lean_dec_ref(v_a_432_);
v___x_447_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___closed__0));
v___x_448_ = l_Nat_reprFast(v_ridx_431_);
v___x_449_ = lean_string_append(v___x_447_, v___x_448_);
lean_dec_ref(v___x_448_);
v___x_450_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule___boxed(lean_object* v_ridx_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getRecursorRule(v_ridx_452_, v_a_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(lean_object* v_ridx_457_, lean_object* v_r_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_stream_461_; lean_object* v_nameMap_462_; lean_object* v_levelMap_463_; lean_object* v_exprMap_464_; lean_object* v_recursorRuleMap_465_; lean_object* v_constMap_466_; lean_object* v_constOrder_467_; lean_object* v_rewrites_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_489_; 
v_stream_461_ = lean_ctor_get(v_a_459_, 0);
v_nameMap_462_ = lean_ctor_get(v_a_459_, 1);
v_levelMap_463_ = lean_ctor_get(v_a_459_, 2);
v_exprMap_464_ = lean_ctor_get(v_a_459_, 3);
v_recursorRuleMap_465_ = lean_ctor_get(v_a_459_, 4);
v_constMap_466_ = lean_ctor_get(v_a_459_, 5);
v_constOrder_467_ = lean_ctor_get(v_a_459_, 6);
v_rewrites_468_ = lean_ctor_get(v_a_459_, 7);
v_isSharedCheck_489_ = !lean_is_exclusive(v_a_459_);
if (v_isSharedCheck_489_ == 0)
{
v___x_470_ = v_a_459_;
v_isShared_471_ = v_isSharedCheck_489_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_rewrites_468_);
lean_inc(v_constOrder_467_);
lean_inc(v_constMap_466_);
lean_inc(v_recursorRuleMap_465_);
lean_inc(v_exprMap_464_);
lean_inc(v_levelMap_463_);
lean_inc(v_nameMap_462_);
lean_inc(v_stream_461_);
lean_dec(v_a_459_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_489_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___f_472_; lean_object* v___f_473_; uint8_t v___x_474_; 
v___f_472_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__0));
v___f_473_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1, &l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__1);
lean_inc(v_ridx_457_);
v___x_474_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_473_, v___f_472_, v_recursorRuleMap_465_, v_ridx_457_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_475_ = lean_box(0);
v___x_476_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_473_, v___f_472_, v_recursorRuleMap_465_, v_ridx_457_, v_r_458_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 4, v___x_476_);
v___x_478_ = v___x_470_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_stream_461_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_nameMap_462_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_levelMap_463_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_exprMap_464_);
lean_ctor_set(v_reuseFailAlloc_481_, 4, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_481_, 5, v_constMap_466_);
lean_ctor_set(v_reuseFailAlloc_481_, 6, v_constOrder_467_);
lean_ctor_set(v_reuseFailAlloc_481_, 7, v_rewrites_468_);
v___x_478_ = v_reuseFailAlloc_481_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_475_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_del_object(v___x_470_);
lean_dec_ref(v_rewrites_468_);
lean_dec_ref(v_constOrder_467_);
lean_dec_ref(v_constMap_466_);
lean_dec_ref(v_recursorRuleMap_465_);
lean_dec_ref(v_exprMap_464_);
lean_dec_ref(v_levelMap_463_);
lean_dec_ref(v_nameMap_462_);
lean_dec_ref(v_stream_461_);
lean_dec_ref(v_r_458_);
v___x_482_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___closed__0));
v___x_483_ = l_Nat_reprFast(v_ridx_457_);
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
lean_dec_ref(v___x_483_);
v___x_485_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_486_ = lean_string_append(v___x_484_, v___x_485_);
v___x_487_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
v___x_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
return v___x_488_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule___boxed(lean_object* v_ridx_490_, lean_object* v_r_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addRecursorRule(v_ridx_490_, v_r_491_, v_a_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(lean_object* v_name_498_, lean_object* v_d_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_stream_502_; lean_object* v_nameMap_503_; lean_object* v_levelMap_504_; lean_object* v_exprMap_505_; lean_object* v_recursorRuleMap_506_; lean_object* v_constMap_507_; lean_object* v_constOrder_508_; lean_object* v_rewrites_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_529_; 
v_stream_502_ = lean_ctor_get(v_a_500_, 0);
v_nameMap_503_ = lean_ctor_get(v_a_500_, 1);
v_levelMap_504_ = lean_ctor_get(v_a_500_, 2);
v_exprMap_505_ = lean_ctor_get(v_a_500_, 3);
v_recursorRuleMap_506_ = lean_ctor_get(v_a_500_, 4);
v_constMap_507_ = lean_ctor_get(v_a_500_, 5);
v_constOrder_508_ = lean_ctor_get(v_a_500_, 6);
v_rewrites_509_ = lean_ctor_get(v_a_500_, 7);
v_isSharedCheck_529_ = !lean_is_exclusive(v_a_500_);
if (v_isSharedCheck_529_ == 0)
{
v___x_511_ = v_a_500_;
v_isShared_512_ = v_isSharedCheck_529_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_rewrites_509_);
lean_inc(v_constOrder_508_);
lean_inc(v_constMap_507_);
lean_inc(v_recursorRuleMap_506_);
lean_inc(v_exprMap_505_);
lean_inc(v_levelMap_504_);
lean_inc(v_nameMap_503_);
lean_inc(v_stream_502_);
lean_dec(v_a_500_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_529_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_513_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__0));
v___x_514_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__1));
lean_inc(v_name_498_);
v___x_515_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_513_, v___x_514_, v_constMap_507_, v_name_498_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_516_ = lean_box(0);
lean_inc(v_name_498_);
v___x_517_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_513_, v___x_514_, v_constMap_507_, v_name_498_, v_d_499_);
v___x_518_ = lean_array_push(v_constOrder_508_, v_name_498_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 6, v___x_518_);
lean_ctor_set(v___x_511_, 5, v___x_517_);
v___x_520_ = v___x_511_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_stream_502_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_nameMap_503_);
lean_ctor_set(v_reuseFailAlloc_523_, 2, v_levelMap_504_);
lean_ctor_set(v_reuseFailAlloc_523_, 3, v_exprMap_505_);
lean_ctor_set(v_reuseFailAlloc_523_, 4, v_recursorRuleMap_506_);
lean_ctor_set(v_reuseFailAlloc_523_, 5, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_523_, 6, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_523_, 7, v_rewrites_509_);
v___x_520_ = v_reuseFailAlloc_523_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_516_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
lean_del_object(v___x_511_);
lean_dec_ref(v_rewrites_509_);
lean_dec_ref(v_constOrder_508_);
lean_dec_ref(v_constMap_507_);
lean_dec_ref(v_recursorRuleMap_506_);
lean_dec_ref(v_exprMap_505_);
lean_dec_ref(v_levelMap_504_);
lean_dec_ref(v_nameMap_503_);
lean_dec_ref(v_stream_502_);
lean_dec_ref(v_d_499_);
v___x_524_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_525_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_498_, v___x_515_);
v___x_526_ = lean_string_append(v___x_524_, v___x_525_);
lean_dec_ref(v___x_525_);
v___x_527_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___boxed(lean_object* v_name_530_, lean_object* v_d_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l___private_LeanExport_Parse_0__LeanExport_Parse_addConst(v_name_530_, v_d_531_, v_a_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(lean_object* v_line_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Json_parse(v_line_539_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_553_; 
lean_dec_ref(v_a_540_);
v_a_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_553_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_547_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0));
v___x_548_ = lean_string_append(v___x_547_, v_a_543_);
lean_dec(v_a_543_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 18);
lean_ctor_set(v___x_545_, 0, v___x_548_);
v___x_550_ = v___x_545_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_548_);
v___x_550_ = v_reuseFailAlloc_552_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; 
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_571_; 
v_a_554_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_571_ == 0)
{
v___x_556_ = v___x_542_;
v_isShared_557_ = v_isSharedCheck_571_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_542_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_571_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
if (lean_obj_tag(v_a_554_) == 5)
{
lean_object* v_kvPairs_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_556_);
v_kvPairs_558_ = lean_ctor_get(v_a_554_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v_a_554_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v_a_554_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_kvPairs_558_);
lean_dec(v_a_554_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v_kvPairs_558_);
lean_ctor_set(v___x_562_, 1, v_a_540_);
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 0);
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_569_; 
lean_dec(v_a_554_);
lean_dec_ref(v_a_540_);
v___x_567_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2));
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_567_);
v___x_569_ = v___x_556_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___boxed(lean_object* v_line_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj(v_line_572_, v_a_573_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
if (lean_obj_tag(v_x_577_) == 0)
{
lean_object* v___x_578_; 
v___x_578_ = lean_box(0);
return v___x_578_;
}
else
{
lean_object* v_key_579_; lean_object* v_value_580_; lean_object* v_tail_581_; uint8_t v___x_582_; 
v_key_579_ = lean_ctor_get(v_x_577_, 0);
v_value_580_ = lean_ctor_get(v_x_577_, 1);
v_tail_581_ = lean_ctor_get(v_x_577_, 2);
v___x_582_ = lean_nat_dec_eq(v_key_579_, v_a_576_);
if (v___x_582_ == 0)
{
v_x_577_ = v_tail_581_;
goto _start;
}
else
{
lean_object* v___x_584_; 
lean_inc(v_value_580_);
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v_value_580_);
return v___x_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg___boxed(lean_object* v_a_585_, lean_object* v_x_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_585_, v_x_586_);
lean_dec(v_x_586_);
lean_dec(v_a_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(lean_object* v_m_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_buckets_590_; lean_object* v___x_591_; uint64_t v___x_592_; uint64_t v___x_593_; uint64_t v___x_594_; uint64_t v_fold_595_; uint64_t v___x_596_; uint64_t v___x_597_; uint64_t v___x_598_; size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_buckets_590_ = lean_ctor_get(v_m_588_, 1);
v___x_591_ = lean_array_get_size(v_buckets_590_);
v___x_592_ = lean_uint64_of_nat(v_a_589_);
v___x_593_ = 32ULL;
v___x_594_ = lean_uint64_shift_right(v___x_592_, v___x_593_);
v_fold_595_ = lean_uint64_xor(v___x_592_, v___x_594_);
v___x_596_ = 16ULL;
v___x_597_ = lean_uint64_shift_right(v_fold_595_, v___x_596_);
v___x_598_ = lean_uint64_xor(v_fold_595_, v___x_597_);
v___x_599_ = lean_uint64_to_usize(v___x_598_);
v___x_600_ = lean_usize_of_nat(v___x_591_);
v___x_601_ = ((size_t)1ULL);
v___x_602_ = lean_usize_sub(v___x_600_, v___x_601_);
v___x_603_ = lean_usize_land(v___x_599_, v___x_602_);
v___x_604_ = lean_array_uget_borrowed(v_buckets_590_, v___x_603_);
v___x_605_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_589_, v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg___boxed(lean_object* v_m_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_m_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_m_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(lean_object* v_t_609_, lean_object* v_k_610_){
_start:
{
if (lean_obj_tag(v_t_609_) == 0)
{
lean_object* v_k_611_; lean_object* v_v_612_; lean_object* v_l_613_; lean_object* v_r_614_; uint8_t v___x_615_; 
v_k_611_ = lean_ctor_get(v_t_609_, 1);
v_v_612_ = lean_ctor_get(v_t_609_, 2);
v_l_613_ = lean_ctor_get(v_t_609_, 3);
v_r_614_ = lean_ctor_get(v_t_609_, 4);
v___x_615_ = lean_string_compare(v_k_610_, v_k_611_);
switch(v___x_615_)
{
case 0:
{
v_t_609_ = v_l_613_;
goto _start;
}
case 1:
{
lean_object* v___x_617_; 
lean_inc(v_v_612_);
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v_v_612_);
return v___x_617_;
}
default: 
{
v_t_609_ = v_r_614_;
goto _start;
}
}
}
else
{
lean_object* v___x_619_; 
v___x_619_ = lean_box(0);
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg___boxed(lean_object* v_t_620_, lean_object* v_k_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_t_620_, v_k_621_);
lean_dec_ref(v_k_621_);
lean_dec(v_t_620_);
return v_res_622_;
}
}
static lean_object* _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3(void){
_start:
{
lean_object* v_natZero_627_; lean_object* v_intZero_628_; 
v_natZero_627_ = lean_unsigned_to_nat(0u);
v_intZero_628_ = lean_nat_to_int(v_natZero_627_);
return v_intZero_628_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(lean_object* v_json_630_, lean_object* v_a_631_){
_start:
{
if (lean_obj_tag(v_json_630_) == 5)
{
lean_object* v_kvPairs_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_kvPairs_639_ = lean_ctor_get(v_json_630_, 0);
v___x_640_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2));
v___x_641_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_639_, v___x_640_);
if (lean_obj_tag(v___x_641_) == 1)
{
lean_object* v_val_642_; 
v_val_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_val_642_);
lean_dec_ref_known(v___x_641_, 1);
if (lean_obj_tag(v_val_642_) == 2)
{
lean_object* v_n_643_; lean_object* v_mantissa_644_; lean_object* v_exponent_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_689_; 
v_n_643_ = lean_ctor_get(v_val_642_, 0);
lean_inc_ref(v_n_643_);
lean_dec_ref_known(v_val_642_, 1);
v_mantissa_644_ = lean_ctor_get(v_n_643_, 0);
v_exponent_645_ = lean_ctor_get(v_n_643_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v_n_643_);
if (v_isSharedCheck_689_ == 0)
{
v___x_647_ = v_n_643_;
v_isShared_648_ = v_isSharedCheck_689_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_exponent_645_);
lean_inc(v_mantissa_644_);
lean_dec(v_n_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_689_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_natZero_649_; lean_object* v_intZero_650_; uint8_t v_isNeg_651_; 
v_natZero_649_ = lean_unsigned_to_nat(0u);
v_intZero_650_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_651_ = lean_int_dec_lt(v_mantissa_644_, v_intZero_650_);
if (v_isNeg_651_ == 0)
{
uint8_t v___x_652_; 
v___x_652_ = lean_nat_dec_eq(v_exponent_645_, v_natZero_649_);
lean_dec(v_exponent_645_);
if (v___x_652_ == 0)
{
lean_del_object(v___x_647_);
lean_dec(v_mantissa_644_);
lean_dec_ref(v_a_631_);
goto v___jp_633_;
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4));
v___x_654_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_639_, v___x_653_);
if (lean_obj_tag(v___x_654_) == 1)
{
lean_object* v_val_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_688_; 
v_val_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_688_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_688_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_val_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_688_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
if (lean_obj_tag(v_val_655_) == 3)
{
lean_object* v_s_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_687_; 
v_s_659_ = lean_ctor_get(v_val_655_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v_val_655_);
if (v_isSharedCheck_687_ == 0)
{
v___x_661_ = v_val_655_;
v_isShared_662_ = v_isSharedCheck_687_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_s_659_);
lean_dec(v_val_655_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_687_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_nameMap_663_; lean_object* v_a_664_; lean_object* v___x_665_; 
v_nameMap_663_ = lean_ctor_get(v_a_631_, 1);
v_a_664_ = lean_nat_abs(v_mantissa_644_);
lean_dec(v_mantissa_644_);
v___x_665_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_663_, v_a_664_);
if (lean_obj_tag(v___x_665_) == 1)
{
lean_object* v_val_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_677_; 
lean_dec(v_a_664_);
lean_del_object(v___x_661_);
lean_del_object(v___x_657_);
v_val_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_677_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_677_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_val_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_677_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_670_ = l_Lean_Name_str___override(v_val_666_, v_s_659_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_a_631_);
lean_ctor_set(v___x_647_, 0, v___x_670_);
v___x_672_ = v___x_647_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_a_631_);
v___x_672_ = v_reuseFailAlloc_676_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_674_; 
if (v_isShared_669_ == 0)
{
lean_ctor_set_tag(v___x_668_, 0);
lean_ctor_set(v___x_668_, 0, v___x_672_);
v___x_674_ = v___x_668_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
lean_dec(v___x_665_);
lean_dec_ref(v_s_659_);
lean_del_object(v___x_647_);
lean_dec_ref(v_a_631_);
v___x_678_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_679_ = l_Nat_reprFast(v_a_664_);
v___x_680_ = lean_string_append(v___x_678_, v___x_679_);
lean_dec_ref(v___x_679_);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 18);
lean_ctor_set(v___x_661_, 0, v___x_680_);
v___x_682_ = v___x_661_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_686_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_684_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v___x_682_);
v___x_684_ = v___x_657_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
else
{
lean_del_object(v___x_657_);
lean_dec(v_val_655_);
lean_del_object(v___x_647_);
lean_dec(v_mantissa_644_);
lean_dec_ref(v_a_631_);
goto v___jp_636_;
}
}
}
else
{
lean_dec(v___x_654_);
lean_del_object(v___x_647_);
lean_dec(v_mantissa_644_);
lean_dec_ref(v_a_631_);
goto v___jp_636_;
}
}
}
else
{
lean_del_object(v___x_647_);
lean_dec(v_exponent_645_);
lean_dec(v_mantissa_644_);
lean_dec_ref(v_a_631_);
goto v___jp_633_;
}
}
}
else
{
lean_dec(v_val_642_);
lean_dec_ref(v_a_631_);
goto v___jp_633_;
}
}
else
{
lean_dec(v___x_641_);
lean_dec_ref(v_a_631_);
goto v___jp_633_;
}
}
else
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec_ref(v_a_631_);
v___x_690_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
v___jp_633_:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
return v___x_635_;
}
v___jp_636_:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___boxed(lean_object* v_json_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(v_json_692_, v_a_693_);
lean_dec(v_json_692_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(lean_object* v_00_u03b4_696_, lean_object* v_t_697_, lean_object* v_k_698_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_t_697_, v_k_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___boxed(lean_object* v_00_u03b4_700_, lean_object* v_t_701_, lean_object* v_k_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0(v_00_u03b4_700_, v_t_701_, v_k_702_);
lean_dec_ref(v_k_702_);
lean_dec(v_t_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(lean_object* v_00_u03b2_704_, lean_object* v_m_705_, lean_object* v_a_706_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_m_705_, v_a_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___boxed(lean_object* v_00_u03b2_708_, lean_object* v_m_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1(v_00_u03b2_708_, v_m_709_, v_a_710_);
lean_dec(v_a_710_);
lean_dec_ref(v_m_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(lean_object* v_00_u03b2_712_, lean_object* v_a_713_, lean_object* v_x_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___redArg(v_a_713_, v_x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1___boxed(lean_object* v_00_u03b2_716_, lean_object* v_a_717_, lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1_spec__1(v_00_u03b2_716_, v_a_717_, v_x_718_);
lean_dec(v_x_718_);
lean_dec(v_a_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(lean_object* v_json_724_, lean_object* v_a_725_){
_start:
{
if (lean_obj_tag(v_json_724_) == 5)
{
lean_object* v_kvPairs_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_kvPairs_733_ = lean_ctor_get(v_json_724_, 0);
v___x_734_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__2));
v___x_735_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_733_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 1)
{
lean_object* v_val_736_; 
v_val_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_val_736_);
lean_dec_ref_known(v___x_735_, 1);
if (lean_obj_tag(v_val_736_) == 2)
{
lean_object* v_n_737_; lean_object* v_mantissa_738_; lean_object* v_exponent_739_; lean_object* v_natZero_740_; lean_object* v_intZero_741_; uint8_t v_isNeg_742_; 
v_n_737_ = lean_ctor_get(v_val_736_, 0);
lean_inc_ref(v_n_737_);
lean_dec_ref_known(v_val_736_, 1);
v_mantissa_738_ = lean_ctor_get(v_n_737_, 0);
lean_inc(v_mantissa_738_);
v_exponent_739_ = lean_ctor_get(v_n_737_, 1);
lean_inc(v_exponent_739_);
lean_dec_ref(v_n_737_);
v_natZero_740_ = lean_unsigned_to_nat(0u);
v_intZero_741_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_742_ = lean_int_dec_lt(v_mantissa_738_, v_intZero_741_);
if (v_isNeg_742_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = lean_nat_dec_eq(v_exponent_739_, v_natZero_740_);
lean_dec(v_exponent_739_);
if (v___x_743_ == 0)
{
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_727_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__2));
v___x_745_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_733_, v___x_744_);
if (lean_obj_tag(v___x_745_) == 1)
{
lean_object* v_val_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_788_; 
v_val_746_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_788_ == 0)
{
v___x_748_ = v___x_745_;
v_isShared_749_ = v_isSharedCheck_788_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_val_746_);
lean_dec(v___x_745_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_788_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
if (lean_obj_tag(v_val_746_) == 2)
{
lean_object* v_n_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_787_; 
v_n_750_ = lean_ctor_get(v_val_746_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v_val_746_);
if (v_isSharedCheck_787_ == 0)
{
v___x_752_ = v_val_746_;
v_isShared_753_ = v_isSharedCheck_787_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_n_750_);
lean_dec(v_val_746_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_787_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_mantissa_754_; lean_object* v_exponent_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_786_; 
v_mantissa_754_ = lean_ctor_get(v_n_750_, 0);
v_exponent_755_ = lean_ctor_get(v_n_750_, 1);
v_isSharedCheck_786_ = !lean_is_exclusive(v_n_750_);
if (v_isSharedCheck_786_ == 0)
{
v___x_757_ = v_n_750_;
v_isShared_758_ = v_isSharedCheck_786_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_exponent_755_);
lean_inc(v_mantissa_754_);
lean_dec(v_n_750_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_786_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
uint8_t v_isNeg_759_; 
v_isNeg_759_ = lean_int_dec_lt(v_mantissa_754_, v_intZero_741_);
if (v_isNeg_759_ == 0)
{
uint8_t v___x_760_; 
v___x_760_ = lean_nat_dec_eq(v_exponent_755_, v_natZero_740_);
lean_dec(v_exponent_755_);
if (v___x_760_ == 0)
{
lean_del_object(v___x_757_);
lean_dec(v_mantissa_754_);
lean_del_object(v___x_752_);
lean_del_object(v___x_748_);
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_730_;
}
else
{
lean_object* v_nameMap_761_; lean_object* v_a_762_; lean_object* v___x_763_; 
v_nameMap_761_ = lean_ctor_get(v_a_725_, 1);
v_a_762_ = lean_nat_abs(v_mantissa_738_);
lean_dec(v_mantissa_738_);
v___x_763_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_761_, v_a_762_);
if (lean_obj_tag(v___x_763_) == 1)
{
lean_object* v_val_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_762_);
lean_del_object(v___x_752_);
lean_del_object(v___x_748_);
v_val_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_776_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_val_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v_a_768_ = lean_nat_abs(v_mantissa_754_);
lean_dec(v_mantissa_754_);
v___x_769_ = l_Lean_Name_num___override(v_val_764_, v_a_768_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 1, v_a_725_);
lean_ctor_set(v___x_757_, 0, v___x_769_);
v___x_771_ = v___x_757_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_a_725_);
v___x_771_ = v_reuseFailAlloc_775_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_773_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v___x_771_);
v___x_773_ = v___x_766_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
lean_dec(v___x_763_);
lean_del_object(v___x_757_);
lean_dec(v_mantissa_754_);
lean_dec_ref(v_a_725_);
v___x_777_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_778_ = l_Nat_reprFast(v_a_762_);
v___x_779_ = lean_string_append(v___x_777_, v___x_778_);
lean_dec_ref(v___x_778_);
if (v_isShared_753_ == 0)
{
lean_ctor_set_tag(v___x_752_, 18);
lean_ctor_set(v___x_752_, 0, v___x_779_);
v___x_781_ = v___x_752_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_785_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_783_; 
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 0, v___x_781_);
v___x_783_ = v___x_748_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
else
{
lean_del_object(v___x_757_);
lean_dec(v_exponent_755_);
lean_dec(v_mantissa_754_);
lean_del_object(v___x_752_);
lean_del_object(v___x_748_);
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_730_;
}
}
}
}
else
{
lean_del_object(v___x_748_);
lean_dec(v_val_746_);
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_730_;
}
}
}
else
{
lean_dec(v___x_745_);
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_730_;
}
}
}
else
{
lean_dec(v_exponent_739_);
lean_dec(v_mantissa_738_);
lean_dec_ref(v_a_725_);
goto v___jp_727_;
}
}
else
{
lean_dec(v_val_736_);
lean_dec_ref(v_a_725_);
goto v___jp_727_;
}
}
else
{
lean_dec(v___x_735_);
lean_dec_ref(v_a_725_);
goto v___jp_727_;
}
}
else
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref(v_a_725_);
v___x_789_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1));
v___x_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
return v___x_790_;
}
v___jp_727_:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__1));
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
v___jp_730_:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___closed__1));
v___x_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum___boxed(lean_object* v_json_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(v_json_791_, v_a_792_);
lean_dec(v_json_791_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(lean_object* v_json_798_, lean_object* v_a_799_){
_start:
{
if (lean_obj_tag(v_json_798_) == 2)
{
lean_object* v_n_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_840_; 
v_n_804_ = lean_ctor_get(v_json_798_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v_json_798_);
if (v_isSharedCheck_840_ == 0)
{
v___x_806_ = v_json_798_;
v_isShared_807_ = v_isSharedCheck_840_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_n_804_);
lean_dec(v_json_798_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_840_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_mantissa_808_; lean_object* v_exponent_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_839_; 
v_mantissa_808_ = lean_ctor_get(v_n_804_, 0);
v_exponent_809_ = lean_ctor_get(v_n_804_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_n_804_);
if (v_isSharedCheck_839_ == 0)
{
v___x_811_ = v_n_804_;
v_isShared_812_ = v_isSharedCheck_839_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_exponent_809_);
lean_inc(v_mantissa_808_);
lean_dec(v_n_804_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_839_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v_natZero_813_; lean_object* v_intZero_814_; uint8_t v_isNeg_815_; 
v_natZero_813_ = lean_unsigned_to_nat(0u);
v_intZero_814_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_815_ = lean_int_dec_lt(v_mantissa_808_, v_intZero_814_);
if (v_isNeg_815_ == 0)
{
uint8_t v___x_816_; 
v___x_816_ = lean_nat_dec_eq(v_exponent_809_, v_natZero_813_);
lean_dec(v_exponent_809_);
if (v___x_816_ == 0)
{
lean_del_object(v___x_811_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_799_);
goto v___jp_801_;
}
else
{
lean_object* v_levelMap_817_; lean_object* v_a_818_; lean_object* v___x_819_; 
v_levelMap_817_ = lean_ctor_get(v_a_799_, 2);
v_a_818_ = lean_nat_abs(v_mantissa_808_);
lean_dec(v_mantissa_808_);
v___x_819_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_817_, v_a_818_);
if (lean_obj_tag(v___x_819_) == 1)
{
lean_object* v_val_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_818_);
lean_del_object(v___x_806_);
v_val_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_831_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_831_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_val_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_831_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = l_Lean_Level_succ___override(v_val_820_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 1, v_a_799_);
lean_ctor_set(v___x_811_, 0, v___x_824_);
v___x_826_ = v___x_811_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v_a_799_);
v___x_826_ = v_reuseFailAlloc_830_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_828_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set_tag(v___x_822_, 0);
lean_ctor_set(v___x_822_, 0, v___x_826_);
v___x_828_ = v___x_822_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
lean_dec(v___x_819_);
lean_del_object(v___x_811_);
lean_dec_ref(v_a_799_);
v___x_832_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_833_ = l_Nat_reprFast(v_a_818_);
v___x_834_ = lean_string_append(v___x_832_, v___x_833_);
lean_dec_ref(v___x_833_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 18);
lean_ctor_set(v___x_806_, 0, v___x_834_);
v___x_836_ = v___x_806_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_838_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; 
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
}
}
else
{
lean_del_object(v___x_811_);
lean_dec(v_exponent_809_);
lean_dec(v_mantissa_808_);
lean_del_object(v___x_806_);
lean_dec_ref(v_a_799_);
goto v___jp_801_;
}
}
}
}
else
{
lean_dec_ref(v_a_799_);
lean_dec(v_json_798_);
goto v___jp_801_;
}
v___jp_801_:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___closed__1));
v___x_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc___boxed(lean_object* v_json_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(v_json_841_, v_a_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(lean_object* v_json_848_, lean_object* v_a_849_){
_start:
{
if (lean_obj_tag(v_json_848_) == 4)
{
lean_object* v_elems_854_; lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_elems_854_ = lean_ctor_get(v_json_848_, 0);
v___x_855_ = lean_array_get_size(v_elems_854_);
v___x_856_ = lean_unsigned_to_nat(2u);
v___x_857_ = lean_nat_dec_eq(v___x_855_, v___x_856_);
if (v___x_857_ == 0)
{
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = lean_array_fget(v_elems_854_, v___x_858_);
if (lean_obj_tag(v___x_859_) == 2)
{
lean_object* v_n_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_924_; 
v_n_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_924_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_924_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_n_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_924_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v_mantissa_864_; lean_object* v_exponent_865_; lean_object* v_intZero_866_; uint8_t v_isNeg_867_; 
v_mantissa_864_ = lean_ctor_get(v_n_860_, 0);
lean_inc(v_mantissa_864_);
v_exponent_865_ = lean_ctor_get(v_n_860_, 1);
lean_inc(v_exponent_865_);
lean_dec_ref(v_n_860_);
v_intZero_866_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_867_ = lean_int_dec_lt(v_mantissa_864_, v_intZero_866_);
if (v_isNeg_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = lean_nat_dec_eq(v_exponent_865_, v___x_858_);
lean_dec(v_exponent_865_);
if (v___x_868_ == 0)
{
lean_dec(v_mantissa_864_);
lean_del_object(v___x_862_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_unsigned_to_nat(1u);
v___x_870_ = lean_array_fget(v_elems_854_, v___x_869_);
if (lean_obj_tag(v___x_870_) == 2)
{
lean_object* v_n_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_923_; 
v_n_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_923_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_923_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_n_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_923_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v_mantissa_875_; lean_object* v_exponent_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_922_; 
v_mantissa_875_ = lean_ctor_get(v_n_871_, 0);
v_exponent_876_ = lean_ctor_get(v_n_871_, 1);
v_isSharedCheck_922_ = !lean_is_exclusive(v_n_871_);
if (v_isSharedCheck_922_ == 0)
{
v___x_878_ = v_n_871_;
v_isShared_879_ = v_isSharedCheck_922_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_exponent_876_);
lean_inc(v_mantissa_875_);
lean_dec(v_n_871_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_922_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
uint8_t v_isNeg_880_; 
v_isNeg_880_ = lean_int_dec_lt(v_mantissa_875_, v_intZero_866_);
if (v_isNeg_880_ == 0)
{
uint8_t v___x_881_; 
v___x_881_ = lean_nat_dec_eq(v_exponent_876_, v___x_858_);
lean_dec(v_exponent_876_);
if (v___x_881_ == 0)
{
lean_del_object(v___x_878_);
lean_dec(v_mantissa_875_);
lean_del_object(v___x_873_);
lean_dec(v_mantissa_864_);
lean_del_object(v___x_862_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
else
{
lean_object* v_levelMap_882_; lean_object* v_a_883_; lean_object* v___x_884_; 
v_levelMap_882_ = lean_ctor_get(v_a_849_, 2);
v_a_883_ = lean_nat_abs(v_mantissa_864_);
lean_dec(v_mantissa_864_);
v___x_884_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_882_, v_a_883_);
if (lean_obj_tag(v___x_884_) == 1)
{
lean_object* v_val_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_912_; 
lean_dec(v_a_883_);
lean_del_object(v___x_862_);
v_val_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_912_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_912_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_val_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_912_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_889_ = lean_nat_abs(v_mantissa_875_);
lean_dec(v_mantissa_875_);
v___x_890_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_882_, v_a_889_);
if (lean_obj_tag(v___x_890_) == 1)
{
lean_object* v_val_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_a_889_);
lean_del_object(v___x_887_);
lean_del_object(v___x_873_);
v_val_891_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_902_ == 0)
{
v___x_893_ = v___x_890_;
v_isShared_894_ = v_isSharedCheck_902_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_val_891_);
lean_dec(v___x_890_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_902_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_895_ = l_Lean_Level_max___override(v_val_885_, v_val_891_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 1, v_a_849_);
lean_ctor_set(v___x_878_, 0, v___x_895_);
v___x_897_ = v___x_878_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_895_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_a_849_);
v___x_897_ = v_reuseFailAlloc_901_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
lean_object* v___x_899_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set_tag(v___x_893_, 0);
lean_ctor_set(v___x_893_, 0, v___x_897_);
v___x_899_ = v___x_893_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_907_; 
lean_dec(v___x_890_);
lean_dec(v_val_885_);
lean_del_object(v___x_878_);
lean_dec_ref(v_a_849_);
v___x_903_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_904_ = l_Nat_reprFast(v_a_889_);
v___x_905_ = lean_string_append(v___x_903_, v___x_904_);
lean_dec_ref(v___x_904_);
if (v_isShared_888_ == 0)
{
lean_ctor_set_tag(v___x_887_, 18);
lean_ctor_set(v___x_887_, 0, v___x_905_);
v___x_907_ = v___x_887_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_911_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
lean_object* v___x_909_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set_tag(v___x_873_, 1);
lean_ctor_set(v___x_873_, 0, v___x_907_);
v___x_909_ = v___x_873_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
lean_dec(v___x_884_);
lean_del_object(v___x_878_);
lean_dec(v_mantissa_875_);
lean_dec_ref(v_a_849_);
v___x_913_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_914_ = l_Nat_reprFast(v_a_883_);
v___x_915_ = lean_string_append(v___x_913_, v___x_914_);
lean_dec_ref(v___x_914_);
if (v_isShared_874_ == 0)
{
lean_ctor_set_tag(v___x_873_, 18);
lean_ctor_set(v___x_873_, 0, v___x_915_);
v___x_917_ = v___x_873_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_915_);
v___x_917_ = v_reuseFailAlloc_921_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_919_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set_tag(v___x_862_, 1);
lean_ctor_set(v___x_862_, 0, v___x_917_);
v___x_919_ = v___x_862_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_917_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
else
{
lean_del_object(v___x_878_);
lean_dec(v_exponent_876_);
lean_dec(v_mantissa_875_);
lean_del_object(v___x_873_);
lean_dec(v_mantissa_864_);
lean_del_object(v___x_862_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
}
}
}
else
{
lean_dec(v___x_870_);
lean_dec(v_mantissa_864_);
lean_del_object(v___x_862_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
}
}
else
{
lean_dec(v_exponent_865_);
lean_dec(v_mantissa_864_);
lean_del_object(v___x_862_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
}
}
else
{
lean_dec(v___x_859_);
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
}
}
else
{
lean_dec_ref(v_a_849_);
goto v___jp_851_;
}
v___jp_851_:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___closed__1));
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax___boxed(lean_object* v_json_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(v_json_925_, v_a_926_);
lean_dec(v_json_925_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(lean_object* v_json_932_, lean_object* v_a_933_){
_start:
{
if (lean_obj_tag(v_json_932_) == 4)
{
lean_object* v_elems_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v_elems_938_ = lean_ctor_get(v_json_932_, 0);
v___x_939_ = lean_array_get_size(v_elems_938_);
v___x_940_ = lean_unsigned_to_nat(2u);
v___x_941_ = lean_nat_dec_eq(v___x_939_, v___x_940_);
if (v___x_941_ == 0)
{
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_943_ = lean_array_fget(v_elems_938_, v___x_942_);
if (lean_obj_tag(v___x_943_) == 2)
{
lean_object* v_n_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_1008_; 
v_n_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_1008_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_n_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_1008_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v_mantissa_948_; lean_object* v_exponent_949_; lean_object* v_intZero_950_; uint8_t v_isNeg_951_; 
v_mantissa_948_ = lean_ctor_get(v_n_944_, 0);
lean_inc(v_mantissa_948_);
v_exponent_949_ = lean_ctor_get(v_n_944_, 1);
lean_inc(v_exponent_949_);
lean_dec_ref(v_n_944_);
v_intZero_950_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_951_ = lean_int_dec_lt(v_mantissa_948_, v_intZero_950_);
if (v_isNeg_951_ == 0)
{
uint8_t v___x_952_; 
v___x_952_ = lean_nat_dec_eq(v_exponent_949_, v___x_942_);
lean_dec(v_exponent_949_);
if (v___x_952_ == 0)
{
lean_dec(v_mantissa_948_);
lean_del_object(v___x_946_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(1u);
v___x_954_ = lean_array_fget(v_elems_938_, v___x_953_);
if (lean_obj_tag(v___x_954_) == 2)
{
lean_object* v_n_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_1007_; 
v_n_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_1007_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_n_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_1007_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_mantissa_959_; lean_object* v_exponent_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_1006_; 
v_mantissa_959_ = lean_ctor_get(v_n_955_, 0);
v_exponent_960_ = lean_ctor_get(v_n_955_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_n_955_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_962_ = v_n_955_;
v_isShared_963_ = v_isSharedCheck_1006_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_exponent_960_);
lean_inc(v_mantissa_959_);
lean_dec(v_n_955_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_1006_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v_isNeg_964_; 
v_isNeg_964_ = lean_int_dec_lt(v_mantissa_959_, v_intZero_950_);
if (v_isNeg_964_ == 0)
{
uint8_t v___x_965_; 
v___x_965_ = lean_nat_dec_eq(v_exponent_960_, v___x_942_);
lean_dec(v_exponent_960_);
if (v___x_965_ == 0)
{
lean_del_object(v___x_962_);
lean_dec(v_mantissa_959_);
lean_del_object(v___x_957_);
lean_dec(v_mantissa_948_);
lean_del_object(v___x_946_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
else
{
lean_object* v_levelMap_966_; lean_object* v_a_967_; lean_object* v___x_968_; 
v_levelMap_966_ = lean_ctor_get(v_a_933_, 2);
v_a_967_ = lean_nat_abs(v_mantissa_948_);
lean_dec(v_mantissa_948_);
v___x_968_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_966_, v_a_967_);
if (lean_obj_tag(v___x_968_) == 1)
{
lean_object* v_val_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_996_; 
lean_dec(v_a_967_);
lean_del_object(v___x_946_);
v_val_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_996_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_996_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_val_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_996_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_973_ = lean_nat_abs(v_mantissa_959_);
lean_dec(v_mantissa_959_);
v___x_974_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_966_, v_a_973_);
if (lean_obj_tag(v___x_974_) == 1)
{
lean_object* v_val_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_986_; 
lean_dec(v_a_973_);
lean_del_object(v___x_971_);
lean_del_object(v___x_957_);
v_val_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_986_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_986_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_val_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_986_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_979_ = l_Lean_Level_imax___override(v_val_969_, v_val_975_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v_a_933_);
lean_ctor_set(v___x_962_, 0, v___x_979_);
v___x_981_ = v___x_962_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_a_933_);
v___x_981_ = v_reuseFailAlloc_985_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_983_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 0);
lean_ctor_set(v___x_977_, 0, v___x_981_);
v___x_983_ = v___x_977_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_991_; 
lean_dec(v___x_974_);
lean_dec(v_val_969_);
lean_del_object(v___x_962_);
lean_dec_ref(v_a_933_);
v___x_987_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_988_ = l_Nat_reprFast(v_a_973_);
v___x_989_ = lean_string_append(v___x_987_, v___x_988_);
lean_dec_ref(v___x_988_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 18);
lean_ctor_set(v___x_971_, 0, v___x_989_);
v___x_991_ = v___x_971_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_989_);
v___x_991_ = v_reuseFailAlloc_995_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_993_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 1);
lean_ctor_set(v___x_957_, 0, v___x_991_);
v___x_993_ = v___x_957_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
else
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1001_; 
lean_dec(v___x_968_);
lean_del_object(v___x_962_);
lean_dec(v_mantissa_959_);
lean_dec_ref(v_a_933_);
v___x_997_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_998_ = l_Nat_reprFast(v_a_967_);
v___x_999_ = lean_string_append(v___x_997_, v___x_998_);
lean_dec_ref(v___x_998_);
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 18);
lean_ctor_set(v___x_957_, 0, v___x_999_);
v___x_1001_ = v___x_957_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1003_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set_tag(v___x_946_, 1);
lean_ctor_set(v___x_946_, 0, v___x_1001_);
v___x_1003_ = v___x_946_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
else
{
lean_del_object(v___x_962_);
lean_dec(v_exponent_960_);
lean_dec(v_mantissa_959_);
lean_del_object(v___x_957_);
lean_dec(v_mantissa_948_);
lean_del_object(v___x_946_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
}
}
}
else
{
lean_dec(v___x_954_);
lean_dec(v_mantissa_948_);
lean_del_object(v___x_946_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
}
}
else
{
lean_dec(v_exponent_949_);
lean_dec(v_mantissa_948_);
lean_del_object(v___x_946_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
}
}
else
{
lean_dec(v___x_943_);
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
}
}
else
{
lean_dec_ref(v_a_933_);
goto v___jp_935_;
}
v___jp_935_:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___closed__1));
v___x_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
return v___x_937_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax___boxed(lean_object* v_json_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(v_json_1009_, v_a_1010_);
lean_dec(v_json_1009_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(lean_object* v_json_1016_, lean_object* v_a_1017_){
_start:
{
if (lean_obj_tag(v_json_1016_) == 2)
{
lean_object* v_n_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1058_; 
v_n_1022_ = lean_ctor_get(v_json_1016_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v_json_1016_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1024_ = v_json_1016_;
v_isShared_1025_ = v_isSharedCheck_1058_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_n_1022_);
lean_dec(v_json_1016_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1058_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v_mantissa_1026_; lean_object* v_exponent_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1057_; 
v_mantissa_1026_ = lean_ctor_get(v_n_1022_, 0);
v_exponent_1027_ = lean_ctor_get(v_n_1022_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_n_1022_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1029_ = v_n_1022_;
v_isShared_1030_ = v_isSharedCheck_1057_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_exponent_1027_);
lean_inc(v_mantissa_1026_);
lean_dec(v_n_1022_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1057_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v_natZero_1031_; lean_object* v_intZero_1032_; uint8_t v_isNeg_1033_; 
v_natZero_1031_ = lean_unsigned_to_nat(0u);
v_intZero_1032_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1033_ = lean_int_dec_lt(v_mantissa_1026_, v_intZero_1032_);
if (v_isNeg_1033_ == 0)
{
uint8_t v___x_1034_; 
v___x_1034_ = lean_nat_dec_eq(v_exponent_1027_, v_natZero_1031_);
lean_dec(v_exponent_1027_);
if (v___x_1034_ == 0)
{
lean_del_object(v___x_1029_);
lean_dec(v_mantissa_1026_);
lean_del_object(v___x_1024_);
lean_dec_ref(v_a_1017_);
goto v___jp_1019_;
}
else
{
lean_object* v_nameMap_1035_; lean_object* v_a_1036_; lean_object* v___x_1037_; 
v_nameMap_1035_ = lean_ctor_get(v_a_1017_, 1);
v_a_1036_ = lean_nat_abs(v_mantissa_1026_);
lean_dec(v_mantissa_1026_);
v___x_1037_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1035_, v_a_1036_);
if (lean_obj_tag(v___x_1037_) == 1)
{
lean_object* v_val_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1049_; 
lean_dec(v_a_1036_);
lean_del_object(v___x_1024_);
v_val_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_val_1038_);
lean_dec(v___x_1037_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1044_; 
v___x_1042_ = l_Lean_Level_param___override(v_val_1038_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v_a_1017_);
lean_ctor_set(v___x_1029_, 0, v___x_1042_);
v___x_1044_ = v___x_1029_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1042_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_a_1017_);
v___x_1044_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1046_; 
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1044_);
v___x_1046_ = v___x_1040_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1044_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
lean_dec(v___x_1037_);
lean_del_object(v___x_1029_);
lean_dec_ref(v_a_1017_);
v___x_1050_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1051_ = l_Nat_reprFast(v_a_1036_);
v___x_1052_ = lean_string_append(v___x_1050_, v___x_1051_);
lean_dec_ref(v___x_1051_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set_tag(v___x_1024_, 18);
lean_ctor_set(v___x_1024_, 0, v___x_1052_);
v___x_1054_ = v___x_1024_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
}
}
else
{
lean_del_object(v___x_1029_);
lean_dec(v_exponent_1027_);
lean_dec(v_mantissa_1026_);
lean_del_object(v___x_1024_);
lean_dec_ref(v_a_1017_);
goto v___jp_1019_;
}
}
}
}
else
{
lean_dec_ref(v_a_1017_);
lean_dec(v_json_1016_);
goto v___jp_1019_;
}
v___jp_1019_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___closed__1));
v___x_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
return v___x_1021_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam___boxed(lean_object* v_json_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(v_json_1059_, v_a_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(lean_object* v_json_1066_, lean_object* v_a_1067_){
_start:
{
if (lean_obj_tag(v_json_1066_) == 2)
{
lean_object* v_n_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1094_; 
v_n_1072_ = lean_ctor_get(v_json_1066_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_json_1066_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1074_ = v_json_1066_;
v_isShared_1075_ = v_isSharedCheck_1094_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_n_1072_);
lean_dec(v_json_1066_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1094_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_mantissa_1076_; lean_object* v_exponent_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1093_; 
v_mantissa_1076_ = lean_ctor_get(v_n_1072_, 0);
v_exponent_1077_ = lean_ctor_get(v_n_1072_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_n_1072_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1079_ = v_n_1072_;
v_isShared_1080_ = v_isSharedCheck_1093_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_exponent_1077_);
lean_inc(v_mantissa_1076_);
lean_dec(v_n_1072_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1093_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v_natZero_1081_; lean_object* v_intZero_1082_; uint8_t v_isNeg_1083_; 
v_natZero_1081_ = lean_unsigned_to_nat(0u);
v_intZero_1082_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1083_ = lean_int_dec_lt(v_mantissa_1076_, v_intZero_1082_);
if (v_isNeg_1083_ == 0)
{
uint8_t v___x_1084_; 
v___x_1084_ = lean_nat_dec_eq(v_exponent_1077_, v_natZero_1081_);
lean_dec(v_exponent_1077_);
if (v___x_1084_ == 0)
{
lean_del_object(v___x_1079_);
lean_dec(v_mantissa_1076_);
lean_del_object(v___x_1074_);
lean_dec_ref(v_a_1067_);
goto v___jp_1069_;
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v_a_1085_ = lean_nat_abs(v_mantissa_1076_);
lean_dec(v_mantissa_1076_);
v___x_1086_ = l_Lean_Expr_bvar___override(v_a_1085_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 1, v_a_1067_);
lean_ctor_set(v___x_1079_, 0, v___x_1086_);
v___x_1088_ = v___x_1079_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_a_1067_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1090_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1088_);
v___x_1090_ = v___x_1074_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
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
lean_del_object(v___x_1079_);
lean_dec(v_exponent_1077_);
lean_dec(v_mantissa_1076_);
lean_del_object(v___x_1074_);
lean_dec_ref(v_a_1067_);
goto v___jp_1069_;
}
}
}
}
else
{
lean_dec_ref(v_a_1067_);
lean_dec(v_json_1066_);
goto v___jp_1069_;
}
v___jp_1069_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___closed__1));
v___x_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar___boxed(lean_object* v_json_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(v_json_1095_, v_a_1096_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(lean_object* v_json_1102_, lean_object* v_a_1103_){
_start:
{
if (lean_obj_tag(v_json_1102_) == 2)
{
lean_object* v_n_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1144_; 
v_n_1108_ = lean_ctor_get(v_json_1102_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_json_1102_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1110_ = v_json_1102_;
v_isShared_1111_ = v_isSharedCheck_1144_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_n_1108_);
lean_dec(v_json_1102_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1144_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v_mantissa_1112_; lean_object* v_exponent_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1143_; 
v_mantissa_1112_ = lean_ctor_get(v_n_1108_, 0);
v_exponent_1113_ = lean_ctor_get(v_n_1108_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_n_1108_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1115_ = v_n_1108_;
v_isShared_1116_ = v_isSharedCheck_1143_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_exponent_1113_);
lean_inc(v_mantissa_1112_);
lean_dec(v_n_1108_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1143_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v_natZero_1117_; lean_object* v_intZero_1118_; uint8_t v_isNeg_1119_; 
v_natZero_1117_ = lean_unsigned_to_nat(0u);
v_intZero_1118_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1119_ = lean_int_dec_lt(v_mantissa_1112_, v_intZero_1118_);
if (v_isNeg_1119_ == 0)
{
uint8_t v___x_1120_; 
v___x_1120_ = lean_nat_dec_eq(v_exponent_1113_, v_natZero_1117_);
lean_dec(v_exponent_1113_);
if (v___x_1120_ == 0)
{
lean_del_object(v___x_1115_);
lean_dec(v_mantissa_1112_);
lean_del_object(v___x_1110_);
lean_dec_ref(v_a_1103_);
goto v___jp_1105_;
}
else
{
lean_object* v_levelMap_1121_; lean_object* v_a_1122_; lean_object* v___x_1123_; 
v_levelMap_1121_ = lean_ctor_get(v_a_1103_, 2);
v_a_1122_ = lean_nat_abs(v_mantissa_1112_);
lean_dec(v_mantissa_1112_);
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_1121_, v_a_1122_);
if (lean_obj_tag(v___x_1123_) == 1)
{
lean_object* v_val_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_a_1122_);
lean_del_object(v___x_1110_);
v_val_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1135_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_val_1124_);
lean_dec(v___x_1123_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1135_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = l_Lean_Expr_sort___override(v_val_1124_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 1, v_a_1103_);
lean_ctor_set(v___x_1115_, 0, v___x_1128_);
v___x_1130_ = v___x_1115_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_a_1103_);
v___x_1130_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1130_);
v___x_1132_ = v___x_1126_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
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
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; 
lean_dec(v___x_1123_);
lean_del_object(v___x_1115_);
lean_dec_ref(v_a_1103_);
v___x_1136_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_1137_ = l_Nat_reprFast(v_a_1122_);
v___x_1138_ = lean_string_append(v___x_1136_, v___x_1137_);
lean_dec_ref(v___x_1137_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 18);
lean_ctor_set(v___x_1110_, 0, v___x_1138_);
v___x_1140_ = v___x_1110_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
}
else
{
lean_del_object(v___x_1115_);
lean_dec(v_exponent_1113_);
lean_dec(v_mantissa_1112_);
lean_del_object(v___x_1110_);
lean_dec_ref(v_a_1103_);
goto v___jp_1105_;
}
}
}
}
else
{
lean_dec_ref(v_a_1103_);
lean_dec(v_json_1102_);
goto v___jp_1105_;
}
v___jp_1105_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___closed__1));
v___x_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort___boxed(lean_object* v_json_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(v_json_1145_, v_a_1146_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(size_t v_sz_1152_, size_t v_i_1153_, lean_object* v_bs_1154_, lean_object* v___y_1155_){
_start:
{
uint8_t v___x_1160_; 
v___x_1160_ = lean_usize_dec_lt(v_i_1153_, v_sz_1152_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_bs_1154_);
lean_ctor_set(v___x_1161_, 1, v___y_1155_);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
else
{
lean_object* v_v_1163_; 
v_v_1163_ = lean_array_uget(v_bs_1154_, v_i_1153_);
if (lean_obj_tag(v_v_1163_) == 2)
{
lean_object* v_n_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1190_; 
v_n_1164_ = lean_ctor_get(v_v_1163_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_v_1163_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1166_ = v_v_1163_;
v_isShared_1167_ = v_isSharedCheck_1190_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_n_1164_);
lean_dec(v_v_1163_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1190_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v_mantissa_1168_; lean_object* v_exponent_1169_; lean_object* v_natZero_1170_; lean_object* v_intZero_1171_; uint8_t v_isNeg_1172_; 
v_mantissa_1168_ = lean_ctor_get(v_n_1164_, 0);
lean_inc(v_mantissa_1168_);
v_exponent_1169_ = lean_ctor_get(v_n_1164_, 1);
lean_inc(v_exponent_1169_);
lean_dec_ref(v_n_1164_);
v_natZero_1170_ = lean_unsigned_to_nat(0u);
v_intZero_1171_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1172_ = lean_int_dec_lt(v_mantissa_1168_, v_intZero_1171_);
if (v_isNeg_1172_ == 0)
{
uint8_t v___x_1173_; 
v___x_1173_ = lean_nat_dec_eq(v_exponent_1169_, v_natZero_1170_);
lean_dec(v_exponent_1169_);
if (v___x_1173_ == 0)
{
lean_dec(v_mantissa_1168_);
lean_del_object(v___x_1166_);
lean_dec_ref(v___y_1155_);
lean_dec_ref(v_bs_1154_);
goto v___jp_1157_;
}
else
{
lean_object* v_levelMap_1174_; lean_object* v_a_1175_; lean_object* v___x_1176_; 
v_levelMap_1174_ = lean_ctor_get(v___y_1155_, 2);
v_a_1175_ = lean_nat_abs(v_mantissa_1168_);
lean_dec(v_mantissa_1168_);
v___x_1176_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_levelMap_1174_, v_a_1175_);
if (lean_obj_tag(v___x_1176_) == 1)
{
lean_object* v_val_1177_; lean_object* v_bs_x27_1178_; size_t v___x_1179_; size_t v___x_1180_; lean_object* v___x_1181_; 
lean_dec(v_a_1175_);
lean_del_object(v___x_1166_);
v_val_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_val_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v_bs_x27_1178_ = lean_array_uset(v_bs_1154_, v_i_1153_, v_natZero_1170_);
v___x_1179_ = ((size_t)1ULL);
v___x_1180_ = lean_usize_add(v_i_1153_, v___x_1179_);
v___x_1181_ = lean_array_uset(v_bs_x27_1178_, v_i_1153_, v_val_1177_);
v_i_1153_ = v___x_1180_;
v_bs_1154_ = v___x_1181_;
goto _start;
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
lean_dec(v___x_1176_);
lean_dec_ref(v___y_1155_);
lean_dec_ref(v_bs_1154_);
v___x_1183_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getLevel___closed__0));
v___x_1184_ = l_Nat_reprFast(v_a_1175_);
v___x_1185_ = lean_string_append(v___x_1183_, v___x_1184_);
lean_dec_ref(v___x_1184_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set_tag(v___x_1166_, 18);
lean_ctor_set(v___x_1166_, 0, v___x_1185_);
v___x_1187_ = v___x_1166_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
return v___x_1188_;
}
}
}
}
else
{
lean_dec(v_exponent_1169_);
lean_dec(v_mantissa_1168_);
lean_del_object(v___x_1166_);
lean_dec_ref(v___y_1155_);
lean_dec_ref(v_bs_1154_);
goto v___jp_1157_;
}
}
}
else
{
lean_dec(v_v_1163_);
lean_dec_ref(v___y_1155_);
lean_dec_ref(v_bs_1154_);
goto v___jp_1157_;
}
}
v___jp_1157_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___boxed(lean_object* v_sz_1191_, lean_object* v_i_1192_, lean_object* v_bs_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
size_t v_sz_boxed_1196_; size_t v_i_boxed_1197_; lean_object* v_res_1198_; 
v_sz_boxed_1196_ = lean_unbox_usize(v_sz_1191_);
lean_dec(v_sz_1191_);
v_i_boxed_1197_ = lean_unbox_usize(v_i_1192_);
lean_dec(v_i_1192_);
v_res_1198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(v_sz_boxed_1196_, v_i_boxed_1197_, v_bs_1193_, v___y_1194_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(lean_object* v_json_1201_, lean_object* v_a_1202_){
_start:
{
if (lean_obj_tag(v_json_1201_) == 5)
{
lean_object* v_kvPairs_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_kvPairs_1210_ = lean_ctor_get(v_json_1201_, 0);
v___x_1211_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1212_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1210_, v___x_1211_);
if (lean_obj_tag(v___x_1212_) == 1)
{
lean_object* v_val_1213_; 
v_val_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_val_1213_);
lean_dec_ref_known(v___x_1212_, 1);
if (lean_obj_tag(v_val_1213_) == 2)
{
lean_object* v_n_1214_; lean_object* v_mantissa_1215_; lean_object* v_exponent_1216_; lean_object* v_natZero_1217_; lean_object* v_intZero_1218_; uint8_t v_isNeg_1219_; 
v_n_1214_ = lean_ctor_get(v_val_1213_, 0);
lean_inc_ref(v_n_1214_);
lean_dec_ref_known(v_val_1213_, 1);
v_mantissa_1215_ = lean_ctor_get(v_n_1214_, 0);
lean_inc(v_mantissa_1215_);
v_exponent_1216_ = lean_ctor_get(v_n_1214_, 1);
lean_inc(v_exponent_1216_);
lean_dec_ref(v_n_1214_);
v_natZero_1217_ = lean_unsigned_to_nat(0u);
v_intZero_1218_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1219_ = lean_int_dec_lt(v_mantissa_1215_, v_intZero_1218_);
if (v_isNeg_1219_ == 0)
{
uint8_t v___x_1220_; 
v___x_1220_ = lean_nat_dec_eq(v_exponent_1216_, v_natZero_1217_);
lean_dec(v_exponent_1216_);
if (v___x_1220_ == 0)
{
lean_dec(v_mantissa_1215_);
lean_dec_ref(v_a_1202_);
goto v___jp_1204_;
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__1));
v___x_1222_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1210_, v___x_1221_);
if (lean_obj_tag(v___x_1222_) == 1)
{
lean_object* v_val_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1275_; 
v_val_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1275_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_val_1223_);
lean_dec(v___x_1222_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1275_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
if (lean_obj_tag(v_val_1223_) == 4)
{
lean_object* v_elems_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1274_; 
v_elems_1227_ = lean_ctor_get(v_val_1223_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_val_1223_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1229_ = v_val_1223_;
v_isShared_1230_ = v_isSharedCheck_1274_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_elems_1227_);
lean_dec(v_val_1223_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1274_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v_nameMap_1231_; lean_object* v_a_1232_; lean_object* v___x_1233_; 
v_nameMap_1231_ = lean_ctor_get(v_a_1202_, 1);
v_a_1232_ = lean_nat_abs(v_mantissa_1215_);
lean_dec(v_mantissa_1215_);
v___x_1233_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1231_, v_a_1232_);
if (lean_obj_tag(v___x_1233_) == 1)
{
lean_object* v_val_1234_; size_t v_sz_1235_; size_t v___x_1236_; lean_object* v___x_1237_; 
lean_dec(v_a_1232_);
lean_del_object(v___x_1229_);
lean_del_object(v___x_1225_);
v_val_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_val_1234_);
lean_dec_ref_known(v___x_1233_, 1);
v_sz_1235_ = lean_array_size(v_elems_1227_);
v___x_1236_ = ((size_t)0ULL);
v___x_1237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0(v_sz_1235_, v___x_1236_, v_elems_1227_, v_a_1202_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1256_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1256_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1256_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_fst_1242_; lean_object* v_snd_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1255_; 
v_fst_1242_ = lean_ctor_get(v_a_1238_, 0);
v_snd_1243_ = lean_ctor_get(v_a_1238_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_a_1238_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1245_ = v_a_1238_;
v_isShared_1246_ = v_isSharedCheck_1255_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_snd_1243_);
lean_inc(v_fst_1242_);
lean_dec(v_a_1238_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1255_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1250_; 
v___x_1247_ = lean_array_to_list(v_fst_1242_);
v___x_1248_ = l_Lean_Expr_const___override(v_val_1234_, v___x_1247_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v___x_1248_);
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_snd_1243_);
v___x_1250_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1252_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v___x_1250_);
v___x_1252_ = v___x_1240_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
lean_dec(v_val_1234_);
v_a_1257_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1237_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1237_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
lean_dec(v___x_1233_);
lean_dec_ref(v_elems_1227_);
lean_dec_ref(v_a_1202_);
v___x_1265_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1266_ = l_Nat_reprFast(v_a_1232_);
v___x_1267_ = lean_string_append(v___x_1265_, v___x_1266_);
lean_dec_ref(v___x_1266_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set_tag(v___x_1229_, 18);
lean_ctor_set(v___x_1229_, 0, v___x_1267_);
v___x_1269_ = v___x_1229_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1271_; 
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1269_);
v___x_1271_ = v___x_1225_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
else
{
lean_del_object(v___x_1225_);
lean_dec(v_val_1223_);
lean_dec(v_mantissa_1215_);
lean_dec_ref(v_a_1202_);
goto v___jp_1207_;
}
}
}
else
{
lean_dec(v___x_1222_);
lean_dec(v_mantissa_1215_);
lean_dec_ref(v_a_1202_);
goto v___jp_1207_;
}
}
}
else
{
lean_dec(v_exponent_1216_);
lean_dec(v_mantissa_1215_);
lean_dec_ref(v_a_1202_);
goto v___jp_1204_;
}
}
else
{
lean_dec(v_val_1213_);
lean_dec_ref(v_a_1202_);
goto v___jp_1204_;
}
}
else
{
lean_dec(v___x_1212_);
lean_dec_ref(v_a_1202_);
goto v___jp_1204_;
}
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec_ref(v_a_1202_);
v___x_1276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
v___jp_1204_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
v___jp_1207_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst_spec__0___closed__1));
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
return v___x_1209_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___boxed(lean_object* v_json_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(v_json_1278_, v_a_1279_);
lean_dec(v_json_1278_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(lean_object* v_json_1287_, lean_object* v_a_1288_){
_start:
{
if (lean_obj_tag(v_json_1287_) == 5)
{
lean_object* v_kvPairs_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v_kvPairs_1296_ = lean_ctor_get(v_json_1287_, 0);
v___x_1297_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__2));
v___x_1298_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1296_, v___x_1297_);
if (lean_obj_tag(v___x_1298_) == 1)
{
lean_object* v_val_1299_; 
v_val_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_val_1299_);
lean_dec_ref_known(v___x_1298_, 1);
if (lean_obj_tag(v_val_1299_) == 2)
{
lean_object* v_n_1300_; lean_object* v_mantissa_1301_; lean_object* v_exponent_1302_; lean_object* v_natZero_1303_; lean_object* v_intZero_1304_; uint8_t v_isNeg_1305_; 
v_n_1300_ = lean_ctor_get(v_val_1299_, 0);
lean_inc_ref(v_n_1300_);
lean_dec_ref_known(v_val_1299_, 1);
v_mantissa_1301_ = lean_ctor_get(v_n_1300_, 0);
lean_inc(v_mantissa_1301_);
v_exponent_1302_ = lean_ctor_get(v_n_1300_, 1);
lean_inc(v_exponent_1302_);
lean_dec_ref(v_n_1300_);
v_natZero_1303_ = lean_unsigned_to_nat(0u);
v_intZero_1304_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1305_ = lean_int_dec_lt(v_mantissa_1301_, v_intZero_1304_);
if (v_isNeg_1305_ == 0)
{
uint8_t v___x_1306_; 
v___x_1306_ = lean_nat_dec_eq(v_exponent_1302_, v_natZero_1303_);
lean_dec(v_exponent_1302_);
if (v___x_1306_ == 0)
{
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1290_;
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__3));
v___x_1308_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1296_, v___x_1307_);
if (lean_obj_tag(v___x_1308_) == 1)
{
lean_object* v_val_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1366_; 
v_val_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1366_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_val_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1366_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
if (lean_obj_tag(v_val_1309_) == 2)
{
lean_object* v_n_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1365_; 
v_n_1313_ = lean_ctor_get(v_val_1309_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v_val_1309_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1315_ = v_val_1309_;
v_isShared_1316_ = v_isSharedCheck_1365_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_n_1313_);
lean_dec(v_val_1309_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1365_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v_mantissa_1317_; lean_object* v_exponent_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1364_; 
v_mantissa_1317_ = lean_ctor_get(v_n_1313_, 0);
v_exponent_1318_ = lean_ctor_get(v_n_1313_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_n_1313_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1320_ = v_n_1313_;
v_isShared_1321_ = v_isSharedCheck_1364_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_exponent_1318_);
lean_inc(v_mantissa_1317_);
lean_dec(v_n_1313_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1364_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
uint8_t v_isNeg_1322_; 
v_isNeg_1322_ = lean_int_dec_lt(v_mantissa_1317_, v_intZero_1304_);
if (v_isNeg_1322_ == 0)
{
uint8_t v___x_1323_; 
v___x_1323_ = lean_nat_dec_eq(v_exponent_1318_, v_natZero_1303_);
lean_dec(v_exponent_1318_);
if (v___x_1323_ == 0)
{
lean_del_object(v___x_1320_);
lean_dec(v_mantissa_1317_);
lean_del_object(v___x_1315_);
lean_del_object(v___x_1311_);
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1293_;
}
else
{
lean_object* v_exprMap_1324_; lean_object* v_a_1325_; lean_object* v___x_1326_; 
v_exprMap_1324_ = lean_ctor_get(v_a_1288_, 3);
v_a_1325_ = lean_nat_abs(v_mantissa_1301_);
lean_dec(v_mantissa_1301_);
v___x_1326_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1326_) == 1)
{
lean_object* v_val_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1354_; 
lean_dec(v_a_1325_);
lean_del_object(v___x_1311_);
v_val_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1354_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_val_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1354_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v_a_1331_; lean_object* v___x_1332_; 
v_a_1331_ = lean_nat_abs(v_mantissa_1317_);
lean_dec(v_mantissa_1317_);
v___x_1332_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1324_, v_a_1331_);
if (lean_obj_tag(v___x_1332_) == 1)
{
lean_object* v_val_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_a_1331_);
lean_del_object(v___x_1329_);
lean_del_object(v___x_1315_);
v_val_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1344_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_val_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1344_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; lean_object* v___x_1339_; 
v___x_1337_ = l_Lean_Expr_app___override(v_val_1327_, v_val_1333_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 1, v_a_1288_);
lean_ctor_set(v___x_1320_, 0, v___x_1337_);
v___x_1339_ = v___x_1320_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1337_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_a_1288_);
v___x_1339_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1341_; 
if (v_isShared_1336_ == 0)
{
lean_ctor_set_tag(v___x_1335_, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1339_);
v___x_1341_ = v___x_1335_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
}
else
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
lean_dec(v___x_1332_);
lean_dec(v_val_1327_);
lean_del_object(v___x_1320_);
lean_dec_ref(v_a_1288_);
v___x_1345_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1346_ = l_Nat_reprFast(v_a_1331_);
v___x_1347_ = lean_string_append(v___x_1345_, v___x_1346_);
lean_dec_ref(v___x_1346_);
if (v_isShared_1330_ == 0)
{
lean_ctor_set_tag(v___x_1329_, 18);
lean_ctor_set(v___x_1329_, 0, v___x_1347_);
v___x_1349_ = v___x_1329_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 1);
lean_ctor_set(v___x_1315_, 0, v___x_1349_);
v___x_1351_ = v___x_1315_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1359_; 
lean_dec(v___x_1326_);
lean_del_object(v___x_1320_);
lean_dec(v_mantissa_1317_);
lean_dec_ref(v_a_1288_);
v___x_1355_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1356_ = l_Nat_reprFast(v_a_1325_);
v___x_1357_ = lean_string_append(v___x_1355_, v___x_1356_);
lean_dec_ref(v___x_1356_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set_tag(v___x_1315_, 18);
lean_ctor_set(v___x_1315_, 0, v___x_1357_);
v___x_1359_ = v___x_1315_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1361_; 
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v___x_1359_);
v___x_1361_ = v___x_1311_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
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
else
{
lean_del_object(v___x_1320_);
lean_dec(v_exponent_1318_);
lean_dec(v_mantissa_1317_);
lean_del_object(v___x_1315_);
lean_del_object(v___x_1311_);
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1293_;
}
}
}
}
else
{
lean_del_object(v___x_1311_);
lean_dec(v_val_1309_);
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1293_;
}
}
}
else
{
lean_dec(v___x_1308_);
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1293_;
}
}
}
else
{
lean_dec(v_exponent_1302_);
lean_dec(v_mantissa_1301_);
lean_dec_ref(v_a_1288_);
goto v___jp_1290_;
}
}
else
{
lean_dec(v_val_1299_);
lean_dec_ref(v_a_1288_);
goto v___jp_1290_;
}
}
else
{
lean_dec(v___x_1298_);
lean_dec_ref(v_a_1288_);
goto v___jp_1290_;
}
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_dec_ref(v_a_1288_);
v___x_1367_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
v___jp_1290_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
return v___x_1292_;
}
v___jp_1293_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___closed__1));
v___x_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp___boxed(lean_object* v_json_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(v_json_1369_, v_a_1370_);
lean_dec(v_json_1369_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(lean_object* v_info_1378_, lean_object* v_a_1379_){
_start:
{
lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1381_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__0));
v___x_1382_ = lean_string_dec_eq(v_info_1378_, v___x_1381_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__1));
v___x_1384_ = lean_string_dec_eq(v_info_1378_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__2));
v___x_1386_ = lean_string_dec_eq(v_info_1378_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__3));
v___x_1388_ = lean_string_dec_eq(v_info_1378_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_a_1379_);
v___x_1389_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___closed__4));
v___x_1390_ = lean_string_append(v___x_1389_, v_info_1378_);
v___x_1391_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
v___x_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
else
{
uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1393_ = 3;
v___x_1394_ = lean_box(v___x_1393_);
v___x_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v_a_1379_);
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
return v___x_1396_;
}
}
else
{
uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1397_ = 2;
v___x_1398_ = lean_box(v___x_1397_);
v___x_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v_a_1379_);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
}
else
{
uint8_t v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1401_ = 1;
v___x_1402_ = lean_box(v___x_1401_);
v___x_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
lean_ctor_set(v___x_1403_, 1, v_a_1379_);
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
}
else
{
uint8_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1405_ = 0;
v___x_1406_ = lean_box(v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
lean_ctor_set(v___x_1407_, 1, v_a_1379_);
v___x_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
return v___x_1408_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo___boxed(lean_object* v_info_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_info_1409_, v_a_1410_);
lean_dec_ref(v_info_1409_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(lean_object* v_json_1419_, lean_object* v_a_1420_){
_start:
{
if (lean_obj_tag(v_json_1419_) == 5)
{
lean_object* v_kvPairs_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v_kvPairs_1434_ = lean_ctor_get(v_json_1419_, 0);
v___x_1435_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1436_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1434_, v___x_1435_);
if (lean_obj_tag(v___x_1436_) == 1)
{
lean_object* v_val_1437_; 
v_val_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_val_1437_);
lean_dec_ref_known(v___x_1436_, 1);
if (lean_obj_tag(v_val_1437_) == 2)
{
lean_object* v_n_1438_; lean_object* v_mantissa_1439_; lean_object* v_exponent_1440_; lean_object* v_natZero_1441_; lean_object* v_intZero_1442_; uint8_t v_isNeg_1443_; 
v_n_1438_ = lean_ctor_get(v_val_1437_, 0);
lean_inc_ref(v_n_1438_);
lean_dec_ref_known(v_val_1437_, 1);
v_mantissa_1439_ = lean_ctor_get(v_n_1438_, 0);
lean_inc(v_mantissa_1439_);
v_exponent_1440_ = lean_ctor_get(v_n_1438_, 1);
lean_inc(v_exponent_1440_);
lean_dec_ref(v_n_1438_);
v_natZero_1441_ = lean_unsigned_to_nat(0u);
v_intZero_1442_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1443_ = lean_int_dec_lt(v_mantissa_1439_, v_intZero_1442_);
if (v_isNeg_1443_ == 0)
{
uint8_t v___x_1444_; 
v___x_1444_ = lean_nat_dec_eq(v_exponent_1440_, v_natZero_1441_);
lean_dec(v_exponent_1440_);
if (v___x_1444_ == 0)
{
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1422_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1446_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1434_, v___x_1445_);
if (lean_obj_tag(v___x_1446_) == 1)
{
lean_object* v_val_1447_; 
v_val_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_val_1447_);
lean_dec_ref_known(v___x_1446_, 1);
if (lean_obj_tag(v_val_1447_) == 2)
{
lean_object* v_n_1448_; lean_object* v_mantissa_1449_; lean_object* v_exponent_1450_; uint8_t v_isNeg_1451_; 
v_n_1448_ = lean_ctor_get(v_val_1447_, 0);
lean_inc_ref(v_n_1448_);
lean_dec_ref_known(v_val_1447_, 1);
v_mantissa_1449_ = lean_ctor_get(v_n_1448_, 0);
lean_inc(v_mantissa_1449_);
v_exponent_1450_ = lean_ctor_get(v_n_1448_, 1);
lean_inc(v_exponent_1450_);
lean_dec_ref(v_n_1448_);
v_isNeg_1451_ = lean_int_dec_lt(v_mantissa_1449_, v_intZero_1442_);
if (v_isNeg_1451_ == 0)
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_nat_dec_eq(v_exponent_1450_, v_natZero_1441_);
lean_dec(v_exponent_1450_);
if (v___x_1452_ == 0)
{
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1425_;
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1454_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1434_, v___x_1453_);
if (lean_obj_tag(v___x_1454_) == 1)
{
lean_object* v_val_1455_; 
v_val_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_val_1455_);
lean_dec_ref_known(v___x_1454_, 1);
if (lean_obj_tag(v_val_1455_) == 2)
{
lean_object* v_n_1456_; lean_object* v_mantissa_1457_; lean_object* v_exponent_1458_; uint8_t v_isNeg_1459_; 
v_n_1456_ = lean_ctor_get(v_val_1455_, 0);
lean_inc_ref(v_n_1456_);
lean_dec_ref_known(v_val_1455_, 1);
v_mantissa_1457_ = lean_ctor_get(v_n_1456_, 0);
lean_inc(v_mantissa_1457_);
v_exponent_1458_ = lean_ctor_get(v_n_1456_, 1);
lean_inc(v_exponent_1458_);
lean_dec_ref(v_n_1456_);
v_isNeg_1459_ = lean_int_dec_lt(v_mantissa_1457_, v_intZero_1442_);
if (v_isNeg_1459_ == 0)
{
uint8_t v___x_1460_; 
v___x_1460_ = lean_nat_dec_eq(v_exponent_1458_, v_natZero_1441_);
lean_dec(v_exponent_1458_);
if (v___x_1460_ == 0)
{
lean_dec(v_mantissa_1457_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1428_;
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4));
v___x_1462_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1434_, v___x_1461_);
if (lean_obj_tag(v___x_1462_) == 1)
{
lean_object* v_val_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1546_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1465_ = v___x_1462_;
v_isShared_1466_ = v_isSharedCheck_1546_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_val_1463_);
lean_dec(v___x_1462_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1546_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
if (lean_obj_tag(v_val_1463_) == 3)
{
lean_object* v_s_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1545_; 
v_s_1467_ = lean_ctor_get(v_val_1463_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_val_1463_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1469_ = v_val_1463_;
v_isShared_1470_ = v_isSharedCheck_1545_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_s_1467_);
lean_dec(v_val_1463_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1545_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v_nameMap_1471_; lean_object* v_exprMap_1472_; lean_object* v_a_1473_; lean_object* v___x_1474_; 
v_nameMap_1471_ = lean_ctor_get(v_a_1420_, 1);
v_exprMap_1472_ = lean_ctor_get(v_a_1420_, 3);
v_a_1473_ = lean_nat_abs(v_mantissa_1439_);
lean_dec(v_mantissa_1439_);
v___x_1474_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1471_, v_a_1473_);
if (lean_obj_tag(v___x_1474_) == 1)
{
lean_object* v_val_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1535_; 
lean_dec(v_a_1473_);
lean_del_object(v___x_1465_);
v_val_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1535_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_val_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1535_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_a_1479_; lean_object* v___x_1480_; 
v_a_1479_ = lean_nat_abs(v_mantissa_1449_);
lean_dec(v_mantissa_1449_);
v___x_1480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1472_, v_a_1479_);
if (lean_obj_tag(v___x_1480_) == 1)
{
lean_object* v_val_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1525_; 
lean_dec(v_a_1479_);
lean_del_object(v___x_1469_);
v_val_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1525_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_val_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1525_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v_a_1485_; lean_object* v___x_1486_; 
v_a_1485_ = lean_nat_abs(v_mantissa_1457_);
lean_dec(v_mantissa_1457_);
v___x_1486_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1472_, v_a_1485_);
if (lean_obj_tag(v___x_1486_) == 1)
{
lean_object* v_val_1487_; lean_object* v___x_1488_; 
lean_dec(v_a_1485_);
lean_del_object(v___x_1483_);
lean_del_object(v___x_1477_);
v_val_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_val_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v___x_1488_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_s_1467_, v_a_1420_);
lean_dec_ref(v_s_1467_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1507_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1507_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1507_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v_fst_1493_; lean_object* v_snd_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1506_; 
v_fst_1493_ = lean_ctor_get(v_a_1489_, 0);
v_snd_1494_ = lean_ctor_get(v_a_1489_, 1);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_a_1489_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1496_ = v_a_1489_;
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_snd_1494_);
lean_inc(v_fst_1493_);
lean_dec(v_a_1489_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
uint8_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1498_ = lean_unbox(v_fst_1493_);
lean_dec(v_fst_1493_);
v___x_1499_ = l_Lean_Expr_lam___override(v_val_1475_, v_val_1481_, v_val_1487_, v___x_1498_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 0, v___x_1499_);
v___x_1501_ = v___x_1496_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_snd_1494_);
v___x_1501_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1503_; 
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1501_);
v___x_1503_ = v___x_1491_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec(v_val_1487_);
lean_dec(v_val_1481_);
lean_dec(v_val_1475_);
v_a_1508_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1488_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1488_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
lean_dec(v___x_1486_);
lean_dec(v_val_1481_);
lean_dec(v_val_1475_);
lean_dec_ref(v_s_1467_);
lean_dec_ref(v_a_1420_);
v___x_1516_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1517_ = l_Nat_reprFast(v_a_1485_);
v___x_1518_ = lean_string_append(v___x_1516_, v___x_1517_);
lean_dec_ref(v___x_1517_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set_tag(v___x_1483_, 18);
lean_ctor_set(v___x_1483_, 0, v___x_1518_);
v___x_1520_ = v___x_1483_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1522_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1520_);
v___x_1522_ = v___x_1477_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
}
else
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1530_; 
lean_dec(v___x_1480_);
lean_dec(v_val_1475_);
lean_dec_ref(v_s_1467_);
lean_dec(v_mantissa_1457_);
lean_dec_ref(v_a_1420_);
v___x_1526_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1527_ = l_Nat_reprFast(v_a_1479_);
v___x_1528_ = lean_string_append(v___x_1526_, v___x_1527_);
lean_dec_ref(v___x_1527_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 18);
lean_ctor_set(v___x_1477_, 0, v___x_1528_);
v___x_1530_ = v___x_1477_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1528_);
v___x_1530_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1532_; 
if (v_isShared_1470_ == 0)
{
lean_ctor_set_tag(v___x_1469_, 1);
lean_ctor_set(v___x_1469_, 0, v___x_1530_);
v___x_1532_ = v___x_1469_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
else
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
lean_dec(v___x_1474_);
lean_dec_ref(v_s_1467_);
lean_dec(v_mantissa_1457_);
lean_dec(v_mantissa_1449_);
lean_dec_ref(v_a_1420_);
v___x_1536_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1537_ = l_Nat_reprFast(v_a_1473_);
v___x_1538_ = lean_string_append(v___x_1536_, v___x_1537_);
lean_dec_ref(v___x_1537_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set_tag(v___x_1469_, 18);
lean_ctor_set(v___x_1469_, 0, v___x_1538_);
v___x_1540_ = v___x_1469_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1542_; 
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 0, v___x_1540_);
v___x_1542_ = v___x_1465_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
else
{
lean_del_object(v___x_1465_);
lean_dec(v_val_1463_);
lean_dec(v_mantissa_1457_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1431_;
}
}
}
else
{
lean_dec(v___x_1462_);
lean_dec(v_mantissa_1457_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1431_;
}
}
}
else
{
lean_dec(v_exponent_1458_);
lean_dec(v_mantissa_1457_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1428_;
}
}
else
{
lean_dec(v_val_1455_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1428_;
}
}
else
{
lean_dec(v___x_1454_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1428_;
}
}
}
else
{
lean_dec(v_exponent_1450_);
lean_dec(v_mantissa_1449_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1425_;
}
}
else
{
lean_dec(v_val_1447_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1425_;
}
}
else
{
lean_dec(v___x_1446_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1425_;
}
}
}
else
{
lean_dec(v_exponent_1440_);
lean_dec(v_mantissa_1439_);
lean_dec_ref(v_a_1420_);
goto v___jp_1422_;
}
}
else
{
lean_dec(v_val_1437_);
lean_dec_ref(v_a_1420_);
goto v___jp_1422_;
}
}
else
{
lean_dec(v___x_1436_);
lean_dec_ref(v_a_1420_);
goto v___jp_1422_;
}
}
else
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
lean_dec_ref(v_a_1420_);
v___x_1547_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
return v___x_1548_;
}
v___jp_1422_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
v___jp_1425_:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
v___jp_1428_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
v___jp_1431_:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__1));
v___x_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___boxed(lean_object* v_json_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(v_json_1549_, v_a_1550_);
lean_dec(v_json_1549_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(lean_object* v_json_1556_, lean_object* v_a_1557_){
_start:
{
if (lean_obj_tag(v_json_1556_) == 5)
{
lean_object* v_kvPairs_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_kvPairs_1571_ = lean_ctor_get(v_json_1556_, 0);
v___x_1572_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1573_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1571_, v___x_1572_);
if (lean_obj_tag(v___x_1573_) == 1)
{
lean_object* v_val_1574_; 
v_val_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v___x_1573_, 1);
if (lean_obj_tag(v_val_1574_) == 2)
{
lean_object* v_n_1575_; lean_object* v_mantissa_1576_; lean_object* v_exponent_1577_; lean_object* v_natZero_1578_; lean_object* v_intZero_1579_; uint8_t v_isNeg_1580_; 
v_n_1575_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_n_1575_);
lean_dec_ref_known(v_val_1574_, 1);
v_mantissa_1576_ = lean_ctor_get(v_n_1575_, 0);
lean_inc(v_mantissa_1576_);
v_exponent_1577_ = lean_ctor_get(v_n_1575_, 1);
lean_inc(v_exponent_1577_);
lean_dec_ref(v_n_1575_);
v_natZero_1578_ = lean_unsigned_to_nat(0u);
v_intZero_1579_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1580_ = lean_int_dec_lt(v_mantissa_1576_, v_intZero_1579_);
if (v_isNeg_1580_ == 0)
{
uint8_t v___x_1581_; 
v___x_1581_ = lean_nat_dec_eq(v_exponent_1577_, v_natZero_1578_);
lean_dec(v_exponent_1577_);
if (v___x_1581_ == 0)
{
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1559_;
}
else
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1583_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1571_, v___x_1582_);
if (lean_obj_tag(v___x_1583_) == 1)
{
lean_object* v_val_1584_; 
v_val_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_val_1584_);
lean_dec_ref_known(v___x_1583_, 1);
if (lean_obj_tag(v_val_1584_) == 2)
{
lean_object* v_n_1585_; lean_object* v_mantissa_1586_; lean_object* v_exponent_1587_; uint8_t v_isNeg_1588_; 
v_n_1585_ = lean_ctor_get(v_val_1584_, 0);
lean_inc_ref(v_n_1585_);
lean_dec_ref_known(v_val_1584_, 1);
v_mantissa_1586_ = lean_ctor_get(v_n_1585_, 0);
lean_inc(v_mantissa_1586_);
v_exponent_1587_ = lean_ctor_get(v_n_1585_, 1);
lean_inc(v_exponent_1587_);
lean_dec_ref(v_n_1585_);
v_isNeg_1588_ = lean_int_dec_lt(v_mantissa_1586_, v_intZero_1579_);
if (v_isNeg_1588_ == 0)
{
uint8_t v___x_1589_; 
v___x_1589_ = lean_nat_dec_eq(v_exponent_1587_, v_natZero_1578_);
lean_dec(v_exponent_1587_);
if (v___x_1589_ == 0)
{
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1562_;
}
else
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1591_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1571_, v___x_1590_);
if (lean_obj_tag(v___x_1591_) == 1)
{
lean_object* v_val_1592_; 
v_val_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_val_1592_);
lean_dec_ref_known(v___x_1591_, 1);
if (lean_obj_tag(v_val_1592_) == 2)
{
lean_object* v_n_1593_; lean_object* v_mantissa_1594_; lean_object* v_exponent_1595_; uint8_t v_isNeg_1596_; 
v_n_1593_ = lean_ctor_get(v_val_1592_, 0);
lean_inc_ref(v_n_1593_);
lean_dec_ref_known(v_val_1592_, 1);
v_mantissa_1594_ = lean_ctor_get(v_n_1593_, 0);
lean_inc(v_mantissa_1594_);
v_exponent_1595_ = lean_ctor_get(v_n_1593_, 1);
lean_inc(v_exponent_1595_);
lean_dec_ref(v_n_1593_);
v_isNeg_1596_ = lean_int_dec_lt(v_mantissa_1594_, v_intZero_1579_);
if (v_isNeg_1596_ == 0)
{
uint8_t v___x_1597_; 
v___x_1597_ = lean_nat_dec_eq(v_exponent_1595_, v_natZero_1578_);
lean_dec(v_exponent_1595_);
if (v___x_1597_ == 0)
{
lean_dec(v_mantissa_1594_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1565_;
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__4));
v___x_1599_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1571_, v___x_1598_);
if (lean_obj_tag(v___x_1599_) == 1)
{
lean_object* v_val_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1683_; 
v_val_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1683_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_val_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1683_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
if (lean_obj_tag(v_val_1600_) == 3)
{
lean_object* v_s_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1682_; 
v_s_1604_ = lean_ctor_get(v_val_1600_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_val_1600_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1606_ = v_val_1600_;
v_isShared_1607_ = v_isSharedCheck_1682_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_s_1604_);
lean_dec(v_val_1600_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1682_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v_nameMap_1608_; lean_object* v_exprMap_1609_; lean_object* v_a_1610_; lean_object* v___x_1611_; 
v_nameMap_1608_ = lean_ctor_get(v_a_1557_, 1);
v_exprMap_1609_ = lean_ctor_get(v_a_1557_, 3);
v_a_1610_ = lean_nat_abs(v_mantissa_1576_);
lean_dec(v_mantissa_1576_);
v___x_1611_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1608_, v_a_1610_);
if (lean_obj_tag(v___x_1611_) == 1)
{
lean_object* v_val_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1672_; 
lean_dec(v_a_1610_);
lean_del_object(v___x_1602_);
v_val_1612_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1614_ = v___x_1611_;
v_isShared_1615_ = v_isSharedCheck_1672_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_val_1612_);
lean_dec(v___x_1611_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1672_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v_a_1616_; lean_object* v___x_1617_; 
v_a_1616_ = lean_nat_abs(v_mantissa_1586_);
lean_dec(v_mantissa_1586_);
v___x_1617_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1609_, v_a_1616_);
if (lean_obj_tag(v___x_1617_) == 1)
{
lean_object* v_val_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_a_1616_);
lean_del_object(v___x_1606_);
v_val_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1662_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_val_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1662_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v_a_1622_; lean_object* v___x_1623_; 
v_a_1622_ = lean_nat_abs(v_mantissa_1594_);
lean_dec(v_mantissa_1594_);
v___x_1623_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1609_, v_a_1622_);
if (lean_obj_tag(v___x_1623_) == 1)
{
lean_object* v_val_1624_; lean_object* v___x_1625_; 
lean_dec(v_a_1622_);
lean_del_object(v___x_1620_);
lean_del_object(v___x_1614_);
v_val_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseBinderInfo(v_s_1604_, v_a_1557_);
lean_dec_ref(v_s_1604_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1644_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1644_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1644_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v_fst_1630_; lean_object* v_snd_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1643_; 
v_fst_1630_ = lean_ctor_get(v_a_1626_, 0);
v_snd_1631_ = lean_ctor_get(v_a_1626_, 1);
v_isSharedCheck_1643_ = !lean_is_exclusive(v_a_1626_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1633_ = v_a_1626_;
v_isShared_1634_ = v_isSharedCheck_1643_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_snd_1631_);
lean_inc(v_fst_1630_);
lean_dec(v_a_1626_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1643_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
uint8_t v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1638_; 
v___x_1635_ = lean_unbox(v_fst_1630_);
lean_dec(v_fst_1630_);
v___x_1636_ = l_Lean_Expr_forallE___override(v_val_1612_, v_val_1618_, v_val_1624_, v___x_1635_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1636_);
v___x_1638_ = v___x_1633_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_snd_1631_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1638_);
v___x_1640_ = v___x_1628_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_val_1624_);
lean_dec(v_val_1618_);
lean_dec(v_val_1612_);
v_a_1645_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1625_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1625_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
else
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1657_; 
lean_dec(v___x_1623_);
lean_dec(v_val_1618_);
lean_dec(v_val_1612_);
lean_dec_ref(v_s_1604_);
lean_dec_ref(v_a_1557_);
v___x_1653_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1654_ = l_Nat_reprFast(v_a_1622_);
v___x_1655_ = lean_string_append(v___x_1653_, v___x_1654_);
lean_dec_ref(v___x_1654_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set_tag(v___x_1620_, 18);
lean_ctor_set(v___x_1620_, 0, v___x_1655_);
v___x_1657_ = v___x_1620_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
lean_object* v___x_1659_; 
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 0, v___x_1657_);
v___x_1659_ = v___x_1614_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
else
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
lean_dec(v___x_1617_);
lean_dec(v_val_1612_);
lean_dec_ref(v_s_1604_);
lean_dec(v_mantissa_1594_);
lean_dec_ref(v_a_1557_);
v___x_1663_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1664_ = l_Nat_reprFast(v_a_1616_);
v___x_1665_ = lean_string_append(v___x_1663_, v___x_1664_);
lean_dec_ref(v___x_1664_);
if (v_isShared_1615_ == 0)
{
lean_ctor_set_tag(v___x_1614_, 18);
lean_ctor_set(v___x_1614_, 0, v___x_1665_);
v___x_1667_ = v___x_1614_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1669_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 1);
lean_ctor_set(v___x_1606_, 0, v___x_1667_);
v___x_1669_ = v___x_1606_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1677_; 
lean_dec(v___x_1611_);
lean_dec_ref(v_s_1604_);
lean_dec(v_mantissa_1594_);
lean_dec(v_mantissa_1586_);
lean_dec_ref(v_a_1557_);
v___x_1673_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1674_ = l_Nat_reprFast(v_a_1610_);
v___x_1675_ = lean_string_append(v___x_1673_, v___x_1674_);
lean_dec_ref(v___x_1674_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 18);
lean_ctor_set(v___x_1606_, 0, v___x_1675_);
v___x_1677_ = v___x_1606_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
lean_object* v___x_1679_; 
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1677_);
v___x_1679_ = v___x_1602_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
}
else
{
lean_del_object(v___x_1602_);
lean_dec(v_val_1600_);
lean_dec(v_mantissa_1594_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1568_;
}
}
}
else
{
lean_dec(v___x_1599_);
lean_dec(v_mantissa_1594_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1568_;
}
}
}
else
{
lean_dec(v_exponent_1595_);
lean_dec(v_mantissa_1594_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1565_;
}
}
else
{
lean_dec(v_val_1592_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1565_;
}
}
else
{
lean_dec(v___x_1591_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1565_;
}
}
}
else
{
lean_dec(v_exponent_1587_);
lean_dec(v_mantissa_1586_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1562_;
}
}
else
{
lean_dec(v_val_1584_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1562_;
}
}
else
{
lean_dec(v___x_1583_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1562_;
}
}
}
else
{
lean_dec(v_exponent_1577_);
lean_dec(v_mantissa_1576_);
lean_dec_ref(v_a_1557_);
goto v___jp_1559_;
}
}
else
{
lean_dec(v_val_1574_);
lean_dec_ref(v_a_1557_);
goto v___jp_1559_;
}
}
else
{
lean_dec(v___x_1573_);
lean_dec_ref(v_a_1557_);
goto v___jp_1559_;
}
}
else
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_dec_ref(v_a_1557_);
v___x_1684_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
return v___x_1685_;
}
v___jp_1559_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
return v___x_1561_;
}
v___jp_1562_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
v___jp_1565_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1566_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
return v___x_1567_;
}
v___jp_1568_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___closed__1));
v___x_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE___boxed(lean_object* v_json_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(v_json_1686_, v_a_1687_);
lean_dec(v_json_1686_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(lean_object* v_json_1695_, lean_object* v_a_1696_){
_start:
{
if (lean_obj_tag(v_json_1695_) == 5)
{
lean_object* v_kvPairs_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_kvPairs_1713_ = lean_ctor_get(v_json_1695_, 0);
v___x_1714_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_1715_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1713_, v___x_1714_);
if (lean_obj_tag(v___x_1715_) == 1)
{
lean_object* v_val_1716_; 
v_val_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_val_1716_);
lean_dec_ref_known(v___x_1715_, 1);
if (lean_obj_tag(v_val_1716_) == 2)
{
lean_object* v_n_1717_; lean_object* v_mantissa_1718_; lean_object* v_exponent_1719_; lean_object* v_natZero_1720_; lean_object* v_intZero_1721_; uint8_t v_isNeg_1722_; 
v_n_1717_ = lean_ctor_get(v_val_1716_, 0);
lean_inc_ref(v_n_1717_);
lean_dec_ref_known(v_val_1716_, 1);
v_mantissa_1718_ = lean_ctor_get(v_n_1717_, 0);
lean_inc(v_mantissa_1718_);
v_exponent_1719_ = lean_ctor_get(v_n_1717_, 1);
lean_inc(v_exponent_1719_);
lean_dec_ref(v_n_1717_);
v_natZero_1720_ = lean_unsigned_to_nat(0u);
v_intZero_1721_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1722_ = lean_int_dec_lt(v_mantissa_1718_, v_intZero_1721_);
if (v_isNeg_1722_ == 0)
{
uint8_t v___x_1723_; 
v___x_1723_ = lean_nat_dec_eq(v_exponent_1719_, v_natZero_1720_);
lean_dec(v_exponent_1719_);
if (v___x_1723_ == 0)
{
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1698_;
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_1725_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1713_, v___x_1724_);
if (lean_obj_tag(v___x_1725_) == 1)
{
lean_object* v_val_1726_; 
v_val_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_val_1726_);
lean_dec_ref_known(v___x_1725_, 1);
if (lean_obj_tag(v_val_1726_) == 2)
{
lean_object* v_n_1727_; lean_object* v_mantissa_1728_; lean_object* v_exponent_1729_; uint8_t v_isNeg_1730_; 
v_n_1727_ = lean_ctor_get(v_val_1726_, 0);
lean_inc_ref(v_n_1727_);
lean_dec_ref_known(v_val_1726_, 1);
v_mantissa_1728_ = lean_ctor_get(v_n_1727_, 0);
lean_inc(v_mantissa_1728_);
v_exponent_1729_ = lean_ctor_get(v_n_1727_, 1);
lean_inc(v_exponent_1729_);
lean_dec_ref(v_n_1727_);
v_isNeg_1730_ = lean_int_dec_lt(v_mantissa_1728_, v_intZero_1721_);
if (v_isNeg_1730_ == 0)
{
uint8_t v___x_1731_; 
v___x_1731_ = lean_nat_dec_eq(v_exponent_1729_, v_natZero_1720_);
lean_dec(v_exponent_1729_);
if (v___x_1731_ == 0)
{
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1701_;
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_1733_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1713_, v___x_1732_);
if (lean_obj_tag(v___x_1733_) == 1)
{
lean_object* v_val_1734_; 
v_val_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_val_1734_);
lean_dec_ref_known(v___x_1733_, 1);
if (lean_obj_tag(v_val_1734_) == 2)
{
lean_object* v_n_1735_; lean_object* v_mantissa_1736_; lean_object* v_exponent_1737_; uint8_t v_isNeg_1738_; 
v_n_1735_ = lean_ctor_get(v_val_1734_, 0);
lean_inc_ref(v_n_1735_);
lean_dec_ref_known(v_val_1734_, 1);
v_mantissa_1736_ = lean_ctor_get(v_n_1735_, 0);
lean_inc(v_mantissa_1736_);
v_exponent_1737_ = lean_ctor_get(v_n_1735_, 1);
lean_inc(v_exponent_1737_);
lean_dec_ref(v_n_1735_);
v_isNeg_1738_ = lean_int_dec_lt(v_mantissa_1736_, v_intZero_1721_);
if (v_isNeg_1738_ == 0)
{
uint8_t v___x_1739_; 
v___x_1739_ = lean_nat_dec_eq(v_exponent_1737_, v_natZero_1720_);
lean_dec(v_exponent_1737_);
if (v___x_1739_ == 0)
{
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1704_;
}
else
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__3));
v___x_1741_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1713_, v___x_1740_);
if (lean_obj_tag(v___x_1741_) == 1)
{
lean_object* v_val_1742_; 
v_val_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_val_1742_);
lean_dec_ref_known(v___x_1741_, 1);
if (lean_obj_tag(v_val_1742_) == 2)
{
lean_object* v_n_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1836_; 
v_n_1743_ = lean_ctor_get(v_val_1742_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_val_1742_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1745_ = v_val_1742_;
v_isShared_1746_ = v_isSharedCheck_1836_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_n_1743_);
lean_dec(v_val_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1836_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_mantissa_1747_; lean_object* v_exponent_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1835_; 
v_mantissa_1747_ = lean_ctor_get(v_n_1743_, 0);
v_exponent_1748_ = lean_ctor_get(v_n_1743_, 1);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_n_1743_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1750_ = v_n_1743_;
v_isShared_1751_ = v_isSharedCheck_1835_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_exponent_1748_);
lean_inc(v_mantissa_1747_);
lean_dec(v_n_1743_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1835_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
uint8_t v_isNeg_1752_; 
v_isNeg_1752_ = lean_int_dec_lt(v_mantissa_1747_, v_intZero_1721_);
if (v_isNeg_1752_ == 0)
{
uint8_t v___x_1753_; 
v___x_1753_ = lean_nat_dec_eq(v_exponent_1748_, v_natZero_1720_);
lean_dec(v_exponent_1748_);
if (v___x_1753_ == 0)
{
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_del_object(v___x_1745_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1707_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__3));
v___x_1755_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1713_, v___x_1754_);
if (lean_obj_tag(v___x_1755_) == 1)
{
lean_object* v_val_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1834_; 
v_val_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1834_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_val_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1834_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
if (lean_obj_tag(v_val_1756_) == 1)
{
uint8_t v_b_1760_; lean_object* v_nameMap_1761_; lean_object* v_exprMap_1762_; lean_object* v_a_1763_; lean_object* v___x_1764_; 
v_b_1760_ = lean_ctor_get_uint8(v_val_1756_, 0);
lean_dec_ref_known(v_val_1756_, 0);
v_nameMap_1761_ = lean_ctor_get(v_a_1696_, 1);
v_exprMap_1762_ = lean_ctor_get(v_a_1696_, 3);
v_a_1763_ = lean_nat_abs(v_mantissa_1718_);
lean_dec(v_mantissa_1718_);
v___x_1764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1761_, v_a_1763_);
if (lean_obj_tag(v___x_1764_) == 1)
{
lean_object* v_val_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1824_; 
lean_dec(v_a_1763_);
lean_del_object(v___x_1745_);
v_val_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1824_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_val_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1824_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v_a_1769_; lean_object* v___x_1770_; 
v_a_1769_ = lean_nat_abs(v_mantissa_1728_);
lean_dec(v_mantissa_1728_);
v___x_1770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1762_, v_a_1769_);
if (lean_obj_tag(v___x_1770_) == 1)
{
lean_object* v_val_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1814_; 
lean_dec(v_a_1769_);
lean_del_object(v___x_1758_);
v_val_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1814_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_val_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1814_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v_a_1775_; lean_object* v___x_1776_; 
v_a_1775_ = lean_nat_abs(v_mantissa_1736_);
lean_dec(v_mantissa_1736_);
v___x_1776_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1762_, v_a_1775_);
if (lean_obj_tag(v___x_1776_) == 1)
{
lean_object* v_val_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1804_; 
lean_dec(v_a_1775_);
lean_del_object(v___x_1767_);
v_val_1777_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1779_ = v___x_1776_;
v_isShared_1780_ = v_isSharedCheck_1804_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_val_1777_);
lean_dec(v___x_1776_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1804_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v_a_1781_; lean_object* v___x_1782_; 
v_a_1781_ = lean_nat_abs(v_mantissa_1747_);
lean_dec(v_mantissa_1747_);
v___x_1782_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1762_, v_a_1781_);
if (lean_obj_tag(v___x_1782_) == 1)
{
lean_object* v_val_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1794_; 
lean_dec(v_a_1781_);
lean_del_object(v___x_1779_);
lean_del_object(v___x_1773_);
v_val_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1794_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_val_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1794_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1787_; lean_object* v___x_1789_; 
v___x_1787_ = l_Lean_Expr_letE___override(v_val_1765_, v_val_1771_, v_val_1777_, v_val_1783_, v_b_1760_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 1, v_a_1696_);
lean_ctor_set(v___x_1750_, 0, v___x_1787_);
v___x_1789_ = v___x_1750_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_a_1696_);
v___x_1789_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
lean_object* v___x_1791_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set_tag(v___x_1785_, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1789_);
v___x_1791_ = v___x_1785_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
lean_dec(v___x_1782_);
lean_dec(v_val_1777_);
lean_dec(v_val_1771_);
lean_dec(v_val_1765_);
lean_del_object(v___x_1750_);
lean_dec_ref(v_a_1696_);
v___x_1795_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1796_ = l_Nat_reprFast(v_a_1781_);
v___x_1797_ = lean_string_append(v___x_1795_, v___x_1796_);
lean_dec_ref(v___x_1796_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set_tag(v___x_1779_, 18);
lean_ctor_set(v___x_1779_, 0, v___x_1797_);
v___x_1799_ = v___x_1779_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v___x_1801_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1799_);
v___x_1801_ = v___x_1773_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec(v___x_1776_);
lean_dec(v_val_1771_);
lean_dec(v_val_1765_);
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_dec_ref(v_a_1696_);
v___x_1805_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1806_ = l_Nat_reprFast(v_a_1775_);
v___x_1807_ = lean_string_append(v___x_1805_, v___x_1806_);
lean_dec_ref(v___x_1806_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set_tag(v___x_1773_, 18);
lean_ctor_set(v___x_1773_, 0, v___x_1807_);
v___x_1809_ = v___x_1773_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1811_; 
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v___x_1809_);
v___x_1811_ = v___x_1767_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
else
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
lean_dec(v___x_1770_);
lean_dec(v_val_1765_);
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_dec(v_mantissa_1736_);
lean_dec_ref(v_a_1696_);
v___x_1815_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1816_ = l_Nat_reprFast(v_a_1769_);
v___x_1817_ = lean_string_append(v___x_1815_, v___x_1816_);
lean_dec_ref(v___x_1816_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 18);
lean_ctor_set(v___x_1767_, 0, v___x_1817_);
v___x_1819_ = v___x_1767_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
lean_object* v___x_1821_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 0, v___x_1819_);
v___x_1821_ = v___x_1758_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1829_; 
lean_dec(v___x_1764_);
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec_ref(v_a_1696_);
v___x_1825_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1826_ = l_Nat_reprFast(v_a_1763_);
v___x_1827_ = lean_string_append(v___x_1825_, v___x_1826_);
lean_dec_ref(v___x_1826_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 18);
lean_ctor_set(v___x_1758_, 0, v___x_1827_);
v___x_1829_ = v___x_1758_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v___x_1831_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set_tag(v___x_1745_, 1);
lean_ctor_set(v___x_1745_, 0, v___x_1829_);
v___x_1831_ = v___x_1745_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1829_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
else
{
lean_del_object(v___x_1758_);
lean_dec(v_val_1756_);
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_del_object(v___x_1745_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1710_;
}
}
}
else
{
lean_dec(v___x_1755_);
lean_del_object(v___x_1750_);
lean_dec(v_mantissa_1747_);
lean_del_object(v___x_1745_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1710_;
}
}
}
else
{
lean_del_object(v___x_1750_);
lean_dec(v_exponent_1748_);
lean_dec(v_mantissa_1747_);
lean_del_object(v___x_1745_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1707_;
}
}
}
}
else
{
lean_dec(v_val_1742_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1707_;
}
}
else
{
lean_dec(v___x_1741_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1707_;
}
}
}
else
{
lean_dec(v_exponent_1737_);
lean_dec(v_mantissa_1736_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1704_;
}
}
else
{
lean_dec(v_val_1734_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1704_;
}
}
else
{
lean_dec(v___x_1733_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1704_;
}
}
}
else
{
lean_dec(v_exponent_1729_);
lean_dec(v_mantissa_1728_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1701_;
}
}
else
{
lean_dec(v_val_1726_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1701_;
}
}
else
{
lean_dec(v___x_1725_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1701_;
}
}
}
else
{
lean_dec(v_exponent_1719_);
lean_dec(v_mantissa_1718_);
lean_dec_ref(v_a_1696_);
goto v___jp_1698_;
}
}
else
{
lean_dec(v_val_1716_);
lean_dec_ref(v_a_1696_);
goto v___jp_1698_;
}
}
else
{
lean_dec(v___x_1715_);
lean_dec_ref(v_a_1696_);
goto v___jp_1698_;
}
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec_ref(v_a_1696_);
v___x_1837_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
return v___x_1838_;
}
v___jp_1698_:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
return v___x_1700_;
}
v___jp_1701_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
return v___x_1703_;
}
v___jp_1704_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1705_);
return v___x_1706_;
}
v___jp_1707_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
return v___x_1709_;
}
v___jp_1710_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__1));
v___x_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
return v___x_1712_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___boxed(lean_object* v_json_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(v_json_1839_, v_a_1840_);
lean_dec(v_json_1839_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(lean_object* v_json_1849_, lean_object* v_a_1850_){
_start:
{
if (lean_obj_tag(v_json_1849_) == 5)
{
lean_object* v_kvPairs_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v_kvPairs_1861_ = lean_ctor_get(v_json_1849_, 0);
v___x_1862_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__2));
v___x_1863_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1861_, v___x_1862_);
if (lean_obj_tag(v___x_1863_) == 1)
{
lean_object* v_val_1864_; 
v_val_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_val_1864_);
lean_dec_ref_known(v___x_1863_, 1);
if (lean_obj_tag(v_val_1864_) == 2)
{
lean_object* v_n_1865_; lean_object* v_mantissa_1866_; lean_object* v_exponent_1867_; lean_object* v_natZero_1868_; lean_object* v_intZero_1869_; uint8_t v_isNeg_1870_; 
v_n_1865_ = lean_ctor_get(v_val_1864_, 0);
lean_inc_ref(v_n_1865_);
lean_dec_ref_known(v_val_1864_, 1);
v_mantissa_1866_ = lean_ctor_get(v_n_1865_, 0);
lean_inc(v_mantissa_1866_);
v_exponent_1867_ = lean_ctor_get(v_n_1865_, 1);
lean_inc(v_exponent_1867_);
lean_dec_ref(v_n_1865_);
v_natZero_1868_ = lean_unsigned_to_nat(0u);
v_intZero_1869_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_1870_ = lean_int_dec_lt(v_mantissa_1866_, v_intZero_1869_);
if (v_isNeg_1870_ == 0)
{
uint8_t v___x_1871_; 
v___x_1871_ = lean_nat_dec_eq(v_exponent_1867_, v_natZero_1868_);
lean_dec(v_exponent_1867_);
if (v___x_1871_ == 0)
{
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1852_;
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__3));
v___x_1873_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1861_, v___x_1872_);
if (lean_obj_tag(v___x_1873_) == 1)
{
lean_object* v_val_1874_; 
v_val_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v___x_1873_, 1);
if (lean_obj_tag(v_val_1874_) == 2)
{
lean_object* v_n_1875_; lean_object* v_mantissa_1876_; lean_object* v_exponent_1877_; uint8_t v_isNeg_1878_; 
v_n_1875_ = lean_ctor_get(v_val_1874_, 0);
lean_inc_ref(v_n_1875_);
lean_dec_ref_known(v_val_1874_, 1);
v_mantissa_1876_ = lean_ctor_get(v_n_1875_, 0);
lean_inc(v_mantissa_1876_);
v_exponent_1877_ = lean_ctor_get(v_n_1875_, 1);
lean_inc(v_exponent_1877_);
lean_dec_ref(v_n_1875_);
v_isNeg_1878_ = lean_int_dec_lt(v_mantissa_1876_, v_intZero_1869_);
if (v_isNeg_1878_ == 0)
{
uint8_t v___x_1879_; 
v___x_1879_ = lean_nat_dec_eq(v_exponent_1877_, v_natZero_1868_);
lean_dec(v_exponent_1877_);
if (v___x_1879_ == 0)
{
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1855_;
}
else
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__4));
v___x_1881_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_1861_, v___x_1880_);
if (lean_obj_tag(v___x_1881_) == 1)
{
lean_object* v_val_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1941_; 
v_val_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1941_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_val_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1941_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
if (lean_obj_tag(v_val_1882_) == 2)
{
lean_object* v_n_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1940_; 
v_n_1886_ = lean_ctor_get(v_val_1882_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v_val_1882_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1888_ = v_val_1882_;
v_isShared_1889_ = v_isSharedCheck_1940_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_n_1886_);
lean_dec(v_val_1882_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1940_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_mantissa_1890_; lean_object* v_exponent_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1939_; 
v_mantissa_1890_ = lean_ctor_get(v_n_1886_, 0);
v_exponent_1891_ = lean_ctor_get(v_n_1886_, 1);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_n_1886_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1893_ = v_n_1886_;
v_isShared_1894_ = v_isSharedCheck_1939_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_exponent_1891_);
lean_inc(v_mantissa_1890_);
lean_dec(v_n_1886_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1939_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
uint8_t v_isNeg_1895_; 
v_isNeg_1895_ = lean_int_dec_lt(v_mantissa_1890_, v_intZero_1869_);
if (v_isNeg_1895_ == 0)
{
uint8_t v___x_1896_; 
v___x_1896_ = lean_nat_dec_eq(v_exponent_1891_, v_natZero_1868_);
lean_dec(v_exponent_1891_);
if (v___x_1896_ == 0)
{
lean_del_object(v___x_1893_);
lean_dec(v_mantissa_1890_);
lean_del_object(v___x_1888_);
lean_del_object(v___x_1884_);
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1858_;
}
else
{
lean_object* v_nameMap_1897_; lean_object* v_exprMap_1898_; lean_object* v_a_1899_; lean_object* v___x_1900_; 
v_nameMap_1897_ = lean_ctor_get(v_a_1850_, 1);
v_exprMap_1898_ = lean_ctor_get(v_a_1850_, 3);
v_a_1899_ = lean_nat_abs(v_mantissa_1866_);
lean_dec(v_mantissa_1866_);
v___x_1900_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_1897_, v_a_1899_);
if (lean_obj_tag(v___x_1900_) == 1)
{
lean_object* v_val_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_a_1899_);
lean_del_object(v___x_1884_);
v_val_1901_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1903_ = v___x_1900_;
v_isShared_1904_ = v_isSharedCheck_1929_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_val_1901_);
lean_dec(v___x_1900_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1929_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v_a_1905_; lean_object* v___x_1906_; 
v_a_1905_ = lean_nat_abs(v_mantissa_1890_);
lean_dec(v_mantissa_1890_);
v___x_1906_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_1898_, v_a_1905_);
if (lean_obj_tag(v___x_1906_) == 1)
{
lean_object* v_val_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_a_1905_);
lean_del_object(v___x_1903_);
lean_del_object(v___x_1888_);
v_val_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1919_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_val_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1919_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v_a_1911_; lean_object* v___x_1912_; lean_object* v___x_1914_; 
v_a_1911_ = lean_nat_abs(v_mantissa_1876_);
lean_dec(v_mantissa_1876_);
v___x_1912_ = l_Lean_Expr_proj___override(v_val_1901_, v_a_1911_, v_val_1907_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 1, v_a_1850_);
lean_ctor_set(v___x_1893_, 0, v___x_1912_);
v___x_1914_ = v___x_1893_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1912_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_a_1850_);
v___x_1914_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1916_; 
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1914_);
v___x_1916_ = v___x_1909_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1914_);
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
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1924_; 
lean_dec(v___x_1906_);
lean_dec(v_val_1901_);
lean_del_object(v___x_1893_);
lean_dec(v_mantissa_1876_);
lean_dec_ref(v_a_1850_);
v___x_1920_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_1921_ = l_Nat_reprFast(v_a_1905_);
v___x_1922_ = lean_string_append(v___x_1920_, v___x_1921_);
lean_dec_ref(v___x_1921_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set_tag(v___x_1903_, 18);
lean_ctor_set(v___x_1903_, 0, v___x_1922_);
v___x_1924_ = v___x_1903_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1926_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 1);
lean_ctor_set(v___x_1888_, 0, v___x_1924_);
v___x_1926_ = v___x_1888_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
lean_dec(v___x_1900_);
lean_del_object(v___x_1893_);
lean_dec(v_mantissa_1890_);
lean_dec(v_mantissa_1876_);
lean_dec_ref(v_a_1850_);
v___x_1930_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_1931_ = l_Nat_reprFast(v_a_1899_);
v___x_1932_ = lean_string_append(v___x_1930_, v___x_1931_);
lean_dec_ref(v___x_1931_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 18);
lean_ctor_set(v___x_1888_, 0, v___x_1932_);
v___x_1934_ = v___x_1888_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
lean_object* v___x_1936_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v___x_1934_);
v___x_1936_ = v___x_1884_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
}
else
{
lean_del_object(v___x_1893_);
lean_dec(v_exponent_1891_);
lean_dec(v_mantissa_1890_);
lean_del_object(v___x_1888_);
lean_del_object(v___x_1884_);
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1858_;
}
}
}
}
else
{
lean_del_object(v___x_1884_);
lean_dec(v_val_1882_);
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1858_;
}
}
}
else
{
lean_dec(v___x_1881_);
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1858_;
}
}
}
else
{
lean_dec(v_exponent_1877_);
lean_dec(v_mantissa_1876_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1855_;
}
}
else
{
lean_dec(v_val_1874_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1855_;
}
}
else
{
lean_dec(v___x_1873_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1855_;
}
}
}
else
{
lean_dec(v_exponent_1867_);
lean_dec(v_mantissa_1866_);
lean_dec_ref(v_a_1850_);
goto v___jp_1852_;
}
}
else
{
lean_dec(v_val_1864_);
lean_dec_ref(v_a_1850_);
goto v___jp_1852_;
}
}
else
{
lean_dec(v___x_1863_);
lean_dec_ref(v_a_1850_);
goto v___jp_1852_;
}
}
else
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
lean_dec_ref(v_a_1850_);
v___x_1942_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
return v___x_1943_;
}
v___jp_1852_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
v___jp_1855_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1856_);
return v___x_1857_;
}
v___jp_1858_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___closed__1));
v___x_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
return v___x_1860_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj___boxed(lean_object* v_json_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(v_json_1944_, v_a_1945_);
lean_dec(v_json_1944_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(lean_object* v_json_1951_, lean_object* v_a_1952_){
_start:
{
if (lean_obj_tag(v_json_1951_) == 3)
{
lean_object* v_s_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1979_; 
v_s_1954_ = lean_ctor_get(v_json_1951_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v_json_1951_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1956_ = v_json_1951_;
v_isShared_1957_ = v_isSharedCheck_1979_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_s_1954_);
lean_dec(v_json_1951_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1979_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = lean_string_utf8_byte_size(v_s_1954_);
v___x_1960_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1960_, 0, v_s_1954_);
lean_ctor_set(v___x_1960_, 1, v___x_1958_);
lean_ctor_set(v___x_1960_, 2, v___x_1959_);
v___x_1961_ = l_String_Slice_toNat_x3f(v___x_1960_);
lean_dec_ref_known(v___x_1960_, 3);
if (lean_obj_tag(v___x_1961_) == 1)
{
lean_object* v_val_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1974_; 
v_val_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_val_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
lean_ctor_set_tag(v___x_1964_, 0);
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_val_1962_);
v___x_1967_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1968_ = l_Lean_Expr_lit___override(v___x_1967_);
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
lean_ctor_set(v___x_1969_, 1, v_a_1952_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set_tag(v___x_1956_, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1969_);
v___x_1971_ = v___x_1956_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
else
{
lean_object* v___x_1975_; lean_object* v___x_1977_; 
lean_dec(v___x_1961_);
lean_dec_ref(v_a_1952_);
v___x_1975_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1));
if (v_isShared_1957_ == 0)
{
lean_ctor_set_tag(v___x_1956_, 1);
lean_ctor_set(v___x_1956_, 0, v___x_1975_);
v___x_1977_ = v___x_1956_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___x_1975_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
lean_dec_ref(v_a_1952_);
lean_dec(v_json_1951_);
v___x_1980_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___closed__1));
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit___boxed(lean_object* v_json_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(v_json_1982_, v_a_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(lean_object* v_json_1989_, lean_object* v_a_1990_){
_start:
{
if (lean_obj_tag(v_json_1989_) == 3)
{
lean_object* v_s_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2002_; 
v_s_1992_ = lean_ctor_get(v_json_1989_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_json_1989_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1994_ = v_json_1989_;
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_s_1992_);
lean_dec(v_json_1989_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set_tag(v___x_1994_, 1);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_s_1992_);
v___x_1997_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = l_Lean_Expr_lit___override(v___x_1997_);
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
lean_ctor_set(v___x_1999_, 1, v_a_1990_);
v___x_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
return v___x_2000_;
}
}
}
else
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
lean_dec_ref(v_a_1990_);
lean_dec(v_json_1989_);
v___x_2003_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___closed__1));
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
return v___x_2004_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit___boxed(lean_object* v_json_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(v_json_2005_, v_a_2006_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(lean_object* v_json_2014_, lean_object* v_a_2015_){
_start:
{
if (lean_obj_tag(v_json_2014_) == 5)
{
lean_object* v_kvPairs_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v_kvPairs_2023_ = lean_ctor_get(v_json_2014_, 0);
v___x_2024_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__2));
v___x_2025_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_2023_, v___x_2024_);
if (lean_obj_tag(v___x_2025_) == 1)
{
lean_object* v_val_2026_; 
v_val_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_val_2026_);
lean_dec_ref_known(v___x_2025_, 1);
if (lean_obj_tag(v_val_2026_) == 2)
{
lean_object* v_n_2027_; lean_object* v_mantissa_2028_; lean_object* v_exponent_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2074_; 
v_n_2027_ = lean_ctor_get(v_val_2026_, 0);
lean_inc_ref(v_n_2027_);
lean_dec_ref_known(v_val_2026_, 1);
v_mantissa_2028_ = lean_ctor_get(v_n_2027_, 0);
v_exponent_2029_ = lean_ctor_get(v_n_2027_, 1);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_n_2027_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2031_ = v_n_2027_;
v_isShared_2032_ = v_isSharedCheck_2074_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_exponent_2029_);
lean_inc(v_mantissa_2028_);
lean_dec(v_n_2027_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2074_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v_natZero_2033_; lean_object* v_intZero_2034_; uint8_t v_isNeg_2035_; 
v_natZero_2033_ = lean_unsigned_to_nat(0u);
v_intZero_2034_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2035_ = lean_int_dec_lt(v_mantissa_2028_, v_intZero_2034_);
if (v_isNeg_2035_ == 0)
{
uint8_t v___x_2036_; 
v___x_2036_ = lean_nat_dec_eq(v_exponent_2029_, v_natZero_2033_);
lean_dec(v_exponent_2029_);
if (v___x_2036_ == 0)
{
lean_del_object(v___x_2031_);
lean_dec(v_mantissa_2028_);
lean_dec_ref(v_a_2015_);
goto v___jp_2017_;
}
else
{
lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2037_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__3));
v___x_2038_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_2023_, v___x_2037_);
if (lean_obj_tag(v___x_2038_) == 1)
{
lean_object* v_val_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2073_; 
v_val_2039_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2041_ = v___x_2038_;
v_isShared_2042_ = v_isSharedCheck_2073_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_val_2039_);
lean_dec(v___x_2038_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2073_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
if (lean_obj_tag(v_val_2039_) == 5)
{
lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2071_; 
v_isSharedCheck_2071_ = !lean_is_exclusive(v_val_2039_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; 
v_unused_2072_ = lean_ctor_get(v_val_2039_, 0);
lean_dec(v_unused_2072_);
v___x_2044_ = v_val_2039_;
v_isShared_2045_ = v_isSharedCheck_2071_;
goto v_resetjp_2043_;
}
else
{
lean_dec(v_val_2039_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2071_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v_exprMap_2046_; lean_object* v_a_2047_; lean_object* v___x_2048_; 
v_exprMap_2046_ = lean_ctor_get(v_a_2015_, 3);
v_a_2047_ = lean_nat_abs(v_mantissa_2028_);
lean_dec(v_mantissa_2028_);
v___x_2048_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2046_, v_a_2047_);
if (lean_obj_tag(v___x_2048_) == 1)
{
lean_object* v_val_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2061_; 
lean_dec(v_a_2047_);
lean_del_object(v___x_2044_);
lean_del_object(v___x_2041_);
v_val_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2061_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2061_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_val_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2061_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2056_; 
v___x_2053_ = lean_box(0);
v___x_2054_ = l_Lean_Expr_mdata___override(v___x_2053_, v_val_2049_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 1, v_a_2015_);
lean_ctor_set(v___x_2031_, 0, v___x_2054_);
v___x_2056_ = v___x_2031_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2054_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_a_2015_);
v___x_2056_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
if (v_isShared_2052_ == 0)
{
lean_ctor_set_tag(v___x_2051_, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2056_);
v___x_2058_ = v___x_2051_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2066_; 
lean_dec(v___x_2048_);
lean_del_object(v___x_2031_);
lean_dec_ref(v_a_2015_);
v___x_2062_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2063_ = l_Nat_reprFast(v_a_2047_);
v___x_2064_ = lean_string_append(v___x_2062_, v___x_2063_);
lean_dec_ref(v___x_2063_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set_tag(v___x_2044_, 18);
lean_ctor_set(v___x_2044_, 0, v___x_2064_);
v___x_2066_ = v___x_2044_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2068_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2066_);
v___x_2068_ = v___x_2041_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
else
{
lean_del_object(v___x_2041_);
lean_dec(v_val_2039_);
lean_del_object(v___x_2031_);
lean_dec(v_mantissa_2028_);
lean_dec_ref(v_a_2015_);
goto v___jp_2020_;
}
}
}
else
{
lean_dec(v___x_2038_);
lean_del_object(v___x_2031_);
lean_dec(v_mantissa_2028_);
lean_dec_ref(v_a_2015_);
goto v___jp_2020_;
}
}
}
else
{
lean_del_object(v___x_2031_);
lean_dec(v_exponent_2029_);
lean_dec(v_mantissa_2028_);
lean_dec_ref(v_a_2015_);
goto v___jp_2017_;
}
}
}
else
{
lean_dec(v_val_2026_);
lean_dec_ref(v_a_2015_);
goto v___jp_2017_;
}
}
else
{
lean_dec(v___x_2025_);
lean_dec_ref(v_a_2015_);
goto v___jp_2017_;
}
}
else
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
lean_dec_ref(v_a_2015_);
v___x_2075_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
return v___x_2076_;
}
v___jp_2017_:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
return v___x_2019_;
}
v___jp_2020_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___closed__1));
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
return v___x_2022_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata___boxed(lean_object* v_json_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(v_json_2077_, v_a_2078_);
lean_dec(v_json_2077_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(lean_object* v_x_2084_, lean_object* v_x_2085_, lean_object* v___y_2086_){
_start:
{
if (lean_obj_tag(v_x_2084_) == 0)
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2091_ = l_List_reverse___redArg(v_x_2085_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v___y_2086_);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
else
{
lean_object* v_head_2094_; 
v_head_2094_ = lean_ctor_get(v_x_2084_, 0);
lean_inc(v_head_2094_);
if (lean_obj_tag(v_head_2094_) == 2)
{
lean_object* v_n_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2126_; 
v_n_2095_ = lean_ctor_get(v_head_2094_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_head_2094_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2097_ = v_head_2094_;
v_isShared_2098_ = v_isSharedCheck_2126_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_n_2095_);
lean_dec(v_head_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2126_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v_tail_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2124_; 
v_tail_2099_ = lean_ctor_get(v_x_2084_, 1);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2084_);
if (v_isSharedCheck_2124_ == 0)
{
lean_object* v_unused_2125_; 
v_unused_2125_ = lean_ctor_get(v_x_2084_, 0);
lean_dec(v_unused_2125_);
v___x_2101_ = v_x_2084_;
v_isShared_2102_ = v_isSharedCheck_2124_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_tail_2099_);
lean_dec(v_x_2084_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2124_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v_mantissa_2103_; lean_object* v_exponent_2104_; lean_object* v_natZero_2105_; lean_object* v_intZero_2106_; uint8_t v_isNeg_2107_; 
v_mantissa_2103_ = lean_ctor_get(v_n_2095_, 0);
lean_inc(v_mantissa_2103_);
v_exponent_2104_ = lean_ctor_get(v_n_2095_, 1);
lean_inc(v_exponent_2104_);
lean_dec_ref(v_n_2095_);
v_natZero_2105_ = lean_unsigned_to_nat(0u);
v_intZero_2106_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2107_ = lean_int_dec_lt(v_mantissa_2103_, v_intZero_2106_);
if (v_isNeg_2107_ == 0)
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_nat_dec_eq(v_exponent_2104_, v_natZero_2105_);
lean_dec(v_exponent_2104_);
if (v___x_2108_ == 0)
{
lean_dec(v_mantissa_2103_);
lean_del_object(v___x_2101_);
lean_dec(v_tail_2099_);
lean_del_object(v___x_2097_);
lean_dec_ref(v___y_2086_);
lean_dec(v_x_2085_);
goto v___jp_2088_;
}
else
{
lean_object* v_nameMap_2109_; lean_object* v_a_2110_; lean_object* v___x_2111_; 
v_nameMap_2109_ = lean_ctor_get(v___y_2086_, 1);
v_a_2110_ = lean_nat_abs(v_mantissa_2103_);
lean_dec(v_mantissa_2103_);
v___x_2111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2109_, v_a_2110_);
if (lean_obj_tag(v___x_2111_) == 1)
{
lean_object* v_val_2112_; lean_object* v___x_2114_; 
lean_dec(v_a_2110_);
lean_del_object(v___x_2097_);
v_val_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_val_2112_);
lean_dec_ref_known(v___x_2111_, 1);
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 1, v_x_2085_);
lean_ctor_set(v___x_2101_, 0, v_val_2112_);
v___x_2114_ = v___x_2101_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_val_2112_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_x_2085_);
v___x_2114_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
v_x_2084_ = v_tail_2099_;
v_x_2085_ = v___x_2114_;
goto _start;
}
}
else
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
lean_dec(v___x_2111_);
lean_del_object(v___x_2101_);
lean_dec(v_tail_2099_);
lean_dec_ref(v___y_2086_);
lean_dec(v_x_2085_);
v___x_2117_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2118_ = l_Nat_reprFast(v_a_2110_);
v___x_2119_ = lean_string_append(v___x_2117_, v___x_2118_);
lean_dec_ref(v___x_2118_);
if (v_isShared_2098_ == 0)
{
lean_ctor_set_tag(v___x_2097_, 18);
lean_ctor_set(v___x_2097_, 0, v___x_2119_);
v___x_2121_ = v___x_2097_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
return v___x_2122_;
}
}
}
}
else
{
lean_dec(v_exponent_2104_);
lean_dec(v_mantissa_2103_);
lean_del_object(v___x_2101_);
lean_dec(v_tail_2099_);
lean_del_object(v___x_2097_);
lean_dec_ref(v___y_2086_);
lean_dec(v_x_2085_);
goto v___jp_2088_;
}
}
}
}
else
{
lean_dec(v_head_2094_);
lean_dec_ref_known(v_x_2084_, 2);
lean_dec_ref(v___y_2086_);
lean_dec(v_x_2085_);
goto v___jp_2088_;
}
}
v___jp_2088_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___closed__1));
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
return v___x_2090_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0___boxed(lean_object* v_x_2127_, lean_object* v_x_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(v_x_2127_, v_x_2128_, v___y_2129_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(lean_object* v_idxs_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2135_ = lean_array_to_list(v_idxs_2132_);
v___x_2136_ = lean_box(0);
v___x_2137_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_getNameList_spec__0(v___x_2135_, v___x_2136_, v_a_2133_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList___boxed(lean_object* v_idxs_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_idxs_2138_, v_a_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(lean_object* v_a_2142_, lean_object* v_x_2143_){
_start:
{
if (lean_obj_tag(v_x_2143_) == 0)
{
uint8_t v___x_2144_; 
v___x_2144_ = 0;
return v___x_2144_;
}
else
{
lean_object* v_key_2145_; lean_object* v_tail_2146_; uint8_t v___x_2147_; 
v_key_2145_ = lean_ctor_get(v_x_2143_, 0);
v_tail_2146_ = lean_ctor_get(v_x_2143_, 2);
v___x_2147_ = lean_name_eq(v_key_2145_, v_a_2142_);
if (v___x_2147_ == 0)
{
v_x_2143_ = v_tail_2146_;
goto _start;
}
else
{
return v___x_2147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg___boxed(lean_object* v_a_2149_, lean_object* v_x_2150_){
_start:
{
uint8_t v_res_2151_; lean_object* v_r_2152_; 
v_res_2151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2149_, v_x_2150_);
lean_dec(v_x_2150_);
lean_dec(v_a_2149_);
v_r_2152_ = lean_box(v_res_2151_);
return v_r_2152_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(lean_object* v_m_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_buckets_2155_; lean_object* v___x_2156_; uint64_t v___y_2158_; 
v_buckets_2155_ = lean_ctor_get(v_m_2153_, 1);
v___x_2156_ = lean_array_get_size(v_buckets_2155_);
if (lean_obj_tag(v_a_2154_) == 0)
{
uint64_t v___x_2172_; 
v___x_2172_ = 1723ULL;
v___y_2158_ = v___x_2172_;
goto v___jp_2157_;
}
else
{
uint64_t v_hash_2173_; 
v_hash_2173_ = lean_ctor_get_uint64(v_a_2154_, sizeof(void*)*2);
v___y_2158_ = v_hash_2173_;
goto v___jp_2157_;
}
v___jp_2157_:
{
uint64_t v___x_2159_; uint64_t v___x_2160_; uint64_t v_fold_2161_; uint64_t v___x_2162_; uint64_t v___x_2163_; uint64_t v___x_2164_; size_t v___x_2165_; size_t v___x_2166_; size_t v___x_2167_; size_t v___x_2168_; size_t v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v___x_2159_ = 32ULL;
v___x_2160_ = lean_uint64_shift_right(v___y_2158_, v___x_2159_);
v_fold_2161_ = lean_uint64_xor(v___y_2158_, v___x_2160_);
v___x_2162_ = 16ULL;
v___x_2163_ = lean_uint64_shift_right(v_fold_2161_, v___x_2162_);
v___x_2164_ = lean_uint64_xor(v_fold_2161_, v___x_2163_);
v___x_2165_ = lean_uint64_to_usize(v___x_2164_);
v___x_2166_ = lean_usize_of_nat(v___x_2156_);
v___x_2167_ = ((size_t)1ULL);
v___x_2168_ = lean_usize_sub(v___x_2166_, v___x_2167_);
v___x_2169_ = lean_usize_land(v___x_2165_, v___x_2168_);
v___x_2170_ = lean_array_uget_borrowed(v_buckets_2155_, v___x_2169_);
v___x_2171_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2154_, v___x_2170_);
return v___x_2171_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg___boxed(lean_object* v_m_2174_, lean_object* v_a_2175_){
_start:
{
uint8_t v_res_2176_; lean_object* v_r_2177_; 
v_res_2176_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_m_2174_, v_a_2175_);
lean_dec(v_a_2175_);
lean_dec_ref(v_m_2174_);
v_r_2177_ = lean_box(v_res_2176_);
return v_r_2177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2178_, lean_object* v_x_2179_){
_start:
{
if (lean_obj_tag(v_x_2179_) == 0)
{
return v_x_2178_;
}
else
{
lean_object* v_key_2180_; lean_object* v_value_2181_; lean_object* v_tail_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2208_; 
v_key_2180_ = lean_ctor_get(v_x_2179_, 0);
v_value_2181_ = lean_ctor_get(v_x_2179_, 1);
v_tail_2182_ = lean_ctor_get(v_x_2179_, 2);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2184_ = v_x_2179_;
v_isShared_2185_ = v_isSharedCheck_2208_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_tail_2182_);
lean_inc(v_value_2181_);
lean_inc(v_key_2180_);
lean_dec(v_x_2179_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2208_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; uint64_t v___y_2188_; 
v___x_2186_ = lean_array_get_size(v_x_2178_);
if (lean_obj_tag(v_key_2180_) == 0)
{
uint64_t v___x_2206_; 
v___x_2206_ = 1723ULL;
v___y_2188_ = v___x_2206_;
goto v___jp_2187_;
}
else
{
uint64_t v_hash_2207_; 
v_hash_2207_ = lean_ctor_get_uint64(v_key_2180_, sizeof(void*)*2);
v___y_2188_ = v_hash_2207_;
goto v___jp_2187_;
}
v___jp_2187_:
{
uint64_t v___x_2189_; uint64_t v___x_2190_; uint64_t v_fold_2191_; uint64_t v___x_2192_; uint64_t v___x_2193_; uint64_t v___x_2194_; size_t v___x_2195_; size_t v___x_2196_; size_t v___x_2197_; size_t v___x_2198_; size_t v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2189_ = 32ULL;
v___x_2190_ = lean_uint64_shift_right(v___y_2188_, v___x_2189_);
v_fold_2191_ = lean_uint64_xor(v___y_2188_, v___x_2190_);
v___x_2192_ = 16ULL;
v___x_2193_ = lean_uint64_shift_right(v_fold_2191_, v___x_2192_);
v___x_2194_ = lean_uint64_xor(v_fold_2191_, v___x_2193_);
v___x_2195_ = lean_uint64_to_usize(v___x_2194_);
v___x_2196_ = lean_usize_of_nat(v___x_2186_);
v___x_2197_ = ((size_t)1ULL);
v___x_2198_ = lean_usize_sub(v___x_2196_, v___x_2197_);
v___x_2199_ = lean_usize_land(v___x_2195_, v___x_2198_);
v___x_2200_ = lean_array_uget_borrowed(v_x_2178_, v___x_2199_);
lean_inc(v___x_2200_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 2, v___x_2200_);
v___x_2202_ = v___x_2184_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_key_2180_);
lean_ctor_set(v_reuseFailAlloc_2205_, 1, v_value_2181_);
lean_ctor_set(v_reuseFailAlloc_2205_, 2, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_array_uset(v_x_2178_, v___x_2199_, v___x_2202_);
v_x_2178_ = v___x_2203_;
v_x_2179_ = v_tail_2182_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(lean_object* v_i_2209_, lean_object* v_source_2210_, lean_object* v_target_2211_){
_start:
{
lean_object* v___x_2212_; uint8_t v___x_2213_; 
v___x_2212_ = lean_array_get_size(v_source_2210_);
v___x_2213_ = lean_nat_dec_lt(v_i_2209_, v___x_2212_);
if (v___x_2213_ == 0)
{
lean_dec_ref(v_source_2210_);
lean_dec(v_i_2209_);
return v_target_2211_;
}
else
{
lean_object* v_es_2214_; lean_object* v___x_2215_; lean_object* v_source_2216_; lean_object* v_target_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v_es_2214_ = lean_array_fget(v_source_2210_, v_i_2209_);
v___x_2215_ = lean_box(0);
v_source_2216_ = lean_array_fset(v_source_2210_, v_i_2209_, v___x_2215_);
v_target_2217_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(v_target_2211_, v_es_2214_);
v___x_2218_ = lean_unsigned_to_nat(1u);
v___x_2219_ = lean_nat_add(v_i_2209_, v___x_2218_);
lean_dec(v_i_2209_);
v_i_2209_ = v___x_2219_;
v_source_2210_ = v_source_2216_;
v_target_2211_ = v_target_2217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(lean_object* v_data_2221_){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v_nbuckets_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2222_ = lean_array_get_size(v_data_2221_);
v___x_2223_ = lean_unsigned_to_nat(2u);
v_nbuckets_2224_ = lean_nat_mul(v___x_2222_, v___x_2223_);
v___x_2225_ = lean_unsigned_to_nat(0u);
v___x_2226_ = lean_box(0);
v___x_2227_ = lean_mk_array(v_nbuckets_2224_, v___x_2226_);
v___x_2228_ = lean_array_propagate_mark(v_data_2221_, v___x_2227_);
v___x_2229_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(v___x_2225_, v_data_2221_, v___x_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(lean_object* v_a_2230_, lean_object* v_b_2231_, lean_object* v_x_2232_){
_start:
{
if (lean_obj_tag(v_x_2232_) == 0)
{
lean_dec(v_b_2231_);
lean_dec(v_a_2230_);
return v_x_2232_;
}
else
{
lean_object* v_key_2233_; lean_object* v_value_2234_; lean_object* v_tail_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2247_; 
v_key_2233_ = lean_ctor_get(v_x_2232_, 0);
v_value_2234_ = lean_ctor_get(v_x_2232_, 1);
v_tail_2235_ = lean_ctor_get(v_x_2232_, 2);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_x_2232_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2237_ = v_x_2232_;
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_tail_2235_);
lean_inc(v_value_2234_);
lean_inc(v_key_2233_);
lean_dec(v_x_2232_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
uint8_t v___x_2239_; 
v___x_2239_ = lean_name_eq(v_key_2233_, v_a_2230_);
if (v___x_2239_ == 0)
{
lean_object* v___x_2240_; lean_object* v___x_2242_; 
v___x_2240_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2230_, v_b_2231_, v_tail_2235_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 2, v___x_2240_);
v___x_2242_ = v___x_2237_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_key_2233_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_value_2234_);
lean_ctor_set(v_reuseFailAlloc_2243_, 2, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
else
{
lean_object* v___x_2245_; 
lean_dec(v_value_2234_);
lean_dec(v_key_2233_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 1, v_b_2231_);
lean_ctor_set(v___x_2237_, 0, v_a_2230_);
v___x_2245_ = v___x_2237_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2230_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_b_2231_);
lean_ctor_set(v_reuseFailAlloc_2246_, 2, v_tail_2235_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object* v_m_2248_, lean_object* v_a_2249_, lean_object* v_b_2250_){
_start:
{
lean_object* v_size_2251_; lean_object* v_buckets_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2298_; 
v_size_2251_ = lean_ctor_get(v_m_2248_, 0);
v_buckets_2252_ = lean_ctor_get(v_m_2248_, 1);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_m_2248_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2254_ = v_m_2248_;
v_isShared_2255_ = v_isSharedCheck_2298_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_buckets_2252_);
lean_inc(v_size_2251_);
lean_dec(v_m_2248_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2298_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2256_; uint64_t v___y_2258_; 
v___x_2256_ = lean_array_get_size(v_buckets_2252_);
if (lean_obj_tag(v_a_2249_) == 0)
{
uint64_t v___x_2296_; 
v___x_2296_ = 1723ULL;
v___y_2258_ = v___x_2296_;
goto v___jp_2257_;
}
else
{
uint64_t v_hash_2297_; 
v_hash_2297_ = lean_ctor_get_uint64(v_a_2249_, sizeof(void*)*2);
v___y_2258_ = v_hash_2297_;
goto v___jp_2257_;
}
v___jp_2257_:
{
uint64_t v___x_2259_; uint64_t v___x_2260_; uint64_t v_fold_2261_; uint64_t v___x_2262_; uint64_t v___x_2263_; uint64_t v___x_2264_; size_t v___x_2265_; size_t v___x_2266_; size_t v___x_2267_; size_t v___x_2268_; size_t v___x_2269_; lean_object* v_bkt_2270_; uint8_t v___x_2271_; 
v___x_2259_ = 32ULL;
v___x_2260_ = lean_uint64_shift_right(v___y_2258_, v___x_2259_);
v_fold_2261_ = lean_uint64_xor(v___y_2258_, v___x_2260_);
v___x_2262_ = 16ULL;
v___x_2263_ = lean_uint64_shift_right(v_fold_2261_, v___x_2262_);
v___x_2264_ = lean_uint64_xor(v_fold_2261_, v___x_2263_);
v___x_2265_ = lean_uint64_to_usize(v___x_2264_);
v___x_2266_ = lean_usize_of_nat(v___x_2256_);
v___x_2267_ = ((size_t)1ULL);
v___x_2268_ = lean_usize_sub(v___x_2266_, v___x_2267_);
v___x_2269_ = lean_usize_land(v___x_2265_, v___x_2268_);
v_bkt_2270_ = lean_array_uget_borrowed(v_buckets_2252_, v___x_2269_);
v___x_2271_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2249_, v_bkt_2270_);
if (v___x_2271_ == 0)
{
lean_object* v___x_2272_; lean_object* v_size_x27_2273_; lean_object* v___x_2274_; lean_object* v_buckets_x27_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2272_ = lean_unsigned_to_nat(1u);
v_size_x27_2273_ = lean_nat_add(v_size_2251_, v___x_2272_);
lean_dec(v_size_2251_);
lean_inc(v_bkt_2270_);
v___x_2274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2274_, 0, v_a_2249_);
lean_ctor_set(v___x_2274_, 1, v_b_2250_);
lean_ctor_set(v___x_2274_, 2, v_bkt_2270_);
v_buckets_x27_2275_ = lean_array_uset(v_buckets_2252_, v___x_2269_, v___x_2274_);
v___x_2276_ = lean_unsigned_to_nat(4u);
v___x_2277_ = lean_nat_mul(v_size_x27_2273_, v___x_2276_);
v___x_2278_ = lean_unsigned_to_nat(3u);
v___x_2279_ = lean_nat_div(v___x_2277_, v___x_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_array_get_size(v_buckets_x27_2275_);
v___x_2281_ = lean_nat_dec_le(v___x_2279_, v___x_2280_);
lean_dec(v___x_2279_);
if (v___x_2281_ == 0)
{
lean_object* v_val_2282_; lean_object* v___x_2284_; 
v_val_2282_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(v_buckets_x27_2275_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 1, v_val_2282_);
lean_ctor_set(v___x_2254_, 0, v_size_x27_2273_);
v___x_2284_ = v___x_2254_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_size_x27_2273_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_val_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
else
{
lean_object* v___x_2287_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 1, v_buckets_x27_2275_);
lean_ctor_set(v___x_2254_, 0, v_size_x27_2273_);
v___x_2287_ = v___x_2254_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_size_x27_2273_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_buckets_x27_2275_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
else
{
lean_object* v___x_2289_; lean_object* v_buckets_x27_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2294_; 
lean_inc(v_bkt_2270_);
v___x_2289_ = lean_box(0);
v_buckets_x27_2290_ = lean_array_uset(v_buckets_2252_, v___x_2269_, v___x_2289_);
v___x_2291_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2249_, v_b_2250_, v_bkt_2270_);
v___x_2292_ = lean_array_uset(v_buckets_x27_2290_, v___x_2269_, v___x_2291_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 1, v___x_2292_);
v___x_2294_ = v___x_2254_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_size_2251_);
lean_ctor_set(v_reuseFailAlloc_2295_, 1, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(lean_object* v_data_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2320_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2304_, v___x_2319_);
if (lean_obj_tag(v___x_2320_) == 1)
{
lean_object* v_val_2321_; 
v_val_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_val_2321_);
lean_dec_ref_known(v___x_2320_, 1);
if (lean_obj_tag(v_val_2321_) == 2)
{
lean_object* v_n_2322_; lean_object* v_mantissa_2323_; lean_object* v_exponent_2324_; lean_object* v_natZero_2325_; lean_object* v_intZero_2326_; uint8_t v_isNeg_2327_; 
v_n_2322_ = lean_ctor_get(v_val_2321_, 0);
lean_inc_ref(v_n_2322_);
lean_dec_ref_known(v_val_2321_, 1);
v_mantissa_2323_ = lean_ctor_get(v_n_2322_, 0);
lean_inc(v_mantissa_2323_);
v_exponent_2324_ = lean_ctor_get(v_n_2322_, 1);
lean_inc(v_exponent_2324_);
lean_dec_ref(v_n_2322_);
v_natZero_2325_ = lean_unsigned_to_nat(0u);
v_intZero_2326_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2327_ = lean_int_dec_lt(v_mantissa_2323_, v_intZero_2326_);
if (v_isNeg_2327_ == 0)
{
uint8_t v___x_2328_; 
v___x_2328_ = lean_nat_dec_eq(v_exponent_2324_, v_natZero_2325_);
lean_dec(v_exponent_2324_);
if (v___x_2328_ == 0)
{
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2307_;
}
else
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2330_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2304_, v___x_2329_);
if (lean_obj_tag(v___x_2330_) == 1)
{
lean_object* v_val_2331_; 
v_val_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_val_2331_);
lean_dec_ref_known(v___x_2330_, 1);
if (lean_obj_tag(v_val_2331_) == 4)
{
lean_object* v_elems_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v_elems_2332_ = lean_ctor_get(v_val_2331_, 0);
lean_inc_ref(v_elems_2332_);
lean_dec_ref_known(v_val_2331_, 1);
v___x_2333_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2334_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2304_, v___x_2333_);
if (lean_obj_tag(v___x_2334_) == 1)
{
lean_object* v_val_2335_; 
v_val_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_val_2335_);
lean_dec_ref_known(v___x_2334_, 1);
if (lean_obj_tag(v_val_2335_) == 2)
{
lean_object* v_n_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2444_; 
v_n_2336_ = lean_ctor_get(v_val_2335_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_val_2335_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2338_ = v_val_2335_;
v_isShared_2339_ = v_isSharedCheck_2444_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_n_2336_);
lean_dec(v_val_2335_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2444_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v_mantissa_2340_; lean_object* v_exponent_2341_; uint8_t v_isNeg_2342_; 
v_mantissa_2340_ = lean_ctor_get(v_n_2336_, 0);
lean_inc(v_mantissa_2340_);
v_exponent_2341_ = lean_ctor_get(v_n_2336_, 1);
lean_inc(v_exponent_2341_);
lean_dec_ref(v_n_2336_);
v_isNeg_2342_ = lean_int_dec_lt(v_mantissa_2340_, v_intZero_2326_);
if (v_isNeg_2342_ == 0)
{
uint8_t v___x_2343_; 
v___x_2343_ = lean_nat_dec_eq(v_exponent_2341_, v_natZero_2325_);
lean_dec(v_exponent_2341_);
if (v___x_2343_ == 0)
{
lean_dec(v_mantissa_2340_);
lean_del_object(v___x_2338_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2313_;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2344_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_2345_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2304_, v___x_2344_);
if (lean_obj_tag(v___x_2345_) == 1)
{
lean_object* v_val_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2443_; 
v_val_2346_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2348_ = v___x_2345_;
v_isShared_2349_ = v_isSharedCheck_2443_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_val_2346_);
lean_dec(v___x_2345_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2443_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
if (lean_obj_tag(v_val_2346_) == 1)
{
uint8_t v_b_2350_; lean_object* v_nameMap_2351_; lean_object* v_a_2352_; lean_object* v___x_2353_; 
v_b_2350_ = lean_ctor_get_uint8(v_val_2346_, 0);
lean_dec_ref_known(v_val_2346_, 0);
v_nameMap_2351_ = lean_ctor_get(v_a_2305_, 1);
v_a_2352_ = lean_nat_abs(v_mantissa_2323_);
lean_dec(v_mantissa_2323_);
v___x_2353_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2351_, v_a_2352_);
if (lean_obj_tag(v___x_2353_) == 1)
{
lean_object* v_val_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_a_2352_);
lean_del_object(v___x_2348_);
lean_del_object(v___x_2338_);
v_val_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2433_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_val_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2433_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v_a_2358_; lean_object* v___x_2359_; 
v_a_2358_ = lean_nat_abs(v_mantissa_2340_);
lean_dec(v_mantissa_2340_);
v___x_2359_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2332_, v_a_2305_);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2424_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2362_ = v___x_2359_;
v_isShared_2363_ = v_isSharedCheck_2424_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2359_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2424_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v_snd_2364_; lean_object* v_fst_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2423_; 
v_snd_2364_ = lean_ctor_get(v_a_2360_, 1);
v_fst_2365_ = lean_ctor_get(v_a_2360_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v_a_2360_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2367_ = v_a_2360_;
v_isShared_2368_ = v_isSharedCheck_2423_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_snd_2364_);
lean_inc(v_fst_2365_);
lean_dec(v_a_2360_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2423_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v_stream_2369_; lean_object* v_nameMap_2370_; lean_object* v_levelMap_2371_; lean_object* v_exprMap_2372_; lean_object* v_recursorRuleMap_2373_; lean_object* v_constMap_2374_; lean_object* v_constOrder_2375_; lean_object* v_rewrites_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2422_; 
v_stream_2369_ = lean_ctor_get(v_snd_2364_, 0);
v_nameMap_2370_ = lean_ctor_get(v_snd_2364_, 1);
v_levelMap_2371_ = lean_ctor_get(v_snd_2364_, 2);
v_exprMap_2372_ = lean_ctor_get(v_snd_2364_, 3);
v_recursorRuleMap_2373_ = lean_ctor_get(v_snd_2364_, 4);
v_constMap_2374_ = lean_ctor_get(v_snd_2364_, 5);
v_constOrder_2375_ = lean_ctor_get(v_snd_2364_, 6);
v_rewrites_2376_ = lean_ctor_get(v_snd_2364_, 7);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_snd_2364_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2378_ = v_snd_2364_;
v_isShared_2379_ = v_isSharedCheck_2422_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_rewrites_2376_);
lean_inc(v_constOrder_2375_);
lean_inc(v_constMap_2374_);
lean_inc(v_recursorRuleMap_2373_);
lean_inc(v_exprMap_2372_);
lean_inc(v_levelMap_2371_);
lean_inc(v_nameMap_2370_);
lean_inc(v_stream_2369_);
lean_dec(v_snd_2364_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2422_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2380_; 
v___x_2380_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2372_, v_a_2358_);
if (lean_obj_tag(v___x_2380_) == 1)
{
lean_object* v_val_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2412_; 
lean_dec(v_a_2358_);
lean_del_object(v___x_2356_);
v_val_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2412_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_val_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2412_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; uint8_t v___x_2386_; 
lean_inc(v_val_2354_);
v___x_2385_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2385_, 0, v_val_2354_);
lean_ctor_set(v___x_2385_, 1, v_fst_2365_);
lean_ctor_set(v___x_2385_, 2, v_val_2381_);
v___x_2386_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2374_, v_val_2354_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; lean_object* v___x_2389_; 
v___x_2387_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2387_, 0, v___x_2385_);
lean_ctor_set_uint8(v___x_2387_, sizeof(void*)*1, v_b_2350_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2387_);
v___x_2389_ = v___x_2383_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2394_; 
v___x_2390_ = lean_box(0);
lean_inc(v_val_2354_);
v___x_2391_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_2374_, v_val_2354_, v___x_2389_);
v___x_2392_ = lean_array_push(v_constOrder_2375_, v_val_2354_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 6, v___x_2392_);
lean_ctor_set(v___x_2378_, 5, v___x_2391_);
v___x_2394_ = v___x_2378_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_stream_2369_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_nameMap_2370_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v_levelMap_2371_);
lean_ctor_set(v_reuseFailAlloc_2401_, 3, v_exprMap_2372_);
lean_ctor_set(v_reuseFailAlloc_2401_, 4, v_recursorRuleMap_2373_);
lean_ctor_set(v_reuseFailAlloc_2401_, 5, v___x_2391_);
lean_ctor_set(v_reuseFailAlloc_2401_, 6, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2401_, 7, v_rewrites_2376_);
v___x_2394_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2396_; 
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 1, v___x_2394_);
lean_ctor_set(v___x_2367_, 0, v___x_2390_);
v___x_2396_ = v___x_2367_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2400_, 1, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2398_; 
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2396_);
v___x_2398_ = v___x_2362_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
else
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2407_; 
lean_dec_ref_known(v___x_2385_, 3);
lean_del_object(v___x_2378_);
lean_dec_ref(v_rewrites_2376_);
lean_dec_ref(v_constOrder_2375_);
lean_dec_ref(v_constMap_2374_);
lean_dec_ref(v_recursorRuleMap_2373_);
lean_dec_ref(v_exprMap_2372_);
lean_dec_ref(v_levelMap_2371_);
lean_dec_ref(v_nameMap_2370_);
lean_dec_ref(v_stream_2369_);
lean_del_object(v___x_2367_);
v___x_2403_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_2404_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2354_, v___x_2386_);
v___x_2405_ = lean_string_append(v___x_2403_, v___x_2404_);
lean_dec_ref(v___x_2404_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 18);
lean_ctor_set(v___x_2383_, 0, v___x_2405_);
v___x_2407_ = v___x_2383_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2405_);
v___x_2407_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2409_; 
if (v_isShared_2363_ == 0)
{
lean_ctor_set_tag(v___x_2362_, 1);
lean_ctor_set(v___x_2362_, 0, v___x_2407_);
v___x_2409_ = v___x_2362_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
lean_dec(v___x_2380_);
lean_del_object(v___x_2378_);
lean_dec_ref(v_rewrites_2376_);
lean_dec_ref(v_constOrder_2375_);
lean_dec_ref(v_constMap_2374_);
lean_dec_ref(v_recursorRuleMap_2373_);
lean_dec_ref(v_exprMap_2372_);
lean_dec_ref(v_levelMap_2371_);
lean_dec_ref(v_nameMap_2370_);
lean_dec_ref(v_stream_2369_);
lean_del_object(v___x_2367_);
lean_dec(v_fst_2365_);
lean_dec(v_val_2354_);
v___x_2413_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2414_ = l_Nat_reprFast(v_a_2358_);
v___x_2415_ = lean_string_append(v___x_2413_, v___x_2414_);
lean_dec_ref(v___x_2414_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 18);
lean_ctor_set(v___x_2356_, 0, v___x_2415_);
v___x_2417_ = v___x_2356_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2419_; 
if (v_isShared_2363_ == 0)
{
lean_ctor_set_tag(v___x_2362_, 1);
lean_ctor_set(v___x_2362_, 0, v___x_2417_);
v___x_2419_ = v___x_2362_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
lean_dec(v_a_2358_);
lean_del_object(v___x_2356_);
lean_dec(v_val_2354_);
v_a_2425_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2359_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2359_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
}
}
else
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2438_; 
lean_dec(v___x_2353_);
lean_dec(v_mantissa_2340_);
lean_dec_ref(v_elems_2332_);
lean_dec_ref(v_a_2305_);
v___x_2434_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2435_ = l_Nat_reprFast(v_a_2352_);
v___x_2436_ = lean_string_append(v___x_2434_, v___x_2435_);
lean_dec_ref(v___x_2435_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set_tag(v___x_2348_, 18);
lean_ctor_set(v___x_2348_, 0, v___x_2436_);
v___x_2438_ = v___x_2348_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2436_);
v___x_2438_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
lean_object* v___x_2440_; 
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 1);
lean_ctor_set(v___x_2338_, 0, v___x_2438_);
v___x_2440_ = v___x_2338_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2438_);
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
lean_del_object(v___x_2348_);
lean_dec(v_val_2346_);
lean_dec(v_mantissa_2340_);
lean_del_object(v___x_2338_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2316_;
}
}
}
else
{
lean_dec(v___x_2345_);
lean_dec(v_mantissa_2340_);
lean_del_object(v___x_2338_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2316_;
}
}
}
else
{
lean_dec(v_exponent_2341_);
lean_dec(v_mantissa_2340_);
lean_del_object(v___x_2338_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2313_;
}
}
}
else
{
lean_dec(v_val_2335_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2313_;
}
}
else
{
lean_dec(v___x_2334_);
lean_dec_ref(v_elems_2332_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2313_;
}
}
else
{
lean_dec(v_val_2331_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2310_;
}
}
else
{
lean_dec(v___x_2330_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2310_;
}
}
}
else
{
lean_dec(v_exponent_2324_);
lean_dec(v_mantissa_2323_);
lean_dec_ref(v_a_2305_);
goto v___jp_2307_;
}
}
else
{
lean_dec(v_val_2321_);
lean_dec_ref(v_a_2305_);
goto v___jp_2307_;
}
}
else
{
lean_dec(v___x_2320_);
lean_dec_ref(v_a_2305_);
goto v___jp_2307_;
}
v___jp_2307_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
return v___x_2309_;
}
v___jp_2310_:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
return v___x_2312_;
}
v___jp_2313_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
return v___x_2315_;
}
v___jp_2316_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
v___x_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
return v___x_2318_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___boxed(lean_object* v_data_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(v_data_2445_, v_a_2446_);
lean_dec(v_data_2445_);
return v_res_2448_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(lean_object* v_00_u03b2_2449_, lean_object* v_m_2450_, lean_object* v_a_2451_){
_start:
{
uint8_t v___x_2452_; 
v___x_2452_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_m_2450_, v_a_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___boxed(lean_object* v_00_u03b2_2453_, lean_object* v_m_2454_, lean_object* v_a_2455_){
_start:
{
uint8_t v_res_2456_; lean_object* v_r_2457_; 
v_res_2456_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0(v_00_u03b2_2453_, v_m_2454_, v_a_2455_);
lean_dec(v_a_2455_);
lean_dec_ref(v_m_2454_);
v_r_2457_ = lean_box(v_res_2456_);
return v_r_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1(lean_object* v_00_u03b2_2458_, lean_object* v_m_2459_, lean_object* v_a_2460_, lean_object* v_b_2461_){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_m_2459_, v_a_2460_, v_b_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(lean_object* v_00_u03b2_2463_, lean_object* v_a_2464_, lean_object* v_x_2465_){
_start:
{
uint8_t v___x_2466_; 
v___x_2466_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___redArg(v_a_2464_, v_x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2467_, lean_object* v_a_2468_, lean_object* v_x_2469_){
_start:
{
uint8_t v_res_2470_; lean_object* v_r_2471_; 
v_res_2470_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0_spec__0(v_00_u03b2_2467_, v_a_2468_, v_x_2469_);
lean_dec(v_x_2469_);
lean_dec(v_a_2468_);
v_r_2471_ = lean_box(v_res_2470_);
return v_r_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2(lean_object* v_00_u03b2_2472_, lean_object* v_data_2473_){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2___redArg(v_data_2473_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3(lean_object* v_00_u03b2_2475_, lean_object* v_a_2476_, lean_object* v_b_2477_, lean_object* v_x_2478_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__3___redArg(v_a_2476_, v_b_2477_, v_x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2480_, lean_object* v_i_2481_, lean_object* v_source_2482_, lean_object* v_target_2483_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3___redArg(v_i_2481_, v_source_2482_, v_target_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_2485_, lean_object* v_x_2486_, lean_object* v_x_2487_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1_spec__2_spec__3_spec__4___redArg(v_x_2486_, v_x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite(lean_object* v_data_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2509_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2496_, v___x_2508_);
if (lean_obj_tag(v___x_2509_) == 1)
{
lean_object* v_val_2510_; 
v_val_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_val_2510_);
lean_dec_ref_known(v___x_2509_, 1);
if (lean_obj_tag(v_val_2510_) == 2)
{
lean_object* v_n_2511_; lean_object* v_mantissa_2512_; lean_object* v_exponent_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2627_; 
v_n_2511_ = lean_ctor_get(v_val_2510_, 0);
lean_inc_ref(v_n_2511_);
lean_dec_ref_known(v_val_2510_, 1);
v_mantissa_2512_ = lean_ctor_get(v_n_2511_, 0);
v_exponent_2513_ = lean_ctor_get(v_n_2511_, 1);
v_isSharedCheck_2627_ = !lean_is_exclusive(v_n_2511_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2515_ = v_n_2511_;
v_isShared_2516_ = v_isSharedCheck_2627_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_exponent_2513_);
lean_inc(v_mantissa_2512_);
lean_dec(v_n_2511_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2627_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v_natZero_2517_; lean_object* v_intZero_2518_; uint8_t v_isNeg_2519_; 
v_natZero_2517_ = lean_unsigned_to_nat(0u);
v_intZero_2518_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2519_ = lean_int_dec_lt(v_mantissa_2512_, v_intZero_2518_);
if (v_isNeg_2519_ == 0)
{
uint8_t v___x_2520_; 
v___x_2520_ = lean_nat_dec_eq(v_exponent_2513_, v_natZero_2517_);
lean_dec(v_exponent_2513_);
if (v___x_2520_ == 0)
{
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2499_;
}
else
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__2));
v___x_2522_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2496_, v___x_2521_);
if (lean_obj_tag(v___x_2522_) == 1)
{
lean_object* v_val_2523_; 
v_val_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_val_2523_);
lean_dec_ref_known(v___x_2522_, 1);
if (lean_obj_tag(v_val_2523_) == 2)
{
lean_object* v_n_2524_; lean_object* v_mantissa_2525_; lean_object* v_exponent_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2626_; 
v_n_2524_ = lean_ctor_get(v_val_2523_, 0);
lean_inc_ref(v_n_2524_);
lean_dec_ref_known(v_val_2523_, 1);
v_mantissa_2525_ = lean_ctor_get(v_n_2524_, 0);
v_exponent_2526_ = lean_ctor_get(v_n_2524_, 1);
v_isSharedCheck_2626_ = !lean_is_exclusive(v_n_2524_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2528_ = v_n_2524_;
v_isShared_2529_ = v_isSharedCheck_2626_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_exponent_2526_);
lean_inc(v_mantissa_2525_);
lean_dec(v_n_2524_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2626_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
uint8_t v_isNeg_2530_; 
v_isNeg_2530_ = lean_int_dec_lt(v_mantissa_2525_, v_intZero_2518_);
if (v_isNeg_2530_ == 0)
{
uint8_t v___x_2531_; 
v___x_2531_ = lean_nat_dec_eq(v_exponent_2526_, v_natZero_2517_);
lean_dec(v_exponent_2526_);
if (v___x_2531_ == 0)
{
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2502_;
}
else
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__3));
v___x_2533_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2496_, v___x_2532_);
if (lean_obj_tag(v___x_2533_) == 1)
{
lean_object* v_val_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2625_; 
v_val_2534_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2536_ = v___x_2533_;
v_isShared_2537_ = v_isSharedCheck_2625_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_val_2534_);
lean_dec(v___x_2533_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2625_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
if (lean_obj_tag(v_val_2534_) == 2)
{
lean_object* v_n_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2624_; 
v_n_2538_ = lean_ctor_get(v_val_2534_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v_val_2534_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2540_ = v_val_2534_;
v_isShared_2541_ = v_isSharedCheck_2624_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_n_2538_);
lean_dec(v_val_2534_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2624_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v_mantissa_2542_; lean_object* v_exponent_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2623_; 
v_mantissa_2542_ = lean_ctor_get(v_n_2538_, 0);
v_exponent_2543_ = lean_ctor_get(v_n_2538_, 1);
v_isSharedCheck_2623_ = !lean_is_exclusive(v_n_2538_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2545_ = v_n_2538_;
v_isShared_2546_ = v_isSharedCheck_2623_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_exponent_2543_);
lean_inc(v_mantissa_2542_);
lean_dec(v_n_2538_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2623_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
uint8_t v_isNeg_2547_; 
v_isNeg_2547_ = lean_int_dec_lt(v_mantissa_2542_, v_intZero_2518_);
if (v_isNeg_2547_ == 0)
{
uint8_t v___x_2548_; 
v___x_2548_ = lean_nat_dec_eq(v_exponent_2543_, v_natZero_2517_);
lean_dec(v_exponent_2543_);
if (v___x_2548_ == 0)
{
lean_del_object(v___x_2545_);
lean_dec(v_mantissa_2542_);
lean_del_object(v___x_2540_);
lean_del_object(v___x_2536_);
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2505_;
}
else
{
lean_object* v_stream_2549_; lean_object* v_nameMap_2550_; lean_object* v_levelMap_2551_; lean_object* v_exprMap_2552_; lean_object* v_recursorRuleMap_2553_; lean_object* v_constMap_2554_; lean_object* v_constOrder_2555_; lean_object* v_rewrites_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2622_; 
v_stream_2549_ = lean_ctor_get(v_a_2497_, 0);
v_nameMap_2550_ = lean_ctor_get(v_a_2497_, 1);
v_levelMap_2551_ = lean_ctor_get(v_a_2497_, 2);
v_exprMap_2552_ = lean_ctor_get(v_a_2497_, 3);
v_recursorRuleMap_2553_ = lean_ctor_get(v_a_2497_, 4);
v_constMap_2554_ = lean_ctor_get(v_a_2497_, 5);
v_constOrder_2555_ = lean_ctor_get(v_a_2497_, 6);
v_rewrites_2556_ = lean_ctor_get(v_a_2497_, 7);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_a_2497_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2558_ = v_a_2497_;
v_isShared_2559_ = v_isSharedCheck_2622_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_rewrites_2556_);
lean_inc(v_constOrder_2555_);
lean_inc(v_constMap_2554_);
lean_inc(v_recursorRuleMap_2553_);
lean_inc(v_exprMap_2552_);
lean_inc(v_levelMap_2551_);
lean_inc(v_nameMap_2550_);
lean_inc(v_stream_2549_);
lean_dec(v_a_2497_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2622_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
v_a_2560_ = lean_nat_abs(v_mantissa_2512_);
lean_dec(v_mantissa_2512_);
v___x_2561_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2550_, v_a_2560_);
if (lean_obj_tag(v___x_2561_) == 1)
{
lean_object* v_val_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2612_; 
lean_dec(v_a_2560_);
lean_del_object(v___x_2536_);
v_val_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2612_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_val_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2612_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v_a_2566_; lean_object* v___x_2567_; 
v_a_2566_ = lean_nat_abs(v_mantissa_2525_);
lean_dec(v_mantissa_2525_);
v___x_2567_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2550_, v_a_2566_);
if (lean_obj_tag(v___x_2567_) == 1)
{
lean_object* v_val_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2602_; 
lean_dec(v_a_2566_);
lean_del_object(v___x_2540_);
v_val_2568_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2570_ = v___x_2567_;
v_isShared_2571_ = v_isSharedCheck_2602_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_val_2568_);
lean_dec(v___x_2567_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2602_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
uint8_t v___x_2572_; 
v___x_2572_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2554_, v_val_2562_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
lean_dec(v_val_2568_);
lean_del_object(v___x_2558_);
lean_dec_ref(v_rewrites_2556_);
lean_dec_ref(v_constOrder_2555_);
lean_dec_ref(v_constMap_2554_);
lean_dec_ref(v_recursorRuleMap_2553_);
lean_dec_ref(v_exprMap_2552_);
lean_dec_ref(v_levelMap_2551_);
lean_dec_ref(v_nameMap_2550_);
lean_dec_ref(v_stream_2549_);
lean_del_object(v___x_2545_);
lean_dec(v_mantissa_2542_);
lean_del_object(v___x_2528_);
lean_del_object(v___x_2515_);
v___x_2573_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__4));
v___x_2574_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2562_, v___x_2548_);
v___x_2575_ = lean_string_append(v___x_2573_, v___x_2574_);
lean_dec_ref(v___x_2574_);
v___x_2576_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__5));
v___x_2577_ = lean_string_append(v___x_2575_, v___x_2576_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 18);
lean_ctor_set(v___x_2570_, 0, v___x_2577_);
v___x_2579_ = v___x_2570_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2581_; 
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 0, v___x_2579_);
v___x_2581_ = v___x_2564_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2585_; lean_object* v___x_2587_; 
lean_del_object(v___x_2564_);
v_a_2584_ = lean_nat_abs(v_mantissa_2542_);
lean_dec(v_mantissa_2542_);
v___x_2585_ = lean_box(0);
if (v_isShared_2546_ == 0)
{
lean_ctor_set(v___x_2545_, 1, v_a_2584_);
lean_ctor_set(v___x_2545_, 0, v_val_2568_);
v___x_2587_ = v___x_2545_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_val_2568_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_a_2584_);
v___x_2587_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v___x_2589_; 
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 1, v___x_2587_);
lean_ctor_set(v___x_2528_, 0, v_val_2562_);
v___x_2589_ = v___x_2528_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_val_2562_);
lean_ctor_set(v_reuseFailAlloc_2600_, 1, v___x_2587_);
v___x_2589_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2592_; 
v___x_2590_ = lean_array_push(v_rewrites_2556_, v___x_2589_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 7, v___x_2590_);
v___x_2592_ = v___x_2558_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_stream_2549_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v_nameMap_2550_);
lean_ctor_set(v_reuseFailAlloc_2599_, 2, v_levelMap_2551_);
lean_ctor_set(v_reuseFailAlloc_2599_, 3, v_exprMap_2552_);
lean_ctor_set(v_reuseFailAlloc_2599_, 4, v_recursorRuleMap_2553_);
lean_ctor_set(v_reuseFailAlloc_2599_, 5, v_constMap_2554_);
lean_ctor_set(v_reuseFailAlloc_2599_, 6, v_constOrder_2555_);
lean_ctor_set(v_reuseFailAlloc_2599_, 7, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2594_; 
if (v_isShared_2516_ == 0)
{
lean_ctor_set(v___x_2515_, 1, v___x_2592_);
lean_ctor_set(v___x_2515_, 0, v___x_2585_);
v___x_2594_ = v___x_2515_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2585_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2596_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2594_);
v___x_2596_ = v___x_2570_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
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
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; 
lean_dec(v___x_2567_);
lean_dec(v_val_2562_);
lean_del_object(v___x_2558_);
lean_dec_ref(v_rewrites_2556_);
lean_dec_ref(v_constOrder_2555_);
lean_dec_ref(v_constMap_2554_);
lean_dec_ref(v_recursorRuleMap_2553_);
lean_dec_ref(v_exprMap_2552_);
lean_dec_ref(v_levelMap_2551_);
lean_dec_ref(v_nameMap_2550_);
lean_dec_ref(v_stream_2549_);
lean_del_object(v___x_2545_);
lean_dec(v_mantissa_2542_);
lean_del_object(v___x_2528_);
lean_del_object(v___x_2515_);
v___x_2603_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2604_ = l_Nat_reprFast(v_a_2566_);
v___x_2605_ = lean_string_append(v___x_2603_, v___x_2604_);
lean_dec_ref(v___x_2604_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set_tag(v___x_2564_, 18);
lean_ctor_set(v___x_2564_, 0, v___x_2605_);
v___x_2607_ = v___x_2564_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
lean_object* v___x_2609_; 
if (v_isShared_2541_ == 0)
{
lean_ctor_set_tag(v___x_2540_, 1);
lean_ctor_set(v___x_2540_, 0, v___x_2607_);
v___x_2609_ = v___x_2540_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2617_; 
lean_dec(v___x_2561_);
lean_del_object(v___x_2558_);
lean_dec_ref(v_rewrites_2556_);
lean_dec_ref(v_constOrder_2555_);
lean_dec_ref(v_constMap_2554_);
lean_dec_ref(v_recursorRuleMap_2553_);
lean_dec_ref(v_exprMap_2552_);
lean_dec_ref(v_levelMap_2551_);
lean_dec_ref(v_nameMap_2550_);
lean_dec_ref(v_stream_2549_);
lean_del_object(v___x_2545_);
lean_dec(v_mantissa_2542_);
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
v___x_2613_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2614_ = l_Nat_reprFast(v_a_2560_);
v___x_2615_ = lean_string_append(v___x_2613_, v___x_2614_);
lean_dec_ref(v___x_2614_);
if (v_isShared_2541_ == 0)
{
lean_ctor_set_tag(v___x_2540_, 18);
lean_ctor_set(v___x_2540_, 0, v___x_2615_);
v___x_2617_ = v___x_2540_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2615_);
v___x_2617_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
lean_object* v___x_2619_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 0, v___x_2617_);
v___x_2619_ = v___x_2536_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v___x_2617_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_2545_);
lean_dec(v_exponent_2543_);
lean_dec(v_mantissa_2542_);
lean_del_object(v___x_2540_);
lean_del_object(v___x_2536_);
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2505_;
}
}
}
}
else
{
lean_del_object(v___x_2536_);
lean_dec(v_val_2534_);
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2505_;
}
}
}
else
{
lean_dec(v___x_2533_);
lean_del_object(v___x_2528_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2505_;
}
}
}
else
{
lean_del_object(v___x_2528_);
lean_dec(v_exponent_2526_);
lean_dec(v_mantissa_2525_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2502_;
}
}
}
else
{
lean_dec(v_val_2523_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2502_;
}
}
else
{
lean_dec(v___x_2522_);
lean_del_object(v___x_2515_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2502_;
}
}
}
else
{
lean_del_object(v___x_2515_);
lean_dec(v_exponent_2513_);
lean_dec(v_mantissa_2512_);
lean_dec_ref(v_a_2497_);
goto v___jp_2499_;
}
}
}
else
{
lean_dec(v_val_2510_);
lean_dec_ref(v_a_2497_);
goto v___jp_2499_;
}
}
else
{
lean_dec(v___x_2509_);
lean_dec_ref(v_a_2497_);
goto v___jp_2499_;
}
v___jp_2499_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1));
v___x_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
return v___x_2501_;
}
v___jp_2502_:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1));
v___x_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
return v___x_2504_;
}
v___jp_2505_:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___closed__1));
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite___boxed(lean_object* v_data_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite(v_data_2628_, v_a_2629_);
lean_dec(v_data_2628_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(lean_object* v_data_2645_, lean_object* v_a_2646_){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2673_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2672_);
if (lean_obj_tag(v___x_2673_) == 1)
{
lean_object* v_val_2674_; 
v_val_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_val_2674_);
lean_dec_ref_known(v___x_2673_, 1);
if (lean_obj_tag(v_val_2674_) == 2)
{
lean_object* v_n_2675_; lean_object* v_mantissa_2676_; lean_object* v_exponent_2677_; lean_object* v_natZero_2678_; lean_object* v_intZero_2679_; uint8_t v_isNeg_2680_; 
v_n_2675_ = lean_ctor_get(v_val_2674_, 0);
lean_inc_ref(v_n_2675_);
lean_dec_ref_known(v_val_2674_, 1);
v_mantissa_2676_ = lean_ctor_get(v_n_2675_, 0);
lean_inc(v_mantissa_2676_);
v_exponent_2677_ = lean_ctor_get(v_n_2675_, 1);
lean_inc(v_exponent_2677_);
lean_dec_ref(v_n_2675_);
v_natZero_2678_ = lean_unsigned_to_nat(0u);
v_intZero_2679_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2680_ = lean_int_dec_lt(v_mantissa_2676_, v_intZero_2679_);
if (v_isNeg_2680_ == 0)
{
uint8_t v___x_2681_; 
v___x_2681_ = lean_nat_dec_eq(v_exponent_2677_, v_natZero_2678_);
lean_dec(v_exponent_2677_);
if (v___x_2681_ == 0)
{
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2648_;
}
else
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2682_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2683_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2682_);
if (lean_obj_tag(v___x_2683_) == 1)
{
lean_object* v_val_2684_; 
v_val_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_val_2684_);
lean_dec_ref_known(v___x_2683_, 1);
if (lean_obj_tag(v_val_2684_) == 4)
{
lean_object* v_elems_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v_elems_2685_ = lean_ctor_get(v_val_2684_, 0);
lean_inc_ref(v_elems_2685_);
lean_dec_ref_known(v_val_2684_, 1);
v___x_2686_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2687_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2686_);
if (lean_obj_tag(v___x_2687_) == 1)
{
lean_object* v_val_2688_; 
v_val_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_val_2688_);
lean_dec_ref_known(v___x_2687_, 1);
if (lean_obj_tag(v_val_2688_) == 2)
{
lean_object* v_n_2689_; lean_object* v_mantissa_2690_; lean_object* v_exponent_2691_; uint8_t v_isNeg_2692_; 
v_n_2689_ = lean_ctor_get(v_val_2688_, 0);
lean_inc_ref(v_n_2689_);
lean_dec_ref_known(v_val_2688_, 1);
v_mantissa_2690_ = lean_ctor_get(v_n_2689_, 0);
lean_inc(v_mantissa_2690_);
v_exponent_2691_ = lean_ctor_get(v_n_2689_, 1);
lean_inc(v_exponent_2691_);
lean_dec_ref(v_n_2689_);
v_isNeg_2692_ = lean_int_dec_lt(v_mantissa_2690_, v_intZero_2679_);
if (v_isNeg_2692_ == 0)
{
uint8_t v___x_2693_; 
v___x_2693_ = lean_nat_dec_eq(v_exponent_2691_, v_natZero_2678_);
lean_dec(v_exponent_2691_);
if (v___x_2693_ == 0)
{
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2654_;
}
else
{
lean_object* v___x_2694_; lean_object* v___x_2695_; 
v___x_2694_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_2695_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2694_);
if (lean_obj_tag(v___x_2695_) == 1)
{
lean_object* v_val_2696_; 
v_val_2696_ = lean_ctor_get(v___x_2695_, 0);
lean_inc(v_val_2696_);
lean_dec_ref_known(v___x_2695_, 1);
if (lean_obj_tag(v_val_2696_) == 2)
{
lean_object* v_n_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2896_; 
v_n_2697_ = lean_ctor_get(v_val_2696_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_val_2696_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2699_ = v_val_2696_;
v_isShared_2700_ = v_isSharedCheck_2896_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_n_2697_);
lean_dec(v_val_2696_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2896_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v_mantissa_2701_; lean_object* v_exponent_2702_; uint8_t v_isNeg_2703_; 
v_mantissa_2701_ = lean_ctor_get(v_n_2697_, 0);
lean_inc(v_mantissa_2701_);
v_exponent_2702_ = lean_ctor_get(v_n_2697_, 1);
lean_inc(v_exponent_2702_);
lean_dec_ref(v_n_2697_);
v_isNeg_2703_ = lean_int_dec_lt(v_mantissa_2701_, v_intZero_2679_);
if (v_isNeg_2703_ == 0)
{
uint8_t v___x_2704_; 
v___x_2704_ = lean_nat_dec_eq(v_exponent_2702_, v_natZero_2678_);
lean_dec(v_exponent_2702_);
if (v___x_2704_ == 0)
{
lean_dec(v_mantissa_2701_);
lean_del_object(v___x_2699_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2657_;
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__2));
v___x_2706_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2705_);
if (lean_obj_tag(v___x_2706_) == 1)
{
lean_object* v_val_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_del_object(v___x_2699_);
v_val_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_val_2707_);
lean_dec_ref_known(v___x_2706_, 1);
v___x_2708_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__3));
v___x_2709_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2708_);
if (lean_obj_tag(v___x_2709_) == 1)
{
lean_object* v_val_2710_; 
v_val_2710_ = lean_ctor_get(v___x_2709_, 0);
lean_inc(v_val_2710_);
lean_dec_ref_known(v___x_2709_, 1);
if (lean_obj_tag(v_val_2710_) == 3)
{
lean_object* v_s_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
v_s_2711_ = lean_ctor_get(v_val_2710_, 0);
lean_inc_ref(v_s_2711_);
lean_dec_ref_known(v_val_2710_, 1);
v___x_2712_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_2713_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2645_, v___x_2712_);
if (lean_obj_tag(v___x_2713_) == 1)
{
lean_object* v_val_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2891_; 
v_val_2714_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2716_ = v___x_2713_;
v_isShared_2717_ = v_isSharedCheck_2891_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_val_2714_);
lean_dec(v___x_2713_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2891_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
if (lean_obj_tag(v_val_2714_) == 4)
{
lean_object* v_elems_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2890_; 
v_elems_2718_ = lean_ctor_get(v_val_2714_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_val_2714_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2720_ = v_val_2714_;
v_isShared_2721_ = v_isSharedCheck_2890_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_elems_2718_);
lean_dec(v_val_2714_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2890_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v_nameMap_2722_; lean_object* v_a_2723_; lean_object* v___x_2724_; 
v_nameMap_2722_ = lean_ctor_get(v_a_2646_, 1);
v_a_2723_ = lean_nat_abs(v_mantissa_2676_);
lean_dec(v_mantissa_2676_);
v___x_2724_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2722_, v_a_2723_);
if (lean_obj_tag(v___x_2724_) == 1)
{
lean_object* v_val_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v_a_2723_);
lean_del_object(v___x_2720_);
lean_del_object(v___x_2716_);
v_val_2725_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2727_ = v___x_2724_;
v_isShared_2728_ = v_isSharedCheck_2880_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_val_2725_);
lean_dec(v___x_2724_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2880_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v_a_2729_; lean_object* v_a_2730_; lean_object* v___x_2731_; 
v_a_2729_ = lean_nat_abs(v_mantissa_2690_);
lean_dec(v_mantissa_2690_);
v_a_2730_ = lean_nat_abs(v_mantissa_2701_);
lean_dec(v_mantissa_2701_);
v___x_2731_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2685_, v_a_2646_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2871_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2871_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2871_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v_snd_2736_; lean_object* v_fst_2737_; lean_object* v_exprMap_2738_; lean_object* v___x_2739_; 
v_snd_2736_ = lean_ctor_get(v_a_2732_, 1);
lean_inc(v_snd_2736_);
v_fst_2737_ = lean_ctor_get(v_a_2732_, 0);
lean_inc(v_fst_2737_);
lean_dec(v_a_2732_);
v_exprMap_2738_ = lean_ctor_get(v_snd_2736_, 3);
v___x_2739_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2738_, v_a_2729_);
if (lean_obj_tag(v___x_2739_) == 1)
{
lean_object* v_val_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2861_; 
lean_dec(v_a_2729_);
lean_del_object(v___x_2727_);
v_val_2740_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2742_ = v___x_2739_;
v_isShared_2743_ = v_isSharedCheck_2861_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_val_2740_);
lean_dec(v___x_2739_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2861_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2738_, v_a_2730_);
if (lean_obj_tag(v___x_2744_) == 1)
{
lean_object* v_val_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2851_; 
lean_dec(v_a_2730_);
v_val_2745_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2747_ = v___x_2744_;
v_isShared_2748_ = v_isSharedCheck_2851_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_val_2745_);
lean_dec(v___x_2744_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2851_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___y_2750_; uint8_t v_safety_2751_; lean_object* v___y_2752_; lean_object* v_hints_2813_; lean_object* v___y_2814_; 
switch(lean_obj_tag(v_val_2707_))
{
case 3:
{
lean_object* v_s_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v_s_2832_ = lean_ctor_get(v_val_2707_, 0);
lean_inc_ref(v_s_2832_);
lean_dec_ref_known(v_val_2707_, 1);
v___x_2833_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9));
v___x_2834_ = lean_string_dec_eq(v_s_2832_, v___x_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2835_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__10));
v___x_2836_ = lean_string_dec_eq(v_s_2832_, v___x_2835_);
lean_dec_ref(v_s_2832_);
if (v___x_2836_ == 0)
{
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
goto v___jp_2669_;
}
else
{
lean_object* v___x_2837_; 
v___x_2837_ = lean_box(1);
v_hints_2813_ = v___x_2837_;
v___y_2814_ = v_snd_2736_;
goto v___jp_2812_;
}
}
else
{
lean_object* v___x_2838_; 
lean_dec_ref(v_s_2832_);
v___x_2838_ = lean_box(0);
v_hints_2813_ = v___x_2838_;
v___y_2814_ = v_snd_2736_;
goto v___jp_2812_;
}
}
case 5:
{
lean_object* v_kvPairs_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v_kvPairs_2839_ = lean_ctor_get(v_val_2707_, 0);
lean_inc(v_kvPairs_2839_);
lean_dec_ref_known(v_val_2707_, 1);
v___x_2840_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__11));
v___x_2841_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_2839_, v___x_2840_);
lean_dec(v_kvPairs_2839_);
if (lean_obj_tag(v___x_2841_) == 1)
{
lean_object* v_val_2842_; 
v_val_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_val_2842_);
lean_dec_ref_known(v___x_2841_, 1);
if (lean_obj_tag(v_val_2842_) == 2)
{
lean_object* v_n_2843_; lean_object* v_mantissa_2844_; lean_object* v_exponent_2845_; uint8_t v_isNeg_2846_; 
v_n_2843_ = lean_ctor_get(v_val_2842_, 0);
lean_inc_ref(v_n_2843_);
lean_dec_ref_known(v_val_2842_, 1);
v_mantissa_2844_ = lean_ctor_get(v_n_2843_, 0);
lean_inc(v_mantissa_2844_);
v_exponent_2845_ = lean_ctor_get(v_n_2843_, 1);
lean_inc(v_exponent_2845_);
lean_dec_ref(v_n_2843_);
v_isNeg_2846_ = lean_int_dec_lt(v_mantissa_2844_, v_intZero_2679_);
if (v_isNeg_2846_ == 0)
{
uint8_t v___x_2847_; 
v___x_2847_ = lean_nat_dec_eq(v_exponent_2845_, v_natZero_2678_);
lean_dec(v_exponent_2845_);
if (v___x_2847_ == 0)
{
lean_dec(v_mantissa_2844_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
goto v___jp_2666_;
}
else
{
lean_object* v_a_2848_; uint32_t v___x_2849_; lean_object* v___x_2850_; 
v_a_2848_ = lean_nat_abs(v_mantissa_2844_);
lean_dec(v_mantissa_2844_);
v___x_2849_ = lean_uint32_of_nat(v_a_2848_);
lean_dec(v_a_2848_);
v___x_2850_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_2850_, 0, v___x_2849_);
v_hints_2813_ = v___x_2850_;
v___y_2814_ = v_snd_2736_;
goto v___jp_2812_;
}
}
else
{
lean_dec(v_exponent_2845_);
lean_dec(v_mantissa_2844_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
goto v___jp_2666_;
}
}
else
{
lean_dec(v_val_2842_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
goto v___jp_2666_;
}
}
else
{
lean_dec(v___x_2841_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
goto v___jp_2666_;
}
}
default: 
{
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_del_object(v___x_2742_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_del_object(v___x_2734_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
goto v___jp_2669_;
}
}
v___jp_2749_:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2718_, v___y_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2803_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2803_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2803_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v_snd_2758_; lean_object* v_fst_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2802_; 
v_snd_2758_ = lean_ctor_get(v_a_2754_, 1);
v_fst_2759_ = lean_ctor_get(v_a_2754_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_a_2754_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2761_ = v_a_2754_;
v_isShared_2762_ = v_isSharedCheck_2802_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_snd_2758_);
lean_inc(v_fst_2759_);
lean_dec(v_a_2754_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2802_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v_stream_2763_; lean_object* v_nameMap_2764_; lean_object* v_levelMap_2765_; lean_object* v_exprMap_2766_; lean_object* v_recursorRuleMap_2767_; lean_object* v_constMap_2768_; lean_object* v_constOrder_2769_; lean_object* v_rewrites_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2801_; 
v_stream_2763_ = lean_ctor_get(v_snd_2758_, 0);
v_nameMap_2764_ = lean_ctor_get(v_snd_2758_, 1);
v_levelMap_2765_ = lean_ctor_get(v_snd_2758_, 2);
v_exprMap_2766_ = lean_ctor_get(v_snd_2758_, 3);
v_recursorRuleMap_2767_ = lean_ctor_get(v_snd_2758_, 4);
v_constMap_2768_ = lean_ctor_get(v_snd_2758_, 5);
v_constOrder_2769_ = lean_ctor_get(v_snd_2758_, 6);
v_rewrites_2770_ = lean_ctor_get(v_snd_2758_, 7);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_snd_2758_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2772_ = v_snd_2758_;
v_isShared_2773_ = v_isSharedCheck_2801_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_rewrites_2770_);
lean_inc(v_constOrder_2769_);
lean_inc(v_constMap_2768_);
lean_inc(v_recursorRuleMap_2767_);
lean_inc(v_exprMap_2766_);
lean_inc(v_levelMap_2765_);
lean_inc(v_nameMap_2764_);
lean_inc(v_stream_2763_);
lean_dec(v_snd_2758_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2801_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
uint8_t v___x_2774_; 
v___x_2774_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_2768_, v_val_2725_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
lean_inc(v_val_2725_);
v___x_2775_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2775_, 0, v_val_2725_);
lean_ctor_set(v___x_2775_, 1, v_fst_2737_);
lean_ctor_set(v___x_2775_, 2, v_val_2740_);
v___x_2776_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
lean_ctor_set(v___x_2776_, 1, v_val_2745_);
lean_ctor_set(v___x_2776_, 2, v___y_2750_);
lean_ctor_set(v___x_2776_, 3, v_fst_2759_);
lean_ctor_set_uint8(v___x_2776_, sizeof(void*)*4, v_safety_2751_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 0, v___x_2776_);
v___x_2778_ = v___x_2747_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2779_ = lean_box(0);
lean_inc(v_val_2725_);
v___x_2780_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_2768_, v_val_2725_, v___x_2778_);
v___x_2781_ = lean_array_push(v_constOrder_2769_, v_val_2725_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 6, v___x_2781_);
lean_ctor_set(v___x_2772_, 5, v___x_2780_);
v___x_2783_ = v___x_2772_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_stream_2763_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_nameMap_2764_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v_levelMap_2765_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v_exprMap_2766_);
lean_ctor_set(v_reuseFailAlloc_2790_, 4, v_recursorRuleMap_2767_);
lean_ctor_set(v_reuseFailAlloc_2790_, 5, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2790_, 6, v___x_2781_);
lean_ctor_set(v_reuseFailAlloc_2790_, 7, v_rewrites_2770_);
v___x_2783_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2785_; 
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 1, v___x_2783_);
lean_ctor_set(v___x_2761_, 0, v___x_2779_);
v___x_2785_ = v___x_2761_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2779_);
lean_ctor_set(v_reuseFailAlloc_2789_, 1, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2787_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2785_);
v___x_2787_ = v___x_2756_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2785_);
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
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2796_; 
lean_del_object(v___x_2772_);
lean_dec_ref(v_rewrites_2770_);
lean_dec_ref(v_constOrder_2769_);
lean_dec_ref(v_constMap_2768_);
lean_dec_ref(v_recursorRuleMap_2767_);
lean_dec_ref(v_exprMap_2766_);
lean_dec_ref(v_levelMap_2765_);
lean_dec_ref(v_nameMap_2764_);
lean_dec_ref(v_stream_2763_);
lean_del_object(v___x_2761_);
lean_dec(v_fst_2759_);
lean_dec(v___y_2750_);
lean_dec(v_val_2745_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
v___x_2792_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_2793_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2725_, v___x_2774_);
v___x_2794_ = lean_string_append(v___x_2792_, v___x_2793_);
lean_dec_ref(v___x_2793_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set_tag(v___x_2747_, 18);
lean_ctor_set(v___x_2747_, 0, v___x_2794_);
v___x_2796_ = v___x_2747_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2794_);
v___x_2796_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2798_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 1);
lean_ctor_set(v___x_2756_, 0, v___x_2796_);
v___x_2798_ = v___x_2756_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
lean_dec(v___y_2750_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_val_2725_);
v_a_2804_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2753_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2753_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
v___jp_2812_:
{
lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2815_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__5));
v___x_2816_ = lean_string_dec_eq(v_s_2711_, v___x_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; uint8_t v___x_2818_; 
v___x_2817_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__6));
v___x_2818_ = lean_string_dec_eq(v_s_2711_, v___x_2817_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; uint8_t v___x_2820_; 
v___x_2819_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__7));
v___x_2820_ = lean_string_dec_eq(v_s_2711_, v___x_2819_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2824_; 
lean_dec_ref(v___y_2814_);
lean_dec(v_hints_2813_);
lean_del_object(v___x_2747_);
lean_dec(v_val_2745_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
v___x_2821_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__8));
v___x_2822_ = lean_string_append(v___x_2821_, v_s_2711_);
lean_dec_ref(v_s_2711_);
if (v_isShared_2743_ == 0)
{
lean_ctor_set_tag(v___x_2742_, 18);
lean_ctor_set(v___x_2742_, 0, v___x_2822_);
v___x_2824_ = v___x_2742_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2826_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
lean_ctor_set(v___x_2734_, 0, v___x_2824_);
v___x_2826_ = v___x_2734_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v___x_2824_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
else
{
uint8_t v___x_2829_; 
lean_del_object(v___x_2742_);
lean_del_object(v___x_2734_);
lean_dec_ref(v_s_2711_);
v___x_2829_ = 2;
v___y_2750_ = v_hints_2813_;
v_safety_2751_ = v___x_2829_;
v___y_2752_ = v___y_2814_;
goto v___jp_2749_;
}
}
else
{
uint8_t v___x_2830_; 
lean_del_object(v___x_2742_);
lean_del_object(v___x_2734_);
lean_dec_ref(v_s_2711_);
v___x_2830_ = 1;
v___y_2750_ = v_hints_2813_;
v_safety_2751_ = v___x_2830_;
v___y_2752_ = v___y_2814_;
goto v___jp_2749_;
}
}
else
{
uint8_t v___x_2831_; 
lean_del_object(v___x_2742_);
lean_del_object(v___x_2734_);
lean_dec_ref(v_s_2711_);
v___x_2831_ = 0;
v___y_2750_ = v_hints_2813_;
v_safety_2751_ = v___x_2831_;
v___y_2752_ = v___y_2814_;
goto v___jp_2749_;
}
}
}
}
else
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2856_; 
lean_dec(v___x_2744_);
lean_dec(v_val_2740_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
v___x_2852_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2853_ = l_Nat_reprFast(v_a_2730_);
v___x_2854_ = lean_string_append(v___x_2852_, v___x_2853_);
lean_dec_ref(v___x_2853_);
if (v_isShared_2743_ == 0)
{
lean_ctor_set_tag(v___x_2742_, 18);
lean_ctor_set(v___x_2742_, 0, v___x_2854_);
v___x_2856_ = v___x_2742_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2854_);
v___x_2856_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
lean_object* v___x_2858_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
lean_ctor_set(v___x_2734_, 0, v___x_2856_);
v___x_2858_ = v___x_2734_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2856_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
}
}
else
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
lean_dec(v___x_2739_);
lean_dec(v_fst_2737_);
lean_dec(v_snd_2736_);
lean_dec(v_a_2730_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
v___x_2862_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_2863_ = l_Nat_reprFast(v_a_2729_);
v___x_2864_ = lean_string_append(v___x_2862_, v___x_2863_);
lean_dec_ref(v___x_2863_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set_tag(v___x_2727_, 18);
lean_ctor_set(v___x_2727_, 0, v___x_2864_);
v___x_2866_ = v___x_2727_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v___x_2868_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
lean_ctor_set(v___x_2734_, 0, v___x_2866_);
v___x_2868_ = v___x_2734_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2866_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_dec(v_a_2730_);
lean_dec(v_a_2729_);
lean_del_object(v___x_2727_);
lean_dec(v_val_2725_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
v_a_2872_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2731_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2731_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2885_; 
lean_dec(v___x_2724_);
lean_dec_ref(v_elems_2718_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec_ref(v_a_2646_);
v___x_2881_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_2882_ = l_Nat_reprFast(v_a_2723_);
v___x_2883_ = lean_string_append(v___x_2881_, v___x_2882_);
lean_dec_ref(v___x_2882_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set_tag(v___x_2720_, 18);
lean_ctor_set(v___x_2720_, 0, v___x_2883_);
v___x_2885_ = v___x_2720_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2883_);
v___x_2885_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
lean_object* v___x_2887_; 
if (v_isShared_2717_ == 0)
{
lean_ctor_set(v___x_2716_, 0, v___x_2885_);
v___x_2887_ = v___x_2716_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2885_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
}
else
{
lean_del_object(v___x_2716_);
lean_dec(v_val_2714_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2663_;
}
}
}
else
{
lean_dec(v___x_2713_);
lean_dec_ref(v_s_2711_);
lean_dec(v_val_2707_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2663_;
}
}
else
{
lean_dec(v_val_2710_);
lean_dec(v_val_2707_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2660_;
}
}
else
{
lean_dec(v___x_2709_);
lean_dec(v_val_2707_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2660_;
}
}
else
{
lean_object* v___x_2892_; lean_object* v___x_2894_; 
lean_dec(v___x_2706_);
lean_dec(v_mantissa_2701_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
v___x_2892_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
if (v_isShared_2700_ == 0)
{
lean_ctor_set_tag(v___x_2699_, 1);
lean_ctor_set(v___x_2699_, 0, v___x_2892_);
v___x_2894_ = v___x_2699_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_dec(v_exponent_2702_);
lean_dec(v_mantissa_2701_);
lean_del_object(v___x_2699_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2657_;
}
}
}
else
{
lean_dec(v_val_2696_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2657_;
}
}
else
{
lean_dec(v___x_2695_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2657_;
}
}
}
else
{
lean_dec(v_exponent_2691_);
lean_dec(v_mantissa_2690_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2654_;
}
}
else
{
lean_dec(v_val_2688_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2654_;
}
}
else
{
lean_dec(v___x_2687_);
lean_dec_ref(v_elems_2685_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2654_;
}
}
else
{
lean_dec(v_val_2684_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2651_;
}
}
else
{
lean_dec(v___x_2683_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2651_;
}
}
}
else
{
lean_dec(v_exponent_2677_);
lean_dec(v_mantissa_2676_);
lean_dec_ref(v_a_2646_);
goto v___jp_2648_;
}
}
else
{
lean_dec(v_val_2674_);
lean_dec_ref(v_a_2646_);
goto v___jp_2648_;
}
}
else
{
lean_dec(v___x_2673_);
lean_dec_ref(v_a_2646_);
goto v___jp_2648_;
}
v___jp_2648_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
return v___x_2650_;
}
v___jp_2651_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2652_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
return v___x_2653_;
}
v___jp_2654_:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
return v___x_2656_;
}
v___jp_2657_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2658_);
return v___x_2659_;
}
v___jp_2660_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2661_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
return v___x_2662_;
}
v___jp_2663_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
return v___x_2665_;
}
v___jp_2666_:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
v___jp_2669_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__1));
v___x_2671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
return v___x_2671_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___boxed(lean_object* v_data_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_){
_start:
{
lean_object* v_res_2900_; 
v_res_2900_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(v_data_2897_, v_a_2898_);
lean_dec(v_data_2897_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(lean_object* v_data_2904_, lean_object* v_a_2905_){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_2923_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2904_, v___x_2922_);
if (lean_obj_tag(v___x_2923_) == 1)
{
lean_object* v_val_2924_; 
v_val_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_val_2924_);
lean_dec_ref_known(v___x_2923_, 1);
if (lean_obj_tag(v_val_2924_) == 2)
{
lean_object* v_n_2925_; lean_object* v_mantissa_2926_; lean_object* v_exponent_2927_; lean_object* v_natZero_2928_; lean_object* v_intZero_2929_; uint8_t v_isNeg_2930_; 
v_n_2925_ = lean_ctor_get(v_val_2924_, 0);
lean_inc_ref(v_n_2925_);
lean_dec_ref_known(v_val_2924_, 1);
v_mantissa_2926_ = lean_ctor_get(v_n_2925_, 0);
lean_inc(v_mantissa_2926_);
v_exponent_2927_ = lean_ctor_get(v_n_2925_, 1);
lean_inc(v_exponent_2927_);
lean_dec_ref(v_n_2925_);
v_natZero_2928_ = lean_unsigned_to_nat(0u);
v_intZero_2929_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_2930_ = lean_int_dec_lt(v_mantissa_2926_, v_intZero_2929_);
if (v_isNeg_2930_ == 0)
{
uint8_t v___x_2931_; 
v___x_2931_ = lean_nat_dec_eq(v_exponent_2927_, v_natZero_2928_);
lean_dec(v_exponent_2927_);
if (v___x_2931_ == 0)
{
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2907_;
}
else
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_2933_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2904_, v___x_2932_);
if (lean_obj_tag(v___x_2933_) == 1)
{
lean_object* v_val_2934_; 
v_val_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_val_2934_);
lean_dec_ref_known(v___x_2933_, 1);
if (lean_obj_tag(v_val_2934_) == 4)
{
lean_object* v_elems_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_elems_2935_ = lean_ctor_get(v_val_2934_, 0);
lean_inc_ref(v_elems_2935_);
lean_dec_ref_known(v_val_2934_, 1);
v___x_2936_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_2937_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2904_, v___x_2936_);
if (lean_obj_tag(v___x_2937_) == 1)
{
lean_object* v_val_2938_; 
v_val_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_val_2938_);
lean_dec_ref_known(v___x_2937_, 1);
if (lean_obj_tag(v_val_2938_) == 2)
{
lean_object* v_n_2939_; lean_object* v_mantissa_2940_; lean_object* v_exponent_2941_; uint8_t v_isNeg_2942_; 
v_n_2939_ = lean_ctor_get(v_val_2938_, 0);
lean_inc_ref(v_n_2939_);
lean_dec_ref_known(v_val_2938_, 1);
v_mantissa_2940_ = lean_ctor_get(v_n_2939_, 0);
lean_inc(v_mantissa_2940_);
v_exponent_2941_ = lean_ctor_get(v_n_2939_, 1);
lean_inc(v_exponent_2941_);
lean_dec_ref(v_n_2939_);
v_isNeg_2942_ = lean_int_dec_lt(v_mantissa_2940_, v_intZero_2929_);
if (v_isNeg_2942_ == 0)
{
uint8_t v___x_2943_; 
v___x_2943_ = lean_nat_dec_eq(v_exponent_2941_, v_natZero_2928_);
lean_dec(v_exponent_2941_);
if (v___x_2943_ == 0)
{
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2913_;
}
else
{
lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_2945_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2904_, v___x_2944_);
if (lean_obj_tag(v___x_2945_) == 1)
{
lean_object* v_val_2946_; 
v_val_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_val_2946_);
lean_dec_ref_known(v___x_2945_, 1);
if (lean_obj_tag(v_val_2946_) == 2)
{
lean_object* v_n_2947_; lean_object* v_mantissa_2948_; lean_object* v_exponent_2949_; uint8_t v_isNeg_2950_; 
v_n_2947_ = lean_ctor_get(v_val_2946_, 0);
lean_inc_ref(v_n_2947_);
lean_dec_ref_known(v_val_2946_, 1);
v_mantissa_2948_ = lean_ctor_get(v_n_2947_, 0);
lean_inc(v_mantissa_2948_);
v_exponent_2949_ = lean_ctor_get(v_n_2947_, 1);
lean_inc(v_exponent_2949_);
lean_dec_ref(v_n_2947_);
v_isNeg_2950_ = lean_int_dec_lt(v_mantissa_2948_, v_intZero_2929_);
if (v_isNeg_2950_ == 0)
{
uint8_t v___x_2951_; 
v___x_2951_ = lean_nat_dec_eq(v_exponent_2949_, v_natZero_2928_);
lean_dec(v_exponent_2949_);
if (v___x_2951_ == 0)
{
lean_dec(v_mantissa_2948_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2916_;
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_2953_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_2904_, v___x_2952_);
if (lean_obj_tag(v___x_2953_) == 1)
{
lean_object* v_val_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_3088_; 
v_val_2954_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_2956_ = v___x_2953_;
v_isShared_2957_ = v_isSharedCheck_3088_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_val_2954_);
lean_dec(v___x_2953_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_3088_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
if (lean_obj_tag(v_val_2954_) == 4)
{
lean_object* v_elems_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_3087_; 
v_elems_2958_ = lean_ctor_get(v_val_2954_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_val_2954_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_2960_ = v_val_2954_;
v_isShared_2961_ = v_isSharedCheck_3087_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_elems_2958_);
lean_dec(v_val_2954_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_3087_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v_nameMap_2962_; lean_object* v_a_2963_; lean_object* v___x_2964_; 
v_nameMap_2962_ = lean_ctor_get(v_a_2905_, 1);
v_a_2963_ = lean_nat_abs(v_mantissa_2926_);
lean_dec(v_mantissa_2926_);
v___x_2964_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_2962_, v_a_2963_);
if (lean_obj_tag(v___x_2964_) == 1)
{
lean_object* v_val_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_3077_; 
lean_dec(v_a_2963_);
lean_del_object(v___x_2960_);
lean_del_object(v___x_2956_);
v_val_2965_ = lean_ctor_get(v___x_2964_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_2967_ = v___x_2964_;
v_isShared_2968_ = v_isSharedCheck_3077_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_val_2965_);
lean_dec(v___x_2964_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_3077_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v_a_2969_; lean_object* v_a_2970_; lean_object* v___x_2971_; 
v_a_2969_ = lean_nat_abs(v_mantissa_2940_);
lean_dec(v_mantissa_2940_);
v_a_2970_ = lean_nat_abs(v_mantissa_2948_);
lean_dec(v_mantissa_2948_);
v___x_2971_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2935_, v_a_2905_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3068_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_2974_ = v___x_2971_;
v_isShared_2975_ = v_isSharedCheck_3068_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2971_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3068_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v_snd_2976_; lean_object* v_fst_2977_; lean_object* v_exprMap_2978_; lean_object* v___x_2979_; 
v_snd_2976_ = lean_ctor_get(v_a_2972_, 1);
lean_inc(v_snd_2976_);
v_fst_2977_ = lean_ctor_get(v_a_2972_, 0);
lean_inc(v_fst_2977_);
lean_dec(v_a_2972_);
v_exprMap_2978_ = lean_ctor_get(v_snd_2976_, 3);
v___x_2979_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2978_, v_a_2969_);
if (lean_obj_tag(v___x_2979_) == 1)
{
lean_object* v_val_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_3058_; 
lean_dec(v_a_2969_);
lean_del_object(v___x_2967_);
v_val_2980_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_2982_ = v___x_2979_;
v_isShared_2983_ = v_isSharedCheck_3058_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_val_2980_);
lean_dec(v___x_2979_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_3058_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2984_; 
v___x_2984_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_2978_, v_a_2970_);
if (lean_obj_tag(v___x_2984_) == 1)
{
lean_object* v_val_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3048_; 
lean_del_object(v___x_2982_);
lean_del_object(v___x_2974_);
lean_dec(v_a_2970_);
v_val_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_3048_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_val_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3048_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; 
v___x_2989_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_2958_, v_snd_2976_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3039_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_2992_ = v___x_2989_;
v_isShared_2993_ = v_isSharedCheck_3039_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2989_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3039_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v_snd_2994_; lean_object* v_fst_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3038_; 
v_snd_2994_ = lean_ctor_get(v_a_2990_, 1);
v_fst_2995_ = lean_ctor_get(v_a_2990_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_a_2990_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_2997_ = v_a_2990_;
v_isShared_2998_ = v_isSharedCheck_3038_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_snd_2994_);
lean_inc(v_fst_2995_);
lean_dec(v_a_2990_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3038_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_stream_2999_; lean_object* v_nameMap_3000_; lean_object* v_levelMap_3001_; lean_object* v_exprMap_3002_; lean_object* v_recursorRuleMap_3003_; lean_object* v_constMap_3004_; lean_object* v_constOrder_3005_; lean_object* v_rewrites_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3037_; 
v_stream_2999_ = lean_ctor_get(v_snd_2994_, 0);
v_nameMap_3000_ = lean_ctor_get(v_snd_2994_, 1);
v_levelMap_3001_ = lean_ctor_get(v_snd_2994_, 2);
v_exprMap_3002_ = lean_ctor_get(v_snd_2994_, 3);
v_recursorRuleMap_3003_ = lean_ctor_get(v_snd_2994_, 4);
v_constMap_3004_ = lean_ctor_get(v_snd_2994_, 5);
v_constOrder_3005_ = lean_ctor_get(v_snd_2994_, 6);
v_rewrites_3006_ = lean_ctor_get(v_snd_2994_, 7);
v_isSharedCheck_3037_ = !lean_is_exclusive(v_snd_2994_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3008_ = v_snd_2994_;
v_isShared_3009_ = v_isSharedCheck_3037_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_rewrites_3006_);
lean_inc(v_constOrder_3005_);
lean_inc(v_constMap_3004_);
lean_inc(v_recursorRuleMap_3003_);
lean_inc(v_exprMap_3002_);
lean_inc(v_levelMap_3001_);
lean_inc(v_nameMap_3000_);
lean_inc(v_stream_2999_);
lean_dec(v_snd_2994_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3037_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
uint8_t v___x_3010_; 
v___x_3010_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3004_, v_val_2965_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_inc(v_val_2965_);
v___x_3011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3011_, 0, v_val_2965_);
lean_ctor_set(v___x_3011_, 1, v_fst_2977_);
lean_ctor_set(v___x_3011_, 2, v_val_2980_);
v___x_3012_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
lean_ctor_set(v___x_3012_, 1, v_val_2985_);
lean_ctor_set(v___x_3012_, 2, v_fst_2995_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set_tag(v___x_2987_, 2);
lean_ctor_set(v___x_2987_, 0, v___x_3012_);
v___x_3014_ = v___x_2987_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3019_; 
v___x_3015_ = lean_box(0);
lean_inc(v_val_2965_);
v___x_3016_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3004_, v_val_2965_, v___x_3014_);
v___x_3017_ = lean_array_push(v_constOrder_3005_, v_val_2965_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 6, v___x_3017_);
lean_ctor_set(v___x_3008_, 5, v___x_3016_);
v___x_3019_ = v___x_3008_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_stream_2999_);
lean_ctor_set(v_reuseFailAlloc_3026_, 1, v_nameMap_3000_);
lean_ctor_set(v_reuseFailAlloc_3026_, 2, v_levelMap_3001_);
lean_ctor_set(v_reuseFailAlloc_3026_, 3, v_exprMap_3002_);
lean_ctor_set(v_reuseFailAlloc_3026_, 4, v_recursorRuleMap_3003_);
lean_ctor_set(v_reuseFailAlloc_3026_, 5, v___x_3016_);
lean_ctor_set(v_reuseFailAlloc_3026_, 6, v___x_3017_);
lean_ctor_set(v_reuseFailAlloc_3026_, 7, v_rewrites_3006_);
v___x_3019_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3021_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 1, v___x_3019_);
lean_ctor_set(v___x_2997_, 0, v___x_3015_);
v___x_3021_ = v___x_2997_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v___x_3015_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
lean_object* v___x_3023_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v___x_3021_);
v___x_3023_ = v___x_2992_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3021_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
}
}
else
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3032_; 
lean_del_object(v___x_3008_);
lean_dec_ref(v_rewrites_3006_);
lean_dec_ref(v_constOrder_3005_);
lean_dec_ref(v_constMap_3004_);
lean_dec_ref(v_recursorRuleMap_3003_);
lean_dec_ref(v_exprMap_3002_);
lean_dec_ref(v_levelMap_3001_);
lean_dec_ref(v_nameMap_3000_);
lean_dec_ref(v_stream_2999_);
lean_del_object(v___x_2997_);
lean_dec(v_fst_2995_);
lean_dec(v_val_2985_);
lean_dec(v_val_2980_);
lean_dec(v_fst_2977_);
v___x_3028_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3029_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_2965_, v___x_3010_);
v___x_3030_ = lean_string_append(v___x_3028_, v___x_3029_);
lean_dec_ref(v___x_3029_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set_tag(v___x_2987_, 18);
lean_ctor_set(v___x_2987_, 0, v___x_3030_);
v___x_3032_ = v___x_2987_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3034_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set_tag(v___x_2992_, 1);
lean_ctor_set(v___x_2992_, 0, v___x_3032_);
v___x_3034_ = v___x_2992_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_del_object(v___x_2987_);
lean_dec(v_val_2985_);
lean_dec(v_val_2980_);
lean_dec(v_fst_2977_);
lean_dec(v_val_2965_);
v_a_3040_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_2989_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_2989_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
else
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
lean_dec(v___x_2984_);
lean_dec(v_val_2980_);
lean_dec(v_fst_2977_);
lean_dec(v_snd_2976_);
lean_dec(v_val_2965_);
lean_dec_ref(v_elems_2958_);
v___x_3049_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3050_ = l_Nat_reprFast(v_a_2970_);
v___x_3051_ = lean_string_append(v___x_3049_, v___x_3050_);
lean_dec_ref(v___x_3050_);
if (v_isShared_2983_ == 0)
{
lean_ctor_set_tag(v___x_2982_, 18);
lean_ctor_set(v___x_2982_, 0, v___x_3051_);
v___x_3053_ = v___x_2982_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3055_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 1);
lean_ctor_set(v___x_2974_, 0, v___x_3053_);
v___x_3055_ = v___x_2974_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
else
{
lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3063_; 
lean_dec(v___x_2979_);
lean_dec(v_fst_2977_);
lean_dec(v_snd_2976_);
lean_dec(v_a_2970_);
lean_dec(v_val_2965_);
lean_dec_ref(v_elems_2958_);
v___x_3059_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3060_ = l_Nat_reprFast(v_a_2969_);
v___x_3061_ = lean_string_append(v___x_3059_, v___x_3060_);
lean_dec_ref(v___x_3060_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set_tag(v___x_2967_, 18);
lean_ctor_set(v___x_2967_, 0, v___x_3061_);
v___x_3063_ = v___x_2967_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v___x_3061_);
v___x_3063_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
lean_object* v___x_3065_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 1);
lean_ctor_set(v___x_2974_, 0, v___x_3063_);
v___x_3065_ = v___x_2974_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3063_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
lean_dec(v_a_2970_);
lean_dec(v_a_2969_);
lean_del_object(v___x_2967_);
lean_dec(v_val_2965_);
lean_dec_ref(v_elems_2958_);
v_a_3069_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_2971_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_2971_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3082_; 
lean_dec(v___x_2964_);
lean_dec_ref(v_elems_2958_);
lean_dec(v_mantissa_2948_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec_ref(v_a_2905_);
v___x_3078_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3079_ = l_Nat_reprFast(v_a_2963_);
v___x_3080_ = lean_string_append(v___x_3078_, v___x_3079_);
lean_dec_ref(v___x_3079_);
if (v_isShared_2961_ == 0)
{
lean_ctor_set_tag(v___x_2960_, 18);
lean_ctor_set(v___x_2960_, 0, v___x_3080_);
v___x_3082_ = v___x_2960_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v___x_3080_);
v___x_3082_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3084_; 
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 0, v___x_3082_);
v___x_3084_ = v___x_2956_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3082_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
else
{
lean_del_object(v___x_2956_);
lean_dec(v_val_2954_);
lean_dec(v_mantissa_2948_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2919_;
}
}
}
else
{
lean_dec(v___x_2953_);
lean_dec(v_mantissa_2948_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2919_;
}
}
}
else
{
lean_dec(v_exponent_2949_);
lean_dec(v_mantissa_2948_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2916_;
}
}
else
{
lean_dec(v_val_2946_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2916_;
}
}
else
{
lean_dec(v___x_2945_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2916_;
}
}
}
else
{
lean_dec(v_exponent_2941_);
lean_dec(v_mantissa_2940_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2913_;
}
}
else
{
lean_dec(v_val_2938_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2913_;
}
}
else
{
lean_dec(v___x_2937_);
lean_dec_ref(v_elems_2935_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2913_;
}
}
else
{
lean_dec(v_val_2934_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2910_;
}
}
else
{
lean_dec(v___x_2933_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2910_;
}
}
}
else
{
lean_dec(v_exponent_2927_);
lean_dec(v_mantissa_2926_);
lean_dec_ref(v_a_2905_);
goto v___jp_2907_;
}
}
else
{
lean_dec(v_val_2924_);
lean_dec_ref(v_a_2905_);
goto v___jp_2907_;
}
}
else
{
lean_dec(v___x_2923_);
lean_dec_ref(v_a_2905_);
goto v___jp_2907_;
}
v___jp_2907_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
v___jp_2910_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2911_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
return v___x_2912_;
}
v___jp_2913_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2914_);
return v___x_2915_;
}
v___jp_2916_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
return v___x_2918_;
}
v___jp_2919_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___closed__1));
v___x_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo___boxed(lean_object* v_data_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(v_data_3089_, v_a_3090_);
lean_dec(v_data_3089_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(lean_object* v_data_3096_, lean_object* v_a_3097_){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3115_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3114_);
if (lean_obj_tag(v___x_3115_) == 1)
{
lean_object* v_val_3116_; 
v_val_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_val_3116_);
lean_dec_ref_known(v___x_3115_, 1);
if (lean_obj_tag(v_val_3116_) == 2)
{
lean_object* v_n_3117_; lean_object* v_mantissa_3118_; lean_object* v_exponent_3119_; lean_object* v_natZero_3120_; lean_object* v_intZero_3121_; uint8_t v_isNeg_3122_; 
v_n_3117_ = lean_ctor_get(v_val_3116_, 0);
lean_inc_ref(v_n_3117_);
lean_dec_ref_known(v_val_3116_, 1);
v_mantissa_3118_ = lean_ctor_get(v_n_3117_, 0);
lean_inc(v_mantissa_3118_);
v_exponent_3119_ = lean_ctor_get(v_n_3117_, 1);
lean_inc(v_exponent_3119_);
lean_dec_ref(v_n_3117_);
v_natZero_3120_ = lean_unsigned_to_nat(0u);
v_intZero_3121_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3122_ = lean_int_dec_lt(v_mantissa_3118_, v_intZero_3121_);
if (v_isNeg_3122_ == 0)
{
uint8_t v___x_3123_; 
v___x_3123_ = lean_nat_dec_eq(v_exponent_3119_, v_natZero_3120_);
lean_dec(v_exponent_3119_);
if (v___x_3123_ == 0)
{
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3111_;
}
else
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3125_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3124_);
if (lean_obj_tag(v___x_3125_) == 1)
{
lean_object* v_val_3126_; 
v_val_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_val_3126_);
lean_dec_ref_known(v___x_3125_, 1);
if (lean_obj_tag(v_val_3126_) == 4)
{
lean_object* v_elems_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v_elems_3127_ = lean_ctor_get(v_val_3126_, 0);
lean_inc_ref(v_elems_3127_);
lean_dec_ref_known(v_val_3126_, 1);
v___x_3128_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3129_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3128_);
if (lean_obj_tag(v___x_3129_) == 1)
{
lean_object* v_val_3130_; 
v_val_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_val_3130_);
lean_dec_ref_known(v___x_3129_, 1);
if (lean_obj_tag(v_val_3130_) == 2)
{
lean_object* v_n_3131_; lean_object* v_mantissa_3132_; lean_object* v_exponent_3133_; uint8_t v_isNeg_3134_; 
v_n_3131_ = lean_ctor_get(v_val_3130_, 0);
lean_inc_ref(v_n_3131_);
lean_dec_ref_known(v_val_3130_, 1);
v_mantissa_3132_ = lean_ctor_get(v_n_3131_, 0);
lean_inc(v_mantissa_3132_);
v_exponent_3133_ = lean_ctor_get(v_n_3131_, 1);
lean_inc(v_exponent_3133_);
lean_dec_ref(v_n_3131_);
v_isNeg_3134_ = lean_int_dec_lt(v_mantissa_3132_, v_intZero_3121_);
if (v_isNeg_3134_ == 0)
{
uint8_t v___x_3135_; 
v___x_3135_ = lean_nat_dec_eq(v_exponent_3133_, v_natZero_3120_);
lean_dec(v_exponent_3133_);
if (v___x_3135_ == 0)
{
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3105_;
}
else
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE___closed__2));
v___x_3137_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3136_);
if (lean_obj_tag(v___x_3137_) == 1)
{
lean_object* v_val_3138_; 
v_val_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_val_3138_);
lean_dec_ref_known(v___x_3137_, 1);
if (lean_obj_tag(v_val_3138_) == 2)
{
lean_object* v_n_3139_; lean_object* v_mantissa_3140_; lean_object* v_exponent_3141_; uint8_t v_isNeg_3142_; 
v_n_3139_ = lean_ctor_get(v_val_3138_, 0);
lean_inc_ref(v_n_3139_);
lean_dec_ref_known(v_val_3138_, 1);
v_mantissa_3140_ = lean_ctor_get(v_n_3139_, 0);
lean_inc(v_mantissa_3140_);
v_exponent_3141_ = lean_ctor_get(v_n_3139_, 1);
lean_inc(v_exponent_3141_);
lean_dec_ref(v_n_3139_);
v_isNeg_3142_ = lean_int_dec_lt(v_mantissa_3140_, v_intZero_3121_);
if (v_isNeg_3142_ == 0)
{
uint8_t v___x_3143_; 
v___x_3143_ = lean_nat_dec_eq(v_exponent_3141_, v_natZero_3120_);
lean_dec(v_exponent_3141_);
if (v___x_3143_ == 0)
{
lean_dec(v_mantissa_3140_);
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3102_;
}
else
{
lean_object* v_a_3144_; lean_object* v_a_3145_; lean_object* v_a_3146_; uint8_t v_b_3148_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v_a_3144_ = lean_nat_abs(v_mantissa_3118_);
lean_dec(v_mantissa_3118_);
v_a_3145_ = lean_nat_abs(v_mantissa_3132_);
lean_dec(v_mantissa_3132_);
v_a_3146_ = lean_nat_abs(v_mantissa_3140_);
lean_dec(v_mantissa_3140_);
v___x_3283_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3284_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3283_);
if (lean_obj_tag(v___x_3284_) == 0)
{
v_b_3148_ = v_isNeg_3142_;
goto v___jp_3147_;
}
else
{
lean_object* v_val_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3294_; 
v_val_3285_ = lean_ctor_get(v___x_3284_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3287_ = v___x_3284_;
v_isShared_3288_ = v_isSharedCheck_3294_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_val_3285_);
lean_dec(v___x_3284_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3294_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
if (lean_obj_tag(v_val_3285_) == 1)
{
uint8_t v_b_3289_; 
lean_del_object(v___x_3287_);
v_b_3289_ = lean_ctor_get_uint8(v_val_3285_, 0);
lean_dec_ref_known(v_val_3285_, 0);
v_b_3148_ = v_b_3289_;
goto v___jp_3147_;
}
else
{
lean_object* v___x_3290_; lean_object* v___x_3292_; 
lean_dec(v_val_3285_);
lean_dec(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec(v_a_3144_);
lean_dec_ref(v_elems_3127_);
lean_dec_ref(v_a_3097_);
v___x_3290_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__1));
if (v_isShared_3288_ == 0)
{
lean_ctor_set(v___x_3287_, 0, v___x_3290_);
v___x_3292_ = v___x_3287_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3290_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
v___jp_3147_:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3149_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_3150_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3096_, v___x_3149_);
if (lean_obj_tag(v___x_3150_) == 1)
{
lean_object* v_val_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3282_; 
v_val_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3282_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_val_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3282_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
if (lean_obj_tag(v_val_3151_) == 4)
{
lean_object* v_elems_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3281_; 
v_elems_3155_ = lean_ctor_get(v_val_3151_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v_val_3151_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3157_ = v_val_3151_;
v_isShared_3158_ = v_isSharedCheck_3281_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_elems_3155_);
lean_dec(v_val_3151_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3281_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v_nameMap_3159_; lean_object* v___x_3160_; 
v_nameMap_3159_ = lean_ctor_get(v_a_3097_, 1);
v___x_3160_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3159_, v_a_3144_);
if (lean_obj_tag(v___x_3160_) == 1)
{
lean_object* v_val_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3271_; 
lean_del_object(v___x_3157_);
lean_del_object(v___x_3153_);
lean_dec(v_a_3144_);
v_val_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3271_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_val_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3271_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3165_; 
v___x_3165_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3127_, v_a_3097_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3262_; 
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3168_ = v___x_3165_;
v_isShared_3169_ = v_isSharedCheck_3262_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_3165_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3262_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v_snd_3170_; lean_object* v_fst_3171_; lean_object* v_exprMap_3172_; lean_object* v___x_3173_; 
v_snd_3170_ = lean_ctor_get(v_a_3166_, 1);
lean_inc(v_snd_3170_);
v_fst_3171_ = lean_ctor_get(v_a_3166_, 0);
lean_inc(v_fst_3171_);
lean_dec(v_a_3166_);
v_exprMap_3172_ = lean_ctor_get(v_snd_3170_, 3);
v___x_3173_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3172_, v_a_3145_);
if (lean_obj_tag(v___x_3173_) == 1)
{
lean_object* v_val_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3252_; 
lean_del_object(v___x_3163_);
lean_dec(v_a_3145_);
v_val_3174_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3176_ = v___x_3173_;
v_isShared_3177_ = v_isSharedCheck_3252_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_val_3174_);
lean_dec(v___x_3173_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3252_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; 
v___x_3178_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3172_, v_a_3146_);
if (lean_obj_tag(v___x_3178_) == 1)
{
lean_object* v_val_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3242_; 
lean_del_object(v___x_3176_);
lean_del_object(v___x_3168_);
lean_dec(v_a_3146_);
v_val_3179_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3181_ = v___x_3178_;
v_isShared_3182_ = v_isSharedCheck_3242_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_val_3179_);
lean_dec(v___x_3178_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3242_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; 
v___x_3183_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3155_, v_snd_3170_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3233_; 
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3186_ = v___x_3183_;
v_isShared_3187_ = v_isSharedCheck_3233_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3233_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_snd_3188_; lean_object* v_fst_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3232_; 
v_snd_3188_ = lean_ctor_get(v_a_3184_, 1);
v_fst_3189_ = lean_ctor_get(v_a_3184_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v_a_3184_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3191_ = v_a_3184_;
v_isShared_3192_ = v_isSharedCheck_3232_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_snd_3188_);
lean_inc(v_fst_3189_);
lean_dec(v_a_3184_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3232_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v_stream_3193_; lean_object* v_nameMap_3194_; lean_object* v_levelMap_3195_; lean_object* v_exprMap_3196_; lean_object* v_recursorRuleMap_3197_; lean_object* v_constMap_3198_; lean_object* v_constOrder_3199_; lean_object* v_rewrites_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3231_; 
v_stream_3193_ = lean_ctor_get(v_snd_3188_, 0);
v_nameMap_3194_ = lean_ctor_get(v_snd_3188_, 1);
v_levelMap_3195_ = lean_ctor_get(v_snd_3188_, 2);
v_exprMap_3196_ = lean_ctor_get(v_snd_3188_, 3);
v_recursorRuleMap_3197_ = lean_ctor_get(v_snd_3188_, 4);
v_constMap_3198_ = lean_ctor_get(v_snd_3188_, 5);
v_constOrder_3199_ = lean_ctor_get(v_snd_3188_, 6);
v_rewrites_3200_ = lean_ctor_get(v_snd_3188_, 7);
v_isSharedCheck_3231_ = !lean_is_exclusive(v_snd_3188_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3202_ = v_snd_3188_;
v_isShared_3203_ = v_isSharedCheck_3231_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_rewrites_3200_);
lean_inc(v_constOrder_3199_);
lean_inc(v_constMap_3198_);
lean_inc(v_recursorRuleMap_3197_);
lean_inc(v_exprMap_3196_);
lean_inc(v_levelMap_3195_);
lean_inc(v_nameMap_3194_);
lean_inc(v_stream_3193_);
lean_dec(v_snd_3188_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3231_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
uint8_t v___x_3204_; 
v___x_3204_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3198_, v_val_3161_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3208_; 
lean_inc(v_val_3161_);
v___x_3205_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3205_, 0, v_val_3161_);
lean_ctor_set(v___x_3205_, 1, v_fst_3171_);
lean_ctor_set(v___x_3205_, 2, v_val_3174_);
v___x_3206_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
lean_ctor_set(v___x_3206_, 1, v_val_3179_);
lean_ctor_set(v___x_3206_, 2, v_fst_3189_);
lean_ctor_set_uint8(v___x_3206_, sizeof(void*)*3, v_b_3148_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set_tag(v___x_3181_, 3);
lean_ctor_set(v___x_3181_, 0, v___x_3206_);
v___x_3208_ = v___x_3181_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3213_; 
v___x_3209_ = lean_box(0);
lean_inc(v_val_3161_);
v___x_3210_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3198_, v_val_3161_, v___x_3208_);
v___x_3211_ = lean_array_push(v_constOrder_3199_, v_val_3161_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 6, v___x_3211_);
lean_ctor_set(v___x_3202_, 5, v___x_3210_);
v___x_3213_ = v___x_3202_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_stream_3193_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v_nameMap_3194_);
lean_ctor_set(v_reuseFailAlloc_3220_, 2, v_levelMap_3195_);
lean_ctor_set(v_reuseFailAlloc_3220_, 3, v_exprMap_3196_);
lean_ctor_set(v_reuseFailAlloc_3220_, 4, v_recursorRuleMap_3197_);
lean_ctor_set(v_reuseFailAlloc_3220_, 5, v___x_3210_);
lean_ctor_set(v_reuseFailAlloc_3220_, 6, v___x_3211_);
lean_ctor_set(v_reuseFailAlloc_3220_, 7, v_rewrites_3200_);
v___x_3213_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
lean_object* v___x_3215_; 
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 1, v___x_3213_);
lean_ctor_set(v___x_3191_, 0, v___x_3209_);
v___x_3215_ = v___x_3191_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3219_, 1, v___x_3213_);
v___x_3215_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
lean_object* v___x_3217_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v___x_3215_);
v___x_3217_ = v___x_3186_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v___x_3215_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
lean_del_object(v___x_3202_);
lean_dec_ref(v_rewrites_3200_);
lean_dec_ref(v_constOrder_3199_);
lean_dec_ref(v_constMap_3198_);
lean_dec_ref(v_recursorRuleMap_3197_);
lean_dec_ref(v_exprMap_3196_);
lean_dec_ref(v_levelMap_3195_);
lean_dec_ref(v_nameMap_3194_);
lean_dec_ref(v_stream_3193_);
lean_del_object(v___x_3191_);
lean_dec(v_fst_3189_);
lean_dec(v_val_3179_);
lean_dec(v_val_3174_);
lean_dec(v_fst_3171_);
v___x_3222_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3223_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3161_, v___x_3204_);
v___x_3224_ = lean_string_append(v___x_3222_, v___x_3223_);
lean_dec_ref(v___x_3223_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set_tag(v___x_3181_, 18);
lean_ctor_set(v___x_3181_, 0, v___x_3224_);
v___x_3226_ = v___x_3181_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v___x_3224_);
v___x_3226_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
lean_object* v___x_3228_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set_tag(v___x_3186_, 1);
lean_ctor_set(v___x_3186_, 0, v___x_3226_);
v___x_3228_ = v___x_3186_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_del_object(v___x_3181_);
lean_dec(v_val_3179_);
lean_dec(v_val_3174_);
lean_dec(v_fst_3171_);
lean_dec(v_val_3161_);
v_a_3234_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3183_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3183_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3247_; 
lean_dec(v___x_3178_);
lean_dec(v_val_3174_);
lean_dec(v_fst_3171_);
lean_dec(v_snd_3170_);
lean_dec(v_val_3161_);
lean_dec_ref(v_elems_3155_);
v___x_3243_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3244_ = l_Nat_reprFast(v_a_3146_);
v___x_3245_ = lean_string_append(v___x_3243_, v___x_3244_);
lean_dec_ref(v___x_3244_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set_tag(v___x_3176_, 18);
lean_ctor_set(v___x_3176_, 0, v___x_3245_);
v___x_3247_ = v___x_3176_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3245_);
v___x_3247_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3249_; 
if (v_isShared_3169_ == 0)
{
lean_ctor_set_tag(v___x_3168_, 1);
lean_ctor_set(v___x_3168_, 0, v___x_3247_);
v___x_3249_ = v___x_3168_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3257_; 
lean_dec(v___x_3173_);
lean_dec(v_fst_3171_);
lean_dec(v_snd_3170_);
lean_dec(v_val_3161_);
lean_dec_ref(v_elems_3155_);
lean_dec(v_a_3146_);
v___x_3253_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3254_ = l_Nat_reprFast(v_a_3145_);
v___x_3255_ = lean_string_append(v___x_3253_, v___x_3254_);
lean_dec_ref(v___x_3254_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set_tag(v___x_3163_, 18);
lean_ctor_set(v___x_3163_, 0, v___x_3255_);
v___x_3257_ = v___x_3163_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3255_);
v___x_3257_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
lean_object* v___x_3259_; 
if (v_isShared_3169_ == 0)
{
lean_ctor_set_tag(v___x_3168_, 1);
lean_ctor_set(v___x_3168_, 0, v___x_3257_);
v___x_3259_ = v___x_3168_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3257_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_del_object(v___x_3163_);
lean_dec(v_val_3161_);
lean_dec_ref(v_elems_3155_);
lean_dec(v_a_3146_);
lean_dec(v_a_3145_);
v_a_3263_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3165_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3165_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
else
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
lean_dec(v___x_3160_);
lean_dec_ref(v_elems_3155_);
lean_dec(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec_ref(v_elems_3127_);
lean_dec_ref(v_a_3097_);
v___x_3272_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3273_ = l_Nat_reprFast(v_a_3144_);
v___x_3274_ = lean_string_append(v___x_3272_, v___x_3273_);
lean_dec_ref(v___x_3273_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set_tag(v___x_3157_, 18);
lean_ctor_set(v___x_3157_, 0, v___x_3274_);
v___x_3276_ = v___x_3157_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3278_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 0, v___x_3276_);
v___x_3278_ = v___x_3153_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
else
{
lean_del_object(v___x_3153_);
lean_dec(v_val_3151_);
lean_dec(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec(v_a_3144_);
lean_dec_ref(v_elems_3127_);
lean_dec_ref(v_a_3097_);
goto v___jp_3099_;
}
}
}
else
{
lean_dec(v___x_3150_);
lean_dec(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec(v_a_3144_);
lean_dec_ref(v_elems_3127_);
lean_dec_ref(v_a_3097_);
goto v___jp_3099_;
}
}
}
}
else
{
lean_dec(v_exponent_3141_);
lean_dec(v_mantissa_3140_);
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3102_;
}
}
else
{
lean_dec(v_val_3138_);
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3102_;
}
}
else
{
lean_dec(v___x_3137_);
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3102_;
}
}
}
else
{
lean_dec(v_exponent_3133_);
lean_dec(v_mantissa_3132_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3105_;
}
}
else
{
lean_dec(v_val_3130_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3105_;
}
}
else
{
lean_dec(v___x_3129_);
lean_dec_ref(v_elems_3127_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3105_;
}
}
else
{
lean_dec(v_val_3126_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3108_;
}
}
else
{
lean_dec(v___x_3125_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3108_;
}
}
}
else
{
lean_dec(v_exponent_3119_);
lean_dec(v_mantissa_3118_);
lean_dec_ref(v_a_3097_);
goto v___jp_3111_;
}
}
else
{
lean_dec(v_val_3116_);
lean_dec_ref(v_a_3097_);
goto v___jp_3111_;
}
}
else
{
lean_dec(v___x_3115_);
lean_dec_ref(v_a_3097_);
goto v___jp_3111_;
}
v___jp_3099_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3100_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
return v___x_3101_;
}
v___jp_3102_:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_3104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
return v___x_3104_;
}
v___jp_3105_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
return v___x_3107_;
}
v___jp_3108_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
return v___x_3110_;
}
v___jp_3111_:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___closed__1));
v___x_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
return v___x_3113_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo___boxed(lean_object* v_data_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(v_data_3295_, v_a_3296_);
lean_dec(v_data_3295_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(lean_object* v_data_3307_, lean_object* v_a_3308_){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3323_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3307_, v___x_3322_);
if (lean_obj_tag(v___x_3323_) == 1)
{
lean_object* v_val_3324_; 
v_val_3324_ = lean_ctor_get(v___x_3323_, 0);
lean_inc(v_val_3324_);
lean_dec_ref_known(v___x_3323_, 1);
if (lean_obj_tag(v_val_3324_) == 2)
{
lean_object* v_n_3325_; lean_object* v_mantissa_3326_; lean_object* v_exponent_3327_; lean_object* v_natZero_3328_; lean_object* v_intZero_3329_; uint8_t v_isNeg_3330_; 
v_n_3325_ = lean_ctor_get(v_val_3324_, 0);
lean_inc_ref(v_n_3325_);
lean_dec_ref_known(v_val_3324_, 1);
v_mantissa_3326_ = lean_ctor_get(v_n_3325_, 0);
lean_inc(v_mantissa_3326_);
v_exponent_3327_ = lean_ctor_get(v_n_3325_, 1);
lean_inc(v_exponent_3327_);
lean_dec_ref(v_n_3325_);
v_natZero_3328_ = lean_unsigned_to_nat(0u);
v_intZero_3329_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3330_ = lean_int_dec_lt(v_mantissa_3326_, v_intZero_3329_);
if (v_isNeg_3330_ == 0)
{
uint8_t v___x_3331_; 
v___x_3331_ = lean_nat_dec_eq(v_exponent_3327_, v_natZero_3328_);
lean_dec(v_exponent_3327_);
if (v___x_3331_ == 0)
{
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3319_;
}
else
{
lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3332_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3333_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3307_, v___x_3332_);
if (lean_obj_tag(v___x_3333_) == 1)
{
lean_object* v_val_3334_; 
v_val_3334_ = lean_ctor_get(v___x_3333_, 0);
lean_inc(v_val_3334_);
lean_dec_ref_known(v___x_3333_, 1);
if (lean_obj_tag(v_val_3334_) == 4)
{
lean_object* v_elems_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_elems_3335_ = lean_ctor_get(v_val_3334_, 0);
lean_inc_ref(v_elems_3335_);
lean_dec_ref_known(v_val_3334_, 1);
v___x_3336_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3337_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3307_, v___x_3336_);
if (lean_obj_tag(v___x_3337_) == 1)
{
lean_object* v_val_3338_; 
v_val_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_val_3338_);
lean_dec_ref_known(v___x_3337_, 1);
if (lean_obj_tag(v_val_3338_) == 2)
{
lean_object* v_n_3339_; lean_object* v_mantissa_3340_; lean_object* v_exponent_3341_; uint8_t v_isNeg_3342_; 
v_n_3339_ = lean_ctor_get(v_val_3338_, 0);
lean_inc_ref(v_n_3339_);
lean_dec_ref_known(v_val_3338_, 1);
v_mantissa_3340_ = lean_ctor_get(v_n_3339_, 0);
lean_inc(v_mantissa_3340_);
v_exponent_3341_ = lean_ctor_get(v_n_3339_, 1);
lean_inc(v_exponent_3341_);
lean_dec_ref(v_n_3339_);
v_isNeg_3342_ = lean_int_dec_lt(v_mantissa_3340_, v_intZero_3329_);
if (v_isNeg_3342_ == 0)
{
uint8_t v___x_3343_; 
v___x_3343_ = lean_nat_dec_eq(v_exponent_3341_, v_natZero_3328_);
lean_dec(v_exponent_3341_);
if (v___x_3343_ == 0)
{
lean_dec(v_mantissa_3340_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3313_;
}
else
{
lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3344_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__2));
v___x_3345_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_3307_, v___x_3344_);
if (lean_obj_tag(v___x_3345_) == 1)
{
lean_object* v_val_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3476_; 
v_val_3346_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3348_ = v___x_3345_;
v_isShared_3349_ = v_isSharedCheck_3476_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_val_3346_);
lean_dec(v___x_3345_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3476_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
if (lean_obj_tag(v_val_3346_) == 3)
{
lean_object* v_s_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3475_; 
v_s_3350_ = lean_ctor_get(v_val_3346_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_val_3346_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3352_ = v_val_3346_;
v_isShared_3353_ = v_isSharedCheck_3475_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_s_3350_);
lean_dec(v_val_3346_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3475_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v_nameMap_3354_; lean_object* v_a_3355_; lean_object* v___x_3356_; 
v_nameMap_3354_ = lean_ctor_get(v_a_3308_, 1);
v_a_3355_ = lean_nat_abs(v_mantissa_3326_);
lean_dec(v_mantissa_3326_);
v___x_3356_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3354_, v_a_3355_);
if (lean_obj_tag(v___x_3356_) == 1)
{
lean_object* v_val_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v_a_3355_);
lean_del_object(v___x_3348_);
v_val_3357_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3359_ = v___x_3356_;
v_isShared_3360_ = v_isSharedCheck_3465_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_val_3357_);
lean_dec(v___x_3356_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3465_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v_a_3361_; lean_object* v___x_3362_; 
v_a_3361_ = lean_nat_abs(v_mantissa_3340_);
lean_dec(v_mantissa_3340_);
v___x_3362_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3335_, v_a_3308_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3456_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3365_ = v___x_3362_;
v_isShared_3366_ = v_isSharedCheck_3456_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3362_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3456_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v_snd_3367_; lean_object* v_fst_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3455_; 
v_snd_3367_ = lean_ctor_get(v_a_3363_, 1);
v_fst_3368_ = lean_ctor_get(v_a_3363_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v_a_3363_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3370_ = v_a_3363_;
v_isShared_3371_ = v_isSharedCheck_3455_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_snd_3367_);
lean_inc(v_fst_3368_);
lean_dec(v_a_3363_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3455_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v_stream_3372_; lean_object* v_nameMap_3373_; lean_object* v_levelMap_3374_; lean_object* v_exprMap_3375_; lean_object* v_recursorRuleMap_3376_; lean_object* v_constMap_3377_; lean_object* v_constOrder_3378_; lean_object* v_rewrites_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3454_; 
v_stream_3372_ = lean_ctor_get(v_snd_3367_, 0);
v_nameMap_3373_ = lean_ctor_get(v_snd_3367_, 1);
v_levelMap_3374_ = lean_ctor_get(v_snd_3367_, 2);
v_exprMap_3375_ = lean_ctor_get(v_snd_3367_, 3);
v_recursorRuleMap_3376_ = lean_ctor_get(v_snd_3367_, 4);
v_constMap_3377_ = lean_ctor_get(v_snd_3367_, 5);
v_constOrder_3378_ = lean_ctor_get(v_snd_3367_, 6);
v_rewrites_3379_ = lean_ctor_get(v_snd_3367_, 7);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_snd_3367_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3381_ = v_snd_3367_;
v_isShared_3382_ = v_isSharedCheck_3454_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_rewrites_3379_);
lean_inc(v_constOrder_3378_);
lean_inc(v_constMap_3377_);
lean_inc(v_recursorRuleMap_3376_);
lean_inc(v_exprMap_3375_);
lean_inc(v_levelMap_3374_);
lean_inc(v_nameMap_3373_);
lean_inc(v_stream_3372_);
lean_dec(v_snd_3367_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3454_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3383_; 
v___x_3383_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3375_, v_a_3361_);
if (lean_obj_tag(v___x_3383_) == 1)
{
lean_object* v_val_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3444_; 
lean_dec(v_a_3361_);
v_val_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3444_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_val_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3444_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
uint8_t v_kind_3389_; lean_object* v_stream_3390_; lean_object* v_nameMap_3391_; lean_object* v_levelMap_3392_; lean_object* v_exprMap_3393_; lean_object* v_recursorRuleMap_3394_; lean_object* v_constMap_3395_; lean_object* v_constOrder_3396_; lean_object* v_rewrites_3397_; uint8_t v___x_3425_; 
v___x_3425_ = lean_string_dec_eq(v_s_3350_, v___x_3336_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; uint8_t v___x_3427_; 
v___x_3426_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3));
v___x_3427_ = lean_string_dec_eq(v_s_3350_, v___x_3426_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3428_; uint8_t v___x_3429_; 
v___x_3428_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__4));
v___x_3429_ = lean_string_dec_eq(v_s_3350_, v___x_3428_);
if (v___x_3429_ == 0)
{
lean_object* v___x_3430_; uint8_t v___x_3431_; 
v___x_3430_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__5));
v___x_3431_ = lean_string_dec_eq(v_s_3350_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3435_; 
lean_del_object(v___x_3386_);
lean_dec(v_val_3384_);
lean_del_object(v___x_3381_);
lean_dec_ref(v_rewrites_3379_);
lean_dec_ref(v_constOrder_3378_);
lean_dec_ref(v_constMap_3377_);
lean_dec_ref(v_recursorRuleMap_3376_);
lean_dec_ref(v_exprMap_3375_);
lean_dec_ref(v_levelMap_3374_);
lean_dec_ref(v_nameMap_3373_);
lean_dec_ref(v_stream_3372_);
lean_del_object(v___x_3370_);
lean_dec(v_fst_3368_);
lean_del_object(v___x_3365_);
lean_dec(v_val_3357_);
v___x_3432_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__6));
v___x_3433_ = lean_string_append(v___x_3432_, v_s_3350_);
lean_dec_ref(v_s_3350_);
if (v_isShared_3360_ == 0)
{
lean_ctor_set_tag(v___x_3359_, 18);
lean_ctor_set(v___x_3359_, 0, v___x_3433_);
v___x_3435_ = v___x_3359_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3433_);
v___x_3435_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
lean_object* v___x_3437_; 
if (v_isShared_3353_ == 0)
{
lean_ctor_set_tag(v___x_3352_, 1);
lean_ctor_set(v___x_3352_, 0, v___x_3435_);
v___x_3437_ = v___x_3352_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
else
{
uint8_t v___x_3440_; 
lean_del_object(v___x_3359_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v___x_3440_ = 3;
v_kind_3389_ = v___x_3440_;
v_stream_3390_ = v_stream_3372_;
v_nameMap_3391_ = v_nameMap_3373_;
v_levelMap_3392_ = v_levelMap_3374_;
v_exprMap_3393_ = v_exprMap_3375_;
v_recursorRuleMap_3394_ = v_recursorRuleMap_3376_;
v_constMap_3395_ = v_constMap_3377_;
v_constOrder_3396_ = v_constOrder_3378_;
v_rewrites_3397_ = v_rewrites_3379_;
goto v___jp_3388_;
}
}
else
{
uint8_t v___x_3441_; 
lean_del_object(v___x_3359_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v___x_3441_ = 2;
v_kind_3389_ = v___x_3441_;
v_stream_3390_ = v_stream_3372_;
v_nameMap_3391_ = v_nameMap_3373_;
v_levelMap_3392_ = v_levelMap_3374_;
v_exprMap_3393_ = v_exprMap_3375_;
v_recursorRuleMap_3394_ = v_recursorRuleMap_3376_;
v_constMap_3395_ = v_constMap_3377_;
v_constOrder_3396_ = v_constOrder_3378_;
v_rewrites_3397_ = v_rewrites_3379_;
goto v___jp_3388_;
}
}
else
{
uint8_t v___x_3442_; 
lean_del_object(v___x_3359_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v___x_3442_ = 1;
v_kind_3389_ = v___x_3442_;
v_stream_3390_ = v_stream_3372_;
v_nameMap_3391_ = v_nameMap_3373_;
v_levelMap_3392_ = v_levelMap_3374_;
v_exprMap_3393_ = v_exprMap_3375_;
v_recursorRuleMap_3394_ = v_recursorRuleMap_3376_;
v_constMap_3395_ = v_constMap_3377_;
v_constOrder_3396_ = v_constOrder_3378_;
v_rewrites_3397_ = v_rewrites_3379_;
goto v___jp_3388_;
}
}
else
{
uint8_t v___x_3443_; 
lean_del_object(v___x_3359_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v___x_3443_ = 0;
v_kind_3389_ = v___x_3443_;
v_stream_3390_ = v_stream_3372_;
v_nameMap_3391_ = v_nameMap_3373_;
v_levelMap_3392_ = v_levelMap_3374_;
v_exprMap_3393_ = v_exprMap_3375_;
v_recursorRuleMap_3394_ = v_recursorRuleMap_3376_;
v_constMap_3395_ = v_constMap_3377_;
v_constOrder_3396_ = v_constOrder_3378_;
v_rewrites_3397_ = v_rewrites_3379_;
goto v___jp_3388_;
}
v___jp_3388_:
{
uint8_t v___x_3398_; 
v___x_3398_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3395_, v_val_3357_);
if (v___x_3398_ == 0)
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3402_; 
lean_inc(v_val_3357_);
v___x_3399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3399_, 0, v_val_3357_);
lean_ctor_set(v___x_3399_, 1, v_fst_3368_);
lean_ctor_set(v___x_3399_, 2, v_val_3384_);
v___x_3400_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
lean_ctor_set_uint8(v___x_3400_, sizeof(void*)*1, v_kind_3389_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set_tag(v___x_3386_, 4);
lean_ctor_set(v___x_3386_, 0, v___x_3400_);
v___x_3402_ = v___x_3386_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3400_);
v___x_3402_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3403_ = lean_box(0);
lean_inc(v_val_3357_);
v___x_3404_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3395_, v_val_3357_, v___x_3402_);
v___x_3405_ = lean_array_push(v_constOrder_3396_, v_val_3357_);
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 7, v_rewrites_3397_);
lean_ctor_set(v___x_3381_, 6, v___x_3405_);
lean_ctor_set(v___x_3381_, 5, v___x_3404_);
lean_ctor_set(v___x_3381_, 4, v_recursorRuleMap_3394_);
lean_ctor_set(v___x_3381_, 3, v_exprMap_3393_);
lean_ctor_set(v___x_3381_, 2, v_levelMap_3392_);
lean_ctor_set(v___x_3381_, 1, v_nameMap_3391_);
lean_ctor_set(v___x_3381_, 0, v_stream_3390_);
v___x_3407_ = v___x_3381_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_stream_3390_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v_nameMap_3391_);
lean_ctor_set(v_reuseFailAlloc_3414_, 2, v_levelMap_3392_);
lean_ctor_set(v_reuseFailAlloc_3414_, 3, v_exprMap_3393_);
lean_ctor_set(v_reuseFailAlloc_3414_, 4, v_recursorRuleMap_3394_);
lean_ctor_set(v_reuseFailAlloc_3414_, 5, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3414_, 6, v___x_3405_);
lean_ctor_set(v_reuseFailAlloc_3414_, 7, v_rewrites_3397_);
v___x_3407_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
lean_object* v___x_3409_; 
if (v_isShared_3371_ == 0)
{
lean_ctor_set(v___x_3370_, 1, v___x_3407_);
lean_ctor_set(v___x_3370_, 0, v___x_3403_);
v___x_3409_ = v___x_3370_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3403_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
lean_object* v___x_3411_; 
if (v_isShared_3366_ == 0)
{
lean_ctor_set(v___x_3365_, 0, v___x_3409_);
v___x_3411_ = v___x_3365_;
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
else
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3420_; 
lean_dec_ref(v_rewrites_3397_);
lean_dec_ref(v_constOrder_3396_);
lean_dec_ref(v_constMap_3395_);
lean_dec_ref(v_recursorRuleMap_3394_);
lean_dec_ref(v_exprMap_3393_);
lean_dec_ref(v_levelMap_3392_);
lean_dec_ref(v_nameMap_3391_);
lean_dec_ref(v_stream_3390_);
lean_dec(v_val_3384_);
lean_del_object(v___x_3381_);
lean_del_object(v___x_3370_);
lean_dec(v_fst_3368_);
v___x_3416_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3417_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3357_, v___x_3398_);
v___x_3418_ = lean_string_append(v___x_3416_, v___x_3417_);
lean_dec_ref(v___x_3417_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set_tag(v___x_3386_, 18);
lean_ctor_set(v___x_3386_, 0, v___x_3418_);
v___x_3420_ = v___x_3386_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3418_);
v___x_3420_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
lean_object* v___x_3422_; 
if (v_isShared_3366_ == 0)
{
lean_ctor_set_tag(v___x_3365_, 1);
lean_ctor_set(v___x_3365_, 0, v___x_3420_);
v___x_3422_ = v___x_3365_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v___x_3420_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
}
}
}
else
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3449_; 
lean_dec(v___x_3383_);
lean_del_object(v___x_3381_);
lean_dec_ref(v_rewrites_3379_);
lean_dec_ref(v_constOrder_3378_);
lean_dec_ref(v_constMap_3377_);
lean_dec_ref(v_recursorRuleMap_3376_);
lean_dec_ref(v_exprMap_3375_);
lean_dec_ref(v_levelMap_3374_);
lean_dec_ref(v_nameMap_3373_);
lean_dec_ref(v_stream_3372_);
lean_del_object(v___x_3370_);
lean_dec(v_fst_3368_);
lean_dec(v_val_3357_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v___x_3445_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3446_ = l_Nat_reprFast(v_a_3361_);
v___x_3447_ = lean_string_append(v___x_3445_, v___x_3446_);
lean_dec_ref(v___x_3446_);
if (v_isShared_3360_ == 0)
{
lean_ctor_set_tag(v___x_3359_, 18);
lean_ctor_set(v___x_3359_, 0, v___x_3447_);
v___x_3449_ = v___x_3359_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
lean_object* v___x_3451_; 
if (v_isShared_3366_ == 0)
{
lean_ctor_set_tag(v___x_3365_, 1);
lean_ctor_set(v___x_3365_, 0, v___x_3449_);
v___x_3451_ = v___x_3365_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
lean_dec(v_a_3361_);
lean_del_object(v___x_3359_);
lean_dec(v_val_3357_);
lean_del_object(v___x_3352_);
lean_dec_ref(v_s_3350_);
v_a_3457_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3362_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3362_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3470_; 
lean_dec(v___x_3356_);
lean_dec_ref(v_s_3350_);
lean_dec(v_mantissa_3340_);
lean_dec_ref(v_elems_3335_);
lean_dec_ref(v_a_3308_);
v___x_3466_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3467_ = l_Nat_reprFast(v_a_3355_);
v___x_3468_ = lean_string_append(v___x_3466_, v___x_3467_);
lean_dec_ref(v___x_3467_);
if (v_isShared_3353_ == 0)
{
lean_ctor_set_tag(v___x_3352_, 18);
lean_ctor_set(v___x_3352_, 0, v___x_3468_);
v___x_3470_ = v___x_3352_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v___x_3468_);
v___x_3470_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
lean_object* v___x_3472_; 
if (v_isShared_3349_ == 0)
{
lean_ctor_set(v___x_3348_, 0, v___x_3470_);
v___x_3472_ = v___x_3348_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v___x_3470_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
}
else
{
lean_del_object(v___x_3348_);
lean_dec(v_val_3346_);
lean_dec(v_mantissa_3340_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3310_;
}
}
}
else
{
lean_dec(v___x_3345_);
lean_dec(v_mantissa_3340_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3310_;
}
}
}
else
{
lean_dec(v_exponent_3341_);
lean_dec(v_mantissa_3340_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3313_;
}
}
else
{
lean_dec(v_val_3338_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3313_;
}
}
else
{
lean_dec(v___x_3337_);
lean_dec_ref(v_elems_3335_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3313_;
}
}
else
{
lean_dec(v_val_3334_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3316_;
}
}
else
{
lean_dec(v___x_3333_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3316_;
}
}
}
else
{
lean_dec(v_exponent_3327_);
lean_dec(v_mantissa_3326_);
lean_dec_ref(v_a_3308_);
goto v___jp_3319_;
}
}
else
{
lean_dec(v_val_3324_);
lean_dec_ref(v_a_3308_);
goto v___jp_3319_;
}
}
else
{
lean_dec(v___x_3323_);
lean_dec_ref(v_a_3308_);
goto v___jp_3319_;
}
v___jp_3310_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3311_);
return v___x_3312_;
}
v___jp_3313_:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3314_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3314_);
return v___x_3315_;
}
v___jp_3316_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
v___x_3317_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
return v___x_3318_;
}
v___jp_3319_:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3320_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__1));
v___x_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3320_);
return v___x_3321_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___boxed(lean_object* v_data_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(v_data_3477_, v_a_3478_);
lean_dec(v_data_3477_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(lean_object* v_json_3493_, lean_object* v_a_3494_){
_start:
{
if (lean_obj_tag(v_json_3493_) == 5)
{
lean_object* v_kvPairs_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v_kvPairs_3529_ = lean_ctor_get(v_json_3493_, 0);
v___x_3530_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3531_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3530_);
if (lean_obj_tag(v___x_3531_) == 1)
{
lean_object* v_val_3532_; 
v_val_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_val_3532_);
lean_dec_ref_known(v___x_3531_, 1);
if (lean_obj_tag(v_val_3532_) == 2)
{
lean_object* v_n_3533_; lean_object* v_mantissa_3534_; lean_object* v_exponent_3535_; lean_object* v_natZero_3536_; lean_object* v_intZero_3537_; uint8_t v_isNeg_3538_; 
v_n_3533_ = lean_ctor_get(v_val_3532_, 0);
lean_inc_ref(v_n_3533_);
lean_dec_ref_known(v_val_3532_, 1);
v_mantissa_3534_ = lean_ctor_get(v_n_3533_, 0);
lean_inc(v_mantissa_3534_);
v_exponent_3535_ = lean_ctor_get(v_n_3533_, 1);
lean_inc(v_exponent_3535_);
lean_dec_ref(v_n_3533_);
v_natZero_3536_ = lean_unsigned_to_nat(0u);
v_intZero_3537_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3538_ = lean_int_dec_lt(v_mantissa_3534_, v_intZero_3537_);
if (v_isNeg_3538_ == 0)
{
uint8_t v___x_3539_; 
v___x_3539_ = lean_nat_dec_eq(v_exponent_3535_, v_natZero_3536_);
lean_dec(v_exponent_3535_);
if (v___x_3539_ == 0)
{
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3496_;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3541_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3540_);
if (lean_obj_tag(v___x_3541_) == 1)
{
lean_object* v_val_3542_; 
v_val_3542_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_val_3542_);
lean_dec_ref_known(v___x_3541_, 1);
if (lean_obj_tag(v_val_3542_) == 4)
{
lean_object* v_elems_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v_elems_3543_ = lean_ctor_get(v_val_3542_, 0);
lean_inc_ref(v_elems_3543_);
lean_dec_ref_known(v_val_3542_, 1);
v___x_3544_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3545_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3544_);
if (lean_obj_tag(v___x_3545_) == 1)
{
lean_object* v_val_3546_; 
v_val_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_val_3546_);
lean_dec_ref_known(v___x_3545_, 1);
if (lean_obj_tag(v_val_3546_) == 2)
{
lean_object* v_n_3547_; lean_object* v_mantissa_3548_; lean_object* v_exponent_3549_; uint8_t v_isNeg_3550_; 
v_n_3547_ = lean_ctor_get(v_val_3546_, 0);
lean_inc_ref(v_n_3547_);
lean_dec_ref_known(v_val_3546_, 1);
v_mantissa_3548_ = lean_ctor_get(v_n_3547_, 0);
lean_inc(v_mantissa_3548_);
v_exponent_3549_ = lean_ctor_get(v_n_3547_, 1);
lean_inc(v_exponent_3549_);
lean_dec_ref(v_n_3547_);
v_isNeg_3550_ = lean_int_dec_lt(v_mantissa_3548_, v_intZero_3537_);
if (v_isNeg_3550_ == 0)
{
uint8_t v___x_3551_; 
v___x_3551_ = lean_nat_dec_eq(v_exponent_3549_, v_natZero_3536_);
lean_dec(v_exponent_3549_);
if (v___x_3551_ == 0)
{
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3502_;
}
else
{
lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3552_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_3553_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3552_);
if (lean_obj_tag(v___x_3553_) == 1)
{
lean_object* v_val_3554_; 
v_val_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_val_3554_);
lean_dec_ref_known(v___x_3553_, 1);
if (lean_obj_tag(v_val_3554_) == 2)
{
lean_object* v_n_3555_; lean_object* v_mantissa_3556_; lean_object* v_exponent_3557_; uint8_t v_isNeg_3558_; 
v_n_3555_ = lean_ctor_get(v_val_3554_, 0);
lean_inc_ref(v_n_3555_);
lean_dec_ref_known(v_val_3554_, 1);
v_mantissa_3556_ = lean_ctor_get(v_n_3555_, 0);
lean_inc(v_mantissa_3556_);
v_exponent_3557_ = lean_ctor_get(v_n_3555_, 1);
lean_inc(v_exponent_3557_);
lean_dec_ref(v_n_3555_);
v_isNeg_3558_ = lean_int_dec_lt(v_mantissa_3556_, v_intZero_3537_);
if (v_isNeg_3558_ == 0)
{
uint8_t v___x_3559_; 
v___x_3559_ = lean_nat_dec_eq(v_exponent_3557_, v_natZero_3536_);
lean_dec(v_exponent_3557_);
if (v___x_3559_ == 0)
{
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3505_;
}
else
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3));
v___x_3561_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3560_);
if (lean_obj_tag(v___x_3561_) == 1)
{
lean_object* v_val_3562_; 
v_val_3562_ = lean_ctor_get(v___x_3561_, 0);
lean_inc(v_val_3562_);
lean_dec_ref_known(v___x_3561_, 1);
if (lean_obj_tag(v_val_3562_) == 2)
{
lean_object* v_n_3563_; lean_object* v_mantissa_3564_; lean_object* v_exponent_3565_; uint8_t v_isNeg_3566_; 
v_n_3563_ = lean_ctor_get(v_val_3562_, 0);
lean_inc_ref(v_n_3563_);
lean_dec_ref_known(v_val_3562_, 1);
v_mantissa_3564_ = lean_ctor_get(v_n_3563_, 0);
lean_inc(v_mantissa_3564_);
v_exponent_3565_ = lean_ctor_get(v_n_3563_, 1);
lean_inc(v_exponent_3565_);
lean_dec_ref(v_n_3563_);
v_isNeg_3566_ = lean_int_dec_lt(v_mantissa_3564_, v_intZero_3537_);
if (v_isNeg_3566_ == 0)
{
uint8_t v___x_3567_; 
v___x_3567_ = lean_nat_dec_eq(v_exponent_3565_, v_natZero_3536_);
lean_dec(v_exponent_3565_);
if (v___x_3567_ == 0)
{
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3508_;
}
else
{
lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3568_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_3569_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3568_);
if (lean_obj_tag(v___x_3569_) == 1)
{
lean_object* v_val_3570_; 
v_val_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_val_3570_);
lean_dec_ref_known(v___x_3569_, 1);
if (lean_obj_tag(v_val_3570_) == 4)
{
lean_object* v_elems_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v_elems_3571_ = lean_ctor_get(v_val_3570_, 0);
lean_inc_ref(v_elems_3571_);
lean_dec_ref_known(v_val_3570_, 1);
v___x_3572_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4));
v___x_3573_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3572_);
if (lean_obj_tag(v___x_3573_) == 1)
{
lean_object* v_val_3574_; 
v_val_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_val_3574_);
lean_dec_ref_known(v___x_3573_, 1);
if (lean_obj_tag(v_val_3574_) == 4)
{
lean_object* v_elems_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_elems_3575_ = lean_ctor_get(v_val_3574_, 0);
lean_inc_ref(v_elems_3575_);
lean_dec_ref_known(v_val_3574_, 1);
v___x_3576_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__5));
v___x_3577_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3576_);
if (lean_obj_tag(v___x_3577_) == 1)
{
lean_object* v_val_3578_; 
v_val_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_val_3578_);
lean_dec_ref_known(v___x_3577_, 1);
if (lean_obj_tag(v_val_3578_) == 2)
{
lean_object* v_n_3579_; lean_object* v_mantissa_3580_; lean_object* v_exponent_3581_; uint8_t v_isNeg_3582_; 
v_n_3579_ = lean_ctor_get(v_val_3578_, 0);
lean_inc_ref(v_n_3579_);
lean_dec_ref_known(v_val_3578_, 1);
v_mantissa_3580_ = lean_ctor_get(v_n_3579_, 0);
lean_inc(v_mantissa_3580_);
v_exponent_3581_ = lean_ctor_get(v_n_3579_, 1);
lean_inc(v_exponent_3581_);
lean_dec_ref(v_n_3579_);
v_isNeg_3582_ = lean_int_dec_lt(v_mantissa_3580_, v_intZero_3537_);
if (v_isNeg_3582_ == 0)
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_nat_dec_eq(v_exponent_3581_, v_natZero_3536_);
lean_dec(v_exponent_3581_);
if (v___x_3583_ == 0)
{
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3517_;
}
else
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__6));
v___x_3585_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 1)
{
lean_object* v_val_3586_; 
v_val_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_val_3586_);
lean_dec_ref_known(v___x_3585_, 1);
if (lean_obj_tag(v_val_3586_) == 1)
{
uint8_t v_b_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v_b_3587_ = lean_ctor_get_uint8(v_val_3586_, 0);
lean_dec_ref_known(v_val_3586_, 0);
v___x_3588_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3589_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3588_);
if (lean_obj_tag(v___x_3589_) == 1)
{
lean_object* v_val_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3727_; 
v_val_3590_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3592_ = v___x_3589_;
v_isShared_3593_ = v_isSharedCheck_3727_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_val_3590_);
lean_dec(v___x_3589_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3727_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
if (lean_obj_tag(v_val_3590_) == 1)
{
uint8_t v_b_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v_b_3594_ = lean_ctor_get_uint8(v_val_3590_, 0);
lean_dec_ref_known(v_val_3590_, 0);
v___x_3595_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__7));
v___x_3596_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3529_, v___x_3595_);
if (lean_obj_tag(v___x_3596_) == 1)
{
lean_object* v_val_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3726_; 
v_val_3597_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3599_ = v___x_3596_;
v_isShared_3600_ = v_isSharedCheck_3726_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_val_3597_);
lean_dec(v___x_3596_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3726_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
if (lean_obj_tag(v_val_3597_) == 1)
{
uint8_t v_b_3601_; lean_object* v_nameMap_3602_; lean_object* v_a_3603_; lean_object* v___x_3604_; 
v_b_3601_ = lean_ctor_get_uint8(v_val_3597_, 0);
lean_dec_ref_known(v_val_3597_, 0);
v_nameMap_3602_ = lean_ctor_get(v_a_3494_, 1);
v_a_3603_ = lean_nat_abs(v_mantissa_3534_);
lean_dec(v_mantissa_3534_);
v___x_3604_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3602_, v_a_3603_);
if (lean_obj_tag(v___x_3604_) == 1)
{
lean_object* v_val_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3716_; 
lean_dec(v_a_3603_);
lean_del_object(v___x_3599_);
lean_del_object(v___x_3592_);
v_val_3605_ = lean_ctor_get(v___x_3604_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3604_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3607_ = v___x_3604_;
v_isShared_3608_ = v_isSharedCheck_3716_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_val_3605_);
lean_dec(v___x_3604_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3716_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v_a_3609_; lean_object* v_a_3610_; lean_object* v_a_3611_; lean_object* v_a_3612_; lean_object* v___x_3613_; 
v_a_3609_ = lean_nat_abs(v_mantissa_3548_);
lean_dec(v_mantissa_3548_);
v_a_3610_ = lean_nat_abs(v_mantissa_3556_);
lean_dec(v_mantissa_3556_);
v_a_3611_ = lean_nat_abs(v_mantissa_3564_);
lean_dec(v_mantissa_3564_);
v_a_3612_ = lean_nat_abs(v_mantissa_3580_);
lean_dec(v_mantissa_3580_);
v___x_3613_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3543_, v_a_3494_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3707_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3616_ = v___x_3613_;
v_isShared_3617_ = v_isSharedCheck_3707_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3613_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3707_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v_snd_3618_; lean_object* v_fst_3619_; lean_object* v_exprMap_3620_; lean_object* v___x_3621_; 
v_snd_3618_ = lean_ctor_get(v_a_3614_, 1);
lean_inc(v_snd_3618_);
v_fst_3619_ = lean_ctor_get(v_a_3614_, 0);
lean_inc(v_fst_3619_);
lean_dec(v_a_3614_);
v_exprMap_3620_ = lean_ctor_get(v_snd_3618_, 3);
v___x_3621_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3620_, v_a_3609_);
if (lean_obj_tag(v___x_3621_) == 1)
{
lean_object* v_val_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3697_; 
lean_del_object(v___x_3616_);
lean_dec(v_a_3609_);
lean_del_object(v___x_3607_);
v_val_3622_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3624_ = v___x_3621_;
v_isShared_3625_ = v_isSharedCheck_3697_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_val_3622_);
lean_dec(v___x_3621_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3697_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3626_; 
v___x_3626_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3571_, v_snd_3618_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_a_3627_; lean_object* v_fst_3628_; lean_object* v_snd_3629_; lean_object* v___x_3630_; 
v_a_3627_ = lean_ctor_get(v___x_3626_, 0);
lean_inc(v_a_3627_);
lean_dec_ref_known(v___x_3626_, 1);
v_fst_3628_ = lean_ctor_get(v_a_3627_, 0);
lean_inc(v_fst_3628_);
v_snd_3629_ = lean_ctor_get(v_a_3627_, 1);
lean_inc(v_snd_3629_);
lean_dec(v_a_3627_);
v___x_3630_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3575_, v_snd_3629_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3680_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3633_ = v___x_3630_;
v_isShared_3634_ = v_isSharedCheck_3680_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3630_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3680_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v_snd_3635_; lean_object* v_fst_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3679_; 
v_snd_3635_ = lean_ctor_get(v_a_3631_, 1);
v_fst_3636_ = lean_ctor_get(v_a_3631_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_a_3631_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3638_ = v_a_3631_;
v_isShared_3639_ = v_isSharedCheck_3679_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_snd_3635_);
lean_inc(v_fst_3636_);
lean_dec(v_a_3631_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3679_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v_stream_3640_; lean_object* v_nameMap_3641_; lean_object* v_levelMap_3642_; lean_object* v_exprMap_3643_; lean_object* v_recursorRuleMap_3644_; lean_object* v_constMap_3645_; lean_object* v_constOrder_3646_; lean_object* v_rewrites_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3678_; 
v_stream_3640_ = lean_ctor_get(v_snd_3635_, 0);
v_nameMap_3641_ = lean_ctor_get(v_snd_3635_, 1);
v_levelMap_3642_ = lean_ctor_get(v_snd_3635_, 2);
v_exprMap_3643_ = lean_ctor_get(v_snd_3635_, 3);
v_recursorRuleMap_3644_ = lean_ctor_get(v_snd_3635_, 4);
v_constMap_3645_ = lean_ctor_get(v_snd_3635_, 5);
v_constOrder_3646_ = lean_ctor_get(v_snd_3635_, 6);
v_rewrites_3647_ = lean_ctor_get(v_snd_3635_, 7);
v_isSharedCheck_3678_ = !lean_is_exclusive(v_snd_3635_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3649_ = v_snd_3635_;
v_isShared_3650_ = v_isSharedCheck_3678_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_rewrites_3647_);
lean_inc(v_constOrder_3646_);
lean_inc(v_constMap_3645_);
lean_inc(v_recursorRuleMap_3644_);
lean_inc(v_exprMap_3643_);
lean_inc(v_levelMap_3642_);
lean_inc(v_nameMap_3641_);
lean_inc(v_stream_3640_);
lean_dec(v_snd_3635_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3678_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
uint8_t v___x_3651_; 
v___x_3651_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3645_, v_val_3605_);
if (v___x_3651_ == 0)
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3655_; 
lean_inc(v_val_3605_);
v___x_3652_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3652_, 0, v_val_3605_);
lean_ctor_set(v___x_3652_, 1, v_fst_3619_);
lean_ctor_set(v___x_3652_, 2, v_val_3622_);
v___x_3653_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
lean_ctor_set(v___x_3653_, 1, v_a_3610_);
lean_ctor_set(v___x_3653_, 2, v_a_3611_);
lean_ctor_set(v___x_3653_, 3, v_fst_3628_);
lean_ctor_set(v___x_3653_, 4, v_fst_3636_);
lean_ctor_set(v___x_3653_, 5, v_a_3612_);
lean_ctor_set_uint8(v___x_3653_, sizeof(void*)*6, v_b_3587_);
lean_ctor_set_uint8(v___x_3653_, sizeof(void*)*6 + 1, v_b_3594_);
lean_ctor_set_uint8(v___x_3653_, sizeof(void*)*6 + 2, v_b_3601_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set_tag(v___x_3624_, 5);
lean_ctor_set(v___x_3624_, 0, v___x_3653_);
v___x_3655_ = v___x_3624_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3653_);
v___x_3655_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3660_; 
v___x_3656_ = lean_box(0);
lean_inc(v_val_3605_);
v___x_3657_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3645_, v_val_3605_, v___x_3655_);
v___x_3658_ = lean_array_push(v_constOrder_3646_, v_val_3605_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 6, v___x_3658_);
lean_ctor_set(v___x_3649_, 5, v___x_3657_);
v___x_3660_ = v___x_3649_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_stream_3640_);
lean_ctor_set(v_reuseFailAlloc_3667_, 1, v_nameMap_3641_);
lean_ctor_set(v_reuseFailAlloc_3667_, 2, v_levelMap_3642_);
lean_ctor_set(v_reuseFailAlloc_3667_, 3, v_exprMap_3643_);
lean_ctor_set(v_reuseFailAlloc_3667_, 4, v_recursorRuleMap_3644_);
lean_ctor_set(v_reuseFailAlloc_3667_, 5, v___x_3657_);
lean_ctor_set(v_reuseFailAlloc_3667_, 6, v___x_3658_);
lean_ctor_set(v_reuseFailAlloc_3667_, 7, v_rewrites_3647_);
v___x_3660_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
lean_object* v___x_3662_; 
if (v_isShared_3639_ == 0)
{
lean_ctor_set(v___x_3638_, 1, v___x_3660_);
lean_ctor_set(v___x_3638_, 0, v___x_3656_);
v___x_3662_ = v___x_3638_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3656_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3664_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 0, v___x_3662_);
v___x_3664_ = v___x_3633_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3662_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
else
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3673_; 
lean_del_object(v___x_3649_);
lean_dec_ref(v_rewrites_3647_);
lean_dec_ref(v_constOrder_3646_);
lean_dec_ref(v_constMap_3645_);
lean_dec_ref(v_recursorRuleMap_3644_);
lean_dec_ref(v_exprMap_3643_);
lean_dec_ref(v_levelMap_3642_);
lean_dec_ref(v_nameMap_3641_);
lean_dec_ref(v_stream_3640_);
lean_del_object(v___x_3638_);
lean_dec(v_fst_3636_);
lean_dec(v_fst_3628_);
lean_dec(v_val_3622_);
lean_dec(v_fst_3619_);
lean_dec(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
v___x_3669_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3670_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3605_, v___x_3651_);
v___x_3671_ = lean_string_append(v___x_3669_, v___x_3670_);
lean_dec_ref(v___x_3670_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set_tag(v___x_3624_, 18);
lean_ctor_set(v___x_3624_, 0, v___x_3671_);
v___x_3673_ = v___x_3624_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3671_);
v___x_3673_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3675_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set_tag(v___x_3633_, 1);
lean_ctor_set(v___x_3633_, 0, v___x_3673_);
v___x_3675_ = v___x_3633_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3688_; 
lean_dec(v_fst_3628_);
lean_del_object(v___x_3624_);
lean_dec(v_val_3622_);
lean_dec(v_fst_3619_);
lean_dec(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec(v_val_3605_);
v_a_3681_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3683_ = v___x_3630_;
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3630_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3686_; 
if (v_isShared_3684_ == 0)
{
v___x_3686_ = v___x_3683_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3681_);
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
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_del_object(v___x_3624_);
lean_dec(v_val_3622_);
lean_dec(v_fst_3619_);
lean_dec(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec(v_val_3605_);
lean_dec_ref(v_elems_3575_);
v_a_3689_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3626_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3626_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
}
else
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3702_; 
lean_dec(v___x_3621_);
lean_dec(v_fst_3619_);
lean_dec(v_snd_3618_);
lean_dec(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec(v_val_3605_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
v___x_3698_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3699_ = l_Nat_reprFast(v_a_3609_);
v___x_3700_ = lean_string_append(v___x_3698_, v___x_3699_);
lean_dec_ref(v___x_3699_);
if (v_isShared_3608_ == 0)
{
lean_ctor_set_tag(v___x_3607_, 18);
lean_ctor_set(v___x_3607_, 0, v___x_3700_);
v___x_3702_ = v___x_3607_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3700_);
v___x_3702_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
lean_object* v___x_3704_; 
if (v_isShared_3617_ == 0)
{
lean_ctor_set_tag(v___x_3616_, 1);
lean_ctor_set(v___x_3616_, 0, v___x_3702_);
v___x_3704_ = v___x_3616_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v___x_3702_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_dec(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec(v_a_3609_);
lean_del_object(v___x_3607_);
lean_dec(v_val_3605_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
v_a_3708_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3613_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3613_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
}
}
else
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3721_; 
lean_dec(v___x_3604_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec_ref(v_a_3494_);
v___x_3717_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3718_ = l_Nat_reprFast(v_a_3603_);
v___x_3719_ = lean_string_append(v___x_3717_, v___x_3718_);
lean_dec_ref(v___x_3718_);
if (v_isShared_3600_ == 0)
{
lean_ctor_set_tag(v___x_3599_, 18);
lean_ctor_set(v___x_3599_, 0, v___x_3719_);
v___x_3721_ = v___x_3599_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3719_);
v___x_3721_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3723_; 
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v___x_3721_);
v___x_3723_ = v___x_3592_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_del_object(v___x_3599_);
lean_dec(v_val_3597_);
lean_del_object(v___x_3592_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3526_;
}
}
}
else
{
lean_dec(v___x_3596_);
lean_del_object(v___x_3592_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3526_;
}
}
else
{
lean_del_object(v___x_3592_);
lean_dec(v_val_3590_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3523_;
}
}
}
else
{
lean_dec(v___x_3589_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3523_;
}
}
else
{
lean_dec(v_val_3586_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3520_;
}
}
else
{
lean_dec(v___x_3585_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3520_;
}
}
}
else
{
lean_dec(v_exponent_3581_);
lean_dec(v_mantissa_3580_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3517_;
}
}
else
{
lean_dec(v_val_3578_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3517_;
}
}
else
{
lean_dec(v___x_3577_);
lean_dec_ref(v_elems_3575_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3517_;
}
}
else
{
lean_dec(v_val_3574_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3514_;
}
}
else
{
lean_dec(v___x_3573_);
lean_dec_ref(v_elems_3571_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3514_;
}
}
else
{
lean_dec(v_val_3570_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3511_;
}
}
else
{
lean_dec(v___x_3569_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3511_;
}
}
}
else
{
lean_dec(v_exponent_3565_);
lean_dec(v_mantissa_3564_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3508_;
}
}
else
{
lean_dec(v_val_3562_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3508_;
}
}
else
{
lean_dec(v___x_3561_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3508_;
}
}
}
else
{
lean_dec(v_exponent_3557_);
lean_dec(v_mantissa_3556_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3505_;
}
}
else
{
lean_dec(v_val_3554_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3505_;
}
}
else
{
lean_dec(v___x_3553_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3505_;
}
}
}
else
{
lean_dec(v_exponent_3549_);
lean_dec(v_mantissa_3548_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3502_;
}
}
else
{
lean_dec(v_val_3546_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3502_;
}
}
else
{
lean_dec(v___x_3545_);
lean_dec_ref(v_elems_3543_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3502_;
}
}
else
{
lean_dec(v_val_3542_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3499_;
}
}
else
{
lean_dec(v___x_3541_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3499_;
}
}
}
else
{
lean_dec(v_exponent_3535_);
lean_dec(v_mantissa_3534_);
lean_dec_ref(v_a_3494_);
goto v___jp_3496_;
}
}
else
{
lean_dec(v_val_3532_);
lean_dec_ref(v_a_3494_);
goto v___jp_3496_;
}
}
else
{
lean_dec(v___x_3531_);
lean_dec_ref(v_a_3494_);
goto v___jp_3496_;
}
}
else
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
lean_dec_ref(v_a_3494_);
v___x_3728_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__9));
v___x_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
return v___x_3729_;
}
v___jp_3496_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
return v___x_3498_;
}
v___jp_3499_:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
return v___x_3501_;
}
v___jp_3502_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
return v___x_3504_;
}
v___jp_3505_:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3506_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
v___jp_3508_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
return v___x_3510_;
}
v___jp_3511_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3512_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
return v___x_3513_;
}
v___jp_3514_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
return v___x_3516_;
}
v___jp_3517_:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
return v___x_3519_;
}
v___jp_3520_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
return v___x_3522_;
}
v___jp_3523_:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3524_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
return v___x_3525_;
}
v___jp_3526_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3527_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__1));
v___x_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___boxed(lean_object* v_json_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(v_json_3730_, v_a_3731_);
lean_dec(v_json_3730_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(lean_object* v_json_3740_, lean_object* v_a_3741_){
_start:
{
if (lean_obj_tag(v_json_3740_) == 5)
{
lean_object* v_kvPairs_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v_kvPairs_3767_ = lean_ctor_get(v_json_3740_, 0);
v___x_3768_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_3769_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3768_);
if (lean_obj_tag(v___x_3769_) == 1)
{
lean_object* v_val_3770_; 
v_val_3770_ = lean_ctor_get(v___x_3769_, 0);
lean_inc(v_val_3770_);
lean_dec_ref_known(v___x_3769_, 1);
if (lean_obj_tag(v_val_3770_) == 2)
{
lean_object* v_n_3771_; lean_object* v_mantissa_3772_; lean_object* v_exponent_3773_; lean_object* v_natZero_3774_; lean_object* v_intZero_3775_; uint8_t v_isNeg_3776_; 
v_n_3771_ = lean_ctor_get(v_val_3770_, 0);
lean_inc_ref(v_n_3771_);
lean_dec_ref_known(v_val_3770_, 1);
v_mantissa_3772_ = lean_ctor_get(v_n_3771_, 0);
lean_inc(v_mantissa_3772_);
v_exponent_3773_ = lean_ctor_get(v_n_3771_, 1);
lean_inc(v_exponent_3773_);
lean_dec_ref(v_n_3771_);
v_natZero_3774_ = lean_unsigned_to_nat(0u);
v_intZero_3775_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3776_ = lean_int_dec_lt(v_mantissa_3772_, v_intZero_3775_);
if (v_isNeg_3776_ == 0)
{
uint8_t v___x_3777_; 
v___x_3777_ = lean_nat_dec_eq(v_exponent_3773_, v_natZero_3774_);
lean_dec(v_exponent_3773_);
if (v___x_3777_ == 0)
{
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3743_;
}
else
{
lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3778_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_3779_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3778_);
if (lean_obj_tag(v___x_3779_) == 1)
{
lean_object* v_val_3780_; 
v_val_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_val_3780_);
lean_dec_ref_known(v___x_3779_, 1);
if (lean_obj_tag(v_val_3780_) == 4)
{
lean_object* v_elems_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v_elems_3781_ = lean_ctor_get(v_val_3780_, 0);
lean_inc_ref(v_elems_3781_);
lean_dec_ref_known(v_val_3780_, 1);
v___x_3782_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_3783_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3782_);
if (lean_obj_tag(v___x_3783_) == 1)
{
lean_object* v_val_3784_; 
v_val_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_val_3784_);
lean_dec_ref_known(v___x_3783_, 1);
if (lean_obj_tag(v_val_3784_) == 2)
{
lean_object* v_n_3785_; lean_object* v_mantissa_3786_; lean_object* v_exponent_3787_; uint8_t v_isNeg_3788_; 
v_n_3785_ = lean_ctor_get(v_val_3784_, 0);
lean_inc_ref(v_n_3785_);
lean_dec_ref_known(v_val_3784_, 1);
v_mantissa_3786_ = lean_ctor_get(v_n_3785_, 0);
lean_inc(v_mantissa_3786_);
v_exponent_3787_ = lean_ctor_get(v_n_3785_, 1);
lean_inc(v_exponent_3787_);
lean_dec_ref(v_n_3785_);
v_isNeg_3788_ = lean_int_dec_lt(v_mantissa_3786_, v_intZero_3775_);
if (v_isNeg_3788_ == 0)
{
uint8_t v___x_3789_; 
v___x_3789_ = lean_nat_dec_eq(v_exponent_3787_, v_natZero_3774_);
lean_dec(v_exponent_3787_);
if (v___x_3789_ == 0)
{
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3749_;
}
else
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3790_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__2));
v___x_3791_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3790_);
if (lean_obj_tag(v___x_3791_) == 1)
{
lean_object* v_val_3792_; 
v_val_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_val_3792_);
lean_dec_ref_known(v___x_3791_, 1);
if (lean_obj_tag(v_val_3792_) == 2)
{
lean_object* v_n_3793_; lean_object* v_mantissa_3794_; lean_object* v_exponent_3795_; uint8_t v_isNeg_3796_; 
v_n_3793_ = lean_ctor_get(v_val_3792_, 0);
lean_inc_ref(v_n_3793_);
lean_dec_ref_known(v_val_3792_, 1);
v_mantissa_3794_ = lean_ctor_get(v_n_3793_, 0);
lean_inc(v_mantissa_3794_);
v_exponent_3795_ = lean_ctor_get(v_n_3793_, 1);
lean_inc(v_exponent_3795_);
lean_dec_ref(v_n_3793_);
v_isNeg_3796_ = lean_int_dec_lt(v_mantissa_3794_, v_intZero_3775_);
if (v_isNeg_3796_ == 0)
{
uint8_t v___x_3797_; 
v___x_3797_ = lean_nat_dec_eq(v_exponent_3795_, v_natZero_3774_);
lean_dec(v_exponent_3795_);
if (v___x_3797_ == 0)
{
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3752_;
}
else
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__3));
v___x_3799_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3798_);
if (lean_obj_tag(v___x_3799_) == 1)
{
lean_object* v_val_3800_; 
v_val_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_val_3800_);
lean_dec_ref_known(v___x_3799_, 1);
if (lean_obj_tag(v_val_3800_) == 2)
{
lean_object* v_n_3801_; lean_object* v_mantissa_3802_; lean_object* v_exponent_3803_; uint8_t v_isNeg_3804_; 
v_n_3801_ = lean_ctor_get(v_val_3800_, 0);
lean_inc_ref(v_n_3801_);
lean_dec_ref_known(v_val_3800_, 1);
v_mantissa_3802_ = lean_ctor_get(v_n_3801_, 0);
lean_inc(v_mantissa_3802_);
v_exponent_3803_ = lean_ctor_get(v_n_3801_, 1);
lean_inc(v_exponent_3803_);
lean_dec_ref(v_n_3801_);
v_isNeg_3804_ = lean_int_dec_lt(v_mantissa_3802_, v_intZero_3775_);
if (v_isNeg_3804_ == 0)
{
uint8_t v___x_3805_; 
v___x_3805_ = lean_nat_dec_eq(v_exponent_3803_, v_natZero_3774_);
lean_dec(v_exponent_3803_);
if (v___x_3805_ == 0)
{
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3755_;
}
else
{
lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3806_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_3807_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3806_);
if (lean_obj_tag(v___x_3807_) == 1)
{
lean_object* v_val_3808_; 
v_val_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_val_3808_);
lean_dec_ref_known(v___x_3807_, 1);
if (lean_obj_tag(v_val_3808_) == 2)
{
lean_object* v_n_3809_; lean_object* v_mantissa_3810_; lean_object* v_exponent_3811_; uint8_t v_isNeg_3812_; 
v_n_3809_ = lean_ctor_get(v_val_3808_, 0);
lean_inc_ref(v_n_3809_);
lean_dec_ref_known(v_val_3808_, 1);
v_mantissa_3810_ = lean_ctor_get(v_n_3809_, 0);
lean_inc(v_mantissa_3810_);
v_exponent_3811_ = lean_ctor_get(v_n_3809_, 1);
lean_inc(v_exponent_3811_);
lean_dec_ref(v_n_3809_);
v_isNeg_3812_ = lean_int_dec_lt(v_mantissa_3810_, v_intZero_3775_);
if (v_isNeg_3812_ == 0)
{
uint8_t v___x_3813_; 
v___x_3813_ = lean_nat_dec_eq(v_exponent_3811_, v_natZero_3774_);
lean_dec(v_exponent_3811_);
if (v___x_3813_ == 0)
{
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3758_;
}
else
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3814_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__4));
v___x_3815_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3814_);
if (lean_obj_tag(v___x_3815_) == 1)
{
lean_object* v_val_3816_; 
v_val_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_val_3816_);
lean_dec_ref_known(v___x_3815_, 1);
if (lean_obj_tag(v_val_3816_) == 2)
{
lean_object* v_n_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3944_; 
v_n_3817_ = lean_ctor_get(v_val_3816_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v_val_3816_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3819_ = v_val_3816_;
v_isShared_3820_ = v_isSharedCheck_3944_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_n_3817_);
lean_dec(v_val_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3944_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v_mantissa_3821_; lean_object* v_exponent_3822_; uint8_t v_isNeg_3823_; 
v_mantissa_3821_ = lean_ctor_get(v_n_3817_, 0);
lean_inc(v_mantissa_3821_);
v_exponent_3822_ = lean_ctor_get(v_n_3817_, 1);
lean_inc(v_exponent_3822_);
lean_dec_ref(v_n_3817_);
v_isNeg_3823_ = lean_int_dec_lt(v_mantissa_3821_, v_intZero_3775_);
if (v_isNeg_3823_ == 0)
{
uint8_t v___x_3824_; 
v___x_3824_ = lean_nat_dec_eq(v_exponent_3822_, v_natZero_3774_);
lean_dec(v_exponent_3822_);
if (v___x_3824_ == 0)
{
lean_dec(v_mantissa_3821_);
lean_del_object(v___x_3819_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3761_;
}
else
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_3826_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3767_, v___x_3825_);
if (lean_obj_tag(v___x_3826_) == 1)
{
lean_object* v_val_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3943_; 
v_val_3827_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3829_ = v___x_3826_;
v_isShared_3830_ = v_isSharedCheck_3943_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_val_3827_);
lean_dec(v___x_3826_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3943_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
if (lean_obj_tag(v_val_3827_) == 1)
{
uint8_t v_b_3831_; lean_object* v_nameMap_3832_; lean_object* v_a_3833_; lean_object* v___x_3834_; 
v_b_3831_ = lean_ctor_get_uint8(v_val_3827_, 0);
lean_dec_ref_known(v_val_3827_, 0);
v_nameMap_3832_ = lean_ctor_get(v_a_3741_, 1);
v_a_3833_ = lean_nat_abs(v_mantissa_3772_);
lean_dec(v_mantissa_3772_);
v___x_3834_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3832_, v_a_3833_);
if (lean_obj_tag(v___x_3834_) == 1)
{
lean_object* v_val_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3933_; 
lean_dec(v_a_3833_);
lean_del_object(v___x_3829_);
lean_del_object(v___x_3819_);
v_val_3835_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3837_ = v___x_3834_;
v_isShared_3838_ = v_isSharedCheck_3933_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_val_3835_);
lean_dec(v___x_3834_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3933_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v_a_3839_; lean_object* v_a_3840_; lean_object* v_a_3841_; lean_object* v_a_3842_; lean_object* v_a_3843_; lean_object* v___x_3844_; 
v_a_3839_ = lean_nat_abs(v_mantissa_3786_);
lean_dec(v_mantissa_3786_);
v_a_3840_ = lean_nat_abs(v_mantissa_3794_);
lean_dec(v_mantissa_3794_);
v_a_3841_ = lean_nat_abs(v_mantissa_3802_);
lean_dec(v_mantissa_3802_);
v_a_3842_ = lean_nat_abs(v_mantissa_3810_);
lean_dec(v_mantissa_3810_);
v_a_3843_ = lean_nat_abs(v_mantissa_3821_);
lean_dec(v_mantissa_3821_);
v___x_3844_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_3781_, v_a_3741_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3924_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3847_ = v___x_3844_;
v_isShared_3848_ = v_isSharedCheck_3924_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3844_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3924_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v_snd_3849_; lean_object* v_fst_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3923_; 
v_snd_3849_ = lean_ctor_get(v_a_3845_, 1);
v_fst_3850_ = lean_ctor_get(v_a_3845_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v_a_3845_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3852_ = v_a_3845_;
v_isShared_3853_ = v_isSharedCheck_3923_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_snd_3849_);
lean_inc(v_fst_3850_);
lean_dec(v_a_3845_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3923_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v_stream_3854_; lean_object* v_nameMap_3855_; lean_object* v_levelMap_3856_; lean_object* v_exprMap_3857_; lean_object* v_recursorRuleMap_3858_; lean_object* v_constMap_3859_; lean_object* v_constOrder_3860_; lean_object* v_rewrites_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3922_; 
v_stream_3854_ = lean_ctor_get(v_snd_3849_, 0);
v_nameMap_3855_ = lean_ctor_get(v_snd_3849_, 1);
v_levelMap_3856_ = lean_ctor_get(v_snd_3849_, 2);
v_exprMap_3857_ = lean_ctor_get(v_snd_3849_, 3);
v_recursorRuleMap_3858_ = lean_ctor_get(v_snd_3849_, 4);
v_constMap_3859_ = lean_ctor_get(v_snd_3849_, 5);
v_constOrder_3860_ = lean_ctor_get(v_snd_3849_, 6);
v_rewrites_3861_ = lean_ctor_get(v_snd_3849_, 7);
v_isSharedCheck_3922_ = !lean_is_exclusive(v_snd_3849_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3863_ = v_snd_3849_;
v_isShared_3864_ = v_isSharedCheck_3922_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_rewrites_3861_);
lean_inc(v_constOrder_3860_);
lean_inc(v_constMap_3859_);
lean_inc(v_recursorRuleMap_3858_);
lean_inc(v_exprMap_3857_);
lean_inc(v_levelMap_3856_);
lean_inc(v_nameMap_3855_);
lean_inc(v_stream_3854_);
lean_dec(v_snd_3849_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3922_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_3857_, v_a_3839_);
if (lean_obj_tag(v___x_3865_) == 1)
{
lean_object* v_val_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3912_; 
lean_dec(v_a_3839_);
lean_del_object(v___x_3837_);
v_val_3866_ = lean_ctor_get(v___x_3865_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3868_ = v___x_3865_;
v_isShared_3869_ = v_isSharedCheck_3912_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_val_3866_);
lean_dec(v___x_3865_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3912_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3870_; 
v___x_3870_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_3855_, v_a_3840_);
if (lean_obj_tag(v___x_3870_) == 1)
{
lean_object* v_val_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3902_; 
lean_del_object(v___x_3868_);
lean_dec(v_a_3840_);
v_val_3871_ = lean_ctor_get(v___x_3870_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3873_ = v___x_3870_;
v_isShared_3874_ = v_isSharedCheck_3902_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_val_3871_);
lean_dec(v___x_3870_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3902_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
uint8_t v___x_3875_; 
v___x_3875_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_3859_, v_val_3835_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3879_; 
lean_inc(v_val_3835_);
v___x_3876_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3876_, 0, v_val_3835_);
lean_ctor_set(v___x_3876_, 1, v_fst_3850_);
lean_ctor_set(v___x_3876_, 2, v_val_3866_);
v___x_3877_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
lean_ctor_set(v___x_3877_, 1, v_val_3871_);
lean_ctor_set(v___x_3877_, 2, v_a_3841_);
lean_ctor_set(v___x_3877_, 3, v_a_3842_);
lean_ctor_set(v___x_3877_, 4, v_a_3843_);
lean_ctor_set_uint8(v___x_3877_, sizeof(void*)*5, v_b_3831_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set_tag(v___x_3873_, 6);
lean_ctor_set(v___x_3873_, 0, v___x_3877_);
v___x_3879_ = v___x_3873_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v___x_3877_);
v___x_3879_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3884_; 
v___x_3880_ = lean_box(0);
lean_inc(v_val_3835_);
v___x_3881_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_3859_, v_val_3835_, v___x_3879_);
v___x_3882_ = lean_array_push(v_constOrder_3860_, v_val_3835_);
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 6, v___x_3882_);
lean_ctor_set(v___x_3863_, 5, v___x_3881_);
v___x_3884_ = v___x_3863_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v_stream_3854_);
lean_ctor_set(v_reuseFailAlloc_3891_, 1, v_nameMap_3855_);
lean_ctor_set(v_reuseFailAlloc_3891_, 2, v_levelMap_3856_);
lean_ctor_set(v_reuseFailAlloc_3891_, 3, v_exprMap_3857_);
lean_ctor_set(v_reuseFailAlloc_3891_, 4, v_recursorRuleMap_3858_);
lean_ctor_set(v_reuseFailAlloc_3891_, 5, v___x_3881_);
lean_ctor_set(v_reuseFailAlloc_3891_, 6, v___x_3882_);
lean_ctor_set(v_reuseFailAlloc_3891_, 7, v_rewrites_3861_);
v___x_3884_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
lean_object* v___x_3886_; 
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 1, v___x_3884_);
lean_ctor_set(v___x_3852_, 0, v___x_3880_);
v___x_3886_ = v___x_3852_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3880_);
lean_ctor_set(v_reuseFailAlloc_3890_, 1, v___x_3884_);
v___x_3886_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
lean_object* v___x_3888_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 0, v___x_3886_);
v___x_3888_ = v___x_3847_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v___x_3886_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
else
{
lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3897_; 
lean_dec(v_val_3871_);
lean_dec(v_val_3866_);
lean_del_object(v___x_3863_);
lean_dec_ref(v_rewrites_3861_);
lean_dec_ref(v_constOrder_3860_);
lean_dec_ref(v_constMap_3859_);
lean_dec_ref(v_recursorRuleMap_3858_);
lean_dec_ref(v_exprMap_3857_);
lean_dec_ref(v_levelMap_3856_);
lean_dec_ref(v_nameMap_3855_);
lean_dec_ref(v_stream_3854_);
lean_del_object(v___x_3852_);
lean_dec(v_fst_3850_);
lean_dec(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec(v_a_3841_);
v___x_3893_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_3894_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_3835_, v___x_3875_);
v___x_3895_ = lean_string_append(v___x_3893_, v___x_3894_);
lean_dec_ref(v___x_3894_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set_tag(v___x_3873_, 18);
lean_ctor_set(v___x_3873_, 0, v___x_3895_);
v___x_3897_ = v___x_3873_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3895_);
v___x_3897_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
lean_object* v___x_3899_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set_tag(v___x_3847_, 1);
lean_ctor_set(v___x_3847_, 0, v___x_3897_);
v___x_3899_ = v___x_3847_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v___x_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
}
else
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3907_; 
lean_dec(v___x_3870_);
lean_dec(v_val_3866_);
lean_del_object(v___x_3863_);
lean_dec_ref(v_rewrites_3861_);
lean_dec_ref(v_constOrder_3860_);
lean_dec_ref(v_constMap_3859_);
lean_dec_ref(v_recursorRuleMap_3858_);
lean_dec_ref(v_exprMap_3857_);
lean_dec_ref(v_levelMap_3856_);
lean_dec_ref(v_nameMap_3855_);
lean_dec_ref(v_stream_3854_);
lean_del_object(v___x_3852_);
lean_dec(v_fst_3850_);
lean_dec(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec(v_a_3841_);
lean_dec(v_val_3835_);
v___x_3903_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3904_ = l_Nat_reprFast(v_a_3840_);
v___x_3905_ = lean_string_append(v___x_3903_, v___x_3904_);
lean_dec_ref(v___x_3904_);
if (v_isShared_3869_ == 0)
{
lean_ctor_set_tag(v___x_3868_, 18);
lean_ctor_set(v___x_3868_, 0, v___x_3905_);
v___x_3907_ = v___x_3868_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v___x_3905_);
v___x_3907_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
lean_object* v___x_3909_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set_tag(v___x_3847_, 1);
lean_ctor_set(v___x_3847_, 0, v___x_3907_);
v___x_3909_ = v___x_3847_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v___x_3907_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3917_; 
lean_dec(v___x_3865_);
lean_del_object(v___x_3863_);
lean_dec_ref(v_rewrites_3861_);
lean_dec_ref(v_constOrder_3860_);
lean_dec_ref(v_constMap_3859_);
lean_dec_ref(v_recursorRuleMap_3858_);
lean_dec_ref(v_exprMap_3857_);
lean_dec_ref(v_levelMap_3856_);
lean_dec_ref(v_nameMap_3855_);
lean_dec_ref(v_stream_3854_);
lean_del_object(v___x_3852_);
lean_dec(v_fst_3850_);
lean_dec(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec(v_val_3835_);
v___x_3913_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_3914_ = l_Nat_reprFast(v_a_3839_);
v___x_3915_ = lean_string_append(v___x_3913_, v___x_3914_);
lean_dec_ref(v___x_3914_);
if (v_isShared_3838_ == 0)
{
lean_ctor_set_tag(v___x_3837_, 18);
lean_ctor_set(v___x_3837_, 0, v___x_3915_);
v___x_3917_ = v___x_3837_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3921_; 
v_reuseFailAlloc_3921_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3921_, 0, v___x_3915_);
v___x_3917_ = v_reuseFailAlloc_3921_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
lean_object* v___x_3919_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set_tag(v___x_3847_, 1);
lean_ctor_set(v___x_3847_, 0, v___x_3917_);
v___x_3919_ = v___x_3847_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
lean_dec(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec(v_a_3839_);
lean_del_object(v___x_3837_);
lean_dec(v_val_3835_);
v_a_3925_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3844_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3844_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
}
else
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3938_; 
lean_dec(v___x_3834_);
lean_dec(v_mantissa_3821_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec_ref(v_a_3741_);
v___x_3934_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_3935_ = l_Nat_reprFast(v_a_3833_);
v___x_3936_ = lean_string_append(v___x_3934_, v___x_3935_);
lean_dec_ref(v___x_3935_);
if (v_isShared_3830_ == 0)
{
lean_ctor_set_tag(v___x_3829_, 18);
lean_ctor_set(v___x_3829_, 0, v___x_3936_);
v___x_3938_ = v___x_3829_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3936_);
v___x_3938_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
lean_object* v___x_3940_; 
if (v_isShared_3820_ == 0)
{
lean_ctor_set_tag(v___x_3819_, 1);
lean_ctor_set(v___x_3819_, 0, v___x_3938_);
v___x_3940_ = v___x_3819_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3938_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
}
else
{
lean_del_object(v___x_3829_);
lean_dec(v_val_3827_);
lean_dec(v_mantissa_3821_);
lean_del_object(v___x_3819_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3764_;
}
}
}
else
{
lean_dec(v___x_3826_);
lean_dec(v_mantissa_3821_);
lean_del_object(v___x_3819_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3764_;
}
}
}
else
{
lean_dec(v_exponent_3822_);
lean_dec(v_mantissa_3821_);
lean_del_object(v___x_3819_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3761_;
}
}
}
else
{
lean_dec(v_val_3816_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3761_;
}
}
else
{
lean_dec(v___x_3815_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3761_;
}
}
}
else
{
lean_dec(v_exponent_3811_);
lean_dec(v_mantissa_3810_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3758_;
}
}
else
{
lean_dec(v_val_3808_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3758_;
}
}
else
{
lean_dec(v___x_3807_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3758_;
}
}
}
else
{
lean_dec(v_exponent_3803_);
lean_dec(v_mantissa_3802_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3755_;
}
}
else
{
lean_dec(v_val_3800_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3755_;
}
}
else
{
lean_dec(v___x_3799_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3755_;
}
}
}
else
{
lean_dec(v_exponent_3795_);
lean_dec(v_mantissa_3794_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3752_;
}
}
else
{
lean_dec(v_val_3792_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3752_;
}
}
else
{
lean_dec(v___x_3791_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3752_;
}
}
}
else
{
lean_dec(v_exponent_3787_);
lean_dec(v_mantissa_3786_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3749_;
}
}
else
{
lean_dec(v_val_3784_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3749_;
}
}
else
{
lean_dec(v___x_3783_);
lean_dec_ref(v_elems_3781_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3749_;
}
}
else
{
lean_dec(v_val_3780_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3746_;
}
}
else
{
lean_dec(v___x_3779_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3746_;
}
}
}
else
{
lean_dec(v_exponent_3773_);
lean_dec(v_mantissa_3772_);
lean_dec_ref(v_a_3741_);
goto v___jp_3743_;
}
}
else
{
lean_dec(v_val_3770_);
lean_dec_ref(v_a_3741_);
goto v___jp_3743_;
}
}
else
{
lean_dec(v___x_3769_);
lean_dec_ref(v_a_3741_);
goto v___jp_3743_;
}
}
else
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
lean_dec_ref(v_a_3741_);
v___x_3945_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
return v___x_3946_;
}
v___jp_3743_:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3744_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
return v___x_3745_;
}
v___jp_3746_:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3747_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
return v___x_3748_;
}
v___jp_3749_:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
v___jp_3752_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3753_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3753_);
return v___x_3754_;
}
v___jp_3755_:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3756_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3756_);
return v___x_3757_;
}
v___jp_3758_:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
return v___x_3760_;
}
v___jp_3761_:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
return v___x_3763_;
}
v___jp_3764_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___closed__1));
v___x_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3765_);
return v___x_3766_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo___boxed(lean_object* v_json_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(v_json_3947_, v_a_3948_);
lean_dec(v_json_3947_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(lean_object* v_x_3956_, lean_object* v_x_3957_, lean_object* v___y_3958_){
_start:
{
if (lean_obj_tag(v_x_3956_) == 0)
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = l_List_reverse___redArg(v_x_3957_);
v___x_3970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
lean_ctor_set(v___x_3970_, 1, v___y_3958_);
v___x_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
return v___x_3971_;
}
else
{
lean_object* v_head_3972_; 
v_head_3972_ = lean_ctor_get(v_x_3956_, 0);
lean_inc(v_head_3972_);
if (lean_obj_tag(v_head_3972_) == 5)
{
lean_object* v_tail_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_4048_; 
v_tail_3973_ = lean_ctor_get(v_x_3956_, 1);
v_isSharedCheck_4048_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_4048_ == 0)
{
lean_object* v_unused_4049_; 
v_unused_4049_ = lean_ctor_get(v_x_3956_, 0);
lean_dec(v_unused_4049_);
v___x_3975_ = v_x_3956_;
v_isShared_3976_ = v_isSharedCheck_4048_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_tail_3973_);
lean_dec(v_x_3956_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_4048_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v_kvPairs_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; 
v_kvPairs_3977_ = lean_ctor_get(v_head_3972_, 0);
lean_inc(v_kvPairs_3977_);
lean_dec_ref_known(v_head_3972_, 1);
v___x_3978_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo___closed__3));
v___x_3979_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3977_, v___x_3978_);
if (lean_obj_tag(v___x_3979_) == 1)
{
lean_object* v_val_3980_; 
v_val_3980_ = lean_ctor_get(v___x_3979_, 0);
lean_inc(v_val_3980_);
lean_dec_ref_known(v___x_3979_, 1);
if (lean_obj_tag(v_val_3980_) == 2)
{
lean_object* v_n_3981_; lean_object* v_mantissa_3982_; lean_object* v_exponent_3983_; lean_object* v_natZero_3984_; lean_object* v_intZero_3985_; uint8_t v_isNeg_3986_; 
v_n_3981_ = lean_ctor_get(v_val_3980_, 0);
lean_inc_ref(v_n_3981_);
lean_dec_ref_known(v_val_3980_, 1);
v_mantissa_3982_ = lean_ctor_get(v_n_3981_, 0);
lean_inc(v_mantissa_3982_);
v_exponent_3983_ = lean_ctor_get(v_n_3981_, 1);
lean_inc(v_exponent_3983_);
lean_dec_ref(v_n_3981_);
v_natZero_3984_ = lean_unsigned_to_nat(0u);
v_intZero_3985_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_3986_ = lean_int_dec_lt(v_mantissa_3982_, v_intZero_3985_);
if (v_isNeg_3986_ == 0)
{
uint8_t v___x_3987_; 
v___x_3987_ = lean_nat_dec_eq(v_exponent_3983_, v_natZero_3984_);
lean_dec(v_exponent_3983_);
if (v___x_3987_ == 0)
{
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3960_;
}
else
{
lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3988_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__2));
v___x_3989_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3977_, v___x_3988_);
if (lean_obj_tag(v___x_3989_) == 1)
{
lean_object* v_val_3990_; 
v_val_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_val_3990_);
lean_dec_ref_known(v___x_3989_, 1);
if (lean_obj_tag(v_val_3990_) == 2)
{
lean_object* v_n_3991_; lean_object* v_mantissa_3992_; lean_object* v_exponent_3993_; uint8_t v_isNeg_3994_; 
v_n_3991_ = lean_ctor_get(v_val_3990_, 0);
lean_inc_ref(v_n_3991_);
lean_dec_ref_known(v_val_3990_, 1);
v_mantissa_3992_ = lean_ctor_get(v_n_3991_, 0);
lean_inc(v_mantissa_3992_);
v_exponent_3993_ = lean_ctor_get(v_n_3991_, 1);
lean_inc(v_exponent_3993_);
lean_dec_ref(v_n_3991_);
v_isNeg_3994_ = lean_int_dec_lt(v_mantissa_3992_, v_intZero_3985_);
if (v_isNeg_3994_ == 0)
{
uint8_t v___x_3995_; 
v___x_3995_ = lean_nat_dec_eq(v_exponent_3993_, v_natZero_3984_);
lean_dec(v_exponent_3993_);
if (v___x_3995_ == 0)
{
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3963_;
}
else
{
lean_object* v___x_3996_; lean_object* v___x_3997_; 
v___x_3996_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__3));
v___x_3997_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_3977_, v___x_3996_);
lean_dec(v_kvPairs_3977_);
if (lean_obj_tag(v___x_3997_) == 1)
{
lean_object* v_val_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4047_; 
v_val_3998_ = lean_ctor_get(v___x_3997_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4000_ = v___x_3997_;
v_isShared_4001_ = v_isSharedCheck_4047_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_val_3998_);
lean_dec(v___x_3997_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4047_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
if (lean_obj_tag(v_val_3998_) == 2)
{
lean_object* v_n_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4046_; 
v_n_4002_ = lean_ctor_get(v_val_3998_, 0);
v_isSharedCheck_4046_ = !lean_is_exclusive(v_val_3998_);
if (v_isSharedCheck_4046_ == 0)
{
v___x_4004_ = v_val_3998_;
v_isShared_4005_ = v_isSharedCheck_4046_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_n_4002_);
lean_dec(v_val_3998_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4046_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v_mantissa_4006_; lean_object* v_exponent_4007_; uint8_t v_isNeg_4008_; 
v_mantissa_4006_ = lean_ctor_get(v_n_4002_, 0);
lean_inc(v_mantissa_4006_);
v_exponent_4007_ = lean_ctor_get(v_n_4002_, 1);
lean_inc(v_exponent_4007_);
lean_dec_ref(v_n_4002_);
v_isNeg_4008_ = lean_int_dec_lt(v_mantissa_4006_, v_intZero_3985_);
if (v_isNeg_4008_ == 0)
{
uint8_t v___x_4009_; 
v___x_4009_ = lean_nat_dec_eq(v_exponent_4007_, v_natZero_3984_);
lean_dec(v_exponent_4007_);
if (v___x_4009_ == 0)
{
lean_dec(v_mantissa_4006_);
lean_del_object(v___x_4004_);
lean_del_object(v___x_4000_);
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3966_;
}
else
{
lean_object* v_nameMap_4010_; lean_object* v_exprMap_4011_; lean_object* v_a_4012_; lean_object* v___x_4013_; 
v_nameMap_4010_ = lean_ctor_get(v___y_3958_, 1);
v_exprMap_4011_ = lean_ctor_get(v___y_3958_, 3);
v_a_4012_ = lean_nat_abs(v_mantissa_3982_);
lean_dec(v_mantissa_3982_);
v___x_4013_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_4010_, v_a_4012_);
if (lean_obj_tag(v___x_4013_) == 1)
{
lean_object* v_val_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4036_; 
lean_dec(v_a_4012_);
lean_del_object(v___x_4000_);
v_val_4014_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_4016_ = v___x_4013_;
v_isShared_4017_ = v_isSharedCheck_4036_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_val_4014_);
lean_dec(v___x_4013_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4036_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v_a_4018_; lean_object* v___x_4019_; 
v_a_4018_ = lean_nat_abs(v_mantissa_4006_);
lean_dec(v_mantissa_4006_);
v___x_4019_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_4011_, v_a_4018_);
if (lean_obj_tag(v___x_4019_) == 1)
{
lean_object* v_val_4020_; lean_object* v_a_4021_; lean_object* v___x_4022_; lean_object* v___x_4024_; 
lean_dec(v_a_4018_);
lean_del_object(v___x_4016_);
lean_del_object(v___x_4004_);
v_val_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_val_4020_);
lean_dec_ref_known(v___x_4019_, 1);
v_a_4021_ = lean_nat_abs(v_mantissa_3992_);
lean_dec(v_mantissa_3992_);
v___x_4022_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4022_, 0, v_val_4014_);
lean_ctor_set(v___x_4022_, 1, v_a_4021_);
lean_ctor_set(v___x_4022_, 2, v_val_4020_);
if (v_isShared_3976_ == 0)
{
lean_ctor_set(v___x_3975_, 1, v_x_3957_);
lean_ctor_set(v___x_3975_, 0, v___x_4022_);
v___x_4024_ = v___x_3975_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v___x_4022_);
lean_ctor_set(v_reuseFailAlloc_4026_, 1, v_x_3957_);
v___x_4024_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
v_x_3956_ = v_tail_3973_;
v_x_3957_ = v___x_4024_;
goto _start;
}
}
else
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4031_; 
lean_dec(v___x_4019_);
lean_dec(v_val_4014_);
lean_dec(v_mantissa_3992_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
v___x_4027_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_4028_ = l_Nat_reprFast(v_a_4018_);
v___x_4029_ = lean_string_append(v___x_4027_, v___x_4028_);
lean_dec_ref(v___x_4028_);
if (v_isShared_4017_ == 0)
{
lean_ctor_set_tag(v___x_4016_, 18);
lean_ctor_set(v___x_4016_, 0, v___x_4029_);
v___x_4031_ = v___x_4016_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v___x_4029_);
v___x_4031_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
lean_object* v___x_4033_; 
if (v_isShared_4005_ == 0)
{
lean_ctor_set_tag(v___x_4004_, 1);
lean_ctor_set(v___x_4004_, 0, v___x_4031_);
v___x_4033_ = v___x_4004_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
}
else
{
lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4041_; 
lean_dec(v___x_4013_);
lean_dec(v_mantissa_4006_);
lean_dec(v_mantissa_3992_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
v___x_4037_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_4038_ = l_Nat_reprFast(v_a_4012_);
v___x_4039_ = lean_string_append(v___x_4037_, v___x_4038_);
lean_dec_ref(v___x_4038_);
if (v_isShared_4005_ == 0)
{
lean_ctor_set_tag(v___x_4004_, 18);
lean_ctor_set(v___x_4004_, 0, v___x_4039_);
v___x_4041_ = v___x_4004_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4039_);
v___x_4041_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
lean_object* v___x_4043_; 
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v___x_4041_);
v___x_4043_ = v___x_4000_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
else
{
lean_dec(v_exponent_4007_);
lean_dec(v_mantissa_4006_);
lean_del_object(v___x_4004_);
lean_del_object(v___x_4000_);
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3966_;
}
}
}
else
{
lean_del_object(v___x_4000_);
lean_dec(v_val_3998_);
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3966_;
}
}
}
else
{
lean_dec(v___x_3997_);
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3966_;
}
}
}
else
{
lean_dec(v_exponent_3993_);
lean_dec(v_mantissa_3992_);
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3963_;
}
}
else
{
lean_dec(v_val_3990_);
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3963_;
}
}
else
{
lean_dec(v___x_3989_);
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3963_;
}
}
}
else
{
lean_dec(v_exponent_3983_);
lean_dec(v_mantissa_3982_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3960_;
}
}
else
{
lean_dec(v_val_3980_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3960_;
}
}
else
{
lean_dec(v___x_3979_);
lean_dec(v_kvPairs_3977_);
lean_del_object(v___x_3975_);
lean_dec(v_tail_3973_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
goto v___jp_3960_;
}
}
}
else
{
lean_object* v___x_4050_; lean_object* v___x_4051_; 
lean_dec_ref_known(v_x_3956_, 2);
lean_dec(v_head_3972_);
lean_dec_ref(v___y_3958_);
lean_dec(v_x_3957_);
v___x_4050_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4051_, 0, v___x_4050_);
return v___x_4051_;
}
}
v___jp_3960_:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
return v___x_3962_;
}
v___jp_3963_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; 
v___x_3964_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3964_);
return v___x_3965_;
}
v___jp_3966_:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3967_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
return v___x_3968_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___boxed(lean_object* v_x_4052_, lean_object* v_x_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v_res_4056_; 
v_res_4056_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(v_x_4052_, v_x_4053_, v___y_4054_);
return v_res_4056_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(lean_object* v_json_4061_, lean_object* v_a_4062_){
_start:
{
if (lean_obj_tag(v_json_4061_) == 5)
{
lean_object* v_kvPairs_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; 
v_kvPairs_4097_ = lean_ctor_get(v_json_4061_, 0);
v___x_4098_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst___closed__0));
v___x_4099_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4098_);
if (lean_obj_tag(v___x_4099_) == 1)
{
lean_object* v_val_4100_; 
v_val_4100_ = lean_ctor_get(v___x_4099_, 0);
lean_inc(v_val_4100_);
lean_dec_ref_known(v___x_4099_, 1);
if (lean_obj_tag(v_val_4100_) == 2)
{
lean_object* v_n_4101_; lean_object* v_mantissa_4102_; lean_object* v_exponent_4103_; lean_object* v_natZero_4104_; lean_object* v_intZero_4105_; uint8_t v_isNeg_4106_; 
v_n_4101_ = lean_ctor_get(v_val_4100_, 0);
lean_inc_ref(v_n_4101_);
lean_dec_ref_known(v_val_4100_, 1);
v_mantissa_4102_ = lean_ctor_get(v_n_4101_, 0);
lean_inc(v_mantissa_4102_);
v_exponent_4103_ = lean_ctor_get(v_n_4101_, 1);
lean_inc(v_exponent_4103_);
lean_dec_ref(v_n_4101_);
v_natZero_4104_ = lean_unsigned_to_nat(0u);
v_intZero_4105_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_4106_ = lean_int_dec_lt(v_mantissa_4102_, v_intZero_4105_);
if (v_isNeg_4106_ == 0)
{
uint8_t v___x_4107_; 
v___x_4107_ = lean_nat_dec_eq(v_exponent_4103_, v_natZero_4104_);
lean_dec(v_exponent_4103_);
if (v___x_4107_ == 0)
{
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4064_;
}
else
{
lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4108_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__2));
v___x_4109_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4108_);
if (lean_obj_tag(v___x_4109_) == 1)
{
lean_object* v_val_4110_; 
v_val_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_val_4110_);
lean_dec_ref_known(v___x_4109_, 1);
if (lean_obj_tag(v_val_4110_) == 4)
{
lean_object* v_elems_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v_elems_4111_ = lean_ctor_get(v_val_4110_, 0);
lean_inc_ref(v_elems_4111_);
lean_dec_ref_known(v_val_4110_, 1);
v___x_4112_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam___closed__2));
v___x_4113_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4112_);
if (lean_obj_tag(v___x_4113_) == 1)
{
lean_object* v_val_4114_; 
v_val_4114_ = lean_ctor_get(v___x_4113_, 0);
lean_inc(v_val_4114_);
lean_dec_ref_known(v___x_4113_, 1);
if (lean_obj_tag(v_val_4114_) == 2)
{
lean_object* v_n_4115_; lean_object* v_mantissa_4116_; lean_object* v_exponent_4117_; uint8_t v_isNeg_4118_; 
v_n_4115_ = lean_ctor_get(v_val_4114_, 0);
lean_inc_ref(v_n_4115_);
lean_dec_ref_known(v_val_4114_, 1);
v_mantissa_4116_ = lean_ctor_get(v_n_4115_, 0);
lean_inc(v_mantissa_4116_);
v_exponent_4117_ = lean_ctor_get(v_n_4115_, 1);
lean_inc(v_exponent_4117_);
lean_dec_ref(v_n_4115_);
v_isNeg_4118_ = lean_int_dec_lt(v_mantissa_4116_, v_intZero_4105_);
if (v_isNeg_4118_ == 0)
{
uint8_t v___x_4119_; 
v___x_4119_ = lean_nat_dec_eq(v_exponent_4117_, v_natZero_4104_);
lean_dec(v_exponent_4117_);
if (v___x_4119_ == 0)
{
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4070_;
}
else
{
lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4120_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__4));
v___x_4121_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4120_);
if (lean_obj_tag(v___x_4121_) == 1)
{
lean_object* v_val_4122_; 
v_val_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc(v_val_4122_);
lean_dec_ref_known(v___x_4121_, 1);
if (lean_obj_tag(v_val_4122_) == 4)
{
lean_object* v_elems_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v_elems_4123_ = lean_ctor_get(v_val_4122_, 0);
lean_inc_ref(v_elems_4123_);
lean_dec_ref_known(v_val_4122_, 1);
v___x_4124_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__2));
v___x_4125_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4124_);
if (lean_obj_tag(v___x_4125_) == 1)
{
lean_object* v_val_4126_; 
v_val_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_val_4126_);
lean_dec_ref_known(v___x_4125_, 1);
if (lean_obj_tag(v_val_4126_) == 2)
{
lean_object* v_n_4127_; lean_object* v_mantissa_4128_; lean_object* v_exponent_4129_; uint8_t v_isNeg_4130_; 
v_n_4127_ = lean_ctor_get(v_val_4126_, 0);
lean_inc_ref(v_n_4127_);
lean_dec_ref_known(v_val_4126_, 1);
v_mantissa_4128_ = lean_ctor_get(v_n_4127_, 0);
lean_inc(v_mantissa_4128_);
v_exponent_4129_ = lean_ctor_get(v_n_4127_, 1);
lean_inc(v_exponent_4129_);
lean_dec_ref(v_n_4127_);
v_isNeg_4130_ = lean_int_dec_lt(v_mantissa_4128_, v_intZero_4105_);
if (v_isNeg_4130_ == 0)
{
uint8_t v___x_4131_; 
v___x_4131_ = lean_nat_dec_eq(v_exponent_4129_, v_natZero_4104_);
lean_dec(v_exponent_4129_);
if (v___x_4131_ == 0)
{
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4076_;
}
else
{
lean_object* v___x_4132_; lean_object* v___x_4133_; 
v___x_4132_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__3));
v___x_4133_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4132_);
if (lean_obj_tag(v___x_4133_) == 1)
{
lean_object* v_val_4134_; 
v_val_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_val_4134_);
lean_dec_ref_known(v___x_4133_, 1);
if (lean_obj_tag(v_val_4134_) == 2)
{
lean_object* v_n_4135_; lean_object* v_mantissa_4136_; lean_object* v_exponent_4137_; uint8_t v_isNeg_4138_; 
v_n_4135_ = lean_ctor_get(v_val_4134_, 0);
lean_inc_ref(v_n_4135_);
lean_dec_ref_known(v_val_4134_, 1);
v_mantissa_4136_ = lean_ctor_get(v_n_4135_, 0);
lean_inc(v_mantissa_4136_);
v_exponent_4137_ = lean_ctor_get(v_n_4135_, 1);
lean_inc(v_exponent_4137_);
lean_dec_ref(v_n_4135_);
v_isNeg_4138_ = lean_int_dec_lt(v_mantissa_4136_, v_intZero_4105_);
if (v_isNeg_4138_ == 0)
{
uint8_t v___x_4139_; 
v___x_4139_ = lean_nat_dec_eq(v_exponent_4137_, v_natZero_4104_);
lean_dec(v_exponent_4137_);
if (v___x_4139_ == 0)
{
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4079_;
}
else
{
lean_object* v___x_4140_; lean_object* v___x_4141_; 
v___x_4140_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__0));
v___x_4141_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4140_);
if (lean_obj_tag(v___x_4141_) == 1)
{
lean_object* v_val_4142_; 
v_val_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc(v_val_4142_);
lean_dec_ref_known(v___x_4141_, 1);
if (lean_obj_tag(v_val_4142_) == 2)
{
lean_object* v_n_4143_; lean_object* v_mantissa_4144_; lean_object* v_exponent_4145_; uint8_t v_isNeg_4146_; 
v_n_4143_ = lean_ctor_get(v_val_4142_, 0);
lean_inc_ref(v_n_4143_);
lean_dec_ref_known(v_val_4142_, 1);
v_mantissa_4144_ = lean_ctor_get(v_n_4143_, 0);
lean_inc(v_mantissa_4144_);
v_exponent_4145_ = lean_ctor_get(v_n_4143_, 1);
lean_inc(v_exponent_4145_);
lean_dec_ref(v_n_4143_);
v_isNeg_4146_ = lean_int_dec_lt(v_mantissa_4144_, v_intZero_4105_);
if (v_isNeg_4146_ == 0)
{
uint8_t v___x_4147_; 
v___x_4147_ = lean_nat_dec_eq(v_exponent_4145_, v_natZero_4104_);
lean_dec(v_exponent_4145_);
if (v___x_4147_ == 0)
{
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4082_;
}
else
{
lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4148_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__1));
v___x_4149_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4148_);
if (lean_obj_tag(v___x_4149_) == 1)
{
lean_object* v_val_4150_; 
v_val_4150_ = lean_ctor_get(v___x_4149_, 0);
lean_inc(v_val_4150_);
lean_dec_ref_known(v___x_4149_, 1);
if (lean_obj_tag(v_val_4150_) == 2)
{
lean_object* v_n_4151_; lean_object* v_mantissa_4152_; lean_object* v_exponent_4153_; uint8_t v_isNeg_4154_; 
v_n_4151_ = lean_ctor_get(v_val_4150_, 0);
lean_inc_ref(v_n_4151_);
lean_dec_ref_known(v_val_4150_, 1);
v_mantissa_4152_ = lean_ctor_get(v_n_4151_, 0);
lean_inc(v_mantissa_4152_);
v_exponent_4153_ = lean_ctor_get(v_n_4151_, 1);
lean_inc(v_exponent_4153_);
lean_dec_ref(v_n_4151_);
v_isNeg_4154_ = lean_int_dec_lt(v_mantissa_4152_, v_intZero_4105_);
if (v_isNeg_4154_ == 0)
{
uint8_t v___x_4155_; 
v___x_4155_ = lean_nat_dec_eq(v_exponent_4153_, v_natZero_4104_);
lean_dec(v_exponent_4153_);
if (v___x_4155_ == 0)
{
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4085_;
}
else
{
lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__2));
v___x_4157_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4156_);
if (lean_obj_tag(v___x_4157_) == 1)
{
lean_object* v_val_4158_; 
v_val_4158_ = lean_ctor_get(v___x_4157_, 0);
lean_inc(v_val_4158_);
lean_dec_ref_known(v___x_4157_, 1);
if (lean_obj_tag(v_val_4158_) == 1)
{
uint8_t v_b_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v_b_4159_ = lean_ctor_get_uint8(v_val_4158_, 0);
lean_dec_ref_known(v_val_4158_, 0);
v___x_4160_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___closed__3));
v___x_4161_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4160_);
if (lean_obj_tag(v___x_4161_) == 1)
{
lean_object* v_val_4162_; 
v_val_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_val_4162_);
lean_dec_ref_known(v___x_4161_, 1);
if (lean_obj_tag(v_val_4162_) == 4)
{
lean_object* v_elems_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4302_; 
v_elems_4163_ = lean_ctor_get(v_val_4162_, 0);
v_isSharedCheck_4302_ = !lean_is_exclusive(v_val_4162_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4165_ = v_val_4162_;
v_isShared_4166_ = v_isSharedCheck_4302_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_elems_4163_);
lean_dec(v_val_4162_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4302_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4167_; lean_object* v___x_4168_; 
v___x_4167_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo___closed__3));
v___x_4168_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_kvPairs_4097_, v___x_4167_);
if (lean_obj_tag(v___x_4168_) == 1)
{
lean_object* v_val_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4301_; 
v_val_4169_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4171_ = v___x_4168_;
v_isShared_4172_ = v_isSharedCheck_4301_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_val_4169_);
lean_dec(v___x_4168_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4301_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
if (lean_obj_tag(v_val_4169_) == 1)
{
uint8_t v_b_4173_; lean_object* v_nameMap_4174_; lean_object* v_a_4175_; lean_object* v___x_4176_; 
v_b_4173_ = lean_ctor_get_uint8(v_val_4169_, 0);
lean_dec_ref_known(v_val_4169_, 0);
v_nameMap_4174_ = lean_ctor_get(v_a_4062_, 1);
v_a_4175_ = lean_nat_abs(v_mantissa_4102_);
lean_dec(v_mantissa_4102_);
v___x_4176_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_nameMap_4174_, v_a_4175_);
if (lean_obj_tag(v___x_4176_) == 1)
{
lean_object* v_val_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4291_; 
lean_dec(v_a_4175_);
lean_del_object(v___x_4171_);
lean_del_object(v___x_4165_);
v_val_4177_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4291_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4179_ = v___x_4176_;
v_isShared_4180_ = v_isSharedCheck_4291_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_val_4177_);
lean_dec(v___x_4176_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4291_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v_a_4181_; lean_object* v_a_4182_; lean_object* v_a_4183_; lean_object* v_a_4184_; lean_object* v_a_4185_; lean_object* v___x_4186_; 
v_a_4181_ = lean_nat_abs(v_mantissa_4116_);
lean_dec(v_mantissa_4116_);
v_a_4182_ = lean_nat_abs(v_mantissa_4128_);
lean_dec(v_mantissa_4128_);
v_a_4183_ = lean_nat_abs(v_mantissa_4136_);
lean_dec(v_mantissa_4136_);
v_a_4184_ = lean_nat_abs(v_mantissa_4144_);
lean_dec(v_mantissa_4144_);
v_a_4185_ = lean_nat_abs(v_mantissa_4152_);
lean_dec(v_mantissa_4152_);
v___x_4186_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_4111_, v_a_4062_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4282_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4189_ = v___x_4186_;
v_isShared_4190_ = v_isSharedCheck_4282_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4186_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4282_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v_snd_4191_; lean_object* v_fst_4192_; lean_object* v_exprMap_4193_; lean_object* v___x_4194_; 
v_snd_4191_ = lean_ctor_get(v_a_4187_, 1);
lean_inc(v_snd_4191_);
v_fst_4192_ = lean_ctor_get(v_a_4187_, 0);
lean_inc(v_fst_4192_);
lean_dec(v_a_4187_);
v_exprMap_4193_ = lean_ctor_get(v_snd_4191_, 3);
v___x_4194_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__1___redArg(v_exprMap_4193_, v_a_4181_);
if (lean_obj_tag(v___x_4194_) == 1)
{
lean_object* v_val_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4272_; 
lean_del_object(v___x_4189_);
lean_dec(v_a_4181_);
lean_del_object(v___x_4179_);
v_val_4195_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4272_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4272_ == 0)
{
v___x_4197_ = v___x_4194_;
v_isShared_4198_ = v_isSharedCheck_4272_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_val_4195_);
lean_dec(v___x_4194_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4272_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4199_; 
v___x_4199_ = l___private_LeanExport_Parse_0__LeanExport_Parse_getNameList(v_elems_4123_, v_snd_4191_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v_fst_4201_; lean_object* v_snd_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4200_);
lean_dec_ref_known(v___x_4199_, 1);
v_fst_4201_ = lean_ctor_get(v_a_4200_, 0);
lean_inc(v_fst_4201_);
v_snd_4202_ = lean_ctor_get(v_a_4200_, 1);
lean_inc(v_snd_4202_);
lean_dec(v_a_4200_);
v___x_4203_ = lean_array_to_list(v_elems_4163_);
v___x_4204_ = lean_box(0);
v___x_4205_ = l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0(v___x_4203_, v___x_4204_, v_snd_4202_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4255_; 
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v___x_4205_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4208_ = v___x_4205_;
v_isShared_4209_ = v_isSharedCheck_4255_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4205_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4255_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v_snd_4210_; lean_object* v_fst_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4254_; 
v_snd_4210_ = lean_ctor_get(v_a_4206_, 1);
v_fst_4211_ = lean_ctor_get(v_a_4206_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v_a_4206_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4213_ = v_a_4206_;
v_isShared_4214_ = v_isSharedCheck_4254_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_snd_4210_);
lean_inc(v_fst_4211_);
lean_dec(v_a_4206_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4254_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v_stream_4215_; lean_object* v_nameMap_4216_; lean_object* v_levelMap_4217_; lean_object* v_exprMap_4218_; lean_object* v_recursorRuleMap_4219_; lean_object* v_constMap_4220_; lean_object* v_constOrder_4221_; lean_object* v_rewrites_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4253_; 
v_stream_4215_ = lean_ctor_get(v_snd_4210_, 0);
v_nameMap_4216_ = lean_ctor_get(v_snd_4210_, 1);
v_levelMap_4217_ = lean_ctor_get(v_snd_4210_, 2);
v_exprMap_4218_ = lean_ctor_get(v_snd_4210_, 3);
v_recursorRuleMap_4219_ = lean_ctor_get(v_snd_4210_, 4);
v_constMap_4220_ = lean_ctor_get(v_snd_4210_, 5);
v_constOrder_4221_ = lean_ctor_get(v_snd_4210_, 6);
v_rewrites_4222_ = lean_ctor_get(v_snd_4210_, 7);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_snd_4210_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4224_ = v_snd_4210_;
v_isShared_4225_ = v_isSharedCheck_4253_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_rewrites_4222_);
lean_inc(v_constOrder_4221_);
lean_inc(v_constMap_4220_);
lean_inc(v_recursorRuleMap_4219_);
lean_inc(v_exprMap_4218_);
lean_inc(v_levelMap_4217_);
lean_inc(v_nameMap_4216_);
lean_inc(v_stream_4215_);
lean_dec(v_snd_4210_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4253_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
uint8_t v___x_4226_; 
v___x_4226_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__0___redArg(v_constMap_4220_, v_val_4177_);
if (v___x_4226_ == 0)
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
lean_inc(v_val_4177_);
v___x_4227_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4227_, 0, v_val_4177_);
lean_ctor_set(v___x_4227_, 1, v_fst_4192_);
lean_ctor_set(v___x_4227_, 2, v_val_4195_);
v___x_4228_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_4228_, 0, v___x_4227_);
lean_ctor_set(v___x_4228_, 1, v_fst_4201_);
lean_ctor_set(v___x_4228_, 2, v_a_4182_);
lean_ctor_set(v___x_4228_, 3, v_a_4183_);
lean_ctor_set(v___x_4228_, 4, v_a_4184_);
lean_ctor_set(v___x_4228_, 5, v_a_4185_);
lean_ctor_set(v___x_4228_, 6, v_fst_4211_);
lean_ctor_set_uint8(v___x_4228_, sizeof(void*)*7, v_b_4159_);
lean_ctor_set_uint8(v___x_4228_, sizeof(void*)*7 + 1, v_b_4173_);
if (v_isShared_4198_ == 0)
{
lean_ctor_set_tag(v___x_4197_, 7);
lean_ctor_set(v___x_4197_, 0, v___x_4228_);
v___x_4230_ = v___x_4197_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4235_; 
v___x_4231_ = lean_box(0);
lean_inc(v_val_4177_);
v___x_4232_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_constMap_4220_, v_val_4177_, v___x_4230_);
v___x_4233_ = lean_array_push(v_constOrder_4221_, v_val_4177_);
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 6, v___x_4233_);
lean_ctor_set(v___x_4224_, 5, v___x_4232_);
v___x_4235_ = v___x_4224_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_stream_4215_);
lean_ctor_set(v_reuseFailAlloc_4242_, 1, v_nameMap_4216_);
lean_ctor_set(v_reuseFailAlloc_4242_, 2, v_levelMap_4217_);
lean_ctor_set(v_reuseFailAlloc_4242_, 3, v_exprMap_4218_);
lean_ctor_set(v_reuseFailAlloc_4242_, 4, v_recursorRuleMap_4219_);
lean_ctor_set(v_reuseFailAlloc_4242_, 5, v___x_4232_);
lean_ctor_set(v_reuseFailAlloc_4242_, 6, v___x_4233_);
lean_ctor_set(v_reuseFailAlloc_4242_, 7, v_rewrites_4222_);
v___x_4235_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
lean_object* v___x_4237_; 
if (v_isShared_4214_ == 0)
{
lean_ctor_set(v___x_4213_, 1, v___x_4235_);
lean_ctor_set(v___x_4213_, 0, v___x_4231_);
v___x_4237_ = v___x_4213_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v___x_4231_);
lean_ctor_set(v_reuseFailAlloc_4241_, 1, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
lean_object* v___x_4239_; 
if (v_isShared_4209_ == 0)
{
lean_ctor_set(v___x_4208_, 0, v___x_4237_);
v___x_4239_ = v___x_4208_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v___x_4237_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
}
}
else
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4248_; 
lean_del_object(v___x_4224_);
lean_dec_ref(v_rewrites_4222_);
lean_dec_ref(v_constOrder_4221_);
lean_dec_ref(v_constMap_4220_);
lean_dec_ref(v_recursorRuleMap_4219_);
lean_dec_ref(v_exprMap_4218_);
lean_dec_ref(v_levelMap_4217_);
lean_dec_ref(v_nameMap_4216_);
lean_dec_ref(v_stream_4215_);
lean_del_object(v___x_4213_);
lean_dec(v_fst_4211_);
lean_dec(v_fst_4201_);
lean_dec(v_val_4195_);
lean_dec(v_fst_4192_);
lean_dec(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
v___x_4244_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addConst___closed__2));
v___x_4245_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_4177_, v___x_4226_);
v___x_4246_ = lean_string_append(v___x_4244_, v___x_4245_);
lean_dec_ref(v___x_4245_);
if (v_isShared_4198_ == 0)
{
lean_ctor_set_tag(v___x_4197_, 18);
lean_ctor_set(v___x_4197_, 0, v___x_4246_);
v___x_4248_ = v___x_4197_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v___x_4246_);
v___x_4248_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
lean_object* v___x_4250_; 
if (v_isShared_4209_ == 0)
{
lean_ctor_set_tag(v___x_4208_, 1);
lean_ctor_set(v___x_4208_, 0, v___x_4248_);
v___x_4250_ = v___x_4208_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v___x_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
lean_dec(v_fst_4201_);
lean_del_object(v___x_4197_);
lean_dec(v_val_4195_);
lean_dec(v_fst_4192_);
lean_dec(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
lean_dec(v_val_4177_);
v_a_4256_ = lean_ctor_get(v___x_4205_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4205_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___x_4205_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_dec(v___x_4205_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_del_object(v___x_4197_);
lean_dec(v_val_4195_);
lean_dec(v_fst_4192_);
lean_dec(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
lean_dec(v_val_4177_);
lean_dec_ref(v_elems_4163_);
v_a_4264_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4199_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4199_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
}
else
{
lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4277_; 
lean_dec(v___x_4194_);
lean_dec(v_fst_4192_);
lean_dec(v_snd_4191_);
lean_dec(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
lean_dec(v_val_4177_);
lean_dec_ref(v_elems_4163_);
lean_dec_ref(v_elems_4123_);
v___x_4273_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getExpr___closed__0));
v___x_4274_ = l_Nat_reprFast(v_a_4181_);
v___x_4275_ = lean_string_append(v___x_4273_, v___x_4274_);
lean_dec_ref(v___x_4274_);
if (v_isShared_4180_ == 0)
{
lean_ctor_set_tag(v___x_4179_, 18);
lean_ctor_set(v___x_4179_, 0, v___x_4275_);
v___x_4277_ = v___x_4179_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v___x_4275_);
v___x_4277_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
lean_object* v___x_4279_; 
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 1);
lean_ctor_set(v___x_4189_, 0, v___x_4277_);
v___x_4279_ = v___x_4189_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v___x_4277_);
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
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
lean_dec(v_a_4185_);
lean_dec(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec(v_a_4182_);
lean_dec(v_a_4181_);
lean_del_object(v___x_4179_);
lean_dec(v_val_4177_);
lean_dec_ref(v_elems_4163_);
lean_dec_ref(v_elems_4123_);
v_a_4283_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4186_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4186_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
else
{
lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4296_; 
lean_dec(v___x_4176_);
lean_dec_ref(v_elems_4163_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec_ref(v_a_4062_);
v___x_4292_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_getName___closed__2));
v___x_4293_ = l_Nat_reprFast(v_a_4175_);
v___x_4294_ = lean_string_append(v___x_4292_, v___x_4293_);
lean_dec_ref(v___x_4293_);
if (v_isShared_4172_ == 0)
{
lean_ctor_set_tag(v___x_4171_, 18);
lean_ctor_set(v___x_4171_, 0, v___x_4294_);
v___x_4296_ = v___x_4171_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v___x_4294_);
v___x_4296_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
lean_object* v___x_4298_; 
if (v_isShared_4166_ == 0)
{
lean_ctor_set_tag(v___x_4165_, 1);
lean_ctor_set(v___x_4165_, 0, v___x_4296_);
v___x_4298_ = v___x_4165_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v___x_4296_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
else
{
lean_del_object(v___x_4171_);
lean_dec(v_val_4169_);
lean_del_object(v___x_4165_);
lean_dec_ref(v_elems_4163_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4094_;
}
}
}
else
{
lean_dec(v___x_4168_);
lean_del_object(v___x_4165_);
lean_dec_ref(v_elems_4163_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4094_;
}
}
}
else
{
lean_dec(v_val_4162_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4091_;
}
}
else
{
lean_dec(v___x_4161_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4091_;
}
}
else
{
lean_dec(v_val_4158_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4088_;
}
}
else
{
lean_dec(v___x_4157_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4088_;
}
}
}
else
{
lean_dec(v_exponent_4153_);
lean_dec(v_mantissa_4152_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4085_;
}
}
else
{
lean_dec(v_val_4150_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4085_;
}
}
else
{
lean_dec(v___x_4149_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4085_;
}
}
}
else
{
lean_dec(v_exponent_4145_);
lean_dec(v_mantissa_4144_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4082_;
}
}
else
{
lean_dec(v_val_4142_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4082_;
}
}
else
{
lean_dec(v___x_4141_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4082_;
}
}
}
else
{
lean_dec(v_exponent_4137_);
lean_dec(v_mantissa_4136_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4079_;
}
}
else
{
lean_dec(v_val_4134_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4079_;
}
}
else
{
lean_dec(v___x_4133_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4079_;
}
}
}
else
{
lean_dec(v_exponent_4129_);
lean_dec(v_mantissa_4128_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4076_;
}
}
else
{
lean_dec(v_val_4126_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4076_;
}
}
else
{
lean_dec(v___x_4125_);
lean_dec_ref(v_elems_4123_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4076_;
}
}
else
{
lean_dec(v_val_4122_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4073_;
}
}
else
{
lean_dec(v___x_4121_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4073_;
}
}
}
else
{
lean_dec(v_exponent_4117_);
lean_dec(v_mantissa_4116_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4070_;
}
}
else
{
lean_dec(v_val_4114_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4070_;
}
}
else
{
lean_dec(v___x_4113_);
lean_dec_ref(v_elems_4111_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4070_;
}
}
else
{
lean_dec(v_val_4110_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4067_;
}
}
else
{
lean_dec(v___x_4109_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4067_;
}
}
}
else
{
lean_dec(v_exponent_4103_);
lean_dec(v_mantissa_4102_);
lean_dec_ref(v_a_4062_);
goto v___jp_4064_;
}
}
else
{
lean_dec(v_val_4100_);
lean_dec_ref(v_a_4062_);
goto v___jp_4064_;
}
}
else
{
lean_dec(v___x_4099_);
lean_dec_ref(v_a_4062_);
goto v___jp_4064_;
}
}
else
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
lean_dec_ref(v_a_4062_);
v___x_4303_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4303_);
return v___x_4304_;
}
v___jp_4064_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4065_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4065_);
return v___x_4066_;
}
v___jp_4067_:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
return v___x_4069_;
}
v___jp_4070_:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4071_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4071_);
return v___x_4072_;
}
v___jp_4073_:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4074_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4074_);
return v___x_4075_;
}
v___jp_4076_:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4077_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4077_);
return v___x_4078_;
}
v___jp_4079_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
return v___x_4081_;
}
v___jp_4082_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4083_);
return v___x_4084_;
}
v___jp_4085_:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4087_, 0, v___x_4086_);
return v___x_4087_;
}
v___jp_4088_:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4090_, 0, v___x_4089_);
return v___x_4090_;
}
v___jp_4091_:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4092_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4092_);
return v___x_4093_;
}
v___jp_4094_:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = ((lean_object*)(l_List_mapM_loop___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo_spec__0___closed__1));
v___x_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
return v___x_4096_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo___boxed(lean_object* v_json_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(v_json_4305_, v_a_4306_);
lean_dec(v_json_4305_);
return v_res_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(lean_object* v_as_4309_, size_t v_i_4310_, size_t v_stop_4311_, lean_object* v_b_4312_, lean_object* v___y_4313_){
_start:
{
uint8_t v___x_4315_; 
v___x_4315_ = lean_usize_dec_eq(v_i_4310_, v_stop_4311_);
if (v___x_4315_ == 0)
{
lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4316_ = lean_array_uget_borrowed(v_as_4309_, v_i_4310_);
v___x_4317_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRecInfo(v___x_4316_, v___y_4313_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; lean_object* v_fst_4319_; lean_object* v_snd_4320_; size_t v___x_4321_; size_t v___x_4322_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_a_4318_);
lean_dec_ref_known(v___x_4317_, 1);
v_fst_4319_ = lean_ctor_get(v_a_4318_, 0);
lean_inc(v_fst_4319_);
v_snd_4320_ = lean_ctor_get(v_a_4318_, 1);
lean_inc(v_snd_4320_);
lean_dec(v_a_4318_);
v___x_4321_ = ((size_t)1ULL);
v___x_4322_ = lean_usize_add(v_i_4310_, v___x_4321_);
v_i_4310_ = v___x_4322_;
v_b_4312_ = v_fst_4319_;
v___y_4313_ = v_snd_4320_;
goto _start;
}
else
{
return v___x_4317_;
}
}
else
{
lean_object* v___x_4324_; lean_object* v___x_4325_; 
v___x_4324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4324_, 0, v_b_4312_);
lean_ctor_set(v___x_4324_, 1, v___y_4313_);
v___x_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4325_, 0, v___x_4324_);
return v___x_4325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0___boxed(lean_object* v_as_4326_, lean_object* v_i_4327_, lean_object* v_stop_4328_, lean_object* v_b_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_){
_start:
{
size_t v_i_boxed_4332_; size_t v_stop_boxed_4333_; lean_object* v_res_4334_; 
v_i_boxed_4332_ = lean_unbox_usize(v_i_4327_);
lean_dec(v_i_4327_);
v_stop_boxed_4333_ = lean_unbox_usize(v_stop_4328_);
lean_dec(v_stop_4328_);
v_res_4334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(v_as_4326_, v_i_boxed_4332_, v_stop_boxed_4333_, v_b_4329_, v___y_4330_);
lean_dec_ref(v_as_4326_);
return v_res_4334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(lean_object* v_as_4335_, size_t v_i_4336_, size_t v_stop_4337_, lean_object* v_b_4338_, lean_object* v___y_4339_){
_start:
{
uint8_t v___x_4341_; 
v___x_4341_ = lean_usize_dec_eq(v_i_4336_, v_stop_4337_);
if (v___x_4341_ == 0)
{
lean_object* v___x_4342_; lean_object* v___x_4343_; 
v___x_4342_ = lean_array_uget_borrowed(v_as_4335_, v_i_4336_);
v___x_4343_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseCtorInfo(v___x_4342_, v___y_4339_);
if (lean_obj_tag(v___x_4343_) == 0)
{
lean_object* v_a_4344_; lean_object* v_fst_4345_; lean_object* v_snd_4346_; size_t v___x_4347_; size_t v___x_4348_; 
v_a_4344_ = lean_ctor_get(v___x_4343_, 0);
lean_inc(v_a_4344_);
lean_dec_ref_known(v___x_4343_, 1);
v_fst_4345_ = lean_ctor_get(v_a_4344_, 0);
lean_inc(v_fst_4345_);
v_snd_4346_ = lean_ctor_get(v_a_4344_, 1);
lean_inc(v_snd_4346_);
lean_dec(v_a_4344_);
v___x_4347_ = ((size_t)1ULL);
v___x_4348_ = lean_usize_add(v_i_4336_, v___x_4347_);
v_i_4336_ = v___x_4348_;
v_b_4338_ = v_fst_4345_;
v___y_4339_ = v_snd_4346_;
goto _start;
}
else
{
return v___x_4343_;
}
}
else
{
lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4350_, 0, v_b_4338_);
lean_ctor_set(v___x_4350_, 1, v___y_4339_);
v___x_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4350_);
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1___boxed(lean_object* v_as_4352_, lean_object* v_i_4353_, lean_object* v_stop_4354_, lean_object* v_b_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_){
_start:
{
size_t v_i_boxed_4358_; size_t v_stop_boxed_4359_; lean_object* v_res_4360_; 
v_i_boxed_4358_ = lean_unbox_usize(v_i_4353_);
lean_dec(v_i_4353_);
v_stop_boxed_4359_ = lean_unbox_usize(v_stop_4354_);
lean_dec(v_stop_4354_);
v_res_4360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(v_as_4352_, v_i_boxed_4358_, v_stop_boxed_4359_, v_b_4355_, v___y_4356_);
lean_dec_ref(v_as_4352_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(lean_object* v_as_4361_, size_t v_i_4362_, size_t v_stop_4363_, lean_object* v_b_4364_, lean_object* v___y_4365_){
_start:
{
uint8_t v___x_4367_; 
v___x_4367_ = lean_usize_dec_eq(v_i_4362_, v_stop_4363_);
if (v___x_4367_ == 0)
{
lean_object* v___x_4368_; lean_object* v___x_4369_; 
v___x_4368_ = lean_array_uget_borrowed(v_as_4361_, v_i_4362_);
v___x_4369_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo(v___x_4368_, v___y_4365_);
if (lean_obj_tag(v___x_4369_) == 0)
{
lean_object* v_a_4370_; lean_object* v_fst_4371_; lean_object* v_snd_4372_; size_t v___x_4373_; size_t v___x_4374_; 
v_a_4370_ = lean_ctor_get(v___x_4369_, 0);
lean_inc(v_a_4370_);
lean_dec_ref_known(v___x_4369_, 1);
v_fst_4371_ = lean_ctor_get(v_a_4370_, 0);
lean_inc(v_fst_4371_);
v_snd_4372_ = lean_ctor_get(v_a_4370_, 1);
lean_inc(v_snd_4372_);
lean_dec(v_a_4370_);
v___x_4373_ = ((size_t)1ULL);
v___x_4374_ = lean_usize_add(v_i_4362_, v___x_4373_);
v_i_4362_ = v___x_4374_;
v_b_4364_ = v_fst_4371_;
v___y_4365_ = v_snd_4372_;
goto _start;
}
else
{
return v___x_4369_;
}
}
else
{
lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4376_, 0, v_b_4364_);
lean_ctor_set(v___x_4376_, 1, v___y_4365_);
v___x_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4376_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2___boxed(lean_object* v_as_4378_, lean_object* v_i_4379_, lean_object* v_stop_4380_, lean_object* v_b_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
size_t v_i_boxed_4384_; size_t v_stop_boxed_4385_; lean_object* v_res_4386_; 
v_i_boxed_4384_ = lean_unbox_usize(v_i_4379_);
lean_dec(v_i_4379_);
v_stop_boxed_4385_ = lean_unbox_usize(v_stop_4380_);
lean_dec(v_stop_4380_);
v_res_4386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(v_as_4378_, v_i_boxed_4384_, v_stop_boxed_4385_, v_b_4381_, v___y_4382_);
lean_dec_ref(v_as_4378_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(lean_object* v_data_4398_, lean_object* v_a_4399_){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__6));
v___x_4411_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4398_, v___x_4410_);
if (lean_obj_tag(v___x_4411_) == 1)
{
lean_object* v_val_4412_; 
v_val_4412_ = lean_ctor_get(v___x_4411_, 0);
lean_inc(v_val_4412_);
lean_dec_ref_known(v___x_4411_, 1);
if (lean_obj_tag(v_val_4412_) == 4)
{
lean_object* v_elems_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v_elems_4413_ = lean_ctor_get(v_val_4412_, 0);
lean_inc_ref(v_elems_4413_);
lean_dec_ref_known(v_val_4412_, 1);
v___x_4414_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductInfo___closed__4));
v___x_4415_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4398_, v___x_4414_);
if (lean_obj_tag(v___x_4415_) == 1)
{
lean_object* v_val_4416_; 
v_val_4416_ = lean_ctor_get(v___x_4415_, 0);
lean_inc(v_val_4416_);
lean_dec_ref_known(v___x_4415_, 1);
if (lean_obj_tag(v_val_4416_) == 4)
{
lean_object* v_elems_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v_elems_4417_ = lean_ctor_get(v_val_4416_, 0);
lean_inc_ref(v_elems_4417_);
lean_dec_ref_known(v_val_4416_, 1);
v___x_4418_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__7));
v___x_4419_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr_spec__0___redArg(v_data_4398_, v___x_4418_);
if (lean_obj_tag(v___x_4419_) == 1)
{
lean_object* v_val_4420_; 
v_val_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_val_4420_);
lean_dec_ref_known(v___x_4419_, 1);
if (lean_obj_tag(v_val_4420_) == 4)
{
lean_object* v_elems_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4456_; 
v_elems_4421_ = lean_ctor_get(v_val_4420_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_val_4420_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4423_ = v_val_4420_;
v_isShared_4424_ = v_isSharedCheck_4456_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_elems_4421_);
lean_dec(v_val_4420_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4456_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4425_; lean_object* v_snd_4427_; lean_object* v_snd_4439_; lean_object* v___x_4448_; uint8_t v___x_4449_; 
v___x_4425_ = lean_unsigned_to_nat(0u);
v___x_4448_ = lean_array_get_size(v_elems_4413_);
v___x_4449_ = lean_nat_dec_lt(v___x_4425_, v___x_4448_);
if (v___x_4449_ == 0)
{
lean_dec_ref(v_elems_4413_);
v_snd_4439_ = v_a_4399_;
goto v___jp_4438_;
}
else
{
lean_object* v___x_4450_; size_t v___x_4451_; size_t v___x_4452_; lean_object* v___x_4453_; 
v___x_4450_ = lean_box(0);
v___x_4451_ = ((size_t)0ULL);
v___x_4452_ = lean_usize_of_nat(v___x_4448_);
v___x_4453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__2(v_elems_4413_, v___x_4451_, v___x_4452_, v___x_4450_, v_a_4399_);
lean_dec_ref(v_elems_4413_);
if (lean_obj_tag(v___x_4453_) == 0)
{
lean_object* v_a_4454_; lean_object* v_snd_4455_; 
v_a_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_a_4454_);
lean_dec_ref_known(v___x_4453_, 1);
v_snd_4455_ = lean_ctor_get(v_a_4454_, 1);
lean_inc(v_snd_4455_);
lean_dec(v_a_4454_);
v_snd_4439_ = v_snd_4455_;
goto v___jp_4438_;
}
else
{
lean_del_object(v___x_4423_);
lean_dec_ref(v_elems_4421_);
lean_dec_ref(v_elems_4417_);
return v___x_4453_;
}
}
v___jp_4426_:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; uint8_t v___x_4430_; 
v___x_4428_ = lean_array_get_size(v_elems_4421_);
v___x_4429_ = lean_box(0);
v___x_4430_ = lean_nat_dec_lt(v___x_4425_, v___x_4428_);
if (v___x_4430_ == 0)
{
lean_object* v___x_4431_; lean_object* v___x_4433_; 
lean_dec_ref(v_elems_4421_);
v___x_4431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4429_);
lean_ctor_set(v___x_4431_, 1, v_snd_4427_);
if (v_isShared_4424_ == 0)
{
lean_ctor_set_tag(v___x_4423_, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4431_);
v___x_4433_ = v___x_4423_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v___x_4431_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
else
{
size_t v___x_4435_; size_t v___x_4436_; lean_object* v___x_4437_; 
lean_del_object(v___x_4423_);
v___x_4435_ = ((size_t)0ULL);
v___x_4436_ = lean_usize_of_nat(v___x_4428_);
v___x_4437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__0(v_elems_4421_, v___x_4435_, v___x_4436_, v___x_4429_, v_snd_4427_);
lean_dec_ref(v_elems_4421_);
return v___x_4437_;
}
}
v___jp_4438_:
{
lean_object* v___x_4440_; uint8_t v___x_4441_; 
v___x_4440_ = lean_array_get_size(v_elems_4417_);
v___x_4441_ = lean_nat_dec_lt(v___x_4425_, v___x_4440_);
if (v___x_4441_ == 0)
{
lean_dec_ref(v_elems_4417_);
v_snd_4427_ = v_snd_4439_;
goto v___jp_4426_;
}
else
{
lean_object* v___x_4442_; size_t v___x_4443_; size_t v___x_4444_; lean_object* v___x_4445_; 
v___x_4442_ = lean_box(0);
v___x_4443_ = ((size_t)0ULL);
v___x_4444_ = lean_usize_of_nat(v___x_4440_);
v___x_4445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseInductive_spec__1(v_elems_4417_, v___x_4443_, v___x_4444_, v___x_4442_, v_snd_4439_);
lean_dec_ref(v_elems_4417_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v_snd_4447_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v_snd_4447_ = lean_ctor_get(v_a_4446_, 1);
lean_inc(v_snd_4447_);
lean_dec(v_a_4446_);
v_snd_4427_ = v_snd_4447_;
goto v___jp_4426_;
}
else
{
lean_del_object(v___x_4423_);
lean_dec_ref(v_elems_4421_);
return v___x_4445_;
}
}
}
}
}
else
{
lean_dec(v_val_4420_);
lean_dec_ref(v_elems_4417_);
lean_dec_ref(v_elems_4413_);
lean_dec_ref(v_a_4399_);
goto v___jp_4401_;
}
}
else
{
lean_dec(v___x_4419_);
lean_dec_ref(v_elems_4417_);
lean_dec_ref(v_elems_4413_);
lean_dec_ref(v_a_4399_);
goto v___jp_4401_;
}
}
else
{
lean_dec(v_val_4416_);
lean_dec_ref(v_elems_4413_);
lean_dec_ref(v_a_4399_);
goto v___jp_4404_;
}
}
else
{
lean_dec(v___x_4415_);
lean_dec_ref(v_elems_4413_);
lean_dec_ref(v_a_4399_);
goto v___jp_4404_;
}
}
else
{
lean_dec(v_val_4412_);
lean_dec_ref(v_a_4399_);
goto v___jp_4407_;
}
}
else
{
lean_dec(v___x_4411_);
lean_dec_ref(v_a_4399_);
goto v___jp_4407_;
}
v___jp_4401_:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__1));
v___x_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
return v___x_4403_;
}
v___jp_4404_:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; 
v___x_4405_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__3));
v___x_4406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4405_);
return v___x_4406_;
}
v___jp_4407_:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4408_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___closed__5));
v___x_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4408_);
return v___x_4409_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive___boxed(lean_object* v_data_4457_, lean_object* v_a_4458_, lean_object* v_a_4459_){
_start:
{
lean_object* v_res_4460_; 
v_res_4460_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(v_data_4457_, v_a_4458_);
lean_dec(v_data_4457_);
return v_res_4460_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3(lean_object* v_init_4461_, lean_object* v_x_4462_){
_start:
{
if (lean_obj_tag(v_x_4462_) == 0)
{
lean_object* v_k_4463_; lean_object* v_v_4464_; lean_object* v_l_4465_; lean_object* v_r_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v_k_4463_ = lean_ctor_get(v_x_4462_, 1);
v_v_4464_ = lean_ctor_get(v_x_4462_, 2);
v_l_4465_ = lean_ctor_get(v_x_4462_, 3);
v_r_4466_ = lean_ctor_get(v_x_4462_, 4);
v___x_4467_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3(v_init_4461_, v_r_4466_);
lean_inc(v_v_4464_);
lean_inc(v_k_4463_);
v___x_4468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4468_, 0, v_k_4463_);
lean_ctor_set(v___x_4468_, 1, v_v_4464_);
v___x_4469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
lean_ctor_set(v___x_4469_, 1, v___x_4467_);
v_init_4461_ = v___x_4469_;
v_x_4462_ = v_l_4465_;
goto _start;
}
else
{
return v_init_4461_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3___boxed(lean_object* v_init_4471_, lean_object* v_x_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3(v_init_4471_, v_x_4472_);
lean_dec(v_x_4472_);
return v_res_4473_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(lean_object* v_m_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_buckets_4476_; lean_object* v___x_4477_; uint64_t v___x_4478_; uint64_t v___x_4479_; uint64_t v___x_4480_; uint64_t v_fold_4481_; uint64_t v___x_4482_; uint64_t v___x_4483_; uint64_t v___x_4484_; size_t v___x_4485_; size_t v___x_4486_; size_t v___x_4487_; size_t v___x_4488_; size_t v___x_4489_; lean_object* v___x_4490_; uint8_t v___x_4491_; 
v_buckets_4476_ = lean_ctor_get(v_m_4474_, 1);
v___x_4477_ = lean_array_get_size(v_buckets_4476_);
v___x_4478_ = lean_uint64_of_nat(v_a_4475_);
v___x_4479_ = 32ULL;
v___x_4480_ = lean_uint64_shift_right(v___x_4478_, v___x_4479_);
v_fold_4481_ = lean_uint64_xor(v___x_4478_, v___x_4480_);
v___x_4482_ = 16ULL;
v___x_4483_ = lean_uint64_shift_right(v_fold_4481_, v___x_4482_);
v___x_4484_ = lean_uint64_xor(v_fold_4481_, v___x_4483_);
v___x_4485_ = lean_uint64_to_usize(v___x_4484_);
v___x_4486_ = lean_usize_of_nat(v___x_4477_);
v___x_4487_ = ((size_t)1ULL);
v___x_4488_ = lean_usize_sub(v___x_4486_, v___x_4487_);
v___x_4489_ = lean_usize_land(v___x_4485_, v___x_4488_);
v___x_4490_ = lean_array_uget_borrowed(v_buckets_4476_, v___x_4489_);
v___x_4491_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0_spec__0___redArg(v_a_4475_, v___x_4490_);
return v___x_4491_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg___boxed(lean_object* v_m_4492_, lean_object* v_a_4493_){
_start:
{
uint8_t v_res_4494_; lean_object* v_r_4495_; 
v_res_4494_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_m_4492_, v_a_4493_);
lean_dec(v_a_4493_);
lean_dec_ref(v_m_4492_);
v_r_4495_ = lean_box(v_res_4494_);
return v_r_4495_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(lean_object* v_x_4497_, lean_object* v_x_4498_){
_start:
{
if (lean_obj_tag(v_x_4498_) == 0)
{
return v_x_4497_;
}
else
{
lean_object* v_head_4499_; lean_object* v_tail_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
v_head_4499_ = lean_ctor_get(v_x_4498_, 0);
v_tail_4500_ = lean_ctor_get(v_x_4498_, 1);
v___x_4501_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___closed__0));
v___x_4502_ = lean_string_append(v_x_4497_, v___x_4501_);
v___x_4503_ = lean_string_append(v___x_4502_, v_head_4499_);
v_x_4497_ = v___x_4503_;
v_x_4498_ = v_tail_4500_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1___boxed(lean_object* v_x_4505_, lean_object* v_x_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(v_x_4505_, v_x_4506_);
lean_dec(v_x_4506_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object* v_x_4511_){
_start:
{
if (lean_obj_tag(v_x_4511_) == 0)
{
lean_object* v___x_4512_; 
v___x_4512_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__0));
return v___x_4512_;
}
else
{
lean_object* v_tail_4513_; 
v_tail_4513_ = lean_ctor_get(v_x_4511_, 1);
if (lean_obj_tag(v_tail_4513_) == 0)
{
lean_object* v_head_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v_head_4514_ = lean_ctor_get(v_x_4511_, 0);
v___x_4515_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1));
v___x_4516_ = lean_string_append(v___x_4515_, v_head_4514_);
v___x_4517_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__2));
v___x_4518_ = lean_string_append(v___x_4516_, v___x_4517_);
return v___x_4518_;
}
else
{
lean_object* v_head_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; uint32_t v___x_4523_; lean_object* v___x_4524_; 
v_head_4519_ = lean_ctor_get(v_x_4511_, 0);
v___x_4520_ = ((lean_object*)(l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___closed__1));
v___x_4521_ = lean_string_append(v___x_4520_, v_head_4519_);
v___x_4522_ = l_List_foldl___at___00List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1_spec__1(v___x_4521_, v_tail_4513_);
v___x_4523_ = 93;
v___x_4524_ = lean_string_push(v___x_4522_, v___x_4523_);
return v___x_4524_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1___boxed(lean_object* v_x_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v_x_4525_);
lean_dec(v_x_4525_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(lean_object* v_init_4527_, lean_object* v_x_4528_){
_start:
{
if (lean_obj_tag(v_x_4528_) == 0)
{
lean_object* v_k_4529_; lean_object* v_l_4530_; lean_object* v_r_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
v_k_4529_ = lean_ctor_get(v_x_4528_, 1);
v_l_4530_ = lean_ctor_get(v_x_4528_, 3);
v_r_4531_ = lean_ctor_get(v_x_4528_, 4);
v___x_4532_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v_init_4527_, v_r_4531_);
lean_inc(v_k_4529_);
v___x_4533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4533_, 0, v_k_4529_);
lean_ctor_set(v___x_4533_, 1, v___x_4532_);
v_init_4527_ = v___x_4533_;
v_x_4528_ = v_l_4530_;
goto _start;
}
else
{
return v_init_4527_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0___boxed(lean_object* v_init_4535_, lean_object* v_x_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v_init_4535_, v_x_4536_);
lean_dec(v_x_4536_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(lean_object* v_line_4564_, lean_object* v_a_4565_){
_start:
{
lean_object* v___x_4567_; 
v___x_4567_ = l_Lean_Json_parse(v_line_4564_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4578_; 
lean_dec_ref(v_a_4565_);
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4570_ = v___x_4567_;
v_isShared_4571_ = v_isSharedCheck_4578_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4567_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4578_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4575_; 
v___x_4572_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__0));
v___x_4573_ = lean_string_append(v___x_4572_, v_a_4568_);
lean_dec(v_a_4568_);
if (v_isShared_4571_ == 0)
{
lean_ctor_set_tag(v___x_4570_, 18);
lean_ctor_set(v___x_4570_, 0, v___x_4573_);
v___x_4575_ = v___x_4570_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4573_);
v___x_4575_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4576_; 
v___x_4576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4575_);
return v___x_4576_;
}
}
}
else
{
lean_object* v_a_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_5708_; 
v_a_4579_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_5708_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_5708_ == 0)
{
v___x_4581_ = v___x_4567_;
v_isShared_4582_ = v_isSharedCheck_5708_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_a_4579_);
lean_dec(v___x_4567_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_5708_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
if (lean_obj_tag(v_a_4579_) == 5)
{
lean_object* v_kvPairs_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_5703_; 
v_kvPairs_4583_ = lean_ctor_get(v_a_4579_, 0);
v_isSharedCheck_5703_ = !lean_is_exclusive(v_a_4579_);
if (v_isSharedCheck_5703_ == 0)
{
v___x_4585_ = v_a_4579_;
v_isShared_4586_ = v_isSharedCheck_5703_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_kvPairs_4583_);
lean_dec(v_a_4579_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_5703_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v_fst_4600_; lean_object* v_snd_4601_; lean_object* v_tail_4602_; lean_object* v_head_5655_; lean_object* v_tail_5656_; lean_object* v___x_5659_; lean_object* v___x_5660_; 
v___x_5659_ = lean_box(0);
v___x_5660_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__3(v___x_5659_, v_kvPairs_4583_);
if (lean_obj_tag(v___x_5660_) == 1)
{
lean_object* v_tail_5661_; 
v_tail_5661_ = lean_ctor_get(v___x_5660_, 1);
lean_inc(v_tail_5661_);
if (lean_obj_tag(v_tail_5661_) == 1)
{
lean_object* v_head_5662_; lean_object* v_head_5663_; lean_object* v_tail_5664_; lean_object* v_fst_5665_; lean_object* v_snd_5666_; lean_object* v___x_5667_; uint8_t v___x_5668_; 
v_head_5662_ = lean_ctor_get(v_tail_5661_, 0);
v_head_5663_ = lean_ctor_get(v___x_5660_, 0);
lean_inc(v_head_5663_);
lean_dec_ref_known(v___x_5660_, 2);
v_tail_5664_ = lean_ctor_get(v_tail_5661_, 1);
v_fst_5665_ = lean_ctor_get(v_head_5662_, 0);
v_snd_5666_ = lean_ctor_get(v_head_5662_, 1);
v___x_5667_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1));
v___x_5668_ = lean_string_dec_eq(v_fst_5665_, v___x_5667_);
if (v___x_5668_ == 0)
{
lean_object* v___x_5669_; uint8_t v___x_5670_; 
v___x_5669_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3));
v___x_5670_ = lean_string_dec_eq(v_fst_5665_, v___x_5669_);
if (v___x_5670_ == 0)
{
lean_object* v___x_5671_; uint8_t v___x_5672_; 
v___x_5671_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2));
v___x_5672_ = lean_string_dec_eq(v_fst_5665_, v___x_5671_);
if (v___x_5672_ == 0)
{
v_head_5655_ = v_head_5663_;
v_tail_5656_ = v_tail_5661_;
goto v___jp_5654_;
}
else
{
if (lean_obj_tag(v_tail_5664_) == 0)
{
lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5679_; 
lean_inc(v_tail_5664_);
lean_inc(v_snd_5666_);
v_isSharedCheck_5679_ = !lean_is_exclusive(v_tail_5661_);
if (v_isSharedCheck_5679_ == 0)
{
lean_object* v_unused_5680_; lean_object* v_unused_5681_; 
v_unused_5680_ = lean_ctor_get(v_tail_5661_, 1);
lean_dec(v_unused_5680_);
v_unused_5681_ = lean_ctor_get(v_tail_5661_, 0);
lean_dec(v_unused_5681_);
v___x_5674_ = v_tail_5661_;
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
else
{
lean_dec(v_tail_5661_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___x_5677_; 
if (v_isShared_5675_ == 0)
{
lean_ctor_set(v___x_5674_, 0, v_head_5663_);
v___x_5677_ = v___x_5674_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_head_5663_);
lean_ctor_set(v_reuseFailAlloc_5678_, 1, v_tail_5664_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
v_fst_4600_ = v___x_5671_;
v_snd_4601_ = v_snd_5666_;
v_tail_4602_ = v___x_5677_;
goto v___jp_4599_;
}
}
}
else
{
v_head_5655_ = v_head_5663_;
v_tail_5656_ = v_tail_5661_;
goto v___jp_5654_;
}
}
}
else
{
if (lean_obj_tag(v_tail_5664_) == 0)
{
lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5688_; 
lean_inc(v_tail_5664_);
lean_inc(v_snd_5666_);
v_isSharedCheck_5688_ = !lean_is_exclusive(v_tail_5661_);
if (v_isSharedCheck_5688_ == 0)
{
lean_object* v_unused_5689_; lean_object* v_unused_5690_; 
v_unused_5689_ = lean_ctor_get(v_tail_5661_, 1);
lean_dec(v_unused_5689_);
v_unused_5690_ = lean_ctor_get(v_tail_5661_, 0);
lean_dec(v_unused_5690_);
v___x_5683_ = v_tail_5661_;
v_isShared_5684_ = v_isSharedCheck_5688_;
goto v_resetjp_5682_;
}
else
{
lean_dec(v_tail_5661_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5688_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
lean_object* v___x_5686_; 
if (v_isShared_5684_ == 0)
{
lean_ctor_set(v___x_5683_, 0, v_head_5663_);
v___x_5686_ = v___x_5683_;
goto v_reusejp_5685_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v_head_5663_);
lean_ctor_set(v_reuseFailAlloc_5687_, 1, v_tail_5664_);
v___x_5686_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5685_;
}
v_reusejp_5685_:
{
v_fst_4600_ = v___x_5669_;
v_snd_4601_ = v_snd_5666_;
v_tail_4602_ = v___x_5686_;
goto v___jp_4599_;
}
}
}
else
{
v_head_5655_ = v_head_5663_;
v_tail_5656_ = v_tail_5661_;
goto v___jp_5654_;
}
}
}
else
{
if (lean_obj_tag(v_tail_5664_) == 0)
{
lean_object* v___x_5692_; uint8_t v_isShared_5693_; uint8_t v_isSharedCheck_5697_; 
lean_inc(v_tail_5664_);
lean_inc(v_snd_5666_);
v_isSharedCheck_5697_ = !lean_is_exclusive(v_tail_5661_);
if (v_isSharedCheck_5697_ == 0)
{
lean_object* v_unused_5698_; lean_object* v_unused_5699_; 
v_unused_5698_ = lean_ctor_get(v_tail_5661_, 1);
lean_dec(v_unused_5698_);
v_unused_5699_ = lean_ctor_get(v_tail_5661_, 0);
lean_dec(v_unused_5699_);
v___x_5692_ = v_tail_5661_;
v_isShared_5693_ = v_isSharedCheck_5697_;
goto v_resetjp_5691_;
}
else
{
lean_dec(v_tail_5661_);
v___x_5692_ = lean_box(0);
v_isShared_5693_ = v_isSharedCheck_5697_;
goto v_resetjp_5691_;
}
v_resetjp_5691_:
{
lean_object* v___x_5695_; 
if (v_isShared_5693_ == 0)
{
lean_ctor_set(v___x_5692_, 0, v_head_5663_);
v___x_5695_ = v___x_5692_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5696_; 
v_reuseFailAlloc_5696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5696_, 0, v_head_5663_);
lean_ctor_set(v_reuseFailAlloc_5696_, 1, v_tail_5664_);
v___x_5695_ = v_reuseFailAlloc_5696_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
v_fst_4600_ = v___x_5667_;
v_snd_4601_ = v_snd_5666_;
v_tail_4602_ = v___x_5695_;
goto v___jp_4599_;
}
}
}
else
{
v_head_5655_ = v_head_5663_;
v_tail_5656_ = v_tail_5661_;
goto v___jp_5654_;
}
}
}
else
{
lean_object* v_head_5700_; 
v_head_5700_ = lean_ctor_get(v___x_5660_, 0);
lean_inc(v_head_5700_);
lean_dec_ref_known(v___x_5660_, 2);
v_head_5655_ = v_head_5700_;
v_tail_5656_ = v_tail_5661_;
goto v___jp_5654_;
}
}
else
{
if (lean_obj_tag(v___x_5660_) == 1)
{
lean_object* v_head_5701_; lean_object* v_tail_5702_; 
v_head_5701_ = lean_ctor_get(v___x_5660_, 0);
lean_inc(v_head_5701_);
v_tail_5702_ = lean_ctor_get(v___x_5660_, 1);
lean_inc(v_tail_5702_);
lean_dec_ref_known(v___x_5660_, 2);
v_head_5655_ = v_head_5701_;
v_tail_5656_ = v_tail_5702_;
goto v___jp_5654_;
}
else
{
lean_dec(v___x_5660_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
v___jp_4587_:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4594_; 
v___x_4588_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__0));
v___x_4589_ = lean_box(0);
v___x_4590_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__0(v___x_4589_, v_kvPairs_4583_);
lean_dec(v_kvPairs_4583_);
v___x_4591_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v___x_4590_);
lean_dec(v___x_4590_);
v___x_4592_ = lean_string_append(v___x_4588_, v___x_4591_);
lean_dec_ref(v___x_4591_);
if (v_isShared_4586_ == 0)
{
lean_ctor_set_tag(v___x_4585_, 18);
lean_ctor_set(v___x_4585_, 0, v___x_4592_);
v___x_4594_ = v___x_4585_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v___x_4592_);
v___x_4594_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
lean_object* v___x_4596_; 
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v___x_4594_);
v___x_4596_ = v___x_4581_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v___x_4594_);
v___x_4596_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
return v___x_4596_;
}
}
}
v___jp_4599_:
{
lean_object* v___x_4603_; uint8_t v___x_4604_; 
v___x_4603_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__1));
v___x_4604_ = lean_string_dec_eq(v_fst_4600_, v___x_4603_);
if (v___x_4604_ == 0)
{
lean_object* v___x_4605_; uint8_t v___x_4606_; 
v___x_4605_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__2));
v___x_4606_ = lean_string_dec_eq(v_fst_4600_, v___x_4605_);
if (v___x_4606_ == 0)
{
lean_object* v___x_4607_; uint8_t v___x_4608_; 
v___x_4607_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__3));
v___x_4608_ = lean_string_dec_eq(v_fst_4600_, v___x_4607_);
if (v___x_4608_ == 0)
{
lean_object* v___x_4609_; uint8_t v___x_4610_; 
v___x_4609_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__4));
v___x_4610_ = lean_string_dec_eq(v_fst_4600_, v___x_4609_);
if (v___x_4610_ == 0)
{
lean_object* v___x_4611_; uint8_t v___x_4612_; 
v___x_4611_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__5));
v___x_4612_ = lean_string_dec_eq(v_fst_4600_, v___x_4611_);
if (v___x_4612_ == 0)
{
lean_object* v___x_4613_; uint8_t v___x_4614_; 
v___x_4613_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__6));
v___x_4614_ = lean_string_dec_eq(v_fst_4600_, v___x_4613_);
if (v___x_4614_ == 0)
{
lean_object* v___x_4615_; uint8_t v___x_4616_; 
v___x_4615_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo___closed__9));
v___x_4616_ = lean_string_dec_eq(v_fst_4600_, v___x_4615_);
if (v___x_4616_ == 0)
{
lean_object* v___x_4617_; uint8_t v___x_4618_; 
v___x_4617_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__7));
v___x_4618_ = lean_string_dec_eq(v_fst_4600_, v___x_4617_);
if (v___x_4618_ == 0)
{
lean_object* v___x_4619_; uint8_t v___x_4620_; 
v___x_4619_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__8));
v___x_4620_ = lean_string_dec_eq(v_fst_4600_, v___x_4619_);
if (v___x_4620_ == 0)
{
lean_object* v___x_4621_; uint8_t v___x_4622_; 
v___x_4621_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__9));
v___x_4622_ = lean_string_dec_eq(v_fst_4600_, v___x_4621_);
lean_dec_ref(v_fst_4600_);
if (v___x_4622_ == 0)
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4623_; lean_object* v___x_4624_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4623_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4623_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4624_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseRewrite(v_kvPairs_4623_, v_a_4565_);
lean_dec(v_kvPairs_4623_);
return v___x_4624_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4625_; lean_object* v___x_4626_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4625_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4625_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4626_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseInductive(v_kvPairs_4625_, v_a_4565_);
lean_dec(v_kvPairs_4625_);
return v___x_4626_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4627_; lean_object* v___x_4628_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4627_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4627_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4628_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseQuotInfo(v_kvPairs_4627_, v_a_4565_);
lean_dec(v_kvPairs_4627_);
return v___x_4628_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4629_; lean_object* v___x_4630_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4629_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4629_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4630_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseOpaqueInfo(v_kvPairs_4629_, v_a_4565_);
lean_dec(v_kvPairs_4629_);
return v___x_4630_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4631_; lean_object* v___x_4632_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4631_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4631_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4632_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseThmInfo(v_kvPairs_4631_, v_a_4565_);
lean_dec(v_kvPairs_4631_);
return v___x_4632_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4633_; lean_object* v___x_4634_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4633_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4633_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4634_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseDefnInfo(v_kvPairs_4633_, v_a_4565_);
lean_dec(v_kvPairs_4633_);
return v___x_4634_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 5)
{
if (lean_obj_tag(v_tail_4602_) == 0)
{
lean_object* v_kvPairs_4635_; lean_object* v___x_4636_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v_kvPairs_4635_ = lean_ctor_get(v_snd_4601_, 0);
lean_inc(v_kvPairs_4635_);
lean_dec_ref_known(v_snd_4601_, 1);
v___x_4636_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo(v_kvPairs_4635_, v_a_4565_);
lean_dec(v_kvPairs_4635_);
return v___x_4636_;
}
else
{
lean_dec_ref_known(v_snd_4601_, 1);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 2)
{
lean_object* v_n_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_5279_; 
v_n_4637_ = lean_ctor_get(v_snd_4601_, 0);
v_isSharedCheck_5279_ = !lean_is_exclusive(v_snd_4601_);
if (v_isSharedCheck_5279_ == 0)
{
v___x_4639_ = v_snd_4601_;
v_isShared_4640_ = v_isSharedCheck_5279_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_n_4637_);
lean_dec(v_snd_4601_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_5279_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v_mantissa_4641_; lean_object* v_exponent_4642_; lean_object* v_natZero_4643_; lean_object* v_intZero_4644_; uint8_t v_isNeg_4645_; 
v_mantissa_4641_ = lean_ctor_get(v_n_4637_, 0);
lean_inc(v_mantissa_4641_);
v_exponent_4642_ = lean_ctor_get(v_n_4637_, 1);
lean_inc(v_exponent_4642_);
lean_dec_ref(v_n_4637_);
v_natZero_4643_ = lean_unsigned_to_nat(0u);
v_intZero_4644_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_4645_ = lean_int_dec_lt(v_mantissa_4641_, v_intZero_4644_);
if (v_isNeg_4645_ == 0)
{
uint8_t v___x_4646_; 
v___x_4646_ = lean_nat_dec_eq(v_exponent_4642_, v_natZero_4643_);
lean_dec(v_exponent_4642_);
if (v___x_4646_ == 0)
{
lean_dec(v_mantissa_4641_);
lean_del_object(v___x_4639_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_4602_) == 1)
{
lean_object* v_head_4647_; lean_object* v_tail_4648_; lean_object* v_fst_4649_; lean_object* v_snd_4650_; lean_object* v_a_4651_; lean_object* v___x_4652_; uint8_t v___x_4653_; 
v_head_4647_ = lean_ctor_get(v_tail_4602_, 0);
lean_inc(v_head_4647_);
v_tail_4648_ = lean_ctor_get(v_tail_4602_, 1);
lean_inc(v_tail_4648_);
lean_dec_ref_known(v_tail_4602_, 2);
v_fst_4649_ = lean_ctor_get(v_head_4647_, 0);
lean_inc(v_fst_4649_);
v_snd_4650_ = lean_ctor_get(v_head_4647_, 1);
lean_inc(v_snd_4650_);
lean_dec(v_head_4647_);
v_a_4651_ = lean_nat_abs(v_mantissa_4641_);
lean_dec(v_mantissa_4641_);
v___x_4652_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__10));
v___x_4653_ = lean_string_dec_eq(v_fst_4649_, v___x_4652_);
if (v___x_4653_ == 0)
{
lean_object* v___x_4654_; uint8_t v___x_4655_; 
v___x_4654_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__11));
v___x_4655_ = lean_string_dec_eq(v_fst_4649_, v___x_4654_);
if (v___x_4655_ == 0)
{
lean_object* v___x_4656_; uint8_t v___x_4657_; 
v___x_4656_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__12));
v___x_4657_ = lean_string_dec_eq(v_fst_4649_, v___x_4656_);
if (v___x_4657_ == 0)
{
lean_object* v___x_4658_; uint8_t v___x_4659_; 
v___x_4658_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__13));
v___x_4659_ = lean_string_dec_eq(v_fst_4649_, v___x_4658_);
if (v___x_4659_ == 0)
{
lean_object* v___x_4660_; uint8_t v___x_4661_; 
v___x_4660_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__14));
v___x_4661_ = lean_string_dec_eq(v_fst_4649_, v___x_4660_);
if (v___x_4661_ == 0)
{
lean_object* v___x_4662_; uint8_t v___x_4663_; 
v___x_4662_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__15));
v___x_4663_ = lean_string_dec_eq(v_fst_4649_, v___x_4662_);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; uint8_t v___x_4665_; 
v___x_4664_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__16));
v___x_4665_ = lean_string_dec_eq(v_fst_4649_, v___x_4664_);
if (v___x_4665_ == 0)
{
lean_object* v___x_4666_; uint8_t v___x_4667_; 
v___x_4666_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__17));
v___x_4667_ = lean_string_dec_eq(v_fst_4649_, v___x_4666_);
if (v___x_4667_ == 0)
{
lean_object* v___x_4668_; uint8_t v___x_4669_; 
v___x_4668_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__18));
v___x_4669_ = lean_string_dec_eq(v_fst_4649_, v___x_4668_);
if (v___x_4669_ == 0)
{
lean_object* v___x_4670_; uint8_t v___x_4671_; 
v___x_4670_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__19));
v___x_4671_ = lean_string_dec_eq(v_fst_4649_, v___x_4670_);
if (v___x_4671_ == 0)
{
lean_object* v___x_4672_; uint8_t v___x_4673_; 
v___x_4672_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__20));
v___x_4673_ = lean_string_dec_eq(v_fst_4649_, v___x_4672_);
lean_dec(v_fst_4649_);
if (v___x_4673_ == 0)
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4674_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4674_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprMdata(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; lean_object* v___x_4677_; uint8_t v_isShared_4678_; uint8_t v_isSharedCheck_4720_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4677_ = v___x_4674_;
v_isShared_4678_ = v_isSharedCheck_4720_;
goto v_resetjp_4676_;
}
else
{
lean_inc(v_a_4675_);
lean_dec(v___x_4674_);
v___x_4677_ = lean_box(0);
v_isShared_4678_ = v_isSharedCheck_4720_;
goto v_resetjp_4676_;
}
v_resetjp_4676_:
{
lean_object* v_snd_4679_; lean_object* v_fst_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4719_; 
v_snd_4679_ = lean_ctor_get(v_a_4675_, 1);
v_fst_4680_ = lean_ctor_get(v_a_4675_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_a_4675_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4682_ = v_a_4675_;
v_isShared_4683_ = v_isSharedCheck_4719_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_snd_4679_);
lean_inc(v_fst_4680_);
lean_dec(v_a_4675_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4719_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v_stream_4684_; lean_object* v_nameMap_4685_; lean_object* v_levelMap_4686_; lean_object* v_exprMap_4687_; lean_object* v_recursorRuleMap_4688_; lean_object* v_constMap_4689_; lean_object* v_constOrder_4690_; lean_object* v_rewrites_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4718_; 
v_stream_4684_ = lean_ctor_get(v_snd_4679_, 0);
v_nameMap_4685_ = lean_ctor_get(v_snd_4679_, 1);
v_levelMap_4686_ = lean_ctor_get(v_snd_4679_, 2);
v_exprMap_4687_ = lean_ctor_get(v_snd_4679_, 3);
v_recursorRuleMap_4688_ = lean_ctor_get(v_snd_4679_, 4);
v_constMap_4689_ = lean_ctor_get(v_snd_4679_, 5);
v_constOrder_4690_ = lean_ctor_get(v_snd_4679_, 6);
v_rewrites_4691_ = lean_ctor_get(v_snd_4679_, 7);
v_isSharedCheck_4718_ = !lean_is_exclusive(v_snd_4679_);
if (v_isSharedCheck_4718_ == 0)
{
v___x_4693_ = v_snd_4679_;
v_isShared_4694_ = v_isSharedCheck_4718_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_rewrites_4691_);
lean_inc(v_constOrder_4690_);
lean_inc(v_constMap_4689_);
lean_inc(v_recursorRuleMap_4688_);
lean_inc(v_exprMap_4687_);
lean_inc(v_levelMap_4686_);
lean_inc(v_nameMap_4685_);
lean_inc(v_stream_4684_);
lean_dec(v_snd_4679_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4718_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
uint8_t v___x_4695_; 
v___x_4695_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4687_, v_a_4651_);
if (v___x_4695_ == 0)
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4699_; 
lean_del_object(v___x_4639_);
v___x_4696_ = lean_box(0);
v___x_4697_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4687_, v_a_4651_, v_fst_4680_);
if (v_isShared_4694_ == 0)
{
lean_ctor_set(v___x_4693_, 3, v___x_4697_);
v___x_4699_ = v___x_4693_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_stream_4684_);
lean_ctor_set(v_reuseFailAlloc_4706_, 1, v_nameMap_4685_);
lean_ctor_set(v_reuseFailAlloc_4706_, 2, v_levelMap_4686_);
lean_ctor_set(v_reuseFailAlloc_4706_, 3, v___x_4697_);
lean_ctor_set(v_reuseFailAlloc_4706_, 4, v_recursorRuleMap_4688_);
lean_ctor_set(v_reuseFailAlloc_4706_, 5, v_constMap_4689_);
lean_ctor_set(v_reuseFailAlloc_4706_, 6, v_constOrder_4690_);
lean_ctor_set(v_reuseFailAlloc_4706_, 7, v_rewrites_4691_);
v___x_4699_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
lean_object* v___x_4701_; 
if (v_isShared_4683_ == 0)
{
lean_ctor_set(v___x_4682_, 1, v___x_4699_);
lean_ctor_set(v___x_4682_, 0, v___x_4696_);
v___x_4701_ = v___x_4682_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4705_; 
v_reuseFailAlloc_4705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4705_, 0, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4705_, 1, v___x_4699_);
v___x_4701_ = v_reuseFailAlloc_4705_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
lean_object* v___x_4703_; 
if (v_isShared_4678_ == 0)
{
lean_ctor_set(v___x_4677_, 0, v___x_4701_);
v___x_4703_ = v___x_4677_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v___x_4701_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
else
{
lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4713_; 
lean_del_object(v___x_4693_);
lean_dec_ref(v_rewrites_4691_);
lean_dec_ref(v_constOrder_4690_);
lean_dec_ref(v_constMap_4689_);
lean_dec_ref(v_recursorRuleMap_4688_);
lean_dec_ref(v_exprMap_4687_);
lean_dec_ref(v_levelMap_4686_);
lean_dec_ref(v_nameMap_4685_);
lean_dec_ref(v_stream_4684_);
lean_del_object(v___x_4682_);
lean_dec(v_fst_4680_);
v___x_4707_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4708_ = l_Nat_reprFast(v_a_4651_);
v___x_4709_ = lean_string_append(v___x_4707_, v___x_4708_);
lean_dec_ref(v___x_4708_);
v___x_4710_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4711_ = lean_string_append(v___x_4709_, v___x_4710_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4711_);
v___x_4713_ = v___x_4639_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v___x_4711_);
v___x_4713_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
lean_object* v___x_4715_; 
if (v_isShared_4678_ == 0)
{
lean_ctor_set_tag(v___x_4677_, 1);
lean_ctor_set(v___x_4677_, 0, v___x_4713_);
v___x_4715_ = v___x_4677_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v___x_4713_);
v___x_4715_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
return v___x_4715_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4721_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4674_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4674_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4729_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4729_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprStrLit(v_snd_4650_, v_a_4565_);
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_object* v_a_4730_; lean_object* v___x_4732_; uint8_t v_isShared_4733_; uint8_t v_isSharedCheck_4775_; 
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4732_ = v___x_4729_;
v_isShared_4733_ = v_isSharedCheck_4775_;
goto v_resetjp_4731_;
}
else
{
lean_inc(v_a_4730_);
lean_dec(v___x_4729_);
v___x_4732_ = lean_box(0);
v_isShared_4733_ = v_isSharedCheck_4775_;
goto v_resetjp_4731_;
}
v_resetjp_4731_:
{
lean_object* v_snd_4734_; lean_object* v_fst_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4774_; 
v_snd_4734_ = lean_ctor_get(v_a_4730_, 1);
v_fst_4735_ = lean_ctor_get(v_a_4730_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v_a_4730_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4737_ = v_a_4730_;
v_isShared_4738_ = v_isSharedCheck_4774_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_snd_4734_);
lean_inc(v_fst_4735_);
lean_dec(v_a_4730_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4774_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v_stream_4739_; lean_object* v_nameMap_4740_; lean_object* v_levelMap_4741_; lean_object* v_exprMap_4742_; lean_object* v_recursorRuleMap_4743_; lean_object* v_constMap_4744_; lean_object* v_constOrder_4745_; lean_object* v_rewrites_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4773_; 
v_stream_4739_ = lean_ctor_get(v_snd_4734_, 0);
v_nameMap_4740_ = lean_ctor_get(v_snd_4734_, 1);
v_levelMap_4741_ = lean_ctor_get(v_snd_4734_, 2);
v_exprMap_4742_ = lean_ctor_get(v_snd_4734_, 3);
v_recursorRuleMap_4743_ = lean_ctor_get(v_snd_4734_, 4);
v_constMap_4744_ = lean_ctor_get(v_snd_4734_, 5);
v_constOrder_4745_ = lean_ctor_get(v_snd_4734_, 6);
v_rewrites_4746_ = lean_ctor_get(v_snd_4734_, 7);
v_isSharedCheck_4773_ = !lean_is_exclusive(v_snd_4734_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4748_ = v_snd_4734_;
v_isShared_4749_ = v_isSharedCheck_4773_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_rewrites_4746_);
lean_inc(v_constOrder_4745_);
lean_inc(v_constMap_4744_);
lean_inc(v_recursorRuleMap_4743_);
lean_inc(v_exprMap_4742_);
lean_inc(v_levelMap_4741_);
lean_inc(v_nameMap_4740_);
lean_inc(v_stream_4739_);
lean_dec(v_snd_4734_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4773_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
uint8_t v___x_4750_; 
v___x_4750_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4742_, v_a_4651_);
if (v___x_4750_ == 0)
{
lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4754_; 
lean_del_object(v___x_4639_);
v___x_4751_ = lean_box(0);
v___x_4752_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4742_, v_a_4651_, v_fst_4735_);
if (v_isShared_4749_ == 0)
{
lean_ctor_set(v___x_4748_, 3, v___x_4752_);
v___x_4754_ = v___x_4748_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_stream_4739_);
lean_ctor_set(v_reuseFailAlloc_4761_, 1, v_nameMap_4740_);
lean_ctor_set(v_reuseFailAlloc_4761_, 2, v_levelMap_4741_);
lean_ctor_set(v_reuseFailAlloc_4761_, 3, v___x_4752_);
lean_ctor_set(v_reuseFailAlloc_4761_, 4, v_recursorRuleMap_4743_);
lean_ctor_set(v_reuseFailAlloc_4761_, 5, v_constMap_4744_);
lean_ctor_set(v_reuseFailAlloc_4761_, 6, v_constOrder_4745_);
lean_ctor_set(v_reuseFailAlloc_4761_, 7, v_rewrites_4746_);
v___x_4754_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
lean_object* v___x_4756_; 
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 1, v___x_4754_);
lean_ctor_set(v___x_4737_, 0, v___x_4751_);
v___x_4756_ = v___x_4737_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4751_);
lean_ctor_set(v_reuseFailAlloc_4760_, 1, v___x_4754_);
v___x_4756_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
lean_object* v___x_4758_; 
if (v_isShared_4733_ == 0)
{
lean_ctor_set(v___x_4732_, 0, v___x_4756_);
v___x_4758_ = v___x_4732_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v___x_4756_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
}
else
{
lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4768_; 
lean_del_object(v___x_4748_);
lean_dec_ref(v_rewrites_4746_);
lean_dec_ref(v_constOrder_4745_);
lean_dec_ref(v_constMap_4744_);
lean_dec_ref(v_recursorRuleMap_4743_);
lean_dec_ref(v_exprMap_4742_);
lean_dec_ref(v_levelMap_4741_);
lean_dec_ref(v_nameMap_4740_);
lean_dec_ref(v_stream_4739_);
lean_del_object(v___x_4737_);
lean_dec(v_fst_4735_);
v___x_4762_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4763_ = l_Nat_reprFast(v_a_4651_);
v___x_4764_ = lean_string_append(v___x_4762_, v___x_4763_);
lean_dec_ref(v___x_4763_);
v___x_4765_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4766_ = lean_string_append(v___x_4764_, v___x_4765_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4766_);
v___x_4768_ = v___x_4639_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v___x_4766_);
v___x_4768_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4770_; 
if (v_isShared_4733_ == 0)
{
lean_ctor_set_tag(v___x_4732_, 1);
lean_ctor_set(v___x_4732_, 0, v___x_4768_);
v___x_4770_ = v___x_4732_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4768_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4776_; lean_object* v___x_4778_; uint8_t v_isShared_4779_; uint8_t v_isSharedCheck_4783_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4776_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4778_ = v___x_4729_;
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
else
{
lean_inc(v_a_4776_);
lean_dec(v___x_4729_);
v___x_4778_ = lean_box(0);
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
v_resetjp_4777_:
{
lean_object* v___x_4781_; 
if (v_isShared_4779_ == 0)
{
v___x_4781_ = v___x_4778_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_a_4776_);
v___x_4781_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
return v___x_4781_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4784_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4784_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprNatLit(v_snd_4650_, v_a_4565_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4830_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4787_ = v___x_4784_;
v_isShared_4788_ = v_isSharedCheck_4830_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v___x_4784_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4830_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v_snd_4789_; lean_object* v_fst_4790_; lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4829_; 
v_snd_4789_ = lean_ctor_get(v_a_4785_, 1);
v_fst_4790_ = lean_ctor_get(v_a_4785_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v_a_4785_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4792_ = v_a_4785_;
v_isShared_4793_ = v_isSharedCheck_4829_;
goto v_resetjp_4791_;
}
else
{
lean_inc(v_snd_4789_);
lean_inc(v_fst_4790_);
lean_dec(v_a_4785_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4829_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
lean_object* v_stream_4794_; lean_object* v_nameMap_4795_; lean_object* v_levelMap_4796_; lean_object* v_exprMap_4797_; lean_object* v_recursorRuleMap_4798_; lean_object* v_constMap_4799_; lean_object* v_constOrder_4800_; lean_object* v_rewrites_4801_; lean_object* v___x_4803_; uint8_t v_isShared_4804_; uint8_t v_isSharedCheck_4828_; 
v_stream_4794_ = lean_ctor_get(v_snd_4789_, 0);
v_nameMap_4795_ = lean_ctor_get(v_snd_4789_, 1);
v_levelMap_4796_ = lean_ctor_get(v_snd_4789_, 2);
v_exprMap_4797_ = lean_ctor_get(v_snd_4789_, 3);
v_recursorRuleMap_4798_ = lean_ctor_get(v_snd_4789_, 4);
v_constMap_4799_ = lean_ctor_get(v_snd_4789_, 5);
v_constOrder_4800_ = lean_ctor_get(v_snd_4789_, 6);
v_rewrites_4801_ = lean_ctor_get(v_snd_4789_, 7);
v_isSharedCheck_4828_ = !lean_is_exclusive(v_snd_4789_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4803_ = v_snd_4789_;
v_isShared_4804_ = v_isSharedCheck_4828_;
goto v_resetjp_4802_;
}
else
{
lean_inc(v_rewrites_4801_);
lean_inc(v_constOrder_4800_);
lean_inc(v_constMap_4799_);
lean_inc(v_recursorRuleMap_4798_);
lean_inc(v_exprMap_4797_);
lean_inc(v_levelMap_4796_);
lean_inc(v_nameMap_4795_);
lean_inc(v_stream_4794_);
lean_dec(v_snd_4789_);
v___x_4803_ = lean_box(0);
v_isShared_4804_ = v_isSharedCheck_4828_;
goto v_resetjp_4802_;
}
v_resetjp_4802_:
{
uint8_t v___x_4805_; 
v___x_4805_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4797_, v_a_4651_);
if (v___x_4805_ == 0)
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4809_; 
lean_del_object(v___x_4639_);
v___x_4806_ = lean_box(0);
v___x_4807_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4797_, v_a_4651_, v_fst_4790_);
if (v_isShared_4804_ == 0)
{
lean_ctor_set(v___x_4803_, 3, v___x_4807_);
v___x_4809_ = v___x_4803_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v_stream_4794_);
lean_ctor_set(v_reuseFailAlloc_4816_, 1, v_nameMap_4795_);
lean_ctor_set(v_reuseFailAlloc_4816_, 2, v_levelMap_4796_);
lean_ctor_set(v_reuseFailAlloc_4816_, 3, v___x_4807_);
lean_ctor_set(v_reuseFailAlloc_4816_, 4, v_recursorRuleMap_4798_);
lean_ctor_set(v_reuseFailAlloc_4816_, 5, v_constMap_4799_);
lean_ctor_set(v_reuseFailAlloc_4816_, 6, v_constOrder_4800_);
lean_ctor_set(v_reuseFailAlloc_4816_, 7, v_rewrites_4801_);
v___x_4809_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
lean_object* v___x_4811_; 
if (v_isShared_4793_ == 0)
{
lean_ctor_set(v___x_4792_, 1, v___x_4809_);
lean_ctor_set(v___x_4792_, 0, v___x_4806_);
v___x_4811_ = v___x_4792_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v___x_4806_);
lean_ctor_set(v_reuseFailAlloc_4815_, 1, v___x_4809_);
v___x_4811_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
lean_object* v___x_4813_; 
if (v_isShared_4788_ == 0)
{
lean_ctor_set(v___x_4787_, 0, v___x_4811_);
v___x_4813_ = v___x_4787_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v___x_4811_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
else
{
lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4823_; 
lean_del_object(v___x_4803_);
lean_dec_ref(v_rewrites_4801_);
lean_dec_ref(v_constOrder_4800_);
lean_dec_ref(v_constMap_4799_);
lean_dec_ref(v_recursorRuleMap_4798_);
lean_dec_ref(v_exprMap_4797_);
lean_dec_ref(v_levelMap_4796_);
lean_dec_ref(v_nameMap_4795_);
lean_dec_ref(v_stream_4794_);
lean_del_object(v___x_4792_);
lean_dec(v_fst_4790_);
v___x_4817_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4818_ = l_Nat_reprFast(v_a_4651_);
v___x_4819_ = lean_string_append(v___x_4817_, v___x_4818_);
lean_dec_ref(v___x_4818_);
v___x_4820_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4821_ = lean_string_append(v___x_4819_, v___x_4820_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4821_);
v___x_4823_ = v___x_4639_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v___x_4821_);
v___x_4823_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
lean_object* v___x_4825_; 
if (v_isShared_4788_ == 0)
{
lean_ctor_set_tag(v___x_4787_, 1);
lean_ctor_set(v___x_4787_, 0, v___x_4823_);
v___x_4825_ = v___x_4787_;
goto v_reusejp_4824_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v___x_4823_);
v___x_4825_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4824_;
}
v_reusejp_4824_:
{
return v___x_4825_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4831_; lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_4838_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4831_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4838_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4838_ == 0)
{
v___x_4833_ = v___x_4784_;
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
else
{
lean_inc(v_a_4831_);
lean_dec(v___x_4784_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4836_; 
if (v_isShared_4834_ == 0)
{
v___x_4836_ = v___x_4833_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_a_4831_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4839_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4839_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprProj(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_4839_) == 0)
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4885_; 
v_a_4840_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4842_ = v___x_4839_;
v_isShared_4843_ = v_isSharedCheck_4885_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4839_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4885_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v_snd_4844_; lean_object* v_fst_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4884_; 
v_snd_4844_ = lean_ctor_get(v_a_4840_, 1);
v_fst_4845_ = lean_ctor_get(v_a_4840_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v_a_4840_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4847_ = v_a_4840_;
v_isShared_4848_ = v_isSharedCheck_4884_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_snd_4844_);
lean_inc(v_fst_4845_);
lean_dec(v_a_4840_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4884_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v_stream_4849_; lean_object* v_nameMap_4850_; lean_object* v_levelMap_4851_; lean_object* v_exprMap_4852_; lean_object* v_recursorRuleMap_4853_; lean_object* v_constMap_4854_; lean_object* v_constOrder_4855_; lean_object* v_rewrites_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4883_; 
v_stream_4849_ = lean_ctor_get(v_snd_4844_, 0);
v_nameMap_4850_ = lean_ctor_get(v_snd_4844_, 1);
v_levelMap_4851_ = lean_ctor_get(v_snd_4844_, 2);
v_exprMap_4852_ = lean_ctor_get(v_snd_4844_, 3);
v_recursorRuleMap_4853_ = lean_ctor_get(v_snd_4844_, 4);
v_constMap_4854_ = lean_ctor_get(v_snd_4844_, 5);
v_constOrder_4855_ = lean_ctor_get(v_snd_4844_, 6);
v_rewrites_4856_ = lean_ctor_get(v_snd_4844_, 7);
v_isSharedCheck_4883_ = !lean_is_exclusive(v_snd_4844_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4858_ = v_snd_4844_;
v_isShared_4859_ = v_isSharedCheck_4883_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_rewrites_4856_);
lean_inc(v_constOrder_4855_);
lean_inc(v_constMap_4854_);
lean_inc(v_recursorRuleMap_4853_);
lean_inc(v_exprMap_4852_);
lean_inc(v_levelMap_4851_);
lean_inc(v_nameMap_4850_);
lean_inc(v_stream_4849_);
lean_dec(v_snd_4844_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4883_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
uint8_t v___x_4860_; 
v___x_4860_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4852_, v_a_4651_);
if (v___x_4860_ == 0)
{
lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4864_; 
lean_del_object(v___x_4639_);
v___x_4861_ = lean_box(0);
v___x_4862_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4852_, v_a_4651_, v_fst_4845_);
if (v_isShared_4859_ == 0)
{
lean_ctor_set(v___x_4858_, 3, v___x_4862_);
v___x_4864_ = v___x_4858_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v_stream_4849_);
lean_ctor_set(v_reuseFailAlloc_4871_, 1, v_nameMap_4850_);
lean_ctor_set(v_reuseFailAlloc_4871_, 2, v_levelMap_4851_);
lean_ctor_set(v_reuseFailAlloc_4871_, 3, v___x_4862_);
lean_ctor_set(v_reuseFailAlloc_4871_, 4, v_recursorRuleMap_4853_);
lean_ctor_set(v_reuseFailAlloc_4871_, 5, v_constMap_4854_);
lean_ctor_set(v_reuseFailAlloc_4871_, 6, v_constOrder_4855_);
lean_ctor_set(v_reuseFailAlloc_4871_, 7, v_rewrites_4856_);
v___x_4864_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
lean_object* v___x_4866_; 
if (v_isShared_4848_ == 0)
{
lean_ctor_set(v___x_4847_, 1, v___x_4864_);
lean_ctor_set(v___x_4847_, 0, v___x_4861_);
v___x_4866_ = v___x_4847_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v___x_4861_);
lean_ctor_set(v_reuseFailAlloc_4870_, 1, v___x_4864_);
v___x_4866_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
lean_object* v___x_4868_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 0, v___x_4866_);
v___x_4868_ = v___x_4842_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v___x_4866_);
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
lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4878_; 
lean_del_object(v___x_4858_);
lean_dec_ref(v_rewrites_4856_);
lean_dec_ref(v_constOrder_4855_);
lean_dec_ref(v_constMap_4854_);
lean_dec_ref(v_recursorRuleMap_4853_);
lean_dec_ref(v_exprMap_4852_);
lean_dec_ref(v_levelMap_4851_);
lean_dec_ref(v_nameMap_4850_);
lean_dec_ref(v_stream_4849_);
lean_del_object(v___x_4847_);
lean_dec(v_fst_4845_);
v___x_4872_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4873_ = l_Nat_reprFast(v_a_4651_);
v___x_4874_ = lean_string_append(v___x_4872_, v___x_4873_);
lean_dec_ref(v___x_4873_);
v___x_4875_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4876_ = lean_string_append(v___x_4874_, v___x_4875_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4876_);
v___x_4878_ = v___x_4639_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4882_; 
v_reuseFailAlloc_4882_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4882_, 0, v___x_4876_);
v___x_4878_ = v_reuseFailAlloc_4882_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
lean_object* v___x_4880_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set_tag(v___x_4842_, 1);
lean_ctor_set(v___x_4842_, 0, v___x_4878_);
v___x_4880_ = v___x_4842_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v___x_4878_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4886_; lean_object* v___x_4888_; uint8_t v_isShared_4889_; uint8_t v_isSharedCheck_4893_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4886_ = lean_ctor_get(v___x_4839_, 0);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___x_4839_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4888_ = v___x_4839_;
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
else
{
lean_inc(v_a_4886_);
lean_dec(v___x_4839_);
v___x_4888_ = lean_box(0);
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
v_resetjp_4887_:
{
lean_object* v___x_4891_; 
if (v_isShared_4889_ == 0)
{
v___x_4891_ = v___x_4888_;
goto v_reusejp_4890_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_a_4886_);
v___x_4891_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4890_;
}
v_reusejp_4890_:
{
return v___x_4891_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4894_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4894_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLetE(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_4894_) == 0)
{
lean_object* v_a_4895_; lean_object* v___x_4897_; uint8_t v_isShared_4898_; uint8_t v_isSharedCheck_4940_; 
v_a_4895_ = lean_ctor_get(v___x_4894_, 0);
v_isSharedCheck_4940_ = !lean_is_exclusive(v___x_4894_);
if (v_isSharedCheck_4940_ == 0)
{
v___x_4897_ = v___x_4894_;
v_isShared_4898_ = v_isSharedCheck_4940_;
goto v_resetjp_4896_;
}
else
{
lean_inc(v_a_4895_);
lean_dec(v___x_4894_);
v___x_4897_ = lean_box(0);
v_isShared_4898_ = v_isSharedCheck_4940_;
goto v_resetjp_4896_;
}
v_resetjp_4896_:
{
lean_object* v_snd_4899_; lean_object* v_fst_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4939_; 
v_snd_4899_ = lean_ctor_get(v_a_4895_, 1);
v_fst_4900_ = lean_ctor_get(v_a_4895_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v_a_4895_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4902_ = v_a_4895_;
v_isShared_4903_ = v_isSharedCheck_4939_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_snd_4899_);
lean_inc(v_fst_4900_);
lean_dec(v_a_4895_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4939_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v_stream_4904_; lean_object* v_nameMap_4905_; lean_object* v_levelMap_4906_; lean_object* v_exprMap_4907_; lean_object* v_recursorRuleMap_4908_; lean_object* v_constMap_4909_; lean_object* v_constOrder_4910_; lean_object* v_rewrites_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4938_; 
v_stream_4904_ = lean_ctor_get(v_snd_4899_, 0);
v_nameMap_4905_ = lean_ctor_get(v_snd_4899_, 1);
v_levelMap_4906_ = lean_ctor_get(v_snd_4899_, 2);
v_exprMap_4907_ = lean_ctor_get(v_snd_4899_, 3);
v_recursorRuleMap_4908_ = lean_ctor_get(v_snd_4899_, 4);
v_constMap_4909_ = lean_ctor_get(v_snd_4899_, 5);
v_constOrder_4910_ = lean_ctor_get(v_snd_4899_, 6);
v_rewrites_4911_ = lean_ctor_get(v_snd_4899_, 7);
v_isSharedCheck_4938_ = !lean_is_exclusive(v_snd_4899_);
if (v_isSharedCheck_4938_ == 0)
{
v___x_4913_ = v_snd_4899_;
v_isShared_4914_ = v_isSharedCheck_4938_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_rewrites_4911_);
lean_inc(v_constOrder_4910_);
lean_inc(v_constMap_4909_);
lean_inc(v_recursorRuleMap_4908_);
lean_inc(v_exprMap_4907_);
lean_inc(v_levelMap_4906_);
lean_inc(v_nameMap_4905_);
lean_inc(v_stream_4904_);
lean_dec(v_snd_4899_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4938_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
uint8_t v___x_4915_; 
v___x_4915_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4907_, v_a_4651_);
if (v___x_4915_ == 0)
{
lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4919_; 
lean_del_object(v___x_4639_);
v___x_4916_ = lean_box(0);
v___x_4917_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4907_, v_a_4651_, v_fst_4900_);
if (v_isShared_4914_ == 0)
{
lean_ctor_set(v___x_4913_, 3, v___x_4917_);
v___x_4919_ = v___x_4913_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_stream_4904_);
lean_ctor_set(v_reuseFailAlloc_4926_, 1, v_nameMap_4905_);
lean_ctor_set(v_reuseFailAlloc_4926_, 2, v_levelMap_4906_);
lean_ctor_set(v_reuseFailAlloc_4926_, 3, v___x_4917_);
lean_ctor_set(v_reuseFailAlloc_4926_, 4, v_recursorRuleMap_4908_);
lean_ctor_set(v_reuseFailAlloc_4926_, 5, v_constMap_4909_);
lean_ctor_set(v_reuseFailAlloc_4926_, 6, v_constOrder_4910_);
lean_ctor_set(v_reuseFailAlloc_4926_, 7, v_rewrites_4911_);
v___x_4919_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
lean_object* v___x_4921_; 
if (v_isShared_4903_ == 0)
{
lean_ctor_set(v___x_4902_, 1, v___x_4919_);
lean_ctor_set(v___x_4902_, 0, v___x_4916_);
v___x_4921_ = v___x_4902_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v___x_4916_);
lean_ctor_set(v_reuseFailAlloc_4925_, 1, v___x_4919_);
v___x_4921_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
lean_object* v___x_4923_; 
if (v_isShared_4898_ == 0)
{
lean_ctor_set(v___x_4897_, 0, v___x_4921_);
v___x_4923_ = v___x_4897_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4924_; 
v_reuseFailAlloc_4924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4924_, 0, v___x_4921_);
v___x_4923_ = v_reuseFailAlloc_4924_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
return v___x_4923_;
}
}
}
}
else
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4933_; 
lean_del_object(v___x_4913_);
lean_dec_ref(v_rewrites_4911_);
lean_dec_ref(v_constOrder_4910_);
lean_dec_ref(v_constMap_4909_);
lean_dec_ref(v_recursorRuleMap_4908_);
lean_dec_ref(v_exprMap_4907_);
lean_dec_ref(v_levelMap_4906_);
lean_dec_ref(v_nameMap_4905_);
lean_dec_ref(v_stream_4904_);
lean_del_object(v___x_4902_);
lean_dec(v_fst_4900_);
v___x_4927_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4928_ = l_Nat_reprFast(v_a_4651_);
v___x_4929_ = lean_string_append(v___x_4927_, v___x_4928_);
lean_dec_ref(v___x_4928_);
v___x_4930_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4931_ = lean_string_append(v___x_4929_, v___x_4930_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4931_);
v___x_4933_ = v___x_4639_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4937_; 
v_reuseFailAlloc_4937_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4937_, 0, v___x_4931_);
v___x_4933_ = v_reuseFailAlloc_4937_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
lean_object* v___x_4935_; 
if (v_isShared_4898_ == 0)
{
lean_ctor_set_tag(v___x_4897_, 1);
lean_ctor_set(v___x_4897_, 0, v___x_4933_);
v___x_4935_ = v___x_4897_;
goto v_reusejp_4934_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v___x_4933_);
v___x_4935_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4934_;
}
v_reusejp_4934_:
{
return v___x_4935_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4948_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4941_ = lean_ctor_get(v___x_4894_, 0);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4894_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4943_ = v___x_4894_;
v_isShared_4944_ = v_isSharedCheck_4948_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_a_4941_);
lean_dec(v___x_4894_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4948_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4946_; 
if (v_isShared_4944_ == 0)
{
v___x_4946_ = v___x_4943_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v_a_4941_);
v___x_4946_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
return v___x_4946_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_4949_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_4949_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprForallE(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_4949_) == 0)
{
lean_object* v_a_4950_; lean_object* v___x_4952_; uint8_t v_isShared_4953_; uint8_t v_isSharedCheck_4995_; 
v_a_4950_ = lean_ctor_get(v___x_4949_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4949_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4952_ = v___x_4949_;
v_isShared_4953_ = v_isSharedCheck_4995_;
goto v_resetjp_4951_;
}
else
{
lean_inc(v_a_4950_);
lean_dec(v___x_4949_);
v___x_4952_ = lean_box(0);
v_isShared_4953_ = v_isSharedCheck_4995_;
goto v_resetjp_4951_;
}
v_resetjp_4951_:
{
lean_object* v_snd_4954_; lean_object* v_fst_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4994_; 
v_snd_4954_ = lean_ctor_get(v_a_4950_, 1);
v_fst_4955_ = lean_ctor_get(v_a_4950_, 0);
v_isSharedCheck_4994_ = !lean_is_exclusive(v_a_4950_);
if (v_isSharedCheck_4994_ == 0)
{
v___x_4957_ = v_a_4950_;
v_isShared_4958_ = v_isSharedCheck_4994_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_snd_4954_);
lean_inc(v_fst_4955_);
lean_dec(v_a_4950_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4994_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v_stream_4959_; lean_object* v_nameMap_4960_; lean_object* v_levelMap_4961_; lean_object* v_exprMap_4962_; lean_object* v_recursorRuleMap_4963_; lean_object* v_constMap_4964_; lean_object* v_constOrder_4965_; lean_object* v_rewrites_4966_; lean_object* v___x_4968_; uint8_t v_isShared_4969_; uint8_t v_isSharedCheck_4993_; 
v_stream_4959_ = lean_ctor_get(v_snd_4954_, 0);
v_nameMap_4960_ = lean_ctor_get(v_snd_4954_, 1);
v_levelMap_4961_ = lean_ctor_get(v_snd_4954_, 2);
v_exprMap_4962_ = lean_ctor_get(v_snd_4954_, 3);
v_recursorRuleMap_4963_ = lean_ctor_get(v_snd_4954_, 4);
v_constMap_4964_ = lean_ctor_get(v_snd_4954_, 5);
v_constOrder_4965_ = lean_ctor_get(v_snd_4954_, 6);
v_rewrites_4966_ = lean_ctor_get(v_snd_4954_, 7);
v_isSharedCheck_4993_ = !lean_is_exclusive(v_snd_4954_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4968_ = v_snd_4954_;
v_isShared_4969_ = v_isSharedCheck_4993_;
goto v_resetjp_4967_;
}
else
{
lean_inc(v_rewrites_4966_);
lean_inc(v_constOrder_4965_);
lean_inc(v_constMap_4964_);
lean_inc(v_recursorRuleMap_4963_);
lean_inc(v_exprMap_4962_);
lean_inc(v_levelMap_4961_);
lean_inc(v_nameMap_4960_);
lean_inc(v_stream_4959_);
lean_dec(v_snd_4954_);
v___x_4968_ = lean_box(0);
v_isShared_4969_ = v_isSharedCheck_4993_;
goto v_resetjp_4967_;
}
v_resetjp_4967_:
{
uint8_t v___x_4970_; 
v___x_4970_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_4962_, v_a_4651_);
if (v___x_4970_ == 0)
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4974_; 
lean_del_object(v___x_4639_);
v___x_4971_ = lean_box(0);
v___x_4972_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_4962_, v_a_4651_, v_fst_4955_);
if (v_isShared_4969_ == 0)
{
lean_ctor_set(v___x_4968_, 3, v___x_4972_);
v___x_4974_ = v___x_4968_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_stream_4959_);
lean_ctor_set(v_reuseFailAlloc_4981_, 1, v_nameMap_4960_);
lean_ctor_set(v_reuseFailAlloc_4981_, 2, v_levelMap_4961_);
lean_ctor_set(v_reuseFailAlloc_4981_, 3, v___x_4972_);
lean_ctor_set(v_reuseFailAlloc_4981_, 4, v_recursorRuleMap_4963_);
lean_ctor_set(v_reuseFailAlloc_4981_, 5, v_constMap_4964_);
lean_ctor_set(v_reuseFailAlloc_4981_, 6, v_constOrder_4965_);
lean_ctor_set(v_reuseFailAlloc_4981_, 7, v_rewrites_4966_);
v___x_4974_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
lean_object* v___x_4976_; 
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_4974_);
lean_ctor_set(v___x_4957_, 0, v___x_4971_);
v___x_4976_ = v___x_4957_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v___x_4971_);
lean_ctor_set(v_reuseFailAlloc_4980_, 1, v___x_4974_);
v___x_4976_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4978_; 
if (v_isShared_4953_ == 0)
{
lean_ctor_set(v___x_4952_, 0, v___x_4976_);
v___x_4978_ = v___x_4952_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v___x_4976_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
}
}
}
}
else
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4988_; 
lean_del_object(v___x_4968_);
lean_dec_ref(v_rewrites_4966_);
lean_dec_ref(v_constOrder_4965_);
lean_dec_ref(v_constMap_4964_);
lean_dec_ref(v_recursorRuleMap_4963_);
lean_dec_ref(v_exprMap_4962_);
lean_dec_ref(v_levelMap_4961_);
lean_dec_ref(v_nameMap_4960_);
lean_dec_ref(v_stream_4959_);
lean_del_object(v___x_4957_);
lean_dec(v_fst_4955_);
v___x_4982_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_4983_ = l_Nat_reprFast(v_a_4651_);
v___x_4984_ = lean_string_append(v___x_4982_, v___x_4983_);
lean_dec_ref(v___x_4983_);
v___x_4985_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_4986_ = lean_string_append(v___x_4984_, v___x_4985_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_4986_);
v___x_4988_ = v___x_4639_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v___x_4986_);
v___x_4988_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
lean_object* v___x_4990_; 
if (v_isShared_4953_ == 0)
{
lean_ctor_set_tag(v___x_4952_, 1);
lean_ctor_set(v___x_4952_, 0, v___x_4988_);
v___x_4990_ = v___x_4952_;
goto v_reusejp_4989_;
}
else
{
lean_object* v_reuseFailAlloc_4991_; 
v_reuseFailAlloc_4991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4991_, 0, v___x_4988_);
v___x_4990_ = v_reuseFailAlloc_4991_;
goto v_reusejp_4989_;
}
v_reusejp_4989_:
{
return v___x_4990_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5003_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_4996_ = lean_ctor_get(v___x_4949_, 0);
v_isSharedCheck_5003_ = !lean_is_exclusive(v___x_4949_);
if (v_isSharedCheck_5003_ == 0)
{
v___x_4998_ = v___x_4949_;
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v___x_4949_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5001_; 
if (v_isShared_4999_ == 0)
{
v___x_5001_ = v___x_4998_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v_a_4996_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
return v___x_5001_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_5004_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5004_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprLam(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5050_; 
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5050_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5007_ = v___x_5004_;
v_isShared_5008_ = v_isSharedCheck_5050_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v___x_5004_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5050_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v_snd_5009_; lean_object* v_fst_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5049_; 
v_snd_5009_ = lean_ctor_get(v_a_5005_, 1);
v_fst_5010_ = lean_ctor_get(v_a_5005_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v_a_5005_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5012_ = v_a_5005_;
v_isShared_5013_ = v_isSharedCheck_5049_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_snd_5009_);
lean_inc(v_fst_5010_);
lean_dec(v_a_5005_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5049_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v_stream_5014_; lean_object* v_nameMap_5015_; lean_object* v_levelMap_5016_; lean_object* v_exprMap_5017_; lean_object* v_recursorRuleMap_5018_; lean_object* v_constMap_5019_; lean_object* v_constOrder_5020_; lean_object* v_rewrites_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5048_; 
v_stream_5014_ = lean_ctor_get(v_snd_5009_, 0);
v_nameMap_5015_ = lean_ctor_get(v_snd_5009_, 1);
v_levelMap_5016_ = lean_ctor_get(v_snd_5009_, 2);
v_exprMap_5017_ = lean_ctor_get(v_snd_5009_, 3);
v_recursorRuleMap_5018_ = lean_ctor_get(v_snd_5009_, 4);
v_constMap_5019_ = lean_ctor_get(v_snd_5009_, 5);
v_constOrder_5020_ = lean_ctor_get(v_snd_5009_, 6);
v_rewrites_5021_ = lean_ctor_get(v_snd_5009_, 7);
v_isSharedCheck_5048_ = !lean_is_exclusive(v_snd_5009_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_5023_ = v_snd_5009_;
v_isShared_5024_ = v_isSharedCheck_5048_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_rewrites_5021_);
lean_inc(v_constOrder_5020_);
lean_inc(v_constMap_5019_);
lean_inc(v_recursorRuleMap_5018_);
lean_inc(v_exprMap_5017_);
lean_inc(v_levelMap_5016_);
lean_inc(v_nameMap_5015_);
lean_inc(v_stream_5014_);
lean_dec(v_snd_5009_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5048_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
uint8_t v___x_5025_; 
v___x_5025_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_5017_, v_a_4651_);
if (v___x_5025_ == 0)
{
lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5029_; 
lean_del_object(v___x_4639_);
v___x_5026_ = lean_box(0);
v___x_5027_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_5017_, v_a_4651_, v_fst_5010_);
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 3, v___x_5027_);
v___x_5029_ = v___x_5023_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5036_; 
v_reuseFailAlloc_5036_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5036_, 0, v_stream_5014_);
lean_ctor_set(v_reuseFailAlloc_5036_, 1, v_nameMap_5015_);
lean_ctor_set(v_reuseFailAlloc_5036_, 2, v_levelMap_5016_);
lean_ctor_set(v_reuseFailAlloc_5036_, 3, v___x_5027_);
lean_ctor_set(v_reuseFailAlloc_5036_, 4, v_recursorRuleMap_5018_);
lean_ctor_set(v_reuseFailAlloc_5036_, 5, v_constMap_5019_);
lean_ctor_set(v_reuseFailAlloc_5036_, 6, v_constOrder_5020_);
lean_ctor_set(v_reuseFailAlloc_5036_, 7, v_rewrites_5021_);
v___x_5029_ = v_reuseFailAlloc_5036_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
lean_object* v___x_5031_; 
if (v_isShared_5013_ == 0)
{
lean_ctor_set(v___x_5012_, 1, v___x_5029_);
lean_ctor_set(v___x_5012_, 0, v___x_5026_);
v___x_5031_ = v___x_5012_;
goto v_reusejp_5030_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v___x_5026_);
lean_ctor_set(v_reuseFailAlloc_5035_, 1, v___x_5029_);
v___x_5031_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5030_;
}
v_reusejp_5030_:
{
lean_object* v___x_5033_; 
if (v_isShared_5008_ == 0)
{
lean_ctor_set(v___x_5007_, 0, v___x_5031_);
v___x_5033_ = v___x_5007_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v___x_5031_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
}
else
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5043_; 
lean_del_object(v___x_5023_);
lean_dec_ref(v_rewrites_5021_);
lean_dec_ref(v_constOrder_5020_);
lean_dec_ref(v_constMap_5019_);
lean_dec_ref(v_recursorRuleMap_5018_);
lean_dec_ref(v_exprMap_5017_);
lean_dec_ref(v_levelMap_5016_);
lean_dec_ref(v_nameMap_5015_);
lean_dec_ref(v_stream_5014_);
lean_del_object(v___x_5012_);
lean_dec(v_fst_5010_);
v___x_5037_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_5038_ = l_Nat_reprFast(v_a_4651_);
v___x_5039_ = lean_string_append(v___x_5037_, v___x_5038_);
lean_dec_ref(v___x_5038_);
v___x_5040_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5041_ = lean_string_append(v___x_5039_, v___x_5040_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_5041_);
v___x_5043_ = v___x_4639_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5047_; 
v_reuseFailAlloc_5047_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5047_, 0, v___x_5041_);
v___x_5043_ = v_reuseFailAlloc_5047_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
lean_object* v___x_5045_; 
if (v_isShared_5008_ == 0)
{
lean_ctor_set_tag(v___x_5007_, 1);
lean_ctor_set(v___x_5007_, 0, v___x_5043_);
v___x_5045_ = v___x_5007_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v___x_5043_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_5051_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_5004_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_5004_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_5059_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5059_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprApp(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5105_; 
v_a_5060_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5105_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5105_ == 0)
{
v___x_5062_ = v___x_5059_;
v_isShared_5063_ = v_isSharedCheck_5105_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5059_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5105_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v_snd_5064_; lean_object* v_fst_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5104_; 
v_snd_5064_ = lean_ctor_get(v_a_5060_, 1);
v_fst_5065_ = lean_ctor_get(v_a_5060_, 0);
v_isSharedCheck_5104_ = !lean_is_exclusive(v_a_5060_);
if (v_isSharedCheck_5104_ == 0)
{
v___x_5067_ = v_a_5060_;
v_isShared_5068_ = v_isSharedCheck_5104_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_snd_5064_);
lean_inc(v_fst_5065_);
lean_dec(v_a_5060_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5104_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v_stream_5069_; lean_object* v_nameMap_5070_; lean_object* v_levelMap_5071_; lean_object* v_exprMap_5072_; lean_object* v_recursorRuleMap_5073_; lean_object* v_constMap_5074_; lean_object* v_constOrder_5075_; lean_object* v_rewrites_5076_; lean_object* v___x_5078_; uint8_t v_isShared_5079_; uint8_t v_isSharedCheck_5103_; 
v_stream_5069_ = lean_ctor_get(v_snd_5064_, 0);
v_nameMap_5070_ = lean_ctor_get(v_snd_5064_, 1);
v_levelMap_5071_ = lean_ctor_get(v_snd_5064_, 2);
v_exprMap_5072_ = lean_ctor_get(v_snd_5064_, 3);
v_recursorRuleMap_5073_ = lean_ctor_get(v_snd_5064_, 4);
v_constMap_5074_ = lean_ctor_get(v_snd_5064_, 5);
v_constOrder_5075_ = lean_ctor_get(v_snd_5064_, 6);
v_rewrites_5076_ = lean_ctor_get(v_snd_5064_, 7);
v_isSharedCheck_5103_ = !lean_is_exclusive(v_snd_5064_);
if (v_isSharedCheck_5103_ == 0)
{
v___x_5078_ = v_snd_5064_;
v_isShared_5079_ = v_isSharedCheck_5103_;
goto v_resetjp_5077_;
}
else
{
lean_inc(v_rewrites_5076_);
lean_inc(v_constOrder_5075_);
lean_inc(v_constMap_5074_);
lean_inc(v_recursorRuleMap_5073_);
lean_inc(v_exprMap_5072_);
lean_inc(v_levelMap_5071_);
lean_inc(v_nameMap_5070_);
lean_inc(v_stream_5069_);
lean_dec(v_snd_5064_);
v___x_5078_ = lean_box(0);
v_isShared_5079_ = v_isSharedCheck_5103_;
goto v_resetjp_5077_;
}
v_resetjp_5077_:
{
uint8_t v___x_5080_; 
v___x_5080_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_5072_, v_a_4651_);
if (v___x_5080_ == 0)
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5084_; 
lean_del_object(v___x_4639_);
v___x_5081_ = lean_box(0);
v___x_5082_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_5072_, v_a_4651_, v_fst_5065_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 3, v___x_5082_);
v___x_5084_ = v___x_5078_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_stream_5069_);
lean_ctor_set(v_reuseFailAlloc_5091_, 1, v_nameMap_5070_);
lean_ctor_set(v_reuseFailAlloc_5091_, 2, v_levelMap_5071_);
lean_ctor_set(v_reuseFailAlloc_5091_, 3, v___x_5082_);
lean_ctor_set(v_reuseFailAlloc_5091_, 4, v_recursorRuleMap_5073_);
lean_ctor_set(v_reuseFailAlloc_5091_, 5, v_constMap_5074_);
lean_ctor_set(v_reuseFailAlloc_5091_, 6, v_constOrder_5075_);
lean_ctor_set(v_reuseFailAlloc_5091_, 7, v_rewrites_5076_);
v___x_5084_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
lean_object* v___x_5086_; 
if (v_isShared_5068_ == 0)
{
lean_ctor_set(v___x_5067_, 1, v___x_5084_);
lean_ctor_set(v___x_5067_, 0, v___x_5081_);
v___x_5086_ = v___x_5067_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v___x_5081_);
lean_ctor_set(v_reuseFailAlloc_5090_, 1, v___x_5084_);
v___x_5086_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
lean_object* v___x_5088_; 
if (v_isShared_5063_ == 0)
{
lean_ctor_set(v___x_5062_, 0, v___x_5086_);
v___x_5088_ = v___x_5062_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v___x_5086_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
return v___x_5088_;
}
}
}
}
else
{
lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5098_; 
lean_del_object(v___x_5078_);
lean_dec_ref(v_rewrites_5076_);
lean_dec_ref(v_constOrder_5075_);
lean_dec_ref(v_constMap_5074_);
lean_dec_ref(v_recursorRuleMap_5073_);
lean_dec_ref(v_exprMap_5072_);
lean_dec_ref(v_levelMap_5071_);
lean_dec_ref(v_nameMap_5070_);
lean_dec_ref(v_stream_5069_);
lean_del_object(v___x_5067_);
lean_dec(v_fst_5065_);
v___x_5092_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_5093_ = l_Nat_reprFast(v_a_4651_);
v___x_5094_ = lean_string_append(v___x_5092_, v___x_5093_);
lean_dec_ref(v___x_5093_);
v___x_5095_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5096_ = lean_string_append(v___x_5094_, v___x_5095_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_5096_);
v___x_5098_ = v___x_4639_;
goto v_reusejp_5097_;
}
else
{
lean_object* v_reuseFailAlloc_5102_; 
v_reuseFailAlloc_5102_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5102_, 0, v___x_5096_);
v___x_5098_ = v_reuseFailAlloc_5102_;
goto v_reusejp_5097_;
}
v_reusejp_5097_:
{
lean_object* v___x_5100_; 
if (v_isShared_5063_ == 0)
{
lean_ctor_set_tag(v___x_5062_, 1);
lean_ctor_set(v___x_5062_, 0, v___x_5098_);
v___x_5100_ = v___x_5062_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v___x_5098_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5113_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_5106_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5108_ = v___x_5059_;
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_a_5106_);
lean_dec(v___x_5059_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5111_; 
if (v_isShared_5109_ == 0)
{
v___x_5111_ = v___x_5108_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v_a_5106_);
v___x_5111_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
return v___x_5111_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_5114_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5114_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprConst(v_snd_4650_, v_a_4565_);
lean_dec(v_snd_4650_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5160_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5114_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5117_ = v___x_5114_;
v_isShared_5118_ = v_isSharedCheck_5160_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_a_5115_);
lean_dec(v___x_5114_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5160_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v_snd_5119_; lean_object* v_fst_5120_; lean_object* v___x_5122_; uint8_t v_isShared_5123_; uint8_t v_isSharedCheck_5159_; 
v_snd_5119_ = lean_ctor_get(v_a_5115_, 1);
v_fst_5120_ = lean_ctor_get(v_a_5115_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v_a_5115_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5122_ = v_a_5115_;
v_isShared_5123_ = v_isSharedCheck_5159_;
goto v_resetjp_5121_;
}
else
{
lean_inc(v_snd_5119_);
lean_inc(v_fst_5120_);
lean_dec(v_a_5115_);
v___x_5122_ = lean_box(0);
v_isShared_5123_ = v_isSharedCheck_5159_;
goto v_resetjp_5121_;
}
v_resetjp_5121_:
{
lean_object* v_stream_5124_; lean_object* v_nameMap_5125_; lean_object* v_levelMap_5126_; lean_object* v_exprMap_5127_; lean_object* v_recursorRuleMap_5128_; lean_object* v_constMap_5129_; lean_object* v_constOrder_5130_; lean_object* v_rewrites_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5158_; 
v_stream_5124_ = lean_ctor_get(v_snd_5119_, 0);
v_nameMap_5125_ = lean_ctor_get(v_snd_5119_, 1);
v_levelMap_5126_ = lean_ctor_get(v_snd_5119_, 2);
v_exprMap_5127_ = lean_ctor_get(v_snd_5119_, 3);
v_recursorRuleMap_5128_ = lean_ctor_get(v_snd_5119_, 4);
v_constMap_5129_ = lean_ctor_get(v_snd_5119_, 5);
v_constOrder_5130_ = lean_ctor_get(v_snd_5119_, 6);
v_rewrites_5131_ = lean_ctor_get(v_snd_5119_, 7);
v_isSharedCheck_5158_ = !lean_is_exclusive(v_snd_5119_);
if (v_isSharedCheck_5158_ == 0)
{
v___x_5133_ = v_snd_5119_;
v_isShared_5134_ = v_isSharedCheck_5158_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_rewrites_5131_);
lean_inc(v_constOrder_5130_);
lean_inc(v_constMap_5129_);
lean_inc(v_recursorRuleMap_5128_);
lean_inc(v_exprMap_5127_);
lean_inc(v_levelMap_5126_);
lean_inc(v_nameMap_5125_);
lean_inc(v_stream_5124_);
lean_dec(v_snd_5119_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5158_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
uint8_t v___x_5135_; 
v___x_5135_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_5127_, v_a_4651_);
if (v___x_5135_ == 0)
{
lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5139_; 
lean_del_object(v___x_4639_);
v___x_5136_ = lean_box(0);
v___x_5137_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_5127_, v_a_4651_, v_fst_5120_);
if (v_isShared_5134_ == 0)
{
lean_ctor_set(v___x_5133_, 3, v___x_5137_);
v___x_5139_ = v___x_5133_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5146_; 
v_reuseFailAlloc_5146_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5146_, 0, v_stream_5124_);
lean_ctor_set(v_reuseFailAlloc_5146_, 1, v_nameMap_5125_);
lean_ctor_set(v_reuseFailAlloc_5146_, 2, v_levelMap_5126_);
lean_ctor_set(v_reuseFailAlloc_5146_, 3, v___x_5137_);
lean_ctor_set(v_reuseFailAlloc_5146_, 4, v_recursorRuleMap_5128_);
lean_ctor_set(v_reuseFailAlloc_5146_, 5, v_constMap_5129_);
lean_ctor_set(v_reuseFailAlloc_5146_, 6, v_constOrder_5130_);
lean_ctor_set(v_reuseFailAlloc_5146_, 7, v_rewrites_5131_);
v___x_5139_ = v_reuseFailAlloc_5146_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
lean_object* v___x_5141_; 
if (v_isShared_5123_ == 0)
{
lean_ctor_set(v___x_5122_, 1, v___x_5139_);
lean_ctor_set(v___x_5122_, 0, v___x_5136_);
v___x_5141_ = v___x_5122_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v___x_5136_);
lean_ctor_set(v_reuseFailAlloc_5145_, 1, v___x_5139_);
v___x_5141_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
lean_object* v___x_5143_; 
if (v_isShared_5118_ == 0)
{
lean_ctor_set(v___x_5117_, 0, v___x_5141_);
v___x_5143_ = v___x_5117_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v___x_5141_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
else
{
lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5153_; 
lean_del_object(v___x_5133_);
lean_dec_ref(v_rewrites_5131_);
lean_dec_ref(v_constOrder_5130_);
lean_dec_ref(v_constMap_5129_);
lean_dec_ref(v_recursorRuleMap_5128_);
lean_dec_ref(v_exprMap_5127_);
lean_dec_ref(v_levelMap_5126_);
lean_dec_ref(v_nameMap_5125_);
lean_dec_ref(v_stream_5124_);
lean_del_object(v___x_5122_);
lean_dec(v_fst_5120_);
v___x_5147_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_5148_ = l_Nat_reprFast(v_a_4651_);
v___x_5149_ = lean_string_append(v___x_5147_, v___x_5148_);
lean_dec_ref(v___x_5148_);
v___x_5150_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5151_ = lean_string_append(v___x_5149_, v___x_5150_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_5151_);
v___x_5153_ = v___x_4639_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v___x_5151_);
v___x_5153_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
lean_object* v___x_5155_; 
if (v_isShared_5118_ == 0)
{
lean_ctor_set_tag(v___x_5117_, 1);
lean_ctor_set(v___x_5117_, 0, v___x_5153_);
v___x_5155_ = v___x_5117_;
goto v_reusejp_5154_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5153_);
v___x_5155_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5154_;
}
v_reusejp_5154_:
{
return v___x_5155_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_5161_ = lean_ctor_get(v___x_5114_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5114_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v___x_5114_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v___x_5114_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_5169_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5169_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprSort(v_snd_4650_, v_a_4565_);
if (lean_obj_tag(v___x_5169_) == 0)
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5215_; 
v_a_5170_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5215_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5215_ == 0)
{
v___x_5172_ = v___x_5169_;
v_isShared_5173_ = v_isSharedCheck_5215_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5169_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5215_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v_snd_5174_; lean_object* v_fst_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5214_; 
v_snd_5174_ = lean_ctor_get(v_a_5170_, 1);
v_fst_5175_ = lean_ctor_get(v_a_5170_, 0);
v_isSharedCheck_5214_ = !lean_is_exclusive(v_a_5170_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5177_ = v_a_5170_;
v_isShared_5178_ = v_isSharedCheck_5214_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_snd_5174_);
lean_inc(v_fst_5175_);
lean_dec(v_a_5170_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5214_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
lean_object* v_stream_5179_; lean_object* v_nameMap_5180_; lean_object* v_levelMap_5181_; lean_object* v_exprMap_5182_; lean_object* v_recursorRuleMap_5183_; lean_object* v_constMap_5184_; lean_object* v_constOrder_5185_; lean_object* v_rewrites_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5213_; 
v_stream_5179_ = lean_ctor_get(v_snd_5174_, 0);
v_nameMap_5180_ = lean_ctor_get(v_snd_5174_, 1);
v_levelMap_5181_ = lean_ctor_get(v_snd_5174_, 2);
v_exprMap_5182_ = lean_ctor_get(v_snd_5174_, 3);
v_recursorRuleMap_5183_ = lean_ctor_get(v_snd_5174_, 4);
v_constMap_5184_ = lean_ctor_get(v_snd_5174_, 5);
v_constOrder_5185_ = lean_ctor_get(v_snd_5174_, 6);
v_rewrites_5186_ = lean_ctor_get(v_snd_5174_, 7);
v_isSharedCheck_5213_ = !lean_is_exclusive(v_snd_5174_);
if (v_isSharedCheck_5213_ == 0)
{
v___x_5188_ = v_snd_5174_;
v_isShared_5189_ = v_isSharedCheck_5213_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_rewrites_5186_);
lean_inc(v_constOrder_5185_);
lean_inc(v_constMap_5184_);
lean_inc(v_recursorRuleMap_5183_);
lean_inc(v_exprMap_5182_);
lean_inc(v_levelMap_5181_);
lean_inc(v_nameMap_5180_);
lean_inc(v_stream_5179_);
lean_dec(v_snd_5174_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5213_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
uint8_t v___x_5190_; 
v___x_5190_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_5182_, v_a_4651_);
if (v___x_5190_ == 0)
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5194_; 
lean_del_object(v___x_4639_);
v___x_5191_ = lean_box(0);
v___x_5192_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_5182_, v_a_4651_, v_fst_5175_);
if (v_isShared_5189_ == 0)
{
lean_ctor_set(v___x_5188_, 3, v___x_5192_);
v___x_5194_ = v___x_5188_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v_stream_5179_);
lean_ctor_set(v_reuseFailAlloc_5201_, 1, v_nameMap_5180_);
lean_ctor_set(v_reuseFailAlloc_5201_, 2, v_levelMap_5181_);
lean_ctor_set(v_reuseFailAlloc_5201_, 3, v___x_5192_);
lean_ctor_set(v_reuseFailAlloc_5201_, 4, v_recursorRuleMap_5183_);
lean_ctor_set(v_reuseFailAlloc_5201_, 5, v_constMap_5184_);
lean_ctor_set(v_reuseFailAlloc_5201_, 6, v_constOrder_5185_);
lean_ctor_set(v_reuseFailAlloc_5201_, 7, v_rewrites_5186_);
v___x_5194_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
lean_object* v___x_5196_; 
if (v_isShared_5178_ == 0)
{
lean_ctor_set(v___x_5177_, 1, v___x_5194_);
lean_ctor_set(v___x_5177_, 0, v___x_5191_);
v___x_5196_ = v___x_5177_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v___x_5191_);
lean_ctor_set(v_reuseFailAlloc_5200_, 1, v___x_5194_);
v___x_5196_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
lean_object* v___x_5198_; 
if (v_isShared_5173_ == 0)
{
lean_ctor_set(v___x_5172_, 0, v___x_5196_);
v___x_5198_ = v___x_5172_;
goto v_reusejp_5197_;
}
else
{
lean_object* v_reuseFailAlloc_5199_; 
v_reuseFailAlloc_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5199_, 0, v___x_5196_);
v___x_5198_ = v_reuseFailAlloc_5199_;
goto v_reusejp_5197_;
}
v_reusejp_5197_:
{
return v___x_5198_;
}
}
}
}
else
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5208_; 
lean_del_object(v___x_5188_);
lean_dec_ref(v_rewrites_5186_);
lean_dec_ref(v_constOrder_5185_);
lean_dec_ref(v_constMap_5184_);
lean_dec_ref(v_recursorRuleMap_5183_);
lean_dec_ref(v_exprMap_5182_);
lean_dec_ref(v_levelMap_5181_);
lean_dec_ref(v_nameMap_5180_);
lean_dec_ref(v_stream_5179_);
lean_del_object(v___x_5177_);
lean_dec(v_fst_5175_);
v___x_5202_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_5203_ = l_Nat_reprFast(v_a_4651_);
v___x_5204_ = lean_string_append(v___x_5202_, v___x_5203_);
lean_dec_ref(v___x_5203_);
v___x_5205_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5206_ = lean_string_append(v___x_5204_, v___x_5205_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_5206_);
v___x_5208_ = v___x_4639_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v___x_5206_);
v___x_5208_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
lean_object* v___x_5210_; 
if (v_isShared_5173_ == 0)
{
lean_ctor_set_tag(v___x_5172_, 1);
lean_ctor_set(v___x_5172_, 0, v___x_5208_);
v___x_5210_ = v___x_5172_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v___x_5208_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
return v___x_5210_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5223_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_5216_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5218_ = v___x_5169_;
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5169_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5221_; 
if (v_isShared_5219_ == 0)
{
v___x_5221_ = v___x_5218_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_a_5216_);
v___x_5221_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
return v___x_5221_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_4649_);
if (lean_obj_tag(v_tail_4648_) == 0)
{
lean_object* v___x_5224_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5224_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseExprBVar(v_snd_4650_, v_a_4565_);
if (lean_obj_tag(v___x_5224_) == 0)
{
lean_object* v_a_5225_; lean_object* v___x_5227_; uint8_t v_isShared_5228_; uint8_t v_isSharedCheck_5270_; 
v_a_5225_ = lean_ctor_get(v___x_5224_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v___x_5224_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5227_ = v___x_5224_;
v_isShared_5228_ = v_isSharedCheck_5270_;
goto v_resetjp_5226_;
}
else
{
lean_inc(v_a_5225_);
lean_dec(v___x_5224_);
v___x_5227_ = lean_box(0);
v_isShared_5228_ = v_isSharedCheck_5270_;
goto v_resetjp_5226_;
}
v_resetjp_5226_:
{
lean_object* v_snd_5229_; lean_object* v_fst_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5269_; 
v_snd_5229_ = lean_ctor_get(v_a_5225_, 1);
v_fst_5230_ = lean_ctor_get(v_a_5225_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v_a_5225_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5232_ = v_a_5225_;
v_isShared_5233_ = v_isSharedCheck_5269_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_snd_5229_);
lean_inc(v_fst_5230_);
lean_dec(v_a_5225_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5269_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v_stream_5234_; lean_object* v_nameMap_5235_; lean_object* v_levelMap_5236_; lean_object* v_exprMap_5237_; lean_object* v_recursorRuleMap_5238_; lean_object* v_constMap_5239_; lean_object* v_constOrder_5240_; lean_object* v_rewrites_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5268_; 
v_stream_5234_ = lean_ctor_get(v_snd_5229_, 0);
v_nameMap_5235_ = lean_ctor_get(v_snd_5229_, 1);
v_levelMap_5236_ = lean_ctor_get(v_snd_5229_, 2);
v_exprMap_5237_ = lean_ctor_get(v_snd_5229_, 3);
v_recursorRuleMap_5238_ = lean_ctor_get(v_snd_5229_, 4);
v_constMap_5239_ = lean_ctor_get(v_snd_5229_, 5);
v_constOrder_5240_ = lean_ctor_get(v_snd_5229_, 6);
v_rewrites_5241_ = lean_ctor_get(v_snd_5229_, 7);
v_isSharedCheck_5268_ = !lean_is_exclusive(v_snd_5229_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5243_ = v_snd_5229_;
v_isShared_5244_ = v_isSharedCheck_5268_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_rewrites_5241_);
lean_inc(v_constOrder_5240_);
lean_inc(v_constMap_5239_);
lean_inc(v_recursorRuleMap_5238_);
lean_inc(v_exprMap_5237_);
lean_inc(v_levelMap_5236_);
lean_inc(v_nameMap_5235_);
lean_inc(v_stream_5234_);
lean_dec(v_snd_5229_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5268_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
uint8_t v___x_5245_; 
v___x_5245_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_exprMap_5237_, v_a_4651_);
if (v___x_5245_ == 0)
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5249_; 
lean_del_object(v___x_4639_);
v___x_5246_ = lean_box(0);
v___x_5247_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_exprMap_5237_, v_a_4651_, v_fst_5230_);
if (v_isShared_5244_ == 0)
{
lean_ctor_set(v___x_5243_, 3, v___x_5247_);
v___x_5249_ = v___x_5243_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v_stream_5234_);
lean_ctor_set(v_reuseFailAlloc_5256_, 1, v_nameMap_5235_);
lean_ctor_set(v_reuseFailAlloc_5256_, 2, v_levelMap_5236_);
lean_ctor_set(v_reuseFailAlloc_5256_, 3, v___x_5247_);
lean_ctor_set(v_reuseFailAlloc_5256_, 4, v_recursorRuleMap_5238_);
lean_ctor_set(v_reuseFailAlloc_5256_, 5, v_constMap_5239_);
lean_ctor_set(v_reuseFailAlloc_5256_, 6, v_constOrder_5240_);
lean_ctor_set(v_reuseFailAlloc_5256_, 7, v_rewrites_5241_);
v___x_5249_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
lean_object* v___x_5251_; 
if (v_isShared_5233_ == 0)
{
lean_ctor_set(v___x_5232_, 1, v___x_5249_);
lean_ctor_set(v___x_5232_, 0, v___x_5246_);
v___x_5251_ = v___x_5232_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v___x_5246_);
lean_ctor_set(v_reuseFailAlloc_5255_, 1, v___x_5249_);
v___x_5251_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
lean_object* v___x_5253_; 
if (v_isShared_5228_ == 0)
{
lean_ctor_set(v___x_5227_, 0, v___x_5251_);
v___x_5253_ = v___x_5227_;
goto v_reusejp_5252_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v___x_5251_);
v___x_5253_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5252_;
}
v_reusejp_5252_:
{
return v___x_5253_;
}
}
}
}
else
{
lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5263_; 
lean_del_object(v___x_5243_);
lean_dec_ref(v_rewrites_5241_);
lean_dec_ref(v_constOrder_5240_);
lean_dec_ref(v_constMap_5239_);
lean_dec_ref(v_recursorRuleMap_5238_);
lean_dec_ref(v_exprMap_5237_);
lean_dec_ref(v_levelMap_5236_);
lean_dec_ref(v_nameMap_5235_);
lean_dec_ref(v_stream_5234_);
lean_del_object(v___x_5232_);
lean_dec(v_fst_5230_);
v___x_5257_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addExpr___closed__0));
v___x_5258_ = l_Nat_reprFast(v_a_4651_);
v___x_5259_ = lean_string_append(v___x_5257_, v___x_5258_);
lean_dec_ref(v___x_5258_);
v___x_5260_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5261_ = lean_string_append(v___x_5259_, v___x_5260_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 18);
lean_ctor_set(v___x_4639_, 0, v___x_5261_);
v___x_5263_ = v___x_4639_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v___x_5261_);
v___x_5263_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
lean_object* v___x_5265_; 
if (v_isShared_5228_ == 0)
{
lean_ctor_set_tag(v___x_5227_, 1);
lean_ctor_set(v___x_5227_, 0, v___x_5263_);
v___x_5265_ = v___x_5227_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v___x_5263_);
v___x_5265_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
return v___x_5265_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5271_; lean_object* v___x_5273_; uint8_t v_isShared_5274_; uint8_t v_isSharedCheck_5278_; 
lean_dec(v_a_4651_);
lean_del_object(v___x_4639_);
v_a_5271_ = lean_ctor_get(v___x_5224_, 0);
v_isSharedCheck_5278_ = !lean_is_exclusive(v___x_5224_);
if (v_isSharedCheck_5278_ == 0)
{
v___x_5273_ = v___x_5224_;
v_isShared_5274_ = v_isSharedCheck_5278_;
goto v_resetjp_5272_;
}
else
{
lean_inc(v_a_5271_);
lean_dec(v___x_5224_);
v___x_5273_ = lean_box(0);
v_isShared_5274_ = v_isSharedCheck_5278_;
goto v_resetjp_5272_;
}
v_resetjp_5272_:
{
lean_object* v___x_5276_; 
if (v_isShared_5274_ == 0)
{
v___x_5276_ = v___x_5273_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v_a_5271_);
v___x_5276_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
return v___x_5276_;
}
}
}
}
else
{
lean_dec(v_a_4651_);
lean_dec(v_snd_4650_);
lean_dec(v_tail_4648_);
lean_del_object(v___x_4639_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_mantissa_4641_);
lean_del_object(v___x_4639_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_exponent_4642_);
lean_dec(v_mantissa_4641_);
lean_del_object(v___x_4639_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 2)
{
lean_object* v_n_5280_; lean_object* v___x_5282_; uint8_t v_isShared_5283_; uint8_t v_isSharedCheck_5523_; 
v_n_5280_ = lean_ctor_get(v_snd_4601_, 0);
v_isSharedCheck_5523_ = !lean_is_exclusive(v_snd_4601_);
if (v_isSharedCheck_5523_ == 0)
{
v___x_5282_ = v_snd_4601_;
v_isShared_5283_ = v_isSharedCheck_5523_;
goto v_resetjp_5281_;
}
else
{
lean_inc(v_n_5280_);
lean_dec(v_snd_4601_);
v___x_5282_ = lean_box(0);
v_isShared_5283_ = v_isSharedCheck_5523_;
goto v_resetjp_5281_;
}
v_resetjp_5281_:
{
lean_object* v_mantissa_5284_; lean_object* v_exponent_5285_; lean_object* v_natZero_5286_; lean_object* v_intZero_5287_; uint8_t v_isNeg_5288_; 
v_mantissa_5284_ = lean_ctor_get(v_n_5280_, 0);
lean_inc(v_mantissa_5284_);
v_exponent_5285_ = lean_ctor_get(v_n_5280_, 1);
lean_inc(v_exponent_5285_);
lean_dec_ref(v_n_5280_);
v_natZero_5286_ = lean_unsigned_to_nat(0u);
v_intZero_5287_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_5288_ = lean_int_dec_lt(v_mantissa_5284_, v_intZero_5287_);
if (v_isNeg_5288_ == 0)
{
uint8_t v___x_5289_; 
v___x_5289_ = lean_nat_dec_eq(v_exponent_5285_, v_natZero_5286_);
lean_dec(v_exponent_5285_);
if (v___x_5289_ == 0)
{
lean_dec(v_mantissa_5284_);
lean_del_object(v___x_5282_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_4602_) == 1)
{
lean_object* v_head_5290_; lean_object* v_tail_5291_; lean_object* v_fst_5292_; lean_object* v_snd_5293_; lean_object* v_a_5294_; lean_object* v___x_5295_; uint8_t v___x_5296_; 
v_head_5290_ = lean_ctor_get(v_tail_4602_, 0);
lean_inc(v_head_5290_);
v_tail_5291_ = lean_ctor_get(v_tail_4602_, 1);
lean_inc(v_tail_5291_);
lean_dec_ref_known(v_tail_4602_, 2);
v_fst_5292_ = lean_ctor_get(v_head_5290_, 0);
lean_inc(v_fst_5292_);
v_snd_5293_ = lean_ctor_get(v_head_5290_, 1);
lean_inc(v_snd_5293_);
lean_dec(v_head_5290_);
v_a_5294_ = lean_nat_abs(v_mantissa_5284_);
lean_dec(v_mantissa_5284_);
v___x_5295_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__21));
v___x_5296_ = lean_string_dec_eq(v_fst_5292_, v___x_5295_);
if (v___x_5296_ == 0)
{
lean_object* v___x_5297_; uint8_t v___x_5298_; 
v___x_5297_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__22));
v___x_5298_ = lean_string_dec_eq(v_fst_5292_, v___x_5297_);
if (v___x_5298_ == 0)
{
lean_object* v___x_5299_; uint8_t v___x_5300_; 
v___x_5299_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__23));
v___x_5300_ = lean_string_dec_eq(v_fst_5292_, v___x_5299_);
if (v___x_5300_ == 0)
{
lean_object* v___x_5301_; uint8_t v___x_5302_; 
v___x_5301_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__24));
v___x_5302_ = lean_string_dec_eq(v_fst_5292_, v___x_5301_);
lean_dec(v_fst_5292_);
if (v___x_5302_ == 0)
{
lean_dec(v_a_5294_);
lean_dec(v_snd_5293_);
lean_dec(v_tail_5291_);
lean_del_object(v___x_5282_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_5291_) == 0)
{
lean_object* v___x_5303_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5303_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelParam(v_snd_5293_, v_a_4565_);
if (lean_obj_tag(v___x_5303_) == 0)
{
lean_object* v_a_5304_; lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5349_; 
v_a_5304_ = lean_ctor_get(v___x_5303_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___x_5303_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5306_ = v___x_5303_;
v_isShared_5307_ = v_isSharedCheck_5349_;
goto v_resetjp_5305_;
}
else
{
lean_inc(v_a_5304_);
lean_dec(v___x_5303_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5349_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v_snd_5308_; lean_object* v_fst_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5348_; 
v_snd_5308_ = lean_ctor_get(v_a_5304_, 1);
v_fst_5309_ = lean_ctor_get(v_a_5304_, 0);
v_isSharedCheck_5348_ = !lean_is_exclusive(v_a_5304_);
if (v_isSharedCheck_5348_ == 0)
{
v___x_5311_ = v_a_5304_;
v_isShared_5312_ = v_isSharedCheck_5348_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_snd_5308_);
lean_inc(v_fst_5309_);
lean_dec(v_a_5304_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5348_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v_stream_5313_; lean_object* v_nameMap_5314_; lean_object* v_levelMap_5315_; lean_object* v_exprMap_5316_; lean_object* v_recursorRuleMap_5317_; lean_object* v_constMap_5318_; lean_object* v_constOrder_5319_; lean_object* v_rewrites_5320_; lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5347_; 
v_stream_5313_ = lean_ctor_get(v_snd_5308_, 0);
v_nameMap_5314_ = lean_ctor_get(v_snd_5308_, 1);
v_levelMap_5315_ = lean_ctor_get(v_snd_5308_, 2);
v_exprMap_5316_ = lean_ctor_get(v_snd_5308_, 3);
v_recursorRuleMap_5317_ = lean_ctor_get(v_snd_5308_, 4);
v_constMap_5318_ = lean_ctor_get(v_snd_5308_, 5);
v_constOrder_5319_ = lean_ctor_get(v_snd_5308_, 6);
v_rewrites_5320_ = lean_ctor_get(v_snd_5308_, 7);
v_isSharedCheck_5347_ = !lean_is_exclusive(v_snd_5308_);
if (v_isSharedCheck_5347_ == 0)
{
v___x_5322_ = v_snd_5308_;
v_isShared_5323_ = v_isSharedCheck_5347_;
goto v_resetjp_5321_;
}
else
{
lean_inc(v_rewrites_5320_);
lean_inc(v_constOrder_5319_);
lean_inc(v_constMap_5318_);
lean_inc(v_recursorRuleMap_5317_);
lean_inc(v_exprMap_5316_);
lean_inc(v_levelMap_5315_);
lean_inc(v_nameMap_5314_);
lean_inc(v_stream_5313_);
lean_dec(v_snd_5308_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5347_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
uint8_t v___x_5324_; 
v___x_5324_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_levelMap_5315_, v_a_5294_);
if (v___x_5324_ == 0)
{
lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5328_; 
lean_del_object(v___x_5282_);
v___x_5325_ = lean_box(0);
v___x_5326_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5315_, v_a_5294_, v_fst_5309_);
if (v_isShared_5323_ == 0)
{
lean_ctor_set(v___x_5322_, 2, v___x_5326_);
v___x_5328_ = v___x_5322_;
goto v_reusejp_5327_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_stream_5313_);
lean_ctor_set(v_reuseFailAlloc_5335_, 1, v_nameMap_5314_);
lean_ctor_set(v_reuseFailAlloc_5335_, 2, v___x_5326_);
lean_ctor_set(v_reuseFailAlloc_5335_, 3, v_exprMap_5316_);
lean_ctor_set(v_reuseFailAlloc_5335_, 4, v_recursorRuleMap_5317_);
lean_ctor_set(v_reuseFailAlloc_5335_, 5, v_constMap_5318_);
lean_ctor_set(v_reuseFailAlloc_5335_, 6, v_constOrder_5319_);
lean_ctor_set(v_reuseFailAlloc_5335_, 7, v_rewrites_5320_);
v___x_5328_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5327_;
}
v_reusejp_5327_:
{
lean_object* v___x_5330_; 
if (v_isShared_5312_ == 0)
{
lean_ctor_set(v___x_5311_, 1, v___x_5328_);
lean_ctor_set(v___x_5311_, 0, v___x_5325_);
v___x_5330_ = v___x_5311_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v___x_5325_);
lean_ctor_set(v_reuseFailAlloc_5334_, 1, v___x_5328_);
v___x_5330_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
lean_object* v___x_5332_; 
if (v_isShared_5307_ == 0)
{
lean_ctor_set(v___x_5306_, 0, v___x_5330_);
v___x_5332_ = v___x_5306_;
goto v_reusejp_5331_;
}
else
{
lean_object* v_reuseFailAlloc_5333_; 
v_reuseFailAlloc_5333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5333_, 0, v___x_5330_);
v___x_5332_ = v_reuseFailAlloc_5333_;
goto v_reusejp_5331_;
}
v_reusejp_5331_:
{
return v___x_5332_;
}
}
}
}
else
{
lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5342_; 
lean_del_object(v___x_5322_);
lean_dec_ref(v_rewrites_5320_);
lean_dec_ref(v_constOrder_5319_);
lean_dec_ref(v_constMap_5318_);
lean_dec_ref(v_recursorRuleMap_5317_);
lean_dec_ref(v_exprMap_5316_);
lean_dec_ref(v_levelMap_5315_);
lean_dec_ref(v_nameMap_5314_);
lean_dec_ref(v_stream_5313_);
lean_del_object(v___x_5311_);
lean_dec(v_fst_5309_);
v___x_5336_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0));
v___x_5337_ = l_Nat_reprFast(v_a_5294_);
v___x_5338_ = lean_string_append(v___x_5336_, v___x_5337_);
lean_dec_ref(v___x_5337_);
v___x_5339_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5340_ = lean_string_append(v___x_5338_, v___x_5339_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set_tag(v___x_5282_, 18);
lean_ctor_set(v___x_5282_, 0, v___x_5340_);
v___x_5342_ = v___x_5282_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v___x_5340_);
v___x_5342_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
lean_object* v___x_5344_; 
if (v_isShared_5307_ == 0)
{
lean_ctor_set_tag(v___x_5306_, 1);
lean_ctor_set(v___x_5306_, 0, v___x_5342_);
v___x_5344_ = v___x_5306_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v___x_5342_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5357_; 
lean_dec(v_a_5294_);
lean_del_object(v___x_5282_);
v_a_5350_ = lean_ctor_get(v___x_5303_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5303_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5352_ = v___x_5303_;
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_a_5350_);
lean_dec(v___x_5303_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5355_; 
if (v_isShared_5353_ == 0)
{
v___x_5355_ = v___x_5352_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5350_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
}
else
{
lean_dec(v_a_5294_);
lean_dec(v_snd_5293_);
lean_dec(v_tail_5291_);
lean_del_object(v___x_5282_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_5292_);
if (lean_obj_tag(v_tail_5291_) == 0)
{
lean_object* v___x_5358_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5358_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelImax(v_snd_5293_, v_a_4565_);
lean_dec(v_snd_5293_);
if (lean_obj_tag(v___x_5358_) == 0)
{
lean_object* v_a_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5404_; 
v_a_5359_ = lean_ctor_get(v___x_5358_, 0);
v_isSharedCheck_5404_ = !lean_is_exclusive(v___x_5358_);
if (v_isSharedCheck_5404_ == 0)
{
v___x_5361_ = v___x_5358_;
v_isShared_5362_ = v_isSharedCheck_5404_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_a_5359_);
lean_dec(v___x_5358_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5404_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v_snd_5363_; lean_object* v_fst_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5403_; 
v_snd_5363_ = lean_ctor_get(v_a_5359_, 1);
v_fst_5364_ = lean_ctor_get(v_a_5359_, 0);
v_isSharedCheck_5403_ = !lean_is_exclusive(v_a_5359_);
if (v_isSharedCheck_5403_ == 0)
{
v___x_5366_ = v_a_5359_;
v_isShared_5367_ = v_isSharedCheck_5403_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_snd_5363_);
lean_inc(v_fst_5364_);
lean_dec(v_a_5359_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5403_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v_stream_5368_; lean_object* v_nameMap_5369_; lean_object* v_levelMap_5370_; lean_object* v_exprMap_5371_; lean_object* v_recursorRuleMap_5372_; lean_object* v_constMap_5373_; lean_object* v_constOrder_5374_; lean_object* v_rewrites_5375_; lean_object* v___x_5377_; uint8_t v_isShared_5378_; uint8_t v_isSharedCheck_5402_; 
v_stream_5368_ = lean_ctor_get(v_snd_5363_, 0);
v_nameMap_5369_ = lean_ctor_get(v_snd_5363_, 1);
v_levelMap_5370_ = lean_ctor_get(v_snd_5363_, 2);
v_exprMap_5371_ = lean_ctor_get(v_snd_5363_, 3);
v_recursorRuleMap_5372_ = lean_ctor_get(v_snd_5363_, 4);
v_constMap_5373_ = lean_ctor_get(v_snd_5363_, 5);
v_constOrder_5374_ = lean_ctor_get(v_snd_5363_, 6);
v_rewrites_5375_ = lean_ctor_get(v_snd_5363_, 7);
v_isSharedCheck_5402_ = !lean_is_exclusive(v_snd_5363_);
if (v_isSharedCheck_5402_ == 0)
{
v___x_5377_ = v_snd_5363_;
v_isShared_5378_ = v_isSharedCheck_5402_;
goto v_resetjp_5376_;
}
else
{
lean_inc(v_rewrites_5375_);
lean_inc(v_constOrder_5374_);
lean_inc(v_constMap_5373_);
lean_inc(v_recursorRuleMap_5372_);
lean_inc(v_exprMap_5371_);
lean_inc(v_levelMap_5370_);
lean_inc(v_nameMap_5369_);
lean_inc(v_stream_5368_);
lean_dec(v_snd_5363_);
v___x_5377_ = lean_box(0);
v_isShared_5378_ = v_isSharedCheck_5402_;
goto v_resetjp_5376_;
}
v_resetjp_5376_:
{
uint8_t v___x_5379_; 
v___x_5379_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_levelMap_5370_, v_a_5294_);
if (v___x_5379_ == 0)
{
lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5383_; 
lean_del_object(v___x_5282_);
v___x_5380_ = lean_box(0);
v___x_5381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5370_, v_a_5294_, v_fst_5364_);
if (v_isShared_5378_ == 0)
{
lean_ctor_set(v___x_5377_, 2, v___x_5381_);
v___x_5383_ = v___x_5377_;
goto v_reusejp_5382_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v_stream_5368_);
lean_ctor_set(v_reuseFailAlloc_5390_, 1, v_nameMap_5369_);
lean_ctor_set(v_reuseFailAlloc_5390_, 2, v___x_5381_);
lean_ctor_set(v_reuseFailAlloc_5390_, 3, v_exprMap_5371_);
lean_ctor_set(v_reuseFailAlloc_5390_, 4, v_recursorRuleMap_5372_);
lean_ctor_set(v_reuseFailAlloc_5390_, 5, v_constMap_5373_);
lean_ctor_set(v_reuseFailAlloc_5390_, 6, v_constOrder_5374_);
lean_ctor_set(v_reuseFailAlloc_5390_, 7, v_rewrites_5375_);
v___x_5383_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5382_;
}
v_reusejp_5382_:
{
lean_object* v___x_5385_; 
if (v_isShared_5367_ == 0)
{
lean_ctor_set(v___x_5366_, 1, v___x_5383_);
lean_ctor_set(v___x_5366_, 0, v___x_5380_);
v___x_5385_ = v___x_5366_;
goto v_reusejp_5384_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5380_);
lean_ctor_set(v_reuseFailAlloc_5389_, 1, v___x_5383_);
v___x_5385_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5384_;
}
v_reusejp_5384_:
{
lean_object* v___x_5387_; 
if (v_isShared_5362_ == 0)
{
lean_ctor_set(v___x_5361_, 0, v___x_5385_);
v___x_5387_ = v___x_5361_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v___x_5385_);
v___x_5387_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
return v___x_5387_;
}
}
}
}
else
{
lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5397_; 
lean_del_object(v___x_5377_);
lean_dec_ref(v_rewrites_5375_);
lean_dec_ref(v_constOrder_5374_);
lean_dec_ref(v_constMap_5373_);
lean_dec_ref(v_recursorRuleMap_5372_);
lean_dec_ref(v_exprMap_5371_);
lean_dec_ref(v_levelMap_5370_);
lean_dec_ref(v_nameMap_5369_);
lean_dec_ref(v_stream_5368_);
lean_del_object(v___x_5366_);
lean_dec(v_fst_5364_);
v___x_5391_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0));
v___x_5392_ = l_Nat_reprFast(v_a_5294_);
v___x_5393_ = lean_string_append(v___x_5391_, v___x_5392_);
lean_dec_ref(v___x_5392_);
v___x_5394_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5395_ = lean_string_append(v___x_5393_, v___x_5394_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set_tag(v___x_5282_, 18);
lean_ctor_set(v___x_5282_, 0, v___x_5395_);
v___x_5397_ = v___x_5282_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v___x_5395_);
v___x_5397_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
lean_object* v___x_5399_; 
if (v_isShared_5362_ == 0)
{
lean_ctor_set_tag(v___x_5361_, 1);
lean_ctor_set(v___x_5361_, 0, v___x_5397_);
v___x_5399_ = v___x_5361_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v___x_5397_);
v___x_5399_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
return v___x_5399_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5405_; lean_object* v___x_5407_; uint8_t v_isShared_5408_; uint8_t v_isSharedCheck_5412_; 
lean_dec(v_a_5294_);
lean_del_object(v___x_5282_);
v_a_5405_ = lean_ctor_get(v___x_5358_, 0);
v_isSharedCheck_5412_ = !lean_is_exclusive(v___x_5358_);
if (v_isSharedCheck_5412_ == 0)
{
v___x_5407_ = v___x_5358_;
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
else
{
lean_inc(v_a_5405_);
lean_dec(v___x_5358_);
v___x_5407_ = lean_box(0);
v_isShared_5408_ = v_isSharedCheck_5412_;
goto v_resetjp_5406_;
}
v_resetjp_5406_:
{
lean_object* v___x_5410_; 
if (v_isShared_5408_ == 0)
{
v___x_5410_ = v___x_5407_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v_a_5405_);
v___x_5410_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
return v___x_5410_;
}
}
}
}
else
{
lean_dec(v_a_5294_);
lean_dec(v_snd_5293_);
lean_dec(v_tail_5291_);
lean_del_object(v___x_5282_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_5292_);
if (lean_obj_tag(v_tail_5291_) == 0)
{
lean_object* v___x_5413_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5413_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelMax(v_snd_5293_, v_a_4565_);
lean_dec(v_snd_5293_);
if (lean_obj_tag(v___x_5413_) == 0)
{
lean_object* v_a_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5459_; 
v_a_5414_ = lean_ctor_get(v___x_5413_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5416_ = v___x_5413_;
v_isShared_5417_ = v_isSharedCheck_5459_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_a_5414_);
lean_dec(v___x_5413_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5459_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v_snd_5418_; lean_object* v_fst_5419_; lean_object* v___x_5421_; uint8_t v_isShared_5422_; uint8_t v_isSharedCheck_5458_; 
v_snd_5418_ = lean_ctor_get(v_a_5414_, 1);
v_fst_5419_ = lean_ctor_get(v_a_5414_, 0);
v_isSharedCheck_5458_ = !lean_is_exclusive(v_a_5414_);
if (v_isSharedCheck_5458_ == 0)
{
v___x_5421_ = v_a_5414_;
v_isShared_5422_ = v_isSharedCheck_5458_;
goto v_resetjp_5420_;
}
else
{
lean_inc(v_snd_5418_);
lean_inc(v_fst_5419_);
lean_dec(v_a_5414_);
v___x_5421_ = lean_box(0);
v_isShared_5422_ = v_isSharedCheck_5458_;
goto v_resetjp_5420_;
}
v_resetjp_5420_:
{
lean_object* v_stream_5423_; lean_object* v_nameMap_5424_; lean_object* v_levelMap_5425_; lean_object* v_exprMap_5426_; lean_object* v_recursorRuleMap_5427_; lean_object* v_constMap_5428_; lean_object* v_constOrder_5429_; lean_object* v_rewrites_5430_; lean_object* v___x_5432_; uint8_t v_isShared_5433_; uint8_t v_isSharedCheck_5457_; 
v_stream_5423_ = lean_ctor_get(v_snd_5418_, 0);
v_nameMap_5424_ = lean_ctor_get(v_snd_5418_, 1);
v_levelMap_5425_ = lean_ctor_get(v_snd_5418_, 2);
v_exprMap_5426_ = lean_ctor_get(v_snd_5418_, 3);
v_recursorRuleMap_5427_ = lean_ctor_get(v_snd_5418_, 4);
v_constMap_5428_ = lean_ctor_get(v_snd_5418_, 5);
v_constOrder_5429_ = lean_ctor_get(v_snd_5418_, 6);
v_rewrites_5430_ = lean_ctor_get(v_snd_5418_, 7);
v_isSharedCheck_5457_ = !lean_is_exclusive(v_snd_5418_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5432_ = v_snd_5418_;
v_isShared_5433_ = v_isSharedCheck_5457_;
goto v_resetjp_5431_;
}
else
{
lean_inc(v_rewrites_5430_);
lean_inc(v_constOrder_5429_);
lean_inc(v_constMap_5428_);
lean_inc(v_recursorRuleMap_5427_);
lean_inc(v_exprMap_5426_);
lean_inc(v_levelMap_5425_);
lean_inc(v_nameMap_5424_);
lean_inc(v_stream_5423_);
lean_dec(v_snd_5418_);
v___x_5432_ = lean_box(0);
v_isShared_5433_ = v_isSharedCheck_5457_;
goto v_resetjp_5431_;
}
v_resetjp_5431_:
{
uint8_t v___x_5434_; 
v___x_5434_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_levelMap_5425_, v_a_5294_);
if (v___x_5434_ == 0)
{
lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5438_; 
lean_del_object(v___x_5282_);
v___x_5435_ = lean_box(0);
v___x_5436_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5425_, v_a_5294_, v_fst_5419_);
if (v_isShared_5433_ == 0)
{
lean_ctor_set(v___x_5432_, 2, v___x_5436_);
v___x_5438_ = v___x_5432_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v_stream_5423_);
lean_ctor_set(v_reuseFailAlloc_5445_, 1, v_nameMap_5424_);
lean_ctor_set(v_reuseFailAlloc_5445_, 2, v___x_5436_);
lean_ctor_set(v_reuseFailAlloc_5445_, 3, v_exprMap_5426_);
lean_ctor_set(v_reuseFailAlloc_5445_, 4, v_recursorRuleMap_5427_);
lean_ctor_set(v_reuseFailAlloc_5445_, 5, v_constMap_5428_);
lean_ctor_set(v_reuseFailAlloc_5445_, 6, v_constOrder_5429_);
lean_ctor_set(v_reuseFailAlloc_5445_, 7, v_rewrites_5430_);
v___x_5438_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
lean_object* v___x_5440_; 
if (v_isShared_5422_ == 0)
{
lean_ctor_set(v___x_5421_, 1, v___x_5438_);
lean_ctor_set(v___x_5421_, 0, v___x_5435_);
v___x_5440_ = v___x_5421_;
goto v_reusejp_5439_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v___x_5435_);
lean_ctor_set(v_reuseFailAlloc_5444_, 1, v___x_5438_);
v___x_5440_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5439_;
}
v_reusejp_5439_:
{
lean_object* v___x_5442_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 0, v___x_5440_);
v___x_5442_ = v___x_5416_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v___x_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
else
{
lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5452_; 
lean_del_object(v___x_5432_);
lean_dec_ref(v_rewrites_5430_);
lean_dec_ref(v_constOrder_5429_);
lean_dec_ref(v_constMap_5428_);
lean_dec_ref(v_recursorRuleMap_5427_);
lean_dec_ref(v_exprMap_5426_);
lean_dec_ref(v_levelMap_5425_);
lean_dec_ref(v_nameMap_5424_);
lean_dec_ref(v_stream_5423_);
lean_del_object(v___x_5421_);
lean_dec(v_fst_5419_);
v___x_5446_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0));
v___x_5447_ = l_Nat_reprFast(v_a_5294_);
v___x_5448_ = lean_string_append(v___x_5446_, v___x_5447_);
lean_dec_ref(v___x_5447_);
v___x_5449_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5450_ = lean_string_append(v___x_5448_, v___x_5449_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set_tag(v___x_5282_, 18);
lean_ctor_set(v___x_5282_, 0, v___x_5450_);
v___x_5452_ = v___x_5282_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v___x_5450_);
v___x_5452_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
lean_object* v___x_5454_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set_tag(v___x_5416_, 1);
lean_ctor_set(v___x_5416_, 0, v___x_5452_);
v___x_5454_ = v___x_5416_;
goto v_reusejp_5453_;
}
else
{
lean_object* v_reuseFailAlloc_5455_; 
v_reuseFailAlloc_5455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5455_, 0, v___x_5452_);
v___x_5454_ = v_reuseFailAlloc_5455_;
goto v_reusejp_5453_;
}
v_reusejp_5453_:
{
return v___x_5454_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5467_; 
lean_dec(v_a_5294_);
lean_del_object(v___x_5282_);
v_a_5460_ = lean_ctor_get(v___x_5413_, 0);
v_isSharedCheck_5467_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5462_ = v___x_5413_;
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_a_5460_);
lean_dec(v___x_5413_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5465_; 
if (v_isShared_5463_ == 0)
{
v___x_5465_ = v___x_5462_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v_a_5460_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
}
}
else
{
lean_dec(v_a_5294_);
lean_dec(v_snd_5293_);
lean_dec(v_tail_5291_);
lean_del_object(v___x_5282_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_5292_);
if (lean_obj_tag(v_tail_5291_) == 0)
{
lean_object* v___x_5468_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5468_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseLevelSucc(v_snd_5293_, v_a_4565_);
if (lean_obj_tag(v___x_5468_) == 0)
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5514_; 
v_a_5469_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5471_ = v___x_5468_;
v_isShared_5472_ = v_isSharedCheck_5514_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___x_5468_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5514_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v_snd_5473_; lean_object* v_fst_5474_; lean_object* v___x_5476_; uint8_t v_isShared_5477_; uint8_t v_isSharedCheck_5513_; 
v_snd_5473_ = lean_ctor_get(v_a_5469_, 1);
v_fst_5474_ = lean_ctor_get(v_a_5469_, 0);
v_isSharedCheck_5513_ = !lean_is_exclusive(v_a_5469_);
if (v_isSharedCheck_5513_ == 0)
{
v___x_5476_ = v_a_5469_;
v_isShared_5477_ = v_isSharedCheck_5513_;
goto v_resetjp_5475_;
}
else
{
lean_inc(v_snd_5473_);
lean_inc(v_fst_5474_);
lean_dec(v_a_5469_);
v___x_5476_ = lean_box(0);
v_isShared_5477_ = v_isSharedCheck_5513_;
goto v_resetjp_5475_;
}
v_resetjp_5475_:
{
lean_object* v_stream_5478_; lean_object* v_nameMap_5479_; lean_object* v_levelMap_5480_; lean_object* v_exprMap_5481_; lean_object* v_recursorRuleMap_5482_; lean_object* v_constMap_5483_; lean_object* v_constOrder_5484_; lean_object* v_rewrites_5485_; lean_object* v___x_5487_; uint8_t v_isShared_5488_; uint8_t v_isSharedCheck_5512_; 
v_stream_5478_ = lean_ctor_get(v_snd_5473_, 0);
v_nameMap_5479_ = lean_ctor_get(v_snd_5473_, 1);
v_levelMap_5480_ = lean_ctor_get(v_snd_5473_, 2);
v_exprMap_5481_ = lean_ctor_get(v_snd_5473_, 3);
v_recursorRuleMap_5482_ = lean_ctor_get(v_snd_5473_, 4);
v_constMap_5483_ = lean_ctor_get(v_snd_5473_, 5);
v_constOrder_5484_ = lean_ctor_get(v_snd_5473_, 6);
v_rewrites_5485_ = lean_ctor_get(v_snd_5473_, 7);
v_isSharedCheck_5512_ = !lean_is_exclusive(v_snd_5473_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5487_ = v_snd_5473_;
v_isShared_5488_ = v_isSharedCheck_5512_;
goto v_resetjp_5486_;
}
else
{
lean_inc(v_rewrites_5485_);
lean_inc(v_constOrder_5484_);
lean_inc(v_constMap_5483_);
lean_inc(v_recursorRuleMap_5482_);
lean_inc(v_exprMap_5481_);
lean_inc(v_levelMap_5480_);
lean_inc(v_nameMap_5479_);
lean_inc(v_stream_5478_);
lean_dec(v_snd_5473_);
v___x_5487_ = lean_box(0);
v_isShared_5488_ = v_isSharedCheck_5512_;
goto v_resetjp_5486_;
}
v_resetjp_5486_:
{
uint8_t v___x_5489_; 
v___x_5489_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_levelMap_5480_, v_a_5294_);
if (v___x_5489_ == 0)
{
lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5493_; 
lean_del_object(v___x_5282_);
v___x_5490_ = lean_box(0);
v___x_5491_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_levelMap_5480_, v_a_5294_, v_fst_5474_);
if (v_isShared_5488_ == 0)
{
lean_ctor_set(v___x_5487_, 2, v___x_5491_);
v___x_5493_ = v___x_5487_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_stream_5478_);
lean_ctor_set(v_reuseFailAlloc_5500_, 1, v_nameMap_5479_);
lean_ctor_set(v_reuseFailAlloc_5500_, 2, v___x_5491_);
lean_ctor_set(v_reuseFailAlloc_5500_, 3, v_exprMap_5481_);
lean_ctor_set(v_reuseFailAlloc_5500_, 4, v_recursorRuleMap_5482_);
lean_ctor_set(v_reuseFailAlloc_5500_, 5, v_constMap_5483_);
lean_ctor_set(v_reuseFailAlloc_5500_, 6, v_constOrder_5484_);
lean_ctor_set(v_reuseFailAlloc_5500_, 7, v_rewrites_5485_);
v___x_5493_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
lean_object* v___x_5495_; 
if (v_isShared_5477_ == 0)
{
lean_ctor_set(v___x_5476_, 1, v___x_5493_);
lean_ctor_set(v___x_5476_, 0, v___x_5490_);
v___x_5495_ = v___x_5476_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v___x_5490_);
lean_ctor_set(v_reuseFailAlloc_5499_, 1, v___x_5493_);
v___x_5495_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
lean_object* v___x_5497_; 
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 0, v___x_5495_);
v___x_5497_ = v___x_5471_;
goto v_reusejp_5496_;
}
else
{
lean_object* v_reuseFailAlloc_5498_; 
v_reuseFailAlloc_5498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5498_, 0, v___x_5495_);
v___x_5497_ = v_reuseFailAlloc_5498_;
goto v_reusejp_5496_;
}
v_reusejp_5496_:
{
return v___x_5497_;
}
}
}
}
else
{
lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5507_; 
lean_del_object(v___x_5487_);
lean_dec_ref(v_rewrites_5485_);
lean_dec_ref(v_constOrder_5484_);
lean_dec_ref(v_constMap_5483_);
lean_dec_ref(v_recursorRuleMap_5482_);
lean_dec_ref(v_exprMap_5481_);
lean_dec_ref(v_levelMap_5480_);
lean_dec_ref(v_nameMap_5479_);
lean_dec_ref(v_stream_5478_);
lean_del_object(v___x_5476_);
lean_dec(v_fst_5474_);
v___x_5501_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addLevel___closed__0));
v___x_5502_ = l_Nat_reprFast(v_a_5294_);
v___x_5503_ = lean_string_append(v___x_5501_, v___x_5502_);
lean_dec_ref(v___x_5502_);
v___x_5504_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5505_ = lean_string_append(v___x_5503_, v___x_5504_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set_tag(v___x_5282_, 18);
lean_ctor_set(v___x_5282_, 0, v___x_5505_);
v___x_5507_ = v___x_5282_;
goto v_reusejp_5506_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v___x_5505_);
v___x_5507_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5506_;
}
v_reusejp_5506_:
{
lean_object* v___x_5509_; 
if (v_isShared_5472_ == 0)
{
lean_ctor_set_tag(v___x_5471_, 1);
lean_ctor_set(v___x_5471_, 0, v___x_5507_);
v___x_5509_ = v___x_5471_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5510_; 
v_reuseFailAlloc_5510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5510_, 0, v___x_5507_);
v___x_5509_ = v_reuseFailAlloc_5510_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
return v___x_5509_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5522_; 
lean_dec(v_a_5294_);
lean_del_object(v___x_5282_);
v_a_5515_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5517_ = v___x_5468_;
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_a_5515_);
lean_dec(v___x_5468_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v___x_5520_; 
if (v_isShared_5518_ == 0)
{
v___x_5520_ = v___x_5517_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_a_5515_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
else
{
lean_dec(v_a_5294_);
lean_dec(v_snd_5293_);
lean_dec(v_tail_5291_);
lean_del_object(v___x_5282_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_mantissa_5284_);
lean_del_object(v___x_5282_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_exponent_5285_);
lean_dec(v_mantissa_5284_);
lean_del_object(v___x_5282_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec_ref(v_fst_4600_);
if (lean_obj_tag(v_snd_4601_) == 2)
{
lean_object* v_n_5524_; lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5653_; 
v_n_5524_ = lean_ctor_get(v_snd_4601_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v_snd_4601_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5526_ = v_snd_4601_;
v_isShared_5527_ = v_isSharedCheck_5653_;
goto v_resetjp_5525_;
}
else
{
lean_inc(v_n_5524_);
lean_dec(v_snd_4601_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5653_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
lean_object* v_mantissa_5528_; lean_object* v_exponent_5529_; lean_object* v_natZero_5530_; lean_object* v_intZero_5531_; uint8_t v_isNeg_5532_; 
v_mantissa_5528_ = lean_ctor_get(v_n_5524_, 0);
lean_inc(v_mantissa_5528_);
v_exponent_5529_ = lean_ctor_get(v_n_5524_, 1);
lean_inc(v_exponent_5529_);
lean_dec_ref(v_n_5524_);
v_natZero_5530_ = lean_unsigned_to_nat(0u);
v_intZero_5531_ = lean_obj_once(&l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3, &l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3_once, _init_l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__3);
v_isNeg_5532_ = lean_int_dec_lt(v_mantissa_5528_, v_intZero_5531_);
if (v_isNeg_5532_ == 0)
{
uint8_t v___x_5533_; 
v___x_5533_ = lean_nat_dec_eq(v_exponent_5529_, v_natZero_5530_);
lean_dec(v_exponent_5529_);
if (v___x_5533_ == 0)
{
lean_dec(v_mantissa_5528_);
lean_del_object(v___x_5526_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_4602_) == 1)
{
lean_object* v_head_5534_; lean_object* v_tail_5535_; lean_object* v_fst_5536_; lean_object* v_snd_5537_; lean_object* v_a_5538_; lean_object* v___x_5539_; uint8_t v___x_5540_; 
v_head_5534_ = lean_ctor_get(v_tail_4602_, 0);
lean_inc(v_head_5534_);
v_tail_5535_ = lean_ctor_get(v_tail_4602_, 1);
lean_inc(v_tail_5535_);
lean_dec_ref_known(v_tail_4602_, 2);
v_fst_5536_ = lean_ctor_get(v_head_5534_, 0);
lean_inc(v_fst_5536_);
v_snd_5537_ = lean_ctor_get(v_head_5534_, 1);
lean_inc(v_snd_5537_);
lean_dec(v_head_5534_);
v_a_5538_ = lean_nat_abs(v_mantissa_5528_);
lean_dec(v_mantissa_5528_);
v___x_5539_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr___closed__4));
v___x_5540_ = lean_string_dec_eq(v_fst_5536_, v___x_5539_);
if (v___x_5540_ == 0)
{
lean_object* v___x_5541_; uint8_t v___x_5542_; 
v___x_5541_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___closed__25));
v___x_5542_ = lean_string_dec_eq(v_fst_5536_, v___x_5541_);
lean_dec(v_fst_5536_);
if (v___x_5542_ == 0)
{
lean_dec(v_a_5538_);
lean_dec(v_snd_5537_);
lean_dec(v_tail_5535_);
lean_del_object(v___x_5526_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
else
{
if (lean_obj_tag(v_tail_5535_) == 0)
{
lean_object* v___x_5543_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5543_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameNum(v_snd_5537_, v_a_4565_);
lean_dec(v_snd_5537_);
if (lean_obj_tag(v___x_5543_) == 0)
{
lean_object* v_a_5544_; lean_object* v___x_5546_; uint8_t v_isShared_5547_; uint8_t v_isSharedCheck_5589_; 
v_a_5544_ = lean_ctor_get(v___x_5543_, 0);
v_isSharedCheck_5589_ = !lean_is_exclusive(v___x_5543_);
if (v_isSharedCheck_5589_ == 0)
{
v___x_5546_ = v___x_5543_;
v_isShared_5547_ = v_isSharedCheck_5589_;
goto v_resetjp_5545_;
}
else
{
lean_inc(v_a_5544_);
lean_dec(v___x_5543_);
v___x_5546_ = lean_box(0);
v_isShared_5547_ = v_isSharedCheck_5589_;
goto v_resetjp_5545_;
}
v_resetjp_5545_:
{
lean_object* v_snd_5548_; lean_object* v_fst_5549_; lean_object* v___x_5551_; uint8_t v_isShared_5552_; uint8_t v_isSharedCheck_5588_; 
v_snd_5548_ = lean_ctor_get(v_a_5544_, 1);
v_fst_5549_ = lean_ctor_get(v_a_5544_, 0);
v_isSharedCheck_5588_ = !lean_is_exclusive(v_a_5544_);
if (v_isSharedCheck_5588_ == 0)
{
v___x_5551_ = v_a_5544_;
v_isShared_5552_ = v_isSharedCheck_5588_;
goto v_resetjp_5550_;
}
else
{
lean_inc(v_snd_5548_);
lean_inc(v_fst_5549_);
lean_dec(v_a_5544_);
v___x_5551_ = lean_box(0);
v_isShared_5552_ = v_isSharedCheck_5588_;
goto v_resetjp_5550_;
}
v_resetjp_5550_:
{
lean_object* v_stream_5553_; lean_object* v_nameMap_5554_; lean_object* v_levelMap_5555_; lean_object* v_exprMap_5556_; lean_object* v_recursorRuleMap_5557_; lean_object* v_constMap_5558_; lean_object* v_constOrder_5559_; lean_object* v_rewrites_5560_; lean_object* v___x_5562_; uint8_t v_isShared_5563_; uint8_t v_isSharedCheck_5587_; 
v_stream_5553_ = lean_ctor_get(v_snd_5548_, 0);
v_nameMap_5554_ = lean_ctor_get(v_snd_5548_, 1);
v_levelMap_5555_ = lean_ctor_get(v_snd_5548_, 2);
v_exprMap_5556_ = lean_ctor_get(v_snd_5548_, 3);
v_recursorRuleMap_5557_ = lean_ctor_get(v_snd_5548_, 4);
v_constMap_5558_ = lean_ctor_get(v_snd_5548_, 5);
v_constOrder_5559_ = lean_ctor_get(v_snd_5548_, 6);
v_rewrites_5560_ = lean_ctor_get(v_snd_5548_, 7);
v_isSharedCheck_5587_ = !lean_is_exclusive(v_snd_5548_);
if (v_isSharedCheck_5587_ == 0)
{
v___x_5562_ = v_snd_5548_;
v_isShared_5563_ = v_isSharedCheck_5587_;
goto v_resetjp_5561_;
}
else
{
lean_inc(v_rewrites_5560_);
lean_inc(v_constOrder_5559_);
lean_inc(v_constMap_5558_);
lean_inc(v_recursorRuleMap_5557_);
lean_inc(v_exprMap_5556_);
lean_inc(v_levelMap_5555_);
lean_inc(v_nameMap_5554_);
lean_inc(v_stream_5553_);
lean_dec(v_snd_5548_);
v___x_5562_ = lean_box(0);
v_isShared_5563_ = v_isSharedCheck_5587_;
goto v_resetjp_5561_;
}
v_resetjp_5561_:
{
uint8_t v___x_5564_; 
v___x_5564_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_nameMap_5554_, v_a_5538_);
if (v___x_5564_ == 0)
{
lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5568_; 
lean_del_object(v___x_5526_);
v___x_5565_ = lean_box(0);
v___x_5566_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_nameMap_5554_, v_a_5538_, v_fst_5549_);
if (v_isShared_5563_ == 0)
{
lean_ctor_set(v___x_5562_, 1, v___x_5566_);
v___x_5568_ = v___x_5562_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5575_; 
v_reuseFailAlloc_5575_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5575_, 0, v_stream_5553_);
lean_ctor_set(v_reuseFailAlloc_5575_, 1, v___x_5566_);
lean_ctor_set(v_reuseFailAlloc_5575_, 2, v_levelMap_5555_);
lean_ctor_set(v_reuseFailAlloc_5575_, 3, v_exprMap_5556_);
lean_ctor_set(v_reuseFailAlloc_5575_, 4, v_recursorRuleMap_5557_);
lean_ctor_set(v_reuseFailAlloc_5575_, 5, v_constMap_5558_);
lean_ctor_set(v_reuseFailAlloc_5575_, 6, v_constOrder_5559_);
lean_ctor_set(v_reuseFailAlloc_5575_, 7, v_rewrites_5560_);
v___x_5568_ = v_reuseFailAlloc_5575_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
lean_object* v___x_5570_; 
if (v_isShared_5552_ == 0)
{
lean_ctor_set(v___x_5551_, 1, v___x_5568_);
lean_ctor_set(v___x_5551_, 0, v___x_5565_);
v___x_5570_ = v___x_5551_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v___x_5565_);
lean_ctor_set(v_reuseFailAlloc_5574_, 1, v___x_5568_);
v___x_5570_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
lean_object* v___x_5572_; 
if (v_isShared_5547_ == 0)
{
lean_ctor_set(v___x_5546_, 0, v___x_5570_);
v___x_5572_ = v___x_5546_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v___x_5570_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
return v___x_5572_;
}
}
}
}
else
{
lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5582_; 
lean_del_object(v___x_5562_);
lean_dec_ref(v_rewrites_5560_);
lean_dec_ref(v_constOrder_5559_);
lean_dec_ref(v_constMap_5558_);
lean_dec_ref(v_recursorRuleMap_5557_);
lean_dec_ref(v_exprMap_5556_);
lean_dec_ref(v_levelMap_5555_);
lean_dec_ref(v_nameMap_5554_);
lean_dec_ref(v_stream_5553_);
lean_del_object(v___x_5551_);
lean_dec(v_fst_5549_);
v___x_5576_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0));
v___x_5577_ = l_Nat_reprFast(v_a_5538_);
v___x_5578_ = lean_string_append(v___x_5576_, v___x_5577_);
lean_dec_ref(v___x_5577_);
v___x_5579_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5580_ = lean_string_append(v___x_5578_, v___x_5579_);
if (v_isShared_5527_ == 0)
{
lean_ctor_set_tag(v___x_5526_, 18);
lean_ctor_set(v___x_5526_, 0, v___x_5580_);
v___x_5582_ = v___x_5526_;
goto v_reusejp_5581_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v___x_5580_);
v___x_5582_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5581_;
}
v_reusejp_5581_:
{
lean_object* v___x_5584_; 
if (v_isShared_5547_ == 0)
{
lean_ctor_set_tag(v___x_5546_, 1);
lean_ctor_set(v___x_5546_, 0, v___x_5582_);
v___x_5584_ = v___x_5546_;
goto v_reusejp_5583_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v___x_5582_);
v___x_5584_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5583_;
}
v_reusejp_5583_:
{
return v___x_5584_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5590_; lean_object* v___x_5592_; uint8_t v_isShared_5593_; uint8_t v_isSharedCheck_5597_; 
lean_dec(v_a_5538_);
lean_del_object(v___x_5526_);
v_a_5590_ = lean_ctor_get(v___x_5543_, 0);
v_isSharedCheck_5597_ = !lean_is_exclusive(v___x_5543_);
if (v_isSharedCheck_5597_ == 0)
{
v___x_5592_ = v___x_5543_;
v_isShared_5593_ = v_isSharedCheck_5597_;
goto v_resetjp_5591_;
}
else
{
lean_inc(v_a_5590_);
lean_dec(v___x_5543_);
v___x_5592_ = lean_box(0);
v_isShared_5593_ = v_isSharedCheck_5597_;
goto v_resetjp_5591_;
}
v_resetjp_5591_:
{
lean_object* v___x_5595_; 
if (v_isShared_5593_ == 0)
{
v___x_5595_ = v___x_5592_;
goto v_reusejp_5594_;
}
else
{
lean_object* v_reuseFailAlloc_5596_; 
v_reuseFailAlloc_5596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5596_, 0, v_a_5590_);
v___x_5595_ = v_reuseFailAlloc_5596_;
goto v_reusejp_5594_;
}
v_reusejp_5594_:
{
return v___x_5595_;
}
}
}
}
else
{
lean_dec(v_a_5538_);
lean_dec(v_snd_5537_);
lean_dec(v_tail_5535_);
lean_del_object(v___x_5526_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_fst_5536_);
if (lean_obj_tag(v_tail_5535_) == 0)
{
lean_object* v___x_5598_; 
lean_del_object(v___x_4585_);
lean_dec(v_kvPairs_4583_);
lean_del_object(v___x_4581_);
v___x_5598_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseNameStr(v_snd_5537_, v_a_4565_);
lean_dec(v_snd_5537_);
if (lean_obj_tag(v___x_5598_) == 0)
{
lean_object* v_a_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5644_; 
v_a_5599_ = lean_ctor_get(v___x_5598_, 0);
v_isSharedCheck_5644_ = !lean_is_exclusive(v___x_5598_);
if (v_isSharedCheck_5644_ == 0)
{
v___x_5601_ = v___x_5598_;
v_isShared_5602_ = v_isSharedCheck_5644_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_a_5599_);
lean_dec(v___x_5598_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5644_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v_snd_5603_; lean_object* v_fst_5604_; lean_object* v___x_5606_; uint8_t v_isShared_5607_; uint8_t v_isSharedCheck_5643_; 
v_snd_5603_ = lean_ctor_get(v_a_5599_, 1);
v_fst_5604_ = lean_ctor_get(v_a_5599_, 0);
v_isSharedCheck_5643_ = !lean_is_exclusive(v_a_5599_);
if (v_isSharedCheck_5643_ == 0)
{
v___x_5606_ = v_a_5599_;
v_isShared_5607_ = v_isSharedCheck_5643_;
goto v_resetjp_5605_;
}
else
{
lean_inc(v_snd_5603_);
lean_inc(v_fst_5604_);
lean_dec(v_a_5599_);
v___x_5606_ = lean_box(0);
v_isShared_5607_ = v_isSharedCheck_5643_;
goto v_resetjp_5605_;
}
v_resetjp_5605_:
{
lean_object* v_stream_5608_; lean_object* v_nameMap_5609_; lean_object* v_levelMap_5610_; lean_object* v_exprMap_5611_; lean_object* v_recursorRuleMap_5612_; lean_object* v_constMap_5613_; lean_object* v_constOrder_5614_; lean_object* v_rewrites_5615_; lean_object* v___x_5617_; uint8_t v_isShared_5618_; uint8_t v_isSharedCheck_5642_; 
v_stream_5608_ = lean_ctor_get(v_snd_5603_, 0);
v_nameMap_5609_ = lean_ctor_get(v_snd_5603_, 1);
v_levelMap_5610_ = lean_ctor_get(v_snd_5603_, 2);
v_exprMap_5611_ = lean_ctor_get(v_snd_5603_, 3);
v_recursorRuleMap_5612_ = lean_ctor_get(v_snd_5603_, 4);
v_constMap_5613_ = lean_ctor_get(v_snd_5603_, 5);
v_constOrder_5614_ = lean_ctor_get(v_snd_5603_, 6);
v_rewrites_5615_ = lean_ctor_get(v_snd_5603_, 7);
v_isSharedCheck_5642_ = !lean_is_exclusive(v_snd_5603_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5617_ = v_snd_5603_;
v_isShared_5618_ = v_isSharedCheck_5642_;
goto v_resetjp_5616_;
}
else
{
lean_inc(v_rewrites_5615_);
lean_inc(v_constOrder_5614_);
lean_inc(v_constMap_5613_);
lean_inc(v_recursorRuleMap_5612_);
lean_inc(v_exprMap_5611_);
lean_inc(v_levelMap_5610_);
lean_inc(v_nameMap_5609_);
lean_inc(v_stream_5608_);
lean_dec(v_snd_5603_);
v___x_5617_ = lean_box(0);
v_isShared_5618_ = v_isSharedCheck_5642_;
goto v_resetjp_5616_;
}
v_resetjp_5616_:
{
uint8_t v___x_5619_; 
v___x_5619_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_nameMap_5609_, v_a_5538_);
if (v___x_5619_ == 0)
{
lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5623_; 
lean_del_object(v___x_5526_);
v___x_5620_ = lean_box(0);
v___x_5621_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_M_run_spec__0___redArg(v_nameMap_5609_, v_a_5538_, v_fst_5604_);
if (v_isShared_5618_ == 0)
{
lean_ctor_set(v___x_5617_, 1, v___x_5621_);
v___x_5623_ = v___x_5617_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v_stream_5608_);
lean_ctor_set(v_reuseFailAlloc_5630_, 1, v___x_5621_);
lean_ctor_set(v_reuseFailAlloc_5630_, 2, v_levelMap_5610_);
lean_ctor_set(v_reuseFailAlloc_5630_, 3, v_exprMap_5611_);
lean_ctor_set(v_reuseFailAlloc_5630_, 4, v_recursorRuleMap_5612_);
lean_ctor_set(v_reuseFailAlloc_5630_, 5, v_constMap_5613_);
lean_ctor_set(v_reuseFailAlloc_5630_, 6, v_constOrder_5614_);
lean_ctor_set(v_reuseFailAlloc_5630_, 7, v_rewrites_5615_);
v___x_5623_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
lean_object* v___x_5625_; 
if (v_isShared_5607_ == 0)
{
lean_ctor_set(v___x_5606_, 1, v___x_5623_);
lean_ctor_set(v___x_5606_, 0, v___x_5620_);
v___x_5625_ = v___x_5606_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v___x_5620_);
lean_ctor_set(v_reuseFailAlloc_5629_, 1, v___x_5623_);
v___x_5625_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
lean_object* v___x_5627_; 
if (v_isShared_5602_ == 0)
{
lean_ctor_set(v___x_5601_, 0, v___x_5625_);
v___x_5627_ = v___x_5601_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v___x_5625_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
else
{
lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5637_; 
lean_del_object(v___x_5617_);
lean_dec_ref(v_rewrites_5615_);
lean_dec_ref(v_constOrder_5614_);
lean_dec_ref(v_constMap_5613_);
lean_dec_ref(v_recursorRuleMap_5612_);
lean_dec_ref(v_exprMap_5611_);
lean_dec_ref(v_levelMap_5610_);
lean_dec_ref(v_nameMap_5609_);
lean_dec_ref(v_stream_5608_);
lean_del_object(v___x_5606_);
lean_dec(v_fst_5604_);
v___x_5631_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__0));
v___x_5632_ = l_Nat_reprFast(v_a_5538_);
v___x_5633_ = lean_string_append(v___x_5631_, v___x_5632_);
lean_dec_ref(v___x_5632_);
v___x_5634_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_addName___closed__1));
v___x_5635_ = lean_string_append(v___x_5633_, v___x_5634_);
if (v_isShared_5527_ == 0)
{
lean_ctor_set_tag(v___x_5526_, 18);
lean_ctor_set(v___x_5526_, 0, v___x_5635_);
v___x_5637_ = v___x_5526_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v___x_5635_);
v___x_5637_ = v_reuseFailAlloc_5641_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
lean_object* v___x_5639_; 
if (v_isShared_5602_ == 0)
{
lean_ctor_set_tag(v___x_5601_, 1);
lean_ctor_set(v___x_5601_, 0, v___x_5637_);
v___x_5639_ = v___x_5601_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_5645_; lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5652_; 
lean_dec(v_a_5538_);
lean_del_object(v___x_5526_);
v_a_5645_ = lean_ctor_get(v___x_5598_, 0);
v_isSharedCheck_5652_ = !lean_is_exclusive(v___x_5598_);
if (v_isSharedCheck_5652_ == 0)
{
v___x_5647_ = v___x_5598_;
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
else
{
lean_inc(v_a_5645_);
lean_dec(v___x_5598_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v___x_5650_; 
if (v_isShared_5648_ == 0)
{
v___x_5650_ = v___x_5647_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v_a_5645_);
v___x_5650_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
return v___x_5650_;
}
}
}
}
else
{
lean_dec(v_a_5538_);
lean_dec(v_snd_5537_);
lean_dec(v_tail_5535_);
lean_del_object(v___x_5526_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_mantissa_5528_);
lean_del_object(v___x_5526_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_exponent_5529_);
lean_dec(v_mantissa_5528_);
lean_del_object(v___x_5526_);
lean_dec(v_tail_4602_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
else
{
lean_dec(v_tail_4602_);
lean_dec(v_snd_4601_);
lean_dec_ref(v_a_4565_);
goto v___jp_4587_;
}
}
}
v___jp_5654_:
{
lean_object* v_fst_5657_; lean_object* v_snd_5658_; 
v_fst_5657_ = lean_ctor_get(v_head_5655_, 0);
lean_inc(v_fst_5657_);
v_snd_5658_ = lean_ctor_get(v_head_5655_, 1);
lean_inc(v_snd_5658_);
lean_dec_ref(v_head_5655_);
v_fst_4600_ = v_fst_5657_;
v_snd_4601_ = v_snd_5658_;
v_tail_4602_ = v_tail_5656_;
goto v___jp_4599_;
}
}
}
else
{
lean_object* v___x_5704_; lean_object* v___x_5706_; 
lean_dec(v_a_4579_);
lean_dec_ref(v_a_4565_);
v___x_5704_ = ((lean_object*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseJsonObj___closed__2));
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v___x_5704_);
v___x_5706_ = v___x_4581_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v___x_5704_);
v___x_5706_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
return v___x_5706_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem___boxed(lean_object* v_line_5709_, lean_object* v_a_5710_, lean_object* v_a_5711_){
_start:
{
lean_object* v_res_5712_; 
v_res_5712_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(v_line_5709_, v_a_5710_);
return v_res_5712_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(lean_object* v_00_u03b2_5713_, lean_object* v_m_5714_, lean_object* v_a_5715_){
_start:
{
uint8_t v___x_5716_; 
v___x_5716_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___redArg(v_m_5714_, v_a_5715_);
return v___x_5716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2___boxed(lean_object* v_00_u03b2_5717_, lean_object* v_m_5718_, lean_object* v_a_5719_){
_start:
{
uint8_t v_res_5720_; lean_object* v_r_5721_; 
v_res_5720_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__2(v_00_u03b2_5717_, v_m_5718_, v_a_5719_);
lean_dec(v_a_5719_);
lean_dec_ref(v_m_5718_);
v_r_5721_ = lean_box(v_res_5720_);
return v_r_5721_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(lean_object* v_a_5722_){
_start:
{
lean_object* v_stream_5724_; lean_object* v_getLine_5725_; lean_object* v___x_5726_; 
v_stream_5724_ = lean_ctor_get(v_a_5722_, 0);
v_getLine_5725_ = lean_ctor_get(v_stream_5724_, 3);
lean_inc_ref(v_getLine_5725_);
v___x_5726_ = lean_apply_1(v_getLine_5725_, lean_box(0));
if (lean_obj_tag(v___x_5726_) == 0)
{
lean_object* v_a_5727_; lean_object* v___x_5729_; uint8_t v_isShared_5730_; uint8_t v_isSharedCheck_5743_; 
v_a_5727_ = lean_ctor_get(v___x_5726_, 0);
v_isSharedCheck_5743_ = !lean_is_exclusive(v___x_5726_);
if (v_isSharedCheck_5743_ == 0)
{
v___x_5729_ = v___x_5726_;
v_isShared_5730_ = v_isSharedCheck_5743_;
goto v_resetjp_5728_;
}
else
{
lean_inc(v_a_5727_);
lean_dec(v___x_5726_);
v___x_5729_ = lean_box(0);
v_isShared_5730_ = v_isSharedCheck_5743_;
goto v_resetjp_5728_;
}
v_resetjp_5728_:
{
lean_object* v___x_5731_; lean_object* v___x_5732_; uint8_t v___x_5733_; 
v___x_5731_ = lean_string_utf8_byte_size(v_a_5727_);
v___x_5732_ = lean_unsigned_to_nat(0u);
v___x_5733_ = lean_nat_dec_eq(v___x_5731_, v___x_5732_);
if (v___x_5733_ == 0)
{
lean_object* v___x_5734_; 
lean_del_object(v___x_5729_);
v___x_5734_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItem(v_a_5727_, v_a_5722_);
if (lean_obj_tag(v___x_5734_) == 0)
{
lean_object* v_a_5735_; lean_object* v_snd_5736_; 
v_a_5735_ = lean_ctor_get(v___x_5734_, 0);
lean_inc(v_a_5735_);
lean_dec_ref_known(v___x_5734_, 1);
v_snd_5736_ = lean_ctor_get(v_a_5735_, 1);
lean_inc(v_snd_5736_);
lean_dec(v_a_5735_);
v_a_5722_ = v_snd_5736_;
goto _start;
}
else
{
return v___x_5734_;
}
}
else
{
lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5741_; 
lean_dec(v_a_5727_);
v___x_5738_ = lean_box(0);
v___x_5739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
lean_ctor_set(v___x_5739_, 1, v_a_5722_);
if (v_isShared_5730_ == 0)
{
lean_ctor_set(v___x_5729_, 0, v___x_5739_);
v___x_5741_ = v___x_5729_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5742_; 
v_reuseFailAlloc_5742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5742_, 0, v___x_5739_);
v___x_5741_ = v_reuseFailAlloc_5742_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
return v___x_5741_;
}
}
}
}
else
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5751_; 
lean_dec_ref(v_a_5722_);
v_a_5744_ = lean_ctor_get(v___x_5726_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v___x_5726_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5746_ = v___x_5726_;
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5726_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5749_; 
if (v_isShared_5747_ == 0)
{
v___x_5749_ = v___x_5746_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5744_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
return v___x_5749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go___boxed(lean_object* v_a_5752_, lean_object* v_a_5753_){
_start:
{
lean_object* v_res_5754_; 
v_res_5754_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_a_5752_);
return v_res_5754_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(lean_object* v_a_5755_){
_start:
{
lean_object* v___x_5757_; 
v___x_5757_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_a_5755_);
return v___x_5757_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems___boxed(lean_object* v_a_5758_, lean_object* v_a_5759_){
_start:
{
lean_object* v_res_5760_; 
v_res_5760_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems(v_a_5758_);
return v_res_5760_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(lean_object* v_a_5761_){
_start:
{
lean_object* v_stream_5763_; lean_object* v_getLine_5764_; lean_object* v___x_5765_; 
v_stream_5763_ = lean_ctor_get(v_a_5761_, 0);
v_getLine_5764_ = lean_ctor_get(v_stream_5763_, 3);
lean_inc_ref(v_getLine_5764_);
v___x_5765_ = lean_apply_1(v_getLine_5764_, lean_box(0));
if (lean_obj_tag(v___x_5765_) == 0)
{
lean_object* v___x_5767_; uint8_t v_isShared_5768_; uint8_t v_isSharedCheck_5774_; 
v_isSharedCheck_5774_ = !lean_is_exclusive(v___x_5765_);
if (v_isSharedCheck_5774_ == 0)
{
lean_object* v_unused_5775_; 
v_unused_5775_ = lean_ctor_get(v___x_5765_, 0);
lean_dec(v_unused_5775_);
v___x_5767_ = v___x_5765_;
v_isShared_5768_ = v_isSharedCheck_5774_;
goto v_resetjp_5766_;
}
else
{
lean_dec(v___x_5765_);
v___x_5767_ = lean_box(0);
v_isShared_5768_ = v_isSharedCheck_5774_;
goto v_resetjp_5766_;
}
v_resetjp_5766_:
{
lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5772_; 
v___x_5769_ = lean_box(0);
v___x_5770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5770_, 0, v___x_5769_);
lean_ctor_set(v___x_5770_, 1, v_a_5761_);
if (v_isShared_5768_ == 0)
{
lean_ctor_set(v___x_5767_, 0, v___x_5770_);
v___x_5772_ = v___x_5767_;
goto v_reusejp_5771_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v___x_5770_);
v___x_5772_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5771_;
}
v_reusejp_5771_:
{
return v___x_5772_;
}
}
}
else
{
lean_object* v_a_5776_; lean_object* v___x_5778_; uint8_t v_isShared_5779_; uint8_t v_isSharedCheck_5783_; 
lean_dec_ref(v_a_5761_);
v_a_5776_ = lean_ctor_get(v___x_5765_, 0);
v_isSharedCheck_5783_ = !lean_is_exclusive(v___x_5765_);
if (v_isSharedCheck_5783_ == 0)
{
v___x_5778_ = v___x_5765_;
v_isShared_5779_ = v_isSharedCheck_5783_;
goto v_resetjp_5777_;
}
else
{
lean_inc(v_a_5776_);
lean_dec(v___x_5765_);
v___x_5778_ = lean_box(0);
v_isShared_5779_ = v_isSharedCheck_5783_;
goto v_resetjp_5777_;
}
v_resetjp_5777_:
{
lean_object* v___x_5781_; 
if (v_isShared_5779_ == 0)
{
v___x_5781_ = v___x_5778_;
goto v_reusejp_5780_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_a_5776_);
v___x_5781_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5780_;
}
v_reusejp_5780_:
{
return v___x_5781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata___boxed(lean_object* v_a_5784_, lean_object* v_a_5785_){
_start:
{
lean_object* v_res_5786_; 
v_res_5786_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(v_a_5784_);
return v_res_5786_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(lean_object* v_a_5787_){
_start:
{
lean_object* v___x_5789_; 
v___x_5789_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseMdata(v_a_5787_);
if (lean_obj_tag(v___x_5789_) == 0)
{
lean_object* v_a_5790_; lean_object* v_snd_5791_; lean_object* v___x_5792_; 
v_a_5790_ = lean_ctor_get(v___x_5789_, 0);
lean_inc(v_a_5790_);
lean_dec_ref_known(v___x_5789_, 1);
v_snd_5791_ = lean_ctor_get(v_a_5790_, 1);
lean_inc(v_snd_5791_);
lean_dec(v_a_5790_);
v___x_5792_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseItems_go(v_snd_5791_);
return v___x_5792_;
}
else
{
return v___x_5789_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed(lean_object* v_a_5793_, lean_object* v_a_5794_){
_start:
{
lean_object* v_res_5795_; 
v_res_5795_ = l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile(v_a_5793_);
return v_res_5795_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_parseStream(lean_object* v_stream_5796_){
_start:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; 
v___x_5798_ = lean_alloc_closure((void*)(l___private_LeanExport_Parse_0__LeanExport_Parse_parseFile___boxed), 2, 0);
v___x_5799_ = l___private_LeanExport_Parse_0__LeanExport_Parse_M_run___redArg(v___x_5798_, v_stream_5796_);
if (lean_obj_tag(v___x_5799_) == 0)
{
lean_object* v_a_5800_; lean_object* v___x_5802_; uint8_t v_isShared_5803_; uint8_t v_isSharedCheck_5812_; 
v_a_5800_ = lean_ctor_get(v___x_5799_, 0);
v_isSharedCheck_5812_ = !lean_is_exclusive(v___x_5799_);
if (v_isSharedCheck_5812_ == 0)
{
v___x_5802_ = v___x_5799_;
v_isShared_5803_ = v_isSharedCheck_5812_;
goto v_resetjp_5801_;
}
else
{
lean_inc(v_a_5800_);
lean_dec(v___x_5799_);
v___x_5802_ = lean_box(0);
v_isShared_5803_ = v_isSharedCheck_5812_;
goto v_resetjp_5801_;
}
v_resetjp_5801_:
{
lean_object* v_snd_5804_; lean_object* v_constMap_5805_; lean_object* v_constOrder_5806_; lean_object* v_rewrites_5807_; lean_object* v___x_5808_; lean_object* v___x_5810_; 
v_snd_5804_ = lean_ctor_get(v_a_5800_, 1);
lean_inc(v_snd_5804_);
lean_dec(v_a_5800_);
v_constMap_5805_ = lean_ctor_get(v_snd_5804_, 5);
lean_inc_ref(v_constMap_5805_);
v_constOrder_5806_ = lean_ctor_get(v_snd_5804_, 6);
lean_inc_ref(v_constOrder_5806_);
v_rewrites_5807_ = lean_ctor_get(v_snd_5804_, 7);
lean_inc_ref(v_rewrites_5807_);
lean_dec(v_snd_5804_);
v___x_5808_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5808_, 0, v_constMap_5805_);
lean_ctor_set(v___x_5808_, 1, v_constOrder_5806_);
lean_ctor_set(v___x_5808_, 2, v_rewrites_5807_);
if (v_isShared_5803_ == 0)
{
lean_ctor_set(v___x_5802_, 0, v___x_5808_);
v___x_5810_ = v___x_5802_;
goto v_reusejp_5809_;
}
else
{
lean_object* v_reuseFailAlloc_5811_; 
v_reuseFailAlloc_5811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5811_, 0, v___x_5808_);
v___x_5810_ = v_reuseFailAlloc_5811_;
goto v_reusejp_5809_;
}
v_reusejp_5809_:
{
return v___x_5810_;
}
}
}
else
{
lean_object* v_a_5813_; lean_object* v___x_5815_; uint8_t v_isShared_5816_; uint8_t v_isSharedCheck_5820_; 
v_a_5813_ = lean_ctor_get(v___x_5799_, 0);
v_isSharedCheck_5820_ = !lean_is_exclusive(v___x_5799_);
if (v_isSharedCheck_5820_ == 0)
{
v___x_5815_ = v___x_5799_;
v_isShared_5816_ = v_isSharedCheck_5820_;
goto v_resetjp_5814_;
}
else
{
lean_inc(v_a_5813_);
lean_dec(v___x_5799_);
v___x_5815_ = lean_box(0);
v_isShared_5816_ = v_isSharedCheck_5820_;
goto v_resetjp_5814_;
}
v_resetjp_5814_:
{
lean_object* v___x_5818_; 
if (v_isShared_5816_ == 0)
{
v___x_5818_ = v___x_5815_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v_a_5813_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_parseStream___boxed(lean_object* v_stream_5821_, lean_object* v_a_5822_){
_start:
{
lean_object* v_res_5823_; 
v_res_5823_ = l_LeanExport_parseStream(v_stream_5821_);
return v_res_5823_;
}
}
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_String(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_Parser(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_LeanExport_instInhabitedExportedEnv_default = _init_l_LeanExport_instInhabitedExportedEnv_default();
lean_mark_persistent(l_LeanExport_instInhabitedExportedEnv_default);
l_LeanExport_instInhabitedExportedEnv = _init_l_LeanExport_instInhabitedExportedEnv();
lean_mark_persistent(l_LeanExport_instInhabitedExportedEnv);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lean_Declaration(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_String(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanExport_Parse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanExport_Parse(builtin);
}
#ifdef __cplusplus
}
#endif
