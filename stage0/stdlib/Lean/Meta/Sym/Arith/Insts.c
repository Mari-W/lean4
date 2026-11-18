// Lean compiler output
// Module: Lean.Meta.Sym.Arith.Insts
// Imports: public import Lean.Meta.Sym.Arith.EvalNum import Lean.Meta.Sym.SynthInstance import Init.Grind.Ring
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_Sym_sym_debug;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_evalNat_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IsCharP"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(193, 211, 245, 119, 67, 24, 212, 73)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "PowIdentity"};
static const lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "CommSemiring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 110, 106, 77, 169, 45, 119, 219)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "NatModule"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(134, 252, 171, 186, 15, 174, 251, 179)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "NoNatZeroDivisors"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 29, 6, 12, 7, 77, 98, 78)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LawfulOrderLT"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(125, 54, 67, 105, 183, 31, 31, 114)}};
static const lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "type has `LE` and `LT`, but the `LT` instance is not lawful, failed to synthesize"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "IsPreorder"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 213, 76, 156, 147, 68, 250, 139)}};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "type has `LE`, but is not a preorder, failed to synthesize"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "IsPartialOrder"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 36, 174, 137, 182, 135, 55)}};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "type has `LE`, but is not a partial order, failed to synthesize"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "IsLinearOrder"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 211, 224, 54, 22, 32, 255, 113)}};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "type has `LE`, but is not a linear order, failed to synthesize"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "IsLinearPreorder"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 98, 195, 196, 59, 47, 77, 198)}};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "type has `LE`, but is not a linear preorder, failed to synthesize"};
static const lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg___boxed(lean_object* v_e_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(v_e_27_, v___y_28_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(v_e_31_, v___y_35_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___boxed(lean_object* v_e_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0(v_e_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(lean_object* v_k_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
lean_inc(v___y_51_);
lean_inc_ref(v___y_50_);
v___x_57_ = lean_apply_7(v_k_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed(lean_object* v_k_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0(v_k_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(lean_object* v_k_67_, uint8_t v_allowLevelAssignments_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___f_76_; lean_object* v___x_77_; 
lean_inc(v___y_70_);
lean_inc_ref(v___y_69_);
v___f_76_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_76_, 0, v_k_67_);
lean_closure_set(v___f_76_, 1, v___y_69_);
lean_closure_set(v___f_76_, 2, v___y_70_);
v___x_77_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_68_, v___f_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_77_) == 0)
{
return v___x_77_;
}
else
{
lean_object* v_a_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v___x_77_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_a_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_a_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg___boxed(lean_object* v_k_86_, lean_object* v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_95_; lean_object* v_res_96_; 
v_allowLevelAssignments_boxed_95_ = lean_unbox(v_allowLevelAssignments_87_);
v_res_96_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(v_k_86_, v_allowLevelAssignments_boxed_95_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1(lean_object* v_00_u03b1_97_, lean_object* v_k_98_, uint8_t v_allowLevelAssignments_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(v_k_98_, v_allowLevelAssignments_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___boxed(lean_object* v_00_u03b1_108_, lean_object* v_k_109_, lean_object* v_allowLevelAssignments_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_118_; lean_object* v_res_119_; 
v_allowLevelAssignments_boxed_118_ = lean_unbox(v_allowLevelAssignments_110_);
v_res_119_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1(v_00_u03b1_108_, v_k_109_, v_allowLevelAssignments_boxed_118_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0(lean_object* v___x_127_, uint8_t v___x_128_, lean_object* v___x_129_, lean_object* v_u_130_, lean_object* v___x_131_, lean_object* v_type_132_, lean_object* v_semiringInst_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lean_Meta_mkFreshExprMVar(v___x_127_, v___x_128_, v___x_129_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v_charType_146_; lean_object* v___x_147_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc_n(v_a_142_, 2);
lean_dec_ref_known(v___x_141_, 1);
v___x_143_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__3));
v___x_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_144_, 0, v_u_130_);
lean_ctor_set(v___x_144_, 1, v___x_131_);
v___x_145_ = l_Lean_mkConst(v___x_143_, v___x_144_);
v_charType_146_ = l_Lean_mkApp3(v___x_145_, v_type_132_, v_semiringInst_133_, v_a_142_);
v___x_147_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_charType_146_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_189_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_189_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_189_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_189_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
if (lean_obj_tag(v_a_148_) == 1)
{
lean_object* v_val_152_; lean_object* v___x_153_; lean_object* v_a_154_; lean_object* v___x_155_; 
lean_del_object(v___x_150_);
v_val_152_ = lean_ctor_get(v_a_148_, 0);
lean_inc(v_val_152_);
lean_dec_ref_known(v_a_148_, 1);
v___x_153_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_142_, v___y_137_);
v_a_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref(v___x_153_);
v___x_155_ = l_Lean_Meta_Sym_Arith_evalNat_x3f(v_a_154_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_176_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_176_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_176_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_176_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
if (lean_obj_tag(v_a_156_) == 1)
{
lean_object* v_val_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_171_; 
v_val_160_ = lean_ctor_get(v_a_156_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v_a_156_);
if (v_isSharedCheck_171_ == 0)
{
v___x_162_ = v_a_156_;
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_val_160_);
lean_dec(v_a_156_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v_val_152_);
lean_ctor_set(v___x_164_, 1, v_val_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_170_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; 
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_166_);
v___x_168_ = v___x_158_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
else
{
lean_object* v___x_172_; lean_object* v___x_174_; 
lean_dec(v_a_156_);
lean_dec(v_val_152_);
v___x_172_ = lean_box(0);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_172_);
v___x_174_ = v___x_158_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
lean_dec(v_val_152_);
v_a_177_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_155_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_155_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
else
{
lean_object* v___x_185_; lean_object* v___x_187_; 
lean_dec(v_a_148_);
lean_dec(v_a_142_);
v___x_185_ = lean_box(0);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_185_);
v___x_187_ = v___x_150_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
lean_dec(v_a_142_);
v_a_190_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_147_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_147_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_dec_ref(v_semiringInst_133_);
lean_dec_ref(v_type_132_);
lean_dec(v___x_131_);
lean_dec(v_u_130_);
v_a_198_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_141_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_141_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___boxed(lean_object* v___x_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v_u_209_, lean_object* v___x_210_, lean_object* v_type_211_, lean_object* v_semiringInst_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
uint8_t v___x_3887__boxed_220_; lean_object* v_res_221_; 
v___x_3887__boxed_220_ = lean_unbox(v___x_207_);
v_res_221_ = l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0(v___x_206_, v___x_3887__boxed_220_, v___x_208_, v_u_209_, v___x_210_, v_type_211_, v_semiringInst_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
return v_res_221_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_box(0);
v___x_226_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__1));
v___x_227_ = l_Lean_mkConst(v___x_226_, v___x_225_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2, &l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__2);
v___x_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f(lean_object* v_u_230_, lean_object* v_type_231_, lean_object* v_semiringInst_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___f_245_; uint8_t v___x_246_; lean_object* v___x_247_; 
v___x_240_ = lean_box(0);
v___x_241_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3, &l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__3);
v___x_242_ = 0;
v___x_243_ = lean_box(0);
v___x_244_ = lean_box(v___x_242_);
v___f_245_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___boxed), 14, 7);
lean_closure_set(v___f_245_, 0, v___x_241_);
lean_closure_set(v___f_245_, 1, v___x_244_);
lean_closure_set(v___f_245_, 2, v___x_243_);
lean_closure_set(v___f_245_, 3, v_u_230_);
lean_closure_set(v___f_245_, 4, v___x_240_);
lean_closure_set(v___f_245_, 5, v_type_231_);
lean_closure_set(v___f_245_, 6, v_semiringInst_232_);
v___x_246_ = 0;
v___x_247_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(v___f_245_, v___x_246_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___boxed(lean_object* v_u_248_, lean_object* v_type_249_, lean_object* v_semiringInst_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_Meta_Sym_Arith_getIsCharInst_x3f(v_u_248_, v_type_249_, v_semiringInst_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_);
lean_dec(v_a_256_);
lean_dec_ref(v_a_255_);
lean_dec(v_a_254_);
lean_dec_ref(v_a_253_);
lean_dec(v_a_252_);
lean_dec_ref(v_a_251_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0(lean_object* v___x_260_, uint8_t v___x_261_, lean_object* v___x_262_, lean_object* v___x_263_, lean_object* v___x_264_, lean_object* v___x_265_, lean_object* v___x_266_, lean_object* v_type_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v___x_275_; 
lean_inc(v___x_262_);
v___x_275_ = l_Lean_Meta_mkFreshExprMVar(v___x_260_, v___x_261_, v___x_262_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
v___x_277_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___closed__1));
v___x_278_ = l_Lean_mkConst(v___x_277_, v___x_263_);
v___x_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
v___x_280_ = l_Lean_Meta_mkFreshExprMVar(v___x_279_, v___x_261_, v___x_262_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc_n(v_a_281_, 2);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___closed__0));
v___x_283_ = l_Lean_Name_mkStr3(v___x_264_, v___x_265_, v___x_282_);
v___x_284_ = l_Lean_mkConst(v___x_283_, v___x_266_);
lean_inc(v_a_276_);
v___x_285_ = l_Lean_mkApp3(v___x_284_, v_type_267_, v_a_276_, v_a_281_);
v___x_286_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_285_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_331_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_331_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_331_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_331_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
if (lean_obj_tag(v_a_287_) == 1)
{
lean_object* v_val_291_; lean_object* v___x_292_; lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v_a_295_; lean_object* v___x_296_; 
lean_del_object(v___x_289_);
v_val_291_ = lean_ctor_get(v_a_287_, 0);
lean_inc(v_val_291_);
lean_dec_ref_known(v_a_287_, 1);
v___x_292_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_276_, v___y_271_);
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref(v___x_292_);
v___x_294_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__0___redArg(v_a_281_, v___y_271_);
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
lean_dec_ref(v___x_294_);
v___x_296_ = l_Lean_Meta_Sym_Arith_evalNat_x3f(v_a_295_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_318_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_318_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_318_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_318_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
if (lean_obj_tag(v_a_297_) == 1)
{
lean_object* v_val_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_313_; 
v_val_301_ = lean_ctor_get(v_a_297_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v_a_297_);
if (v_isSharedCheck_313_ == 0)
{
v___x_303_ = v_a_297_;
v_isShared_304_ = v_isSharedCheck_313_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_val_301_);
lean_dec(v_a_297_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_313_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v_a_293_);
lean_ctor_set(v___x_305_, 1, v_val_301_);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v_val_291_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_306_);
v___x_308_ = v___x_303_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_312_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_310_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_308_);
v___x_310_ = v___x_299_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
else
{
lean_object* v___x_314_; lean_object* v___x_316_; 
lean_dec(v_a_297_);
lean_dec(v_a_293_);
lean_dec(v_val_291_);
v___x_314_ = lean_box(0);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_314_);
v___x_316_ = v___x_299_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
lean_dec(v_a_293_);
lean_dec(v_val_291_);
v_a_319_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_296_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_296_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v___x_327_; lean_object* v___x_329_; 
lean_dec(v_a_287_);
lean_dec(v_a_281_);
lean_dec(v_a_276_);
v___x_327_ = lean_box(0);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_327_);
v___x_329_ = v___x_289_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v___x_327_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec(v_a_281_);
lean_dec(v_a_276_);
v_a_332_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_286_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_286_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v_a_276_);
lean_dec_ref(v_type_267_);
lean_dec(v___x_266_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_264_);
v_a_340_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_280_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_280_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec_ref(v_type_267_);
lean_dec(v___x_266_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v___x_262_);
v_a_348_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_275_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_275_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___boxed(lean_object* v___x_356_, lean_object* v___x_357_, lean_object* v___x_358_, lean_object* v___x_359_, lean_object* v___x_360_, lean_object* v___x_361_, lean_object* v___x_362_, lean_object* v_type_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
uint8_t v___x_2597__boxed_371_; lean_object* v_res_372_; 
v___x_2597__boxed_371_ = lean_unbox(v___x_357_);
v_res_372_ = l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0(v___x_356_, v___x_2597__boxed_371_, v___x_358_, v___x_359_, v___x_360_, v___x_361_, v___x_362_, v_type_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f(lean_object* v_u_378_, lean_object* v_type_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___f_398_; uint8_t v___x_399_; lean_object* v___x_400_; 
v___x_387_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__0));
v___x_388_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIsCharInst_x3f___lam__0___closed__1));
v___x_389_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___closed__1));
v___x_390_ = lean_box(0);
v___x_391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_391_, 0, v_u_378_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
lean_inc_ref(v___x_391_);
v___x_392_ = l_Lean_mkConst(v___x_389_, v___x_391_);
lean_inc_ref(v_type_379_);
v___x_393_ = l_Lean_Expr_app___override(v___x_392_, v_type_379_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
v___x_395_ = 0;
v___x_396_ = lean_box(0);
v___x_397_ = lean_box(v___x_395_);
v___f_398_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___lam__0___boxed), 15, 8);
lean_closure_set(v___f_398_, 0, v___x_394_);
lean_closure_set(v___f_398_, 1, v___x_397_);
lean_closure_set(v___f_398_, 2, v___x_396_);
lean_closure_set(v___f_398_, 3, v___x_390_);
lean_closure_set(v___f_398_, 4, v___x_387_);
lean_closure_set(v___f_398_, 5, v___x_388_);
lean_closure_set(v___f_398_, 6, v___x_391_);
lean_closure_set(v___f_398_, 7, v_type_379_);
v___x_399_ = 0;
v___x_400_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Arith_getIsCharInst_x3f_spec__1___redArg(v___f_398_, v___x_399_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f___boxed(lean_object* v_u_401_, lean_object* v_type_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Sym_Arith_getPowIdentityInst_x3f(v_u_401_, v_type_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg(lean_object* v_u_421_, lean_object* v_type_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_natModuleType_433_; lean_object* v___x_434_; 
v___x_429_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__1));
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_431_, 0, v_u_421_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
lean_inc_ref(v___x_431_);
v___x_432_ = l_Lean_mkConst(v___x_429_, v___x_431_);
lean_inc_ref(v_type_422_);
v_natModuleType_433_ = l_Lean_Expr_app___override(v___x_432_, v_type_422_);
v___x_434_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_natModuleType_433_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_448_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_448_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_448_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_448_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
if (lean_obj_tag(v_a_435_) == 1)
{
lean_object* v_val_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
lean_del_object(v___x_437_);
v_val_439_ = lean_ctor_get(v_a_435_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v_a_435_, 1);
v___x_440_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___closed__3));
v___x_441_ = l_Lean_mkConst(v___x_440_, v___x_431_);
v___x_442_ = l_Lean_mkAppB(v___x_441_, v_type_422_, v_val_439_);
v___x_443_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_442_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
return v___x_443_;
}
else
{
lean_object* v___x_444_; lean_object* v___x_446_; 
lean_dec(v_a_435_);
lean_dec_ref_known(v___x_431_, 2);
lean_dec_ref(v_type_422_);
v___x_444_ = lean_box(0);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_444_);
v___x_446_ = v___x_437_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_431_, 2);
lean_dec_ref(v_type_422_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg___boxed(lean_object* v_u_449_, lean_object* v_type_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg(v_u_449_, v_type_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f(lean_object* v_u_458_, lean_object* v_type_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___redArg(v_u_458_, v_type_459_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f___boxed(lean_object* v_u_468_, lean_object* v_type_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Meta_Sym_Arith_getNoZeroDivInst_x3f(v_u_468_, v_type_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
return v_res_477_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(lean_object* v_opts_478_, lean_object* v_opt_479_){
_start:
{
lean_object* v_name_480_; lean_object* v_defValue_481_; lean_object* v_map_482_; lean_object* v___x_483_; 
v_name_480_ = lean_ctor_get(v_opt_479_, 0);
v_defValue_481_ = lean_ctor_get(v_opt_479_, 1);
v_map_482_ = lean_ctor_get(v_opts_478_, 0);
v___x_483_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_482_, v_name_480_);
if (lean_obj_tag(v___x_483_) == 0)
{
uint8_t v___x_484_; 
v___x_484_ = lean_unbox(v_defValue_481_);
return v___x_484_;
}
else
{
lean_object* v_val_485_; 
v_val_485_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_val_485_);
lean_dec_ref_known(v___x_483_, 1);
if (lean_obj_tag(v_val_485_) == 1)
{
uint8_t v_v_486_; 
v_v_486_ = lean_ctor_get_uint8(v_val_485_, 0);
lean_dec_ref_known(v_val_485_, 0);
return v_v_486_;
}
else
{
uint8_t v___x_487_; 
lean_dec(v_val_485_);
v___x_487_ = lean_unbox(v_defValue_481_);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0___boxed(lean_object* v_opts_488_, lean_object* v_opt_489_){
_start:
{
uint8_t v_res_490_; lean_object* v_r_491_; 
v_res_490_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v_opts_488_, v_opt_489_);
lean_dec_ref(v_opt_489_);
lean_dec_ref(v_opts_488_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__3));
v___x_499_ = l_Lean_stringToMessageData(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(lean_object* v_u_500_, lean_object* v_type_501_, lean_object* v_ltInst_x3f_502_, lean_object* v_leInst_x3f_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
if (lean_obj_tag(v_ltInst_x3f_502_) == 1)
{
if (lean_obj_tag(v_leInst_x3f_503_) == 1)
{
lean_object* v_val_514_; lean_object* v_val_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v_lawfulOrderLTType_520_; lean_object* v___x_521_; 
v_val_514_ = lean_ctor_get(v_ltInst_x3f_502_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v_ltInst_x3f_502_, 1);
v_val_515_ = lean_ctor_get(v_leInst_x3f_503_, 0);
lean_inc(v_val_515_);
lean_dec_ref_known(v_leInst_x3f_503_, 1);
v___x_516_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__2));
v___x_517_ = lean_box(0);
v___x_518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_518_, 0, v_u_500_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
v___x_519_ = l_Lean_mkConst(v___x_516_, v___x_518_);
v_lawfulOrderLTType_520_ = l_Lean_mkApp3(v___x_519_, v_type_501_, v_val_514_, v_val_515_);
lean_inc_ref(v_lawfulOrderLTType_520_);
v___x_521_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_lawfulOrderLTType_520_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
if (lean_obj_tag(v_a_522_) == 1)
{
lean_dec_ref(v_lawfulOrderLTType_520_);
return v___x_521_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4, &l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4_once, _init_l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___closed__4);
v___x_524_ = l_Lean_indentExpr(v_lawfulOrderLTType_520_);
v___x_525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_504_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; uint8_t v_verbose_528_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
v_verbose_528_ = lean_ctor_get_uint8(v_a_527_, 0);
lean_dec(v_a_527_);
if (v_verbose_528_ == 0)
{
lean_dec_ref_known(v___x_525_, 2);
goto v___jp_511_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_529_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_508_);
v___x_530_ = l_Lean_Meta_Sym_sym_debug;
v___x_531_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v___x_529_, v___x_530_);
lean_dec_ref(v___x_529_);
if (v___x_531_ == 0)
{
lean_dec_ref_known(v___x_525_, 2);
goto v___jp_511_;
}
else
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_Meta_Sym_reportIssue(v___x_525_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_dec_ref_known(v___x_532_, 1);
goto v___jp_511_;
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref_known(v___x_525_, 2);
v_a_541_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_526_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_526_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
else
{
lean_dec_ref(v_lawfulOrderLTType_520_);
return v___x_521_;
}
}
else
{
lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_leInst_x3f_503_);
lean_dec_ref(v_type_501_);
lean_dec(v_u_500_);
v_isSharedCheck_556_ = !lean_is_exclusive(v_ltInst_x3f_502_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v_ltInst_x3f_502_, 0);
lean_dec(v_unused_557_);
v___x_550_ = v_ltInst_x3f_502_;
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
else
{
lean_dec(v_ltInst_x3f_502_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_552_ = lean_box(0);
if (v_isShared_551_ == 0)
{
lean_ctor_set_tag(v___x_550_, 0);
lean_ctor_set(v___x_550_, 0, v___x_552_);
v___x_554_ = v___x_550_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; 
lean_dec(v_leInst_x3f_503_);
lean_dec(v_ltInst_x3f_502_);
lean_dec_ref(v_type_501_);
lean_dec(v_u_500_);
v___x_558_ = lean_box(0);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
v___jp_511_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_box(0);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f___boxed(lean_object* v_u_560_, lean_object* v_type_561_, lean_object* v_ltInst_x3f_562_, lean_object* v_leInst_x3f_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(v_u_560_, v_type_561_, v_ltInst_x3f_562_, v_leInst_x3f_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
return v_res_571_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__2));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(lean_object* v_u_579_, lean_object* v_type_580_, lean_object* v_leInst_x3f_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_581_) == 1)
{
lean_object* v_val_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v_isPreorderType_597_; lean_object* v___x_598_; 
v_val_592_ = lean_ctor_get(v_leInst_x3f_581_, 0);
lean_inc(v_val_592_);
lean_dec_ref_known(v_leInst_x3f_581_, 1);
v___x_593_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__1));
v___x_594_ = lean_box(0);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v_u_579_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = l_Lean_mkConst(v___x_593_, v___x_595_);
v_isPreorderType_597_ = l_Lean_mkAppB(v___x_596_, v_type_580_, v_val_592_);
lean_inc_ref(v_isPreorderType_597_);
v___x_598_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_isPreorderType_597_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; 
v_a_599_ = lean_ctor_get(v___x_598_, 0);
if (lean_obj_tag(v_a_599_) == 1)
{
lean_dec_ref(v_isPreorderType_597_);
return v___x_598_;
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
lean_dec_ref_known(v___x_598_, 1);
v___x_600_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3, &l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3_once, _init_l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___closed__3);
v___x_601_ = l_Lean_indentExpr(v_isPreorderType_597_);
v___x_602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_600_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_582_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; uint8_t v_verbose_605_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v_verbose_605_ = lean_ctor_get_uint8(v_a_604_, 0);
lean_dec(v_a_604_);
if (v_verbose_605_ == 0)
{
lean_dec_ref_known(v___x_602_, 2);
goto v___jp_589_;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_606_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_586_);
v___x_607_ = l_Lean_Meta_Sym_sym_debug;
v___x_608_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v___x_606_, v___x_607_);
lean_dec_ref(v___x_606_);
if (v___x_608_ == 0)
{
lean_dec_ref_known(v___x_602_, 2);
goto v___jp_589_;
}
else
{
lean_object* v___x_609_; 
v___x_609_ = l_Lean_Meta_Sym_reportIssue(v___x_602_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_dec_ref_known(v___x_609_, 1);
goto v___jp_589_;
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref_known(v___x_602_, 2);
v_a_618_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_603_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_603_);
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
else
{
lean_dec_ref(v_isPreorderType_597_);
return v___x_598_;
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_dec(v_leInst_x3f_581_);
lean_dec_ref(v_type_580_);
lean_dec(v_u_579_);
v___x_626_ = lean_box(0);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
v___jp_589_:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f___boxed(lean_object* v_u_628_, lean_object* v_type_629_, lean_object* v_leInst_x3f_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(v_u_628_, v_type_629_, v_leInst_x3f_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
return v_res_638_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__2));
v___x_645_ = l_Lean_stringToMessageData(v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f(lean_object* v_u_646_, lean_object* v_type_647_, lean_object* v_leInst_x3f_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_648_) == 1)
{
lean_object* v_val_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v_isPartialOrderType_664_; lean_object* v___x_665_; 
v_val_659_ = lean_ctor_get(v_leInst_x3f_648_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v_leInst_x3f_648_, 1);
v___x_660_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__1));
v___x_661_ = lean_box(0);
v___x_662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_662_, 0, v_u_646_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = l_Lean_mkConst(v___x_660_, v___x_662_);
v_isPartialOrderType_664_ = l_Lean_mkAppB(v___x_663_, v_type_647_, v_val_659_);
lean_inc_ref(v_isPartialOrderType_664_);
v___x_665_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_isPartialOrderType_664_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
if (lean_obj_tag(v_a_666_) == 1)
{
lean_dec_ref(v_isPartialOrderType_664_);
return v___x_665_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
lean_dec_ref_known(v___x_665_, 1);
v___x_667_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3, &l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3_once, _init_l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___closed__3);
v___x_668_ = l_Lean_indentExpr(v_isPartialOrderType_664_);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_649_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; uint8_t v_verbose_672_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v_verbose_672_ = lean_ctor_get_uint8(v_a_671_, 0);
lean_dec(v_a_671_);
if (v_verbose_672_ == 0)
{
lean_dec_ref_known(v___x_669_, 2);
goto v___jp_656_;
}
else
{
lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v___x_673_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_653_);
v___x_674_ = l_Lean_Meta_Sym_sym_debug;
v___x_675_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v___x_673_, v___x_674_);
lean_dec_ref(v___x_673_);
if (v___x_675_ == 0)
{
lean_dec_ref_known(v___x_669_, 2);
goto v___jp_656_;
}
else
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Meta_Sym_reportIssue(v___x_669_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_dec_ref_known(v___x_676_, 1);
goto v___jp_656_;
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec_ref_known(v___x_669_, 2);
v_a_685_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_670_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_670_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
else
{
lean_dec_ref(v_isPartialOrderType_664_);
return v___x_665_;
}
}
else
{
lean_object* v___x_693_; lean_object* v___x_694_; 
lean_dec(v_leInst_x3f_648_);
lean_dec_ref(v_type_647_);
lean_dec(v_u_646_);
v___x_693_ = lean_box(0);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
v___jp_656_:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_box(0);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f___boxed(lean_object* v_u_695_, lean_object* v_type_696_, lean_object* v_leInst_x3f_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f(v_u_695_, v_type_696_, v_leInst_x3f_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_);
lean_dec(v_a_703_);
lean_dec_ref(v_a_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
lean_dec(v_a_699_);
lean_dec_ref(v_a_698_);
return v_res_705_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__2));
v___x_712_ = l_Lean_stringToMessageData(v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(lean_object* v_u_713_, lean_object* v_type_714_, lean_object* v_leInst_x3f_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_715_) == 1)
{
lean_object* v_val_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_isLinearOrderType_731_; lean_object* v___x_732_; 
v_val_726_ = lean_ctor_get(v_leInst_x3f_715_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v_leInst_x3f_715_, 1);
v___x_727_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__1));
v___x_728_ = lean_box(0);
v___x_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_729_, 0, v_u_713_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = l_Lean_mkConst(v___x_727_, v___x_729_);
v_isLinearOrderType_731_ = l_Lean_mkAppB(v___x_730_, v_type_714_, v_val_726_);
lean_inc_ref(v_isLinearOrderType_731_);
v___x_732_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_isLinearOrderType_731_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
if (lean_obj_tag(v_a_733_) == 1)
{
lean_dec_ref(v_isLinearOrderType_731_);
return v___x_732_;
}
else
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec_ref_known(v___x_732_, 1);
v___x_734_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3, &l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3_once, _init_l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___closed__3);
v___x_735_ = l_Lean_indentExpr(v_isLinearOrderType_731_);
v___x_736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_716_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; uint8_t v_verbose_739_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v_verbose_739_ = lean_ctor_get_uint8(v_a_738_, 0);
lean_dec(v_a_738_);
if (v_verbose_739_ == 0)
{
lean_dec_ref_known(v___x_736_, 2);
goto v___jp_723_;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_740_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_720_);
v___x_741_ = l_Lean_Meta_Sym_sym_debug;
v___x_742_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v___x_740_, v___x_741_);
lean_dec_ref(v___x_740_);
if (v___x_742_ == 0)
{
lean_dec_ref_known(v___x_736_, 2);
goto v___jp_723_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Meta_Sym_reportIssue(v___x_736_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_dec_ref_known(v___x_743_, 1);
goto v___jp_723_;
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_743_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec_ref_known(v___x_736_, 2);
v_a_752_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_737_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_737_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
else
{
lean_dec_ref(v_isLinearOrderType_731_);
return v___x_732_;
}
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec(v_leInst_x3f_715_);
lean_dec_ref(v_type_714_);
lean_dec(v_u_713_);
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
v___jp_723_:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_box(0);
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f___boxed(lean_object* v_u_762_, lean_object* v_type_763_, lean_object* v_leInst_x3f_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(v_u_762_, v_type_763_, v_leInst_x3f_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec(v_a_768_);
lean_dec_ref(v_a_767_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
return v_res_772_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__2));
v___x_779_ = l_Lean_stringToMessageData(v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f(lean_object* v_u_780_, lean_object* v_type_781_, lean_object* v_leInst_x3f_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_782_) == 1)
{
lean_object* v_val_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_isLinearOrderType_798_; lean_object* v___x_799_; 
v_val_793_ = lean_ctor_get(v_leInst_x3f_782_, 0);
lean_inc(v_val_793_);
lean_dec_ref_known(v_leInst_x3f_782_, 1);
v___x_794_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__1));
v___x_795_ = lean_box(0);
v___x_796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_796_, 0, v_u_780_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = l_Lean_mkConst(v___x_794_, v___x_796_);
v_isLinearOrderType_798_ = l_Lean_mkAppB(v___x_797_, v_type_781_, v_val_793_);
lean_inc_ref(v_isLinearOrderType_798_);
v___x_799_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_isLinearOrderType_798_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
if (lean_obj_tag(v_a_800_) == 1)
{
lean_dec_ref(v_isLinearOrderType_798_);
return v___x_799_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec_ref_known(v___x_799_, 1);
v___x_801_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3, &l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3_once, _init_l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___closed__3);
v___x_802_ = l_Lean_indentExpr(v_isLinearOrderType_798_);
v___x_803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_783_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; uint8_t v_verbose_806_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
v_verbose_806_ = lean_ctor_get_uint8(v_a_805_, 0);
lean_dec(v_a_805_);
if (v_verbose_806_ == 0)
{
lean_dec_ref_known(v___x_803_, 2);
goto v___jp_790_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_807_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_787_);
v___x_808_ = l_Lean_Meta_Sym_sym_debug;
v___x_809_ = l_Lean_Option_get___at___00Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f_spec__0(v___x_807_, v___x_808_);
lean_dec_ref(v___x_807_);
if (v___x_809_ == 0)
{
lean_dec_ref_known(v___x_803_, 2);
goto v___jp_790_;
}
else
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_Meta_Sym_reportIssue(v___x_803_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_dec_ref_known(v___x_810_, 1);
goto v___jp_790_;
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref_known(v___x_803_, 2);
v_a_819_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_804_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_804_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
else
{
lean_dec_ref(v_isLinearOrderType_798_);
return v___x_799_;
}
}
else
{
lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec(v_leInst_x3f_782_);
lean_dec_ref(v_type_781_);
lean_dec(v_u_780_);
v___x_827_ = lean_box(0);
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
return v___x_828_;
}
v___jp_790_:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_box(0);
v___x_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f___boxed(lean_object* v_u_829_, lean_object* v_type_830_, lean_object* v_leInst_x3f_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lean_Meta_Sym_Arith_mkIsLinearPreorderInst_x3f(v_u_829_, v_type_830_, v_leInst_x3f_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
return v_res_839_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_Insts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_Insts(builtin);
}
#ifdef __cplusplus
}
#endif
