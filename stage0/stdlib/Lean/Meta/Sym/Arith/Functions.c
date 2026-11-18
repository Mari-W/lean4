// Lean compiler output
// Module: Lean.Meta.Sym.Arith.Functions
// Imports: public import Lean.Meta.Sym.Arith.MonadRing public import Lean.Meta.Sym.Arith.MonadSemiring import Init.Grind.Ring
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "error while initializing arithmetic operators:\ninstance for `"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "\nis not definitionally equal to the expected one "};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "\nwhen only reducible definitions and instances are reduced"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "npow"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(227, 91, 39, 101, 227, 157, 49, 255)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 97, 73, 37, 143, 22, 233, 204)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instHSMul"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 168, 246, 170, 1, 89, 173, 16)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nsmul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 91, 174, 144, 107, 56, 221, 203)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "zsmul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(150, 37, 191, 247, 137, 26, 61, 190)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 205, 186, 60, 7, 38, 135, 75)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 103, 115, 5, 120, 143, 98)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHSub"};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 225, 92, 14, 170, 61, 170, 140)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toSub"};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(8, 241, 181, 204, 215, 46, 40, 252)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 233, 103, 154, 53, 22, 86, 139)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 4, 252, 84, 28, 16, 24, 6)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intCast"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 189, 244, 99, 68, 50, 19, 202)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IntCast"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toInv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 152, 64, 108, 234, 163, 46, 107)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "internal error: type is not a field"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHDiv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 70, 113, 198, 157, 211, 131, 18)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toDiv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 88, 233, 125, 69, 12, 189, 21)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "OfSemiring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 53, 64, 113, 205, 30, 141, 114)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value_aux_3),((lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(232, 146, 236, 221, 122, 127, 105, 70)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "AddRightCancel"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 101, 175, 31, 110, 234, 168, 33)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2));
v___x_55_ = l_Lean_stringToMessageData(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4));
v___x_58_ = l_Lean_stringToMessageData(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6));
v___x_61_ = l_Lean_stringToMessageData(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object* v_declName_62_, lean_object* v_inst_63_, lean_object* v_inst_x27_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___y_71_; lean_object* v___x_104_; uint8_t v_transparency_105_; uint8_t v___x_106_; uint8_t v___x_107_; 
v___x_104_ = l_Lean_Meta_Context_config(v_a_65_);
v_transparency_105_ = lean_ctor_get_uint8(v___x_104_, 9);
lean_dec_ref(v___x_104_);
v___x_106_ = 3;
v___x_107_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v_keyedConfig_108_; uint8_t v_trackZetaDelta_109_; lean_object* v_zetaDeltaSet_110_; lean_object* v_lctx_111_; lean_object* v_localInstances_112_; lean_object* v_defEqCtx_x3f_113_; lean_object* v_synthPendingDepth_114_; lean_object* v_customCanUnfoldPredicate_x3f_115_; uint8_t v_univApprox_116_; uint8_t v_inTypeClassResolution_117_; uint8_t v_cacheInferType_118_; lean_object* v_rewriteSet_x3f_119_; uint8_t v_rewriteFuelScope_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_keyedConfig_108_ = lean_ctor_get(v_a_65_, 0);
v_trackZetaDelta_109_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*8);
v_zetaDeltaSet_110_ = lean_ctor_get(v_a_65_, 1);
v_lctx_111_ = lean_ctor_get(v_a_65_, 2);
v_localInstances_112_ = lean_ctor_get(v_a_65_, 3);
v_defEqCtx_x3f_113_ = lean_ctor_get(v_a_65_, 4);
v_synthPendingDepth_114_ = lean_ctor_get(v_a_65_, 5);
v_customCanUnfoldPredicate_x3f_115_ = lean_ctor_get(v_a_65_, 6);
v_univApprox_116_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_117_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*8 + 2);
v_cacheInferType_118_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_119_ = lean_ctor_get(v_a_65_, 7);
v_rewriteFuelScope_120_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_108_);
v___x_121_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_106_, v_keyedConfig_108_);
lean_inc(v_rewriteSet_x3f_119_);
lean_inc(v_customCanUnfoldPredicate_x3f_115_);
lean_inc(v_synthPendingDepth_114_);
lean_inc(v_defEqCtx_x3f_113_);
lean_inc_ref(v_localInstances_112_);
lean_inc_ref(v_lctx_111_);
lean_inc(v_zetaDeltaSet_110_);
v___x_122_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_zetaDeltaSet_110_);
lean_ctor_set(v___x_122_, 2, v_lctx_111_);
lean_ctor_set(v___x_122_, 3, v_localInstances_112_);
lean_ctor_set(v___x_122_, 4, v_defEqCtx_x3f_113_);
lean_ctor_set(v___x_122_, 5, v_synthPendingDepth_114_);
lean_ctor_set(v___x_122_, 6, v_customCanUnfoldPredicate_x3f_115_);
lean_ctor_set(v___x_122_, 7, v_rewriteSet_x3f_119_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*8, v_trackZetaDelta_109_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*8 + 1, v_univApprox_116_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*8 + 2, v_inTypeClassResolution_117_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*8 + 3, v_cacheInferType_118_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*8 + 4, v_rewriteFuelScope_120_);
lean_inc_ref(v_inst_x27_64_);
lean_inc_ref(v_inst_63_);
v___x_123_ = l_Lean_Meta_isExprDefEq(v_inst_63_, v_inst_x27_64_, v___x_122_, v_a_66_, v_a_67_, v_a_68_);
lean_dec_ref_known(v___x_122_, 8);
v___y_71_ = v___x_123_;
goto v___jp_70_;
}
else
{
lean_object* v___x_124_; 
lean_inc_ref(v_inst_x27_64_);
lean_inc_ref(v_inst_63_);
v___x_124_ = l_Lean_Meta_isExprDefEq(v_inst_63_, v_inst_x27_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
v___y_71_ = v___x_124_;
goto v___jp_70_;
}
v___jp_70_:
{
if (lean_obj_tag(v___y_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_95_; 
v_a_72_ = lean_ctor_get(v___y_71_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___y_71_);
if (v_isSharedCheck_95_ == 0)
{
v___x_74_ = v___y_71_;
v_isShared_75_ = v_isSharedCheck_95_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___y_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_95_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
uint8_t v___x_76_; 
v___x_76_ = lean_unbox(v_a_72_);
lean_dec(v_a_72_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
lean_del_object(v___x_74_);
v___x_77_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1);
v___x_78_ = l_Lean_MessageData_ofName(v_declName_62_);
v___x_79_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3);
v___x_81_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = l_Lean_indentExpr(v_inst_63_);
v___x_83_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5);
v___x_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = l_Lean_indentExpr(v_inst_x27_64_);
v___x_87_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7);
v___x_89_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v___x_89_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
return v___x_90_;
}
else
{
lean_object* v___x_91_; lean_object* v___x_93_; 
lean_dec_ref(v_inst_x27_64_);
lean_dec_ref(v_inst_63_);
lean_dec(v_declName_62_);
v___x_91_ = lean_box(0);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_91_);
v___x_93_ = v___x_74_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
lean_dec_ref(v_inst_x27_64_);
lean_dec_ref(v_inst_63_);
lean_dec(v_declName_62_);
v_a_96_ = lean_ctor_get(v___y_71_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___y_71_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___y_71_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___y_71_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed(lean_object* v_declName_125_, lean_object* v_inst_126_, lean_object* v_inst_x27_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_125_, v_inst_126_, v_inst_x27_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(lean_object* v_00_u03b1_134_, lean_object* v_msg_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v_msg_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___boxed(lean_object* v_00_u03b1_142_, lean_object* v_msg_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(v_00_u03b1_142_, v_msg_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0(lean_object* v_inst_150_, lean_object* v_declName_151_, lean_object* v___x_152_, lean_object* v_type_153_, lean_object* v_inst_154_, lean_object* v_____r_155_){
_start:
{
lean_object* v_canonExpr_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_canonExpr_156_ = lean_ctor_get(v_inst_150_, 0);
lean_inc(v_canonExpr_156_);
lean_dec_ref(v_inst_150_);
v___x_157_ = l_Lean_mkConst(v_declName_151_, v___x_152_);
v___x_158_ = l_Lean_mkAppB(v___x_157_, v_type_153_, v_inst_154_);
v___x_159_ = lean_apply_1(v_canonExpr_156_, v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1(lean_object* v_inst_160_, lean_object* v_declName_161_, lean_object* v___x_162_, lean_object* v_type_163_, lean_object* v_expectedInst_164_, lean_object* v_inst_165_, lean_object* v_toBind_166_, lean_object* v_inst_167_){
_start:
{
lean_object* v___f_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
lean_inc_ref(v_inst_167_);
lean_inc(v_declName_161_);
v___f_168_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_168_, 0, v_inst_160_);
lean_closure_set(v___f_168_, 1, v_declName_161_);
lean_closure_set(v___f_168_, 2, v___x_162_);
lean_closure_set(v___f_168_, 3, v_type_163_);
lean_closure_set(v___f_168_, 4, v_inst_167_);
v___x_169_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_169_, 0, v_declName_161_);
lean_closure_set(v___x_169_, 1, v_inst_167_);
lean_closure_set(v___x_169_, 2, v_expectedInst_164_);
v___x_170_ = lean_apply_2(v_inst_165_, lean_box(0), v___x_169_);
v___x_171_ = lean_apply_4(v_toBind_166_, lean_box(0), lean_box(0), v___x_170_, v___f_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_type_176_, lean_object* v_u_177_, lean_object* v_instDeclName_178_, lean_object* v_declName_179_, lean_object* v_expectedInst_180_){
_start:
{
lean_object* v_toBind_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___f_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_toBind_181_ = lean_ctor_get(v_inst_174_, 1);
lean_inc_n(v_toBind_181_, 2);
v___x_182_ = lean_box(0);
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v_u_177_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
lean_inc_ref(v_type_176_);
lean_inc_ref(v___x_183_);
lean_inc_ref(v_inst_175_);
v___f_184_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1), 8, 7);
lean_closure_set(v___f_184_, 0, v_inst_175_);
lean_closure_set(v___f_184_, 1, v_declName_179_);
lean_closure_set(v___f_184_, 2, v___x_183_);
lean_closure_set(v___f_184_, 3, v_type_176_);
lean_closure_set(v___f_184_, 4, v_expectedInst_180_);
lean_closure_set(v___f_184_, 5, v_inst_172_);
lean_closure_set(v___f_184_, 6, v_toBind_181_);
v___x_185_ = l_Lean_mkConst(v_instDeclName_178_, v___x_183_);
v___x_186_ = l_Lean_Expr_app___override(v___x_185_, v_type_176_);
v___x_187_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_174_, v_inst_173_, v_inst_175_, v___x_186_);
v___x_188_ = lean_apply_4(v_toBind_181_, lean_box(0), lean_box(0), v___x_187_, v___f_184_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn(lean_object* v_m_189_, lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_type_194_, lean_object* v_u_195_, lean_object* v_instDeclName_196_, lean_object* v_declName_197_, lean_object* v_expectedInst_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_190_, v_inst_191_, v_inst_192_, v_inst_193_, v_type_194_, v_u_195_, v_instDeclName_196_, v_declName_197_, v_expectedInst_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0(lean_object* v_inst_200_, lean_object* v_declName_201_, lean_object* v___x_202_, lean_object* v_type_203_, lean_object* v_inst_204_, lean_object* v_____r_205_){
_start:
{
lean_object* v_canonExpr_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v_canonExpr_206_ = lean_ctor_get(v_inst_200_, 0);
lean_inc(v_canonExpr_206_);
lean_dec_ref(v_inst_200_);
v___x_207_ = l_Lean_mkConst(v_declName_201_, v___x_202_);
lean_inc_ref_n(v_type_203_, 2);
v___x_208_ = l_Lean_mkApp4(v___x_207_, v_type_203_, v_type_203_, v_type_203_, v_inst_204_);
v___x_209_ = lean_apply_1(v_canonExpr_206_, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1(lean_object* v_inst_210_, lean_object* v_declName_211_, lean_object* v___x_212_, lean_object* v_type_213_, lean_object* v_expectedInst_214_, lean_object* v_inst_215_, lean_object* v_toBind_216_, lean_object* v_inst_217_){
_start:
{
lean_object* v___f_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_inc_ref(v_inst_217_);
lean_inc(v_declName_211_);
v___f_218_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_218_, 0, v_inst_210_);
lean_closure_set(v___f_218_, 1, v_declName_211_);
lean_closure_set(v___f_218_, 2, v___x_212_);
lean_closure_set(v___f_218_, 3, v_type_213_);
lean_closure_set(v___f_218_, 4, v_inst_217_);
v___x_219_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_219_, 0, v_declName_211_);
lean_closure_set(v___x_219_, 1, v_inst_217_);
lean_closure_set(v___x_219_, 2, v_expectedInst_214_);
v___x_220_ = lean_apply_2(v_inst_215_, lean_box(0), v___x_219_);
v___x_221_ = lean_apply_4(v_toBind_216_, lean_box(0), lean_box(0), v___x_220_, v___f_218_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(lean_object* v_inst_222_, lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_inst_225_, lean_object* v_type_226_, lean_object* v_u_227_, lean_object* v_instDeclName_228_, lean_object* v_declName_229_, lean_object* v_expectedInst_230_){
_start:
{
lean_object* v_toBind_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___f_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_toBind_231_ = lean_ctor_get(v_inst_224_, 1);
lean_inc_n(v_toBind_231_, 2);
v___x_232_ = lean_box(0);
lean_inc_n(v_u_227_, 2);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v_u_227_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_234_, 0, v_u_227_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v_u_227_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
lean_inc_ref_n(v_type_226_, 3);
lean_inc_ref(v___x_235_);
lean_inc_ref(v_inst_225_);
v___f_236_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1), 8, 7);
lean_closure_set(v___f_236_, 0, v_inst_225_);
lean_closure_set(v___f_236_, 1, v_declName_229_);
lean_closure_set(v___f_236_, 2, v___x_235_);
lean_closure_set(v___f_236_, 3, v_type_226_);
lean_closure_set(v___f_236_, 4, v_expectedInst_230_);
lean_closure_set(v___f_236_, 5, v_inst_222_);
lean_closure_set(v___f_236_, 6, v_toBind_231_);
v___x_237_ = l_Lean_mkConst(v_instDeclName_228_, v___x_235_);
v___x_238_ = l_Lean_mkApp3(v___x_237_, v_type_226_, v_type_226_, v_type_226_);
v___x_239_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_224_, v_inst_223_, v_inst_225_, v___x_238_);
v___x_240_ = lean_apply_4(v_toBind_231_, lean_box(0), lean_box(0), v___x_239_, v___f_236_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn(lean_object* v_m_241_, lean_object* v_inst_242_, lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_type_246_, lean_object* v_u_247_, lean_object* v_instDeclName_248_, lean_object* v_declName_249_, lean_object* v_expectedInst_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_242_, v_inst_243_, v_inst_244_, v_inst_245_, v_type_246_, v_u_247_, v_instDeclName_248_, v_declName_249_, v_expectedInst_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0(lean_object* v_inst_252_, lean_object* v___x_253_, lean_object* v___x_254_, lean_object* v_type_255_, lean_object* v___x_256_, lean_object* v_inst_257_, lean_object* v_____r_258_){
_start:
{
lean_object* v_canonExpr_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_canonExpr_259_ = lean_ctor_get(v_inst_252_, 0);
lean_inc(v_canonExpr_259_);
lean_dec_ref(v_inst_252_);
v___x_260_ = l_Lean_mkConst(v___x_253_, v___x_254_);
lean_inc_ref(v_type_255_);
v___x_261_ = l_Lean_mkApp4(v___x_260_, v_type_255_, v___x_256_, v_type_255_, v_inst_257_);
v___x_262_ = lean_apply_1(v_canonExpr_259_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1(lean_object* v___x_273_, lean_object* v_type_274_, lean_object* v_semiringInst_275_, lean_object* v___x_276_, lean_object* v_inst_277_, lean_object* v___x_278_, lean_object* v___x_279_, lean_object* v_inst_280_, lean_object* v_toBind_281_, lean_object* v_inst_282_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v_inst_x27_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___f_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_283_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4));
v___x_284_ = l_Lean_mkConst(v___x_283_, v___x_273_);
lean_inc_ref(v_type_274_);
v_inst_x27_285_ = l_Lean_mkAppB(v___x_284_, v_type_274_, v_semiringInst_275_);
v___x_286_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5));
v___x_287_ = l_Lean_Name_mkStr2(v___x_276_, v___x_286_);
lean_inc_ref(v_inst_282_);
lean_inc(v___x_287_);
v___f_288_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0), 7, 6);
lean_closure_set(v___f_288_, 0, v_inst_277_);
lean_closure_set(v___f_288_, 1, v___x_287_);
lean_closure_set(v___f_288_, 2, v___x_278_);
lean_closure_set(v___f_288_, 3, v_type_274_);
lean_closure_set(v___f_288_, 4, v___x_279_);
lean_closure_set(v___f_288_, 5, v_inst_282_);
v___x_289_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_289_, 0, v___x_287_);
lean_closure_set(v___x_289_, 1, v_inst_282_);
lean_closure_set(v___x_289_, 2, v_inst_x27_285_);
v___x_290_ = lean_apply_2(v_inst_280_, lean_box(0), v___x_289_);
v___x_291_ = lean_apply_4(v_toBind_281_, lean_box(0), lean_box(0), v___x_290_, v___f_288_);
return v___x_291_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = l_Lean_Level_ofNat(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(lean_object* v_inst_297_, lean_object* v_inst_298_, lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_u_301_, lean_object* v_type_302_, lean_object* v_semiringInst_303_){
_start:
{
lean_object* v_toBind_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___f_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_toBind_304_ = lean_ctor_get(v_inst_299_, 1);
lean_inc_n(v_toBind_304_, 2);
v___x_305_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0));
v___x_306_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1));
v___x_307_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2);
v___x_308_ = lean_box(0);
lean_inc(v_u_301_);
v___x_309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_309_, 0, v_u_301_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
lean_inc_ref(v___x_309_);
v___x_310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_307_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_311_, 0, v_u_301_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
lean_inc_ref(v___x_311_);
v___x_312_ = l_Lean_mkConst(v___x_306_, v___x_311_);
v___x_313_ = l_Lean_Nat_mkType;
lean_inc_ref(v_inst_300_);
lean_inc_ref_n(v_type_302_, 2);
v___f_314_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1), 10, 9);
lean_closure_set(v___f_314_, 0, v___x_309_);
lean_closure_set(v___f_314_, 1, v_type_302_);
lean_closure_set(v___f_314_, 2, v_semiringInst_303_);
lean_closure_set(v___f_314_, 3, v___x_305_);
lean_closure_set(v___f_314_, 4, v_inst_300_);
lean_closure_set(v___f_314_, 5, v___x_311_);
lean_closure_set(v___f_314_, 6, v___x_313_);
lean_closure_set(v___f_314_, 7, v_inst_297_);
lean_closure_set(v___f_314_, 8, v_toBind_304_);
v___x_315_ = l_Lean_mkApp3(v___x_312_, v_type_302_, v___x_313_, v_type_302_);
v___x_316_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_299_, v_inst_298_, v_inst_300_, v___x_315_);
v___x_317_ = lean_apply_4(v_toBind_304_, lean_box(0), lean_box(0), v___x_316_, v___f_314_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn(lean_object* v_m_318_, lean_object* v_inst_319_, lean_object* v_inst_320_, lean_object* v_inst_321_, lean_object* v_inst_322_, lean_object* v_u_323_, lean_object* v_type_324_, lean_object* v_semiringInst_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_319_, v_inst_320_, v_inst_321_, v_inst_322_, v_u_323_, v_type_324_, v_semiringInst_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0(lean_object* v___x_327_, lean_object* v___x_328_, lean_object* v___x_329_, lean_object* v_type_330_, lean_object* v_canonExpr_331_, lean_object* v_inst_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = l_Lean_Name_mkStr2(v___x_327_, v___x_328_);
v___x_334_ = l_Lean_mkConst(v___x_333_, v___x_329_);
v___x_335_ = l_Lean_mkAppB(v___x_334_, v_type_330_, v_inst_332_);
v___x_336_ = lean_apply_1(v_canonExpr_331_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1(lean_object* v___f_337_, lean_object* v_inst_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_apply_1(v___f_337_, v_inst_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3(lean_object* v_toPure_340_, lean_object* v_val_341_, lean_object* v_toBind_342_, lean_object* v___f_343_, lean_object* v_____r_344_){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_apply_2(v_toPure_340_, lean_box(0), v_val_341_);
v___x_346_ = lean_apply_4(v_toBind_342_, lean_box(0), lean_box(0), v___x_345_, v___f_343_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2(lean_object* v_toPure_347_, lean_object* v_inst_x27_348_, lean_object* v_toBind_349_, lean_object* v___f_350_, lean_object* v___f_351_, lean_object* v___x_352_, lean_object* v___x_353_, lean_object* v_inst_354_, lean_object* v_____do__lift_355_){
_start:
{
if (lean_obj_tag(v_____do__lift_355_) == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec(v_inst_354_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec(v___f_351_);
v___x_356_ = lean_apply_2(v_toPure_347_, lean_box(0), v_inst_x27_348_);
v___x_357_ = lean_apply_4(v_toBind_349_, lean_box(0), lean_box(0), v___x_356_, v___f_350_);
return v___x_357_;
}
else
{
lean_object* v_val_358_; lean_object* v___f_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v___f_350_);
v_val_358_ = lean_ctor_get(v_____do__lift_355_, 0);
lean_inc_n(v_val_358_, 2);
lean_dec_ref_known(v_____do__lift_355_, 1);
lean_inc(v_toBind_349_);
v___f_359_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_359_, 0, v_toPure_347_);
lean_closure_set(v___f_359_, 1, v_val_358_);
lean_closure_set(v___f_359_, 2, v_toBind_349_);
lean_closure_set(v___f_359_, 3, v___f_351_);
v___x_360_ = l_Lean_Name_mkStr2(v___x_352_, v___x_353_);
v___x_361_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_361_, 0, v___x_360_);
lean_closure_set(v___x_361_, 1, v_val_358_);
lean_closure_set(v___x_361_, 2, v_inst_x27_348_);
v___x_362_ = lean_apply_2(v_inst_354_, lean_box(0), v___x_361_);
v___x_363_ = lean_apply_4(v_toBind_349_, lean_box(0), lean_box(0), v___x_362_, v___f_359_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_u_376_, lean_object* v_type_377_, lean_object* v_semiringInst_378_){
_start:
{
lean_object* v_toApplicative_379_; lean_object* v_toBind_380_; lean_object* v_canonExpr_381_; lean_object* v_synthInstance_x3f_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_404_; 
v_toApplicative_379_ = lean_ctor_get(v_inst_374_, 0);
lean_inc_ref(v_toApplicative_379_);
v_toBind_380_ = lean_ctor_get(v_inst_374_, 1);
lean_inc(v_toBind_380_);
lean_dec_ref(v_inst_374_);
v_canonExpr_381_ = lean_ctor_get(v_inst_375_, 0);
v_synthInstance_x3f_382_ = lean_ctor_get(v_inst_375_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v_inst_375_);
if (v_isSharedCheck_404_ == 0)
{
v___x_384_ = v_inst_375_;
v_isShared_385_ = v_isSharedCheck_404_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_synthInstance_x3f_382_);
lean_inc(v_canonExpr_381_);
lean_dec(v_inst_375_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_404_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v_toPure_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v_toPure_386_ = lean_ctor_get(v_toApplicative_379_, 1);
lean_inc(v_toPure_386_);
lean_dec_ref(v_toApplicative_379_);
v___x_387_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0));
v___x_388_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1));
v___x_389_ = lean_box(0);
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 1);
lean_ctor_set(v___x_384_, 1, v___x_389_);
lean_ctor_set(v___x_384_, 0, v_u_376_);
v___x_391_ = v___x_384_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_u_376_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_389_);
v___x_391_ = v_reuseFailAlloc_403_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
lean_object* v___x_392_; lean_object* v_inst_x27_393_; lean_object* v___x_394_; lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v_instType_399_; lean_object* v___x_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
lean_inc_ref_n(v___x_391_, 2);
v___x_392_ = l_Lean_mkConst(v___x_388_, v___x_391_);
lean_inc_ref_n(v_type_377_, 2);
v_inst_x27_393_ = l_Lean_mkAppB(v___x_392_, v_type_377_, v_semiringInst_378_);
v___x_394_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2));
v___f_395_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_395_, 0, v___x_394_);
lean_closure_set(v___f_395_, 1, v___x_387_);
lean_closure_set(v___f_395_, 2, v___x_391_);
lean_closure_set(v___f_395_, 3, v_type_377_);
lean_closure_set(v___f_395_, 4, v_canonExpr_381_);
v___f_396_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_396_, 0, v___f_395_);
v___x_397_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3));
v___x_398_ = l_Lean_mkConst(v___x_397_, v___x_391_);
v_instType_399_ = l_Lean_Expr_app___override(v___x_398_, v_type_377_);
v___x_400_ = lean_apply_1(v_synthInstance_x3f_382_, v_instType_399_);
lean_inc_ref(v___f_396_);
lean_inc(v_toBind_380_);
v___f_401_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2), 9, 8);
lean_closure_set(v___f_401_, 0, v_toPure_386_);
lean_closure_set(v___f_401_, 1, v_inst_x27_393_);
lean_closure_set(v___f_401_, 2, v_toBind_380_);
lean_closure_set(v___f_401_, 3, v___f_396_);
lean_closure_set(v___f_401_, 4, v___f_396_);
lean_closure_set(v___f_401_, 5, v___x_394_);
lean_closure_set(v___f_401_, 6, v___x_387_);
lean_closure_set(v___f_401_, 7, v_inst_373_);
v___x_402_ = lean_apply_4(v_toBind_380_, lean_box(0), lean_box(0), v___x_400_, v___f_401_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn(lean_object* v_m_405_, lean_object* v_inst_406_, lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_u_409_, lean_object* v_type_410_, lean_object* v_semiringInst_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_406_, v_inst_407_, v_inst_408_, v_u_409_, v_type_410_, v_semiringInst_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0(lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_scalar_416_, lean_object* v_type_417_, lean_object* v_canonExpr_418_, lean_object* v_inst_419_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0___closed__0));
v___x_421_ = l_Lean_Name_mkStr2(v___x_414_, v___x_420_);
v___x_422_ = l_Lean_mkConst(v___x_421_, v___x_415_);
lean_inc_ref(v_type_417_);
v___x_423_ = l_Lean_mkApp4(v___x_422_, v_scalar_416_, v_type_417_, v_type_417_, v_inst_419_);
v___x_424_ = lean_apply_1(v_canonExpr_418_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__4(lean_object* v_toPure_425_, lean_object* v_inst_x27_426_, lean_object* v_toBind_427_, lean_object* v___f_428_, lean_object* v___f_429_, lean_object* v___x_430_, lean_object* v_inst_431_, lean_object* v_____do__lift_432_){
_start:
{
if (lean_obj_tag(v_____do__lift_432_) == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec(v_inst_431_);
lean_dec_ref(v___x_430_);
lean_dec(v___f_429_);
v___x_433_ = lean_apply_2(v_toPure_425_, lean_box(0), v_inst_x27_426_);
v___x_434_ = lean_apply_4(v_toBind_427_, lean_box(0), lean_box(0), v___x_433_, v___f_428_);
return v___x_434_;
}
else
{
lean_object* v_val_435_; lean_object* v___f_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec(v___f_428_);
v_val_435_ = lean_ctor_get(v_____do__lift_432_, 0);
lean_inc_n(v_val_435_, 2);
lean_dec_ref_known(v_____do__lift_432_, 1);
lean_inc(v_toBind_427_);
v___f_436_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_436_, 0, v_toPure_425_);
lean_closure_set(v___f_436_, 1, v_val_435_);
lean_closure_set(v___f_436_, 2, v_toBind_427_);
lean_closure_set(v___f_436_, 3, v___f_429_);
v___x_437_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0___closed__0));
v___x_438_ = l_Lean_Name_mkStr2(v___x_430_, v___x_437_);
v___x_439_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_439_, 0, v___x_438_);
lean_closure_set(v___x_439_, 1, v_val_435_);
lean_closure_set(v___x_439_, 2, v_inst_x27_426_);
v___x_440_ = lean_apply_2(v_inst_431_, lean_box(0), v___x_439_);
v___x_441_ = lean_apply_4(v_toBind_427_, lean_box(0), lean_box(0), v___x_440_, v___f_436_);
return v___x_441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_u_451_, lean_object* v_type_452_, lean_object* v_scalar_453_, lean_object* v_expectedSMulInst_454_){
_start:
{
lean_object* v_toApplicative_455_; lean_object* v_toBind_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_489_; 
v_toApplicative_455_ = lean_ctor_get(v_inst_449_, 0);
v_toBind_456_ = lean_ctor_get(v_inst_449_, 1);
v_isSharedCheck_489_ = !lean_is_exclusive(v_inst_449_);
if (v_isSharedCheck_489_ == 0)
{
v___x_458_ = v_inst_449_;
v_isShared_459_ = v_isSharedCheck_489_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_toBind_456_);
lean_inc(v_toApplicative_455_);
lean_dec(v_inst_449_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_489_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v_canonExpr_460_; lean_object* v_synthInstance_x3f_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_488_; 
v_canonExpr_460_ = lean_ctor_get(v_inst_450_, 0);
v_synthInstance_x3f_461_ = lean_ctor_get(v_inst_450_, 1);
v_isSharedCheck_488_ = !lean_is_exclusive(v_inst_450_);
if (v_isSharedCheck_488_ == 0)
{
v___x_463_ = v_inst_450_;
v_isShared_464_ = v_isSharedCheck_488_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_synthInstance_x3f_461_);
lean_inc(v_canonExpr_460_);
lean_dec(v_inst_450_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_488_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_465_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__1));
v___x_466_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2);
v___x_467_ = lean_box(0);
lean_inc(v_u_451_);
if (v_isShared_464_ == 0)
{
lean_ctor_set_tag(v___x_463_, 1);
lean_ctor_set(v___x_463_, 1, v___x_467_);
lean_ctor_set(v___x_463_, 0, v_u_451_);
v___x_469_ = v___x_463_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_u_451_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v___x_467_);
v___x_469_ = v_reuseFailAlloc_487_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_471_; 
lean_inc_ref(v___x_469_);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 1);
lean_ctor_set(v___x_458_, 1, v___x_469_);
lean_ctor_set(v___x_458_, 0, v___x_466_);
v___x_471_ = v___x_458_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_486_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_472_; lean_object* v_inst_x27_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v_toPure_480_; lean_object* v___f_481_; lean_object* v___f_482_; lean_object* v___x_483_; lean_object* v___f_484_; lean_object* v___x_485_; 
v___x_472_ = l_Lean_mkConst(v___x_465_, v___x_471_);
lean_inc_ref_n(v_type_452_, 3);
lean_inc_ref_n(v_scalar_453_, 2);
v_inst_x27_473_ = l_Lean_mkApp3(v___x_472_, v_scalar_453_, v_type_452_, v_expectedSMulInst_454_);
v___x_474_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__2));
v___x_475_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___closed__3));
v___x_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_476_, 0, v_u_451_);
lean_ctor_set(v___x_476_, 1, v___x_469_);
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_466_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
lean_inc_ref(v___x_477_);
v___x_478_ = l_Lean_mkConst(v___x_475_, v___x_477_);
v___x_479_ = l_Lean_mkApp3(v___x_478_, v_scalar_453_, v_type_452_, v_type_452_);
v_toPure_480_ = lean_ctor_get(v_toApplicative_455_, 1);
lean_inc(v_toPure_480_);
lean_dec_ref(v_toApplicative_455_);
v___f_481_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_481_, 0, v___x_474_);
lean_closure_set(v___f_481_, 1, v___x_477_);
lean_closure_set(v___f_481_, 2, v_scalar_453_);
lean_closure_set(v___f_481_, 3, v_type_452_);
lean_closure_set(v___f_481_, 4, v_canonExpr_460_);
v___f_482_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_482_, 0, v___f_481_);
v___x_483_ = lean_apply_1(v_synthInstance_x3f_461_, v___x_479_);
lean_inc_ref(v___f_482_);
lean_inc(v_toBind_456_);
v___f_484_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg___lam__4), 8, 7);
lean_closure_set(v___f_484_, 0, v_toPure_480_);
lean_closure_set(v___f_484_, 1, v_inst_x27_473_);
lean_closure_set(v___f_484_, 2, v_toBind_456_);
lean_closure_set(v___f_484_, 3, v___f_482_);
lean_closure_set(v___f_484_, 4, v___f_482_);
lean_closure_set(v___f_484_, 5, v___x_474_);
lean_closure_set(v___f_484_, 6, v_inst_448_);
v___x_485_ = lean_apply_4(v_toBind_456_, lean_box(0), lean_box(0), v___x_483_, v___f_484_);
return v___x_485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn(lean_object* v_m_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_inst_493_, lean_object* v_u_494_, lean_object* v_type_495_, lean_object* v_scalar_496_, lean_object* v_expectedSMulInst_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(v_inst_491_, v_inst_492_, v_inst_493_, v_u_494_, v_type_495_, v_scalar_496_, v_expectedSMulInst_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__0(lean_object* v_fn_499_, lean_object* v_s_500_){
_start:
{
lean_object* v_id_501_; lean_object* v_type_502_; lean_object* v_u_503_; lean_object* v_ringInst_504_; lean_object* v_semiringInst_505_; lean_object* v_charInst_x3f_506_; lean_object* v_addFn_x3f_507_; lean_object* v_mulFn_x3f_508_; lean_object* v_subFn_x3f_509_; lean_object* v_negFn_x3f_510_; lean_object* v_powFn_x3f_511_; lean_object* v_intCastFn_x3f_512_; lean_object* v_natCastFn_x3f_513_; lean_object* v_intSMulFn_x3f_514_; lean_object* v_one_x3f_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_id_501_ = lean_ctor_get(v_s_500_, 0);
v_type_502_ = lean_ctor_get(v_s_500_, 1);
v_u_503_ = lean_ctor_get(v_s_500_, 2);
v_ringInst_504_ = lean_ctor_get(v_s_500_, 3);
v_semiringInst_505_ = lean_ctor_get(v_s_500_, 4);
v_charInst_x3f_506_ = lean_ctor_get(v_s_500_, 5);
v_addFn_x3f_507_ = lean_ctor_get(v_s_500_, 6);
v_mulFn_x3f_508_ = lean_ctor_get(v_s_500_, 7);
v_subFn_x3f_509_ = lean_ctor_get(v_s_500_, 8);
v_negFn_x3f_510_ = lean_ctor_get(v_s_500_, 9);
v_powFn_x3f_511_ = lean_ctor_get(v_s_500_, 10);
v_intCastFn_x3f_512_ = lean_ctor_get(v_s_500_, 11);
v_natCastFn_x3f_513_ = lean_ctor_get(v_s_500_, 12);
v_intSMulFn_x3f_514_ = lean_ctor_get(v_s_500_, 14);
v_one_x3f_515_ = lean_ctor_get(v_s_500_, 15);
v_isSharedCheck_523_ = !lean_is_exclusive(v_s_500_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_s_500_, 13);
lean_dec(v_unused_524_);
v___x_517_ = v_s_500_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_one_x3f_515_);
lean_inc(v_intSMulFn_x3f_514_);
lean_inc(v_natCastFn_x3f_513_);
lean_inc(v_intCastFn_x3f_512_);
lean_inc(v_powFn_x3f_511_);
lean_inc(v_negFn_x3f_510_);
lean_inc(v_subFn_x3f_509_);
lean_inc(v_mulFn_x3f_508_);
lean_inc(v_addFn_x3f_507_);
lean_inc(v_charInst_x3f_506_);
lean_inc(v_semiringInst_505_);
lean_inc(v_ringInst_504_);
lean_inc(v_u_503_);
lean_inc(v_type_502_);
lean_inc(v_id_501_);
lean_dec(v_s_500_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v_fn_499_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 13, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_id_501_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_type_502_);
lean_ctor_set(v_reuseFailAlloc_522_, 2, v_u_503_);
lean_ctor_set(v_reuseFailAlloc_522_, 3, v_ringInst_504_);
lean_ctor_set(v_reuseFailAlloc_522_, 4, v_semiringInst_505_);
lean_ctor_set(v_reuseFailAlloc_522_, 5, v_charInst_x3f_506_);
lean_ctor_set(v_reuseFailAlloc_522_, 6, v_addFn_x3f_507_);
lean_ctor_set(v_reuseFailAlloc_522_, 7, v_mulFn_x3f_508_);
lean_ctor_set(v_reuseFailAlloc_522_, 8, v_subFn_x3f_509_);
lean_ctor_set(v_reuseFailAlloc_522_, 9, v_negFn_x3f_510_);
lean_ctor_set(v_reuseFailAlloc_522_, 10, v_powFn_x3f_511_);
lean_ctor_set(v_reuseFailAlloc_522_, 11, v_intCastFn_x3f_512_);
lean_ctor_set(v_reuseFailAlloc_522_, 12, v_natCastFn_x3f_513_);
lean_ctor_set(v_reuseFailAlloc_522_, 13, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_522_, 14, v_intSMulFn_x3f_514_);
lean_ctor_set(v_reuseFailAlloc_522_, 15, v_one_x3f_515_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__1(lean_object* v_toPure_525_, lean_object* v_fn_526_, lean_object* v_____r_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_apply_2(v_toPure_525_, lean_box(0), v_fn_526_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__2(lean_object* v_toPure_529_, lean_object* v_modifyRing_530_, lean_object* v_toBind_531_, lean_object* v_fn_532_){
_start:
{
lean_object* v___f_533_; lean_object* v___f_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_inc_ref(v_fn_532_);
v___f_533_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_533_, 0, v_fn_532_);
v___f_534_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_534_, 0, v_toPure_529_);
lean_closure_set(v___f_534_, 1, v_fn_532_);
v___x_535_ = lean_apply_1(v_modifyRing_530_, v___f_533_);
v___x_536_ = lean_apply_4(v_toBind_531_, lean_box(0), lean_box(0), v___x_535_, v___f_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3(lean_object* v_toPure_543_, lean_object* v_inst_544_, lean_object* v_inst_545_, lean_object* v_inst_546_, lean_object* v_toBind_547_, lean_object* v___f_548_, lean_object* v_ring_549_){
_start:
{
lean_object* v_natSMulFn_x3f_550_; 
v_natSMulFn_x3f_550_ = lean_ctor_get(v_ring_549_, 13);
if (lean_obj_tag(v_natSMulFn_x3f_550_) == 1)
{
lean_object* v_val_551_; lean_object* v___x_552_; 
lean_inc_ref(v_natSMulFn_x3f_550_);
lean_dec_ref(v_ring_549_);
lean_dec(v___f_548_);
lean_dec(v_toBind_547_);
lean_dec_ref(v_inst_546_);
lean_dec_ref(v_inst_545_);
lean_dec(v_inst_544_);
v_val_551_ = lean_ctor_get(v_natSMulFn_x3f_550_, 0);
lean_inc(v_val_551_);
lean_dec_ref_known(v_natSMulFn_x3f_550_, 1);
v___x_552_ = lean_apply_2(v_toPure_543_, lean_box(0), v_val_551_);
return v___x_552_;
}
else
{
lean_object* v_type_553_; lean_object* v_u_554_; lean_object* v_semiringInst_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec(v_toPure_543_);
v_type_553_ = lean_ctor_get(v_ring_549_, 1);
lean_inc_ref_n(v_type_553_, 2);
v_u_554_ = lean_ctor_get(v_ring_549_, 2);
lean_inc_n(v_u_554_, 2);
v_semiringInst_555_ = lean_ctor_get(v_ring_549_, 4);
lean_inc_ref(v_semiringInst_555_);
lean_dec_ref(v_ring_549_);
v___x_556_ = l_Lean_Nat_mkType;
v___x_557_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1));
v___x_558_ = lean_box(0);
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v_u_554_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = l_Lean_mkConst(v___x_557_, v___x_559_);
v___x_561_ = l_Lean_mkAppB(v___x_560_, v_type_553_, v_semiringInst_555_);
v___x_562_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(v_inst_544_, v_inst_545_, v_inst_546_, v_u_554_, v_type_553_, v___x_556_, v___x_561_);
v___x_563_ = lean_apply_4(v_toBind_547_, lean_box(0), lean_box(0), v___x_562_, v___f_548_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg(lean_object* v_inst_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_inst_567_){
_start:
{
lean_object* v_toApplicative_568_; lean_object* v_toBind_569_; lean_object* v_getRing_570_; lean_object* v_modifyRing_571_; lean_object* v_toPure_572_; lean_object* v___f_573_; lean_object* v___f_574_; lean_object* v___x_575_; 
v_toApplicative_568_ = lean_ctor_get(v_inst_565_, 0);
v_toBind_569_ = lean_ctor_get(v_inst_565_, 1);
lean_inc_n(v_toBind_569_, 3);
v_getRing_570_ = lean_ctor_get(v_inst_567_, 0);
lean_inc(v_getRing_570_);
v_modifyRing_571_ = lean_ctor_get(v_inst_567_, 1);
lean_inc(v_modifyRing_571_);
lean_dec_ref(v_inst_567_);
v_toPure_572_ = lean_ctor_get(v_toApplicative_568_, 1);
lean_inc_n(v_toPure_572_, 2);
v___f_573_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_573_, 0, v_toPure_572_);
lean_closure_set(v___f_573_, 1, v_modifyRing_571_);
lean_closure_set(v___f_573_, 2, v_toBind_569_);
v___f_574_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3), 7, 6);
lean_closure_set(v___f_574_, 0, v_toPure_572_);
lean_closure_set(v___f_574_, 1, v_inst_564_);
lean_closure_set(v___f_574_, 2, v_inst_565_);
lean_closure_set(v___f_574_, 3, v_inst_566_);
lean_closure_set(v___f_574_, 4, v_toBind_569_);
lean_closure_set(v___f_574_, 5, v___f_573_);
v___x_575_ = lean_apply_4(v_toBind_569_, lean_box(0), lean_box(0), v_getRing_570_, v___f_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn(lean_object* v_m_576_, lean_object* v_inst_577_, lean_object* v_inst_578_, lean_object* v_inst_579_, lean_object* v_inst_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg(v_inst_577_, v_inst_578_, v_inst_579_, v_inst_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__0(lean_object* v_fn_582_, lean_object* v_s_583_){
_start:
{
lean_object* v_id_584_; lean_object* v_type_585_; lean_object* v_u_586_; lean_object* v_ringInst_587_; lean_object* v_semiringInst_588_; lean_object* v_charInst_x3f_589_; lean_object* v_addFn_x3f_590_; lean_object* v_mulFn_x3f_591_; lean_object* v_subFn_x3f_592_; lean_object* v_negFn_x3f_593_; lean_object* v_powFn_x3f_594_; lean_object* v_intCastFn_x3f_595_; lean_object* v_natCastFn_x3f_596_; lean_object* v_natSMulFn_x3f_597_; lean_object* v_one_x3f_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_606_; 
v_id_584_ = lean_ctor_get(v_s_583_, 0);
v_type_585_ = lean_ctor_get(v_s_583_, 1);
v_u_586_ = lean_ctor_get(v_s_583_, 2);
v_ringInst_587_ = lean_ctor_get(v_s_583_, 3);
v_semiringInst_588_ = lean_ctor_get(v_s_583_, 4);
v_charInst_x3f_589_ = lean_ctor_get(v_s_583_, 5);
v_addFn_x3f_590_ = lean_ctor_get(v_s_583_, 6);
v_mulFn_x3f_591_ = lean_ctor_get(v_s_583_, 7);
v_subFn_x3f_592_ = lean_ctor_get(v_s_583_, 8);
v_negFn_x3f_593_ = lean_ctor_get(v_s_583_, 9);
v_powFn_x3f_594_ = lean_ctor_get(v_s_583_, 10);
v_intCastFn_x3f_595_ = lean_ctor_get(v_s_583_, 11);
v_natCastFn_x3f_596_ = lean_ctor_get(v_s_583_, 12);
v_natSMulFn_x3f_597_ = lean_ctor_get(v_s_583_, 13);
v_one_x3f_598_ = lean_ctor_get(v_s_583_, 15);
v_isSharedCheck_606_ = !lean_is_exclusive(v_s_583_);
if (v_isSharedCheck_606_ == 0)
{
lean_object* v_unused_607_; 
v_unused_607_ = lean_ctor_get(v_s_583_, 14);
lean_dec(v_unused_607_);
v___x_600_ = v_s_583_;
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_one_x3f_598_);
lean_inc(v_natSMulFn_x3f_597_);
lean_inc(v_natCastFn_x3f_596_);
lean_inc(v_intCastFn_x3f_595_);
lean_inc(v_powFn_x3f_594_);
lean_inc(v_negFn_x3f_593_);
lean_inc(v_subFn_x3f_592_);
lean_inc(v_mulFn_x3f_591_);
lean_inc(v_addFn_x3f_590_);
lean_inc(v_charInst_x3f_589_);
lean_inc(v_semiringInst_588_);
lean_inc(v_ringInst_587_);
lean_inc(v_u_586_);
lean_inc(v_type_585_);
lean_inc(v_id_584_);
lean_dec(v_s_583_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_602_, 0, v_fn_582_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 14, v___x_602_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_id_584_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_type_585_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v_u_586_);
lean_ctor_set(v_reuseFailAlloc_605_, 3, v_ringInst_587_);
lean_ctor_set(v_reuseFailAlloc_605_, 4, v_semiringInst_588_);
lean_ctor_set(v_reuseFailAlloc_605_, 5, v_charInst_x3f_589_);
lean_ctor_set(v_reuseFailAlloc_605_, 6, v_addFn_x3f_590_);
lean_ctor_set(v_reuseFailAlloc_605_, 7, v_mulFn_x3f_591_);
lean_ctor_set(v_reuseFailAlloc_605_, 8, v_subFn_x3f_592_);
lean_ctor_set(v_reuseFailAlloc_605_, 9, v_negFn_x3f_593_);
lean_ctor_set(v_reuseFailAlloc_605_, 10, v_powFn_x3f_594_);
lean_ctor_set(v_reuseFailAlloc_605_, 11, v_intCastFn_x3f_595_);
lean_ctor_set(v_reuseFailAlloc_605_, 12, v_natCastFn_x3f_596_);
lean_ctor_set(v_reuseFailAlloc_605_, 13, v_natSMulFn_x3f_597_);
lean_ctor_set(v_reuseFailAlloc_605_, 14, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_605_, 15, v_one_x3f_598_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__2(lean_object* v_toPure_608_, lean_object* v_modifyRing_609_, lean_object* v_toBind_610_, lean_object* v_fn_611_){
_start:
{
lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
lean_inc_ref(v_fn_611_);
v___f_612_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_612_, 0, v_fn_611_);
v___f_613_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_613_, 0, v_toPure_608_);
lean_closure_set(v___f_613_, 1, v_fn_611_);
v___x_614_ = lean_apply_1(v_modifyRing_609_, v___f_612_);
v___x_615_ = lean_apply_4(v_toBind_610_, lean_box(0), lean_box(0), v___x_614_, v___f_613_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1(lean_object* v_toPure_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v_toBind_627_, lean_object* v___f_628_, lean_object* v_ring_629_){
_start:
{
lean_object* v_intSMulFn_x3f_630_; 
v_intSMulFn_x3f_630_ = lean_ctor_get(v_ring_629_, 14);
if (lean_obj_tag(v_intSMulFn_x3f_630_) == 1)
{
lean_object* v_val_631_; lean_object* v___x_632_; 
lean_inc_ref(v_intSMulFn_x3f_630_);
lean_dec_ref(v_ring_629_);
lean_dec(v___f_628_);
lean_dec(v_toBind_627_);
lean_dec_ref(v_inst_626_);
lean_dec_ref(v_inst_625_);
lean_dec(v_inst_624_);
v_val_631_ = lean_ctor_get(v_intSMulFn_x3f_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v_intSMulFn_x3f_630_, 1);
v___x_632_ = lean_apply_2(v_toPure_623_, lean_box(0), v_val_631_);
return v___x_632_;
}
else
{
lean_object* v_type_633_; lean_object* v_u_634_; lean_object* v_ringInst_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec(v_toPure_623_);
v_type_633_ = lean_ctor_get(v_ring_629_, 1);
lean_inc_ref_n(v_type_633_, 2);
v_u_634_ = lean_ctor_get(v_ring_629_, 2);
lean_inc_n(v_u_634_, 2);
v_ringInst_635_ = lean_ctor_get(v_ring_629_, 3);
lean_inc_ref(v_ringInst_635_);
lean_dec_ref(v_ring_629_);
v___x_636_ = l_Lean_Int_mkType;
v___x_637_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1___closed__2));
v___x_638_ = lean_box(0);
v___x_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_639_, 0, v_u_634_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = l_Lean_mkConst(v___x_637_, v___x_639_);
v___x_641_ = l_Lean_mkAppB(v___x_640_, v_type_633_, v_ringInst_635_);
v___x_642_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(v_inst_624_, v_inst_625_, v_inst_626_, v_u_634_, v_type_633_, v___x_636_, v___x_641_);
v___x_643_ = lean_apply_4(v_toBind_627_, lean_box(0), lean_box(0), v___x_642_, v___f_628_);
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg(lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_inst_646_, lean_object* v_inst_647_){
_start:
{
lean_object* v_toApplicative_648_; lean_object* v_toBind_649_; lean_object* v_getRing_650_; lean_object* v_modifyRing_651_; lean_object* v_toPure_652_; lean_object* v___f_653_; lean_object* v___f_654_; lean_object* v___x_655_; 
v_toApplicative_648_ = lean_ctor_get(v_inst_645_, 0);
v_toBind_649_ = lean_ctor_get(v_inst_645_, 1);
lean_inc_n(v_toBind_649_, 3);
v_getRing_650_ = lean_ctor_get(v_inst_647_, 0);
lean_inc(v_getRing_650_);
v_modifyRing_651_ = lean_ctor_get(v_inst_647_, 1);
lean_inc(v_modifyRing_651_);
lean_dec_ref(v_inst_647_);
v_toPure_652_ = lean_ctor_get(v_toApplicative_648_, 1);
lean_inc_n(v_toPure_652_, 2);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_653_, 0, v_toPure_652_);
lean_closure_set(v___f_653_, 1, v_modifyRing_651_);
lean_closure_set(v___f_653_, 2, v_toBind_649_);
v___f_654_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg___lam__1), 7, 6);
lean_closure_set(v___f_654_, 0, v_toPure_652_);
lean_closure_set(v___f_654_, 1, v_inst_644_);
lean_closure_set(v___f_654_, 2, v_inst_645_);
lean_closure_set(v___f_654_, 3, v_inst_646_);
lean_closure_set(v___f_654_, 4, v_toBind_649_);
lean_closure_set(v___f_654_, 5, v___f_653_);
v___x_655_ = lean_apply_4(v_toBind_649_, lean_box(0), lean_box(0), v_getRing_650_, v___f_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntSMulFn(lean_object* v_m_656_, lean_object* v_inst_657_, lean_object* v_inst_658_, lean_object* v_inst_659_, lean_object* v_inst_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Meta_Sym_Arith_getIntSMulFn___redArg(v_inst_657_, v_inst_658_, v_inst_659_, v_inst_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0(lean_object* v_addFn_662_, lean_object* v_s_663_){
_start:
{
lean_object* v_id_664_; lean_object* v_type_665_; lean_object* v_u_666_; lean_object* v_ringInst_667_; lean_object* v_semiringInst_668_; lean_object* v_charInst_x3f_669_; lean_object* v_mulFn_x3f_670_; lean_object* v_subFn_x3f_671_; lean_object* v_negFn_x3f_672_; lean_object* v_powFn_x3f_673_; lean_object* v_intCastFn_x3f_674_; lean_object* v_natCastFn_x3f_675_; lean_object* v_natSMulFn_x3f_676_; lean_object* v_intSMulFn_x3f_677_; lean_object* v_one_x3f_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_686_; 
v_id_664_ = lean_ctor_get(v_s_663_, 0);
v_type_665_ = lean_ctor_get(v_s_663_, 1);
v_u_666_ = lean_ctor_get(v_s_663_, 2);
v_ringInst_667_ = lean_ctor_get(v_s_663_, 3);
v_semiringInst_668_ = lean_ctor_get(v_s_663_, 4);
v_charInst_x3f_669_ = lean_ctor_get(v_s_663_, 5);
v_mulFn_x3f_670_ = lean_ctor_get(v_s_663_, 7);
v_subFn_x3f_671_ = lean_ctor_get(v_s_663_, 8);
v_negFn_x3f_672_ = lean_ctor_get(v_s_663_, 9);
v_powFn_x3f_673_ = lean_ctor_get(v_s_663_, 10);
v_intCastFn_x3f_674_ = lean_ctor_get(v_s_663_, 11);
v_natCastFn_x3f_675_ = lean_ctor_get(v_s_663_, 12);
v_natSMulFn_x3f_676_ = lean_ctor_get(v_s_663_, 13);
v_intSMulFn_x3f_677_ = lean_ctor_get(v_s_663_, 14);
v_one_x3f_678_ = lean_ctor_get(v_s_663_, 15);
v_isSharedCheck_686_ = !lean_is_exclusive(v_s_663_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v_s_663_, 6);
lean_dec(v_unused_687_);
v___x_680_ = v_s_663_;
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_one_x3f_678_);
lean_inc(v_intSMulFn_x3f_677_);
lean_inc(v_natSMulFn_x3f_676_);
lean_inc(v_natCastFn_x3f_675_);
lean_inc(v_intCastFn_x3f_674_);
lean_inc(v_powFn_x3f_673_);
lean_inc(v_negFn_x3f_672_);
lean_inc(v_subFn_x3f_671_);
lean_inc(v_mulFn_x3f_670_);
lean_inc(v_charInst_x3f_669_);
lean_inc(v_semiringInst_668_);
lean_inc(v_ringInst_667_);
lean_inc(v_u_666_);
lean_inc(v_type_665_);
lean_inc(v_id_664_);
lean_dec(v_s_663_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v_addFn_662_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 6, v___x_682_);
v___x_684_ = v___x_680_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_id_664_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_type_665_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_u_666_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_ringInst_667_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_semiringInst_668_);
lean_ctor_set(v_reuseFailAlloc_685_, 5, v_charInst_x3f_669_);
lean_ctor_set(v_reuseFailAlloc_685_, 6, v___x_682_);
lean_ctor_set(v_reuseFailAlloc_685_, 7, v_mulFn_x3f_670_);
lean_ctor_set(v_reuseFailAlloc_685_, 8, v_subFn_x3f_671_);
lean_ctor_set(v_reuseFailAlloc_685_, 9, v_negFn_x3f_672_);
lean_ctor_set(v_reuseFailAlloc_685_, 10, v_powFn_x3f_673_);
lean_ctor_set(v_reuseFailAlloc_685_, 11, v_intCastFn_x3f_674_);
lean_ctor_set(v_reuseFailAlloc_685_, 12, v_natCastFn_x3f_675_);
lean_ctor_set(v_reuseFailAlloc_685_, 13, v_natSMulFn_x3f_676_);
lean_ctor_set(v_reuseFailAlloc_685_, 14, v_intSMulFn_x3f_677_);
lean_ctor_set(v_reuseFailAlloc_685_, 15, v_one_x3f_678_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1(lean_object* v_toPure_688_, lean_object* v_addFn_689_, lean_object* v_____r_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_apply_2(v_toPure_688_, lean_box(0), v_addFn_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2(lean_object* v_toPure_692_, lean_object* v_modifyRing_693_, lean_object* v_toBind_694_, lean_object* v_addFn_695_){
_start:
{
lean_object* v___f_696_; lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_inc_ref(v_addFn_695_);
v___f_696_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_696_, 0, v_addFn_695_);
v___f_697_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_697_, 0, v_toPure_692_);
lean_closure_set(v___f_697_, 1, v_addFn_695_);
v___x_698_ = lean_apply_1(v_modifyRing_693_, v___f_696_);
v___x_699_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v___x_698_, v___f_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3(lean_object* v_toPure_716_, lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_toBind_721_, lean_object* v___f_722_, lean_object* v_ring_723_){
_start:
{
lean_object* v_addFn_x3f_724_; 
v_addFn_x3f_724_ = lean_ctor_get(v_ring_723_, 6);
if (lean_obj_tag(v_addFn_x3f_724_) == 1)
{
lean_object* v_val_725_; lean_object* v___x_726_; 
lean_inc_ref(v_addFn_x3f_724_);
lean_dec_ref(v_ring_723_);
lean_dec(v___f_722_);
lean_dec(v_toBind_721_);
lean_dec_ref(v_inst_720_);
lean_dec_ref(v_inst_719_);
lean_dec_ref(v_inst_718_);
lean_dec(v_inst_717_);
v_val_725_ = lean_ctor_get(v_addFn_x3f_724_, 0);
lean_inc(v_val_725_);
lean_dec_ref_known(v_addFn_x3f_724_, 1);
v___x_726_ = lean_apply_2(v_toPure_716_, lean_box(0), v_val_725_);
return v___x_726_;
}
else
{
lean_object* v_type_727_; lean_object* v_u_728_; lean_object* v_semiringInst_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_expectedInst_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v_toPure_716_);
v_type_727_ = lean_ctor_get(v_ring_723_, 1);
lean_inc_ref_n(v_type_727_, 3);
v_u_728_ = lean_ctor_get(v_ring_723_, 2);
lean_inc_n(v_u_728_, 2);
v_semiringInst_729_ = lean_ctor_get(v_ring_723_, 4);
lean_inc_ref(v_semiringInst_729_);
lean_dec_ref(v_ring_723_);
v___x_730_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1));
v___x_731_ = lean_box(0);
v___x_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_732_, 0, v_u_728_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
lean_inc_ref(v___x_732_);
v___x_733_ = l_Lean_mkConst(v___x_730_, v___x_732_);
v___x_734_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3));
v___x_735_ = l_Lean_mkConst(v___x_734_, v___x_732_);
v___x_736_ = l_Lean_mkAppB(v___x_735_, v_type_727_, v_semiringInst_729_);
v_expectedInst_737_ = l_Lean_mkAppB(v___x_733_, v_type_727_, v___x_736_);
v___x_738_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5));
v___x_739_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7));
v___x_740_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_type_727_, v_u_728_, v___x_738_, v___x_739_, v_expectedInst_737_);
v___x_741_ = lean_apply_4(v_toBind_721_, lean_box(0), lean_box(0), v___x_740_, v___f_722_);
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg(lean_object* v_inst_742_, lean_object* v_inst_743_, lean_object* v_inst_744_, lean_object* v_inst_745_, lean_object* v_inst_746_){
_start:
{
lean_object* v_toApplicative_747_; lean_object* v_toBind_748_; lean_object* v_getRing_749_; lean_object* v_modifyRing_750_; lean_object* v_toPure_751_; lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___x_754_; 
v_toApplicative_747_ = lean_ctor_get(v_inst_744_, 0);
v_toBind_748_ = lean_ctor_get(v_inst_744_, 1);
lean_inc_n(v_toBind_748_, 3);
v_getRing_749_ = lean_ctor_get(v_inst_746_, 0);
lean_inc(v_getRing_749_);
v_modifyRing_750_ = lean_ctor_get(v_inst_746_, 1);
lean_inc(v_modifyRing_750_);
lean_dec_ref(v_inst_746_);
v_toPure_751_ = lean_ctor_get(v_toApplicative_747_, 1);
lean_inc_n(v_toPure_751_, 2);
v___f_752_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_752_, 0, v_toPure_751_);
lean_closure_set(v___f_752_, 1, v_modifyRing_750_);
lean_closure_set(v___f_752_, 2, v_toBind_748_);
v___f_753_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_753_, 0, v_toPure_751_);
lean_closure_set(v___f_753_, 1, v_inst_742_);
lean_closure_set(v___f_753_, 2, v_inst_743_);
lean_closure_set(v___f_753_, 3, v_inst_744_);
lean_closure_set(v___f_753_, 4, v_inst_745_);
lean_closure_set(v___f_753_, 5, v_toBind_748_);
lean_closure_set(v___f_753_, 6, v___f_752_);
v___x_754_ = lean_apply_4(v_toBind_748_, lean_box(0), lean_box(0), v_getRing_749_, v___f_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn(lean_object* v_m_755_, lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_inst_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_Meta_Sym_Arith_getAddFn___redArg(v_inst_756_, v_inst_757_, v_inst_758_, v_inst_759_, v_inst_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0(lean_object* v_mulFn_762_, lean_object* v_s_763_){
_start:
{
lean_object* v_id_764_; lean_object* v_type_765_; lean_object* v_u_766_; lean_object* v_ringInst_767_; lean_object* v_semiringInst_768_; lean_object* v_charInst_x3f_769_; lean_object* v_addFn_x3f_770_; lean_object* v_subFn_x3f_771_; lean_object* v_negFn_x3f_772_; lean_object* v_powFn_x3f_773_; lean_object* v_intCastFn_x3f_774_; lean_object* v_natCastFn_x3f_775_; lean_object* v_natSMulFn_x3f_776_; lean_object* v_intSMulFn_x3f_777_; lean_object* v_one_x3f_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_786_; 
v_id_764_ = lean_ctor_get(v_s_763_, 0);
v_type_765_ = lean_ctor_get(v_s_763_, 1);
v_u_766_ = lean_ctor_get(v_s_763_, 2);
v_ringInst_767_ = lean_ctor_get(v_s_763_, 3);
v_semiringInst_768_ = lean_ctor_get(v_s_763_, 4);
v_charInst_x3f_769_ = lean_ctor_get(v_s_763_, 5);
v_addFn_x3f_770_ = lean_ctor_get(v_s_763_, 6);
v_subFn_x3f_771_ = lean_ctor_get(v_s_763_, 8);
v_negFn_x3f_772_ = lean_ctor_get(v_s_763_, 9);
v_powFn_x3f_773_ = lean_ctor_get(v_s_763_, 10);
v_intCastFn_x3f_774_ = lean_ctor_get(v_s_763_, 11);
v_natCastFn_x3f_775_ = lean_ctor_get(v_s_763_, 12);
v_natSMulFn_x3f_776_ = lean_ctor_get(v_s_763_, 13);
v_intSMulFn_x3f_777_ = lean_ctor_get(v_s_763_, 14);
v_one_x3f_778_ = lean_ctor_get(v_s_763_, 15);
v_isSharedCheck_786_ = !lean_is_exclusive(v_s_763_);
if (v_isSharedCheck_786_ == 0)
{
lean_object* v_unused_787_; 
v_unused_787_ = lean_ctor_get(v_s_763_, 7);
lean_dec(v_unused_787_);
v___x_780_ = v_s_763_;
v_isShared_781_ = v_isSharedCheck_786_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_one_x3f_778_);
lean_inc(v_intSMulFn_x3f_777_);
lean_inc(v_natSMulFn_x3f_776_);
lean_inc(v_natCastFn_x3f_775_);
lean_inc(v_intCastFn_x3f_774_);
lean_inc(v_powFn_x3f_773_);
lean_inc(v_negFn_x3f_772_);
lean_inc(v_subFn_x3f_771_);
lean_inc(v_addFn_x3f_770_);
lean_inc(v_charInst_x3f_769_);
lean_inc(v_semiringInst_768_);
lean_inc(v_ringInst_767_);
lean_inc(v_u_766_);
lean_inc(v_type_765_);
lean_inc(v_id_764_);
lean_dec(v_s_763_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_786_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_782_, 0, v_mulFn_762_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 7, v___x_782_);
v___x_784_ = v___x_780_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_id_764_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_type_765_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_u_766_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v_ringInst_767_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v_semiringInst_768_);
lean_ctor_set(v_reuseFailAlloc_785_, 5, v_charInst_x3f_769_);
lean_ctor_set(v_reuseFailAlloc_785_, 6, v_addFn_x3f_770_);
lean_ctor_set(v_reuseFailAlloc_785_, 7, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_785_, 8, v_subFn_x3f_771_);
lean_ctor_set(v_reuseFailAlloc_785_, 9, v_negFn_x3f_772_);
lean_ctor_set(v_reuseFailAlloc_785_, 10, v_powFn_x3f_773_);
lean_ctor_set(v_reuseFailAlloc_785_, 11, v_intCastFn_x3f_774_);
lean_ctor_set(v_reuseFailAlloc_785_, 12, v_natCastFn_x3f_775_);
lean_ctor_set(v_reuseFailAlloc_785_, 13, v_natSMulFn_x3f_776_);
lean_ctor_set(v_reuseFailAlloc_785_, 14, v_intSMulFn_x3f_777_);
lean_ctor_set(v_reuseFailAlloc_785_, 15, v_one_x3f_778_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1(lean_object* v_toPure_788_, lean_object* v_mulFn_789_, lean_object* v_____r_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = lean_apply_2(v_toPure_788_, lean_box(0), v_mulFn_789_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2(lean_object* v_toPure_792_, lean_object* v_modifyRing_793_, lean_object* v_toBind_794_, lean_object* v_mulFn_795_){
_start:
{
lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc_ref(v_mulFn_795_);
v___f_796_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_796_, 0, v_mulFn_795_);
v___f_797_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_797_, 0, v_toPure_792_);
lean_closure_set(v___f_797_, 1, v_mulFn_795_);
v___x_798_ = lean_apply_1(v_modifyRing_793_, v___f_796_);
v___x_799_ = lean_apply_4(v_toBind_794_, lean_box(0), lean_box(0), v___x_798_, v___f_797_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3(lean_object* v_toPure_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_toBind_821_, lean_object* v___f_822_, lean_object* v_ring_823_){
_start:
{
lean_object* v_mulFn_x3f_824_; 
v_mulFn_x3f_824_ = lean_ctor_get(v_ring_823_, 7);
if (lean_obj_tag(v_mulFn_x3f_824_) == 1)
{
lean_object* v_val_825_; lean_object* v___x_826_; 
lean_inc_ref(v_mulFn_x3f_824_);
lean_dec_ref(v_ring_823_);
lean_dec(v___f_822_);
lean_dec(v_toBind_821_);
lean_dec_ref(v_inst_820_);
lean_dec_ref(v_inst_819_);
lean_dec_ref(v_inst_818_);
lean_dec(v_inst_817_);
v_val_825_ = lean_ctor_get(v_mulFn_x3f_824_, 0);
lean_inc(v_val_825_);
lean_dec_ref_known(v_mulFn_x3f_824_, 1);
v___x_826_ = lean_apply_2(v_toPure_816_, lean_box(0), v_val_825_);
return v___x_826_;
}
else
{
lean_object* v_type_827_; lean_object* v_u_828_; lean_object* v_semiringInst_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v_expectedInst_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
lean_dec(v_toPure_816_);
v_type_827_ = lean_ctor_get(v_ring_823_, 1);
lean_inc_ref_n(v_type_827_, 3);
v_u_828_ = lean_ctor_get(v_ring_823_, 2);
lean_inc_n(v_u_828_, 2);
v_semiringInst_829_ = lean_ctor_get(v_ring_823_, 4);
lean_inc_ref(v_semiringInst_829_);
lean_dec_ref(v_ring_823_);
v___x_830_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1));
v___x_831_ = lean_box(0);
v___x_832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_832_, 0, v_u_828_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
lean_inc_ref(v___x_832_);
v___x_833_ = l_Lean_mkConst(v___x_830_, v___x_832_);
v___x_834_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3));
v___x_835_ = l_Lean_mkConst(v___x_834_, v___x_832_);
v___x_836_ = l_Lean_mkAppB(v___x_835_, v_type_827_, v_semiringInst_829_);
v_expectedInst_837_ = l_Lean_mkAppB(v___x_833_, v_type_827_, v___x_836_);
v___x_838_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5));
v___x_839_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7));
v___x_840_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_817_, v_inst_818_, v_inst_819_, v_inst_820_, v_type_827_, v_u_828_, v___x_838_, v___x_839_, v_expectedInst_837_);
v___x_841_ = lean_apply_4(v_toBind_821_, lean_box(0), lean_box(0), v___x_840_, v___f_822_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg(lean_object* v_inst_842_, lean_object* v_inst_843_, lean_object* v_inst_844_, lean_object* v_inst_845_, lean_object* v_inst_846_){
_start:
{
lean_object* v_toApplicative_847_; lean_object* v_toBind_848_; lean_object* v_getRing_849_; lean_object* v_modifyRing_850_; lean_object* v_toPure_851_; lean_object* v___f_852_; lean_object* v___f_853_; lean_object* v___x_854_; 
v_toApplicative_847_ = lean_ctor_get(v_inst_844_, 0);
v_toBind_848_ = lean_ctor_get(v_inst_844_, 1);
lean_inc_n(v_toBind_848_, 3);
v_getRing_849_ = lean_ctor_get(v_inst_846_, 0);
lean_inc(v_getRing_849_);
v_modifyRing_850_ = lean_ctor_get(v_inst_846_, 1);
lean_inc(v_modifyRing_850_);
lean_dec_ref(v_inst_846_);
v_toPure_851_ = lean_ctor_get(v_toApplicative_847_, 1);
lean_inc_n(v_toPure_851_, 2);
v___f_852_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_852_, 0, v_toPure_851_);
lean_closure_set(v___f_852_, 1, v_modifyRing_850_);
lean_closure_set(v___f_852_, 2, v_toBind_848_);
v___f_853_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_853_, 0, v_toPure_851_);
lean_closure_set(v___f_853_, 1, v_inst_842_);
lean_closure_set(v___f_853_, 2, v_inst_843_);
lean_closure_set(v___f_853_, 3, v_inst_844_);
lean_closure_set(v___f_853_, 4, v_inst_845_);
lean_closure_set(v___f_853_, 5, v_toBind_848_);
lean_closure_set(v___f_853_, 6, v___f_852_);
v___x_854_ = lean_apply_4(v_toBind_848_, lean_box(0), lean_box(0), v_getRing_849_, v___f_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn(lean_object* v_m_855_, lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_inst_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_Meta_Sym_Arith_getMulFn___redArg(v_inst_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_inst_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0(lean_object* v_subFn_862_, lean_object* v_s_863_){
_start:
{
lean_object* v_id_864_; lean_object* v_type_865_; lean_object* v_u_866_; lean_object* v_ringInst_867_; lean_object* v_semiringInst_868_; lean_object* v_charInst_x3f_869_; lean_object* v_addFn_x3f_870_; lean_object* v_mulFn_x3f_871_; lean_object* v_negFn_x3f_872_; lean_object* v_powFn_x3f_873_; lean_object* v_intCastFn_x3f_874_; lean_object* v_natCastFn_x3f_875_; lean_object* v_natSMulFn_x3f_876_; lean_object* v_intSMulFn_x3f_877_; lean_object* v_one_x3f_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_886_; 
v_id_864_ = lean_ctor_get(v_s_863_, 0);
v_type_865_ = lean_ctor_get(v_s_863_, 1);
v_u_866_ = lean_ctor_get(v_s_863_, 2);
v_ringInst_867_ = lean_ctor_get(v_s_863_, 3);
v_semiringInst_868_ = lean_ctor_get(v_s_863_, 4);
v_charInst_x3f_869_ = lean_ctor_get(v_s_863_, 5);
v_addFn_x3f_870_ = lean_ctor_get(v_s_863_, 6);
v_mulFn_x3f_871_ = lean_ctor_get(v_s_863_, 7);
v_negFn_x3f_872_ = lean_ctor_get(v_s_863_, 9);
v_powFn_x3f_873_ = lean_ctor_get(v_s_863_, 10);
v_intCastFn_x3f_874_ = lean_ctor_get(v_s_863_, 11);
v_natCastFn_x3f_875_ = lean_ctor_get(v_s_863_, 12);
v_natSMulFn_x3f_876_ = lean_ctor_get(v_s_863_, 13);
v_intSMulFn_x3f_877_ = lean_ctor_get(v_s_863_, 14);
v_one_x3f_878_ = lean_ctor_get(v_s_863_, 15);
v_isSharedCheck_886_ = !lean_is_exclusive(v_s_863_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v_s_863_, 8);
lean_dec(v_unused_887_);
v___x_880_ = v_s_863_;
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_one_x3f_878_);
lean_inc(v_intSMulFn_x3f_877_);
lean_inc(v_natSMulFn_x3f_876_);
lean_inc(v_natCastFn_x3f_875_);
lean_inc(v_intCastFn_x3f_874_);
lean_inc(v_powFn_x3f_873_);
lean_inc(v_negFn_x3f_872_);
lean_inc(v_mulFn_x3f_871_);
lean_inc(v_addFn_x3f_870_);
lean_inc(v_charInst_x3f_869_);
lean_inc(v_semiringInst_868_);
lean_inc(v_ringInst_867_);
lean_inc(v_u_866_);
lean_inc(v_type_865_);
lean_inc(v_id_864_);
lean_dec(v_s_863_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_886_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_882_, 0, v_subFn_862_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 8, v___x_882_);
v___x_884_ = v___x_880_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_id_864_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_type_865_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_u_866_);
lean_ctor_set(v_reuseFailAlloc_885_, 3, v_ringInst_867_);
lean_ctor_set(v_reuseFailAlloc_885_, 4, v_semiringInst_868_);
lean_ctor_set(v_reuseFailAlloc_885_, 5, v_charInst_x3f_869_);
lean_ctor_set(v_reuseFailAlloc_885_, 6, v_addFn_x3f_870_);
lean_ctor_set(v_reuseFailAlloc_885_, 7, v_mulFn_x3f_871_);
lean_ctor_set(v_reuseFailAlloc_885_, 8, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_885_, 9, v_negFn_x3f_872_);
lean_ctor_set(v_reuseFailAlloc_885_, 10, v_powFn_x3f_873_);
lean_ctor_set(v_reuseFailAlloc_885_, 11, v_intCastFn_x3f_874_);
lean_ctor_set(v_reuseFailAlloc_885_, 12, v_natCastFn_x3f_875_);
lean_ctor_set(v_reuseFailAlloc_885_, 13, v_natSMulFn_x3f_876_);
lean_ctor_set(v_reuseFailAlloc_885_, 14, v_intSMulFn_x3f_877_);
lean_ctor_set(v_reuseFailAlloc_885_, 15, v_one_x3f_878_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1(lean_object* v_toPure_888_, lean_object* v_subFn_889_, lean_object* v_____r_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_apply_2(v_toPure_888_, lean_box(0), v_subFn_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2(lean_object* v_toPure_892_, lean_object* v_modifyRing_893_, lean_object* v_toBind_894_, lean_object* v_subFn_895_){
_start:
{
lean_object* v___f_896_; lean_object* v___f_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_inc_ref(v_subFn_895_);
v___f_896_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_896_, 0, v_subFn_895_);
v___f_897_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_897_, 0, v_toPure_892_);
lean_closure_set(v___f_897_, 1, v_subFn_895_);
v___x_898_ = lean_apply_1(v_modifyRing_893_, v___f_896_);
v___x_899_ = lean_apply_4(v_toBind_894_, lean_box(0), lean_box(0), v___x_898_, v___f_897_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3(lean_object* v_toPure_916_, lean_object* v_inst_917_, lean_object* v_inst_918_, lean_object* v_inst_919_, lean_object* v_inst_920_, lean_object* v_toBind_921_, lean_object* v___f_922_, lean_object* v_ring_923_){
_start:
{
lean_object* v_subFn_x3f_924_; 
v_subFn_x3f_924_ = lean_ctor_get(v_ring_923_, 8);
if (lean_obj_tag(v_subFn_x3f_924_) == 1)
{
lean_object* v_val_925_; lean_object* v___x_926_; 
lean_inc_ref(v_subFn_x3f_924_);
lean_dec_ref(v_ring_923_);
lean_dec(v___f_922_);
lean_dec(v_toBind_921_);
lean_dec_ref(v_inst_920_);
lean_dec_ref(v_inst_919_);
lean_dec_ref(v_inst_918_);
lean_dec(v_inst_917_);
v_val_925_ = lean_ctor_get(v_subFn_x3f_924_, 0);
lean_inc(v_val_925_);
lean_dec_ref_known(v_subFn_x3f_924_, 1);
v___x_926_ = lean_apply_2(v_toPure_916_, lean_box(0), v_val_925_);
return v___x_926_;
}
else
{
lean_object* v_type_927_; lean_object* v_u_928_; lean_object* v_ringInst_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v_expectedInst_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
lean_dec(v_toPure_916_);
v_type_927_ = lean_ctor_get(v_ring_923_, 1);
lean_inc_ref_n(v_type_927_, 3);
v_u_928_ = lean_ctor_get(v_ring_923_, 2);
lean_inc_n(v_u_928_, 2);
v_ringInst_929_ = lean_ctor_get(v_ring_923_, 3);
lean_inc_ref(v_ringInst_929_);
lean_dec_ref(v_ring_923_);
v___x_930_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1));
v___x_931_ = lean_box(0);
v___x_932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_932_, 0, v_u_928_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
lean_inc_ref(v___x_932_);
v___x_933_ = l_Lean_mkConst(v___x_930_, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3));
v___x_935_ = l_Lean_mkConst(v___x_934_, v___x_932_);
v___x_936_ = l_Lean_mkAppB(v___x_935_, v_type_927_, v_ringInst_929_);
v_expectedInst_937_ = l_Lean_mkAppB(v___x_933_, v_type_927_, v___x_936_);
v___x_938_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5));
v___x_939_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7));
v___x_940_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_917_, v_inst_918_, v_inst_919_, v_inst_920_, v_type_927_, v_u_928_, v___x_938_, v___x_939_, v_expectedInst_937_);
v___x_941_ = lean_apply_4(v_toBind_921_, lean_box(0), lean_box(0), v___x_940_, v___f_922_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg(lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_inst_946_){
_start:
{
lean_object* v_toApplicative_947_; lean_object* v_toBind_948_; lean_object* v_getRing_949_; lean_object* v_modifyRing_950_; lean_object* v_toPure_951_; lean_object* v___f_952_; lean_object* v___f_953_; lean_object* v___x_954_; 
v_toApplicative_947_ = lean_ctor_get(v_inst_944_, 0);
v_toBind_948_ = lean_ctor_get(v_inst_944_, 1);
lean_inc_n(v_toBind_948_, 3);
v_getRing_949_ = lean_ctor_get(v_inst_946_, 0);
lean_inc(v_getRing_949_);
v_modifyRing_950_ = lean_ctor_get(v_inst_946_, 1);
lean_inc(v_modifyRing_950_);
lean_dec_ref(v_inst_946_);
v_toPure_951_ = lean_ctor_get(v_toApplicative_947_, 1);
lean_inc_n(v_toPure_951_, 2);
v___f_952_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_952_, 0, v_toPure_951_);
lean_closure_set(v___f_952_, 1, v_modifyRing_950_);
lean_closure_set(v___f_952_, 2, v_toBind_948_);
v___f_953_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_953_, 0, v_toPure_951_);
lean_closure_set(v___f_953_, 1, v_inst_942_);
lean_closure_set(v___f_953_, 2, v_inst_943_);
lean_closure_set(v___f_953_, 3, v_inst_944_);
lean_closure_set(v___f_953_, 4, v_inst_945_);
lean_closure_set(v___f_953_, 5, v_toBind_948_);
lean_closure_set(v___f_953_, 6, v___f_952_);
v___x_954_ = lean_apply_4(v_toBind_948_, lean_box(0), lean_box(0), v_getRing_949_, v___f_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn(lean_object* v_m_955_, lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_inst_958_, lean_object* v_inst_959_, lean_object* v_inst_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l_Lean_Meta_Sym_Arith_getSubFn___redArg(v_inst_956_, v_inst_957_, v_inst_958_, v_inst_959_, v_inst_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0(lean_object* v_negFn_962_, lean_object* v_s_963_){
_start:
{
lean_object* v_id_964_; lean_object* v_type_965_; lean_object* v_u_966_; lean_object* v_ringInst_967_; lean_object* v_semiringInst_968_; lean_object* v_charInst_x3f_969_; lean_object* v_addFn_x3f_970_; lean_object* v_mulFn_x3f_971_; lean_object* v_subFn_x3f_972_; lean_object* v_powFn_x3f_973_; lean_object* v_intCastFn_x3f_974_; lean_object* v_natCastFn_x3f_975_; lean_object* v_natSMulFn_x3f_976_; lean_object* v_intSMulFn_x3f_977_; lean_object* v_one_x3f_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_986_; 
v_id_964_ = lean_ctor_get(v_s_963_, 0);
v_type_965_ = lean_ctor_get(v_s_963_, 1);
v_u_966_ = lean_ctor_get(v_s_963_, 2);
v_ringInst_967_ = lean_ctor_get(v_s_963_, 3);
v_semiringInst_968_ = lean_ctor_get(v_s_963_, 4);
v_charInst_x3f_969_ = lean_ctor_get(v_s_963_, 5);
v_addFn_x3f_970_ = lean_ctor_get(v_s_963_, 6);
v_mulFn_x3f_971_ = lean_ctor_get(v_s_963_, 7);
v_subFn_x3f_972_ = lean_ctor_get(v_s_963_, 8);
v_powFn_x3f_973_ = lean_ctor_get(v_s_963_, 10);
v_intCastFn_x3f_974_ = lean_ctor_get(v_s_963_, 11);
v_natCastFn_x3f_975_ = lean_ctor_get(v_s_963_, 12);
v_natSMulFn_x3f_976_ = lean_ctor_get(v_s_963_, 13);
v_intSMulFn_x3f_977_ = lean_ctor_get(v_s_963_, 14);
v_one_x3f_978_ = lean_ctor_get(v_s_963_, 15);
v_isSharedCheck_986_ = !lean_is_exclusive(v_s_963_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v_s_963_, 9);
lean_dec(v_unused_987_);
v___x_980_ = v_s_963_;
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_one_x3f_978_);
lean_inc(v_intSMulFn_x3f_977_);
lean_inc(v_natSMulFn_x3f_976_);
lean_inc(v_natCastFn_x3f_975_);
lean_inc(v_intCastFn_x3f_974_);
lean_inc(v_powFn_x3f_973_);
lean_inc(v_subFn_x3f_972_);
lean_inc(v_mulFn_x3f_971_);
lean_inc(v_addFn_x3f_970_);
lean_inc(v_charInst_x3f_969_);
lean_inc(v_semiringInst_968_);
lean_inc(v_ringInst_967_);
lean_inc(v_u_966_);
lean_inc(v_type_965_);
lean_inc(v_id_964_);
lean_dec(v_s_963_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_986_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v_negFn_962_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 9, v___x_982_);
v___x_984_ = v___x_980_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_id_964_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_type_965_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v_u_966_);
lean_ctor_set(v_reuseFailAlloc_985_, 3, v_ringInst_967_);
lean_ctor_set(v_reuseFailAlloc_985_, 4, v_semiringInst_968_);
lean_ctor_set(v_reuseFailAlloc_985_, 5, v_charInst_x3f_969_);
lean_ctor_set(v_reuseFailAlloc_985_, 6, v_addFn_x3f_970_);
lean_ctor_set(v_reuseFailAlloc_985_, 7, v_mulFn_x3f_971_);
lean_ctor_set(v_reuseFailAlloc_985_, 8, v_subFn_x3f_972_);
lean_ctor_set(v_reuseFailAlloc_985_, 9, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_985_, 10, v_powFn_x3f_973_);
lean_ctor_set(v_reuseFailAlloc_985_, 11, v_intCastFn_x3f_974_);
lean_ctor_set(v_reuseFailAlloc_985_, 12, v_natCastFn_x3f_975_);
lean_ctor_set(v_reuseFailAlloc_985_, 13, v_natSMulFn_x3f_976_);
lean_ctor_set(v_reuseFailAlloc_985_, 14, v_intSMulFn_x3f_977_);
lean_ctor_set(v_reuseFailAlloc_985_, 15, v_one_x3f_978_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1(lean_object* v_toPure_988_, lean_object* v_negFn_989_, lean_object* v_____r_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = lean_apply_2(v_toPure_988_, lean_box(0), v_negFn_989_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2(lean_object* v_toPure_992_, lean_object* v_modifyRing_993_, lean_object* v_toBind_994_, lean_object* v_negFn_995_){
_start:
{
lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_inc_ref(v_negFn_995_);
v___f_996_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_996_, 0, v_negFn_995_);
v___f_997_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_997_, 0, v_toPure_992_);
lean_closure_set(v___f_997_, 1, v_negFn_995_);
v___x_998_ = lean_apply_1(v_modifyRing_993_, v___f_996_);
v___x_999_ = lean_apply_4(v_toBind_994_, lean_box(0), lean_box(0), v___x_998_, v___f_997_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3(lean_object* v_toPure_1013_, lean_object* v_inst_1014_, lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_inst_1017_, lean_object* v_toBind_1018_, lean_object* v___f_1019_, lean_object* v_ring_1020_){
_start:
{
lean_object* v_negFn_x3f_1021_; 
v_negFn_x3f_1021_ = lean_ctor_get(v_ring_1020_, 9);
if (lean_obj_tag(v_negFn_x3f_1021_) == 1)
{
lean_object* v_val_1022_; lean_object* v___x_1023_; 
lean_inc_ref(v_negFn_x3f_1021_);
lean_dec_ref(v_ring_1020_);
lean_dec(v___f_1019_);
lean_dec(v_toBind_1018_);
lean_dec_ref(v_inst_1017_);
lean_dec_ref(v_inst_1016_);
lean_dec_ref(v_inst_1015_);
lean_dec(v_inst_1014_);
v_val_1022_ = lean_ctor_get(v_negFn_x3f_1021_, 0);
lean_inc(v_val_1022_);
lean_dec_ref_known(v_negFn_x3f_1021_, 1);
v___x_1023_ = lean_apply_2(v_toPure_1013_, lean_box(0), v_val_1022_);
return v___x_1023_;
}
else
{
lean_object* v_type_1024_; lean_object* v_u_1025_; lean_object* v_ringInst_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v_expectedInst_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_dec(v_toPure_1013_);
v_type_1024_ = lean_ctor_get(v_ring_1020_, 1);
lean_inc_ref_n(v_type_1024_, 2);
v_u_1025_ = lean_ctor_get(v_ring_1020_, 2);
lean_inc_n(v_u_1025_, 2);
v_ringInst_1026_ = lean_ctor_get(v_ring_1020_, 3);
lean_inc_ref(v_ringInst_1026_);
lean_dec_ref(v_ring_1020_);
v___x_1027_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1));
v___x_1028_ = lean_box(0);
v___x_1029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_u_1025_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_mkConst(v___x_1027_, v___x_1029_);
v_expectedInst_1031_ = l_Lean_mkAppB(v___x_1030_, v_type_1024_, v_ringInst_1026_);
v___x_1032_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3));
v___x_1033_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5));
v___x_1034_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_1014_, v_inst_1015_, v_inst_1016_, v_inst_1017_, v_type_1024_, v_u_1025_, v___x_1032_, v___x_1033_, v_expectedInst_1031_);
v___x_1035_ = lean_apply_4(v_toBind_1018_, lean_box(0), lean_box(0), v___x_1034_, v___f_1019_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg(lean_object* v_inst_1036_, lean_object* v_inst_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_){
_start:
{
lean_object* v_toApplicative_1041_; lean_object* v_toBind_1042_; lean_object* v_getRing_1043_; lean_object* v_modifyRing_1044_; lean_object* v_toPure_1045_; lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___x_1048_; 
v_toApplicative_1041_ = lean_ctor_get(v_inst_1038_, 0);
v_toBind_1042_ = lean_ctor_get(v_inst_1038_, 1);
lean_inc_n(v_toBind_1042_, 3);
v_getRing_1043_ = lean_ctor_get(v_inst_1040_, 0);
lean_inc(v_getRing_1043_);
v_modifyRing_1044_ = lean_ctor_get(v_inst_1040_, 1);
lean_inc(v_modifyRing_1044_);
lean_dec_ref(v_inst_1040_);
v_toPure_1045_ = lean_ctor_get(v_toApplicative_1041_, 1);
lean_inc_n(v_toPure_1045_, 2);
v___f_1046_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1046_, 0, v_toPure_1045_);
lean_closure_set(v___f_1046_, 1, v_modifyRing_1044_);
lean_closure_set(v___f_1046_, 2, v_toBind_1042_);
v___f_1047_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1047_, 0, v_toPure_1045_);
lean_closure_set(v___f_1047_, 1, v_inst_1036_);
lean_closure_set(v___f_1047_, 2, v_inst_1037_);
lean_closure_set(v___f_1047_, 3, v_inst_1038_);
lean_closure_set(v___f_1047_, 4, v_inst_1039_);
lean_closure_set(v___f_1047_, 5, v_toBind_1042_);
lean_closure_set(v___f_1047_, 6, v___f_1046_);
v___x_1048_ = lean_apply_4(v_toBind_1042_, lean_box(0), lean_box(0), v_getRing_1043_, v___f_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn(lean_object* v_m_1049_, lean_object* v_inst_1050_, lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_inst_1053_, lean_object* v_inst_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Meta_Sym_Arith_getNegFn___redArg(v_inst_1050_, v_inst_1051_, v_inst_1052_, v_inst_1053_, v_inst_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0(lean_object* v_powFn_1056_, lean_object* v_s_1057_){
_start:
{
lean_object* v_id_1058_; lean_object* v_type_1059_; lean_object* v_u_1060_; lean_object* v_ringInst_1061_; lean_object* v_semiringInst_1062_; lean_object* v_charInst_x3f_1063_; lean_object* v_addFn_x3f_1064_; lean_object* v_mulFn_x3f_1065_; lean_object* v_subFn_x3f_1066_; lean_object* v_negFn_x3f_1067_; lean_object* v_intCastFn_x3f_1068_; lean_object* v_natCastFn_x3f_1069_; lean_object* v_natSMulFn_x3f_1070_; lean_object* v_intSMulFn_x3f_1071_; lean_object* v_one_x3f_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1080_; 
v_id_1058_ = lean_ctor_get(v_s_1057_, 0);
v_type_1059_ = lean_ctor_get(v_s_1057_, 1);
v_u_1060_ = lean_ctor_get(v_s_1057_, 2);
v_ringInst_1061_ = lean_ctor_get(v_s_1057_, 3);
v_semiringInst_1062_ = lean_ctor_get(v_s_1057_, 4);
v_charInst_x3f_1063_ = lean_ctor_get(v_s_1057_, 5);
v_addFn_x3f_1064_ = lean_ctor_get(v_s_1057_, 6);
v_mulFn_x3f_1065_ = lean_ctor_get(v_s_1057_, 7);
v_subFn_x3f_1066_ = lean_ctor_get(v_s_1057_, 8);
v_negFn_x3f_1067_ = lean_ctor_get(v_s_1057_, 9);
v_intCastFn_x3f_1068_ = lean_ctor_get(v_s_1057_, 11);
v_natCastFn_x3f_1069_ = lean_ctor_get(v_s_1057_, 12);
v_natSMulFn_x3f_1070_ = lean_ctor_get(v_s_1057_, 13);
v_intSMulFn_x3f_1071_ = lean_ctor_get(v_s_1057_, 14);
v_one_x3f_1072_ = lean_ctor_get(v_s_1057_, 15);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_s_1057_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v_s_1057_, 10);
lean_dec(v_unused_1081_);
v___x_1074_ = v_s_1057_;
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_one_x3f_1072_);
lean_inc(v_intSMulFn_x3f_1071_);
lean_inc(v_natSMulFn_x3f_1070_);
lean_inc(v_natCastFn_x3f_1069_);
lean_inc(v_intCastFn_x3f_1068_);
lean_inc(v_negFn_x3f_1067_);
lean_inc(v_subFn_x3f_1066_);
lean_inc(v_mulFn_x3f_1065_);
lean_inc(v_addFn_x3f_1064_);
lean_inc(v_charInst_x3f_1063_);
lean_inc(v_semiringInst_1062_);
lean_inc(v_ringInst_1061_);
lean_inc(v_u_1060_);
lean_inc(v_type_1059_);
lean_inc(v_id_1058_);
lean_dec(v_s_1057_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_powFn_1056_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 10, v___x_1076_);
v___x_1078_ = v___x_1074_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_id_1058_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_type_1059_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_u_1060_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v_ringInst_1061_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v_semiringInst_1062_);
lean_ctor_set(v_reuseFailAlloc_1079_, 5, v_charInst_x3f_1063_);
lean_ctor_set(v_reuseFailAlloc_1079_, 6, v_addFn_x3f_1064_);
lean_ctor_set(v_reuseFailAlloc_1079_, 7, v_mulFn_x3f_1065_);
lean_ctor_set(v_reuseFailAlloc_1079_, 8, v_subFn_x3f_1066_);
lean_ctor_set(v_reuseFailAlloc_1079_, 9, v_negFn_x3f_1067_);
lean_ctor_set(v_reuseFailAlloc_1079_, 10, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1079_, 11, v_intCastFn_x3f_1068_);
lean_ctor_set(v_reuseFailAlloc_1079_, 12, v_natCastFn_x3f_1069_);
lean_ctor_set(v_reuseFailAlloc_1079_, 13, v_natSMulFn_x3f_1070_);
lean_ctor_set(v_reuseFailAlloc_1079_, 14, v_intSMulFn_x3f_1071_);
lean_ctor_set(v_reuseFailAlloc_1079_, 15, v_one_x3f_1072_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1(lean_object* v_toPure_1082_, lean_object* v_powFn_1083_, lean_object* v_____r_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_apply_2(v_toPure_1082_, lean_box(0), v_powFn_1083_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2(lean_object* v_toPure_1086_, lean_object* v_modifyRing_1087_, lean_object* v_toBind_1088_, lean_object* v_powFn_1089_){
_start:
{
lean_object* v___f_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_inc_ref(v_powFn_1089_);
v___f_1090_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1090_, 0, v_powFn_1089_);
v___f_1091_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1091_, 0, v_toPure_1086_);
lean_closure_set(v___f_1091_, 1, v_powFn_1089_);
v___x_1092_ = lean_apply_1(v_modifyRing_1087_, v___f_1090_);
v___x_1093_ = lean_apply_4(v_toBind_1088_, lean_box(0), lean_box(0), v___x_1092_, v___f_1091_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3(lean_object* v_toPure_1094_, lean_object* v_inst_1095_, lean_object* v_inst_1096_, lean_object* v_inst_1097_, lean_object* v_inst_1098_, lean_object* v_toBind_1099_, lean_object* v___f_1100_, lean_object* v_ring_1101_){
_start:
{
lean_object* v_powFn_x3f_1102_; 
v_powFn_x3f_1102_ = lean_ctor_get(v_ring_1101_, 10);
if (lean_obj_tag(v_powFn_x3f_1102_) == 1)
{
lean_object* v_val_1103_; lean_object* v___x_1104_; 
lean_inc_ref(v_powFn_x3f_1102_);
lean_dec_ref(v_ring_1101_);
lean_dec(v___f_1100_);
lean_dec(v_toBind_1099_);
lean_dec_ref(v_inst_1098_);
lean_dec_ref(v_inst_1097_);
lean_dec_ref(v_inst_1096_);
lean_dec(v_inst_1095_);
v_val_1103_ = lean_ctor_get(v_powFn_x3f_1102_, 0);
lean_inc(v_val_1103_);
lean_dec_ref_known(v_powFn_x3f_1102_, 1);
v___x_1104_ = lean_apply_2(v_toPure_1094_, lean_box(0), v_val_1103_);
return v___x_1104_;
}
else
{
lean_object* v_type_1105_; lean_object* v_u_1106_; lean_object* v_semiringInst_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec(v_toPure_1094_);
v_type_1105_ = lean_ctor_get(v_ring_1101_, 1);
lean_inc_ref(v_type_1105_);
v_u_1106_ = lean_ctor_get(v_ring_1101_, 2);
lean_inc(v_u_1106_);
v_semiringInst_1107_ = lean_ctor_get(v_ring_1101_, 4);
lean_inc_ref(v_semiringInst_1107_);
lean_dec_ref(v_ring_1101_);
v___x_1108_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_1095_, v_inst_1096_, v_inst_1097_, v_inst_1098_, v_u_1106_, v_type_1105_, v_semiringInst_1107_);
v___x_1109_ = lean_apply_4(v_toBind_1099_, lean_box(0), lean_box(0), v___x_1108_, v___f_1100_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg(lean_object* v_inst_1110_, lean_object* v_inst_1111_, lean_object* v_inst_1112_, lean_object* v_inst_1113_, lean_object* v_inst_1114_){
_start:
{
lean_object* v_toApplicative_1115_; lean_object* v_toBind_1116_; lean_object* v_getRing_1117_; lean_object* v_modifyRing_1118_; lean_object* v_toPure_1119_; lean_object* v___f_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; 
v_toApplicative_1115_ = lean_ctor_get(v_inst_1112_, 0);
v_toBind_1116_ = lean_ctor_get(v_inst_1112_, 1);
lean_inc_n(v_toBind_1116_, 3);
v_getRing_1117_ = lean_ctor_get(v_inst_1114_, 0);
lean_inc(v_getRing_1117_);
v_modifyRing_1118_ = lean_ctor_get(v_inst_1114_, 1);
lean_inc(v_modifyRing_1118_);
lean_dec_ref(v_inst_1114_);
v_toPure_1119_ = lean_ctor_get(v_toApplicative_1115_, 1);
lean_inc_n(v_toPure_1119_, 2);
v___f_1120_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1120_, 0, v_toPure_1119_);
lean_closure_set(v___f_1120_, 1, v_modifyRing_1118_);
lean_closure_set(v___f_1120_, 2, v_toBind_1116_);
v___f_1121_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1121_, 0, v_toPure_1119_);
lean_closure_set(v___f_1121_, 1, v_inst_1110_);
lean_closure_set(v___f_1121_, 2, v_inst_1111_);
lean_closure_set(v___f_1121_, 3, v_inst_1112_);
lean_closure_set(v___f_1121_, 4, v_inst_1113_);
lean_closure_set(v___f_1121_, 5, v_toBind_1116_);
lean_closure_set(v___f_1121_, 6, v___f_1120_);
v___x_1122_ = lean_apply_4(v_toBind_1116_, lean_box(0), lean_box(0), v_getRing_1117_, v___f_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn(lean_object* v_m_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_, lean_object* v_inst_1126_, lean_object* v_inst_1127_, lean_object* v_inst_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_Meta_Sym_Arith_getPowFn___redArg(v_inst_1124_, v_inst_1125_, v_inst_1126_, v_inst_1127_, v_inst_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0(lean_object* v_intCastFn_1130_, lean_object* v_s_1131_){
_start:
{
lean_object* v_id_1132_; lean_object* v_type_1133_; lean_object* v_u_1134_; lean_object* v_ringInst_1135_; lean_object* v_semiringInst_1136_; lean_object* v_charInst_x3f_1137_; lean_object* v_addFn_x3f_1138_; lean_object* v_mulFn_x3f_1139_; lean_object* v_subFn_x3f_1140_; lean_object* v_negFn_x3f_1141_; lean_object* v_powFn_x3f_1142_; lean_object* v_natCastFn_x3f_1143_; lean_object* v_natSMulFn_x3f_1144_; lean_object* v_intSMulFn_x3f_1145_; lean_object* v_one_x3f_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1154_; 
v_id_1132_ = lean_ctor_get(v_s_1131_, 0);
v_type_1133_ = lean_ctor_get(v_s_1131_, 1);
v_u_1134_ = lean_ctor_get(v_s_1131_, 2);
v_ringInst_1135_ = lean_ctor_get(v_s_1131_, 3);
v_semiringInst_1136_ = lean_ctor_get(v_s_1131_, 4);
v_charInst_x3f_1137_ = lean_ctor_get(v_s_1131_, 5);
v_addFn_x3f_1138_ = lean_ctor_get(v_s_1131_, 6);
v_mulFn_x3f_1139_ = lean_ctor_get(v_s_1131_, 7);
v_subFn_x3f_1140_ = lean_ctor_get(v_s_1131_, 8);
v_negFn_x3f_1141_ = lean_ctor_get(v_s_1131_, 9);
v_powFn_x3f_1142_ = lean_ctor_get(v_s_1131_, 10);
v_natCastFn_x3f_1143_ = lean_ctor_get(v_s_1131_, 12);
v_natSMulFn_x3f_1144_ = lean_ctor_get(v_s_1131_, 13);
v_intSMulFn_x3f_1145_ = lean_ctor_get(v_s_1131_, 14);
v_one_x3f_1146_ = lean_ctor_get(v_s_1131_, 15);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_s_1131_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; 
v_unused_1155_ = lean_ctor_get(v_s_1131_, 11);
lean_dec(v_unused_1155_);
v___x_1148_ = v_s_1131_;
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_one_x3f_1146_);
lean_inc(v_intSMulFn_x3f_1145_);
lean_inc(v_natSMulFn_x3f_1144_);
lean_inc(v_natCastFn_x3f_1143_);
lean_inc(v_powFn_x3f_1142_);
lean_inc(v_negFn_x3f_1141_);
lean_inc(v_subFn_x3f_1140_);
lean_inc(v_mulFn_x3f_1139_);
lean_inc(v_addFn_x3f_1138_);
lean_inc(v_charInst_x3f_1137_);
lean_inc(v_semiringInst_1136_);
lean_inc(v_ringInst_1135_);
lean_inc(v_u_1134_);
lean_inc(v_type_1133_);
lean_inc(v_id_1132_);
lean_dec(v_s_1131_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1150_, 0, v_intCastFn_1130_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 11, v___x_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_id_1132_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_type_1133_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_u_1134_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_ringInst_1135_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v_semiringInst_1136_);
lean_ctor_set(v_reuseFailAlloc_1153_, 5, v_charInst_x3f_1137_);
lean_ctor_set(v_reuseFailAlloc_1153_, 6, v_addFn_x3f_1138_);
lean_ctor_set(v_reuseFailAlloc_1153_, 7, v_mulFn_x3f_1139_);
lean_ctor_set(v_reuseFailAlloc_1153_, 8, v_subFn_x3f_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 9, v_negFn_x3f_1141_);
lean_ctor_set(v_reuseFailAlloc_1153_, 10, v_powFn_x3f_1142_);
lean_ctor_set(v_reuseFailAlloc_1153_, 11, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1153_, 12, v_natCastFn_x3f_1143_);
lean_ctor_set(v_reuseFailAlloc_1153_, 13, v_natSMulFn_x3f_1144_);
lean_ctor_set(v_reuseFailAlloc_1153_, 14, v_intSMulFn_x3f_1145_);
lean_ctor_set(v_reuseFailAlloc_1153_, 15, v_one_x3f_1146_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1(lean_object* v_toPure_1156_, lean_object* v_intCastFn_1157_, lean_object* v_____r_1158_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_apply_2(v_toPure_1156_, lean_box(0), v_intCastFn_1157_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2(lean_object* v_toPure_1160_, lean_object* v_modifyRing_1161_, lean_object* v_toBind_1162_, lean_object* v_intCastFn_1163_){
_start:
{
lean_object* v___f_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
lean_inc_ref(v_intCastFn_1163_);
v___f_1164_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1164_, 0, v_intCastFn_1163_);
v___f_1165_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1165_, 0, v_toPure_1160_);
lean_closure_set(v___f_1165_, 1, v_intCastFn_1163_);
v___x_1166_ = lean_apply_1(v_modifyRing_1161_, v___f_1164_);
v___x_1167_ = lean_apply_4(v_toBind_1162_, lean_box(0), lean_box(0), v___x_1166_, v___f_1165_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3(lean_object* v___x_1168_, lean_object* v___x_1169_, lean_object* v___x_1170_, lean_object* v_type_1171_, lean_object* v_canonExpr_1172_, lean_object* v_toBind_1173_, lean_object* v___f_1174_, lean_object* v_inst_1175_){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1176_ = l_Lean_Name_mkStr2(v___x_1168_, v___x_1169_);
v___x_1177_ = l_Lean_mkConst(v___x_1176_, v___x_1170_);
v___x_1178_ = l_Lean_mkAppB(v___x_1177_, v_type_1171_, v_inst_1175_);
v___x_1179_ = lean_apply_1(v_canonExpr_1172_, v___x_1178_);
v___x_1180_ = lean_apply_4(v_toBind_1173_, lean_box(0), lean_box(0), v___x_1179_, v___f_1174_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7(lean_object* v_toPure_1186_, lean_object* v_inst_x27_1187_, lean_object* v_toBind_1188_, lean_object* v___f_1189_, lean_object* v___f_1190_, lean_object* v_inst_1191_, lean_object* v_____do__lift_1192_){
_start:
{
if (lean_obj_tag(v_____do__lift_1192_) == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_dec(v_inst_1191_);
lean_dec(v___f_1190_);
v___x_1193_ = lean_apply_2(v_toPure_1186_, lean_box(0), v_inst_x27_1187_);
v___x_1194_ = lean_apply_4(v_toBind_1188_, lean_box(0), lean_box(0), v___x_1193_, v___f_1189_);
return v___x_1194_;
}
else
{
lean_object* v_val_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
lean_dec(v___f_1189_);
v_val_1195_ = lean_ctor_get(v_____do__lift_1192_, 0);
lean_inc_n(v_val_1195_, 2);
lean_dec_ref_known(v_____do__lift_1192_, 1);
lean_inc(v_toBind_1188_);
v___f_1196_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1196_, 0, v_toPure_1186_);
lean_closure_set(v___f_1196_, 1, v_val_1195_);
lean_closure_set(v___f_1196_, 2, v_toBind_1188_);
lean_closure_set(v___f_1196_, 3, v___f_1190_);
v___x_1197_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2));
v___x_1198_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_1198_, 0, v___x_1197_);
lean_closure_set(v___x_1198_, 1, v_val_1195_);
lean_closure_set(v___x_1198_, 2, v_inst_x27_1187_);
v___x_1199_ = lean_apply_2(v_inst_1191_, lean_box(0), v___x_1198_);
v___x_1200_ = lean_apply_4(v_toBind_1188_, lean_box(0), lean_box(0), v___x_1199_, v___f_1196_);
return v___x_1200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4(lean_object* v_toPure_1210_, lean_object* v_inst_1211_, lean_object* v_toBind_1212_, lean_object* v___f_1213_, lean_object* v_inst_1214_, lean_object* v_ring_1215_){
_start:
{
lean_object* v_intCastFn_x3f_1216_; 
v_intCastFn_x3f_1216_ = lean_ctor_get(v_ring_1215_, 11);
if (lean_obj_tag(v_intCastFn_x3f_1216_) == 1)
{
lean_object* v_val_1217_; lean_object* v___x_1218_; 
lean_inc_ref(v_intCastFn_x3f_1216_);
lean_dec_ref(v_ring_1215_);
lean_dec(v_inst_1214_);
lean_dec(v___f_1213_);
lean_dec(v_toBind_1212_);
lean_dec_ref(v_inst_1211_);
v_val_1217_ = lean_ctor_get(v_intCastFn_x3f_1216_, 0);
lean_inc(v_val_1217_);
lean_dec_ref_known(v_intCastFn_x3f_1216_, 1);
v___x_1218_ = lean_apply_2(v_toPure_1210_, lean_box(0), v_val_1217_);
return v___x_1218_;
}
else
{
lean_object* v_type_1219_; lean_object* v_u_1220_; lean_object* v_ringInst_1221_; lean_object* v_canonExpr_1222_; lean_object* v_synthInstance_x3f_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1244_; 
v_type_1219_ = lean_ctor_get(v_ring_1215_, 1);
lean_inc_ref(v_type_1219_);
v_u_1220_ = lean_ctor_get(v_ring_1215_, 2);
lean_inc(v_u_1220_);
v_ringInst_1221_ = lean_ctor_get(v_ring_1215_, 3);
lean_inc_ref(v_ringInst_1221_);
lean_dec_ref(v_ring_1215_);
v_canonExpr_1222_ = lean_ctor_get(v_inst_1211_, 0);
v_synthInstance_x3f_1223_ = lean_ctor_get(v_inst_1211_, 1);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_inst_1211_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1225_ = v_inst_1211_;
v_isShared_1226_ = v_isSharedCheck_1244_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_synthInstance_x3f_1223_);
lean_inc(v_canonExpr_1222_);
lean_dec(v_inst_1211_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1244_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1227_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0));
v___x_1228_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1));
v___x_1229_ = lean_box(0);
if (v_isShared_1226_ == 0)
{
lean_ctor_set_tag(v___x_1225_, 1);
lean_ctor_set(v___x_1225_, 1, v___x_1229_);
lean_ctor_set(v___x_1225_, 0, v_u_1220_);
v___x_1231_ = v___x_1225_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_u_1220_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1232_; lean_object* v_inst_x27_1233_; lean_object* v___x_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___f_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v_instType_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_inc_ref_n(v___x_1231_, 2);
v___x_1232_ = l_Lean_mkConst(v___x_1228_, v___x_1231_);
lean_inc_ref_n(v_type_1219_, 2);
v_inst_x27_1233_ = l_Lean_mkAppB(v___x_1232_, v_type_1219_, v_ringInst_1221_);
v___x_1234_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2));
lean_inc_n(v_toBind_1212_, 2);
v___f_1235_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1235_, 0, v___x_1234_);
lean_closure_set(v___f_1235_, 1, v___x_1227_);
lean_closure_set(v___f_1235_, 2, v___x_1231_);
lean_closure_set(v___f_1235_, 3, v_type_1219_);
lean_closure_set(v___f_1235_, 4, v_canonExpr_1222_);
lean_closure_set(v___f_1235_, 5, v_toBind_1212_);
lean_closure_set(v___f_1235_, 6, v___f_1213_);
v___f_1236_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1236_, 0, v___f_1235_);
lean_inc_ref(v___f_1236_);
v___f_1237_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7), 7, 6);
lean_closure_set(v___f_1237_, 0, v_toPure_1210_);
lean_closure_set(v___f_1237_, 1, v_inst_x27_1233_);
lean_closure_set(v___f_1237_, 2, v_toBind_1212_);
lean_closure_set(v___f_1237_, 3, v___f_1236_);
lean_closure_set(v___f_1237_, 4, v___f_1236_);
lean_closure_set(v___f_1237_, 5, v_inst_1214_);
v___x_1238_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3));
v___x_1239_ = l_Lean_mkConst(v___x_1238_, v___x_1231_);
v_instType_1240_ = l_Lean_Expr_app___override(v___x_1239_, v_type_1219_);
v___x_1241_ = lean_apply_1(v_synthInstance_x3f_1223_, v_instType_1240_);
v___x_1242_ = lean_apply_4(v_toBind_1212_, lean_box(0), lean_box(0), v___x_1241_, v___f_1237_);
return v___x_1242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_){
_start:
{
lean_object* v_toApplicative_1249_; lean_object* v_toBind_1250_; lean_object* v_getRing_1251_; lean_object* v_modifyRing_1252_; lean_object* v_toPure_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; 
v_toApplicative_1249_ = lean_ctor_get(v_inst_1246_, 0);
lean_inc_ref(v_toApplicative_1249_);
v_toBind_1250_ = lean_ctor_get(v_inst_1246_, 1);
lean_inc_n(v_toBind_1250_, 3);
lean_dec_ref(v_inst_1246_);
v_getRing_1251_ = lean_ctor_get(v_inst_1248_, 0);
lean_inc(v_getRing_1251_);
v_modifyRing_1252_ = lean_ctor_get(v_inst_1248_, 1);
lean_inc(v_modifyRing_1252_);
lean_dec_ref(v_inst_1248_);
v_toPure_1253_ = lean_ctor_get(v_toApplicative_1249_, 1);
lean_inc_n(v_toPure_1253_, 2);
lean_dec_ref(v_toApplicative_1249_);
v___f_1254_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1254_, 0, v_toPure_1253_);
lean_closure_set(v___f_1254_, 1, v_modifyRing_1252_);
lean_closure_set(v___f_1254_, 2, v_toBind_1250_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4), 6, 5);
lean_closure_set(v___f_1255_, 0, v_toPure_1253_);
lean_closure_set(v___f_1255_, 1, v_inst_1247_);
lean_closure_set(v___f_1255_, 2, v_toBind_1250_);
lean_closure_set(v___f_1255_, 3, v___f_1254_);
lean_closure_set(v___f_1255_, 4, v_inst_1245_);
v___x_1256_ = lean_apply_4(v_toBind_1250_, lean_box(0), lean_box(0), v_getRing_1251_, v___f_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn(lean_object* v_m_1257_, lean_object* v_inst_1258_, lean_object* v_inst_1259_, lean_object* v_inst_1260_, lean_object* v_inst_1261_){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(v_inst_1258_, v_inst_1259_, v_inst_1260_, v_inst_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0(lean_object* v_natCastFn_1263_, lean_object* v_s_1264_){
_start:
{
lean_object* v_id_1265_; lean_object* v_type_1266_; lean_object* v_u_1267_; lean_object* v_ringInst_1268_; lean_object* v_semiringInst_1269_; lean_object* v_charInst_x3f_1270_; lean_object* v_addFn_x3f_1271_; lean_object* v_mulFn_x3f_1272_; lean_object* v_subFn_x3f_1273_; lean_object* v_negFn_x3f_1274_; lean_object* v_powFn_x3f_1275_; lean_object* v_intCastFn_x3f_1276_; lean_object* v_natSMulFn_x3f_1277_; lean_object* v_intSMulFn_x3f_1278_; lean_object* v_one_x3f_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1287_; 
v_id_1265_ = lean_ctor_get(v_s_1264_, 0);
v_type_1266_ = lean_ctor_get(v_s_1264_, 1);
v_u_1267_ = lean_ctor_get(v_s_1264_, 2);
v_ringInst_1268_ = lean_ctor_get(v_s_1264_, 3);
v_semiringInst_1269_ = lean_ctor_get(v_s_1264_, 4);
v_charInst_x3f_1270_ = lean_ctor_get(v_s_1264_, 5);
v_addFn_x3f_1271_ = lean_ctor_get(v_s_1264_, 6);
v_mulFn_x3f_1272_ = lean_ctor_get(v_s_1264_, 7);
v_subFn_x3f_1273_ = lean_ctor_get(v_s_1264_, 8);
v_negFn_x3f_1274_ = lean_ctor_get(v_s_1264_, 9);
v_powFn_x3f_1275_ = lean_ctor_get(v_s_1264_, 10);
v_intCastFn_x3f_1276_ = lean_ctor_get(v_s_1264_, 11);
v_natSMulFn_x3f_1277_ = lean_ctor_get(v_s_1264_, 13);
v_intSMulFn_x3f_1278_ = lean_ctor_get(v_s_1264_, 14);
v_one_x3f_1279_ = lean_ctor_get(v_s_1264_, 15);
v_isSharedCheck_1287_ = !lean_is_exclusive(v_s_1264_);
if (v_isSharedCheck_1287_ == 0)
{
lean_object* v_unused_1288_; 
v_unused_1288_ = lean_ctor_get(v_s_1264_, 12);
lean_dec(v_unused_1288_);
v___x_1281_ = v_s_1264_;
v_isShared_1282_ = v_isSharedCheck_1287_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_one_x3f_1279_);
lean_inc(v_intSMulFn_x3f_1278_);
lean_inc(v_natSMulFn_x3f_1277_);
lean_inc(v_intCastFn_x3f_1276_);
lean_inc(v_powFn_x3f_1275_);
lean_inc(v_negFn_x3f_1274_);
lean_inc(v_subFn_x3f_1273_);
lean_inc(v_mulFn_x3f_1272_);
lean_inc(v_addFn_x3f_1271_);
lean_inc(v_charInst_x3f_1270_);
lean_inc(v_semiringInst_1269_);
lean_inc(v_ringInst_1268_);
lean_inc(v_u_1267_);
lean_inc(v_type_1266_);
lean_inc(v_id_1265_);
lean_dec(v_s_1264_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1287_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1283_, 0, v_natCastFn_1263_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 12, v___x_1283_);
v___x_1285_ = v___x_1281_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_id_1265_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v_type_1266_);
lean_ctor_set(v_reuseFailAlloc_1286_, 2, v_u_1267_);
lean_ctor_set(v_reuseFailAlloc_1286_, 3, v_ringInst_1268_);
lean_ctor_set(v_reuseFailAlloc_1286_, 4, v_semiringInst_1269_);
lean_ctor_set(v_reuseFailAlloc_1286_, 5, v_charInst_x3f_1270_);
lean_ctor_set(v_reuseFailAlloc_1286_, 6, v_addFn_x3f_1271_);
lean_ctor_set(v_reuseFailAlloc_1286_, 7, v_mulFn_x3f_1272_);
lean_ctor_set(v_reuseFailAlloc_1286_, 8, v_subFn_x3f_1273_);
lean_ctor_set(v_reuseFailAlloc_1286_, 9, v_negFn_x3f_1274_);
lean_ctor_set(v_reuseFailAlloc_1286_, 10, v_powFn_x3f_1275_);
lean_ctor_set(v_reuseFailAlloc_1286_, 11, v_intCastFn_x3f_1276_);
lean_ctor_set(v_reuseFailAlloc_1286_, 12, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1286_, 13, v_natSMulFn_x3f_1277_);
lean_ctor_set(v_reuseFailAlloc_1286_, 14, v_intSMulFn_x3f_1278_);
lean_ctor_set(v_reuseFailAlloc_1286_, 15, v_one_x3f_1279_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1(lean_object* v_toPure_1289_, lean_object* v_natCastFn_1290_, lean_object* v_____r_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_apply_2(v_toPure_1289_, lean_box(0), v_natCastFn_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2(lean_object* v_toPure_1293_, lean_object* v_modifyRing_1294_, lean_object* v_toBind_1295_, lean_object* v_natCastFn_1296_){
_start:
{
lean_object* v___f_1297_; lean_object* v___f_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_inc_ref(v_natCastFn_1296_);
v___f_1297_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1297_, 0, v_natCastFn_1296_);
v___f_1298_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1298_, 0, v_toPure_1293_);
lean_closure_set(v___f_1298_, 1, v_natCastFn_1296_);
v___x_1299_ = lean_apply_1(v_modifyRing_1294_, v___f_1297_);
v___x_1300_ = lean_apply_4(v_toBind_1295_, lean_box(0), lean_box(0), v___x_1299_, v___f_1298_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3(lean_object* v_toPure_1301_, lean_object* v_inst_1302_, lean_object* v_inst_1303_, lean_object* v_inst_1304_, lean_object* v_toBind_1305_, lean_object* v___f_1306_, lean_object* v_ring_1307_){
_start:
{
lean_object* v_natCastFn_x3f_1308_; 
v_natCastFn_x3f_1308_ = lean_ctor_get(v_ring_1307_, 12);
if (lean_obj_tag(v_natCastFn_x3f_1308_) == 1)
{
lean_object* v_val_1309_; lean_object* v___x_1310_; 
lean_inc_ref(v_natCastFn_x3f_1308_);
lean_dec_ref(v_ring_1307_);
lean_dec(v___f_1306_);
lean_dec(v_toBind_1305_);
lean_dec_ref(v_inst_1304_);
lean_dec_ref(v_inst_1303_);
lean_dec(v_inst_1302_);
v_val_1309_ = lean_ctor_get(v_natCastFn_x3f_1308_, 0);
lean_inc(v_val_1309_);
lean_dec_ref_known(v_natCastFn_x3f_1308_, 1);
v___x_1310_ = lean_apply_2(v_toPure_1301_, lean_box(0), v_val_1309_);
return v___x_1310_;
}
else
{
lean_object* v_type_1311_; lean_object* v_u_1312_; lean_object* v_semiringInst_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec(v_toPure_1301_);
v_type_1311_ = lean_ctor_get(v_ring_1307_, 1);
lean_inc_ref(v_type_1311_);
v_u_1312_ = lean_ctor_get(v_ring_1307_, 2);
lean_inc(v_u_1312_);
v_semiringInst_1313_ = lean_ctor_get(v_ring_1307_, 4);
lean_inc_ref(v_semiringInst_1313_);
lean_dec_ref(v_ring_1307_);
v___x_1314_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_1302_, v_inst_1303_, v_inst_1304_, v_u_1312_, v_type_1311_, v_semiringInst_1313_);
v___x_1315_ = lean_apply_4(v_toBind_1305_, lean_box(0), lean_box(0), v___x_1314_, v___f_1306_);
return v___x_1315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_inst_1319_){
_start:
{
lean_object* v_toApplicative_1320_; lean_object* v_toBind_1321_; lean_object* v_getRing_1322_; lean_object* v_modifyRing_1323_; lean_object* v_toPure_1324_; lean_object* v___f_1325_; lean_object* v___f_1326_; lean_object* v___x_1327_; 
v_toApplicative_1320_ = lean_ctor_get(v_inst_1317_, 0);
v_toBind_1321_ = lean_ctor_get(v_inst_1317_, 1);
lean_inc_n(v_toBind_1321_, 3);
v_getRing_1322_ = lean_ctor_get(v_inst_1319_, 0);
lean_inc(v_getRing_1322_);
v_modifyRing_1323_ = lean_ctor_get(v_inst_1319_, 1);
lean_inc(v_modifyRing_1323_);
lean_dec_ref(v_inst_1319_);
v_toPure_1324_ = lean_ctor_get(v_toApplicative_1320_, 1);
lean_inc_n(v_toPure_1324_, 2);
v___f_1325_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1325_, 0, v_toPure_1324_);
lean_closure_set(v___f_1325_, 1, v_modifyRing_1323_);
lean_closure_set(v___f_1325_, 2, v_toBind_1321_);
v___f_1326_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1326_, 0, v_toPure_1324_);
lean_closure_set(v___f_1326_, 1, v_inst_1316_);
lean_closure_set(v___f_1326_, 2, v_inst_1317_);
lean_closure_set(v___f_1326_, 3, v_inst_1318_);
lean_closure_set(v___f_1326_, 4, v_toBind_1321_);
lean_closure_set(v___f_1326_, 5, v___f_1325_);
v___x_1327_ = lean_apply_4(v_toBind_1321_, lean_box(0), lean_box(0), v_getRing_1322_, v___f_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn(lean_object* v_m_1328_, lean_object* v_inst_1329_, lean_object* v_inst_1330_, lean_object* v_inst_1331_, lean_object* v_inst_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(v_inst_1329_, v_inst_1330_, v_inst_1331_, v_inst_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0(lean_object* v_invFn_1334_, lean_object* v_s_1335_){
_start:
{
lean_object* v_toRing_1336_; lean_object* v_divFn_x3f_1337_; lean_object* v_semiringId_x3f_1338_; lean_object* v_commSemiringInst_1339_; lean_object* v_commRingInst_1340_; lean_object* v_noZeroDivInst_x3f_1341_; lean_object* v_fieldInst_x3f_1342_; lean_object* v_powIdentityInst_x3f_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1351_; 
v_toRing_1336_ = lean_ctor_get(v_s_1335_, 0);
v_divFn_x3f_1337_ = lean_ctor_get(v_s_1335_, 2);
v_semiringId_x3f_1338_ = lean_ctor_get(v_s_1335_, 3);
v_commSemiringInst_1339_ = lean_ctor_get(v_s_1335_, 4);
v_commRingInst_1340_ = lean_ctor_get(v_s_1335_, 5);
v_noZeroDivInst_x3f_1341_ = lean_ctor_get(v_s_1335_, 6);
v_fieldInst_x3f_1342_ = lean_ctor_get(v_s_1335_, 7);
v_powIdentityInst_x3f_1343_ = lean_ctor_get(v_s_1335_, 8);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_s_1335_);
if (v_isSharedCheck_1351_ == 0)
{
lean_object* v_unused_1352_; 
v_unused_1352_ = lean_ctor_get(v_s_1335_, 1);
lean_dec(v_unused_1352_);
v___x_1345_ = v_s_1335_;
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_powIdentityInst_x3f_1343_);
lean_inc(v_fieldInst_x3f_1342_);
lean_inc(v_noZeroDivInst_x3f_1341_);
lean_inc(v_commRingInst_1340_);
lean_inc(v_commSemiringInst_1339_);
lean_inc(v_semiringId_x3f_1338_);
lean_inc(v_divFn_x3f_1337_);
lean_inc(v_toRing_1336_);
lean_dec(v_s_1335_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1347_, 0, v_invFn_1334_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 1, v___x_1347_);
v___x_1349_ = v___x_1345_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_toRing_1336_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1350_, 2, v_divFn_x3f_1337_);
lean_ctor_set(v_reuseFailAlloc_1350_, 3, v_semiringId_x3f_1338_);
lean_ctor_set(v_reuseFailAlloc_1350_, 4, v_commSemiringInst_1339_);
lean_ctor_set(v_reuseFailAlloc_1350_, 5, v_commRingInst_1340_);
lean_ctor_set(v_reuseFailAlloc_1350_, 6, v_noZeroDivInst_x3f_1341_);
lean_ctor_set(v_reuseFailAlloc_1350_, 7, v_fieldInst_x3f_1342_);
lean_ctor_set(v_reuseFailAlloc_1350_, 8, v_powIdentityInst_x3f_1343_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1(lean_object* v_toPure_1353_, lean_object* v_invFn_1354_, lean_object* v_____r_1355_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_apply_2(v_toPure_1353_, lean_box(0), v_invFn_1354_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2(lean_object* v_toPure_1357_, lean_object* v_modifyCommRing_1358_, lean_object* v_toBind_1359_, lean_object* v_invFn_1360_){
_start:
{
lean_object* v___f_1361_; lean_object* v___f_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_inc_ref(v_invFn_1360_);
v___f_1361_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1361_, 0, v_invFn_1360_);
v___f_1362_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1362_, 0, v_toPure_1357_);
lean_closure_set(v___f_1362_, 1, v_invFn_1360_);
v___x_1363_ = lean_apply_1(v_modifyCommRing_1358_, v___f_1361_);
v___x_1364_ = lean_apply_4(v_toBind_1359_, lean_box(0), lean_box(0), v___x_1363_, v___f_1362_);
return v___x_1364_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7));
v___x_1381_ = l_Lean_stringToMessageData(v___x_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3(lean_object* v_toPure_1382_, lean_object* v_inst_1383_, lean_object* v_inst_1384_, lean_object* v_inst_1385_, lean_object* v_inst_1386_, lean_object* v_toBind_1387_, lean_object* v___f_1388_, lean_object* v_ring_1389_){
_start:
{
lean_object* v_fieldInst_x3f_1390_; 
v_fieldInst_x3f_1390_ = lean_ctor_get(v_ring_1389_, 7);
if (lean_obj_tag(v_fieldInst_x3f_1390_) == 1)
{
lean_object* v_invFn_x3f_1391_; 
lean_inc_ref(v_fieldInst_x3f_1390_);
v_invFn_x3f_1391_ = lean_ctor_get(v_ring_1389_, 1);
if (lean_obj_tag(v_invFn_x3f_1391_) == 1)
{
lean_object* v_val_1392_; lean_object* v___x_1393_; 
lean_inc_ref(v_invFn_x3f_1391_);
lean_dec_ref_known(v_fieldInst_x3f_1390_, 1);
lean_dec_ref(v_ring_1389_);
lean_dec(v___f_1388_);
lean_dec(v_toBind_1387_);
lean_dec_ref(v_inst_1386_);
lean_dec_ref(v_inst_1385_);
lean_dec_ref(v_inst_1384_);
lean_dec(v_inst_1383_);
v_val_1392_ = lean_ctor_get(v_invFn_x3f_1391_, 0);
lean_inc(v_val_1392_);
lean_dec_ref_known(v_invFn_x3f_1391_, 1);
v___x_1393_ = lean_apply_2(v_toPure_1382_, lean_box(0), v_val_1392_);
return v___x_1393_;
}
else
{
lean_object* v_toRing_1394_; lean_object* v_val_1395_; lean_object* v_type_1396_; lean_object* v_u_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v_expectedInst_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec(v_toPure_1382_);
v_toRing_1394_ = lean_ctor_get(v_ring_1389_, 0);
lean_inc_ref(v_toRing_1394_);
lean_dec_ref(v_ring_1389_);
v_val_1395_ = lean_ctor_get(v_fieldInst_x3f_1390_, 0);
lean_inc(v_val_1395_);
lean_dec_ref_known(v_fieldInst_x3f_1390_, 1);
v_type_1396_ = lean_ctor_get(v_toRing_1394_, 1);
lean_inc_ref_n(v_type_1396_, 2);
v_u_1397_ = lean_ctor_get(v_toRing_1394_, 2);
lean_inc_n(v_u_1397_, 2);
lean_dec_ref(v_toRing_1394_);
v___x_1398_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2));
v___x_1399_ = lean_box(0);
v___x_1400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1400_, 0, v_u_1397_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = l_Lean_mkConst(v___x_1398_, v___x_1400_);
v_expectedInst_1402_ = l_Lean_mkAppB(v___x_1401_, v_type_1396_, v_val_1395_);
v___x_1403_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4));
v___x_1404_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6));
v___x_1405_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_1383_, v_inst_1384_, v_inst_1385_, v_inst_1386_, v_type_1396_, v_u_1397_, v___x_1403_, v___x_1404_, v_expectedInst_1402_);
v___x_1406_ = lean_apply_4(v_toBind_1387_, lean_box(0), lean_box(0), v___x_1405_, v___f_1388_);
return v___x_1406_;
}
}
else
{
lean_object* v_toRing_1407_; lean_object* v_type_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_dec(v___f_1388_);
lean_dec(v_toBind_1387_);
lean_dec_ref(v_inst_1386_);
lean_dec(v_inst_1383_);
lean_dec(v_toPure_1382_);
v_toRing_1407_ = lean_ctor_get(v_ring_1389_, 0);
lean_inc_ref(v_toRing_1407_);
lean_dec_ref(v_ring_1389_);
v_type_1408_ = lean_ctor_get(v_toRing_1407_, 1);
lean_inc_ref(v_type_1408_);
lean_dec_ref(v_toRing_1407_);
v___x_1409_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8);
v___x_1410_ = l_Lean_indentExpr(v_type_1408_);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_Lean_throwError___redArg(v_inst_1385_, v_inst_1384_, v___x_1411_);
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg(lean_object* v_inst_1413_, lean_object* v_inst_1414_, lean_object* v_inst_1415_, lean_object* v_inst_1416_, lean_object* v_inst_1417_){
_start:
{
lean_object* v_toApplicative_1418_; lean_object* v_toBind_1419_; lean_object* v_getCommRing_1420_; lean_object* v_modifyCommRing_1421_; lean_object* v_toPure_1422_; lean_object* v___f_1423_; lean_object* v___f_1424_; lean_object* v___x_1425_; 
v_toApplicative_1418_ = lean_ctor_get(v_inst_1415_, 0);
v_toBind_1419_ = lean_ctor_get(v_inst_1415_, 1);
lean_inc_n(v_toBind_1419_, 3);
v_getCommRing_1420_ = lean_ctor_get(v_inst_1417_, 0);
lean_inc(v_getCommRing_1420_);
v_modifyCommRing_1421_ = lean_ctor_get(v_inst_1417_, 1);
lean_inc(v_modifyCommRing_1421_);
lean_dec_ref(v_inst_1417_);
v_toPure_1422_ = lean_ctor_get(v_toApplicative_1418_, 1);
lean_inc_n(v_toPure_1422_, 2);
v___f_1423_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1423_, 0, v_toPure_1422_);
lean_closure_set(v___f_1423_, 1, v_modifyCommRing_1421_);
lean_closure_set(v___f_1423_, 2, v_toBind_1419_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1424_, 0, v_toPure_1422_);
lean_closure_set(v___f_1424_, 1, v_inst_1413_);
lean_closure_set(v___f_1424_, 2, v_inst_1414_);
lean_closure_set(v___f_1424_, 3, v_inst_1415_);
lean_closure_set(v___f_1424_, 4, v_inst_1416_);
lean_closure_set(v___f_1424_, 5, v_toBind_1419_);
lean_closure_set(v___f_1424_, 6, v___f_1423_);
v___x_1425_ = lean_apply_4(v_toBind_1419_, lean_box(0), lean_box(0), v_getCommRing_1420_, v___f_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn(lean_object* v_m_1426_, lean_object* v_inst_1427_, lean_object* v_inst_1428_, lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_inst_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Lean_Meta_Sym_Arith_getInvFn___redArg(v_inst_1427_, v_inst_1428_, v_inst_1429_, v_inst_1430_, v_inst_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__0(lean_object* v_divFn_1433_, lean_object* v_s_1434_){
_start:
{
lean_object* v_toRing_1435_; lean_object* v_invFn_x3f_1436_; lean_object* v_semiringId_x3f_1437_; lean_object* v_commSemiringInst_1438_; lean_object* v_commRingInst_1439_; lean_object* v_noZeroDivInst_x3f_1440_; lean_object* v_fieldInst_x3f_1441_; lean_object* v_powIdentityInst_x3f_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1450_; 
v_toRing_1435_ = lean_ctor_get(v_s_1434_, 0);
v_invFn_x3f_1436_ = lean_ctor_get(v_s_1434_, 1);
v_semiringId_x3f_1437_ = lean_ctor_get(v_s_1434_, 3);
v_commSemiringInst_1438_ = lean_ctor_get(v_s_1434_, 4);
v_commRingInst_1439_ = lean_ctor_get(v_s_1434_, 5);
v_noZeroDivInst_x3f_1440_ = lean_ctor_get(v_s_1434_, 6);
v_fieldInst_x3f_1441_ = lean_ctor_get(v_s_1434_, 7);
v_powIdentityInst_x3f_1442_ = lean_ctor_get(v_s_1434_, 8);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_s_1434_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_s_1434_, 2);
lean_dec(v_unused_1451_);
v___x_1444_ = v_s_1434_;
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_powIdentityInst_x3f_1442_);
lean_inc(v_fieldInst_x3f_1441_);
lean_inc(v_noZeroDivInst_x3f_1440_);
lean_inc(v_commRingInst_1439_);
lean_inc(v_commSemiringInst_1438_);
lean_inc(v_semiringId_x3f_1437_);
lean_inc(v_invFn_x3f_1436_);
lean_inc(v_toRing_1435_);
lean_dec(v_s_1434_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1450_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
v___x_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1446_, 0, v_divFn_1433_);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 2, v___x_1446_);
v___x_1448_ = v___x_1444_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_toRing_1435_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_invFn_x3f_1436_);
lean_ctor_set(v_reuseFailAlloc_1449_, 2, v___x_1446_);
lean_ctor_set(v_reuseFailAlloc_1449_, 3, v_semiringId_x3f_1437_);
lean_ctor_set(v_reuseFailAlloc_1449_, 4, v_commSemiringInst_1438_);
lean_ctor_set(v_reuseFailAlloc_1449_, 5, v_commRingInst_1439_);
lean_ctor_set(v_reuseFailAlloc_1449_, 6, v_noZeroDivInst_x3f_1440_);
lean_ctor_set(v_reuseFailAlloc_1449_, 7, v_fieldInst_x3f_1441_);
lean_ctor_set(v_reuseFailAlloc_1449_, 8, v_powIdentityInst_x3f_1442_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__1(lean_object* v_toPure_1452_, lean_object* v_divFn_1453_, lean_object* v_____r_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_apply_2(v_toPure_1452_, lean_box(0), v_divFn_1453_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__2(lean_object* v_toPure_1456_, lean_object* v_modifyCommRing_1457_, lean_object* v_toBind_1458_, lean_object* v_divFn_1459_){
_start:
{
lean_object* v___f_1460_; lean_object* v___f_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
lean_inc_ref(v_divFn_1459_);
v___f_1460_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1460_, 0, v_divFn_1459_);
v___f_1461_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1461_, 0, v_toPure_1456_);
lean_closure_set(v___f_1461_, 1, v_divFn_1459_);
v___x_1462_ = lean_apply_1(v_modifyCommRing_1457_, v___f_1460_);
v___x_1463_ = lean_apply_4(v_toBind_1458_, lean_box(0), lean_box(0), v___x_1462_, v___f_1461_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3(lean_object* v_toPure_1480_, lean_object* v_inst_1481_, lean_object* v_inst_1482_, lean_object* v_inst_1483_, lean_object* v_inst_1484_, lean_object* v_toBind_1485_, lean_object* v___f_1486_, lean_object* v_ring_1487_){
_start:
{
lean_object* v_fieldInst_x3f_1488_; 
v_fieldInst_x3f_1488_ = lean_ctor_get(v_ring_1487_, 7);
if (lean_obj_tag(v_fieldInst_x3f_1488_) == 1)
{
lean_object* v_divFn_x3f_1489_; 
lean_inc_ref(v_fieldInst_x3f_1488_);
v_divFn_x3f_1489_ = lean_ctor_get(v_ring_1487_, 2);
if (lean_obj_tag(v_divFn_x3f_1489_) == 1)
{
lean_object* v_val_1490_; lean_object* v___x_1491_; 
lean_inc_ref(v_divFn_x3f_1489_);
lean_dec_ref_known(v_fieldInst_x3f_1488_, 1);
lean_dec_ref(v_ring_1487_);
lean_dec(v___f_1486_);
lean_dec(v_toBind_1485_);
lean_dec_ref(v_inst_1484_);
lean_dec_ref(v_inst_1483_);
lean_dec_ref(v_inst_1482_);
lean_dec(v_inst_1481_);
v_val_1490_ = lean_ctor_get(v_divFn_x3f_1489_, 0);
lean_inc(v_val_1490_);
lean_dec_ref_known(v_divFn_x3f_1489_, 1);
v___x_1491_ = lean_apply_2(v_toPure_1480_, lean_box(0), v_val_1490_);
return v___x_1491_;
}
else
{
lean_object* v_toRing_1492_; lean_object* v_val_1493_; lean_object* v_type_1494_; lean_object* v_u_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v_expectedInst_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec(v_toPure_1480_);
v_toRing_1492_ = lean_ctor_get(v_ring_1487_, 0);
lean_inc_ref(v_toRing_1492_);
lean_dec_ref(v_ring_1487_);
v_val_1493_ = lean_ctor_get(v_fieldInst_x3f_1488_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v_fieldInst_x3f_1488_, 1);
v_type_1494_ = lean_ctor_get(v_toRing_1492_, 1);
lean_inc_ref_n(v_type_1494_, 3);
v_u_1495_ = lean_ctor_get(v_toRing_1492_, 2);
lean_inc_n(v_u_1495_, 2);
lean_dec_ref(v_toRing_1492_);
v___x_1496_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__1));
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1498_, 0, v_u_1495_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
lean_inc_ref(v___x_1498_);
v___x_1499_ = l_Lean_mkConst(v___x_1496_, v___x_1498_);
v___x_1500_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__3));
v___x_1501_ = l_Lean_mkConst(v___x_1500_, v___x_1498_);
v___x_1502_ = l_Lean_mkAppB(v___x_1501_, v_type_1494_, v_val_1493_);
v_expectedInst_1503_ = l_Lean_mkAppB(v___x_1499_, v_type_1494_, v___x_1502_);
v___x_1504_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__5));
v___x_1505_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3___closed__7));
v___x_1506_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_1481_, v_inst_1482_, v_inst_1483_, v_inst_1484_, v_type_1494_, v_u_1495_, v___x_1504_, v___x_1505_, v_expectedInst_1503_);
v___x_1507_ = lean_apply_4(v_toBind_1485_, lean_box(0), lean_box(0), v___x_1506_, v___f_1486_);
return v___x_1507_;
}
}
else
{
lean_object* v_toRing_1508_; lean_object* v_type_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v___f_1486_);
lean_dec(v_toBind_1485_);
lean_dec_ref(v_inst_1484_);
lean_dec(v_inst_1481_);
lean_dec(v_toPure_1480_);
v_toRing_1508_ = lean_ctor_get(v_ring_1487_, 0);
lean_inc_ref(v_toRing_1508_);
lean_dec_ref(v_ring_1487_);
v_type_1509_ = lean_ctor_get(v_toRing_1508_, 1);
lean_inc_ref(v_type_1509_);
lean_dec_ref(v_toRing_1508_);
v___x_1510_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8);
v___x_1511_ = l_Lean_indentExpr(v_type_1509_);
v___x_1512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = l_Lean_throwError___redArg(v_inst_1483_, v_inst_1482_, v___x_1512_);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn___redArg(lean_object* v_inst_1514_, lean_object* v_inst_1515_, lean_object* v_inst_1516_, lean_object* v_inst_1517_, lean_object* v_inst_1518_){
_start:
{
lean_object* v_toApplicative_1519_; lean_object* v_toBind_1520_; lean_object* v_getCommRing_1521_; lean_object* v_modifyCommRing_1522_; lean_object* v_toPure_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; 
v_toApplicative_1519_ = lean_ctor_get(v_inst_1516_, 0);
v_toBind_1520_ = lean_ctor_get(v_inst_1516_, 1);
lean_inc_n(v_toBind_1520_, 3);
v_getCommRing_1521_ = lean_ctor_get(v_inst_1518_, 0);
lean_inc(v_getCommRing_1521_);
v_modifyCommRing_1522_ = lean_ctor_get(v_inst_1518_, 1);
lean_inc(v_modifyCommRing_1522_);
lean_dec_ref(v_inst_1518_);
v_toPure_1523_ = lean_ctor_get(v_toApplicative_1519_, 1);
lean_inc_n(v_toPure_1523_, 2);
v___f_1524_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1524_, 0, v_toPure_1523_);
lean_closure_set(v___f_1524_, 1, v_modifyCommRing_1522_);
lean_closure_set(v___f_1524_, 2, v_toBind_1520_);
v___f_1525_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getDivFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1525_, 0, v_toPure_1523_);
lean_closure_set(v___f_1525_, 1, v_inst_1514_);
lean_closure_set(v___f_1525_, 2, v_inst_1515_);
lean_closure_set(v___f_1525_, 3, v_inst_1516_);
lean_closure_set(v___f_1525_, 4, v_inst_1517_);
lean_closure_set(v___f_1525_, 5, v_toBind_1520_);
lean_closure_set(v___f_1525_, 6, v___f_1524_);
v___x_1526_ = lean_apply_4(v_toBind_1520_, lean_box(0), lean_box(0), v_getCommRing_1521_, v___f_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getDivFn(lean_object* v_m_1527_, lean_object* v_inst_1528_, lean_object* v_inst_1529_, lean_object* v_inst_1530_, lean_object* v_inst_1531_, lean_object* v_inst_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_Meta_Sym_Arith_getDivFn___redArg(v_inst_1528_, v_inst_1529_, v_inst_1530_, v_inst_1531_, v_inst_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__0(lean_object* v_fn_1534_, lean_object* v_s_1535_){
_start:
{
lean_object* v_id_1536_; lean_object* v_type_1537_; lean_object* v_u_1538_; lean_object* v_semiringInst_1539_; lean_object* v_addFn_x3f_1540_; lean_object* v_mulFn_x3f_1541_; lean_object* v_powFn_x3f_1542_; lean_object* v_natCastFn_x3f_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1551_; 
v_id_1536_ = lean_ctor_get(v_s_1535_, 0);
v_type_1537_ = lean_ctor_get(v_s_1535_, 1);
v_u_1538_ = lean_ctor_get(v_s_1535_, 2);
v_semiringInst_1539_ = lean_ctor_get(v_s_1535_, 3);
v_addFn_x3f_1540_ = lean_ctor_get(v_s_1535_, 4);
v_mulFn_x3f_1541_ = lean_ctor_get(v_s_1535_, 5);
v_powFn_x3f_1542_ = lean_ctor_get(v_s_1535_, 6);
v_natCastFn_x3f_1543_ = lean_ctor_get(v_s_1535_, 7);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_s_1535_);
if (v_isSharedCheck_1551_ == 0)
{
lean_object* v_unused_1552_; 
v_unused_1552_ = lean_ctor_get(v_s_1535_, 8);
lean_dec(v_unused_1552_);
v___x_1545_ = v_s_1535_;
v_isShared_1546_ = v_isSharedCheck_1551_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_natCastFn_x3f_1543_);
lean_inc(v_powFn_x3f_1542_);
lean_inc(v_mulFn_x3f_1541_);
lean_inc(v_addFn_x3f_1540_);
lean_inc(v_semiringInst_1539_);
lean_inc(v_u_1538_);
lean_inc(v_type_1537_);
lean_inc(v_id_1536_);
lean_dec(v_s_1535_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1551_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v_fn_1534_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 8, v___x_1547_);
v___x_1549_ = v___x_1545_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_id_1536_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v_type_1537_);
lean_ctor_set(v_reuseFailAlloc_1550_, 2, v_u_1538_);
lean_ctor_set(v_reuseFailAlloc_1550_, 3, v_semiringInst_1539_);
lean_ctor_set(v_reuseFailAlloc_1550_, 4, v_addFn_x3f_1540_);
lean_ctor_set(v_reuseFailAlloc_1550_, 5, v_mulFn_x3f_1541_);
lean_ctor_set(v_reuseFailAlloc_1550_, 6, v_powFn_x3f_1542_);
lean_ctor_set(v_reuseFailAlloc_1550_, 7, v_natCastFn_x3f_1543_);
lean_ctor_set(v_reuseFailAlloc_1550_, 8, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__2(lean_object* v_toPure_1553_, lean_object* v_modifySemiring_1554_, lean_object* v_toBind_1555_, lean_object* v_fn_1556_){
_start:
{
lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_inc_ref(v_fn_1556_);
v___f_1557_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1557_, 0, v_fn_1556_);
v___f_1558_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1558_, 0, v_toPure_1553_);
lean_closure_set(v___f_1558_, 1, v_fn_1556_);
v___x_1559_ = lean_apply_1(v_modifySemiring_1554_, v___f_1557_);
v___x_1560_ = lean_apply_4(v_toBind_1555_, lean_box(0), lean_box(0), v___x_1559_, v___f_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__1(lean_object* v_toPure_1561_, lean_object* v_inst_1562_, lean_object* v_inst_1563_, lean_object* v_inst_1564_, lean_object* v_toBind_1565_, lean_object* v___f_1566_, lean_object* v_sr_1567_){
_start:
{
lean_object* v_natSMulFn_x3f_1568_; 
v_natSMulFn_x3f_1568_ = lean_ctor_get(v_sr_1567_, 8);
if (lean_obj_tag(v_natSMulFn_x3f_1568_) == 1)
{
lean_object* v_val_1569_; lean_object* v___x_1570_; 
lean_inc_ref(v_natSMulFn_x3f_1568_);
lean_dec_ref(v_sr_1567_);
lean_dec(v___f_1566_);
lean_dec(v_toBind_1565_);
lean_dec_ref(v_inst_1564_);
lean_dec_ref(v_inst_1563_);
lean_dec(v_inst_1562_);
v_val_1569_ = lean_ctor_get(v_natSMulFn_x3f_1568_, 0);
lean_inc(v_val_1569_);
lean_dec_ref_known(v_natSMulFn_x3f_1568_, 1);
v___x_1570_ = lean_apply_2(v_toPure_1561_, lean_box(0), v_val_1569_);
return v___x_1570_;
}
else
{
lean_object* v_type_1571_; lean_object* v_u_1572_; lean_object* v_semiringInst_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec(v_toPure_1561_);
v_type_1571_ = lean_ctor_get(v_sr_1567_, 1);
lean_inc_ref_n(v_type_1571_, 2);
v_u_1572_ = lean_ctor_get(v_sr_1567_, 2);
lean_inc_n(v_u_1572_, 2);
v_semiringInst_1573_ = lean_ctor_get(v_sr_1567_, 3);
lean_inc_ref(v_semiringInst_1573_);
lean_dec_ref(v_sr_1567_);
v___x_1574_ = l_Lean_Nat_mkType;
v___x_1575_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNatSMulFn___redArg___lam__3___closed__1));
v___x_1576_ = lean_box(0);
v___x_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_u_1572_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = l_Lean_mkConst(v___x_1575_, v___x_1577_);
v___x_1579_ = l_Lean_mkAppB(v___x_1578_, v_type_1571_, v_semiringInst_1573_);
v___x_1580_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkSMulFn___redArg(v_inst_1562_, v_inst_1563_, v_inst_1564_, v_u_1572_, v_type_1571_, v___x_1574_, v___x_1579_);
v___x_1581_ = lean_apply_4(v_toBind_1565_, lean_box(0), lean_box(0), v___x_1580_, v___f_1566_);
return v___x_1581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg(lean_object* v_inst_1582_, lean_object* v_inst_1583_, lean_object* v_inst_1584_, lean_object* v_inst_1585_){
_start:
{
lean_object* v_toApplicative_1586_; lean_object* v_toBind_1587_; lean_object* v_getSemiring_1588_; lean_object* v_modifySemiring_1589_; lean_object* v_toPure_1590_; lean_object* v___f_1591_; lean_object* v___f_1592_; lean_object* v___x_1593_; 
v_toApplicative_1586_ = lean_ctor_get(v_inst_1583_, 0);
v_toBind_1587_ = lean_ctor_get(v_inst_1583_, 1);
lean_inc_n(v_toBind_1587_, 3);
v_getSemiring_1588_ = lean_ctor_get(v_inst_1585_, 0);
lean_inc(v_getSemiring_1588_);
v_modifySemiring_1589_ = lean_ctor_get(v_inst_1585_, 1);
lean_inc(v_modifySemiring_1589_);
lean_dec_ref(v_inst_1585_);
v_toPure_1590_ = lean_ctor_get(v_toApplicative_1586_, 1);
lean_inc_n(v_toPure_1590_, 2);
v___f_1591_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1591_, 0, v_toPure_1590_);
lean_closure_set(v___f_1591_, 1, v_modifySemiring_1589_);
lean_closure_set(v___f_1591_, 2, v_toBind_1587_);
v___f_1592_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg___lam__1), 7, 6);
lean_closure_set(v___f_1592_, 0, v_toPure_1590_);
lean_closure_set(v___f_1592_, 1, v_inst_1582_);
lean_closure_set(v___f_1592_, 2, v_inst_1583_);
lean_closure_set(v___f_1592_, 3, v_inst_1584_);
lean_closure_set(v___f_1592_, 4, v_toBind_1587_);
lean_closure_set(v___f_1592_, 5, v___f_1591_);
v___x_1593_ = lean_apply_4(v_toBind_1587_, lean_box(0), lean_box(0), v_getSemiring_1588_, v___f_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatSMulFn_x27(lean_object* v_m_1594_, lean_object* v_inst_1595_, lean_object* v_inst_1596_, lean_object* v_inst_1597_, lean_object* v_inst_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_Meta_Sym_Arith_getNatSMulFn_x27___redArg(v_inst_1595_, v_inst_1596_, v_inst_1597_, v_inst_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0(lean_object* v_addFn_1600_, lean_object* v_s_1601_){
_start:
{
lean_object* v_id_1602_; lean_object* v_type_1603_; lean_object* v_u_1604_; lean_object* v_semiringInst_1605_; lean_object* v_mulFn_x3f_1606_; lean_object* v_powFn_x3f_1607_; lean_object* v_natCastFn_x3f_1608_; lean_object* v_natSMulFn_x3f_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1617_; 
v_id_1602_ = lean_ctor_get(v_s_1601_, 0);
v_type_1603_ = lean_ctor_get(v_s_1601_, 1);
v_u_1604_ = lean_ctor_get(v_s_1601_, 2);
v_semiringInst_1605_ = lean_ctor_get(v_s_1601_, 3);
v_mulFn_x3f_1606_ = lean_ctor_get(v_s_1601_, 5);
v_powFn_x3f_1607_ = lean_ctor_get(v_s_1601_, 6);
v_natCastFn_x3f_1608_ = lean_ctor_get(v_s_1601_, 7);
v_natSMulFn_x3f_1609_ = lean_ctor_get(v_s_1601_, 8);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_s_1601_);
if (v_isSharedCheck_1617_ == 0)
{
lean_object* v_unused_1618_; 
v_unused_1618_ = lean_ctor_get(v_s_1601_, 4);
lean_dec(v_unused_1618_);
v___x_1611_ = v_s_1601_;
v_isShared_1612_ = v_isSharedCheck_1617_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_natSMulFn_x3f_1609_);
lean_inc(v_natCastFn_x3f_1608_);
lean_inc(v_powFn_x3f_1607_);
lean_inc(v_mulFn_x3f_1606_);
lean_inc(v_semiringInst_1605_);
lean_inc(v_u_1604_);
lean_inc(v_type_1603_);
lean_inc(v_id_1602_);
lean_dec(v_s_1601_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1617_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1613_, 0, v_addFn_1600_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 4, v___x_1613_);
v___x_1615_ = v___x_1611_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_id_1602_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_type_1603_);
lean_ctor_set(v_reuseFailAlloc_1616_, 2, v_u_1604_);
lean_ctor_set(v_reuseFailAlloc_1616_, 3, v_semiringInst_1605_);
lean_ctor_set(v_reuseFailAlloc_1616_, 4, v___x_1613_);
lean_ctor_set(v_reuseFailAlloc_1616_, 5, v_mulFn_x3f_1606_);
lean_ctor_set(v_reuseFailAlloc_1616_, 6, v_powFn_x3f_1607_);
lean_ctor_set(v_reuseFailAlloc_1616_, 7, v_natCastFn_x3f_1608_);
lean_ctor_set(v_reuseFailAlloc_1616_, 8, v_natSMulFn_x3f_1609_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2(lean_object* v_toPure_1619_, lean_object* v_modifySemiring_1620_, lean_object* v_toBind_1621_, lean_object* v_addFn_1622_){
_start:
{
lean_object* v___f_1623_; lean_object* v___f_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
lean_inc_ref(v_addFn_1622_);
v___f_1623_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1623_, 0, v_addFn_1622_);
v___f_1624_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1624_, 0, v_toPure_1619_);
lean_closure_set(v___f_1624_, 1, v_addFn_1622_);
v___x_1625_ = lean_apply_1(v_modifySemiring_1620_, v___f_1623_);
v___x_1626_ = lean_apply_4(v_toBind_1621_, lean_box(0), lean_box(0), v___x_1625_, v___f_1624_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1(lean_object* v_toPure_1627_, lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_inst_1630_, lean_object* v_inst_1631_, lean_object* v_toBind_1632_, lean_object* v___f_1633_, lean_object* v_sr_1634_){
_start:
{
lean_object* v_addFn_x3f_1635_; 
v_addFn_x3f_1635_ = lean_ctor_get(v_sr_1634_, 4);
if (lean_obj_tag(v_addFn_x3f_1635_) == 1)
{
lean_object* v_val_1636_; lean_object* v___x_1637_; 
lean_inc_ref(v_addFn_x3f_1635_);
lean_dec_ref(v_sr_1634_);
lean_dec(v___f_1633_);
lean_dec(v_toBind_1632_);
lean_dec_ref(v_inst_1631_);
lean_dec_ref(v_inst_1630_);
lean_dec_ref(v_inst_1629_);
lean_dec(v_inst_1628_);
v_val_1636_ = lean_ctor_get(v_addFn_x3f_1635_, 0);
lean_inc(v_val_1636_);
lean_dec_ref_known(v_addFn_x3f_1635_, 1);
v___x_1637_ = lean_apply_2(v_toPure_1627_, lean_box(0), v_val_1636_);
return v___x_1637_;
}
else
{
lean_object* v_type_1638_; lean_object* v_u_1639_; lean_object* v_semiringInst_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v_expectedInst_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
lean_dec(v_toPure_1627_);
v_type_1638_ = lean_ctor_get(v_sr_1634_, 1);
lean_inc_ref_n(v_type_1638_, 3);
v_u_1639_ = lean_ctor_get(v_sr_1634_, 2);
lean_inc_n(v_u_1639_, 2);
v_semiringInst_1640_ = lean_ctor_get(v_sr_1634_, 3);
lean_inc_ref(v_semiringInst_1640_);
lean_dec_ref(v_sr_1634_);
v___x_1641_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1));
v___x_1642_ = lean_box(0);
v___x_1643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1643_, 0, v_u_1639_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
lean_inc_ref(v___x_1643_);
v___x_1644_ = l_Lean_mkConst(v___x_1641_, v___x_1643_);
v___x_1645_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3));
v___x_1646_ = l_Lean_mkConst(v___x_1645_, v___x_1643_);
v___x_1647_ = l_Lean_mkAppB(v___x_1646_, v_type_1638_, v_semiringInst_1640_);
v_expectedInst_1648_ = l_Lean_mkAppB(v___x_1644_, v_type_1638_, v___x_1647_);
v___x_1649_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5));
v___x_1650_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7));
v___x_1651_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_1628_, v_inst_1629_, v_inst_1630_, v_inst_1631_, v_type_1638_, v_u_1639_, v___x_1649_, v___x_1650_, v_expectedInst_1648_);
v___x_1652_ = lean_apply_4(v_toBind_1632_, lean_box(0), lean_box(0), v___x_1651_, v___f_1633_);
return v___x_1652_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(lean_object* v_inst_1653_, lean_object* v_inst_1654_, lean_object* v_inst_1655_, lean_object* v_inst_1656_, lean_object* v_inst_1657_){
_start:
{
lean_object* v_toApplicative_1658_; lean_object* v_toBind_1659_; lean_object* v_getSemiring_1660_; lean_object* v_modifySemiring_1661_; lean_object* v_toPure_1662_; lean_object* v___f_1663_; lean_object* v___f_1664_; lean_object* v___x_1665_; 
v_toApplicative_1658_ = lean_ctor_get(v_inst_1655_, 0);
v_toBind_1659_ = lean_ctor_get(v_inst_1655_, 1);
lean_inc_n(v_toBind_1659_, 3);
v_getSemiring_1660_ = lean_ctor_get(v_inst_1657_, 0);
lean_inc(v_getSemiring_1660_);
v_modifySemiring_1661_ = lean_ctor_get(v_inst_1657_, 1);
lean_inc(v_modifySemiring_1661_);
lean_dec_ref(v_inst_1657_);
v_toPure_1662_ = lean_ctor_get(v_toApplicative_1658_, 1);
lean_inc_n(v_toPure_1662_, 2);
v___f_1663_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1663_, 0, v_toPure_1662_);
lean_closure_set(v___f_1663_, 1, v_modifySemiring_1661_);
lean_closure_set(v___f_1663_, 2, v_toBind_1659_);
v___f_1664_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1664_, 0, v_toPure_1662_);
lean_closure_set(v___f_1664_, 1, v_inst_1653_);
lean_closure_set(v___f_1664_, 2, v_inst_1654_);
lean_closure_set(v___f_1664_, 3, v_inst_1655_);
lean_closure_set(v___f_1664_, 4, v_inst_1656_);
lean_closure_set(v___f_1664_, 5, v_toBind_1659_);
lean_closure_set(v___f_1664_, 6, v___f_1663_);
v___x_1665_ = lean_apply_4(v_toBind_1659_, lean_box(0), lean_box(0), v_getSemiring_1660_, v___f_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27(lean_object* v_m_1666_, lean_object* v_inst_1667_, lean_object* v_inst_1668_, lean_object* v_inst_1669_, lean_object* v_inst_1670_, lean_object* v_inst_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(v_inst_1667_, v_inst_1668_, v_inst_1669_, v_inst_1670_, v_inst_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0(lean_object* v_mulFn_1673_, lean_object* v_s_1674_){
_start:
{
lean_object* v_id_1675_; lean_object* v_type_1676_; lean_object* v_u_1677_; lean_object* v_semiringInst_1678_; lean_object* v_addFn_x3f_1679_; lean_object* v_powFn_x3f_1680_; lean_object* v_natCastFn_x3f_1681_; lean_object* v_natSMulFn_x3f_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1690_; 
v_id_1675_ = lean_ctor_get(v_s_1674_, 0);
v_type_1676_ = lean_ctor_get(v_s_1674_, 1);
v_u_1677_ = lean_ctor_get(v_s_1674_, 2);
v_semiringInst_1678_ = lean_ctor_get(v_s_1674_, 3);
v_addFn_x3f_1679_ = lean_ctor_get(v_s_1674_, 4);
v_powFn_x3f_1680_ = lean_ctor_get(v_s_1674_, 6);
v_natCastFn_x3f_1681_ = lean_ctor_get(v_s_1674_, 7);
v_natSMulFn_x3f_1682_ = lean_ctor_get(v_s_1674_, 8);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_s_1674_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; 
v_unused_1691_ = lean_ctor_get(v_s_1674_, 5);
lean_dec(v_unused_1691_);
v___x_1684_ = v_s_1674_;
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_natSMulFn_x3f_1682_);
lean_inc(v_natCastFn_x3f_1681_);
lean_inc(v_powFn_x3f_1680_);
lean_inc(v_addFn_x3f_1679_);
lean_inc(v_semiringInst_1678_);
lean_inc(v_u_1677_);
lean_inc(v_type_1676_);
lean_inc(v_id_1675_);
lean_dec(v_s_1674_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_mulFn_1673_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 5, v___x_1686_);
v___x_1688_ = v___x_1684_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_id_1675_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_type_1676_);
lean_ctor_set(v_reuseFailAlloc_1689_, 2, v_u_1677_);
lean_ctor_set(v_reuseFailAlloc_1689_, 3, v_semiringInst_1678_);
lean_ctor_set(v_reuseFailAlloc_1689_, 4, v_addFn_x3f_1679_);
lean_ctor_set(v_reuseFailAlloc_1689_, 5, v___x_1686_);
lean_ctor_set(v_reuseFailAlloc_1689_, 6, v_powFn_x3f_1680_);
lean_ctor_set(v_reuseFailAlloc_1689_, 7, v_natCastFn_x3f_1681_);
lean_ctor_set(v_reuseFailAlloc_1689_, 8, v_natSMulFn_x3f_1682_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2(lean_object* v_toPure_1692_, lean_object* v_modifySemiring_1693_, lean_object* v_toBind_1694_, lean_object* v_mulFn_1695_){
_start:
{
lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
lean_inc_ref(v_mulFn_1695_);
v___f_1696_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1696_, 0, v_mulFn_1695_);
v___f_1697_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1697_, 0, v_toPure_1692_);
lean_closure_set(v___f_1697_, 1, v_mulFn_1695_);
v___x_1698_ = lean_apply_1(v_modifySemiring_1693_, v___f_1696_);
v___x_1699_ = lean_apply_4(v_toBind_1694_, lean_box(0), lean_box(0), v___x_1698_, v___f_1697_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1(lean_object* v_toPure_1700_, lean_object* v_inst_1701_, lean_object* v_inst_1702_, lean_object* v_inst_1703_, lean_object* v_inst_1704_, lean_object* v_toBind_1705_, lean_object* v___f_1706_, lean_object* v_sr_1707_){
_start:
{
lean_object* v_mulFn_x3f_1708_; 
v_mulFn_x3f_1708_ = lean_ctor_get(v_sr_1707_, 5);
if (lean_obj_tag(v_mulFn_x3f_1708_) == 1)
{
lean_object* v_val_1709_; lean_object* v___x_1710_; 
lean_inc_ref(v_mulFn_x3f_1708_);
lean_dec_ref(v_sr_1707_);
lean_dec(v___f_1706_);
lean_dec(v_toBind_1705_);
lean_dec_ref(v_inst_1704_);
lean_dec_ref(v_inst_1703_);
lean_dec_ref(v_inst_1702_);
lean_dec(v_inst_1701_);
v_val_1709_ = lean_ctor_get(v_mulFn_x3f_1708_, 0);
lean_inc(v_val_1709_);
lean_dec_ref_known(v_mulFn_x3f_1708_, 1);
v___x_1710_ = lean_apply_2(v_toPure_1700_, lean_box(0), v_val_1709_);
return v___x_1710_;
}
else
{
lean_object* v_type_1711_; lean_object* v_u_1712_; lean_object* v_semiringInst_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v_expectedInst_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_dec(v_toPure_1700_);
v_type_1711_ = lean_ctor_get(v_sr_1707_, 1);
lean_inc_ref_n(v_type_1711_, 3);
v_u_1712_ = lean_ctor_get(v_sr_1707_, 2);
lean_inc_n(v_u_1712_, 2);
v_semiringInst_1713_ = lean_ctor_get(v_sr_1707_, 3);
lean_inc_ref(v_semiringInst_1713_);
lean_dec_ref(v_sr_1707_);
v___x_1714_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1));
v___x_1715_ = lean_box(0);
v___x_1716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1716_, 0, v_u_1712_);
lean_ctor_set(v___x_1716_, 1, v___x_1715_);
lean_inc_ref(v___x_1716_);
v___x_1717_ = l_Lean_mkConst(v___x_1714_, v___x_1716_);
v___x_1718_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3));
v___x_1719_ = l_Lean_mkConst(v___x_1718_, v___x_1716_);
v___x_1720_ = l_Lean_mkAppB(v___x_1719_, v_type_1711_, v_semiringInst_1713_);
v_expectedInst_1721_ = l_Lean_mkAppB(v___x_1717_, v_type_1711_, v___x_1720_);
v___x_1722_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5));
v___x_1723_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7));
v___x_1724_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_1701_, v_inst_1702_, v_inst_1703_, v_inst_1704_, v_type_1711_, v_u_1712_, v___x_1722_, v___x_1723_, v_expectedInst_1721_);
v___x_1725_ = lean_apply_4(v_toBind_1705_, lean_box(0), lean_box(0), v___x_1724_, v___f_1706_);
return v___x_1725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(lean_object* v_inst_1726_, lean_object* v_inst_1727_, lean_object* v_inst_1728_, lean_object* v_inst_1729_, lean_object* v_inst_1730_){
_start:
{
lean_object* v_toApplicative_1731_; lean_object* v_toBind_1732_; lean_object* v_getSemiring_1733_; lean_object* v_modifySemiring_1734_; lean_object* v_toPure_1735_; lean_object* v___f_1736_; lean_object* v___f_1737_; lean_object* v___x_1738_; 
v_toApplicative_1731_ = lean_ctor_get(v_inst_1728_, 0);
v_toBind_1732_ = lean_ctor_get(v_inst_1728_, 1);
lean_inc_n(v_toBind_1732_, 3);
v_getSemiring_1733_ = lean_ctor_get(v_inst_1730_, 0);
lean_inc(v_getSemiring_1733_);
v_modifySemiring_1734_ = lean_ctor_get(v_inst_1730_, 1);
lean_inc(v_modifySemiring_1734_);
lean_dec_ref(v_inst_1730_);
v_toPure_1735_ = lean_ctor_get(v_toApplicative_1731_, 1);
lean_inc_n(v_toPure_1735_, 2);
v___f_1736_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1736_, 0, v_toPure_1735_);
lean_closure_set(v___f_1736_, 1, v_modifySemiring_1734_);
lean_closure_set(v___f_1736_, 2, v_toBind_1732_);
v___f_1737_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1737_, 0, v_toPure_1735_);
lean_closure_set(v___f_1737_, 1, v_inst_1726_);
lean_closure_set(v___f_1737_, 2, v_inst_1727_);
lean_closure_set(v___f_1737_, 3, v_inst_1728_);
lean_closure_set(v___f_1737_, 4, v_inst_1729_);
lean_closure_set(v___f_1737_, 5, v_toBind_1732_);
lean_closure_set(v___f_1737_, 6, v___f_1736_);
v___x_1738_ = lean_apply_4(v_toBind_1732_, lean_box(0), lean_box(0), v_getSemiring_1733_, v___f_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27(lean_object* v_m_1739_, lean_object* v_inst_1740_, lean_object* v_inst_1741_, lean_object* v_inst_1742_, lean_object* v_inst_1743_, lean_object* v_inst_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(v_inst_1740_, v_inst_1741_, v_inst_1742_, v_inst_1743_, v_inst_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0(lean_object* v_powFn_1746_, lean_object* v_s_1747_){
_start:
{
lean_object* v_id_1748_; lean_object* v_type_1749_; lean_object* v_u_1750_; lean_object* v_semiringInst_1751_; lean_object* v_addFn_x3f_1752_; lean_object* v_mulFn_x3f_1753_; lean_object* v_natCastFn_x3f_1754_; lean_object* v_natSMulFn_x3f_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1763_; 
v_id_1748_ = lean_ctor_get(v_s_1747_, 0);
v_type_1749_ = lean_ctor_get(v_s_1747_, 1);
v_u_1750_ = lean_ctor_get(v_s_1747_, 2);
v_semiringInst_1751_ = lean_ctor_get(v_s_1747_, 3);
v_addFn_x3f_1752_ = lean_ctor_get(v_s_1747_, 4);
v_mulFn_x3f_1753_ = lean_ctor_get(v_s_1747_, 5);
v_natCastFn_x3f_1754_ = lean_ctor_get(v_s_1747_, 7);
v_natSMulFn_x3f_1755_ = lean_ctor_get(v_s_1747_, 8);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_s_1747_);
if (v_isSharedCheck_1763_ == 0)
{
lean_object* v_unused_1764_; 
v_unused_1764_ = lean_ctor_get(v_s_1747_, 6);
lean_dec(v_unused_1764_);
v___x_1757_ = v_s_1747_;
v_isShared_1758_ = v_isSharedCheck_1763_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_natSMulFn_x3f_1755_);
lean_inc(v_natCastFn_x3f_1754_);
lean_inc(v_mulFn_x3f_1753_);
lean_inc(v_addFn_x3f_1752_);
lean_inc(v_semiringInst_1751_);
lean_inc(v_u_1750_);
lean_inc(v_type_1749_);
lean_inc(v_id_1748_);
lean_dec(v_s_1747_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1763_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1761_; 
v___x_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_powFn_1746_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 6, v___x_1759_);
v___x_1761_ = v___x_1757_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_id_1748_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_type_1749_);
lean_ctor_set(v_reuseFailAlloc_1762_, 2, v_u_1750_);
lean_ctor_set(v_reuseFailAlloc_1762_, 3, v_semiringInst_1751_);
lean_ctor_set(v_reuseFailAlloc_1762_, 4, v_addFn_x3f_1752_);
lean_ctor_set(v_reuseFailAlloc_1762_, 5, v_mulFn_x3f_1753_);
lean_ctor_set(v_reuseFailAlloc_1762_, 6, v___x_1759_);
lean_ctor_set(v_reuseFailAlloc_1762_, 7, v_natCastFn_x3f_1754_);
lean_ctor_set(v_reuseFailAlloc_1762_, 8, v_natSMulFn_x3f_1755_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2(lean_object* v_toPure_1765_, lean_object* v_modifySemiring_1766_, lean_object* v_toBind_1767_, lean_object* v_powFn_1768_){
_start:
{
lean_object* v___f_1769_; lean_object* v___f_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_inc_ref(v_powFn_1768_);
v___f_1769_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1769_, 0, v_powFn_1768_);
v___f_1770_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1770_, 0, v_toPure_1765_);
lean_closure_set(v___f_1770_, 1, v_powFn_1768_);
v___x_1771_ = lean_apply_1(v_modifySemiring_1766_, v___f_1769_);
v___x_1772_ = lean_apply_4(v_toBind_1767_, lean_box(0), lean_box(0), v___x_1771_, v___f_1770_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1(lean_object* v_toPure_1773_, lean_object* v_inst_1774_, lean_object* v_inst_1775_, lean_object* v_inst_1776_, lean_object* v_inst_1777_, lean_object* v_toBind_1778_, lean_object* v___f_1779_, lean_object* v_sr_1780_){
_start:
{
lean_object* v_powFn_x3f_1781_; 
v_powFn_x3f_1781_ = lean_ctor_get(v_sr_1780_, 6);
if (lean_obj_tag(v_powFn_x3f_1781_) == 1)
{
lean_object* v_val_1782_; lean_object* v___x_1783_; 
lean_inc_ref(v_powFn_x3f_1781_);
lean_dec_ref(v_sr_1780_);
lean_dec(v___f_1779_);
lean_dec(v_toBind_1778_);
lean_dec_ref(v_inst_1777_);
lean_dec_ref(v_inst_1776_);
lean_dec_ref(v_inst_1775_);
lean_dec(v_inst_1774_);
v_val_1782_ = lean_ctor_get(v_powFn_x3f_1781_, 0);
lean_inc(v_val_1782_);
lean_dec_ref_known(v_powFn_x3f_1781_, 1);
v___x_1783_ = lean_apply_2(v_toPure_1773_, lean_box(0), v_val_1782_);
return v___x_1783_;
}
else
{
lean_object* v_type_1784_; lean_object* v_u_1785_; lean_object* v_semiringInst_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec(v_toPure_1773_);
v_type_1784_ = lean_ctor_get(v_sr_1780_, 1);
lean_inc_ref(v_type_1784_);
v_u_1785_ = lean_ctor_get(v_sr_1780_, 2);
lean_inc(v_u_1785_);
v_semiringInst_1786_ = lean_ctor_get(v_sr_1780_, 3);
lean_inc_ref(v_semiringInst_1786_);
lean_dec_ref(v_sr_1780_);
v___x_1787_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_1774_, v_inst_1775_, v_inst_1776_, v_inst_1777_, v_u_1785_, v_type_1784_, v_semiringInst_1786_);
v___x_1788_ = lean_apply_4(v_toBind_1778_, lean_box(0), lean_box(0), v___x_1787_, v___f_1779_);
return v___x_1788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_){
_start:
{
lean_object* v_toApplicative_1794_; lean_object* v_toBind_1795_; lean_object* v_getSemiring_1796_; lean_object* v_modifySemiring_1797_; lean_object* v_toPure_1798_; lean_object* v___f_1799_; lean_object* v___f_1800_; lean_object* v___x_1801_; 
v_toApplicative_1794_ = lean_ctor_get(v_inst_1791_, 0);
v_toBind_1795_ = lean_ctor_get(v_inst_1791_, 1);
lean_inc_n(v_toBind_1795_, 3);
v_getSemiring_1796_ = lean_ctor_get(v_inst_1793_, 0);
lean_inc(v_getSemiring_1796_);
v_modifySemiring_1797_ = lean_ctor_get(v_inst_1793_, 1);
lean_inc(v_modifySemiring_1797_);
lean_dec_ref(v_inst_1793_);
v_toPure_1798_ = lean_ctor_get(v_toApplicative_1794_, 1);
lean_inc_n(v_toPure_1798_, 2);
v___f_1799_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1799_, 0, v_toPure_1798_);
lean_closure_set(v___f_1799_, 1, v_modifySemiring_1797_);
lean_closure_set(v___f_1799_, 2, v_toBind_1795_);
v___f_1800_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1800_, 0, v_toPure_1798_);
lean_closure_set(v___f_1800_, 1, v_inst_1789_);
lean_closure_set(v___f_1800_, 2, v_inst_1790_);
lean_closure_set(v___f_1800_, 3, v_inst_1791_);
lean_closure_set(v___f_1800_, 4, v_inst_1792_);
lean_closure_set(v___f_1800_, 5, v_toBind_1795_);
lean_closure_set(v___f_1800_, 6, v___f_1799_);
v___x_1801_ = lean_apply_4(v_toBind_1795_, lean_box(0), lean_box(0), v_getSemiring_1796_, v___f_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27(lean_object* v_m_1802_, lean_object* v_inst_1803_, lean_object* v_inst_1804_, lean_object* v_inst_1805_, lean_object* v_inst_1806_, lean_object* v_inst_1807_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(v_inst_1803_, v_inst_1804_, v_inst_1805_, v_inst_1806_, v_inst_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0(lean_object* v_natCastFn_1809_, lean_object* v_s_1810_){
_start:
{
lean_object* v_id_1811_; lean_object* v_type_1812_; lean_object* v_u_1813_; lean_object* v_semiringInst_1814_; lean_object* v_addFn_x3f_1815_; lean_object* v_mulFn_x3f_1816_; lean_object* v_powFn_x3f_1817_; lean_object* v_natSMulFn_x3f_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1826_; 
v_id_1811_ = lean_ctor_get(v_s_1810_, 0);
v_type_1812_ = lean_ctor_get(v_s_1810_, 1);
v_u_1813_ = lean_ctor_get(v_s_1810_, 2);
v_semiringInst_1814_ = lean_ctor_get(v_s_1810_, 3);
v_addFn_x3f_1815_ = lean_ctor_get(v_s_1810_, 4);
v_mulFn_x3f_1816_ = lean_ctor_get(v_s_1810_, 5);
v_powFn_x3f_1817_ = lean_ctor_get(v_s_1810_, 6);
v_natSMulFn_x3f_1818_ = lean_ctor_get(v_s_1810_, 8);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_s_1810_);
if (v_isSharedCheck_1826_ == 0)
{
lean_object* v_unused_1827_; 
v_unused_1827_ = lean_ctor_get(v_s_1810_, 7);
lean_dec(v_unused_1827_);
v___x_1820_ = v_s_1810_;
v_isShared_1821_ = v_isSharedCheck_1826_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_natSMulFn_x3f_1818_);
lean_inc(v_powFn_x3f_1817_);
lean_inc(v_mulFn_x3f_1816_);
lean_inc(v_addFn_x3f_1815_);
lean_inc(v_semiringInst_1814_);
lean_inc(v_u_1813_);
lean_inc(v_type_1812_);
lean_inc(v_id_1811_);
lean_dec(v_s_1810_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1826_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
v___x_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1822_, 0, v_natCastFn_1809_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 7, v___x_1822_);
v___x_1824_ = v___x_1820_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_id_1811_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_type_1812_);
lean_ctor_set(v_reuseFailAlloc_1825_, 2, v_u_1813_);
lean_ctor_set(v_reuseFailAlloc_1825_, 3, v_semiringInst_1814_);
lean_ctor_set(v_reuseFailAlloc_1825_, 4, v_addFn_x3f_1815_);
lean_ctor_set(v_reuseFailAlloc_1825_, 5, v_mulFn_x3f_1816_);
lean_ctor_set(v_reuseFailAlloc_1825_, 6, v_powFn_x3f_1817_);
lean_ctor_set(v_reuseFailAlloc_1825_, 7, v___x_1822_);
lean_ctor_set(v_reuseFailAlloc_1825_, 8, v_natSMulFn_x3f_1818_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2(lean_object* v_toPure_1828_, lean_object* v_modifySemiring_1829_, lean_object* v_toBind_1830_, lean_object* v_natCastFn_1831_){
_start:
{
lean_object* v___f_1832_; lean_object* v___f_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_inc_ref(v_natCastFn_1831_);
v___f_1832_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1832_, 0, v_natCastFn_1831_);
v___f_1833_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1833_, 0, v_toPure_1828_);
lean_closure_set(v___f_1833_, 1, v_natCastFn_1831_);
v___x_1834_ = lean_apply_1(v_modifySemiring_1829_, v___f_1832_);
v___x_1835_ = lean_apply_4(v_toBind_1830_, lean_box(0), lean_box(0), v___x_1834_, v___f_1833_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1(lean_object* v_toPure_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_toBind_1840_, lean_object* v___f_1841_, lean_object* v_sr_1842_){
_start:
{
lean_object* v_natCastFn_x3f_1843_; 
v_natCastFn_x3f_1843_ = lean_ctor_get(v_sr_1842_, 7);
if (lean_obj_tag(v_natCastFn_x3f_1843_) == 1)
{
lean_object* v_val_1844_; lean_object* v___x_1845_; 
lean_inc_ref(v_natCastFn_x3f_1843_);
lean_dec_ref(v_sr_1842_);
lean_dec(v___f_1841_);
lean_dec(v_toBind_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v_inst_1838_);
lean_dec(v_inst_1837_);
v_val_1844_ = lean_ctor_get(v_natCastFn_x3f_1843_, 0);
lean_inc(v_val_1844_);
lean_dec_ref_known(v_natCastFn_x3f_1843_, 1);
v___x_1845_ = lean_apply_2(v_toPure_1836_, lean_box(0), v_val_1844_);
return v___x_1845_;
}
else
{
lean_object* v_type_1846_; lean_object* v_u_1847_; lean_object* v_semiringInst_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_dec(v_toPure_1836_);
v_type_1846_ = lean_ctor_get(v_sr_1842_, 1);
lean_inc_ref(v_type_1846_);
v_u_1847_ = lean_ctor_get(v_sr_1842_, 2);
lean_inc(v_u_1847_);
v_semiringInst_1848_ = lean_ctor_get(v_sr_1842_, 3);
lean_inc_ref(v_semiringInst_1848_);
lean_dec_ref(v_sr_1842_);
v___x_1849_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_1837_, v_inst_1838_, v_inst_1839_, v_u_1847_, v_type_1846_, v_semiringInst_1848_);
v___x_1850_ = lean_apply_4(v_toBind_1840_, lean_box(0), lean_box(0), v___x_1849_, v___f_1841_);
return v___x_1850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(lean_object* v_inst_1851_, lean_object* v_inst_1852_, lean_object* v_inst_1853_, lean_object* v_inst_1854_){
_start:
{
lean_object* v_toApplicative_1855_; lean_object* v_toBind_1856_; lean_object* v_getSemiring_1857_; lean_object* v_modifySemiring_1858_; lean_object* v_toPure_1859_; lean_object* v___f_1860_; lean_object* v___f_1861_; lean_object* v___x_1862_; 
v_toApplicative_1855_ = lean_ctor_get(v_inst_1852_, 0);
v_toBind_1856_ = lean_ctor_get(v_inst_1852_, 1);
lean_inc_n(v_toBind_1856_, 3);
v_getSemiring_1857_ = lean_ctor_get(v_inst_1854_, 0);
lean_inc(v_getSemiring_1857_);
v_modifySemiring_1858_ = lean_ctor_get(v_inst_1854_, 1);
lean_inc(v_modifySemiring_1858_);
lean_dec_ref(v_inst_1854_);
v_toPure_1859_ = lean_ctor_get(v_toApplicative_1855_, 1);
lean_inc_n(v_toPure_1859_, 2);
v___f_1860_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1860_, 0, v_toPure_1859_);
lean_closure_set(v___f_1860_, 1, v_modifySemiring_1858_);
lean_closure_set(v___f_1860_, 2, v_toBind_1856_);
v___f_1861_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1), 7, 6);
lean_closure_set(v___f_1861_, 0, v_toPure_1859_);
lean_closure_set(v___f_1861_, 1, v_inst_1851_);
lean_closure_set(v___f_1861_, 2, v_inst_1852_);
lean_closure_set(v___f_1861_, 3, v_inst_1853_);
lean_closure_set(v___f_1861_, 4, v_toBind_1856_);
lean_closure_set(v___f_1861_, 5, v___f_1860_);
v___x_1862_ = lean_apply_4(v_toBind_1856_, lean_box(0), lean_box(0), v_getSemiring_1857_, v___f_1861_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27(lean_object* v_m_1863_, lean_object* v_inst_1864_, lean_object* v_inst_1865_, lean_object* v_inst_1866_, lean_object* v_inst_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(v_inst_1864_, v_inst_1865_, v_inst_1866_, v_inst_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__0(lean_object* v_toQFn_1869_, lean_object* v_s_1870_){
_start:
{
lean_object* v_toSemiring_1871_; lean_object* v_ringId_1872_; lean_object* v_commSemiringInst_1873_; lean_object* v_addRightCancelInst_x3f_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1882_; 
v_toSemiring_1871_ = lean_ctor_get(v_s_1870_, 0);
v_ringId_1872_ = lean_ctor_get(v_s_1870_, 1);
v_commSemiringInst_1873_ = lean_ctor_get(v_s_1870_, 2);
v_addRightCancelInst_x3f_1874_ = lean_ctor_get(v_s_1870_, 3);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_s_1870_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v_s_1870_, 4);
lean_dec(v_unused_1883_);
v___x_1876_ = v_s_1870_;
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_addRightCancelInst_x3f_1874_);
lean_inc(v_commSemiringInst_1873_);
lean_inc(v_ringId_1872_);
lean_inc(v_toSemiring_1871_);
lean_dec(v_s_1870_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v_toQFn_1869_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 4, v___x_1878_);
v___x_1880_ = v___x_1876_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_toSemiring_1871_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_ringId_1872_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_commSemiringInst_1873_);
lean_ctor_set(v_reuseFailAlloc_1881_, 3, v_addRightCancelInst_x3f_1874_);
lean_ctor_set(v_reuseFailAlloc_1881_, 4, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__1(lean_object* v_toPure_1884_, lean_object* v_toQFn_1885_, lean_object* v_____r_1886_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = lean_apply_2(v_toPure_1884_, lean_box(0), v_toQFn_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__2(lean_object* v_toPure_1888_, lean_object* v_modifyCommSemiring_1889_, lean_object* v_toBind_1890_, lean_object* v_toQFn_1891_){
_start:
{
lean_object* v___f_1892_; lean_object* v___f_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_inc_ref(v_toQFn_1891_);
v___f_1892_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1892_, 0, v_toQFn_1891_);
v___f_1893_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1893_, 0, v_toPure_1888_);
lean_closure_set(v___f_1893_, 1, v_toQFn_1891_);
v___x_1894_ = lean_apply_1(v_modifyCommSemiring_1889_, v___f_1892_);
v___x_1895_ = lean_apply_4(v_toBind_1890_, lean_box(0), lean_box(0), v___x_1894_, v___f_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3(lean_object* v_toPure_1904_, lean_object* v_inst_1905_, lean_object* v_toBind_1906_, lean_object* v___f_1907_, lean_object* v_s_1908_){
_start:
{
lean_object* v_toQFn_x3f_1909_; 
v_toQFn_x3f_1909_ = lean_ctor_get(v_s_1908_, 4);
if (lean_obj_tag(v_toQFn_x3f_1909_) == 1)
{
lean_object* v_val_1910_; lean_object* v___x_1911_; 
lean_inc_ref(v_toQFn_x3f_1909_);
lean_dec_ref(v_s_1908_);
lean_dec(v___f_1907_);
lean_dec(v_toBind_1906_);
lean_dec_ref(v_inst_1905_);
v_val_1910_ = lean_ctor_get(v_toQFn_x3f_1909_, 0);
lean_inc(v_val_1910_);
lean_dec_ref_known(v_toQFn_x3f_1909_, 1);
v___x_1911_ = lean_apply_2(v_toPure_1904_, lean_box(0), v_val_1910_);
return v___x_1911_;
}
else
{
lean_object* v_toSemiring_1912_; lean_object* v_canonExpr_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_toPure_1904_);
v_toSemiring_1912_ = lean_ctor_get(v_s_1908_, 0);
lean_inc_ref(v_toSemiring_1912_);
lean_dec_ref(v_s_1908_);
v_canonExpr_1913_ = lean_ctor_get(v_inst_1905_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_inst_1905_);
if (v_isSharedCheck_1929_ == 0)
{
lean_object* v_unused_1930_; 
v_unused_1930_ = lean_ctor_get(v_inst_1905_, 1);
lean_dec(v_unused_1930_);
v___x_1915_ = v_inst_1905_;
v_isShared_1916_ = v_isSharedCheck_1929_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_canonExpr_1913_);
lean_dec(v_inst_1905_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1929_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_type_1917_; lean_object* v_u_1918_; lean_object* v_semiringInst_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1923_; 
v_type_1917_ = lean_ctor_get(v_toSemiring_1912_, 1);
lean_inc_ref(v_type_1917_);
v_u_1918_ = lean_ctor_get(v_toSemiring_1912_, 2);
lean_inc(v_u_1918_);
v_semiringInst_1919_ = lean_ctor_get(v_toSemiring_1912_, 3);
lean_inc_ref(v_semiringInst_1919_);
lean_dec_ref(v_toSemiring_1912_);
v___x_1920_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3___closed__2));
v___x_1921_ = lean_box(0);
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 1);
lean_ctor_set(v___x_1915_, 1, v___x_1921_);
lean_ctor_set(v___x_1915_, 0, v_u_1918_);
v___x_1923_ = v___x_1915_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_u_1918_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1924_ = l_Lean_mkConst(v___x_1920_, v___x_1923_);
v___x_1925_ = l_Lean_mkAppB(v___x_1924_, v_type_1917_, v_semiringInst_1919_);
v___x_1926_ = lean_apply_1(v_canonExpr_1913_, v___x_1925_);
v___x_1927_ = lean_apply_4(v_toBind_1906_, lean_box(0), lean_box(0), v___x_1926_, v___f_1907_);
return v___x_1927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn___redArg(lean_object* v_inst_1931_, lean_object* v_inst_1932_, lean_object* v_inst_1933_){
_start:
{
lean_object* v_toApplicative_1934_; lean_object* v_toBind_1935_; lean_object* v_getCommSemiring_1936_; lean_object* v_modifyCommSemiring_1937_; lean_object* v_toPure_1938_; lean_object* v___f_1939_; lean_object* v___f_1940_; lean_object* v___x_1941_; 
v_toApplicative_1934_ = lean_ctor_get(v_inst_1931_, 0);
lean_inc_ref(v_toApplicative_1934_);
v_toBind_1935_ = lean_ctor_get(v_inst_1931_, 1);
lean_inc_n(v_toBind_1935_, 3);
lean_dec_ref(v_inst_1931_);
v_getCommSemiring_1936_ = lean_ctor_get(v_inst_1933_, 0);
lean_inc(v_getCommSemiring_1936_);
v_modifyCommSemiring_1937_ = lean_ctor_get(v_inst_1933_, 1);
lean_inc(v_modifyCommSemiring_1937_);
lean_dec_ref(v_inst_1933_);
v_toPure_1938_ = lean_ctor_get(v_toApplicative_1934_, 1);
lean_inc_n(v_toPure_1938_, 2);
lean_dec_ref(v_toApplicative_1934_);
v___f_1939_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1939_, 0, v_toPure_1938_);
lean_closure_set(v___f_1939_, 1, v_modifyCommSemiring_1937_);
lean_closure_set(v___f_1939_, 2, v_toBind_1935_);
v___f_1940_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getToQFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1940_, 0, v_toPure_1938_);
lean_closure_set(v___f_1940_, 1, v_inst_1932_);
lean_closure_set(v___f_1940_, 2, v_toBind_1935_);
lean_closure_set(v___f_1940_, 3, v___f_1939_);
v___x_1941_ = lean_apply_4(v_toBind_1935_, lean_box(0), lean_box(0), v_getCommSemiring_1936_, v___f_1940_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getToQFn(lean_object* v_m_1942_, lean_object* v_inst_1943_, lean_object* v_inst_1944_, lean_object* v_inst_1945_){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_Lean_Meta_Sym_Arith_getToQFn___redArg(v_inst_1943_, v_inst_1944_, v_inst_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__0(lean_object* v_addRightCancelInst_x3f_1947_, lean_object* v_s_1948_){
_start:
{
lean_object* v_toSemiring_1949_; lean_object* v_ringId_1950_; lean_object* v_commSemiringInst_1951_; lean_object* v_toQFn_x3f_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1960_; 
v_toSemiring_1949_ = lean_ctor_get(v_s_1948_, 0);
v_ringId_1950_ = lean_ctor_get(v_s_1948_, 1);
v_commSemiringInst_1951_ = lean_ctor_get(v_s_1948_, 2);
v_toQFn_x3f_1952_ = lean_ctor_get(v_s_1948_, 4);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_s_1948_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; 
v_unused_1961_ = lean_ctor_get(v_s_1948_, 3);
lean_dec(v_unused_1961_);
v___x_1954_ = v_s_1948_;
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_toQFn_x3f_1952_);
lean_inc(v_commSemiringInst_1951_);
lean_inc(v_ringId_1950_);
lean_inc(v_toSemiring_1949_);
lean_dec(v_s_1948_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1956_, 0, v_addRightCancelInst_x3f_1947_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 3, v___x_1956_);
v___x_1958_ = v___x_1954_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_toSemiring_1949_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_ringId_1950_);
lean_ctor_set(v_reuseFailAlloc_1959_, 2, v_commSemiringInst_1951_);
lean_ctor_set(v_reuseFailAlloc_1959_, 3, v___x_1956_);
lean_ctor_set(v_reuseFailAlloc_1959_, 4, v_toQFn_x3f_1952_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__1(lean_object* v_toPure_1962_, lean_object* v_addRightCancelInst_x3f_1963_, lean_object* v_____r_1964_){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_apply_2(v_toPure_1962_, lean_box(0), v_addRightCancelInst_x3f_1963_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__2(lean_object* v_toPure_1966_, lean_object* v_modifyCommSemiring_1967_, lean_object* v_toBind_1968_, lean_object* v_addRightCancelInst_x3f_1969_){
_start:
{
lean_object* v___f_1970_; lean_object* v___f_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
lean_inc(v_addRightCancelInst_x3f_1969_);
v___f_1970_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1970_, 0, v_addRightCancelInst_x3f_1969_);
v___f_1971_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1971_, 0, v_toPure_1966_);
lean_closure_set(v___f_1971_, 1, v_addRightCancelInst_x3f_1969_);
v___x_1972_ = lean_apply_1(v_modifyCommSemiring_1967_, v___f_1970_);
v___x_1973_ = lean_apply_4(v_toBind_1968_, lean_box(0), lean_box(0), v___x_1972_, v___f_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__3(lean_object* v___f_1974_, lean_object* v_addRightCancelInst_x3f_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = lean_apply_1(v___f_1974_, v_addRightCancelInst_x3f_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5(lean_object* v___x_1982_, lean_object* v_type_1983_, lean_object* v_synthInstance_x3f_1984_, lean_object* v_toBind_1985_, lean_object* v___f_1986_, lean_object* v_toPure_1987_, lean_object* v___f_1988_, lean_object* v_____x_1989_){
_start:
{
if (lean_obj_tag(v_____x_1989_) == 1)
{
lean_object* v_val_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec(v___f_1988_);
lean_dec(v_toPure_1987_);
v_val_1990_ = lean_ctor_get(v_____x_1989_, 0);
lean_inc(v_val_1990_);
lean_dec_ref_known(v_____x_1989_, 1);
v___x_1991_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5___closed__1));
v___x_1992_ = l_Lean_mkConst(v___x_1991_, v___x_1982_);
v___x_1993_ = l_Lean_mkAppB(v___x_1992_, v_type_1983_, v_val_1990_);
v___x_1994_ = lean_apply_1(v_synthInstance_x3f_1984_, v___x_1993_);
v___x_1995_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_1994_, v___f_1986_);
return v___x_1995_;
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
lean_dec(v_____x_1989_);
lean_dec(v___f_1986_);
lean_dec(v_synthInstance_x3f_1984_);
lean_dec_ref(v_type_1983_);
lean_dec(v___x_1982_);
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_apply_2(v_toPure_1987_, lean_box(0), v___x_1996_);
v___x_1998_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_1997_, v___f_1988_);
return v___x_1998_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4(lean_object* v_toPure_2002_, lean_object* v_inst_2003_, lean_object* v_toBind_2004_, lean_object* v___f_2005_, lean_object* v___f_2006_, lean_object* v_s_2007_){
_start:
{
lean_object* v_addRightCancelInst_x3f_2008_; 
v_addRightCancelInst_x3f_2008_ = lean_ctor_get(v_s_2007_, 3);
if (lean_obj_tag(v_addRightCancelInst_x3f_2008_) == 1)
{
lean_object* v_val_2009_; lean_object* v___x_2010_; 
lean_inc_ref(v_addRightCancelInst_x3f_2008_);
lean_dec_ref(v_s_2007_);
lean_dec(v___f_2006_);
lean_dec(v___f_2005_);
lean_dec(v_toBind_2004_);
lean_dec_ref(v_inst_2003_);
v_val_2009_ = lean_ctor_get(v_addRightCancelInst_x3f_2008_, 0);
lean_inc(v_val_2009_);
lean_dec_ref_known(v_addRightCancelInst_x3f_2008_, 1);
v___x_2010_ = lean_apply_2(v_toPure_2002_, lean_box(0), v_val_2009_);
return v___x_2010_;
}
else
{
lean_object* v_toSemiring_2011_; lean_object* v_synthInstance_x3f_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2028_; 
v_toSemiring_2011_ = lean_ctor_get(v_s_2007_, 0);
lean_inc_ref(v_toSemiring_2011_);
lean_dec_ref(v_s_2007_);
v_synthInstance_x3f_2012_ = lean_ctor_get(v_inst_2003_, 1);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_inst_2003_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; 
v_unused_2029_ = lean_ctor_get(v_inst_2003_, 0);
lean_dec(v_unused_2029_);
v___x_2014_ = v_inst_2003_;
v_isShared_2015_ = v_isSharedCheck_2028_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_synthInstance_x3f_2012_);
lean_dec(v_inst_2003_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2028_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v_type_2016_; lean_object* v_u_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2021_; 
v_type_2016_ = lean_ctor_get(v_toSemiring_2011_, 1);
lean_inc_ref(v_type_2016_);
v_u_2017_ = lean_ctor_get(v_toSemiring_2011_, 2);
lean_inc(v_u_2017_);
lean_dec_ref(v_toSemiring_2011_);
v___x_2018_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4___closed__1));
v___x_2019_ = lean_box(0);
if (v_isShared_2015_ == 0)
{
lean_ctor_set_tag(v___x_2014_, 1);
lean_ctor_set(v___x_2014_, 1, v___x_2019_);
lean_ctor_set(v___x_2014_, 0, v_u_2017_);
v___x_2021_ = v___x_2014_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_u_2017_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___f_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_inc(v_toBind_2004_);
lean_inc(v_synthInstance_x3f_2012_);
lean_inc_ref(v_type_2016_);
lean_inc_ref(v___x_2021_);
v___f_2022_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__5), 8, 7);
lean_closure_set(v___f_2022_, 0, v___x_2021_);
lean_closure_set(v___f_2022_, 1, v_type_2016_);
lean_closure_set(v___f_2022_, 2, v_synthInstance_x3f_2012_);
lean_closure_set(v___f_2022_, 3, v_toBind_2004_);
lean_closure_set(v___f_2022_, 4, v___f_2005_);
lean_closure_set(v___f_2022_, 5, v_toPure_2002_);
lean_closure_set(v___f_2022_, 6, v___f_2006_);
v___x_2023_ = l_Lean_mkConst(v___x_2018_, v___x_2021_);
v___x_2024_ = l_Lean_Expr_app___override(v___x_2023_, v_type_2016_);
v___x_2025_ = lean_apply_1(v_synthInstance_x3f_2012_, v___x_2024_);
v___x_2026_ = lean_apply_4(v_toBind_2004_, lean_box(0), lean_box(0), v___x_2025_, v___f_2022_);
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg(lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_inst_2032_){
_start:
{
lean_object* v_toApplicative_2033_; lean_object* v_toBind_2034_; lean_object* v_getCommSemiring_2035_; lean_object* v_modifyCommSemiring_2036_; lean_object* v_toPure_2037_; lean_object* v___f_2038_; lean_object* v___f_2039_; lean_object* v___f_2040_; lean_object* v___x_2041_; 
v_toApplicative_2033_ = lean_ctor_get(v_inst_2030_, 0);
lean_inc_ref(v_toApplicative_2033_);
v_toBind_2034_ = lean_ctor_get(v_inst_2030_, 1);
lean_inc_n(v_toBind_2034_, 3);
lean_dec_ref(v_inst_2030_);
v_getCommSemiring_2035_ = lean_ctor_get(v_inst_2032_, 0);
lean_inc(v_getCommSemiring_2035_);
v_modifyCommSemiring_2036_ = lean_ctor_get(v_inst_2032_, 1);
lean_inc(v_modifyCommSemiring_2036_);
lean_dec_ref(v_inst_2032_);
v_toPure_2037_ = lean_ctor_get(v_toApplicative_2033_, 1);
lean_inc_n(v_toPure_2037_, 2);
lean_dec_ref(v_toApplicative_2033_);
v___f_2038_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2038_, 0, v_toPure_2037_);
lean_closure_set(v___f_2038_, 1, v_modifyCommSemiring_2036_);
lean_closure_set(v___f_2038_, 2, v_toBind_2034_);
v___f_2039_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2039_, 0, v___f_2038_);
lean_inc_ref(v___f_2039_);
v___f_2040_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg___lam__4), 6, 5);
lean_closure_set(v___f_2040_, 0, v_toPure_2037_);
lean_closure_set(v___f_2040_, 1, v_inst_2031_);
lean_closure_set(v___f_2040_, 2, v_toBind_2034_);
lean_closure_set(v___f_2040_, 3, v___f_2039_);
lean_closure_set(v___f_2040_, 4, v___f_2039_);
v___x_2041_ = lean_apply_4(v_toBind_2034_, lean_box(0), lean_box(0), v_getCommSemiring_2035_, v___f_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f(lean_object* v_m_2042_, lean_object* v_inst_2043_, lean_object* v_inst_2044_, lean_object* v_inst_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_Meta_Sym_Arith_getAddRightCancelInst_x3f___redArg(v_inst_2043_, v_inst_2044_, v_inst_2045_);
return v___x_2046_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_MonadRing(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_MonadSemiring(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Arith_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Arith_MonadRing(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_MonadSemiring(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Arith_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_Functions(builtin);
}
#ifdef __cplusplus
}
#endif
