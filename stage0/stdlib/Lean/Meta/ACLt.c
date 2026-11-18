// Lean compiler output
// Module: Lean.Meta.ACLt
// Imports: public import Lean.Meta.DiscrTree.Main import Init.Data.Range.Polymorphic.Iterators import Lean.Meta.FunInfo
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
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_bvarIdx_x21(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
uint8_t l_Lean_Level_normLt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letValue_x21(lean_object*);
lean_object* l_Lean_Expr_letBody_x21(lean_object*);
lean_object* l_Lean_Expr_litValue_x21(lean_object*);
uint8_t l_Lean_Literal_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projIdx_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 2, 0, 1, 0, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.acLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "_private.Lean.Meta.ACLt.0.Lean.Meta.ACLt.main.lexSameCtor"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.ACLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
uint8_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
case 1:
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
case 2:
{
uint8_t v___x_4_; 
v___x_4_ = 2;
return v___x_4_;
}
case 3:
{
uint8_t v___x_5_; 
v___x_5_ = 3;
return v___x_5_;
}
case 4:
{
uint8_t v___x_6_; 
v___x_6_ = 4;
return v___x_6_;
}
case 5:
{
uint8_t v___x_7_; 
v___x_7_ = 8;
return v___x_7_;
}
case 6:
{
uint8_t v___x_8_; 
v___x_8_ = 9;
return v___x_8_;
}
case 7:
{
uint8_t v___x_9_; 
v___x_9_ = 10;
return v___x_9_;
}
case 8:
{
uint8_t v___x_10_; 
v___x_10_ = 11;
return v___x_10_;
}
case 9:
{
uint8_t v___x_11_; 
v___x_11_ = 5;
return v___x_11_;
}
case 10:
{
uint8_t v___x_12_; 
v___x_12_ = 6;
return v___x_12_;
}
default: 
{
uint8_t v___x_13_; 
v___x_13_ = 7;
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Expr_ctorWeight(v_x_14_);
lean_dec_ref(v_x_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(uint8_t v_x_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v_x_17_);
v___x_19_ = lean_obj_tag_nat(v___x_18_);
lean_dec(v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl___boxed(lean_object* v_x_20_){
_start:
{
uint8_t v_x_4__boxed_21_; lean_object* v_res_22_; 
v_x_4__boxed_21_ = lean_unbox(v_x_20_);
v_res_22_ = l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(v_x_4__boxed_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object* v_k_23_){
_start:
{
lean_inc(v_k_23_);
return v_k_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(v_k_24_);
lean_dec(v_k_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object* v_motive_26_, lean_object* v_ctorIdx_27_, uint8_t v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_inc(v_k_30_);
return v_k_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
uint8_t v_t_boxed_36_; lean_object* v_res_37_; 
v_t_boxed_36_ = lean_unbox(v_t_33_);
v_res_37_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_boxed_36_, v_h_34_, v_k_35_);
lean_dec(v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object* v_reduce_38_){
_start:
{
lean_inc(v_reduce_38_);
return v_reduce_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object* v_reduce_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(v_reduce_39_);
lean_dec(v_reduce_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object* v_motive_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_reduce_44_){
_start:
{
lean_inc(v_reduce_44_);
return v_reduce_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_reduce_48_){
_start:
{
uint8_t v_t_boxed_49_; lean_object* v_res_50_; 
v_t_boxed_49_ = lean_unbox(v_t_46_);
v_res_50_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim(v_motive_45_, v_t_boxed_49_, v_h_47_, v_reduce_48_);
lean_dec(v_reduce_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object* v_reduceSimpleOnly_51_){
_start:
{
lean_inc(v_reduceSimpleOnly_51_);
return v_reduceSimpleOnly_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object* v_reduceSimpleOnly_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(v_reduceSimpleOnly_52_);
lean_dec(v_reduceSimpleOnly_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object* v_motive_54_, uint8_t v_t_55_, lean_object* v_h_56_, lean_object* v_reduceSimpleOnly_57_){
_start:
{
lean_inc(v_reduceSimpleOnly_57_);
return v_reduceSimpleOnly_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_reduceSimpleOnly_61_){
_start:
{
uint8_t v_t_boxed_62_; lean_object* v_res_63_; 
v_t_boxed_62_ = lean_unbox(v_t_59_);
v_res_63_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(v_motive_58_, v_t_boxed_62_, v_h_60_, v_reduceSimpleOnly_61_);
lean_dec(v_reduceSimpleOnly_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object* v_none_64_){
_start:
{
lean_inc(v_none_64_);
return v_none_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object* v_none_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(v_none_65_);
lean_dec(v_none_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object* v_motive_67_, uint8_t v_t_68_, lean_object* v_h_69_, lean_object* v_none_70_){
_start:
{
lean_inc(v_none_70_);
return v_none_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_none_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l_Lean_Meta_ACLt_ReduceMode_none_elim(v_motive_71_, v_t_boxed_75_, v_h_73_, v_none_74_);
lean_dec(v_none_74_);
return v_res_76_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0));
v___x_84_ = l_Lean_Meta_Config_toConfigWithKey(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t v_mode_86_, lean_object* v_e_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
uint8_t v___x_93_; 
v___x_93_ = l_Lean_Expr_hasLooseBVars(v_e_87_);
if (v___x_93_ == 0)
{
switch(v_mode_86_)
{
case 0:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_DiscrTree_reduce(v_e_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
return v___x_94_;
}
case 1:
{
lean_object* v___x_95_; lean_object* v_config_96_; uint8_t v_trackZetaDelta_97_; lean_object* v_zetaDeltaSet_98_; lean_object* v_lctx_99_; lean_object* v_localInstances_100_; lean_object* v_defEqCtx_x3f_101_; lean_object* v_synthPendingDepth_102_; lean_object* v_customCanUnfoldPredicate_x3f_103_; uint8_t v_univApprox_104_; uint8_t v_inTypeClassResolution_105_; uint8_t v_cacheInferType_106_; lean_object* v_rewriteSet_x3f_107_; uint8_t v_rewriteFuelScope_108_; uint64_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_95_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
v_config_96_ = lean_ctor_get(v___x_95_, 0);
v_trackZetaDelta_97_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*8);
v_zetaDeltaSet_98_ = lean_ctor_get(v_a_88_, 1);
v_lctx_99_ = lean_ctor_get(v_a_88_, 2);
v_localInstances_100_ = lean_ctor_get(v_a_88_, 3);
v_defEqCtx_x3f_101_ = lean_ctor_get(v_a_88_, 4);
v_synthPendingDepth_102_ = lean_ctor_get(v_a_88_, 5);
v_customCanUnfoldPredicate_x3f_103_ = lean_ctor_get(v_a_88_, 6);
v_univApprox_104_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_105_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*8 + 2);
v_cacheInferType_106_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_107_ = lean_ctor_get(v_a_88_, 7);
v_rewriteFuelScope_108_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*8 + 4);
v___x_109_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_96_);
lean_inc_ref(v_config_96_);
v___x_110_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_110_, 0, v_config_96_);
lean_ctor_set_uint64(v___x_110_, sizeof(void*)*1, v___x_109_);
lean_inc(v_rewriteSet_x3f_107_);
lean_inc(v_customCanUnfoldPredicate_x3f_103_);
lean_inc(v_synthPendingDepth_102_);
lean_inc(v_defEqCtx_x3f_101_);
lean_inc_ref(v_localInstances_100_);
lean_inc_ref(v_lctx_99_);
lean_inc(v_zetaDeltaSet_98_);
v___x_111_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_zetaDeltaSet_98_);
lean_ctor_set(v___x_111_, 2, v_lctx_99_);
lean_ctor_set(v___x_111_, 3, v_localInstances_100_);
lean_ctor_set(v___x_111_, 4, v_defEqCtx_x3f_101_);
lean_ctor_set(v___x_111_, 5, v_synthPendingDepth_102_);
lean_ctor_set(v___x_111_, 6, v_customCanUnfoldPredicate_x3f_103_);
lean_ctor_set(v___x_111_, 7, v_rewriteSet_x3f_107_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*8, v_trackZetaDelta_97_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*8 + 1, v_univApprox_104_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*8 + 2, v_inTypeClassResolution_105_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*8 + 3, v_cacheInferType_106_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*8 + 4, v_rewriteFuelScope_108_);
v___x_112_ = l_Lean_Meta_DiscrTree_reduce(v_e_87_, v___x_111_, v_a_89_, v_a_90_, v_a_91_);
lean_dec_ref_known(v___x_111_, 8);
return v___x_112_;
}
default: 
{
lean_object* v___x_113_; 
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v_e_87_);
return v___x_113_;
}
}
}
else
{
lean_object* v___x_114_; 
v___x_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_114_, 0, v_e_87_);
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object* v_mode_115_, lean_object* v_e_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
uint8_t v_mode_boxed_122_; lean_object* v_res_123_; 
v_mode_boxed_122_ = lean_unbox(v_mode_115_);
v_res_123_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_boxed_122_, v_e_116_, v_a_117_, v_a_118_, v_a_119_, v_a_120_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object* v_f_126_, lean_object* v_numArgs_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = l_Lean_Expr_hasLooseBVars(v_f_126_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_getFunInfoNArgs(v_f_126_, v_numArgs_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_143_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_143_ == 0)
{
v___x_137_ = v___x_134_;
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_134_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v_paramInfo_139_; lean_object* v___x_141_; 
v_paramInfo_139_ = lean_ctor_get(v_a_135_, 0);
lean_inc_ref(v_paramInfo_139_);
lean_dec(v_a_135_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v_paramInfo_139_);
v___x_141_ = v___x_137_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_paramInfo_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
v_a_144_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_134_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_134_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_numArgs_127_);
lean_dec_ref(v_f_126_);
v___x_152_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0));
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object* v_f_154_, lean_object* v_numArgs_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_f_154_, v_numArgs_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___f_169_; lean_object* v___x_12973__overap_170_; lean_object* v___x_171_; 
v___f_169_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0));
v___x_12973__overap_170_ = lean_panic_fn_borrowed(v___f_169_, v_msg_163_);
lean_inc(v___y_167_);
lean_inc_ref(v___y_166_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
v___x_171_ = lean_apply_5(v___x_12973__overap_170_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, lean_box(0));
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object* v_msg_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v_msg_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object* v_msg_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = l_Lean_instInhabitedLocalDecl_default;
v___x_181_ = lean_panic_fn_borrowed(v___x_180_, v_msg_179_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t v_mode_183_, lean_object* v_a_u2081_184_, lean_object* v_a_u2082_185_, lean_object* v_b_u2081_186_, lean_object* v_b_u2082_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v___x_193_; 
lean_inc_ref(v_b_u2081_186_);
lean_inc_ref(v_a_u2081_184_);
v___x_193_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_183_, v_a_u2081_184_, v_b_u2081_186_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; uint8_t v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
v___x_195_ = lean_unbox(v_a_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; 
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_196_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_183_, v_b_u2081_186_, v_a_u2081_184_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_206_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_206_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_206_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_206_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
uint8_t v___x_201_; 
v___x_201_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
lean_del_object(v___x_199_);
lean_dec(v_a_194_);
v___x_202_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_183_, v_a_u2082_185_, v_b_u2082_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
return v___x_202_;
}
else
{
lean_object* v___x_204_; 
lean_dec_ref(v_b_u2082_187_);
lean_dec_ref(v_a_u2082_185_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_a_194_);
v___x_204_ = v___x_199_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_194_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_dec(v_a_194_);
lean_dec_ref(v_b_u2082_187_);
lean_dec_ref(v_a_u2082_185_);
return v___x_196_;
}
}
else
{
lean_dec_ref(v_b_u2082_187_);
lean_dec_ref(v_b_u2081_186_);
lean_dec_ref(v_a_u2082_185_);
lean_dec_ref(v_a_u2081_184_);
return v___x_193_;
}
}
else
{
lean_dec_ref(v_b_u2082_187_);
lean_dec_ref(v_b_u2081_186_);
lean_dec_ref(v_a_u2082_185_);
lean_dec_ref(v_a_u2081_184_);
return v___x_193_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_210_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2));
v___x_211_ = lean_unsigned_to_nat(14u);
v___x_212_ = lean_unsigned_to_nat(22u);
v___x_213_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1));
v___x_214_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0));
v___x_215_ = l_mkPanicMessageWithDecl(v___x_214_, v___x_213_, v___x_212_, v___x_211_, v___x_210_);
return v___x_215_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0(void){
_start:
{
lean_object* v___x_216_; lean_object* v_dummy_217_; 
v___x_216_ = lean_box(0);
v_dummy_217_ = l_Lean_Expr_sort___override(v___x_216_);
return v_dummy_217_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object* v_upperBound_221_, lean_object* v_a_222_, lean_object* v___x_223_, lean_object* v___x_224_, uint8_t v_mode_225_, lean_object* v_a_226_, lean_object* v_b_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_a_234_; uint8_t v___x_238_; 
v___x_238_ = lean_nat_dec_lt(v_a_226_, v_upperBound_221_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; 
lean_dec(v_a_226_);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v_b_227_);
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v_isInstance_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v_b_227_);
v___x_240_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_241_ = lean_array_get_borrowed(v___x_240_, v_a_222_, v_a_226_);
v_isInstance_242_ = lean_ctor_get_uint8(v___x_241_, sizeof(void*)*1 + 4);
v___x_243_ = lean_box(0);
v___x_244_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_242_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_245_ = l_Lean_instInhabitedExpr;
v___x_246_ = lean_array_get_borrowed(v___x_245_, v___x_223_, v_a_226_);
v___x_247_ = lean_array_get_borrowed(v___x_245_, v___x_224_, v_a_226_);
lean_inc(v___x_247_);
lean_inc(v___x_246_);
v___x_248_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_225_, v___x_246_, v___x_247_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_280_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_280_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_280_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_280_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
uint8_t v___x_253_; 
v___x_253_ = lean_unbox(v_a_249_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_del_object(v___x_251_);
lean_inc(v___x_246_);
lean_inc(v___x_247_);
v___x_254_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_225_, v___x_247_, v___x_246_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_265_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_265_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
uint8_t v___x_259_; 
v___x_259_ = lean_unbox(v_a_255_);
lean_dec(v_a_255_);
if (v___x_259_ == 0)
{
lean_del_object(v___x_257_);
lean_dec(v_a_249_);
v_a_234_ = v___x_244_;
goto v___jp_233_;
}
else
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
lean_dec(v_a_226_);
v___x_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_260_, 0, v_a_249_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_243_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_261_);
v___x_263_ = v___x_257_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
lean_dec(v_a_249_);
lean_dec(v_a_226_);
v_a_266_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_254_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_254_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
lean_dec(v_a_249_);
lean_dec(v_a_226_);
v___x_274_ = lean_box(v___x_238_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_243_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_276_);
v___x_278_ = v___x_251_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v_a_226_);
v_a_281_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_248_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_248_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
v_a_234_ = v___x_244_;
goto v___jp_233_;
}
}
v___jp_233_:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_a_226_, v___x_235_);
lean_dec(v_a_226_);
lean_inc_ref(v_a_234_);
v_a_226_ = v___x_236_;
v_b_227_ = v_a_234_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object* v_upperBound_289_, lean_object* v___x_290_, lean_object* v___x_291_, uint8_t v_mode_292_, lean_object* v_a_293_, lean_object* v_b_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v___x_300_; 
v___x_300_ = lean_nat_dec_lt(v_a_293_, v_upperBound_289_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
lean_dec(v_a_293_);
v___x_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_301_, 0, v_b_294_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec_ref(v_b_294_);
v___x_302_ = l_Lean_instInhabitedExpr;
v___x_303_ = lean_box(0);
v___x_304_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_305_ = lean_array_get_borrowed(v___x_302_, v___x_290_, v_a_293_);
v___x_306_ = lean_array_get_borrowed(v___x_302_, v___x_291_, v_a_293_);
lean_inc(v___x_306_);
lean_inc(v___x_305_);
v___x_307_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_292_, v___x_305_, v___x_306_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_342_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_342_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_342_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_342_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
uint8_t v___x_312_; 
v___x_312_ = lean_unbox(v_a_308_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
lean_del_object(v___x_310_);
lean_inc(v___x_305_);
lean_inc(v___x_306_);
v___x_313_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_292_, v___x_306_, v___x_305_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_327_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_327_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_327_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_327_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
uint8_t v___x_318_; 
v___x_318_ = lean_unbox(v_a_314_);
lean_dec(v_a_314_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_del_object(v___x_316_);
lean_dec(v_a_308_);
v___x_319_ = lean_unsigned_to_nat(1u);
v___x_320_ = lean_nat_add(v_a_293_, v___x_319_);
lean_dec(v_a_293_);
v_a_293_ = v___x_320_;
v_b_294_ = v___x_304_;
goto _start;
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
lean_dec(v_a_293_);
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v_a_308_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___x_303_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 0, v___x_323_);
v___x_325_ = v___x_316_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_a_308_);
lean_dec(v_a_293_);
v_a_328_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_313_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_313_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
lean_dec(v_a_308_);
lean_dec(v_a_293_);
v___x_336_ = lean_box(v___x_300_);
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_303_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_338_);
v___x_340_ = v___x_310_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec(v_a_293_);
v_a_343_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_307_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_307_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t v_mode_351_, lean_object* v_a_352_, lean_object* v_b_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_aFn_359_; lean_object* v_bFn_360_; lean_object* v___x_361_; 
v_aFn_359_ = l_Lean_Expr_getAppFn(v_a_352_);
v_bFn_360_ = l_Lean_Expr_getAppFn(v_b_353_);
lean_inc_ref(v_bFn_360_);
lean_inc_ref(v_aFn_359_);
v___x_361_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_351_, v_aFn_359_, v_bFn_360_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_459_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_459_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_459_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_459_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
uint8_t v___x_366_; uint8_t v___x_367_; 
v___x_366_ = 1;
v___x_367_ = lean_unbox(v_a_362_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
lean_del_object(v___x_364_);
lean_inc_ref(v_aFn_359_);
v___x_368_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_351_, v_bFn_360_, v_aFn_359_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_454_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_454_ == 0)
{
v___x_371_ = v___x_368_;
v_isShared_372_ = v_isSharedCheck_454_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_454_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
uint8_t v___x_373_; 
v___x_373_ = lean_unbox(v_a_369_);
lean_dec(v_a_369_);
if (v___x_373_ == 0)
{
lean_object* v_dummy_374_; lean_object* v_nargs_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_nargs_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
lean_dec(v_a_362_);
v_dummy_374_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0);
v_nargs_375_ = l_Lean_Expr_getAppNumArgs(v_a_352_);
lean_inc(v_nargs_375_);
v___x_376_ = lean_mk_array(v_nargs_375_, v_dummy_374_);
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_nat_sub(v_nargs_375_, v___x_377_);
lean_dec(v_nargs_375_);
v___x_379_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_352_, v___x_376_, v___x_378_);
v_nargs_380_ = l_Lean_Expr_getAppNumArgs(v_b_353_);
lean_inc(v_nargs_380_);
v___x_381_ = lean_mk_array(v_nargs_380_, v_dummy_374_);
v___x_382_ = lean_nat_sub(v_nargs_380_, v___x_377_);
lean_dec(v_nargs_380_);
v___x_383_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_b_353_, v___x_381_, v___x_382_);
v___x_384_ = lean_array_get_size(v___x_379_);
v___x_385_ = lean_array_get_size(v___x_383_);
v___x_386_ = lean_nat_dec_lt(v___x_384_, v___x_385_);
if (v___x_386_ == 0)
{
uint8_t v___x_387_; 
v___x_387_ = lean_nat_dec_lt(v___x_385_, v___x_384_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
lean_del_object(v___x_371_);
v___x_388_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_aFn_359_, v___x_384_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = lean_array_get_size(v_a_389_);
v___x_391_ = lean_unsigned_to_nat(0u);
v___x_392_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_393_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v___x_390_, v_a_389_, v___x_379_, v___x_383_, v_mode_351_, v___x_391_, v___x_392_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
lean_dec(v_a_389_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_426_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_426_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_426_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_426_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v_fst_398_; 
v_fst_398_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_fst_398_);
lean_dec(v_a_394_);
if (lean_obj_tag(v_fst_398_) == 0)
{
lean_object* v___x_399_; 
lean_del_object(v___x_396_);
v___x_399_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v___x_384_, v___x_379_, v___x_383_, v_mode_351_, v___x_390_, v___x_392_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_413_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_413_ == 0)
{
v___x_402_ = v___x_399_;
v_isShared_403_ = v_isSharedCheck_413_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_413_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v_fst_404_; 
v_fst_404_ = lean_ctor_get(v_a_400_, 0);
lean_inc(v_fst_404_);
lean_dec(v_a_400_);
if (lean_obj_tag(v_fst_404_) == 0)
{
lean_object* v___x_405_; lean_object* v___x_407_; 
v___x_405_ = lean_box(v___x_387_);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v___x_405_);
v___x_407_ = v___x_402_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
else
{
lean_object* v_val_409_; lean_object* v___x_411_; 
v_val_409_ = lean_ctor_get(v_fst_404_, 0);
lean_inc(v_val_409_);
lean_dec_ref_known(v_fst_404_, 1);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v_val_409_);
v___x_411_ = v___x_402_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_val_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
v_a_414_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_399_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_399_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
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
else
{
lean_object* v_val_422_; lean_object* v___x_424_; 
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
v_val_422_ = lean_ctor_get(v_fst_398_, 0);
lean_inc(v_val_422_);
lean_dec_ref_known(v_fst_398_, 1);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v_val_422_);
v___x_424_ = v___x_396_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_val_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
v_a_427_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_393_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_393_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
else
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
v_a_435_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_388_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_388_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_435_);
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
lean_object* v___x_443_; lean_object* v___x_445_; 
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
lean_dec_ref(v_aFn_359_);
v___x_443_ = lean_box(v___x_386_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_443_);
v___x_445_ = v___x_371_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_449_; 
lean_dec_ref(v___x_383_);
lean_dec_ref(v___x_379_);
lean_dec_ref(v_aFn_359_);
v___x_447_ = lean_box(v___x_366_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_447_);
v___x_449_ = v___x_371_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_353_);
lean_dec_ref(v_a_352_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v_a_362_);
v___x_452_ = v___x_371_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_362_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
else
{
lean_dec(v_a_362_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_353_);
lean_dec_ref(v_a_352_);
return v___x_368_;
}
}
else
{
lean_object* v___x_455_; lean_object* v___x_457_; 
lean_dec(v_a_362_);
lean_dec_ref(v_bFn_360_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_353_);
lean_dec_ref(v_a_352_);
v___x_455_ = lean_box(v___x_366_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_455_);
v___x_457_ = v___x_364_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_dec_ref(v_bFn_360_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_353_);
lean_dec_ref(v_a_352_);
return v___x_361_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_463_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6));
v___x_464_ = lean_unsigned_to_nat(27u);
v___x_465_ = lean_unsigned_to_nat(152u);
v___x_466_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5));
v___x_467_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4));
v___x_468_ = l_mkPanicMessageWithDecl(v___x_467_, v___x_466_, v___x_465_, v___x_464_, v___x_463_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t v_mode_469_, lean_object* v_a_470_, lean_object* v_b_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_d_478_; lean_object* v_e_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; 
switch(lean_obj_tag(v_a_470_))
{
case 0:
{
lean_object* v_deBruijnIndex_487_; lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_deBruijnIndex_487_ = lean_ctor_get(v_a_470_, 0);
lean_inc(v_deBruijnIndex_487_);
lean_dec_ref_known(v_a_470_, 1);
v___x_488_ = l_Lean_Expr_bvarIdx_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_489_ = lean_nat_dec_lt(v_deBruijnIndex_487_, v___x_488_);
lean_dec(v___x_488_);
lean_dec(v_deBruijnIndex_487_);
v___x_490_ = lean_box(v___x_489_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
case 1:
{
lean_object* v_fvarId_492_; lean_object* v___x_493_; 
v_fvarId_492_ = lean_ctor_get(v_a_470_, 0);
lean_inc(v_fvarId_492_);
lean_dec_ref_known(v_a_470_, 1);
v___x_493_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_492_, v_a_472_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_494_);
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = l_Lean_Expr_fvarId_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_496_ = l_Lean_FVarId_findDecl_x3f___redArg(v___x_495_, v_a_472_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_519_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_519_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_519_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_519_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_511_; 
if (lean_obj_tag(v_a_494_) == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_517_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_516_);
v___y_511_ = v___x_517_;
goto v___jp_510_;
}
else
{
lean_object* v_val_518_; 
v_val_518_ = lean_ctor_get(v_a_494_, 0);
lean_inc(v_val_518_);
lean_dec_ref_known(v_a_494_, 1);
v___y_511_ = v_val_518_;
goto v___jp_510_;
}
v___jp_501_:
{
lean_object* v___x_504_; uint8_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_504_ = l_Lean_LocalDecl_index(v___y_503_);
lean_dec_ref(v___y_503_);
v___x_505_ = lean_nat_dec_lt(v___y_502_, v___x_504_);
lean_dec(v___x_504_);
lean_dec(v___y_502_);
v___x_506_ = lean_box(v___x_505_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_506_);
v___x_508_ = v___x_499_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
v___jp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_LocalDecl_index(v___y_511_);
lean_dec_ref(v___y_511_);
if (lean_obj_tag(v_a_497_) == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_514_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_513_);
v___y_502_ = v___x_512_;
v___y_503_ = v___x_514_;
goto v___jp_501_;
}
else
{
lean_object* v_val_515_; 
v_val_515_ = lean_ctor_get(v_a_497_, 0);
lean_inc(v_val_515_);
lean_dec_ref_known(v_a_497_, 1);
v___y_502_ = v___x_512_;
v___y_503_ = v_val_515_;
goto v___jp_501_;
}
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v_a_494_);
v_a_520_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_496_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_496_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec_ref(v_b_471_);
v_a_528_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_493_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_493_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_536_; lean_object* v___x_537_; uint8_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_mvarId_536_ = lean_ctor_get(v_a_470_, 0);
lean_inc(v_mvarId_536_);
lean_dec_ref_known(v_a_470_, 1);
v___x_537_ = l_Lean_Expr_mvarId_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_538_ = l_Lean_Name_lt(v_mvarId_536_, v___x_537_);
lean_dec(v___x_537_);
lean_dec(v_mvarId_536_);
v___x_539_ = lean_box(v___x_538_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
case 3:
{
lean_object* v_u_541_; lean_object* v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_u_541_ = lean_ctor_get(v_a_470_, 0);
lean_inc(v_u_541_);
lean_dec_ref_known(v_a_470_, 1);
v___x_542_ = l_Lean_Expr_sortLevel_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_543_ = l_Lean_Level_normLt(v_u_541_, v___x_542_);
lean_dec(v___x_542_);
lean_dec(v_u_541_);
v___x_544_ = lean_box(v___x_543_);
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
case 4:
{
lean_object* v_declName_546_; lean_object* v___x_547_; uint8_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_declName_546_ = lean_ctor_get(v_a_470_, 0);
lean_inc(v_declName_546_);
lean_dec_ref_known(v_a_470_, 2);
v___x_547_ = l_Lean_Expr_constName_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_548_ = l_Lean_Name_lt(v_declName_546_, v___x_547_);
lean_dec(v___x_547_);
lean_dec(v_declName_546_);
v___x_549_ = lean_box(v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
case 5:
{
lean_object* v___x_551_; 
v___x_551_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_469_, v_a_470_, v_b_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
return v___x_551_;
}
case 8:
{
lean_object* v_value_552_; lean_object* v_body_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v_value_552_ = lean_ctor_get(v_a_470_, 2);
lean_inc_ref(v_value_552_);
v_body_553_ = lean_ctor_get(v_a_470_, 3);
lean_inc_ref(v_body_553_);
lean_dec_ref_known(v_a_470_, 4);
v___x_554_ = l_Lean_Expr_letValue_x21(v_b_471_);
v___x_555_ = l_Lean_Expr_letBody_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_556_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_469_, v_value_552_, v_body_553_, v___x_554_, v___x_555_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
return v___x_556_;
}
case 9:
{
lean_object* v_a_557_; lean_object* v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_a_557_ = lean_ctor_get(v_a_470_, 0);
lean_inc_ref(v_a_557_);
lean_dec_ref_known(v_a_470_, 1);
v___x_558_ = l_Lean_Expr_litValue_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_559_ = l_Lean_Literal_lt(v_a_557_, v___x_558_);
lean_dec_ref(v___x_558_);
lean_dec_ref(v_a_557_);
v___x_560_ = lean_box(v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
case 10:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec_ref_known(v_a_470_, 2);
lean_dec_ref(v_b_471_);
v___x_562_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7);
v___x_563_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v___x_562_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
return v___x_563_;
}
case 11:
{
lean_object* v_idx_564_; lean_object* v_struct_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v_idx_564_ = lean_ctor_get(v_a_470_, 1);
lean_inc(v_idx_564_);
v_struct_565_ = lean_ctor_get(v_a_470_, 2);
lean_inc_ref(v_struct_565_);
lean_dec_ref_known(v_a_470_, 3);
v___x_566_ = l_Lean_Expr_projIdx_x21(v_b_471_);
v___x_567_ = lean_nat_dec_eq(v_idx_564_, v___x_566_);
if (v___x_567_ == 0)
{
uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec_ref(v_struct_565_);
lean_dec_ref(v_b_471_);
v___x_568_ = lean_nat_dec_lt(v_idx_564_, v___x_566_);
lean_dec(v___x_566_);
lean_dec(v_idx_564_);
v___x_569_ = lean_box(v___x_568_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec(v___x_566_);
lean_dec(v_idx_564_);
v___x_571_ = l_Lean_Expr_projExpr_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_572_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_469_, v_struct_565_, v___x_571_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
return v___x_572_;
}
}
default: 
{
lean_object* v_binderType_573_; lean_object* v_body_574_; 
v_binderType_573_ = lean_ctor_get(v_a_470_, 1);
lean_inc_ref(v_binderType_573_);
v_body_574_ = lean_ctor_get(v_a_470_, 2);
lean_inc_ref(v_body_574_);
lean_dec_ref(v_a_470_);
v_d_478_ = v_binderType_573_;
v_e_479_ = v_body_574_;
v___y_480_ = v_a_472_;
v___y_481_ = v_a_473_;
v___y_482_ = v_a_474_;
v___y_483_ = v_a_475_;
goto v___jp_477_;
}
}
v___jp_477_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = l_Lean_Expr_bindingDomain_x21(v_b_471_);
v___x_485_ = l_Lean_Expr_bindingBody_x21(v_b_471_);
lean_dec_ref(v_b_471_);
v___x_486_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_469_, v_d_478_, v_e_479_, v___x_484_, v___x_485_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t v_mode_575_, lean_object* v_a_576_, lean_object* v_b_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0));
v___x_584_ = l_Lean_Core_checkSystem(v___x_583_, v_a_580_, v_a_581_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
lean_dec_ref_known(v___x_584_, 1);
lean_inc_ref(v_a_576_);
lean_inc_ref(v_b_577_);
v___x_585_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_575_, v_b_577_, v_a_576_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; uint8_t v___x_587_; uint8_t v___x_588_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v___x_587_ = 1;
v___x_588_ = lean_unbox(v_a_586_);
if (v___x_588_ == 0)
{
uint8_t v___x_589_; uint8_t v___x_590_; uint8_t v___x_591_; 
v___x_589_ = l_Lean_Expr_ctorWeight(v_b_577_);
v___x_590_ = l_Lean_Expr_ctorWeight(v_a_576_);
v___x_591_ = lean_uint8_dec_lt(v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; 
lean_dec_ref_known(v___x_585_, 1);
lean_inc_ref(v_b_577_);
lean_inc_ref(v_a_576_);
v___x_592_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_575_, v_a_576_, v_b_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_608_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_608_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_608_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_608_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
uint8_t v___x_597_; 
v___x_597_ = lean_unbox(v_a_593_);
lean_dec(v_a_593_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; lean_object* v___x_600_; 
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
v___x_598_ = lean_box(v___x_591_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_598_);
v___x_600_ = v___x_595_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
else
{
uint8_t v___x_602_; 
v___x_602_ = lean_uint8_dec_lt(v___x_590_, v___x_589_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
lean_del_object(v___x_595_);
v___x_603_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_575_, v_a_576_, v_b_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
return v___x_603_;
}
else
{
lean_object* v___x_604_; lean_object* v___x_606_; 
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
v___x_604_ = lean_box(v___x_587_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_604_);
v___x_606_ = v___x_595_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
else
{
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
return v___x_592_;
}
}
else
{
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
return v___x_585_;
}
}
else
{
lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; 
v_unused_617_ = lean_ctor_get(v___x_585_, 0);
lean_dec(v_unused_617_);
v___x_610_ = v___x_585_;
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
else
{
lean_dec(v___x_585_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_612_ = lean_box(v___x_587_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_612_);
v___x_614_ = v___x_610_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
return v___x_585_;
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v_b_577_);
lean_dec_ref(v_a_576_);
v_a_618_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_584_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_584_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t v_mode_626_, lean_object* v_a_627_, lean_object* v_b_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = lean_expr_eqv(v_a_627_, v_b_628_);
if (v___x_634_ == 0)
{
uint8_t v___x_635_; 
v___x_635_ = l_Lean_Expr_isMData(v_a_627_);
if (v___x_635_ == 0)
{
uint8_t v___x_636_; 
v___x_636_ = l_Lean_Expr_isMData(v_b_628_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; 
v___x_637_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_626_, v_a_627_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_637_, 1);
v___x_639_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_626_, v_b_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_639_, 1);
v___x_641_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_626_, v_a_638_, v_a_640_, v_a_629_, v_a_630_, v_a_631_, v_a_632_);
return v___x_641_;
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_a_638_);
v_a_642_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_639_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_639_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_b_628_);
v_a_650_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_637_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_637_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
else
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_Expr_mdataExpr_x21(v_b_628_);
lean_dec_ref(v_b_628_);
v_b_628_ = v___x_658_;
goto _start;
}
}
else
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_Expr_mdataExpr_x21(v_a_627_);
lean_dec_ref(v_a_627_);
v_a_627_ = v___x_660_;
goto _start;
}
}
else
{
uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec_ref(v_b_628_);
lean_dec_ref(v_a_627_);
v___x_662_ = 0;
v___x_663_ = lean_box(v___x_662_);
v___x_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
return v___x_664_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object* v_upperBound_665_, lean_object* v_a_666_, lean_object* v_args_667_, uint8_t v_mode_668_, lean_object* v_b_669_, lean_object* v_a_670_, lean_object* v_b_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_a_678_; uint8_t v___x_682_; 
v___x_682_ = lean_nat_dec_lt(v_a_670_, v_upperBound_665_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; 
lean_dec(v_a_670_);
lean_dec_ref(v_b_669_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v_b_671_);
return v___x_683_;
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v_isInstance_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
lean_dec_ref(v_b_671_);
v___x_684_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_685_ = lean_array_get_borrowed(v___x_684_, v_a_666_, v_a_670_);
v_isInstance_686_ = lean_ctor_get_uint8(v___x_685_, sizeof(void*)*1 + 4);
v___x_687_ = lean_box(0);
v___x_688_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_686_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = l_Lean_instInhabitedExpr;
v___x_690_ = lean_array_get_borrowed(v___x_689_, v_args_667_, v_a_670_);
lean_inc_ref(v_b_669_);
lean_inc(v___x_690_);
v___x_691_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_668_, v___x_690_, v_b_669_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_702_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_702_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_702_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_702_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
uint8_t v___x_696_; 
v___x_696_ = lean_unbox(v_a_692_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
lean_dec(v_a_670_);
lean_dec_ref(v_b_669_);
v___x_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_697_, 0, v_a_692_);
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v___x_687_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_698_);
v___x_700_ = v___x_694_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
else
{
lean_del_object(v___x_694_);
lean_dec(v_a_692_);
v_a_678_ = v___x_688_;
goto v___jp_677_;
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec(v_a_670_);
lean_dec_ref(v_b_669_);
v_a_703_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_691_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_691_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
v_a_678_ = v___x_688_;
goto v___jp_677_;
}
}
v___jp_677_:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = lean_nat_add(v_a_670_, v___x_679_);
lean_dec(v_a_670_);
lean_inc_ref(v_a_678_);
v_a_670_ = v___x_680_;
v_b_671_ = v_a_678_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object* v_upperBound_711_, lean_object* v_args_712_, uint8_t v_mode_713_, lean_object* v_b_714_, lean_object* v_a_715_, lean_object* v_b_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_lt(v_a_715_, v_upperBound_711_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v_a_715_);
lean_dec_ref(v_b_714_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_b_716_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec_ref(v_b_716_);
v___x_724_ = lean_box(0);
v___x_725_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_726_ = lean_array_fget_borrowed(v_args_712_, v_a_715_);
lean_inc_ref(v_b_714_);
lean_inc(v___x_726_);
v___x_727_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_713_, v___x_726_, v_b_714_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_741_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_741_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_741_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_741_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
uint8_t v___x_732_; 
v___x_732_ = lean_unbox(v_a_728_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
lean_dec(v_a_715_);
lean_dec_ref(v_b_714_);
v___x_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_733_, 0, v_a_728_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v___x_724_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_734_);
v___x_736_ = v___x_730_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
else
{
lean_object* v___x_738_; lean_object* v___x_739_; 
lean_del_object(v___x_730_);
lean_dec(v_a_728_);
v___x_738_ = lean_unsigned_to_nat(1u);
v___x_739_ = lean_nat_add(v_a_715_, v___x_738_);
lean_dec(v_a_715_);
v_a_715_ = v___x_739_;
v_b_716_ = v___x_725_;
goto _start;
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v_a_715_);
lean_dec_ref(v_b_714_);
v_a_742_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_727_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_727_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t v_mode_750_, lean_object* v_b_751_, lean_object* v_x_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
if (lean_obj_tag(v_x_752_) == 5)
{
lean_object* v_fn_760_; lean_object* v_arg_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_fn_760_ = lean_ctor_get(v_x_752_, 0);
lean_inc_ref(v_fn_760_);
v_arg_761_ = lean_ctor_get(v_x_752_, 1);
lean_inc_ref(v_arg_761_);
lean_dec_ref_known(v_x_752_, 2);
v___x_762_ = lean_array_set(v_x_753_, v_x_754_, v_arg_761_);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_sub(v_x_754_, v___x_763_);
lean_dec(v_x_754_);
v_x_752_ = v_fn_760_;
v_x_753_ = v___x_762_;
v_x_754_ = v___x_764_;
goto _start;
}
else
{
lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_x_754_);
v___x_766_ = lean_array_get_size(v_x_753_);
v___x_767_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_x_752_, v___x_766_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v___x_769_ = lean_array_get_size(v_a_768_);
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
lean_inc_ref(v_b_751_);
v___x_772_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v___x_769_, v_a_768_, v_x_753_, v_mode_750_, v_b_751_, v___x_770_, v___x_771_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec(v_a_768_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_806_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_806_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_806_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_806_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v_fst_777_; 
v_fst_777_ = lean_ctor_get(v_a_773_, 0);
lean_inc(v_fst_777_);
lean_dec(v_a_773_);
if (lean_obj_tag(v_fst_777_) == 0)
{
lean_object* v___x_778_; 
lean_del_object(v___x_775_);
v___x_778_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v___x_766_, v_x_753_, v_mode_750_, v_b_751_, v___x_769_, v___x_771_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec_ref(v_x_753_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_793_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_793_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_793_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_793_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v_fst_783_; 
v_fst_783_ = lean_ctor_get(v_a_779_, 0);
lean_inc(v_fst_783_);
lean_dec(v_a_779_);
if (lean_obj_tag(v_fst_783_) == 0)
{
uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_784_ = 1;
v___x_785_ = lean_box(v___x_784_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_785_);
v___x_787_ = v___x_781_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
else
{
lean_object* v_val_789_; lean_object* v___x_791_; 
v_val_789_ = lean_ctor_get(v_fst_783_, 0);
lean_inc(v_val_789_);
lean_dec_ref_known(v_fst_783_, 1);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v_val_789_);
v___x_791_ = v___x_781_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_val_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
v_a_794_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_778_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_778_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_val_802_; lean_object* v___x_804_; 
lean_dec_ref(v_x_753_);
lean_dec_ref(v_b_751_);
v_val_802_ = lean_ctor_get(v_fst_777_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v_fst_777_, 1);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v_val_802_);
v___x_804_ = v___x_775_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_val_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_x_753_);
lean_dec_ref(v_b_751_);
v_a_807_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_772_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_772_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref(v_x_753_);
lean_dec_ref(v_b_751_);
v_a_815_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_767_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_767_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t v_mode_823_, lean_object* v_a_824_, lean_object* v_b_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_d_832_; lean_object* v_e_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; 
switch(lean_obj_tag(v_a_824_))
{
case 11:
{
lean_object* v_struct_842_; lean_object* v___x_843_; 
v_struct_842_ = lean_ctor_get(v_a_824_, 2);
lean_inc_ref(v_struct_842_);
lean_dec_ref_known(v_a_824_, 3);
v___x_843_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_823_, v_struct_842_, v_b_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_843_;
}
case 5:
{
lean_object* v_dummy_844_; lean_object* v_nargs_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_dummy_844_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0);
v_nargs_845_ = l_Lean_Expr_getAppNumArgs(v_a_824_);
lean_inc(v_nargs_845_);
v___x_846_ = lean_mk_array(v_nargs_845_, v_dummy_844_);
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = lean_nat_sub(v_nargs_845_, v___x_847_);
lean_dec(v_nargs_845_);
v___x_849_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_823_, v_b_825_, v_a_824_, v___x_846_, v___x_848_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_849_;
}
case 6:
{
lean_object* v_binderType_850_; lean_object* v_body_851_; 
v_binderType_850_ = lean_ctor_get(v_a_824_, 1);
lean_inc_ref(v_binderType_850_);
v_body_851_ = lean_ctor_get(v_a_824_, 2);
lean_inc_ref(v_body_851_);
lean_dec_ref_known(v_a_824_, 3);
v_d_832_ = v_binderType_850_;
v_e_833_ = v_body_851_;
v___y_834_ = v_a_826_;
v___y_835_ = v_a_827_;
v___y_836_ = v_a_828_;
v___y_837_ = v_a_829_;
goto v___jp_831_;
}
case 7:
{
lean_object* v_binderType_852_; lean_object* v_body_853_; 
v_binderType_852_ = lean_ctor_get(v_a_824_, 1);
lean_inc_ref(v_binderType_852_);
v_body_853_ = lean_ctor_get(v_a_824_, 2);
lean_inc_ref(v_body_853_);
lean_dec_ref_known(v_a_824_, 3);
v_d_832_ = v_binderType_852_;
v_e_833_ = v_body_853_;
v___y_834_ = v_a_826_;
v___y_835_ = v_a_827_;
v___y_836_ = v_a_828_;
v___y_837_ = v_a_829_;
goto v___jp_831_;
}
case 8:
{
lean_object* v_value_854_; lean_object* v_body_855_; lean_object* v___x_856_; 
v_value_854_ = lean_ctor_get(v_a_824_, 2);
lean_inc_ref(v_value_854_);
v_body_855_ = lean_ctor_get(v_a_824_, 3);
lean_inc_ref(v_body_855_);
lean_dec_ref_known(v_a_824_, 4);
lean_inc_ref(v_b_825_);
v___x_856_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_823_, v_value_854_, v_b_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; uint8_t v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v___x_858_ = lean_unbox(v_a_857_);
if (v___x_858_ == 0)
{
lean_dec_ref(v_body_855_);
lean_dec_ref(v_b_825_);
return v___x_856_;
}
else
{
lean_object* v___x_859_; 
lean_dec_ref_known(v___x_856_, 1);
v___x_859_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_823_, v_body_855_, v_b_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_859_;
}
}
else
{
lean_dec_ref(v_body_855_);
lean_dec_ref(v_b_825_);
return v___x_856_;
}
}
default: 
{
uint8_t v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
lean_dec_ref(v_b_825_);
lean_dec_ref(v_a_824_);
v___x_860_ = 1;
v___x_861_ = lean_box(v___x_860_);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
}
v___jp_831_:
{
lean_object* v___x_838_; 
lean_inc_ref(v_b_825_);
v___x_838_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_823_, v_d_832_, v_b_825_, v___y_834_, v___y_835_, v___y_836_, v___y_837_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; uint8_t v___x_840_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v___x_840_ = lean_unbox(v_a_839_);
if (v___x_840_ == 0)
{
lean_dec_ref(v_e_833_);
lean_dec_ref(v_b_825_);
return v___x_838_;
}
else
{
lean_object* v___x_841_; 
lean_dec_ref_known(v___x_838_, 1);
v___x_841_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_823_, v_e_833_, v_b_825_, v___y_834_, v___y_835_, v___y_836_, v___y_837_);
return v___x_841_;
}
}
else
{
lean_dec_ref(v_e_833_);
lean_dec_ref(v_b_825_);
return v___x_838_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t v_mode_863_, lean_object* v_a_864_, lean_object* v_b_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_863_, v_a_864_, v_b_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_887_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_887_ == 0)
{
v___x_874_ = v___x_871_;
v_isShared_875_ = v_isSharedCheck_887_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_871_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_887_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
uint8_t v___x_876_; 
v___x_876_ = lean_unbox(v_a_872_);
lean_dec(v_a_872_);
if (v___x_876_ == 0)
{
uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
v___x_877_ = 1;
v___x_878_ = lean_box(v___x_877_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_878_);
v___x_880_ = v___x_874_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
uint8_t v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_882_ = 0;
v___x_883_ = lean_box(v___x_882_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_883_);
v___x_885_ = v___x_874_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
else
{
return v___x_871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object* v_mode_888_, lean_object* v_a_889_, lean_object* v_b_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
uint8_t v_mode_boxed_896_; lean_object* v_res_897_; 
v_mode_boxed_896_ = lean_unbox(v_mode_888_);
v_res_897_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_boxed_896_, v_a_889_, v_b_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object* v_mode_898_, lean_object* v_a_u2081_899_, lean_object* v_a_u2082_900_, lean_object* v_b_u2081_901_, lean_object* v_b_u2082_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
uint8_t v_mode_boxed_908_; lean_object* v_res_909_; 
v_mode_boxed_908_ = lean_unbox(v_mode_898_);
v_res_909_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_boxed_908_, v_a_u2081_899_, v_a_u2082_900_, v_b_u2081_901_, v_b_u2082_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object* v_upperBound_910_, lean_object* v_args_911_, lean_object* v_mode_912_, lean_object* v_b_913_, lean_object* v_a_914_, lean_object* v_b_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
uint8_t v_mode_boxed_921_; lean_object* v_res_922_; 
v_mode_boxed_921_ = lean_unbox(v_mode_912_);
v_res_922_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_910_, v_args_911_, v_mode_boxed_921_, v_b_913_, v_a_914_, v_b_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec_ref(v_args_911_);
lean_dec(v_upperBound_910_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object* v_mode_923_, lean_object* v_a_924_, lean_object* v_b_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
uint8_t v_mode_boxed_931_; lean_object* v_res_932_; 
v_mode_boxed_931_ = lean_unbox(v_mode_923_);
v_res_932_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_boxed_931_, v_a_924_, v_b_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object* v_upperBound_933_, lean_object* v_a_934_, lean_object* v_args_935_, lean_object* v_mode_936_, lean_object* v_b_937_, lean_object* v_a_938_, lean_object* v_b_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
uint8_t v_mode_boxed_945_; lean_object* v_res_946_; 
v_mode_boxed_945_ = lean_unbox(v_mode_936_);
v_res_946_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_933_, v_a_934_, v_args_935_, v_mode_boxed_945_, v_b_937_, v_a_938_, v_b_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec_ref(v_args_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_upperBound_933_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object* v_mode_947_, lean_object* v_a_948_, lean_object* v_b_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
uint8_t v_mode_boxed_955_; lean_object* v_res_956_; 
v_mode_boxed_955_ = lean_unbox(v_mode_947_);
v_res_956_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_boxed_955_, v_a_948_, v_b_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object* v_mode_957_, lean_object* v_a_958_, lean_object* v_b_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
uint8_t v_mode_boxed_965_; lean_object* v_res_966_; 
v_mode_boxed_965_ = lean_unbox(v_mode_957_);
v_res_966_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_boxed_965_, v_a_958_, v_b_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object* v_upperBound_967_, lean_object* v___x_968_, lean_object* v___x_969_, lean_object* v_mode_970_, lean_object* v_a_971_, lean_object* v_b_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_mode_boxed_978_; lean_object* v_res_979_; 
v_mode_boxed_978_ = lean_unbox(v_mode_970_);
v_res_979_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_967_, v___x_968_, v___x_969_, v_mode_boxed_978_, v_a_971_, v_b_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec(v_upperBound_967_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object* v_mode_980_, lean_object* v_b_981_, lean_object* v_x_982_, lean_object* v_x_983_, lean_object* v_x_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
uint8_t v_mode_boxed_990_; lean_object* v_res_991_; 
v_mode_boxed_990_ = lean_unbox(v_mode_980_);
v_res_991_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_boxed_990_, v_b_981_, v_x_982_, v_x_983_, v_x_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object* v_upperBound_992_, lean_object* v_a_993_, lean_object* v___x_994_, lean_object* v___x_995_, lean_object* v_mode_996_, lean_object* v_a_997_, lean_object* v_b_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v_mode_boxed_1004_; lean_object* v_res_1005_; 
v_mode_boxed_1004_ = lean_unbox(v_mode_996_);
v_res_1005_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_992_, v_a_993_, v___x_994_, v___x_995_, v_mode_boxed_1004_, v_a_997_, v_b_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec_ref(v___x_995_);
lean_dec_ref(v___x_994_);
lean_dec_ref(v_a_993_);
lean_dec(v_upperBound_992_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object* v_mode_1006_, lean_object* v_a_1007_, lean_object* v_b_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
uint8_t v_mode_boxed_1014_; lean_object* v_res_1015_; 
v_mode_boxed_1014_ = lean_unbox(v_mode_1006_);
v_res_1015_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_boxed_1014_, v_a_1007_, v_b_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object* v_mode_1016_, lean_object* v_a_1017_, lean_object* v_b_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
uint8_t v_mode_boxed_1024_; lean_object* v_res_1025_; 
v_mode_boxed_1024_ = lean_unbox(v_mode_1016_);
v_res_1025_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_boxed_1024_, v_a_1017_, v_b_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object* v_upperBound_1026_, lean_object* v___x_1027_, lean_object* v___x_1028_, uint8_t v_mode_1029_, lean_object* v_inst_1030_, lean_object* v_R_1031_, lean_object* v_a_1032_, lean_object* v_b_1033_, lean_object* v_c_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_1026_, v___x_1027_, v___x_1028_, v_mode_1029_, v_a_1032_, v_b_1033_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object* v_upperBound_1041_, lean_object* v___x_1042_, lean_object* v___x_1043_, lean_object* v_mode_1044_, lean_object* v_inst_1045_, lean_object* v_R_1046_, lean_object* v_a_1047_, lean_object* v_b_1048_, lean_object* v_c_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v_mode_boxed_1055_; lean_object* v_res_1056_; 
v_mode_boxed_1055_ = lean_unbox(v_mode_1044_);
v_res_1056_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(v_upperBound_1041_, v___x_1042_, v___x_1043_, v_mode_boxed_1055_, v_inst_1045_, v_R_1046_, v_a_1047_, v_b_1048_, v_c_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec_ref(v___x_1043_);
lean_dec_ref(v___x_1042_);
lean_dec(v_upperBound_1041_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object* v_upperBound_1057_, lean_object* v_a_1058_, lean_object* v___x_1059_, lean_object* v___x_1060_, uint8_t v_mode_1061_, lean_object* v_inst_1062_, lean_object* v_R_1063_, lean_object* v_a_1064_, lean_object* v_b_1065_, lean_object* v_c_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_1057_, v_a_1058_, v___x_1059_, v___x_1060_, v_mode_1061_, v_a_1064_, v_b_1065_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object* v_upperBound_1073_, lean_object* v_a_1074_, lean_object* v___x_1075_, lean_object* v___x_1076_, lean_object* v_mode_1077_, lean_object* v_inst_1078_, lean_object* v_R_1079_, lean_object* v_a_1080_, lean_object* v_b_1081_, lean_object* v_c_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
uint8_t v_mode_boxed_1088_; lean_object* v_res_1089_; 
v_mode_boxed_1088_ = lean_unbox(v_mode_1077_);
v_res_1089_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(v_upperBound_1073_, v_a_1074_, v___x_1075_, v___x_1076_, v_mode_boxed_1088_, v_inst_1078_, v_R_1079_, v_a_1080_, v_b_1081_, v_c_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_upperBound_1073_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object* v_upperBound_1090_, lean_object* v_args_1091_, uint8_t v_mode_1092_, lean_object* v_b_1093_, lean_object* v_inst_1094_, lean_object* v_R_1095_, lean_object* v_a_1096_, lean_object* v_b_1097_, lean_object* v_c_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_1090_, v_args_1091_, v_mode_1092_, v_b_1093_, v_a_1096_, v_b_1097_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object* v_upperBound_1105_, lean_object* v_args_1106_, lean_object* v_mode_1107_, lean_object* v_b_1108_, lean_object* v_inst_1109_, lean_object* v_R_1110_, lean_object* v_a_1111_, lean_object* v_b_1112_, lean_object* v_c_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
uint8_t v_mode_boxed_1119_; lean_object* v_res_1120_; 
v_mode_boxed_1119_ = lean_unbox(v_mode_1107_);
v_res_1120_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(v_upperBound_1105_, v_args_1106_, v_mode_boxed_1119_, v_b_1108_, v_inst_1109_, v_R_1110_, v_a_1111_, v_b_1112_, v_c_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec_ref(v_args_1106_);
lean_dec(v_upperBound_1105_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object* v_upperBound_1121_, lean_object* v_a_1122_, lean_object* v_args_1123_, uint8_t v_mode_1124_, lean_object* v_b_1125_, lean_object* v_inst_1126_, lean_object* v_R_1127_, lean_object* v_a_1128_, lean_object* v_b_1129_, lean_object* v_c_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_1121_, v_a_1122_, v_args_1123_, v_mode_1124_, v_b_1125_, v_a_1128_, v_b_1129_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object* v_upperBound_1137_, lean_object* v_a_1138_, lean_object* v_args_1139_, lean_object* v_mode_1140_, lean_object* v_b_1141_, lean_object* v_inst_1142_, lean_object* v_R_1143_, lean_object* v_a_1144_, lean_object* v_b_1145_, lean_object* v_c_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
uint8_t v_mode_boxed_1152_; lean_object* v_res_1153_; 
v_mode_boxed_1152_ = lean_unbox(v_mode_1140_);
v_res_1153_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(v_upperBound_1137_, v_a_1138_, v_args_1139_, v_mode_boxed_1152_, v_b_1141_, v_inst_1142_, v_R_1143_, v_a_1144_, v_b_1145_, v_c_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec_ref(v_args_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_upperBound_1137_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object* v_a_1154_, lean_object* v_b_1155_, uint8_t v_mode_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1156_, v_a_1154_, v_b_1155_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object* v_a_1163_, lean_object* v_b_1164_, lean_object* v_mode_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
uint8_t v_mode_boxed_1171_; lean_object* v_res_1172_; 
v_mode_boxed_1171_ = lean_unbox(v_mode_1165_);
v_res_1172_ = l_Lean_Meta_ACLt_main(v_a_1163_, v_b_1164_, v_mode_boxed_1171_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object* v_a_1173_, lean_object* v_b_1174_, uint8_t v_mode_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1175_, v_a_1173_, v_b_1174_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object* v_a_1182_, lean_object* v_b_1183_, lean_object* v_mode_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
uint8_t v_mode_boxed_1190_; lean_object* v_res_1191_; 
v_mode_boxed_1190_ = lean_unbox(v_mode_1184_);
v_res_1191_ = l_Lean_Meta_acLt(v_a_1182_, v_b_1183_, v_mode_boxed_1190_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
lean_dec(v_a_1188_);
lean_dec_ref(v_a_1187_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
return v_res_1191_;
}
}
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config = _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config();
lean_mark_persistent(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ACLt(builtin);
}
#ifdef __cplusplus
}
#endif
