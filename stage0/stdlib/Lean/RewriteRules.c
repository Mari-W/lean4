// Lean compiler output
// Module: Lean.RewriteRules
// Imports: public import Lean.ScopedEnvExtension public import Lean.Util.FoldConsts
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
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_rewriteRule_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_addRewriteRule(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_Expr_FoldConstsImpl_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Kernel_canonRewriteSet(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "rewriteScopeExt"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 220, 236, 53, 193, 27, 38, 48)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_rewriteScopeExt;
static lean_once_cell_t l_Lean_getExplicitRewriteRules___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getExplicitRewriteRules___closed__0;
LEAN_EXPORT lean_object* l_Lean_getExplicitRewriteRules(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Declaration_rewriteConsts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Declaration_rewriteConsts___closed__0 = (const lean_object*)&l_Lean_Declaration_rewriteConsts___closed__0_value;
static const lean_array_object l_Lean_Declaration_rewriteConsts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Declaration_rewriteConsts___closed__1 = (const lean_object*)&l_Lean_Declaration_rewriteConsts___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Declaration_rewriteConsts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_ruleTele(lean_object*, lean_object*);
static const lean_string_object l_Lean_getRewriteRuleInfo_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_getRewriteRuleInfo_x3f___closed__0 = (const lean_object*)&l_Lean_getRewriteRuleInfo_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getRewriteRuleInfo_x3f(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` is already a rewrite rule with priority "};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "RewriteRules"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 204, 206, 198, 199, 141, 101, 51)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(86, 128, 30, 50, 92, 184, 242, 126)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__6_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 33, 45, 241, 167, 250, 217, 137)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__7_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(158, 181, 198, 178, 128, 55, 253, 83)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__11_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__9_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 51, 67, 206, 66, 44, 91, 40)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__11_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__11_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__12_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__11_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(114, 129, 167, 242, 169, 8, 124, 104)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__12_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__12_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__13_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__12_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__4_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 60, 163, 106, 245, 229, 100, 184)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__13_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__13_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__14_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__13_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1343329246) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(23, 180, 25, 119, 197, 133, 246, 74)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__14_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__14_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__15_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__15_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__15_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__16_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__14_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__15_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(28, 210, 138, 10, 176, 98, 119, 243)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__16_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__16_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__17_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__17_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__17_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__18_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__16_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__17_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 0, 204, 82, 199, 148, 159, 153)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__18_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__18_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__19_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__18_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(169, 95, 230, 193, 51, 221, 182, 165)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__19_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__19_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__20_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__20_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__20_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__21_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__20_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 67, 55, 19, 78, 216, 184, 166)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__21_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__21_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__22_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__21_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__22_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__22_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__23_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "kernel rewrite rule"};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__23_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__23_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__24_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__19_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__21_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__23_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__24_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__24_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_RewriteRules_0__Lean_initFn___closed__25_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__24_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__22_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___closed__25_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_RewriteRules_0__Lean_initFn___closed__25_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v___y_1_){
_start:
{
lean_inc_ref(v___y_1_);
return v___y_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v___y_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(v___y_2_);
lean_dec_ref(v___y_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v___y_4_){
_start:
{
lean_inc(v___y_4_);
return v___y_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v___y_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(v___y_5_);
lean_dec(v___y_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v_x_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_a_8_);
lean_inc_ref_n(v___x_9_, 2);
v___x_10_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
lean_ctor_set(v___x_10_, 2, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v_x_11_, lean_object* v_a_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__2_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(v_x_11_, v_a_12_);
lean_dec_ref(v_x_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__3_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v_s_14_, lean_object* v_n_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_array_push(v_s_14_, v_n_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v_x_17_, lean_object* v_n_18_, lean_object* v___y_19_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v_n_18_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v_x_22_, lean_object* v_n_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__4_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(v_x_22_, v_n_23_, v___y_24_);
lean_dec_ref(v___y_24_);
lean_dec_ref(v_x_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(lean_object* v___x_27_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v___x_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__5_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(v___x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___closed__10_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_));
v___x_59_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2____boxed(lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_();
return v_res_61_;
}
}
static lean_object* _init_l_Lean_getExplicitRewriteRules___closed__0(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Array_instInhabited___redArg();
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExplicitRewriteRules(lean_object* v_env_63_){
_start:
{
lean_object* v___x_64_; lean_object* v_ext_65_; lean_object* v_toEnvExtension_66_; lean_object* v_asyncMode_67_; lean_object* v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_64_ = l_Lean_rewriteScopeExt;
v_ext_65_ = lean_ctor_get(v___x_64_, 1);
v_toEnvExtension_66_ = lean_ctor_get(v_ext_65_, 0);
v_asyncMode_67_ = lean_ctor_get(v_toEnvExtension_66_, 2);
v___x_68_ = lean_obj_once(&l_Lean_getExplicitRewriteRules___closed__0, &l_Lean_getExplicitRewriteRules___closed__0_once, _init_l_Lean_getExplicitRewriteRules___closed__0);
v___x_69_ = 0;
v___x_70_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_68_, v___x_64_, v_env_63_, v_asyncMode_67_, v___x_69_);
v___x_71_ = l_Lean_Kernel_canonRewriteSet(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2(lean_object* v_as_72_, size_t v_i_73_, size_t v_stop_74_, lean_object* v_b_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_usize_dec_eq(v_i_73_, v_stop_74_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v_toConstantVal_78_; lean_object* v_value_79_; lean_object* v_type_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; size_t v___x_86_; size_t v___x_87_; 
v___x_77_ = lean_array_uget_borrowed(v_as_72_, v_i_73_);
v_toConstantVal_78_ = lean_ctor_get(v___x_77_, 0);
v_value_79_ = lean_ctor_get(v___x_77_, 1);
v_type_80_ = lean_ctor_get(v_toConstantVal_78_, 2);
v___x_81_ = lean_unsigned_to_nat(2u);
v___x_82_ = lean_mk_empty_array_with_capacity(v___x_81_);
lean_inc_ref(v_type_80_);
v___x_83_ = lean_array_push(v___x_82_, v_type_80_);
lean_inc_ref(v_value_79_);
v___x_84_ = lean_array_push(v___x_83_, v_value_79_);
v___x_85_ = l_Array_append___redArg(v_b_75_, v___x_84_);
lean_dec_ref(v___x_84_);
v___x_86_ = ((size_t)1ULL);
v___x_87_ = lean_usize_add(v_i_73_, v___x_86_);
v_i_73_ = v___x_87_;
v_b_75_ = v___x_85_;
goto _start;
}
else
{
return v_b_75_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2___boxed(lean_object* v_as_89_, lean_object* v_i_90_, lean_object* v_stop_91_, lean_object* v_b_92_){
_start:
{
size_t v_i_boxed_93_; size_t v_stop_boxed_94_; lean_object* v_res_95_; 
v_i_boxed_93_ = lean_unbox_usize(v_i_90_);
lean_dec(v_i_90_);
v_stop_boxed_94_ = lean_unbox_usize(v_stop_91_);
lean_dec(v_stop_91_);
v_res_95_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2(v_as_89_, v_i_boxed_93_, v_stop_boxed_94_, v_b_92_);
lean_dec_ref(v_as_89_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___lam__0(lean_object* v_c_96_, lean_object* v_cs_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_array_push(v_cs_97_, v_c_96_);
return v___x_98_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(64u);
v___x_101_ = l_Lean_mkPtrSet___redArg(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_box(0);
v___x_103_ = lean_unsigned_to_nat(16u);
v___x_104_ = lean_mk_array(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__2);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
return v___x_107_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__3);
v___x_109_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__1);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0(lean_object* v_as_111_, size_t v_i_112_, size_t v_stop_113_, lean_object* v_b_114_){
_start:
{
uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_112_, v_stop_113_);
if (v___x_115_ == 0)
{
lean_object* v___f_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v_fst_120_; size_t v___x_121_; size_t v___x_122_; 
v___f_116_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__0));
v___x_117_ = lean_array_uget_borrowed(v_as_111_, v_i_112_);
v___x_118_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___closed__4);
lean_inc(v___x_117_);
v___x_119_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_116_, v___x_117_, v_b_114_, v___x_118_);
v_fst_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_fst_120_);
lean_dec_ref(v___x_119_);
v___x_121_ = ((size_t)1ULL);
v___x_122_ = lean_usize_add(v_i_112_, v___x_121_);
v_i_112_ = v___x_122_;
v_b_114_ = v_fst_120_;
goto _start;
}
else
{
return v_b_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0___boxed(lean_object* v_as_124_, lean_object* v_i_125_, lean_object* v_stop_126_, lean_object* v_b_127_){
_start:
{
size_t v_i_boxed_128_; size_t v_stop_boxed_129_; lean_object* v_res_130_; 
v_i_boxed_128_ = lean_unbox_usize(v_i_125_);
lean_dec(v_i_125_);
v_stop_boxed_129_ = lean_unbox_usize(v_stop_126_);
lean_dec(v_stop_126_);
v_res_130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0(v_as_124_, v_i_boxed_128_, v_stop_boxed_129_, v_b_127_);
lean_dec_ref(v_as_124_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1(size_t v_sz_131_, size_t v_i_132_, lean_object* v_bs_133_){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = lean_usize_dec_lt(v_i_132_, v_sz_131_);
if (v___x_134_ == 0)
{
return v_bs_133_;
}
else
{
lean_object* v_v_135_; lean_object* v_type_136_; lean_object* v___x_137_; lean_object* v_bs_x27_138_; size_t v___x_139_; size_t v___x_140_; lean_object* v___x_141_; 
v_v_135_ = lean_array_uget_borrowed(v_bs_133_, v_i_132_);
v_type_136_ = lean_ctor_get(v_v_135_, 1);
lean_inc_ref(v_type_136_);
v___x_137_ = lean_unsigned_to_nat(0u);
v_bs_x27_138_ = lean_array_uset(v_bs_133_, v_i_132_, v___x_137_);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_add(v_i_132_, v___x_139_);
v___x_141_ = lean_array_uset(v_bs_x27_138_, v_i_132_, v_type_136_);
v_i_132_ = v___x_140_;
v_bs_133_ = v___x_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1___boxed(lean_object* v_sz_143_, lean_object* v_i_144_, lean_object* v_bs_145_){
_start:
{
size_t v_sz_boxed_146_; size_t v_i_boxed_147_; lean_object* v_res_148_; 
v_sz_boxed_146_ = lean_unbox_usize(v_sz_143_);
lean_dec(v_sz_143_);
v_i_boxed_147_ = lean_unbox_usize(v_i_144_);
lean_dec(v_i_144_);
v_res_148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1(v_sz_boxed_146_, v_i_boxed_147_, v_bs_145_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3(lean_object* v_as_149_, size_t v_i_150_, size_t v_stop_151_, lean_object* v_b_152_){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = lean_usize_dec_eq(v_i_150_, v_stop_151_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v_type_155_; lean_object* v_ctors_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; size_t v_sz_161_; size_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; size_t v___x_166_; size_t v___x_167_; 
v___x_154_ = lean_array_uget_borrowed(v_as_149_, v_i_150_);
v_type_155_ = lean_ctor_get(v___x_154_, 1);
v_ctors_156_ = lean_ctor_get(v___x_154_, 2);
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_mk_empty_array_with_capacity(v___x_157_);
lean_inc_ref(v_type_155_);
v___x_159_ = lean_array_push(v___x_158_, v_type_155_);
lean_inc(v_ctors_156_);
v___x_160_ = lean_array_mk(v_ctors_156_);
v_sz_161_ = lean_array_size(v___x_160_);
v___x_162_ = ((size_t)0ULL);
v___x_163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Declaration_rewriteConsts_spec__1(v_sz_161_, v___x_162_, v___x_160_);
v___x_164_ = l_Array_append___redArg(v___x_159_, v___x_163_);
lean_dec_ref(v___x_163_);
v___x_165_ = l_Array_append___redArg(v_b_152_, v___x_164_);
lean_dec_ref(v___x_164_);
v___x_166_ = ((size_t)1ULL);
v___x_167_ = lean_usize_add(v_i_150_, v___x_166_);
v_i_150_ = v___x_167_;
v_b_152_ = v___x_165_;
goto _start;
}
else
{
return v_b_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3___boxed(lean_object* v_as_169_, lean_object* v_i_170_, lean_object* v_stop_171_, lean_object* v_b_172_){
_start:
{
size_t v_i_boxed_173_; size_t v_stop_boxed_174_; lean_object* v_res_175_; 
v_i_boxed_173_ = lean_unbox_usize(v_i_170_);
lean_dec(v_i_170_);
v_stop_boxed_174_ = lean_unbox_usize(v_stop_171_);
lean_dec(v_stop_171_);
v_res_175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3(v_as_169_, v_i_boxed_173_, v_stop_boxed_174_, v_b_172_);
lean_dec_ref(v_as_169_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_rewriteConsts(lean_object* v_decl_180_){
_start:
{
lean_object* v___y_182_; 
switch(lean_obj_tag(v_decl_180_))
{
case 0:
{
lean_object* v_val_190_; lean_object* v_toConstantVal_191_; lean_object* v_type_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_val_190_ = lean_ctor_get(v_decl_180_, 0);
lean_inc_ref(v_val_190_);
lean_dec_ref_known(v_decl_180_, 1);
v_toConstantVal_191_ = lean_ctor_get(v_val_190_, 0);
lean_inc_ref(v_toConstantVal_191_);
lean_dec_ref(v_val_190_);
v_type_192_ = lean_ctor_get(v_toConstantVal_191_, 2);
lean_inc_ref(v_type_192_);
lean_dec_ref(v_toConstantVal_191_);
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = lean_mk_empty_array_with_capacity(v___x_193_);
v___x_195_ = lean_array_push(v___x_194_, v_type_192_);
v___y_182_ = v___x_195_;
goto v___jp_181_;
}
case 4:
{
lean_object* v___x_196_; 
v___x_196_ = ((lean_object*)(l_Lean_Declaration_rewriteConsts___closed__0));
v___y_182_ = v___x_196_;
goto v___jp_181_;
}
case 5:
{
lean_object* v_defns_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_defns_197_ = lean_ctor_get(v_decl_180_, 0);
lean_inc(v_defns_197_);
lean_dec_ref_known(v_decl_180_, 1);
v___x_198_ = lean_array_mk(v_defns_197_);
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = ((lean_object*)(l_Lean_Declaration_rewriteConsts___closed__1));
v___x_201_ = lean_array_get_size(v___x_198_);
v___x_202_ = lean_nat_dec_lt(v___x_199_, v___x_201_);
if (v___x_202_ == 0)
{
lean_dec_ref(v___x_198_);
v___y_182_ = v___x_200_;
goto v___jp_181_;
}
else
{
size_t v___x_203_; size_t v___x_204_; lean_object* v___x_205_; 
v___x_203_ = ((size_t)0ULL);
v___x_204_ = lean_usize_of_nat(v___x_201_);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__2(v___x_198_, v___x_203_, v___x_204_, v___x_200_);
lean_dec_ref(v___x_198_);
v___y_182_ = v___x_205_;
goto v___jp_181_;
}
}
case 6:
{
lean_object* v_types_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_types_206_ = lean_ctor_get(v_decl_180_, 2);
lean_inc(v_types_206_);
lean_dec_ref_known(v_decl_180_, 3);
v___x_207_ = lean_array_mk(v_types_206_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = ((lean_object*)(l_Lean_Declaration_rewriteConsts___closed__1));
v___x_210_ = lean_array_get_size(v___x_207_);
v___x_211_ = lean_nat_dec_lt(v___x_208_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec_ref(v___x_207_);
v___y_182_ = v___x_209_;
goto v___jp_181_;
}
else
{
size_t v___x_212_; size_t v___x_213_; lean_object* v___x_214_; 
v___x_212_ = ((size_t)0ULL);
v___x_213_ = lean_usize_of_nat(v___x_210_);
v___x_214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__3(v___x_207_, v___x_212_, v___x_213_, v___x_209_);
lean_dec_ref(v___x_207_);
v___y_182_ = v___x_214_;
goto v___jp_181_;
}
}
default: 
{
lean_object* v_val_215_; lean_object* v_toConstantVal_216_; lean_object* v_value_217_; lean_object* v_type_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_val_215_ = lean_ctor_get(v_decl_180_, 0);
lean_inc_ref(v_val_215_);
lean_dec(v_decl_180_);
v_toConstantVal_216_ = lean_ctor_get(v_val_215_, 0);
lean_inc_ref(v_toConstantVal_216_);
v_value_217_ = lean_ctor_get(v_val_215_, 1);
lean_inc_ref(v_value_217_);
lean_dec_ref(v_val_215_);
v_type_218_ = lean_ctor_get(v_toConstantVal_216_, 2);
lean_inc_ref(v_type_218_);
lean_dec_ref(v_toConstantVal_216_);
v___x_219_ = lean_unsigned_to_nat(2u);
v___x_220_ = lean_mk_empty_array_with_capacity(v___x_219_);
v___x_221_ = lean_array_push(v___x_220_, v_type_218_);
v___x_222_ = lean_array_push(v___x_221_, v_value_217_);
v___y_182_ = v___x_222_;
goto v___jp_181_;
}
}
v___jp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___closed__8_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_));
v___x_185_ = lean_array_get_size(v___y_182_);
v___x_186_ = lean_nat_dec_lt(v___x_183_, v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v___y_182_);
return v___x_184_;
}
else
{
size_t v___x_187_; size_t v___x_188_; lean_object* v___x_189_; 
v___x_187_ = ((size_t)0ULL);
v___x_188_ = lean_usize_of_nat(v___x_185_);
v___x_189_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Declaration_rewriteConsts_spec__0(v___y_182_, v___x_187_, v___x_188_, v___x_184_);
lean_dec_ref(v___y_182_);
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_ruleTele(lean_object* v_n_223_, lean_object* v_x_224_){
_start:
{
if (lean_obj_tag(v_x_224_) == 7)
{
lean_object* v_body_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_body_225_ = lean_ctor_get(v_x_224_, 2);
lean_inc_ref(v_body_225_);
lean_dec_ref_known(v_x_224_, 3);
v___x_226_ = lean_unsigned_to_nat(1u);
v___x_227_ = lean_nat_add(v_n_223_, v___x_226_);
lean_dec(v_n_223_);
v_n_223_ = v___x_227_;
v_x_224_ = v_body_225_;
goto _start;
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v_n_223_);
lean_ctor_set(v___x_229_, 1, v_x_224_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getRewriteRuleInfo_x3f(lean_object* v_env_231_, lean_object* v_thm_232_){
_start:
{
uint8_t v___x_233_; lean_object* v___x_234_; 
v___x_233_ = 0;
lean_inc(v_thm_232_);
v___x_234_ = l_Lean_Environment_find_x3f(v_env_231_, v_thm_232_, v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; 
lean_dec(v_thm_232_);
v___x_235_ = lean_box(0);
return v___x_235_;
}
else
{
lean_object* v_val_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_267_; 
v_val_236_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_267_ == 0)
{
v___x_238_ = v___x_234_;
v_isShared_239_ = v_isSharedCheck_267_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_val_236_);
lean_dec(v___x_234_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_267_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_snd_243_; 
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = l_Lean_ConstantInfo_type(v_val_236_);
v___x_242_ = l___private_Lean_RewriteRules_0__Lean_ruleTele(v___x_240_, v___x_241_);
v_snd_243_ = lean_ctor_get(v___x_242_, 1);
lean_inc(v_snd_243_);
if (lean_obj_tag(v_snd_243_) == 5)
{
lean_object* v_fn_244_; 
v_fn_244_ = lean_ctor_get(v_snd_243_, 0);
lean_inc_ref(v_fn_244_);
if (lean_obj_tag(v_fn_244_) == 5)
{
lean_object* v_fn_245_; 
v_fn_245_ = lean_ctor_get(v_fn_244_, 0);
if (lean_obj_tag(v_fn_245_) == 5)
{
lean_object* v_fn_246_; 
v_fn_246_ = lean_ctor_get(v_fn_245_, 0);
if (lean_obj_tag(v_fn_246_) == 4)
{
lean_object* v_declName_247_; 
v_declName_247_ = lean_ctor_get(v_fn_246_, 0);
lean_inc(v_declName_247_);
if (lean_obj_tag(v_declName_247_) == 1)
{
lean_object* v_pre_248_; 
v_pre_248_ = lean_ctor_get(v_declName_247_, 0);
if (lean_obj_tag(v_pre_248_) == 0)
{
lean_object* v_fst_249_; lean_object* v_arg_250_; lean_object* v_arg_251_; lean_object* v_str_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v_fst_249_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_fst_249_);
lean_dec_ref(v___x_242_);
v_arg_250_ = lean_ctor_get(v_snd_243_, 1);
lean_inc_ref(v_arg_250_);
lean_dec_ref_known(v_snd_243_, 2);
v_arg_251_ = lean_ctor_get(v_fn_244_, 1);
lean_inc_ref(v_arg_251_);
lean_dec_ref_known(v_fn_244_, 2);
v_str_252_ = lean_ctor_get(v_declName_247_, 1);
lean_inc_ref(v_str_252_);
lean_dec_ref_known(v_declName_247_, 2);
v___x_253_ = ((lean_object*)(l_Lean_getRewriteRuleInfo_x3f___closed__0));
v___x_254_ = lean_string_dec_eq(v_str_252_, v___x_253_);
lean_dec_ref(v_str_252_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec_ref(v_arg_251_);
lean_dec_ref(v_arg_250_);
lean_dec(v_fst_249_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_255_ = lean_box(0);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_256_ = l_Lean_ConstantInfo_levelParams(v_val_236_);
lean_dec(v_val_236_);
v___x_257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_257_, 0, v_thm_232_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
lean_ctor_set(v___x_257_, 2, v_fst_249_);
lean_ctor_set(v___x_257_, 3, v_arg_251_);
lean_ctor_set(v___x_257_, 4, v_arg_250_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_257_);
v___x_259_ = v___x_238_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
lean_object* v___x_261_; 
lean_dec_ref_known(v_declName_247_, 2);
lean_dec_ref_known(v_fn_244_, 2);
lean_dec_ref_known(v_snd_243_, 2);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_261_ = lean_box(0);
return v___x_261_;
}
}
else
{
lean_object* v___x_262_; 
lean_dec(v_declName_247_);
lean_dec_ref_known(v_fn_244_, 2);
lean_dec_ref_known(v_snd_243_, 2);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_262_ = lean_box(0);
return v___x_262_;
}
}
else
{
lean_object* v___x_263_; 
lean_dec_ref_known(v_fn_244_, 2);
lean_dec_ref_known(v_snd_243_, 2);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_263_ = lean_box(0);
return v___x_263_;
}
}
else
{
lean_object* v___x_264_; 
lean_dec_ref_known(v_fn_244_, 2);
lean_dec_ref_known(v_snd_243_, 2);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_264_ = lean_box(0);
return v___x_264_;
}
}
else
{
lean_object* v___x_265_; 
lean_dec_ref_known(v_snd_243_, 2);
lean_dec_ref(v_fn_244_);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_265_ = lean_box(0);
return v___x_265_;
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v_snd_243_);
lean_dec_ref(v___x_242_);
lean_del_object(v___x_238_);
lean_dec(v_val_236_);
lean_dec(v_thm_232_);
v___x_266_ = lean_box(0);
return v___x_266_;
}
}
}
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_268_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__1);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg(lean_object* v_ext_273_, lean_object* v_b_274_, uint8_t v_kind_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_toCold_279_; lean_object* v_currNamespace_280_; lean_object* v___x_281_; lean_object* v_env_282_; lean_object* v_nextMacroScope_283_; lean_object* v_ngen_284_; lean_object* v_auxDeclNGen_285_; lean_object* v_traceState_286_; lean_object* v_recordedDeps_287_; lean_object* v_messages_288_; lean_object* v_infoState_289_; lean_object* v_snapshotTasks_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_302_; 
v_toCold_279_ = lean_ctor_get(v___y_276_, 0);
v_currNamespace_280_ = lean_ctor_get(v_toCold_279_, 4);
v___x_281_ = lean_st_ref_take(v___y_277_);
v_env_282_ = lean_ctor_get(v___x_281_, 0);
v_nextMacroScope_283_ = lean_ctor_get(v___x_281_, 1);
v_ngen_284_ = lean_ctor_get(v___x_281_, 2);
v_auxDeclNGen_285_ = lean_ctor_get(v___x_281_, 3);
v_traceState_286_ = lean_ctor_get(v___x_281_, 4);
v_recordedDeps_287_ = lean_ctor_get(v___x_281_, 6);
v_messages_288_ = lean_ctor_get(v___x_281_, 7);
v_infoState_289_ = lean_ctor_get(v___x_281_, 8);
v_snapshotTasks_290_ = lean_ctor_get(v___x_281_, 9);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; 
v_unused_303_ = lean_ctor_get(v___x_281_, 5);
lean_dec(v_unused_303_);
v___x_292_ = v___x_281_;
v_isShared_293_ = v_isSharedCheck_302_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_snapshotTasks_290_);
lean_inc(v_infoState_289_);
lean_inc(v_messages_288_);
lean_inc(v_recordedDeps_287_);
lean_inc(v_traceState_286_);
lean_inc(v_auxDeclNGen_285_);
lean_inc(v_ngen_284_);
lean_inc(v_nextMacroScope_283_);
lean_inc(v_env_282_);
lean_dec(v___x_281_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_302_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_294_ = lean_box(0);
lean_inc(v_currNamespace_280_);
v___x_295_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_282_, v_ext_273_, v_b_274_, v_kind_275_, v_currNamespace_280_);
v___x_296_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 5, v___x_296_);
lean_ctor_set(v___x_292_, 0, v___x_295_);
v___x_298_ = v___x_292_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_nextMacroScope_283_);
lean_ctor_set(v_reuseFailAlloc_301_, 2, v_ngen_284_);
lean_ctor_set(v_reuseFailAlloc_301_, 3, v_auxDeclNGen_285_);
lean_ctor_set(v_reuseFailAlloc_301_, 4, v_traceState_286_);
lean_ctor_set(v_reuseFailAlloc_301_, 5, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_301_, 6, v_recordedDeps_287_);
lean_ctor_set(v_reuseFailAlloc_301_, 7, v_messages_288_);
lean_ctor_set(v_reuseFailAlloc_301_, 8, v_infoState_289_);
lean_ctor_set(v_reuseFailAlloc_301_, 9, v_snapshotTasks_290_);
v___x_298_ = v_reuseFailAlloc_301_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_st_ref_put(v___y_277_, v___x_298_);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_294_);
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_ext_304_, lean_object* v_b_305_, lean_object* v_kind_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
uint8_t v_kind_boxed_310_; lean_object* v_res_311_; 
v_kind_boxed_310_ = lean_unbox(v_kind_306_);
v_res_311_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg(v_ext_304_, v_b_305_, v_kind_boxed_310_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_312_, lean_object* v_00_u03b2_313_, lean_object* v_00_u03c3_314_, lean_object* v_ext_315_, lean_object* v_b_316_, uint8_t v_kind_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg(v_ext_315_, v_b_316_, v_kind_317_, v___y_318_, v___y_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_322_, lean_object* v_00_u03b2_323_, lean_object* v_00_u03c3_324_, lean_object* v_ext_325_, lean_object* v_b_326_, lean_object* v_kind_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
uint8_t v_kind_boxed_331_; lean_object* v_res_332_; 
v_kind_boxed_331_ = lean_unbox(v_kind_327_);
v_res_332_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0(v_00_u03b1_322_, v_00_u03b2_323_, v_00_u03c3_324_, v_ext_325_, v_b_326_, v_kind_boxed_331_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg(lean_object* v_env_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; lean_object* v_nextMacroScope_337_; lean_object* v_ngen_338_; lean_object* v_auxDeclNGen_339_; lean_object* v_traceState_340_; lean_object* v_recordedDeps_341_; lean_object* v_messages_342_; lean_object* v_infoState_343_; lean_object* v_snapshotTasks_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_355_; 
v___x_336_ = lean_st_ref_take(v___y_334_);
v_nextMacroScope_337_ = lean_ctor_get(v___x_336_, 1);
v_ngen_338_ = lean_ctor_get(v___x_336_, 2);
v_auxDeclNGen_339_ = lean_ctor_get(v___x_336_, 3);
v_traceState_340_ = lean_ctor_get(v___x_336_, 4);
v_recordedDeps_341_ = lean_ctor_get(v___x_336_, 6);
v_messages_342_ = lean_ctor_get(v___x_336_, 7);
v_infoState_343_ = lean_ctor_get(v___x_336_, 8);
v_snapshotTasks_344_ = lean_ctor_get(v___x_336_, 9);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_355_ == 0)
{
lean_object* v_unused_356_; lean_object* v_unused_357_; 
v_unused_356_ = lean_ctor_get(v___x_336_, 5);
lean_dec(v_unused_356_);
v_unused_357_ = lean_ctor_get(v___x_336_, 0);
lean_dec(v_unused_357_);
v___x_346_ = v___x_336_;
v_isShared_347_ = v_isSharedCheck_355_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_snapshotTasks_344_);
lean_inc(v_infoState_343_);
lean_inc(v_messages_342_);
lean_inc(v_recordedDeps_341_);
lean_inc(v_traceState_340_);
lean_inc(v_auxDeclNGen_339_);
lean_inc(v_ngen_338_);
lean_inc(v_nextMacroScope_337_);
lean_dec(v___x_336_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_355_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__2);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 5, v___x_349_);
lean_ctor_set(v___x_346_, 0, v_env_333_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_env_333_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_nextMacroScope_337_);
lean_ctor_set(v_reuseFailAlloc_354_, 2, v_ngen_338_);
lean_ctor_set(v_reuseFailAlloc_354_, 3, v_auxDeclNGen_339_);
lean_ctor_set(v_reuseFailAlloc_354_, 4, v_traceState_340_);
lean_ctor_set(v_reuseFailAlloc_354_, 5, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_354_, 6, v_recordedDeps_341_);
lean_ctor_set(v_reuseFailAlloc_354_, 7, v_messages_342_);
lean_ctor_set(v_reuseFailAlloc_354_, 8, v_infoState_343_);
lean_ctor_set(v_reuseFailAlloc_354_, 9, v_snapshotTasks_344_);
v___x_351_ = v_reuseFailAlloc_354_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_st_ref_put(v___y_334_, v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_348_);
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_env_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg(v_env_358_, v___y_359_);
lean_dec(v___y_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2(lean_object* v_env_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg(v_env_362_, v___y_364_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2(v_env_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_371_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_375_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0);
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
lean_ctor_set(v___x_377_, 2, v___x_376_);
lean_ctor_set(v___x_377_, 3, v___x_376_);
lean_ctor_set(v___x_377_, 4, v___x_375_);
lean_ctor_set(v___x_377_, 5, v___x_375_);
lean_ctor_set(v___x_377_, 6, v___x_375_);
lean_ctor_set(v___x_377_, 7, v___x_375_);
lean_ctor_set(v___x_377_, 8, v___x_375_);
lean_ctor_set(v___x_377_, 9, v___x_375_);
lean_ctor_set(v___x_377_, 10, v___x_375_);
lean_ctor_set(v___x_377_, 11, v___x_374_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_unsigned_to_nat(32u);
v___x_379_ = lean_mk_empty_array_with_capacity(v___x_378_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3(void){
_start:
{
size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_381_ = ((size_t)5ULL);
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_unsigned_to_nat(32u);
v___x_384_ = lean_mk_empty_array_with_capacity(v___x_383_);
v___x_385_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__2);
v___x_386_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
lean_ctor_set(v___x_386_, 2, v___x_382_);
lean_ctor_set(v___x_386_, 3, v___x_382_);
lean_ctor_set_usize(v___x_386_, 4, v___x_381_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_387_ = lean_box(1);
v___x_388_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__3);
v___x_389_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__0);
v___x_390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
lean_ctor_set(v___x_390_, 1, v___x_388_);
lean_ctor_set(v___x_390_, 2, v___x_387_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4(lean_object* v_msgData_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v_toCold_396_; lean_object* v_env_397_; lean_object* v_options_398_; uint8_t v___x_399_; lean_object* v_env_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_395_ = lean_st_ref_get(v___y_393_);
v_toCold_396_ = lean_ctor_get(v___y_392_, 0);
v_env_397_ = lean_ctor_get(v___x_395_, 0);
lean_inc_ref(v_env_397_);
lean_dec(v___x_395_);
v_options_398_ = lean_ctor_get(v_toCold_396_, 2);
v___x_399_ = 0;
v_env_400_ = l_Lean_Environment_setRecordingDeps(v_env_397_, v___x_399_);
v___x_401_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__1);
v___x_402_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___closed__4);
lean_inc_ref(v_options_398_);
v___x_403_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_403_, 0, v_env_400_);
lean_ctor_set(v___x_403_, 1, v___x_401_);
lean_ctor_set(v___x_403_, 2, v___x_402_);
lean_ctor_set(v___x_403_, 3, v_options_398_);
v___x_404_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v_msgData_391_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object* v_msgData_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4(v_msgData_406_, v___y_407_, v___y_408_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(lean_object* v_msg_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_ref_415_; lean_object* v___x_416_; lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_425_; 
v_ref_415_ = lean_ctor_get(v___y_412_, 2);
v___x_416_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3_spec__4(v_msg_411_, v___y_412_, v___y_413_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_425_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; lean_object* v___x_423_; 
lean_inc(v_ref_415_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v_ref_415_);
lean_ctor_set(v___x_421_, 1, v_a_417_);
if (v_isShared_420_ == 0)
{
lean_ctor_set_tag(v___x_419_, 1);
lean_ctor_set(v___x_419_, 0, v___x_421_);
v___x_423_ = v___x_419_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(v_msg_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
return v_res_430_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_box(0);
v___x_432_ = l_Lean_interruptExceptionId;
v___x_433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0);
v___x_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___boxed(lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg();
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg(lean_object* v_ex_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___y_444_; lean_object* v___y_445_; 
if (lean_obj_tag(v_ex_439_) == 16)
{
lean_object* v___x_449_; lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
v___x_449_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg();
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
v___y_444_ = v___y_440_;
v___y_445_ = v___y_441_;
goto v___jp_443_;
}
v___jp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_444_);
v___x_447_ = l_Lean_Kernel_Exception_toMessageData(v_ex_439_, v___x_446_);
v___x_448_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(v___x_447_, v___y_444_, v___y_445_);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg___boxed(lean_object* v_ex_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg(v_ex_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; 
v_a_467_ = lean_ctor_get(v_x_463_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v_x_463_, 1);
v___x_468_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg(v_a_467_, v___y_464_, v___y_465_);
return v___x_468_;
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v_x_463_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v_x_463_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 0);
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_x_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg(v_x_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
return v_res_481_;
}
}
static lean_object* _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_));
v___x_484_ = l_Lean_stringToMessageData(v___x_483_);
return v___x_484_;
}
}
static lean_object* _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_));
v___x_487_ = l_Lean_stringToMessageData(v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(lean_object* v_declName_488_, lean_object* v_stx_489_, uint8_t v_kind_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = l_Lean_Syntax_getArg(v_stx_489_, v___x_501_);
lean_inc(v___x_502_);
v___x_503_ = l_Lean_getAttrParamOptPrio(v___x_502_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; lean_object* v_env_506_; lean_object* v___x_507_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = lean_st_ref_get(v___y_492_);
v_env_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc_ref(v_env_506_);
lean_dec(v___x_505_);
v___x_507_ = l_Lean_Environment_rewriteRule_x3f(v_env_506_, v_declName_488_);
lean_dec_ref(v_env_506_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v___x_508_; lean_object* v_env_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec(v___x_502_);
v___x_508_ = lean_st_ref_get(v___y_492_);
v_env_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc_ref(v_env_509_);
lean_dec(v___x_508_);
lean_inc(v_declName_488_);
v___x_510_ = l_Lean_Environment_addRewriteRule(v_env_509_, v_declName_488_, v_a_504_);
v___x_511_ = l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg(v___x_510_, v___y_491_, v___y_492_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = l_Lean_setEnv___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__2___redArg(v_a_512_, v___y_492_);
lean_dec_ref(v___x_513_);
goto v___jp_494_;
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec(v_declName_488_);
v_a_514_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_511_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_511_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
else
{
lean_object* v_val_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_541_; 
v_val_522_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_541_ == 0)
{
v___x_524_ = v___x_507_;
v_isShared_525_ = v_isSharedCheck_541_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_val_522_);
lean_dec(v___x_507_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_541_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v_prio_526_; uint8_t v___x_527_; 
v_prio_526_ = lean_ctor_get(v_val_522_, 2);
lean_inc(v_prio_526_);
lean_dec(v_val_522_);
v___x_527_ = lean_nat_dec_eq(v_prio_526_, v_a_504_);
lean_dec(v_a_504_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
v___x_528_ = l_Lean_Syntax_isNone(v___x_502_);
lean_dec(v___x_502_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_529_ = lean_obj_once(&l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_, &l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once, _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_);
v___x_530_ = l_Lean_MessageData_ofConstName(v_declName_488_, v___x_528_);
v___x_531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_obj_once(&l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_, &l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once, _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_);
v___x_533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = l_Nat_reprFast(v_prio_526_);
if (v_isShared_525_ == 0)
{
lean_ctor_set_tag(v___x_524_, 3);
lean_ctor_set(v___x_524_, 0, v___x_534_);
v___x_536_ = v___x_524_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_540_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = l_Lean_MessageData_ofFormat(v___x_536_);
v___x_538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_533_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(v___x_538_, v___y_491_, v___y_492_);
return v___x_539_;
}
}
else
{
lean_dec(v_prio_526_);
lean_del_object(v___x_524_);
goto v___jp_494_;
}
}
else
{
lean_dec(v_prio_526_);
lean_del_object(v___x_524_);
lean_dec(v___x_502_);
goto v___jp_494_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v___x_502_);
lean_dec(v_declName_488_);
v_a_542_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_503_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_503_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
v___jp_494_:
{
uint8_t v___x_495_; uint8_t v___x_496_; 
v___x_495_ = 0;
v___x_496_ = l_Lean_instBEqAttributeKind_beq(v_kind_490_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = l_Lean_rewriteScopeExt;
v___x_498_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__0___redArg(v___x_497_, v_declName_488_, v_kind_490_, v___y_491_, v___y_492_);
return v___x_498_;
}
else
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec(v_declName_488_);
v___x_499_ = lean_box(0);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object* v_declName_550_, lean_object* v_stx_551_, lean_object* v_kind_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
uint8_t v_kind_boxed_556_; lean_object* v_res_557_; 
v_kind_boxed_556_ = lean_unbox(v_kind_552_);
v_res_557_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(v_declName_550_, v_stx_551_, v_kind_boxed_556_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v_stx_551_);
return v_res_557_;
}
}
static lean_object* _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_));
v___x_560_ = l_Lean_stringToMessageData(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_));
v___x_563_ = l_Lean_stringToMessageData(v___x_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(lean_object* v___x_564_, lean_object* v_decl_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_569_ = lean_obj_once(&l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_, &l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once, _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_);
v___x_570_ = l_Lean_MessageData_ofName(v___x_564_);
v___x_571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_obj_once(&l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_, &l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__once, _init_l___private_Lean_RewriteRules_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_);
v___x_573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(v___x_573_, v___y_566_, v___y_567_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object* v___x_575_, lean_object* v_decl_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Lean_RewriteRules_0__Lean_initFn___lam__1_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(v___x_575_, v_decl_576_, v___y_577_, v___y_578_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v_decl_576_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = ((lean_object*)(l___private_Lean_RewriteRules_0__Lean_initFn___closed__25_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_));
v___x_644_ = l_Lean_registerBuiltinAttribute(v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2____boxed(lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_();
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_647_, lean_object* v_x_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___redArg(v_x_648_, v___y_649_, v___y_650_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_653_, lean_object* v_x_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1(v_00_u03b1_653_, v_x_654_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b1_659_, lean_object* v_msg_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___redArg(v_msg_660_, v___y_661_, v___y_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3___boxed(lean_object* v_00_u03b1_665_, lean_object* v_msg_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_throwError___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__3(v_00_u03b1_665_, v_msg_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3(lean_object* v_00_u03b1_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg();
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1_spec__3(v_00_u03b1_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_00_u03b1_681_, lean_object* v_ex_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___redArg(v_ex_682_, v___y_683_, v___y_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_00_u03b1_687_, lean_object* v_ex_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2__spec__1_spec__1(v_00_u03b1_687_, v_ex_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
return v_res_692_;
}
}
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_FoldConsts(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_RewriteRules(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_981214932____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_rewriteScopeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_rewriteScopeExt);
lean_dec_ref(res);
res = l___private_Lean_RewriteRules_0__Lean_initFn_00___x40_Lean_RewriteRules_1343329246____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_RewriteRules(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* initialize_Lean_Util_FoldConsts(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_RewriteRules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_RewriteRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_RewriteRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_RewriteRules(builtin);
}
#ifdef __cplusplus
}
#endif
