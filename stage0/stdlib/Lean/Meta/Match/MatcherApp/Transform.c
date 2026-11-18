// Lean compiler output
// Module: Lean.Meta.Match.MatcherApp.Transform
// Imports: public import Lean.Meta.Match.MatcherApp.Basic public import Lean.Meta.Match.MatchEqsExt public import Lean.Meta.Match.AltTelescopes public import Lean.Meta.AppBuilder import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Refl
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
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_empty___redArg();
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_forallBoundedTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unexpected type at MatcherApp.addArg"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "unexpected matcher application, insufficient number of parameters in alternative"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "unexpected matcher application, alternative must have "};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "failed to add argument to matcher application, argument type was not refined by `casesOn`"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to add argument to matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "unexpected matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to transfer argument through matcher application, alt type must be telescope with #"};
static const lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "failed to transfer argument through matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "failed to transfer argument through matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Match.MatcherApp.Transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.MatcherApp.transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: ys.size == splitterAltInfo.numFields\n        "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: altInfo.numOverlaps = 0\n      "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "failed to transform matcher, type error when constructing splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "failed to transform matcher, type error when constructing new motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "failed to transform matcher, type error when constructing new pre-splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nfailed with"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matcher "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " has no MatchInfo found"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Cannot close goal after splitting: "};
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of alternative "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " still depends on "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object* v_e_19_, lean_object* v_maxFVars_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; uint8_t v___x_29_; uint8_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_21_);
v___x_29_ = 1;
v___x_30_ = 0;
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v_maxFVars_20_);
v___x_32_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_19_, v___x_29_, v___x_30_, v___x_29_, v___x_30_, v___x_31_, v___f_28_, v_cleanupAnnotations_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec_ref_known(v___x_31_, 1);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_40_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_40_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_38_; 
if (v_isShared_36_ == 0)
{
v___x_38_ = v___x_35_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_33_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
else
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_48_; 
v_a_41_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_48_ == 0)
{
v___x_43_ = v___x_32_;
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_32_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_46_; 
if (v_isShared_44_ == 0)
{
v___x_46_ = v___x_43_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_41_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object* v_e_49_, lean_object* v_maxFVars_50_, lean_object* v_k_51_, lean_object* v_cleanupAnnotations_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_58_ = lean_unbox(v_cleanupAnnotations_52_);
v_res_59_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_e_49_, v_maxFVars_50_, v_k_51_, v_cleanupAnnotations_boxed_58_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_e_61_, lean_object* v_maxFVars_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_e_61_, v_maxFVars_62_, v_k_63_, v_cleanupAnnotations_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object* v_00_u03b1_71_, lean_object* v_e_72_, lean_object* v_maxFVars_73_, lean_object* v_k_74_, lean_object* v_cleanupAnnotations_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_81_; lean_object* v_res_82_; 
v_cleanupAnnotations_boxed_81_ = lean_unbox(v_cleanupAnnotations_75_);
v_res_82_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(v_00_u03b1_71_, v_e_72_, v_maxFVars_73_, v_k_74_, v_cleanupAnnotations_boxed_81_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object* v_xs_83_, lean_object* v_alt_84_, uint8_t v___x_85_, uint8_t v_refined_86_, lean_object* v_unrefinedArgType_87_, lean_object* v_binderType_88_, lean_object* v_x_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
uint8_t v_refined_96_; 
if (v_refined_86_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Meta_isExprDefEq(v_unrefinedArgType_87_, v_binderType_88_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; uint8_t v___x_121_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref_known(v___x_119_, 1);
v___x_121_ = lean_unbox(v_a_120_);
lean_dec(v_a_120_);
if (v___x_121_ == 0)
{
v_refined_96_ = v___x_85_;
goto v___jp_95_;
}
else
{
v_refined_96_ = v_refined_86_;
goto v___jp_95_;
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_x_89_);
lean_dec_ref(v_alt_84_);
lean_dec_ref(v_xs_83_);
v_a_122_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_119_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_119_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
else
{
lean_dec_ref(v_binderType_88_);
lean_dec_ref(v_unrefinedArgType_87_);
v_refined_96_ = v_refined_86_;
goto v___jp_95_;
}
v___jp_95_:
{
lean_object* v___x_97_; uint8_t v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_array_push(v_xs_83_, v_x_89_);
v___x_98_ = 0;
v___x_99_ = 1;
v___x_100_ = l_Lean_Meta_mkLambdaFVars(v___x_97_, v_alt_84_, v___x_98_, v___x_85_, v___x_98_, v___x_85_, v___x_99_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref(v___x_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_110_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_105_ = lean_box(v_refined_96_);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v_a_101_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_106_);
v___x_108_ = v___x_103_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_100_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_100_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object* v_xs_130_, lean_object* v_alt_131_, lean_object* v___x_132_, lean_object* v_refined_133_, lean_object* v_unrefinedArgType_134_, lean_object* v_binderType_135_, lean_object* v_x_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
uint8_t v___x_3913__boxed_142_; uint8_t v_refined_boxed_143_; lean_object* v_res_144_; 
v___x_3913__boxed_142_ = lean_unbox(v___x_132_);
v_refined_boxed_143_ = lean_unbox(v_refined_133_);
v_res_144_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(v_xs_130_, v_alt_131_, v___x_3913__boxed_142_, v_refined_boxed_143_, v_unrefinedArgType_134_, v_binderType_135_, v_x_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; lean_object* v_env_152_; uint8_t v___x_153_; lean_object* v_env_154_; lean_object* v___x_155_; lean_object* v_toCold_156_; lean_object* v_mctx_157_; lean_object* v_lctx_158_; lean_object* v_options_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_151_ = lean_st_ref_get(v___y_149_);
v_env_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_env_152_);
lean_dec(v___x_151_);
v___x_153_ = 0;
v_env_154_ = l_Lean_Environment_setRecordingDeps(v_env_152_, v___x_153_);
v___x_155_ = lean_st_ref_get(v___y_147_);
v_toCold_156_ = lean_ctor_get(v___y_148_, 0);
v_mctx_157_ = lean_ctor_get(v___x_155_, 0);
lean_inc_ref(v_mctx_157_);
lean_dec(v___x_155_);
v_lctx_158_ = lean_ctor_get(v___y_146_, 2);
v_options_159_ = lean_ctor_get(v_toCold_156_, 2);
lean_inc_ref(v_options_159_);
lean_inc_ref(v_lctx_158_);
v___x_160_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_160_, 0, v_env_154_);
lean_ctor_set(v___x_160_, 1, v_mctx_157_);
lean_ctor_set(v___x_160_, 2, v_lctx_158_);
lean_ctor_set(v___x_160_, 3, v_options_159_);
v___x_161_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v_msgData_145_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object* v_msgData_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msgData_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_ref_176_; lean_object* v___x_177_; lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_186_; 
v_ref_176_ = lean_ctor_get(v___y_173_, 2);
v___x_177_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msg_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_186_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_182_; lean_object* v___x_184_; 
lean_inc(v_ref_176_);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v_ref_176_);
lean_ctor_set(v___x_182_, 1, v_a_178_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 1);
lean_ctor_set(v___x_180_, 0, v___x_182_);
v___x_184_ = v___x_180_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object* v_msg_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0));
v___x_196_ = l_Lean_stringToMessageData(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2));
v___x_199_ = l_Lean_stringToMessageData(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4));
v___x_202_ = l_Lean_stringToMessageData(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6));
v___x_205_ = l_Lean_stringToMessageData(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t v___x_206_, uint8_t v_refined_207_, lean_object* v_unrefinedArgType_208_, lean_object* v_binderType_209_, lean_object* v_numParams_210_, lean_object* v_xs_211_, lean_object* v_alt_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v_a_223_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_array_get_size(v_xs_211_);
v___x_271_ = lean_nat_dec_eq(v___x_270_, v_numParams_210_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_272_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5);
v___x_273_ = l_Nat_reprFast(v_numParams_210_);
v___x_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
v___x_275_ = l_Lean_MessageData_ofFormat(v___x_274_);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_272_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7);
v___x_278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_278_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_dec_ref_known(v___x_279_, 1);
goto v___jp_243_;
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_binderType_209_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
else
{
lean_dec(v_numParams_210_);
goto v___jp_243_;
}
v___jp_218_:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_Meta_whnfForall(v_a_223_, v___y_221_, v___y_222_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_a_225_) == 7)
{
lean_object* v_binderName_226_; lean_object* v_binderType_227_; uint8_t v_binderInfo_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___f_231_; lean_object* v___x_232_; 
v_binderName_226_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_binderName_226_);
v_binderType_227_ = lean_ctor_get(v_a_225_, 1);
lean_inc_ref_n(v_binderType_227_, 2);
v_binderInfo_228_ = lean_ctor_get_uint8(v_a_225_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_225_, 3);
v___x_229_ = lean_box(v___x_206_);
v___x_230_ = lean_box(v_refined_207_);
v___f_231_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed), 12, 6);
lean_closure_set(v___f_231_, 0, v_xs_211_);
lean_closure_set(v___f_231_, 1, v_alt_212_);
lean_closure_set(v___f_231_, 2, v___x_229_);
lean_closure_set(v___f_231_, 3, v___x_230_);
lean_closure_set(v___f_231_, 4, v_unrefinedArgType_208_);
lean_closure_set(v___f_231_, 5, v_binderType_227_);
v___x_232_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_226_, v_binderInfo_228_, v_binderType_227_, v___f_231_, v___y_221_, v___y_222_, v___y_219_, v___y_220_);
return v___x_232_;
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v_a_225_);
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v___x_233_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1);
v___x_234_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_233_, v___y_221_, v___y_222_, v___y_219_, v___y_220_);
return v___x_234_;
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_235_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_224_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_224_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
v___jp_243_:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Meta_instantiateForall(v_binderType_209_, v_xs_211_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___y_219_ = v___y_215_;
v___y_220_ = v___y_216_;
v___y_221_ = v___y_213_;
v___y_222_ = v___y_214_;
v_a_223_ = v_a_245_;
goto v___jp_218_;
}
else
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_269_; 
v_a_246_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_269_ == 0)
{
v___x_248_ = v___x_244_;
v_isShared_249_ = v_isSharedCheck_269_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_269_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
uint8_t v___x_250_; 
v___x_250_ = l_Lean_Exception_isInterrupt(v_a_246_);
if (v___x_250_ == 0)
{
uint8_t v___x_251_; 
lean_inc(v_a_246_);
v___x_251_ = l_Lean_Exception_isRuntime(v_a_246_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_248_);
lean_dec(v_a_246_);
v___x_252_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_253_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_252_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
lean_dec_ref_known(v___x_253_, 1);
v___y_219_ = v___y_215_;
v___y_220_ = v___y_216_;
v___y_221_ = v___y_213_;
v___y_222_ = v___y_214_;
v_a_223_ = v_a_254_;
goto v___jp_218_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_255_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_253_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
else
{
lean_object* v___x_264_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
if (v_isShared_249_ == 0)
{
v___x_264_ = v___x_248_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_246_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
else
{
lean_object* v___x_267_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
if (v_isShared_249_ == 0)
{
v___x_267_ = v___x_248_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_246_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object* v___x_288_, lean_object* v_refined_289_, lean_object* v_unrefinedArgType_290_, lean_object* v_binderType_291_, lean_object* v_numParams_292_, lean_object* v_xs_293_, lean_object* v_alt_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v___x_4089__boxed_300_; uint8_t v_refined_boxed_301_; lean_object* v_res_302_; 
v___x_4089__boxed_300_ = lean_unbox(v___x_288_);
v_refined_boxed_301_ = lean_unbox(v_refined_289_);
v_res_302_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(v___x_4089__boxed_300_, v_refined_boxed_301_, v_unrefinedArgType_290_, v_binderType_291_, v_numParams_292_, v_xs_293_, v_alt_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_302_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object* v_unrefinedArgType_306_, lean_object* v_typeNew_307_, lean_object* v_altNumParams_308_, lean_object* v_alts_309_, uint8_t v_refined_310_, lean_object* v_i_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_array_get_size(v_alts_309_);
v___x_318_ = lean_nat_dec_lt(v_i_311_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec(v_i_311_);
lean_dec_ref(v_typeNew_307_);
lean_dec_ref(v_unrefinedArgType_306_);
if (v_refined_310_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec_ref(v_alts_309_);
v___x_319_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1);
v___x_320_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_319_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; 
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_alts_309_);
return v___x_321_;
}
}
else
{
lean_object* v___x_322_; lean_object* v_alt_323_; lean_object* v_numParams_324_; lean_object* v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(0u);
v_alt_323_ = lean_array_fget_borrowed(v_alts_309_, v_i_311_);
v_numParams_324_ = lean_array_get_borrowed(v___x_322_, v_altNumParams_308_, v_i_311_);
v___x_325_ = l_Lean_Meta_whnfD(v_typeNew_307_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v___x_325_, 1);
if (lean_obj_tag(v_a_326_) == 7)
{
lean_object* v_binderType_327_; lean_object* v_body_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___f_331_; uint8_t v___x_332_; lean_object* v___x_333_; 
v_binderType_327_ = lean_ctor_get(v_a_326_, 1);
lean_inc_ref(v_binderType_327_);
v_body_328_ = lean_ctor_get(v_a_326_, 2);
lean_inc_ref(v_body_328_);
lean_dec_ref_known(v_a_326_, 3);
v___x_329_ = lean_box(v___x_318_);
v___x_330_ = lean_box(v_refined_310_);
lean_inc_n(v_numParams_324_, 2);
lean_inc_ref(v_unrefinedArgType_306_);
v___f_331_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed), 12, 5);
lean_closure_set(v___f_331_, 0, v___x_329_);
lean_closure_set(v___f_331_, 1, v___x_330_);
lean_closure_set(v___f_331_, 2, v_unrefinedArgType_306_);
lean_closure_set(v___f_331_, 3, v_binderType_327_);
lean_closure_set(v___f_331_, 4, v_numParams_324_);
v___x_332_ = 0;
lean_inc(v_alt_323_);
v___x_333_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_alt_323_, v_numParams_324_, v___f_331_, v___x_332_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v_fst_335_ = lean_ctor_get(v_a_334_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_a_334_, 1);
lean_inc(v_snd_336_);
lean_dec(v_a_334_);
v___x_337_ = lean_expr_instantiate1(v_body_328_, v_fst_335_);
lean_dec_ref(v_body_328_);
v___x_338_ = lean_array_fset(v_alts_309_, v_i_311_, v_fst_335_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_i_311_, v___x_339_);
lean_dec(v_i_311_);
v___x_341_ = lean_unbox(v_snd_336_);
lean_dec(v_snd_336_);
v_typeNew_307_ = v___x_337_;
v_alts_309_ = v___x_338_;
v_refined_310_ = v___x_341_;
v_i_311_ = v___x_340_;
goto _start;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_body_328_);
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v_a_343_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_333_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_333_);
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
else
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v_a_326_);
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v___x_351_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1);
v___x_352_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_351_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
return v___x_352_;
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v_a_353_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_325_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_325_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object* v_unrefinedArgType_361_, lean_object* v_typeNew_362_, lean_object* v_altNumParams_363_, lean_object* v_alts_364_, lean_object* v_refined_365_, lean_object* v_i_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
uint8_t v_refined_boxed_372_; lean_object* v_res_373_; 
v_refined_boxed_372_ = lean_unbox(v_refined_365_);
v_res_373_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v_unrefinedArgType_361_, v_typeNew_362_, v_altNumParams_363_, v_alts_364_, v_refined_boxed_372_, v_i_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec_ref(v_altNumParams_363_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object* v_00_u03b1_374_, lean_object* v_msg_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object* v_00_u03b1_382_, lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(v_00_u03b1_382_, v_msg_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object* v_e_390_, lean_object* v_k_391_, uint8_t v_cleanupAnnotations_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___f_398_; uint8_t v___x_399_; uint8_t v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___f_398_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_398_, 0, v_k_391_);
v___x_399_ = 1;
v___x_400_ = 0;
v___x_401_ = lean_box(0);
v___x_402_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_390_, v___x_399_, v___x_400_, v___x_399_, v___x_400_, v___x_401_, v___f_398_, v_cleanupAnnotations_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
v_a_411_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_402_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_402_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object* v_e_419_, lean_object* v_k_420_, lean_object* v_cleanupAnnotations_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_427_; lean_object* v_res_428_; 
v_cleanupAnnotations_boxed_427_ = lean_unbox(v_cleanupAnnotations_421_);
v_res_428_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_419_, v_k_420_, v_cleanupAnnotations_boxed_427_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object* v_00_u03b1_429_, lean_object* v_e_430_, lean_object* v_k_431_, uint8_t v_cleanupAnnotations_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_430_, v_k_431_, v_cleanupAnnotations_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object* v_00_u03b1_439_, lean_object* v_e_440_, lean_object* v_k_441_, lean_object* v_cleanupAnnotations_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_448_; lean_object* v_res_449_; 
v_cleanupAnnotations_boxed_448_ = lean_unbox(v_cleanupAnnotations_442_);
v_res_449_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(v_00_u03b1_439_, v_e_440_, v_k_441_, v_cleanupAnnotations_boxed_448_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object* v___x_450_, lean_object* v_motiveArgs_451_, lean_object* v_x_452_, lean_object* v_x_453_){
_start:
{
lean_object* v_zero_454_; uint8_t v_isZero_455_; 
v_zero_454_ = lean_unsigned_to_nat(0u);
v_isZero_455_ = lean_nat_dec_eq(v_x_452_, v_zero_454_);
if (v_isZero_455_ == 1)
{
lean_dec(v_x_452_);
return v_x_453_;
}
else
{
lean_object* v_one_456_; lean_object* v_n_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v_one_456_ = lean_unsigned_to_nat(1u);
v_n_457_ = lean_nat_sub(v_x_452_, v_one_456_);
lean_dec(v_x_452_);
v___x_458_ = lean_array_fget_borrowed(v___x_450_, v_n_457_);
v___x_459_ = l_Lean_Expr_isFVar(v___x_458_);
if (v___x_459_ == 0)
{
v_x_452_ = v_n_457_;
goto _start;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = l_Lean_instInhabitedExpr;
v___x_462_ = lean_array_get_borrowed(v___x_461_, v_motiveArgs_451_, v_n_457_);
lean_inc(v___x_458_);
v___x_463_ = l_Lean_Expr_replaceFVar(v_x_453_, v___x_458_, v___x_462_);
lean_dec_ref(v_x_453_);
v_x_452_ = v_n_457_;
v_x_453_ = v___x_463_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object* v___x_465_, lean_object* v_motiveArgs_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_465_, v_motiveArgs_466_, v_x_467_, v_x_468_);
lean_dec_ref(v_motiveArgs_466_);
lean_dec_ref(v___x_465_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object* v___x_470_, lean_object* v_motiveArgs_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_zero_474_; uint8_t v_isZero_475_; 
v_zero_474_ = lean_unsigned_to_nat(0u);
v_isZero_475_ = lean_nat_dec_eq(v_x_472_, v_zero_474_);
if (v_isZero_475_ == 1)
{
return v_x_473_;
}
else
{
lean_object* v_one_476_; lean_object* v_n_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_one_476_ = lean_unsigned_to_nat(1u);
v_n_477_ = lean_nat_sub(v_x_472_, v_one_476_);
v___x_478_ = lean_array_fget_borrowed(v___x_470_, v_n_477_);
v___x_479_ = l_Lean_Expr_isFVar(v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
v___x_480_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_470_, v_motiveArgs_471_, v_n_477_, v_x_473_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_481_ = l_Lean_instInhabitedExpr;
v___x_482_ = lean_array_get_borrowed(v___x_481_, v_motiveArgs_471_, v_n_477_);
lean_inc(v___x_478_);
v___x_483_ = l_Lean_Expr_replaceFVar(v_x_473_, v___x_478_, v___x_482_);
lean_dec_ref(v_x_473_);
v___x_484_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_470_, v_motiveArgs_471_, v_n_477_, v___x_483_);
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object* v___x_485_, lean_object* v_motiveArgs_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v___x_485_, v_motiveArgs_486_, v_x_487_, v_x_488_);
lean_dec(v_x_487_);
lean_dec_ref(v_motiveArgs_486_);
lean_dec_ref(v___x_485_);
return v_res_489_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0));
v___x_492_ = l_Lean_stringToMessageData(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2));
v___x_495_ = l_Lean_stringToMessageData(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4));
v___x_498_ = l_Lean_stringToMessageData(v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object* v_matcherApp_499_, lean_object* v_e_500_, lean_object* v_discrs_501_, lean_object* v_toMatcherInfo_502_, lean_object* v_matcherName_503_, lean_object* v_alts_504_, lean_object* v_params_505_, lean_object* v_remaining_506_, lean_object* v_matcherLevels_507_, lean_object* v_motiveArgs_508_, lean_object* v_motiveBody_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
uint8_t v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v_matcherLevels_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_659_ = lean_array_get_size(v_motiveArgs_508_);
v___x_660_ = lean_array_get_size(v_discrs_501_);
v___x_661_ = lean_nat_dec_eq(v___x_659_, v___x_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_motiveBody_509_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec(v_matcherName_503_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v___x_662_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_663_ = l_Nat_reprFast(v___x_660_);
v___x_664_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
v___x_665_ = l_Lean_MessageData_ofFormat(v___x_664_);
v___x_666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_662_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_668_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
v___y_619_ = v___y_510_;
v___y_620_ = v___y_511_;
v___y_621_ = v___y_512_;
v___y_622_ = v___y_513_;
goto v___jp_618_;
}
v___jp_515_:
{
lean_object* v___x_531_; 
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
v___x_531_ = lean_infer_type(v___y_520_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v___x_533_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_499_);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v___y_524_, v_a_532_, v___x_533_, v___y_518_, v___y_516_, v___x_534_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec_ref(v___x_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_548_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_548_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_mk_empty_array_with_capacity(v___x_540_);
v___x_542_ = lean_array_push(v___x_541_, v_e_500_);
v___x_543_ = l_Array_append___redArg(v___x_542_, v___y_526_);
v___x_544_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_544_, 0, v___y_523_);
lean_ctor_set(v___x_544_, 1, v___y_517_);
lean_ctor_set(v___x_544_, 2, v___y_525_);
lean_ctor_set(v___x_544_, 3, v___y_521_);
lean_ctor_set(v___x_544_, 4, v___y_519_);
lean_ctor_set(v___x_544_, 5, v___y_522_);
lean_ctor_set(v___x_544_, 6, v_a_536_);
lean_ctor_set(v___x_544_, 7, v___x_543_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_544_);
v___x_546_ = v___x_538_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v___y_525_);
lean_dec_ref(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_517_);
lean_dec_ref(v_e_500_);
v_a_549_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_535_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_535_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
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
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_557_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_531_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_531_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
v___jp_565_:
{
uint8_t v___x_579_; uint8_t v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; 
v___x_579_ = 0;
v___x_580_ = 1;
v___x_581_ = 1;
v___x_582_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_508_, v___y_568_, v___x_579_, v___x_580_, v___x_579_, v___x_580_, v___x_581_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc_n(v_a_583_, 2);
lean_dec_ref_known(v___x_582_, 1);
lean_inc_ref(v_matcherLevels_574_);
v___x_584_ = lean_array_to_list(v_matcherLevels_574_);
lean_inc(v___y_566_);
v___x_585_ = l_Lean_mkConst(v___y_566_, v___x_584_);
v___x_586_ = l_Lean_mkAppN(v___x_585_, v___y_569_);
v___x_587_ = l_Lean_Expr_app___override(v___x_586_, v_a_583_);
v___x_588_ = l_Lean_mkAppN(v___x_587_, v___y_572_);
lean_inc_ref(v___x_588_);
v___x_589_ = l_Lean_Meta_isTypeCorrect(v___x_588_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; uint8_t v___x_591_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = lean_unbox(v_a_590_);
lean_dec(v_a_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v___x_588_);
lean_dec(v_a_583_);
lean_dec_ref(v_matcherLevels_574_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v___x_592_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1);
v___x_593_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_592_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
else
{
v___y_516_ = v___x_579_;
v___y_517_ = v___y_566_;
v___y_518_ = v___y_567_;
v___y_519_ = v_a_583_;
v___y_520_ = v___x_588_;
v___y_521_ = v___y_569_;
v___y_522_ = v___y_572_;
v___y_523_ = v___y_571_;
v___y_524_ = v___y_570_;
v___y_525_ = v_matcherLevels_574_;
v___y_526_ = v___y_573_;
v___y_527_ = v___y_575_;
v___y_528_ = v___y_576_;
v___y_529_ = v___y_577_;
v___y_530_ = v___y_578_;
goto v___jp_515_;
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v___x_588_);
lean_dec(v_a_583_);
lean_dec_ref(v_matcherLevels_574_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_602_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_589_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_589_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v_matcherLevels_574_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_610_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_582_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_582_);
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
v___jp_618_:
{
lean_object* v___x_623_; 
lean_inc(v___y_622_);
lean_inc_ref(v___y_621_);
lean_inc(v___y_620_);
lean_inc_ref(v___y_619_);
lean_inc_ref(v_e_500_);
v___x_623_ = lean_infer_type(v_e_500_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc_n(v_a_624_, 2);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_array_get_size(v_discrs_501_);
v___x_626_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v_discrs_501_, v_motiveArgs_508_, v___x_625_, v_a_624_);
v___x_627_ = l_Lean_mkArrow(v___x_626_, v_motiveBody_509_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_uElimPos_x3f_628_; 
v_uElimPos_x3f_628_ = lean_ctor_get(v_toMatcherInfo_502_, 3);
if (lean_obj_tag(v_uElimPos_x3f_628_) == 0)
{
lean_object* v_a_629_; 
v_a_629_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_627_, 1);
v___y_566_ = v_matcherName_503_;
v___y_567_ = v_alts_504_;
v___y_568_ = v_a_629_;
v___y_569_ = v_params_505_;
v___y_570_ = v_a_624_;
v___y_571_ = v_toMatcherInfo_502_;
v___y_572_ = v_discrs_501_;
v___y_573_ = v_remaining_506_;
v_matcherLevels_574_ = v_matcherLevels_507_;
v___y_575_ = v___y_619_;
v___y_576_ = v___y_620_;
v___y_577_ = v___y_621_;
v___y_578_ = v___y_622_;
goto v___jp_565_;
}
else
{
lean_object* v_a_630_; lean_object* v_val_631_; lean_object* v___x_632_; 
v_a_630_ = lean_ctor_get(v___x_627_, 0);
lean_inc_n(v_a_630_, 2);
lean_dec_ref_known(v___x_627_, 1);
v_val_631_ = lean_ctor_get(v_uElimPos_x3f_628_, 0);
v___x_632_ = l_Lean_Meta_getLevel(v_a_630_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = lean_array_set(v_matcherLevels_507_, v_val_631_, v_a_633_);
v___y_566_ = v_matcherName_503_;
v___y_567_ = v_alts_504_;
v___y_568_ = v_a_630_;
v___y_569_ = v_params_505_;
v___y_570_ = v_a_624_;
v___y_571_ = v_toMatcherInfo_502_;
v___y_572_ = v_discrs_501_;
v___y_573_ = v_remaining_506_;
v_matcherLevels_574_ = v___x_634_;
v___y_575_ = v___y_619_;
v___y_576_ = v___y_620_;
v___y_577_ = v___y_621_;
v___y_578_ = v___y_622_;
goto v___jp_565_;
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec(v_a_630_);
lean_dec(v_a_624_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec(v_matcherName_503_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_635_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_632_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_632_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v_a_624_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec(v_matcherName_503_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_643_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_627_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_627_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_motiveBody_509_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec(v_matcherName_503_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_651_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_623_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_623_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object* v_matcherApp_678_, lean_object* v_e_679_, lean_object* v_discrs_680_, lean_object* v_toMatcherInfo_681_, lean_object* v_matcherName_682_, lean_object* v_alts_683_, lean_object* v_params_684_, lean_object* v_remaining_685_, lean_object* v_matcherLevels_686_, lean_object* v_motiveArgs_687_, lean_object* v_motiveBody_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Meta_MatcherApp_addArg___lam__0(v_matcherApp_678_, v_e_679_, v_discrs_680_, v_toMatcherInfo_681_, v_matcherName_682_, v_alts_683_, v_params_684_, v_remaining_685_, v_matcherLevels_686_, v_motiveArgs_687_, v_motiveBody_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v_motiveArgs_687_);
lean_dec_ref(v_remaining_685_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* v_matcherApp_695_, lean_object* v_e_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_toMatcherInfo_702_; lean_object* v_matcherName_703_; lean_object* v_matcherLevels_704_; lean_object* v_params_705_; lean_object* v_motive_706_; lean_object* v_discrs_707_; lean_object* v_alts_708_; lean_object* v_remaining_709_; lean_object* v___f_710_; uint8_t v___x_711_; lean_object* v___x_712_; 
v_toMatcherInfo_702_ = lean_ctor_get(v_matcherApp_695_, 0);
lean_inc_ref(v_toMatcherInfo_702_);
v_matcherName_703_ = lean_ctor_get(v_matcherApp_695_, 1);
lean_inc(v_matcherName_703_);
v_matcherLevels_704_ = lean_ctor_get(v_matcherApp_695_, 2);
lean_inc_ref(v_matcherLevels_704_);
v_params_705_ = lean_ctor_get(v_matcherApp_695_, 3);
lean_inc_ref(v_params_705_);
v_motive_706_ = lean_ctor_get(v_matcherApp_695_, 4);
lean_inc_ref(v_motive_706_);
v_discrs_707_ = lean_ctor_get(v_matcherApp_695_, 5);
lean_inc_ref(v_discrs_707_);
v_alts_708_ = lean_ctor_get(v_matcherApp_695_, 6);
lean_inc_ref(v_alts_708_);
v_remaining_709_ = lean_ctor_get(v_matcherApp_695_, 7);
lean_inc_ref(v_remaining_709_);
v___f_710_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_710_, 0, v_matcherApp_695_);
lean_closure_set(v___f_710_, 1, v_e_696_);
lean_closure_set(v___f_710_, 2, v_discrs_707_);
lean_closure_set(v___f_710_, 3, v_toMatcherInfo_702_);
lean_closure_set(v___f_710_, 4, v_matcherName_703_);
lean_closure_set(v___f_710_, 5, v_alts_708_);
lean_closure_set(v___f_710_, 6, v_params_705_);
lean_closure_set(v___f_710_, 7, v_remaining_709_);
lean_closure_set(v___f_710_, 8, v_matcherLevels_704_);
v___x_711_ = 0;
v___x_712_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_706_, v___f_710_, v___x_711_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object* v_matcherApp_713_, lean_object* v_e_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_713_, v_e_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object* v_matcherApp_721_, lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_721_, v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_737_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_737_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_733_, 0, v_a_729_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_733_);
v___x_735_ = v___x_731_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_754_; 
v_a_738_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_754_ == 0)
{
v___x_740_ = v___x_728_;
v_isShared_741_ = v_isSharedCheck_754_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_728_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_754_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_742_; 
v___x_742_ = l_Lean_Exception_isInterrupt(v_a_738_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
lean_inc(v_a_738_);
v___x_743_ = l_Lean_Exception_isRuntime(v_a_738_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_746_; 
lean_dec(v_a_738_);
v___x_744_ = lean_box(0);
if (v_isShared_741_ == 0)
{
lean_ctor_set_tag(v___x_740_, 0);
lean_ctor_set(v___x_740_, 0, v___x_744_);
v___x_746_ = v___x_740_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
else
{
lean_object* v___x_749_; 
if (v_isShared_741_ == 0)
{
v___x_749_ = v___x_740_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_738_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_object* v___x_752_; 
if (v_isShared_741_ == 0)
{
v___x_752_ = v___x_740_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_738_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object* v_matcherApp_755_, lean_object* v_e_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_matcherApp_755_, v_e_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(lean_object* v_type_763_, lean_object* v_maxFVars_x3f_764_, lean_object* v_k_765_, uint8_t v_cleanupAnnotations_766_, uint8_t v_whnfType_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___f_773_; lean_object* v___x_774_; 
v___f_773_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_773_, 0, v_k_765_);
v___x_774_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_763_, v_maxFVars_x3f_764_, v___f_773_, v_cleanupAnnotations_766_, v_whnfType_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_774_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_774_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg___boxed(lean_object* v_type_791_, lean_object* v_maxFVars_x3f_792_, lean_object* v_k_793_, lean_object* v_cleanupAnnotations_794_, lean_object* v_whnfType_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_801_; uint8_t v_whnfType_boxed_802_; lean_object* v_res_803_; 
v_cleanupAnnotations_boxed_801_ = lean_unbox(v_cleanupAnnotations_794_);
v_whnfType_boxed_802_ = lean_unbox(v_whnfType_795_);
v_res_803_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_type_791_, v_maxFVars_x3f_792_, v_k_793_, v_cleanupAnnotations_boxed_801_, v_whnfType_boxed_802_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(lean_object* v_00_u03b1_804_, lean_object* v_type_805_, lean_object* v_maxFVars_x3f_806_, lean_object* v_k_807_, uint8_t v_cleanupAnnotations_808_, uint8_t v_whnfType_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_type_805_, v_maxFVars_x3f_806_, v_k_807_, v_cleanupAnnotations_808_, v_whnfType_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object* v_00_u03b1_816_, lean_object* v_type_817_, lean_object* v_maxFVars_x3f_818_, lean_object* v_k_819_, lean_object* v_cleanupAnnotations_820_, lean_object* v_whnfType_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_827_; uint8_t v_whnfType_boxed_828_; lean_object* v_res_829_; 
v_cleanupAnnotations_boxed_827_ = lean_unbox(v_cleanupAnnotations_820_);
v_whnfType_boxed_828_ = lean_unbox(v_whnfType_821_);
v_res_829_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_00_u03b1_816_, v_type_817_, v_maxFVars_x3f_818_, v_k_819_, v_cleanupAnnotations_boxed_827_, v_whnfType_boxed_828_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(lean_object* v_type_830_, lean_object* v_k_831_, uint8_t v_cleanupAnnotations_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___f_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___f_838_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_838_, 0, v_k_831_);
v___x_839_ = 0;
v___x_840_ = lean_box(0);
v___x_841_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_839_, v___x_840_, v_type_830_, v___f_838_, v_cleanupAnnotations_832_, v___x_839_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_841_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_841_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg___boxed(lean_object* v_type_858_, lean_object* v_k_859_, lean_object* v_cleanupAnnotations_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_866_; lean_object* v_res_867_; 
v_cleanupAnnotations_boxed_866_ = lean_unbox(v_cleanupAnnotations_860_);
v_res_867_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_type_858_, v_k_859_, v_cleanupAnnotations_boxed_866_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(lean_object* v_00_u03b1_868_, lean_object* v_type_869_, lean_object* v_k_870_, uint8_t v_cleanupAnnotations_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_type_869_, v_k_870_, v_cleanupAnnotations_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___boxed(lean_object* v_00_u03b1_878_, lean_object* v_type_879_, lean_object* v_k_880_, lean_object* v_cleanupAnnotations_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_887_; lean_object* v_res_888_; 
v_cleanupAnnotations_boxed_887_ = lean_unbox(v_cleanupAnnotations_881_);
v_res_888_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(v_00_u03b1_878_, v_type_879_, v_k_880_, v_cleanupAnnotations_boxed_887_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(size_t v_sz_889_, size_t v_i_890_, lean_object* v_bs_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = lean_usize_dec_lt(v_i_890_, v_sz_889_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; 
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_bs_891_);
return v___x_898_;
}
else
{
lean_object* v_v_899_; lean_object* v___x_900_; lean_object* v_bs_x27_901_; lean_object* v___x_902_; 
v_v_899_ = lean_array_uget(v_bs_891_, v_i_890_);
v___x_900_ = lean_unsigned_to_nat(0u);
v_bs_x27_901_ = lean_array_uset(v_bs_891_, v_i_890_, v___x_900_);
lean_inc(v___y_895_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc_ref(v___y_892_);
v___x_902_ = lean_infer_type(v_v_899_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; size_t v___x_904_; size_t v___x_905_; lean_object* v___x_906_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_890_, v___x_904_);
v___x_906_ = lean_array_uset(v_bs_x27_901_, v_i_890_, v_a_903_);
v_i_890_ = v___x_905_;
v_bs_891_ = v___x_906_;
goto _start;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v_bs_x27_901_);
v_a_908_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_902_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_902_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object* v_sz_916_, lean_object* v_i_917_, lean_object* v_bs_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
size_t v_sz_boxed_924_; size_t v_i_boxed_925_; lean_object* v_res_926_; 
v_sz_boxed_924_ = lean_unbox_usize(v_sz_916_);
lean_dec(v_sz_916_);
v_i_boxed_925_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_res_926_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_sz_boxed_924_, v_i_boxed_925_, v_bs_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
return v_res_926_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0));
v___x_929_ = l_Lean_stringToMessageData(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(uint8_t v___x_930_, uint8_t v___x_931_, uint8_t v___x_932_, lean_object* v_a_933_, lean_object* v_fvs_934_, lean_object* v_body_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_fvs_934_);
v___x_950_ = lean_nat_dec_eq(v___x_949_, v_a_933_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v___x_951_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1);
v___x_952_ = l_Nat_reprFast(v_a_933_);
v___x_953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
v___x_954_ = l_Lean_MessageData_ofFormat(v___x_953_);
v___x_955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_951_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_957_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
else
{
lean_dec(v_a_933_);
goto v___jp_941_;
}
v___jp_941_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_942_ = lean_unsigned_to_nat(2u);
v___x_943_ = l_Lean_Expr_getAppNumArgs(v_body_935_);
v___x_944_ = lean_nat_sub(v___x_943_, v___x_942_);
lean_dec(v___x_943_);
v___x_945_ = lean_unsigned_to_nat(1u);
v___x_946_ = lean_nat_sub(v___x_944_, v___x_945_);
lean_dec(v___x_944_);
v___x_947_ = l_Lean_Expr_getRevArg_x21(v_body_935_, v___x_946_);
v___x_948_ = l_Lean_Meta_mkLambdaFVars(v_fvs_934_, v___x_947_, v___x_930_, v___x_931_, v___x_930_, v___x_931_, v___x_932_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_948_;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed(lean_object* v___x_967_, lean_object* v___x_968_, lean_object* v___x_969_, lean_object* v_a_970_, lean_object* v_fvs_971_, lean_object* v_body_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v___x_4175__boxed_978_; uint8_t v___x_4176__boxed_979_; uint8_t v___x_4177__boxed_980_; lean_object* v_res_981_; 
v___x_4175__boxed_978_ = lean_unbox(v___x_967_);
v___x_4176__boxed_979_ = lean_unbox(v___x_968_);
v___x_4177__boxed_980_ = lean_unbox(v___x_969_);
v_res_981_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(v___x_4175__boxed_978_, v___x_4176__boxed_979_, v___x_4177__boxed_980_, v_a_970_, v_fvs_971_, v_body_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec_ref(v_body_972_);
lean_dec_ref(v_fvs_971_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object* v_as_982_, lean_object* v_bs_983_, lean_object* v_i_984_, lean_object* v_cs_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_array_get_size(v_as_982_);
v___x_992_ = lean_nat_dec_lt(v_i_984_, v___x_991_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; 
lean_dec(v_i_984_);
v___x_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_993_, 0, v_cs_985_);
return v___x_993_;
}
else
{
lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_994_ = lean_array_get_size(v_bs_983_);
v___x_995_ = lean_nat_dec_lt(v_i_984_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; 
lean_dec(v_i_984_);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v_cs_985_);
return v___x_996_;
}
else
{
uint8_t v___x_997_; uint8_t v___x_998_; lean_object* v_a_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___f_1003_; lean_object* v_b_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_997_ = 0;
v___x_998_ = 1;
v_a_999_ = lean_array_fget_borrowed(v_as_982_, v_i_984_);
v___x_1000_ = lean_box(v___x_997_);
v___x_1001_ = lean_box(v___x_995_);
v___x_1002_ = lean_box(v___x_998_);
lean_inc_n(v_a_999_, 2);
v___f_1003_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1003_, 0, v___x_1000_);
lean_closure_set(v___f_1003_, 1, v___x_1001_);
lean_closure_set(v___f_1003_, 2, v___x_1002_);
lean_closure_set(v___f_1003_, 3, v_a_999_);
v_b_1004_ = lean_array_fget_borrowed(v_bs_983_, v_i_984_);
v___x_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_a_999_);
lean_inc(v_b_1004_);
v___x_1006_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_b_1004_, v___x_1005_, v___f_1003_, v___x_997_, v___x_997_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = lean_unsigned_to_nat(1u);
v___x_1009_ = lean_nat_add(v_i_984_, v___x_1008_);
lean_dec(v_i_984_);
v___x_1010_ = lean_array_push(v_cs_985_, v_a_1007_);
v_i_984_ = v___x_1009_;
v_cs_985_ = v___x_1010_;
goto _start;
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec_ref(v_cs_985_);
lean_dec(v_i_984_);
v_a_1012_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_1006_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1006_);
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
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object* v_as_1020_, lean_object* v_bs_1021_, lean_object* v_i_1022_, lean_object* v_cs_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v_as_1020_, v_bs_1021_, v_i_1022_, v_cs_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_bs_1021_);
lean_dec_ref(v_as_1020_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object* v_matcherApp_1032_, lean_object* v_altAuxs_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
size_t v_sz_1040_; size_t v___x_1041_; lean_object* v___x_1042_; 
v_sz_1040_ = lean_array_size(v_altAuxs_1033_);
v___x_1041_ = ((size_t)0ULL);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_sz_1040_, v___x_1041_, v_altAuxs_1033_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1042_, 1);
v___x_1044_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_1032_);
v___x_1045_ = lean_unsigned_to_nat(0u);
v___x_1046_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_1047_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v___x_1044_, v_a_1043_, v___x_1045_, v___x_1046_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec(v_a_1043_);
lean_dec_ref(v___x_1044_);
return v___x_1047_;
}
else
{
lean_dec_ref(v_matcherApp_1032_);
return v___x_1042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object* v_matcherApp_1048_, lean_object* v_altAuxs_1049_, lean_object* v_x_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_Meta_MatcherApp_refineThrough___lam__0(v_matcherApp_1048_, v_altAuxs_1049_, v_x_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec_ref(v_x_1050_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object* v_motiveArgs_1057_, lean_object* v___x_1058_, lean_object* v_i_1059_, lean_object* v_a_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_zero_1066_; uint8_t v_isZero_1067_; 
v_zero_1066_ = lean_unsigned_to_nat(0u);
v_isZero_1067_ = lean_nat_dec_eq(v_i_1059_, v_zero_1066_);
if (v_isZero_1067_ == 1)
{
lean_object* v___x_1068_; 
lean_dec(v_i_1059_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_a_1060_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v_one_1070_; lean_object* v_n_1071_; lean_object* v_motiveArg_1072_; lean_object* v_discr_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1069_ = l_Lean_instInhabitedExpr;
v_one_1070_ = lean_unsigned_to_nat(1u);
v_n_1071_ = lean_nat_sub(v_i_1059_, v_one_1070_);
lean_dec(v_i_1059_);
v_motiveArg_1072_ = lean_array_get_borrowed(v___x_1069_, v_motiveArgs_1057_, v_n_1071_);
v_discr_1073_ = lean_array_fget_borrowed(v___x_1058_, v_n_1071_);
v___x_1074_ = lean_box(0);
lean_inc(v_discr_1073_);
v___x_1075_ = l_Lean_Meta_kabstract(v_a_1060_, v_discr_1073_, v___x_1074_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = lean_expr_instantiate1(v_a_1076_, v_motiveArg_1072_);
lean_dec(v_a_1076_);
v_i_1059_ = v_n_1071_;
v_a_1060_ = v___x_1077_;
goto _start;
}
else
{
lean_dec(v_n_1071_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object* v_motiveArgs_1079_, lean_object* v___x_1080_, lean_object* v_i_1081_, lean_object* v_a_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1079_, v___x_1080_, v_i_1081_, v_a_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec_ref(v___x_1080_);
lean_dec_ref(v_motiveArgs_1079_);
return v_res_1088_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2));
v___x_1094_ = l_Lean_stringToMessageData(v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object* v___f_1095_, lean_object* v_discrs_1096_, lean_object* v_e_1097_, lean_object* v_toMatcherInfo_1098_, lean_object* v_matcherName_1099_, lean_object* v_params_1100_, lean_object* v_matcherLevels_1101_, lean_object* v_motiveArgs_1102_, lean_object* v___motiveBody_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v___y_1110_; lean_object* v___y_1111_; uint8_t v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v_matcherLevels_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = lean_array_get_size(v_motiveArgs_1102_);
v___x_1209_ = lean_array_get_size(v_discrs_1096_);
v___x_1210_ = lean_nat_dec_eq(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v_e_1097_);
lean_dec_ref(v___f_1095_);
v___x_1211_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3);
v___x_1212_ = l_Nat_reprFast(v___x_1209_);
v___x_1213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
v___x_1214_ = l_Lean_MessageData_ofFormat(v___x_1213_);
v___x_1215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1211_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_1217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1217_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1218_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1218_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
else
{
v___y_1178_ = v___y_1104_;
v___y_1179_ = v___y_1105_;
v___y_1180_ = v___y_1106_;
v___y_1181_ = v___y_1107_;
goto v___jp_1177_;
}
v___jp_1109_:
{
lean_object* v___x_1117_; 
lean_inc(v___y_1116_);
lean_inc_ref(v___y_1115_);
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1113_);
v___x_1117_ = lean_infer_type(v___y_1111_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1119_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
lean_dec_ref_known(v___x_1117_, 1);
v___x_1119_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_a_1118_, v___y_1110_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
return v___x_1119_;
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v___y_1110_);
v_a_1120_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1117_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1117_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
v___jp_1128_:
{
uint8_t v___x_1138_; uint8_t v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; 
v___x_1138_ = 0;
v___x_1139_ = 1;
v___x_1140_ = 1;
v___x_1141_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_1102_, v___y_1129_, v___x_1138_, v___x_1139_, v___x_1138_, v___x_1139_, v___x_1140_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = lean_array_to_list(v_matcherLevels_1133_);
v___x_1144_ = l_Lean_mkConst(v___y_1130_, v___x_1143_);
v___x_1145_ = l_Lean_mkAppN(v___x_1144_, v___y_1131_);
v___x_1146_ = l_Lean_Expr_app___override(v___x_1145_, v_a_1142_);
v___x_1147_ = l_Lean_mkAppN(v___x_1146_, v___y_1132_);
lean_inc_ref(v___x_1147_);
v___x_1148_ = l_Lean_Meta_isTypeCorrect(v___x_1147_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; uint8_t v___x_1150_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = lean_unbox(v_a_1149_);
lean_dec(v_a_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec_ref(v___x_1147_);
lean_dec_ref(v___f_1095_);
v___x_1151_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1);
v___x_1152_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1151_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
else
{
v___y_1110_ = v___f_1095_;
v___y_1111_ = v___x_1147_;
v___y_1112_ = v___x_1138_;
v___y_1113_ = v___y_1134_;
v___y_1114_ = v___y_1135_;
v___y_1115_ = v___y_1136_;
v___y_1116_ = v___y_1137_;
goto v___jp_1109_;
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref(v___x_1147_);
lean_dec_ref(v___f_1095_);
v_a_1161_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1148_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1148_);
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
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_matcherLevels_1133_);
lean_dec(v___y_1130_);
lean_dec_ref(v___f_1095_);
v_a_1169_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1141_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1141_);
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
v___jp_1177_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_array_get_size(v_discrs_1096_);
v___x_1183_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1102_, v_discrs_1096_, v___x_1182_, v_e_1097_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1185_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc_n(v_a_1184_, 2);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1185_ = l_Lean_Meta_mkEq(v_a_1184_, v_a_1184_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_uElimPos_x3f_1186_; 
v_uElimPos_x3f_1186_ = lean_ctor_get(v_toMatcherInfo_1098_, 3);
if (lean_obj_tag(v_uElimPos_x3f_1186_) == 0)
{
lean_object* v_a_1187_; 
v_a_1187_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1187_);
lean_dec_ref_known(v___x_1185_, 1);
v___y_1129_ = v_a_1187_;
v___y_1130_ = v_matcherName_1099_;
v___y_1131_ = v_params_1100_;
v___y_1132_ = v_discrs_1096_;
v_matcherLevels_1133_ = v_matcherLevels_1101_;
v___y_1134_ = v___y_1178_;
v___y_1135_ = v___y_1179_;
v___y_1136_ = v___y_1180_;
v___y_1137_ = v___y_1181_;
goto v___jp_1128_;
}
else
{
lean_object* v_a_1188_; lean_object* v_val_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v_a_1188_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1185_, 1);
v_val_1189_ = lean_ctor_get(v_uElimPos_x3f_1186_, 0);
v___x_1190_ = lean_box(0);
v___x_1191_ = lean_array_set(v_matcherLevels_1101_, v_val_1189_, v___x_1190_);
v___y_1129_ = v_a_1188_;
v___y_1130_ = v_matcherName_1099_;
v___y_1131_ = v_params_1100_;
v___y_1132_ = v_discrs_1096_;
v_matcherLevels_1133_ = v___x_1191_;
v___y_1134_ = v___y_1178_;
v___y_1135_ = v___y_1179_;
v___y_1136_ = v___y_1180_;
v___y_1137_ = v___y_1181_;
goto v___jp_1128_;
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v___f_1095_);
v_a_1192_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1185_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1185_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v___f_1095_);
v_a_1200_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1183_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1183_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object* v___f_1227_, lean_object* v_discrs_1228_, lean_object* v_e_1229_, lean_object* v_toMatcherInfo_1230_, lean_object* v_matcherName_1231_, lean_object* v_params_1232_, lean_object* v_matcherLevels_1233_, lean_object* v_motiveArgs_1234_, lean_object* v___motiveBody_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_Meta_MatcherApp_refineThrough___lam__1(v___f_1227_, v_discrs_1228_, v_e_1229_, v_toMatcherInfo_1230_, v_matcherName_1231_, v_params_1232_, v_matcherLevels_1233_, v_motiveArgs_1234_, v___motiveBody_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec_ref(v___motiveBody_1235_);
lean_dec_ref(v_motiveArgs_1234_);
lean_dec_ref(v_params_1232_);
lean_dec_ref(v_toMatcherInfo_1230_);
lean_dec_ref(v_discrs_1228_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object* v_matcherApp_1242_, lean_object* v_e_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_toMatcherInfo_1249_; lean_object* v_matcherName_1250_; lean_object* v_matcherLevels_1251_; lean_object* v_params_1252_; lean_object* v_motive_1253_; lean_object* v_discrs_1254_; lean_object* v___f_1255_; lean_object* v___f_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; 
v_toMatcherInfo_1249_ = lean_ctor_get(v_matcherApp_1242_, 0);
lean_inc_ref(v_toMatcherInfo_1249_);
v_matcherName_1250_ = lean_ctor_get(v_matcherApp_1242_, 1);
lean_inc(v_matcherName_1250_);
v_matcherLevels_1251_ = lean_ctor_get(v_matcherApp_1242_, 2);
lean_inc_ref(v_matcherLevels_1251_);
v_params_1252_ = lean_ctor_get(v_matcherApp_1242_, 3);
lean_inc_ref(v_params_1252_);
v_motive_1253_ = lean_ctor_get(v_matcherApp_1242_, 4);
lean_inc_ref(v_motive_1253_);
v_discrs_1254_ = lean_ctor_get(v_matcherApp_1242_, 5);
lean_inc_ref(v_discrs_1254_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1255_, 0, v_matcherApp_1242_);
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1256_, 0, v___f_1255_);
lean_closure_set(v___f_1256_, 1, v_discrs_1254_);
lean_closure_set(v___f_1256_, 2, v_e_1243_);
lean_closure_set(v___f_1256_, 3, v_toMatcherInfo_1249_);
lean_closure_set(v___f_1256_, 4, v_matcherName_1250_);
lean_closure_set(v___f_1256_, 5, v_params_1252_);
lean_closure_set(v___f_1256_, 6, v_matcherLevels_1251_);
v___x_1257_ = 0;
v___x_1258_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_1253_, v___f_1256_, v___x_1257_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object* v_matcherApp_1259_, lean_object* v_e_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1259_, v_e_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_);
lean_dec(v_a_1264_);
lean_dec_ref(v_a_1263_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object* v_motiveArgs_1267_, lean_object* v___x_1268_, lean_object* v_n_1269_, lean_object* v_i_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1267_, v___x_1268_, v_i_1270_, v_a_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object* v_motiveArgs_1279_, lean_object* v___x_1280_, lean_object* v_n_1281_, lean_object* v_i_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(v_motiveArgs_1279_, v___x_1280_, v_n_1281_, v_i_1282_, v_a_1283_, v_a_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v_n_1281_);
lean_dec_ref(v___x_1280_);
lean_dec_ref(v_motiveArgs_1279_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object* v_matcherApp_1291_, lean_object* v_e_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1291_, v_e_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1307_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_a_1299_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1303_);
v___x_1305_ = v___x_1301_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1324_; 
v_a_1308_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1310_ = v___x_1298_;
v_isShared_1311_ = v_isSharedCheck_1324_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1298_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1324_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
uint8_t v___x_1312_; 
v___x_1312_ = l_Lean_Exception_isInterrupt(v_a_1308_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; 
lean_inc(v_a_1308_);
v___x_1313_ = l_Lean_Exception_isRuntime(v_a_1308_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; lean_object* v___x_1316_; 
lean_dec(v_a_1308_);
v___x_1314_ = lean_box(0);
if (v_isShared_1311_ == 0)
{
lean_ctor_set_tag(v___x_1310_, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1314_);
v___x_1316_ = v___x_1310_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
else
{
lean_object* v___x_1319_; 
if (v_isShared_1311_ == 0)
{
v___x_1319_ = v___x_1310_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1308_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
lean_object* v___x_1322_; 
if (v_isShared_1311_ == 0)
{
v___x_1322_ = v___x_1310_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1308_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object* v_matcherApp_1325_, lean_object* v_e_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Meta_MatcherApp_refineThrough_x3f(v_matcherApp_1325_, v_e_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object* v_lctx_1333_, lean_object* v_x_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_keyedConfig_1340_; uint8_t v_trackZetaDelta_1341_; lean_object* v_zetaDeltaSet_1342_; lean_object* v_localInstances_1343_; lean_object* v_defEqCtx_x3f_1344_; lean_object* v_synthPendingDepth_1345_; lean_object* v_customCanUnfoldPredicate_x3f_1346_; uint8_t v_univApprox_1347_; uint8_t v_inTypeClassResolution_1348_; uint8_t v_cacheInferType_1349_; lean_object* v_rewriteSet_x3f_1350_; uint8_t v_rewriteFuelScope_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_keyedConfig_1340_ = lean_ctor_get(v___y_1335_, 0);
v_trackZetaDelta_1341_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*8);
v_zetaDeltaSet_1342_ = lean_ctor_get(v___y_1335_, 1);
v_localInstances_1343_ = lean_ctor_get(v___y_1335_, 3);
v_defEqCtx_x3f_1344_ = lean_ctor_get(v___y_1335_, 4);
v_synthPendingDepth_1345_ = lean_ctor_get(v___y_1335_, 5);
v_customCanUnfoldPredicate_x3f_1346_ = lean_ctor_get(v___y_1335_, 6);
v_univApprox_1347_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1348_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*8 + 2);
v_cacheInferType_1349_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1350_ = lean_ctor_get(v___y_1335_, 7);
v_rewriteFuelScope_1351_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*8 + 4);
lean_inc(v_rewriteSet_x3f_1350_);
lean_inc(v_customCanUnfoldPredicate_x3f_1346_);
lean_inc(v_synthPendingDepth_1345_);
lean_inc(v_defEqCtx_x3f_1344_);
lean_inc_ref(v_localInstances_1343_);
lean_inc(v_zetaDeltaSet_1342_);
lean_inc_ref(v_keyedConfig_1340_);
v___x_1352_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1352_, 0, v_keyedConfig_1340_);
lean_ctor_set(v___x_1352_, 1, v_zetaDeltaSet_1342_);
lean_ctor_set(v___x_1352_, 2, v_lctx_1333_);
lean_ctor_set(v___x_1352_, 3, v_localInstances_1343_);
lean_ctor_set(v___x_1352_, 4, v_defEqCtx_x3f_1344_);
lean_ctor_set(v___x_1352_, 5, v_synthPendingDepth_1345_);
lean_ctor_set(v___x_1352_, 6, v_customCanUnfoldPredicate_x3f_1346_);
lean_ctor_set(v___x_1352_, 7, v_rewriteSet_x3f_1350_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*8, v_trackZetaDelta_1341_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*8 + 1, v_univApprox_1347_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1348_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*8 + 3, v_cacheInferType_1349_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1351_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
lean_inc(v___y_1336_);
v___x_1353_ = lean_apply_5(v_x_1334_, v___x_1352_, v___y_1336_, v___y_1337_, v___y_1338_, lean_box(0));
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object* v_lctx_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1354_, v_x_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object* v_00_u03b1_1362_, lean_object* v_lctx_1363_, lean_object* v_x_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1363_, v_x_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object* v_00_u03b1_1371_, lean_object* v_lctx_1372_, lean_object* v_x_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(v_00_u03b1_1371_, v_lctx_1372_, v_x_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object* v_as_1380_, size_t v_i_1381_, size_t v_stop_1382_, lean_object* v_b_1383_){
_start:
{
uint8_t v___x_1384_; 
v___x_1384_ = lean_usize_dec_eq(v_i_1381_, v_stop_1382_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; lean_object* v_fst_1386_; lean_object* v_snd_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; size_t v___x_1390_; size_t v___x_1391_; 
v___x_1385_ = lean_array_uget_borrowed(v_as_1380_, v_i_1381_);
v_fst_1386_ = lean_ctor_get(v___x_1385_, 0);
v_snd_1387_ = lean_ctor_get(v___x_1385_, 1);
v___x_1388_ = l_Lean_Expr_fvarId_x21(v_fst_1386_);
lean_inc(v_snd_1387_);
v___x_1389_ = l_Lean_LocalContext_setUserName(v_b_1383_, v___x_1388_, v_snd_1387_);
v___x_1390_ = ((size_t)1ULL);
v___x_1391_ = lean_usize_add(v_i_1381_, v___x_1390_);
v_i_1381_ = v___x_1391_;
v_b_1383_ = v___x_1389_;
goto _start;
}
else
{
return v_b_1383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object* v_as_1393_, lean_object* v_i_1394_, lean_object* v_stop_1395_, lean_object* v_b_1396_){
_start:
{
size_t v_i_boxed_1397_; size_t v_stop_boxed_1398_; lean_object* v_res_1399_; 
v_i_boxed_1397_ = lean_unbox_usize(v_i_1394_);
lean_dec(v_i_1394_);
v_stop_boxed_1398_ = lean_unbox_usize(v_stop_1395_);
lean_dec(v_stop_1395_);
v_res_1399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v_as_1393_, v_i_boxed_1397_, v_stop_boxed_1398_, v_b_1396_);
lean_dec_ref(v_as_1393_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object* v_fvars_1400_, lean_object* v_names_1401_, lean_object* v_k_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_){
_start:
{
lean_object* v_lctx_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v_lctx_1408_ = lean_ctor_get(v_a_1403_, 2);
v___x_1409_ = l_Array_zip___redArg(v_fvars_1400_, v_names_1401_);
v___x_1410_ = lean_unsigned_to_nat(0u);
v___x_1411_ = lean_array_get_size(v___x_1409_);
v___x_1412_ = lean_nat_dec_lt(v___x_1410_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; 
lean_dec_ref(v___x_1409_);
lean_inc_ref(v_lctx_1408_);
v___x_1413_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1408_, v_k_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_);
return v___x_1413_;
}
else
{
size_t v___x_1414_; size_t v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1414_ = ((size_t)0ULL);
v___x_1415_ = lean_usize_of_nat(v___x_1411_);
lean_inc_ref(v_lctx_1408_);
v___x_1416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1409_, v___x_1414_, v___x_1415_, v_lctx_1408_);
lean_dec_ref(v___x_1409_);
v___x_1417_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1416_, v_k_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_);
return v___x_1417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object* v_fvars_1418_, lean_object* v_names_1419_, lean_object* v_k_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1418_, v_names_1419_, v_k_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
lean_dec_ref(v_names_1419_);
lean_dec_ref(v_fvars_1418_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object* v_00_u03b1_1427_, lean_object* v_fvars_1428_, lean_object* v_names_1429_, lean_object* v_k_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1428_, v_names_1429_, v_k_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object* v_00_u03b1_1437_, lean_object* v_fvars_1438_, lean_object* v_names_1439_, lean_object* v_k_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(v_00_u03b1_1437_, v_fvars_1438_, v_names_1439_, v_k_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec_ref(v_names_1439_);
lean_dec_ref(v_fvars_1438_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object* v_k_1447_, lean_object* v_fvars_1448_, lean_object* v_names_1449_, lean_object* v_runInBase_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = lean_apply_2(v_runInBase_1450_, lean_box(0), v_k_1447_);
v___x_1457_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1448_, v_names_1449_, v___x_1456_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object* v_k_1458_, lean_object* v_fvars_1459_, lean_object* v_names_1460_, lean_object* v_runInBase_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(v_k_1458_, v_fvars_1459_, v_names_1460_, v_runInBase_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec_ref(v_names_1460_);
lean_dec_ref(v_fvars_1459_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object* v_inst_1468_, lean_object* v_inst_1469_, lean_object* v_fvars_1470_, lean_object* v_names_1471_, lean_object* v_k_1472_){
_start:
{
lean_object* v_toBind_1473_; lean_object* v_liftWith_1474_; lean_object* v_restoreM_1475_; lean_object* v___f_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v_toBind_1473_ = lean_ctor_get(v_inst_1469_, 1);
lean_inc(v_toBind_1473_);
lean_dec_ref(v_inst_1469_);
v_liftWith_1474_ = lean_ctor_get(v_inst_1468_, 0);
lean_inc(v_liftWith_1474_);
v_restoreM_1475_ = lean_ctor_get(v_inst_1468_, 1);
lean_inc(v_restoreM_1475_);
lean_dec_ref(v_inst_1468_);
v___f_1476_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1476_, 0, v_k_1472_);
lean_closure_set(v___f_1476_, 1, v_fvars_1470_);
lean_closure_set(v___f_1476_, 2, v_names_1471_);
v___x_1477_ = lean_apply_2(v_liftWith_1474_, lean_box(0), v___f_1476_);
v___x_1478_ = lean_apply_1(v_restoreM_1475_, lean_box(0));
v___x_1479_ = lean_apply_4(v_toBind_1473_, lean_box(0), lean_box(0), v___x_1477_, v___x_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object* v_n_1480_, lean_object* v_inst_1481_, lean_object* v_inst_1482_, lean_object* v_00_u03b1_1483_, lean_object* v_fvars_1484_, lean_object* v_names_1485_, lean_object* v_k_1486_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_1481_, v_inst_1482_, v_fvars_1484_, v_names_1485_, v_k_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object* v_k_1488_, lean_object* v_runInBase_1489_, lean_object* v_ys_1490_, lean_object* v_args_1491_, lean_object* v___mask_1492_, lean_object* v___bodyType_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = lean_apply_2(v_k_1488_, v_ys_1490_, v_args_1491_);
lean_inc(v___y_1497_);
lean_inc_ref(v___y_1496_);
lean_inc(v___y_1495_);
lean_inc_ref(v___y_1494_);
v___x_1500_ = lean_apply_7(v_runInBase_1489_, lean_box(0), v___x_1499_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, lean_box(0));
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object* v_k_1501_, lean_object* v_runInBase_1502_, lean_object* v_ys_1503_, lean_object* v_args_1504_, lean_object* v___mask_1505_, lean_object* v___bodyType_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(v_k_1501_, v_runInBase_1502_, v_ys_1503_, v_args_1504_, v___mask_1505_, v___bodyType_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec_ref(v___bodyType_1506_);
lean_dec_ref(v___mask_1505_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object* v_k_1513_, lean_object* v_origAltType_1514_, lean_object* v_altInfo_1515_, lean_object* v_runInBase_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v___f_1522_; lean_object* v___x_1523_; 
v___f_1522_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1522_, 0, v_k_1513_);
lean_closure_set(v___f_1522_, 1, v_runInBase_1516_);
v___x_1523_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1514_, v_altInfo_1515_, v___f_1522_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object* v_k_1524_, lean_object* v_origAltType_1525_, lean_object* v_altInfo_1526_, lean_object* v_runInBase_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(v_k_1524_, v_origAltType_1525_, v_altInfo_1526_, v_runInBase_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object* v_inst_1534_, lean_object* v_inst_1535_, lean_object* v_origAltType_1536_, lean_object* v_altInfo_1537_, lean_object* v_k_1538_){
_start:
{
lean_object* v_toBind_1539_; lean_object* v_liftWith_1540_; lean_object* v_restoreM_1541_; lean_object* v___f_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v_toBind_1539_ = lean_ctor_get(v_inst_1534_, 1);
lean_inc(v_toBind_1539_);
lean_dec_ref(v_inst_1534_);
v_liftWith_1540_ = lean_ctor_get(v_inst_1535_, 0);
lean_inc(v_liftWith_1540_);
v_restoreM_1541_ = lean_ctor_get(v_inst_1535_, 1);
lean_inc(v_restoreM_1541_);
lean_dec_ref(v_inst_1535_);
v___f_1542_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1542_, 0, v_k_1538_);
lean_closure_set(v___f_1542_, 1, v_origAltType_1536_);
lean_closure_set(v___f_1542_, 2, v_altInfo_1537_);
v___x_1543_ = lean_apply_2(v_liftWith_1540_, lean_box(0), v___f_1542_);
v___x_1544_ = lean_apply_1(v_restoreM_1541_, lean_box(0));
v___x_1545_ = lean_apply_4(v_toBind_1539_, lean_box(0), lean_box(0), v___x_1543_, v___x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object* v_n_1546_, lean_object* v_inst_1547_, lean_object* v_inst_1548_, lean_object* v_00_u03b1_1549_, lean_object* v_origAltType_1550_, lean_object* v_altInfo_1551_, lean_object* v_k_1552_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_1547_, v_inst_1548_, v_origAltType_1550_, v_altInfo_1551_, v_k_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object* v_fvars_1554_){
_start:
{
lean_object* v_args_1555_; lean_object* v_discrEqs_1556_; lean_object* v___x_1557_; 
v_args_1555_ = lean_ctor_get(v_fvars_1554_, 0);
lean_inc_ref(v_args_1555_);
v_discrEqs_1556_ = lean_ctor_get(v_fvars_1554_, 3);
lean_inc_ref(v_discrEqs_1556_);
lean_dec_ref(v_fvars_1554_);
v___x_1557_ = l_Array_append___redArg(v_args_1555_, v_discrEqs_1556_);
lean_dec_ref(v_discrEqs_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object* v_fvars_1558_){
_start:
{
lean_object* v_fields_1559_; lean_object* v_overlaps_1560_; lean_object* v_discrEqs_1561_; lean_object* v_extraEqs_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v_fields_1559_ = lean_ctor_get(v_fvars_1558_, 1);
lean_inc_ref(v_fields_1559_);
v_overlaps_1560_ = lean_ctor_get(v_fvars_1558_, 2);
lean_inc_ref(v_overlaps_1560_);
v_discrEqs_1561_ = lean_ctor_get(v_fvars_1558_, 3);
lean_inc_ref(v_discrEqs_1561_);
v_extraEqs_1562_ = lean_ctor_get(v_fvars_1558_, 4);
lean_inc_ref(v_extraEqs_1562_);
lean_dec_ref(v_fvars_1558_);
v___x_1563_ = l_Array_append___redArg(v_fields_1559_, v_overlaps_1560_);
lean_dec_ref(v_overlaps_1560_);
v___x_1564_ = l_Array_append___redArg(v___x_1563_, v_discrEqs_1561_);
lean_dec_ref(v_discrEqs_1561_);
v___x_1565_ = l_Array_append___redArg(v___x_1564_, v_extraEqs_1562_);
lean_dec_ref(v_extraEqs_1562_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object* v_inst_1566_, lean_object* v_inst_1567_, lean_object* v_x_1568_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_1570_ = l_Lean_throwError___redArg(v_inst_1566_, v_inst_1567_, v___x_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object* v_inst_1571_, lean_object* v_inst_1572_, lean_object* v_x_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__0(v_inst_1571_, v_inst_1572_, v_x_1573_);
lean_dec_ref(v_x_1573_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object* v_inst_1575_, lean_object* v_x_1576_){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1577_ = l_Lean_Expr_fvarId_x21(v_x_1576_);
v___x_1578_ = lean_alloc_closure((void*)(l_Lean_FVarId_getUserName___boxed), 6, 1);
lean_closure_set(v___x_1578_, 0, v___x_1577_);
v___x_1579_ = lean_apply_2(v_inst_1575_, lean_box(0), v___x_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object* v_inst_1580_, lean_object* v_x_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__1(v_inst_1580_, v_x_1581_);
lean_dec_ref(v_x_1581_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object* v_inst_1583_, lean_object* v___f_1584_, lean_object* v_xs_1585_, lean_object* v_x_1586_){
_start:
{
size_t v_sz_1587_; size_t v___x_1588_; lean_object* v___x_1589_; 
v_sz_1587_ = lean_array_size(v_xs_1585_);
v___x_1588_ = ((size_t)0ULL);
v___x_1589_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1583_, v___f_1584_, v_sz_1587_, v___x_1588_, v_xs_1585_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object* v_inst_1590_, lean_object* v___f_1591_, lean_object* v_xs_1592_, lean_object* v_x_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__2(v_inst_1590_, v___f_1591_, v_xs_1592_, v_x_1593_);
lean_dec_ref(v_x_1593_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object* v_fst_1595_, lean_object* v_fst_1596_, lean_object* v___x_1597_, lean_object* v___x_1598_, lean_object* v_toPure_1599_, lean_object* v_____do__lift_1600_){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1601_ = lean_array_push(v_fst_1595_, v_____do__lift_1600_);
v___x_1602_ = lean_nat_add(v_fst_1596_, v___x_1597_);
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
lean_ctor_set(v___x_1603_, 1, v___x_1598_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1601_);
lean_ctor_set(v___x_1604_, 1, v___x_1603_);
v___x_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
v___x_1606_ = lean_apply_2(v_toPure_1599_, lean_box(0), v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object* v_fst_1607_, lean_object* v_fst_1608_, lean_object* v___x_1609_, lean_object* v___x_1610_, lean_object* v_toPure_1611_, lean_object* v_____do__lift_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__3(v_fst_1607_, v_fst_1608_, v___x_1609_, v___x_1610_, v_toPure_1611_, v_____do__lift_1612_);
lean_dec(v___x_1609_);
lean_dec(v_fst_1608_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t v_val_1614_, lean_object* v_a_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
if (v_val_1614_ == 0)
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_Meta_mkEqRefl(v_a_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
return v___x_1621_;
}
else
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_Meta_mkHEqRefl(v_a_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
return v___x_1622_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object* v_val_1623_, lean_object* v_a_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
uint8_t v_val_12193__boxed_1630_; lean_object* v_res_1631_; 
v_val_12193__boxed_1630_ = lean_unbox(v_val_1623_);
v_res_1631_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__4(v_val_12193__boxed_1630_, v_a_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object* v_toPure_1632_, lean_object* v_inst_1633_, lean_object* v_toBind_1634_, lean_object* v_a_1635_, lean_object* v_x_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v_snd_1638_; lean_object* v_snd_1639_; lean_object* v_fst_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1688_; 
v_snd_1638_ = lean_ctor_get(v___y_1637_, 1);
lean_inc(v_snd_1638_);
v_snd_1639_ = lean_ctor_get(v_snd_1638_, 1);
lean_inc(v_snd_1639_);
v_fst_1640_ = lean_ctor_get(v___y_1637_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___y_1637_);
if (v_isSharedCheck_1688_ == 0)
{
lean_object* v_unused_1689_; 
v_unused_1689_ = lean_ctor_get(v___y_1637_, 1);
lean_dec(v_unused_1689_);
v___x_1642_ = v___y_1637_;
v_isShared_1643_ = v_isSharedCheck_1688_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_fst_1640_);
lean_dec(v___y_1637_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1688_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v_fst_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1686_; 
v_fst_1644_ = lean_ctor_get(v_snd_1638_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_snd_1638_);
if (v_isSharedCheck_1686_ == 0)
{
lean_object* v_unused_1687_; 
v_unused_1687_ = lean_ctor_get(v_snd_1638_, 1);
lean_dec(v_unused_1687_);
v___x_1646_ = v_snd_1638_;
v_isShared_1647_ = v_isSharedCheck_1686_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_fst_1644_);
lean_dec(v_snd_1638_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1686_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v_array_1648_; lean_object* v_start_1649_; lean_object* v_stop_1650_; uint8_t v___x_1651_; 
v_array_1648_ = lean_ctor_get(v_snd_1639_, 0);
v_start_1649_ = lean_ctor_get(v_snd_1639_, 1);
v_stop_1650_ = lean_ctor_get(v_snd_1639_, 2);
v___x_1651_ = lean_nat_dec_lt(v_start_1649_, v_stop_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1653_; 
lean_dec_ref(v_a_1635_);
lean_dec(v_toBind_1634_);
lean_dec(v_inst_1633_);
if (v_isShared_1647_ == 0)
{
v___x_1653_ = v___x_1646_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v_snd_1639_);
v___x_1653_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1655_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 1, v___x_1653_);
v___x_1655_ = v___x_1642_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_fst_1640_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
v___x_1657_ = lean_apply_2(v_toPure_1632_, lean_box(0), v___x_1656_);
return v___x_1657_;
}
}
}
else
{
lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1682_; 
lean_inc(v_stop_1650_);
lean_inc(v_start_1649_);
lean_inc_ref(v_array_1648_);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_snd_1639_);
if (v_isSharedCheck_1682_ == 0)
{
lean_object* v_unused_1683_; lean_object* v_unused_1684_; lean_object* v_unused_1685_; 
v_unused_1683_ = lean_ctor_get(v_snd_1639_, 2);
lean_dec(v_unused_1683_);
v_unused_1684_ = lean_ctor_get(v_snd_1639_, 1);
lean_dec(v_unused_1684_);
v_unused_1685_ = lean_ctor_get(v_snd_1639_, 0);
lean_dec(v_unused_1685_);
v___x_1661_ = v_snd_1639_;
v_isShared_1662_ = v_isSharedCheck_1682_;
goto v_resetjp_1660_;
}
else
{
lean_dec(v_snd_1639_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1682_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
v___x_1663_ = lean_array_fget(v_array_1648_, v_start_1649_);
v___x_1664_ = lean_unsigned_to_nat(1u);
v___x_1665_ = lean_nat_add(v_start_1649_, v___x_1664_);
lean_dec(v_start_1649_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1665_);
v___x_1667_ = v___x_1661_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_array_1648_);
lean_ctor_set(v_reuseFailAlloc_1681_, 1, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1681_, 2, v_stop_1650_);
v___x_1667_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref(v_a_1635_);
lean_dec(v_toBind_1634_);
lean_dec(v_inst_1633_);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 1, v___x_1667_);
v___x_1669_ = v___x_1646_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1671_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 1, v___x_1669_);
v___x_1671_ = v___x_1642_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_fst_1640_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
v___x_1673_ = lean_apply_2(v_toPure_1632_, lean_box(0), v___x_1672_);
return v___x_1673_;
}
}
}
else
{
lean_object* v_val_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
lean_del_object(v___x_1646_);
lean_del_object(v___x_1642_);
v_val_1676_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_val_1676_);
lean_dec_ref_known(v___x_1663_, 1);
v___f_1677_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_1677_, 0, v_fst_1640_);
lean_closure_set(v___f_1677_, 1, v_fst_1644_);
lean_closure_set(v___f_1677_, 2, v___x_1664_);
lean_closure_set(v___f_1677_, 3, v___x_1667_);
lean_closure_set(v___f_1677_, 4, v_toPure_1632_);
v___f_1678_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed), 7, 2);
lean_closure_set(v___f_1678_, 0, v_val_1676_);
lean_closure_set(v___f_1678_, 1, v_a_1635_);
v___x_1679_ = lean_apply_2(v_inst_1633_, lean_box(0), v___f_1678_);
v___x_1680_ = lean_apply_4(v_toBind_1634_, lean_box(0), lean_box(0), v___x_1679_, v___f_1677_);
return v___x_1680_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object* v_heq_1690_, lean_object* v_fst_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lean_mkArrow(v_heq_1690_, v_fst_1691_, v___y_1694_, v___y_1695_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object* v_heq_1698_, lean_object* v_fst_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__6(v_heq_1698_, v_fst_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object* v_heq_1708_, lean_object* v_fst_1709_, lean_object* v_fst_1710_, lean_object* v___x_1711_, lean_object* v___x_1712_, lean_object* v_toPure_1713_, lean_object* v_____x_1714_){
_start:
{
uint8_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1715_ = l_Lean_Expr_isHEq(v_heq_1708_);
v___x_1716_ = lean_box(v___x_1715_);
v___x_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
v___x_1718_ = lean_array_push(v_fst_1709_, v___x_1717_);
v___x_1719_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_1720_ = lean_array_push(v_fst_1710_, v___x_1719_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1711_);
lean_ctor_set(v___x_1721_, 1, v___x_1712_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1720_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1718_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1724_, 0, v_____x_1714_);
lean_ctor_set(v___x_1724_, 1, v___x_1723_);
v___x_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
v___x_1726_ = lean_apply_2(v_toPure_1713_, lean_box(0), v___x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object* v_heq_1727_, lean_object* v_fst_1728_, lean_object* v_fst_1729_, lean_object* v___x_1730_, lean_object* v___x_1731_, lean_object* v_toPure_1732_, lean_object* v_____x_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__7(v_heq_1727_, v_fst_1728_, v_fst_1729_, v___x_1730_, v___x_1731_, v_toPure_1732_, v_____x_1733_);
lean_dec_ref(v_heq_1727_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object* v_fst_1735_, lean_object* v_fst_1736_, lean_object* v_fst_1737_, lean_object* v___x_1738_, lean_object* v___x_1739_, lean_object* v_toPure_1740_, lean_object* v_inst_1741_, lean_object* v_toBind_1742_, lean_object* v_heq_1743_){
_start:
{
lean_object* v___f_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
lean_inc_ref(v_heq_1743_);
v___f_1744_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1744_, 0, v_heq_1743_);
lean_closure_set(v___f_1744_, 1, v_fst_1735_);
v___f_1745_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_1745_, 0, v_heq_1743_);
lean_closure_set(v___f_1745_, 1, v_fst_1736_);
lean_closure_set(v___f_1745_, 2, v_fst_1737_);
lean_closure_set(v___f_1745_, 3, v___x_1738_);
lean_closure_set(v___f_1745_, 4, v___x_1739_);
lean_closure_set(v___f_1745_, 5, v_toPure_1740_);
v___x_1746_ = lean_apply_2(v_inst_1741_, lean_box(0), v___f_1744_);
v___x_1747_ = lean_apply_4(v_toBind_1742_, lean_box(0), lean_box(0), v___x_1746_, v___f_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object* v___x_1748_, lean_object* v_a_1749_, lean_object* v_inst_1750_, lean_object* v_toBind_1751_, lean_object* v___f_1752_, lean_object* v_fst_1753_, lean_object* v_fst_1754_, lean_object* v___x_1755_, lean_object* v___x_1756_, lean_object* v___x_1757_, lean_object* v_fst_1758_, lean_object* v_toPure_1759_, uint8_t v_____do__lift_1760_){
_start:
{
if (v_____do__lift_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec(v_toPure_1759_);
lean_dec(v_fst_1758_);
lean_dec_ref(v___x_1757_);
lean_dec_ref(v___x_1756_);
lean_dec(v___x_1755_);
lean_dec(v_fst_1754_);
lean_dec(v_fst_1753_);
v___x_1761_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqHEq___boxed), 7, 2);
lean_closure_set(v___x_1761_, 0, v___x_1748_);
lean_closure_set(v___x_1761_, 1, v_a_1749_);
v___x_1762_ = lean_apply_2(v_inst_1750_, lean_box(0), v___x_1761_);
v___x_1763_ = lean_apply_4(v_toBind_1751_, lean_box(0), lean_box(0), v___x_1762_, v___f_1752_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_dec(v___f_1752_);
lean_dec(v_toBind_1751_);
lean_dec(v_inst_1750_);
lean_dec_ref(v_a_1749_);
lean_dec_ref(v___x_1748_);
v___x_1764_ = lean_box(0);
v___x_1765_ = lean_array_push(v_fst_1753_, v___x_1764_);
v___x_1766_ = lean_array_push(v_fst_1754_, v___x_1755_);
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1756_);
lean_ctor_set(v___x_1767_, 1, v___x_1757_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1765_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1770_, 0, v_fst_1758_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v___x_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
v___x_1772_ = lean_apply_2(v_toPure_1759_, lean_box(0), v___x_1771_);
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object* v___x_1773_, lean_object* v_a_1774_, lean_object* v_inst_1775_, lean_object* v_toBind_1776_, lean_object* v___f_1777_, lean_object* v_fst_1778_, lean_object* v_fst_1779_, lean_object* v___x_1780_, lean_object* v___x_1781_, lean_object* v___x_1782_, lean_object* v_fst_1783_, lean_object* v_toPure_1784_, lean_object* v_____do__lift_1785_){
_start:
{
uint8_t v_____do__lift_12387__boxed_1786_; lean_object* v_res_1787_; 
v_____do__lift_12387__boxed_1786_ = lean_unbox(v_____do__lift_1785_);
v_res_1787_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__9(v___x_1773_, v_a_1774_, v_inst_1775_, v_toBind_1776_, v___f_1777_, v_fst_1778_, v_fst_1779_, v___x_1780_, v___x_1781_, v___x_1782_, v_fst_1783_, v_toPure_1784_, v_____do__lift_12387__boxed_1786_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object* v_toPure_1788_, uint8_t v_addEqualities_1789_, lean_object* v_inst_1790_, lean_object* v_toBind_1791_, lean_object* v_a_1792_, lean_object* v_x_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v_snd_1795_; lean_object* v_snd_1796_; lean_object* v_snd_1797_; lean_object* v_snd_1798_; lean_object* v_fst_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1905_; 
v_snd_1795_ = lean_ctor_get(v___y_1794_, 1);
lean_inc(v_snd_1795_);
v_snd_1796_ = lean_ctor_get(v_snd_1795_, 1);
lean_inc(v_snd_1796_);
v_snd_1797_ = lean_ctor_get(v_snd_1796_, 1);
lean_inc(v_snd_1797_);
v_snd_1798_ = lean_ctor_get(v_snd_1797_, 1);
lean_inc(v_snd_1798_);
v_fst_1799_ = lean_ctor_get(v___y_1794_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___y_1794_);
if (v_isSharedCheck_1905_ == 0)
{
lean_object* v_unused_1906_; 
v_unused_1906_ = lean_ctor_get(v___y_1794_, 1);
lean_dec(v_unused_1906_);
v___x_1801_ = v___y_1794_;
v_isShared_1802_ = v_isSharedCheck_1905_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_fst_1799_);
lean_dec(v___y_1794_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1905_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v_fst_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1903_; 
v_fst_1803_ = lean_ctor_get(v_snd_1795_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_snd_1795_);
if (v_isSharedCheck_1903_ == 0)
{
lean_object* v_unused_1904_; 
v_unused_1904_ = lean_ctor_get(v_snd_1795_, 1);
lean_dec(v_unused_1904_);
v___x_1805_ = v_snd_1795_;
v_isShared_1806_ = v_isSharedCheck_1903_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_fst_1803_);
lean_dec(v_snd_1795_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1903_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v_fst_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1901_; 
v_fst_1807_ = lean_ctor_get(v_snd_1796_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v_snd_1796_);
if (v_isSharedCheck_1901_ == 0)
{
lean_object* v_unused_1902_; 
v_unused_1902_ = lean_ctor_get(v_snd_1796_, 1);
lean_dec(v_unused_1902_);
v___x_1809_ = v_snd_1796_;
v_isShared_1810_ = v_isSharedCheck_1901_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_fst_1807_);
lean_dec(v_snd_1796_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1901_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v_fst_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1899_; 
v_fst_1811_ = lean_ctor_get(v_snd_1797_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_snd_1797_);
if (v_isSharedCheck_1899_ == 0)
{
lean_object* v_unused_1900_; 
v_unused_1900_ = lean_ctor_get(v_snd_1797_, 1);
lean_dec(v_unused_1900_);
v___x_1813_ = v_snd_1797_;
v_isShared_1814_ = v_isSharedCheck_1899_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_fst_1811_);
lean_dec(v_snd_1797_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1899_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v_array_1815_; lean_object* v_start_1816_; lean_object* v_stop_1817_; uint8_t v___x_1818_; 
v_array_1815_ = lean_ctor_get(v_snd_1798_, 0);
v_start_1816_ = lean_ctor_get(v_snd_1798_, 1);
v_stop_1817_ = lean_ctor_get(v_snd_1798_, 2);
v___x_1818_ = lean_nat_dec_lt(v_start_1816_, v_stop_1817_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1820_; 
lean_dec_ref(v_a_1792_);
lean_dec(v_toBind_1791_);
lean_dec(v_inst_1790_);
if (v_isShared_1814_ == 0)
{
v___x_1820_ = v___x_1813_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_fst_1811_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v_snd_1798_);
v___x_1820_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1822_; 
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 1, v___x_1820_);
v___x_1822_ = v___x_1809_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_fst_1807_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1822_);
v___x_1824_ = v___x_1805_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_fst_1803_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
lean_object* v___x_1826_; 
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v___x_1824_);
v___x_1826_ = v___x_1801_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_fst_1799_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v___x_1824_);
v___x_1826_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
v___x_1828_ = lean_apply_2(v_toPure_1788_, lean_box(0), v___x_1827_);
return v___x_1828_;
}
}
}
}
}
else
{
lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1895_; 
lean_inc(v_stop_1817_);
lean_inc(v_start_1816_);
lean_inc_ref(v_array_1815_);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_snd_1798_);
if (v_isSharedCheck_1895_ == 0)
{
lean_object* v_unused_1896_; lean_object* v_unused_1897_; lean_object* v_unused_1898_; 
v_unused_1896_ = lean_ctor_get(v_snd_1798_, 2);
lean_dec(v_unused_1896_);
v_unused_1897_ = lean_ctor_get(v_snd_1798_, 1);
lean_dec(v_unused_1897_);
v_unused_1898_ = lean_ctor_get(v_snd_1798_, 0);
lean_dec(v_unused_1898_);
v___x_1834_ = v_snd_1798_;
v_isShared_1835_ = v_isSharedCheck_1895_;
goto v_resetjp_1833_;
}
else
{
lean_dec(v_snd_1798_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1895_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v_array_1836_; lean_object* v_start_1837_; lean_object* v_stop_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1843_; 
v_array_1836_ = lean_ctor_get(v_fst_1811_, 0);
v_start_1837_ = lean_ctor_get(v_fst_1811_, 1);
v_stop_1838_ = lean_ctor_get(v_fst_1811_, 2);
v___x_1839_ = lean_array_fget(v_array_1815_, v_start_1816_);
v___x_1840_ = lean_unsigned_to_nat(1u);
v___x_1841_ = lean_nat_add(v_start_1816_, v___x_1840_);
lean_dec(v_start_1816_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 1, v___x_1841_);
v___x_1843_ = v___x_1834_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_array_1815_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v___x_1841_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_stop_1817_);
v___x_1843_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_nat_dec_lt(v_start_1837_, v_stop_1838_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1846_; 
lean_dec(v___x_1839_);
lean_dec_ref(v_a_1792_);
lean_dec(v_toBind_1791_);
lean_dec(v_inst_1790_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 1, v___x_1843_);
v___x_1846_ = v___x_1813_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_fst_1811_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v___x_1843_);
v___x_1846_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1848_; 
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 1, v___x_1846_);
v___x_1848_ = v___x_1809_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_fst_1807_);
lean_ctor_set(v_reuseFailAlloc_1857_, 1, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1850_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1848_);
v___x_1850_ = v___x_1805_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_fst_1803_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1852_; 
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v___x_1850_);
v___x_1852_ = v___x_1801_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_fst_1799_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v___x_1850_);
v___x_1852_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
v___x_1854_ = lean_apply_2(v_toPure_1788_, lean_box(0), v___x_1853_);
return v___x_1854_;
}
}
}
}
}
else
{
lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1890_; 
lean_inc(v_stop_1838_);
lean_inc(v_start_1837_);
lean_inc_ref(v_array_1836_);
v_isSharedCheck_1890_ = !lean_is_exclusive(v_fst_1811_);
if (v_isSharedCheck_1890_ == 0)
{
lean_object* v_unused_1891_; lean_object* v_unused_1892_; lean_object* v_unused_1893_; 
v_unused_1891_ = lean_ctor_get(v_fst_1811_, 2);
lean_dec(v_unused_1891_);
v_unused_1892_ = lean_ctor_get(v_fst_1811_, 1);
lean_dec(v_unused_1892_);
v_unused_1893_ = lean_ctor_get(v_fst_1811_, 0);
lean_dec(v_unused_1893_);
v___x_1860_ = v_fst_1811_;
v_isShared_1861_ = v_isSharedCheck_1890_;
goto v_resetjp_1859_;
}
else
{
lean_dec(v_fst_1811_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1890_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1865_; 
v___x_1862_ = lean_array_fget(v_array_1836_, v_start_1837_);
v___x_1863_ = lean_nat_add(v_start_1837_, v___x_1840_);
lean_dec(v_start_1837_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 1, v___x_1863_);
v___x_1865_ = v___x_1860_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_array_1836_);
lean_ctor_set(v_reuseFailAlloc_1889_, 1, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1889_, 2, v_stop_1838_);
v___x_1865_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
if (v_addEqualities_1789_ == 0)
{
lean_dec(v___x_1862_);
lean_dec_ref(v_a_1792_);
lean_dec(v_toBind_1791_);
lean_dec(v_inst_1790_);
goto v___jp_1866_;
}
else
{
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v___f_1884_; lean_object* v___f_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
lean_del_object(v___x_1813_);
lean_del_object(v___x_1809_);
lean_del_object(v___x_1805_);
lean_del_object(v___x_1801_);
lean_inc_n(v_toBind_1791_, 2);
lean_inc_n(v_inst_1790_, 2);
lean_inc(v_toPure_1788_);
lean_inc_ref(v___x_1843_);
lean_inc_ref(v___x_1865_);
lean_inc(v_fst_1807_);
lean_inc(v_fst_1803_);
lean_inc(v_fst_1799_);
v___f_1884_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__8), 9, 8);
lean_closure_set(v___f_1884_, 0, v_fst_1799_);
lean_closure_set(v___f_1884_, 1, v_fst_1803_);
lean_closure_set(v___f_1884_, 2, v_fst_1807_);
lean_closure_set(v___f_1884_, 3, v___x_1865_);
lean_closure_set(v___f_1884_, 4, v___x_1843_);
lean_closure_set(v___f_1884_, 5, v_toPure_1788_);
lean_closure_set(v___f_1884_, 6, v_inst_1790_);
lean_closure_set(v___f_1884_, 7, v_toBind_1791_);
lean_inc_ref(v_a_1792_);
v___f_1885_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed), 13, 12);
lean_closure_set(v___f_1885_, 0, v___x_1862_);
lean_closure_set(v___f_1885_, 1, v_a_1792_);
lean_closure_set(v___f_1885_, 2, v_inst_1790_);
lean_closure_set(v___f_1885_, 3, v_toBind_1791_);
lean_closure_set(v___f_1885_, 4, v___f_1884_);
lean_closure_set(v___f_1885_, 5, v_fst_1803_);
lean_closure_set(v___f_1885_, 6, v_fst_1807_);
lean_closure_set(v___f_1885_, 7, v___x_1839_);
lean_closure_set(v___f_1885_, 8, v___x_1865_);
lean_closure_set(v___f_1885_, 9, v___x_1843_);
lean_closure_set(v___f_1885_, 10, v_fst_1799_);
lean_closure_set(v___f_1885_, 11, v_toPure_1788_);
v___x_1886_ = lean_alloc_closure((void*)(l_Lean_Meta_isProof___boxed), 6, 1);
lean_closure_set(v___x_1886_, 0, v_a_1792_);
v___x_1887_ = lean_apply_2(v_inst_1790_, lean_box(0), v___x_1886_);
v___x_1888_ = lean_apply_4(v_toBind_1791_, lean_box(0), lean_box(0), v___x_1887_, v___f_1885_);
return v___x_1888_;
}
else
{
lean_dec(v___x_1862_);
lean_dec_ref(v_a_1792_);
lean_dec(v_toBind_1791_);
lean_dec(v_inst_1790_);
goto v___jp_1866_;
}
}
v___jp_1866_:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1871_; 
v___x_1867_ = lean_box(0);
v___x_1868_ = lean_array_push(v_fst_1803_, v___x_1867_);
v___x_1869_ = lean_array_push(v_fst_1807_, v___x_1839_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 1, v___x_1843_);
lean_ctor_set(v___x_1813_, 0, v___x_1865_);
v___x_1871_ = v___x_1813_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v___x_1843_);
v___x_1871_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1873_; 
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 1, v___x_1871_);
lean_ctor_set(v___x_1809_, 0, v___x_1869_);
v___x_1873_ = v___x_1809_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1869_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v___x_1871_);
v___x_1873_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1875_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1873_);
lean_ctor_set(v___x_1805_, 0, v___x_1868_);
v___x_1875_ = v___x_1805_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1868_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1877_; 
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v___x_1875_);
v___x_1877_ = v___x_1801_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_fst_1799_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
v___x_1879_ = lean_apply_2(v_toPure_1788_, lean_box(0), v___x_1878_);
return v___x_1879_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object* v_toPure_1907_, lean_object* v_addEqualities_1908_, lean_object* v_inst_1909_, lean_object* v_toBind_1910_, lean_object* v_a_1911_, lean_object* v_x_1912_, lean_object* v___y_1913_){
_start:
{
uint8_t v_addEqualities_boxed_1914_; lean_object* v_res_1915_; 
v_addEqualities_boxed_1914_ = lean_unbox(v_addEqualities_1908_);
v_res_1915_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__10(v_toPure_1907_, v_addEqualities_boxed_1914_, v_inst_1909_, v_toBind_1910_, v_a_1911_, v_x_1912_, v___y_1913_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object* v_toPure_1916_, lean_object* v_____do__lift_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = lean_apply_2(v_toPure_1916_, lean_box(0), v_____do__lift_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object* v_toPure_1919_, lean_object* v_____do__lift_1920_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_apply_2(v_toPure_1919_, lean_box(0), v_____do__lift_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object* v_fst_1922_, lean_object* v_fst_1923_, lean_object* v_____do__lift_1924_, lean_object* v_toPure_1925_, lean_object* v_____do__lift_1926_){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_fst_1922_);
lean_ctor_set(v___x_1927_, 1, v_fst_1923_);
v___x_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_____do__lift_1926_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v_____do__lift_1924_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = lean_apply_2(v_toPure_1925_, lean_box(0), v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object* v_fst_1931_, lean_object* v_fst_1932_, lean_object* v_toPure_1933_, lean_object* v_fst_1934_, lean_object* v_inst_1935_, lean_object* v_toBind_1936_, lean_object* v_____do__lift_1937_){
_start:
{
lean_object* v___f_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___f_1938_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__13), 5, 4);
lean_closure_set(v___f_1938_, 0, v_fst_1931_);
lean_closure_set(v___f_1938_, 1, v_fst_1932_);
lean_closure_set(v___f_1938_, 2, v_____do__lift_1937_);
lean_closure_set(v___f_1938_, 3, v_toPure_1933_);
v___x_1939_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1939_, 0, v_fst_1934_);
v___x_1940_ = lean_apply_2(v_inst_1935_, lean_box(0), v___x_1939_);
v___x_1941_ = lean_apply_4(v_toBind_1936_, lean_box(0), lean_box(0), v___x_1940_, v___f_1938_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object* v_toPure_1942_, lean_object* v_inst_1943_, lean_object* v_toBind_1944_, lean_object* v_motiveArgs_1945_, lean_object* v_____s_1946_){
_start:
{
lean_object* v_snd_1947_; lean_object* v_snd_1948_; lean_object* v_fst_1949_; lean_object* v_fst_1950_; lean_object* v_fst_1951_; lean_object* v___f_1952_; uint8_t v___x_1953_; uint8_t v___x_1954_; uint8_t v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v_snd_1947_ = lean_ctor_get(v_____s_1946_, 1);
lean_inc(v_snd_1947_);
v_snd_1948_ = lean_ctor_get(v_snd_1947_, 1);
lean_inc(v_snd_1948_);
v_fst_1949_ = lean_ctor_get(v_____s_1946_, 0);
lean_inc_n(v_fst_1949_, 2);
lean_dec_ref(v_____s_1946_);
v_fst_1950_ = lean_ctor_get(v_snd_1947_, 0);
lean_inc(v_fst_1950_);
lean_dec(v_snd_1947_);
v_fst_1951_ = lean_ctor_get(v_snd_1948_, 0);
lean_inc(v_fst_1951_);
lean_dec(v_snd_1948_);
lean_inc(v_toBind_1944_);
lean_inc(v_inst_1943_);
v___f_1952_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__14), 7, 6);
lean_closure_set(v___f_1952_, 0, v_fst_1950_);
lean_closure_set(v___f_1952_, 1, v_fst_1951_);
lean_closure_set(v___f_1952_, 2, v_toPure_1942_);
lean_closure_set(v___f_1952_, 3, v_fst_1949_);
lean_closure_set(v___f_1952_, 4, v_inst_1943_);
lean_closure_set(v___f_1952_, 5, v_toBind_1944_);
v___x_1953_ = 0;
v___x_1954_ = 1;
v___x_1955_ = 1;
v___x_1956_ = lean_box(v___x_1953_);
v___x_1957_ = lean_box(v___x_1954_);
v___x_1958_ = lean_box(v___x_1953_);
v___x_1959_ = lean_box(v___x_1954_);
v___x_1960_ = lean_box(v___x_1955_);
v___x_1961_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1961_, 0, v_motiveArgs_1945_);
lean_closure_set(v___x_1961_, 1, v_fst_1949_);
lean_closure_set(v___x_1961_, 2, v___x_1956_);
lean_closure_set(v___x_1961_, 3, v___x_1957_);
lean_closure_set(v___x_1961_, 4, v___x_1958_);
lean_closure_set(v___x_1961_, 5, v___x_1959_);
lean_closure_set(v___x_1961_, 6, v___x_1960_);
v___x_1962_ = lean_apply_2(v_inst_1943_, lean_box(0), v___x_1961_);
v___x_1963_ = lean_apply_4(v_toBind_1944_, lean_box(0), lean_box(0), v___x_1962_, v___f_1952_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object* v_toMatcherInfo_1966_, lean_object* v_discrs_x27_1967_, lean_object* v_motiveArgs_1968_, lean_object* v_inst_1969_, lean_object* v___f_1970_, lean_object* v_toBind_1971_, lean_object* v___f_1972_, lean_object* v_motiveBody_x27_1973_){
_start:
{
lean_object* v_discrInfos_1974_; lean_object* v___x_1975_; lean_object* v_addHEqualities_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; size_t v_sz_1985_; size_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v_discrInfos_1974_ = lean_ctor_get(v_toMatcherInfo_1966_, 4);
lean_inc_ref(v_discrInfos_1974_);
lean_dec_ref(v_toMatcherInfo_1966_);
v___x_1975_ = lean_unsigned_to_nat(0u);
v_addHEqualities_1976_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_1977_ = lean_array_get_size(v_discrs_x27_1967_);
v___x_1978_ = l_Array_toSubarray___redArg(v_discrs_x27_1967_, v___x_1975_, v___x_1977_);
v___x_1979_ = lean_array_get_size(v_discrInfos_1974_);
v___x_1980_ = l_Array_toSubarray___redArg(v_discrInfos_1974_, v___x_1975_, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1978_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_addHEqualities_1976_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1983_, 0, v_addHEqualities_1976_);
lean_ctor_set(v___x_1983_, 1, v___x_1982_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_motiveBody_x27_1973_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v_sz_1985_ = lean_array_size(v_motiveArgs_1968_);
v___x_1986_ = ((size_t)0ULL);
v___x_1987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1969_, v_motiveArgs_1968_, v___f_1970_, v_sz_1985_, v___x_1986_, v___x_1984_);
v___x_1988_ = lean_apply_4(v_toBind_1971_, lean_box(0), lean_box(0), v___x_1987_, v___f_1972_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object* v_onMotive_1989_, lean_object* v_motiveArgs_1990_, lean_object* v_motiveBody_1991_, lean_object* v_toBind_1992_, lean_object* v___f_1993_, lean_object* v_____r_1994_){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_apply_2(v_onMotive_1989_, v_motiveArgs_1990_, v_motiveBody_1991_);
v___x_1996_ = lean_apply_4(v_toBind_1992_, lean_box(0), lean_box(0), v___x_1995_, v___f_1993_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object* v___f_1997_, lean_object* v_____r_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_apply_1(v___f_1997_, v_____r_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object* v_toPure_2000_, lean_object* v_inst_2001_, lean_object* v_toBind_2002_, lean_object* v_toMatcherInfo_2003_, lean_object* v_discrs_x27_2004_, lean_object* v_inst_2005_, lean_object* v___f_2006_, lean_object* v_onMotive_2007_, lean_object* v_discrs_2008_, lean_object* v_inst_2009_, lean_object* v_motiveArgs_2010_, lean_object* v_motiveBody_2011_){
_start:
{
lean_object* v___f_2012_; lean_object* v___f_2013_; lean_object* v___f_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; 
lean_inc_ref_n(v_motiveArgs_2010_, 3);
lean_inc_n(v_toBind_2002_, 3);
v___f_2012_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__15), 5, 4);
lean_closure_set(v___f_2012_, 0, v_toPure_2000_);
lean_closure_set(v___f_2012_, 1, v_inst_2001_);
lean_closure_set(v___f_2012_, 2, v_toBind_2002_);
lean_closure_set(v___f_2012_, 3, v_motiveArgs_2010_);
lean_inc_ref(v_inst_2005_);
v___f_2013_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16), 8, 7);
lean_closure_set(v___f_2013_, 0, v_toMatcherInfo_2003_);
lean_closure_set(v___f_2013_, 1, v_discrs_x27_2004_);
lean_closure_set(v___f_2013_, 2, v_motiveArgs_2010_);
lean_closure_set(v___f_2013_, 3, v_inst_2005_);
lean_closure_set(v___f_2013_, 4, v___f_2006_);
lean_closure_set(v___f_2013_, 5, v_toBind_2002_);
lean_closure_set(v___f_2013_, 6, v___f_2012_);
lean_inc_ref(v___f_2013_);
lean_inc_ref(v_motiveBody_2011_);
lean_inc(v_onMotive_2007_);
v___f_2014_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__17), 6, 5);
lean_closure_set(v___f_2014_, 0, v_onMotive_2007_);
lean_closure_set(v___f_2014_, 1, v_motiveArgs_2010_);
lean_closure_set(v___f_2014_, 2, v_motiveBody_2011_);
lean_closure_set(v___f_2014_, 3, v_toBind_2002_);
lean_closure_set(v___f_2014_, 4, v___f_2013_);
v___x_2015_ = lean_array_get_size(v_motiveArgs_2010_);
v___x_2016_ = lean_array_get_size(v_discrs_2008_);
v___x_2017_ = lean_nat_dec_eq(v___x_2015_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v___f_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref(v___f_2013_);
lean_dec_ref(v_motiveBody_2011_);
lean_dec_ref(v_motiveArgs_2010_);
lean_dec(v_onMotive_2007_);
v___f_2018_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__18), 2, 1);
lean_closure_set(v___f_2018_, 0, v___f_2014_);
v___x_2019_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_2020_ = l_Nat_reprFast(v___x_2016_);
v___x_2021_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
v___x_2022_ = l_Lean_MessageData_ofFormat(v___x_2021_);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2019_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_2025_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2023_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
v___x_2026_ = l_Lean_throwError___redArg(v_inst_2005_, v_inst_2009_, v___x_2025_);
v___x_2027_ = lean_apply_4(v_toBind_2002_, lean_box(0), lean_box(0), v___x_2026_, v___f_2018_);
return v___x_2027_;
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
lean_dec_ref(v___f_2014_);
lean_dec_ref(v_inst_2009_);
lean_dec_ref(v_inst_2005_);
v___x_2028_ = lean_box(0);
v___x_2029_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__17(v_onMotive_2007_, v_motiveArgs_2010_, v_motiveBody_2011_, v_toBind_2002_, v___f_2013_, v___x_2028_);
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object* v_toPure_2030_, lean_object* v_inst_2031_, lean_object* v_toBind_2032_, lean_object* v_toMatcherInfo_2033_, lean_object* v_discrs_x27_2034_, lean_object* v_inst_2035_, lean_object* v___f_2036_, lean_object* v_onMotive_2037_, lean_object* v_discrs_2038_, lean_object* v_inst_2039_, lean_object* v_motiveArgs_2040_, lean_object* v_motiveBody_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__19(v_toPure_2030_, v_inst_2031_, v_toBind_2032_, v_toMatcherInfo_2033_, v_discrs_x27_2034_, v_inst_2035_, v___f_2036_, v_onMotive_2037_, v_discrs_2038_, v_inst_2039_, v_motiveArgs_2040_, v_motiveBody_2041_);
lean_dec_ref(v_discrs_2038_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object* v_fst_2043_, lean_object* v_numParams_2044_, lean_object* v_numDiscrs_2045_, lean_object* v_altInfos_2046_, lean_object* v_uElimPos_x3f_2047_, lean_object* v_snd_2048_, lean_object* v_overlaps_2049_, lean_object* v_matcherName_2050_, lean_object* v_matcherLevels_2051_, lean_object* v_params_x27_2052_, lean_object* v_fst_2053_, lean_object* v_discrs_x27_2054_, lean_object* v_fst_2055_, lean_object* v_toPure_2056_, lean_object* v_____do__lift_2057_){
_start:
{
lean_object* v_remaining_x27_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v_remaining_x27_2058_ = l_Array_append___redArg(v_fst_2043_, v_____do__lift_2057_);
v___x_2059_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2059_, 0, v_numParams_2044_);
lean_ctor_set(v___x_2059_, 1, v_numDiscrs_2045_);
lean_ctor_set(v___x_2059_, 2, v_altInfos_2046_);
lean_ctor_set(v___x_2059_, 3, v_uElimPos_x3f_2047_);
lean_ctor_set(v___x_2059_, 4, v_snd_2048_);
lean_ctor_set(v___x_2059_, 5, v_overlaps_2049_);
v___x_2060_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_matcherName_2050_);
lean_ctor_set(v___x_2060_, 2, v_matcherLevels_2051_);
lean_ctor_set(v___x_2060_, 3, v_params_x27_2052_);
lean_ctor_set(v___x_2060_, 4, v_fst_2053_);
lean_ctor_set(v___x_2060_, 5, v_discrs_x27_2054_);
lean_ctor_set(v___x_2060_, 6, v_fst_2055_);
lean_ctor_set(v___x_2060_, 7, v_remaining_x27_2058_);
v___x_2061_ = lean_apply_2(v_toPure_2056_, lean_box(0), v___x_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object* v_fst_2062_, lean_object* v_numParams_2063_, lean_object* v_numDiscrs_2064_, lean_object* v_altInfos_2065_, lean_object* v_uElimPos_x3f_2066_, lean_object* v_snd_2067_, lean_object* v_overlaps_2068_, lean_object* v_matcherName_2069_, lean_object* v_matcherLevels_2070_, lean_object* v_params_x27_2071_, lean_object* v_fst_2072_, lean_object* v_discrs_x27_2073_, lean_object* v_fst_2074_, lean_object* v_toPure_2075_, lean_object* v_____do__lift_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__20(v_fst_2062_, v_numParams_2063_, v_numDiscrs_2064_, v_altInfos_2065_, v_uElimPos_x3f_2066_, v_snd_2067_, v_overlaps_2068_, v_matcherName_2069_, v_matcherLevels_2070_, v_params_x27_2071_, v_fst_2072_, v_discrs_x27_2073_, v_fst_2074_, v_toPure_2075_, v_____do__lift_2076_);
lean_dec_ref(v_____do__lift_2076_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object* v_fst_2078_, lean_object* v_numParams_2079_, lean_object* v_numDiscrs_2080_, lean_object* v_altInfos_2081_, lean_object* v_uElimPos_x3f_2082_, lean_object* v_snd_2083_, lean_object* v_overlaps_2084_, lean_object* v_matcherName_2085_, lean_object* v_matcherLevels_2086_, lean_object* v_params_x27_2087_, lean_object* v_fst_2088_, lean_object* v_discrs_x27_2089_, lean_object* v_toPure_2090_, lean_object* v_onRemaining_2091_, lean_object* v_remaining_2092_, lean_object* v_toBind_2093_, lean_object* v_____s_2094_){
_start:
{
lean_object* v_fst_2095_; lean_object* v___f_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v_fst_2095_ = lean_ctor_get(v_____s_2094_, 0);
lean_inc(v_fst_2095_);
lean_dec_ref(v_____s_2094_);
v___f_2096_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed), 15, 14);
lean_closure_set(v___f_2096_, 0, v_fst_2078_);
lean_closure_set(v___f_2096_, 1, v_numParams_2079_);
lean_closure_set(v___f_2096_, 2, v_numDiscrs_2080_);
lean_closure_set(v___f_2096_, 3, v_altInfos_2081_);
lean_closure_set(v___f_2096_, 4, v_uElimPos_x3f_2082_);
lean_closure_set(v___f_2096_, 5, v_snd_2083_);
lean_closure_set(v___f_2096_, 6, v_overlaps_2084_);
lean_closure_set(v___f_2096_, 7, v_matcherName_2085_);
lean_closure_set(v___f_2096_, 8, v_matcherLevels_2086_);
lean_closure_set(v___f_2096_, 9, v_params_x27_2087_);
lean_closure_set(v___f_2096_, 10, v_fst_2088_);
lean_closure_set(v___f_2096_, 11, v_discrs_x27_2089_);
lean_closure_set(v___f_2096_, 12, v_fst_2095_);
lean_closure_set(v___f_2096_, 13, v_toPure_2090_);
v___x_2097_ = lean_apply_1(v_onRemaining_2091_, v_remaining_2092_);
v___x_2098_ = lean_apply_4(v_toBind_2093_, lean_box(0), lean_box(0), v___x_2097_, v___f_2096_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_fst_2099_ = _args[0];
lean_object* v_numParams_2100_ = _args[1];
lean_object* v_numDiscrs_2101_ = _args[2];
lean_object* v_altInfos_2102_ = _args[3];
lean_object* v_uElimPos_x3f_2103_ = _args[4];
lean_object* v_snd_2104_ = _args[5];
lean_object* v_overlaps_2105_ = _args[6];
lean_object* v_matcherName_2106_ = _args[7];
lean_object* v_matcherLevels_2107_ = _args[8];
lean_object* v_params_x27_2108_ = _args[9];
lean_object* v_fst_2109_ = _args[10];
lean_object* v_discrs_x27_2110_ = _args[11];
lean_object* v_toPure_2111_ = _args[12];
lean_object* v_onRemaining_2112_ = _args[13];
lean_object* v_remaining_2113_ = _args[14];
lean_object* v_toBind_2114_ = _args[15];
lean_object* v_____s_2115_ = _args[16];
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__21(v_fst_2099_, v_numParams_2100_, v_numDiscrs_2101_, v_altInfos_2102_, v_uElimPos_x3f_2103_, v_snd_2104_, v_overlaps_2105_, v_matcherName_2106_, v_matcherLevels_2107_, v_params_x27_2108_, v_fst_2109_, v_discrs_x27_2110_, v_toPure_2111_, v_onRemaining_2112_, v_remaining_2113_, v_toBind_2114_, v_____s_2115_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object* v_toPure_2117_, lean_object* v_next_2118_, lean_object* v_G_2119_, lean_object* v_____do__lift_2120_){
_start:
{
if (lean_obj_tag(v_____do__lift_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v___x_2122_; 
lean_dec(v_G_2119_);
v_a_2121_ = lean_ctor_get(v_____do__lift_2120_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v_____do__lift_2120_, 1);
v___x_2122_ = lean_apply_2(v_toPure_2117_, lean_box(0), v_a_2121_);
return v___x_2122_;
}
else
{
lean_object* v_a_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
lean_dec(v_toPure_2117_);
v_a_2123_ = lean_ctor_get(v_____do__lift_2120_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v_____do__lift_2120_, 1);
v___x_2124_ = lean_unsigned_to_nat(1u);
v___x_2125_ = lean_nat_add(v_next_2118_, v___x_2124_);
v___x_2126_ = lean_apply_4(v_G_2119_, v___x_2125_, v_a_2123_, lean_box(0), lean_box(0));
return v___x_2126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object* v_toPure_2127_, lean_object* v_next_2128_, lean_object* v_G_2129_, lean_object* v_____do__lift_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__22(v_toPure_2127_, v_next_2128_, v_G_2129_, v_____do__lift_2130_);
lean_dec(v_next_2128_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object* v_xs_2132_, lean_object* v_ys4_2133_, uint8_t v___x_2134_, uint8_t v___x_2135_, lean_object* v_inst_2136_, lean_object* v_alt_x27_2137_){
_start:
{
lean_object* v___x_2138_; uint8_t v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2138_ = l_Array_append___redArg(v_xs_2132_, v_ys4_2133_);
v___x_2139_ = 1;
v___x_2140_ = lean_box(v___x_2134_);
v___x_2141_ = lean_box(v___x_2135_);
v___x_2142_ = lean_box(v___x_2134_);
v___x_2143_ = lean_box(v___x_2135_);
v___x_2144_ = lean_box(v___x_2139_);
v___x_2145_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2145_, 0, v___x_2138_);
lean_closure_set(v___x_2145_, 1, v_alt_x27_2137_);
lean_closure_set(v___x_2145_, 2, v___x_2140_);
lean_closure_set(v___x_2145_, 3, v___x_2141_);
lean_closure_set(v___x_2145_, 4, v___x_2142_);
lean_closure_set(v___x_2145_, 5, v___x_2143_);
lean_closure_set(v___x_2145_, 6, v___x_2144_);
v___x_2146_ = lean_apply_2(v_inst_2136_, lean_box(0), v___x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object* v_xs_2147_, lean_object* v_ys4_2148_, lean_object* v___x_2149_, lean_object* v___x_2150_, lean_object* v_inst_2151_, lean_object* v_alt_x27_2152_){
_start:
{
uint8_t v___x_12840__boxed_2153_; uint8_t v___x_12841__boxed_2154_; lean_object* v_res_2155_; 
v___x_12840__boxed_2153_ = lean_unbox(v___x_2149_);
v___x_12841__boxed_2154_ = lean_unbox(v___x_2150_);
v_res_2155_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__23(v_xs_2147_, v_ys4_2148_, v___x_12840__boxed_2153_, v___x_12841__boxed_2154_, v_inst_2151_, v_alt_x27_2152_);
lean_dec_ref(v_ys4_2148_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object* v_xs_2156_, lean_object* v_remaining_x27_2157_, lean_object* v_ys4_2158_, lean_object* v_onAlt_2159_, lean_object* v_next_2160_, lean_object* v_altType_2161_, lean_object* v_toBind_2162_, lean_object* v___f_2163_, lean_object* v_alt_2164_){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_inc_ref(v_remaining_x27_2157_);
lean_inc_ref(v_xs_2156_);
v___x_2165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2165_, 0, v_xs_2156_);
lean_ctor_set(v___x_2165_, 1, v_xs_2156_);
lean_ctor_set(v___x_2165_, 2, v_remaining_x27_2157_);
lean_ctor_set(v___x_2165_, 3, v_remaining_x27_2157_);
lean_ctor_set(v___x_2165_, 4, v_ys4_2158_);
v___x_2166_ = lean_apply_4(v_onAlt_2159_, v_next_2160_, v_altType_2161_, v___x_2165_, v_alt_2164_);
v___x_2167_ = lean_apply_4(v_toBind_2162_, lean_box(0), lean_box(0), v___x_2166_, v___f_2163_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object* v___x_2168_, lean_object* v_xs_2169_, lean_object* v_inst_2170_, lean_object* v_toBind_2171_, lean_object* v___f_2172_, lean_object* v_inst_2173_, lean_object* v_inst_2174_, lean_object* v_names_2175_){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_inc_ref(v_xs_2169_);
v___x_2176_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2176_, 0, v___x_2168_);
lean_closure_set(v___x_2176_, 1, v_xs_2169_);
v___x_2177_ = lean_apply_2(v_inst_2170_, lean_box(0), v___x_2176_);
v___x_2178_ = lean_apply_4(v_toBind_2171_, lean_box(0), lean_box(0), v___x_2177_, v___f_2172_);
v___x_2179_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_2173_, v_inst_2174_, v_xs_2169_, v_names_2175_, v___x_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object* v_xs_2180_, uint8_t v___x_2181_, uint8_t v___x_2182_, lean_object* v_inst_2183_, lean_object* v_remaining_x27_2184_, lean_object* v_onAlt_2185_, lean_object* v_next_2186_, lean_object* v_toBind_2187_, lean_object* v___x_2188_, lean_object* v_inst_2189_, lean_object* v_inst_2190_, lean_object* v___f_2191_, lean_object* v_ys4_2192_, lean_object* v_altType_2193_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___f_2196_; lean_object* v___f_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2194_ = lean_box(v___x_2181_);
v___x_2195_ = lean_box(v___x_2182_);
lean_inc(v_inst_2183_);
lean_inc_ref(v_ys4_2192_);
lean_inc_ref_n(v_xs_2180_, 2);
v___f_2196_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed), 6, 5);
lean_closure_set(v___f_2196_, 0, v_xs_2180_);
lean_closure_set(v___f_2196_, 1, v_ys4_2192_);
lean_closure_set(v___f_2196_, 2, v___x_2194_);
lean_closure_set(v___f_2196_, 3, v___x_2195_);
lean_closure_set(v___f_2196_, 4, v_inst_2183_);
lean_inc_n(v_toBind_2187_, 2);
v___f_2197_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__24), 9, 8);
lean_closure_set(v___f_2197_, 0, v_xs_2180_);
lean_closure_set(v___f_2197_, 1, v_remaining_x27_2184_);
lean_closure_set(v___f_2197_, 2, v_ys4_2192_);
lean_closure_set(v___f_2197_, 3, v_onAlt_2185_);
lean_closure_set(v___f_2197_, 4, v_next_2186_);
lean_closure_set(v___f_2197_, 5, v_altType_2193_);
lean_closure_set(v___f_2197_, 6, v_toBind_2187_);
lean_closure_set(v___f_2197_, 7, v___f_2196_);
lean_inc_ref(v_inst_2190_);
lean_inc_ref(v_inst_2189_);
lean_inc_ref(v___x_2188_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__25), 8, 7);
lean_closure_set(v___f_2198_, 0, v___x_2188_);
lean_closure_set(v___f_2198_, 1, v_xs_2180_);
lean_closure_set(v___f_2198_, 2, v_inst_2183_);
lean_closure_set(v___f_2198_, 3, v_toBind_2187_);
lean_closure_set(v___f_2198_, 4, v___f_2197_);
lean_closure_set(v___f_2198_, 5, v_inst_2189_);
lean_closure_set(v___f_2198_, 6, v_inst_2190_);
v___x_2199_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_2189_, v_inst_2190_, v___x_2188_, v___f_2191_, v___x_2181_);
v___x_2200_ = lean_apply_4(v_toBind_2187_, lean_box(0), lean_box(0), v___x_2199_, v___f_2198_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object* v_xs_2201_, lean_object* v___x_2202_, lean_object* v___x_2203_, lean_object* v_inst_2204_, lean_object* v_remaining_x27_2205_, lean_object* v_onAlt_2206_, lean_object* v_next_2207_, lean_object* v_toBind_2208_, lean_object* v___x_2209_, lean_object* v_inst_2210_, lean_object* v_inst_2211_, lean_object* v___f_2212_, lean_object* v_ys4_2213_, lean_object* v_altType_2214_){
_start:
{
uint8_t v___x_12893__boxed_2215_; uint8_t v___x_12894__boxed_2216_; lean_object* v_res_2217_; 
v___x_12893__boxed_2215_ = lean_unbox(v___x_2202_);
v___x_12894__boxed_2216_ = lean_unbox(v___x_2203_);
v_res_2217_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__26(v_xs_2201_, v___x_12893__boxed_2215_, v___x_12894__boxed_2216_, v_inst_2204_, v_remaining_x27_2205_, v_onAlt_2206_, v_next_2207_, v_toBind_2208_, v___x_2209_, v_inst_2210_, v_inst_2211_, v___f_2212_, v_ys4_2213_, v_altType_2214_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t v___x_2218_, uint8_t v___x_2219_, lean_object* v_inst_2220_, lean_object* v_remaining_x27_2221_, lean_object* v_onAlt_2222_, lean_object* v_next_2223_, lean_object* v_toBind_2224_, lean_object* v___x_2225_, lean_object* v_inst_2226_, lean_object* v_inst_2227_, lean_object* v___f_2228_, lean_object* v_fst_2229_, lean_object* v_xs_2230_, lean_object* v_altType_2231_){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___f_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2232_ = lean_box(v___x_2218_);
v___x_2233_ = lean_box(v___x_2219_);
lean_inc_ref(v_inst_2227_);
lean_inc_ref(v_inst_2226_);
v___f_2234_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed), 14, 12);
lean_closure_set(v___f_2234_, 0, v_xs_2230_);
lean_closure_set(v___f_2234_, 1, v___x_2232_);
lean_closure_set(v___f_2234_, 2, v___x_2233_);
lean_closure_set(v___f_2234_, 3, v_inst_2220_);
lean_closure_set(v___f_2234_, 4, v_remaining_x27_2221_);
lean_closure_set(v___f_2234_, 5, v_onAlt_2222_);
lean_closure_set(v___f_2234_, 6, v_next_2223_);
lean_closure_set(v___f_2234_, 7, v_toBind_2224_);
lean_closure_set(v___f_2234_, 8, v___x_2225_);
lean_closure_set(v___f_2234_, 9, v_inst_2226_);
lean_closure_set(v___f_2234_, 10, v_inst_2227_);
lean_closure_set(v___f_2234_, 11, v___f_2228_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_fst_2229_);
v___x_2236_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2226_, v_inst_2227_, v_altType_2231_, v___x_2235_, v___f_2234_, v___x_2218_, v___x_2218_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object* v___x_2237_, lean_object* v___x_2238_, lean_object* v_inst_2239_, lean_object* v_remaining_x27_2240_, lean_object* v_onAlt_2241_, lean_object* v_next_2242_, lean_object* v_toBind_2243_, lean_object* v___x_2244_, lean_object* v_inst_2245_, lean_object* v_inst_2246_, lean_object* v___f_2247_, lean_object* v_fst_2248_, lean_object* v_xs_2249_, lean_object* v_altType_2250_){
_start:
{
uint8_t v___x_12928__boxed_2251_; uint8_t v___x_12929__boxed_2252_; lean_object* v_res_2253_; 
v___x_12928__boxed_2251_ = lean_unbox(v___x_2237_);
v___x_12929__boxed_2252_ = lean_unbox(v___x_2238_);
v_res_2253_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__27(v___x_12928__boxed_2251_, v___x_12929__boxed_2252_, v_inst_2239_, v_remaining_x27_2240_, v_onAlt_2241_, v_next_2242_, v_toBind_2243_, v___x_2244_, v_inst_2245_, v_inst_2246_, v___f_2247_, v_fst_2248_, v_xs_2249_, v_altType_2250_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object* v_fst_2254_, lean_object* v___x_2255_, lean_object* v___x_2256_, lean_object* v___x_2257_, lean_object* v_toPure_2258_, lean_object* v_alt_x27_2259_){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2260_ = lean_array_push(v_fst_2254_, v_alt_x27_2259_);
v___x_2261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2255_);
lean_ctor_set(v___x_2261_, 1, v___x_2256_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2257_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2260_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
v___x_2265_ = lean_apply_2(v_toPure_2258_, lean_box(0), v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object* v___x_2266_, lean_object* v_toPure_2267_, lean_object* v_toBind_2268_, lean_object* v___f_2269_, uint8_t v___x_2270_, uint8_t v___x_2271_, lean_object* v_inst_2272_, lean_object* v_remaining_x27_2273_, lean_object* v_onAlt_2274_, lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v___f_2277_, lean_object* v_fst_2278_, lean_object* v_next_2279_, lean_object* v_acc_2280_, lean_object* v_h_2281_, lean_object* v_G_2282_){
_start:
{
uint8_t v___x_2283_; 
v___x_2283_ = lean_nat_dec_lt(v_next_2279_, v___x_2266_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; 
lean_dec(v_G_2282_);
lean_dec(v_next_2279_);
lean_dec(v_fst_2278_);
lean_dec(v___f_2277_);
lean_dec_ref(v_inst_2276_);
lean_dec_ref(v_inst_2275_);
lean_dec(v_onAlt_2274_);
lean_dec_ref(v_remaining_x27_2273_);
lean_dec(v_inst_2272_);
lean_dec(v___f_2269_);
lean_dec(v_toBind_2268_);
v___x_2284_ = lean_apply_2(v_toPure_2267_, lean_box(0), v_acc_2280_);
return v___x_2284_;
}
else
{
lean_object* v_snd_2285_; lean_object* v_snd_2286_; lean_object* v_snd_2287_; lean_object* v_fst_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2398_; 
v_snd_2285_ = lean_ctor_get(v_acc_2280_, 1);
lean_inc(v_snd_2285_);
v_snd_2286_ = lean_ctor_get(v_snd_2285_, 1);
lean_inc(v_snd_2286_);
v_snd_2287_ = lean_ctor_get(v_snd_2286_, 1);
lean_inc(v_snd_2287_);
v_fst_2288_ = lean_ctor_get(v_acc_2280_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_acc_2280_);
if (v_isSharedCheck_2398_ == 0)
{
lean_object* v_unused_2399_; 
v_unused_2399_ = lean_ctor_get(v_acc_2280_, 1);
lean_dec(v_unused_2399_);
v___x_2290_ = v_acc_2280_;
v_isShared_2291_ = v_isSharedCheck_2398_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_fst_2288_);
lean_dec(v_acc_2280_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2398_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v_fst_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2396_; 
v_fst_2292_ = lean_ctor_get(v_snd_2285_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_snd_2285_);
if (v_isSharedCheck_2396_ == 0)
{
lean_object* v_unused_2397_; 
v_unused_2397_ = lean_ctor_get(v_snd_2285_, 1);
lean_dec(v_unused_2397_);
v___x_2294_ = v_snd_2285_;
v_isShared_2295_ = v_isSharedCheck_2396_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_fst_2292_);
lean_dec(v_snd_2285_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2396_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v_fst_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2394_; 
v_fst_2296_ = lean_ctor_get(v_snd_2286_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v_snd_2286_);
if (v_isSharedCheck_2394_ == 0)
{
lean_object* v_unused_2395_; 
v_unused_2395_ = lean_ctor_get(v_snd_2286_, 1);
lean_dec(v_unused_2395_);
v___x_2298_ = v_snd_2286_;
v_isShared_2299_ = v_isSharedCheck_2394_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_fst_2296_);
lean_dec(v_snd_2286_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2394_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v_array_2300_; lean_object* v_start_2301_; lean_object* v_stop_2302_; lean_object* v___f_2303_; lean_object* v___y_2305_; uint8_t v___x_2308_; 
v_array_2300_ = lean_ctor_get(v_snd_2287_, 0);
v_start_2301_ = lean_ctor_get(v_snd_2287_, 1);
v_stop_2302_ = lean_ctor_get(v_snd_2287_, 2);
lean_inc(v_next_2279_);
lean_inc(v_toPure_2267_);
v___f_2303_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed), 4, 3);
lean_closure_set(v___f_2303_, 0, v_toPure_2267_);
lean_closure_set(v___f_2303_, 1, v_next_2279_);
lean_closure_set(v___f_2303_, 2, v_G_2282_);
v___x_2308_ = lean_nat_dec_lt(v_start_2301_, v_stop_2302_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2310_; 
lean_dec(v_next_2279_);
lean_dec(v_fst_2278_);
lean_dec(v___f_2277_);
lean_dec_ref(v_inst_2276_);
lean_dec_ref(v_inst_2275_);
lean_dec(v_onAlt_2274_);
lean_dec_ref(v_remaining_x27_2273_);
lean_dec(v_inst_2272_);
if (v_isShared_2299_ == 0)
{
v___x_2310_ = v___x_2298_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_fst_2296_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_snd_2287_);
v___x_2310_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 1, v___x_2310_);
v___x_2312_ = v___x_2294_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_fst_2292_);
lean_ctor_set(v_reuseFailAlloc_2318_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2314_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 1, v___x_2312_);
v___x_2314_ = v___x_2290_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_fst_2288_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
v___x_2316_ = lean_apply_2(v_toPure_2267_, lean_box(0), v___x_2315_);
v___y_2305_ = v___x_2316_;
goto v___jp_2304_;
}
}
}
}
else
{
lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2390_; 
lean_inc(v_stop_2302_);
lean_inc(v_start_2301_);
lean_inc_ref(v_array_2300_);
v_isSharedCheck_2390_ = !lean_is_exclusive(v_snd_2287_);
if (v_isSharedCheck_2390_ == 0)
{
lean_object* v_unused_2391_; lean_object* v_unused_2392_; lean_object* v_unused_2393_; 
v_unused_2391_ = lean_ctor_get(v_snd_2287_, 2);
lean_dec(v_unused_2391_);
v_unused_2392_ = lean_ctor_get(v_snd_2287_, 1);
lean_dec(v_unused_2392_);
v_unused_2393_ = lean_ctor_get(v_snd_2287_, 0);
lean_dec(v_unused_2393_);
v___x_2321_ = v_snd_2287_;
v_isShared_2322_ = v_isSharedCheck_2390_;
goto v_resetjp_2320_;
}
else
{
lean_dec(v_snd_2287_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2390_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v_array_2323_; lean_object* v_start_2324_; lean_object* v_stop_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2330_; 
v_array_2323_ = lean_ctor_get(v_fst_2296_, 0);
v_start_2324_ = lean_ctor_get(v_fst_2296_, 1);
v_stop_2325_ = lean_ctor_get(v_fst_2296_, 2);
v___x_2326_ = lean_array_fget(v_array_2300_, v_start_2301_);
v___x_2327_ = lean_unsigned_to_nat(1u);
v___x_2328_ = lean_nat_add(v_start_2301_, v___x_2327_);
lean_dec(v_start_2301_);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 1, v___x_2328_);
v___x_2330_ = v___x_2321_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_array_2300_);
lean_ctor_set(v_reuseFailAlloc_2389_, 1, v___x_2328_);
lean_ctor_set(v_reuseFailAlloc_2389_, 2, v_stop_2302_);
v___x_2330_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
uint8_t v___x_2331_; 
v___x_2331_ = lean_nat_dec_lt(v_start_2324_, v_stop_2325_);
if (v___x_2331_ == 0)
{
lean_object* v___x_2333_; 
lean_dec(v___x_2326_);
lean_dec(v_next_2279_);
lean_dec(v_fst_2278_);
lean_dec(v___f_2277_);
lean_dec_ref(v_inst_2276_);
lean_dec_ref(v_inst_2275_);
lean_dec(v_onAlt_2274_);
lean_dec_ref(v_remaining_x27_2273_);
lean_dec(v_inst_2272_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 1, v___x_2330_);
v___x_2333_ = v___x_2298_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_fst_2296_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v___x_2330_);
v___x_2333_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2335_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 1, v___x_2333_);
v___x_2335_ = v___x_2294_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_fst_2292_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2337_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 1, v___x_2335_);
v___x_2337_ = v___x_2290_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_fst_2288_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v___x_2335_);
v___x_2337_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
v___x_2339_ = lean_apply_2(v_toPure_2267_, lean_box(0), v___x_2338_);
v___y_2305_ = v___x_2339_;
goto v___jp_2304_;
}
}
}
}
else
{
lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2385_; 
lean_inc(v_stop_2325_);
lean_inc(v_start_2324_);
lean_inc_ref(v_array_2323_);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_fst_2296_);
if (v_isSharedCheck_2385_ == 0)
{
lean_object* v_unused_2386_; lean_object* v_unused_2387_; lean_object* v_unused_2388_; 
v_unused_2386_ = lean_ctor_get(v_fst_2296_, 2);
lean_dec(v_unused_2386_);
v_unused_2387_ = lean_ctor_get(v_fst_2296_, 1);
lean_dec(v_unused_2387_);
v_unused_2388_ = lean_ctor_get(v_fst_2296_, 0);
lean_dec(v_unused_2388_);
v___x_2344_ = v_fst_2296_;
v_isShared_2345_ = v_isSharedCheck_2385_;
goto v_resetjp_2343_;
}
else
{
lean_dec(v_fst_2296_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2385_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v_array_2346_; lean_object* v_start_2347_; lean_object* v_stop_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v_array_2346_ = lean_ctor_get(v_fst_2292_, 0);
v_start_2347_ = lean_ctor_get(v_fst_2292_, 1);
v_stop_2348_ = lean_ctor_get(v_fst_2292_, 2);
v___x_2349_ = lean_array_fget(v_array_2323_, v_start_2324_);
v___x_2350_ = lean_nat_add(v_start_2324_, v___x_2327_);
lean_dec(v_start_2324_);
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 1, v___x_2350_);
v___x_2352_ = v___x_2344_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_array_2323_);
lean_ctor_set(v_reuseFailAlloc_2384_, 1, v___x_2350_);
lean_ctor_set(v_reuseFailAlloc_2384_, 2, v_stop_2325_);
v___x_2352_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
uint8_t v___x_2353_; 
v___x_2353_ = lean_nat_dec_lt(v_start_2347_, v_stop_2348_);
if (v___x_2353_ == 0)
{
lean_object* v___x_2355_; 
lean_dec(v___x_2349_);
lean_dec(v___x_2326_);
lean_dec(v_next_2279_);
lean_dec(v_fst_2278_);
lean_dec(v___f_2277_);
lean_dec_ref(v_inst_2276_);
lean_dec_ref(v_inst_2275_);
lean_dec(v_onAlt_2274_);
lean_dec_ref(v_remaining_x27_2273_);
lean_dec(v_inst_2272_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 1, v___x_2330_);
lean_ctor_set(v___x_2298_, 0, v___x_2352_);
v___x_2355_ = v___x_2298_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2352_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v___x_2330_);
v___x_2355_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
lean_object* v___x_2357_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 1, v___x_2355_);
v___x_2357_ = v___x_2294_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_fst_2292_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2359_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 1, v___x_2357_);
v___x_2359_ = v___x_2290_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_fst_2288_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
v___x_2361_ = lean_apply_2(v_toPure_2267_, lean_box(0), v___x_2360_);
v___y_2305_ = v___x_2361_;
goto v___jp_2304_;
}
}
}
}
else
{
lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2380_; 
lean_inc(v_stop_2348_);
lean_inc(v_start_2347_);
lean_inc_ref(v_array_2346_);
lean_del_object(v___x_2298_);
lean_del_object(v___x_2294_);
lean_del_object(v___x_2290_);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_fst_2292_);
if (v_isSharedCheck_2380_ == 0)
{
lean_object* v_unused_2381_; lean_object* v_unused_2382_; lean_object* v_unused_2383_; 
v_unused_2381_ = lean_ctor_get(v_fst_2292_, 2);
lean_dec(v_unused_2381_);
v_unused_2382_ = lean_ctor_get(v_fst_2292_, 1);
lean_dec(v_unused_2382_);
v_unused_2383_ = lean_ctor_get(v_fst_2292_, 0);
lean_dec(v_unused_2383_);
v___x_2366_ = v_fst_2292_;
v_isShared_2367_ = v_isSharedCheck_2380_;
goto v_resetjp_2365_;
}
else
{
lean_dec(v_fst_2292_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2380_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___f_2371_; lean_object* v___x_2372_; lean_object* v___x_2374_; 
v___x_2368_ = lean_array_fget_borrowed(v_array_2346_, v_start_2347_);
v___x_2369_ = lean_box(v___x_2270_);
v___x_2370_ = lean_box(v___x_2271_);
lean_inc_ref(v_inst_2276_);
lean_inc_ref(v_inst_2275_);
lean_inc(v___x_2368_);
lean_inc(v_toBind_2268_);
v___f_2371_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed), 14, 12);
lean_closure_set(v___f_2371_, 0, v___x_2369_);
lean_closure_set(v___f_2371_, 1, v___x_2370_);
lean_closure_set(v___f_2371_, 2, v_inst_2272_);
lean_closure_set(v___f_2371_, 3, v_remaining_x27_2273_);
lean_closure_set(v___f_2371_, 4, v_onAlt_2274_);
lean_closure_set(v___f_2371_, 5, v_next_2279_);
lean_closure_set(v___f_2371_, 6, v_toBind_2268_);
lean_closure_set(v___f_2371_, 7, v___x_2368_);
lean_closure_set(v___f_2371_, 8, v_inst_2275_);
lean_closure_set(v___f_2371_, 9, v_inst_2276_);
lean_closure_set(v___f_2371_, 10, v___f_2277_);
lean_closure_set(v___f_2371_, 11, v_fst_2278_);
v___x_2372_ = lean_nat_add(v_start_2347_, v___x_2327_);
lean_dec(v_start_2347_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 1, v___x_2372_);
v___x_2374_ = v___x_2366_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_array_2346_);
lean_ctor_set(v_reuseFailAlloc_2379_, 1, v___x_2372_);
lean_ctor_set(v_reuseFailAlloc_2379_, 2, v_stop_2348_);
v___x_2374_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___f_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___f_2375_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__28), 6, 5);
lean_closure_set(v___f_2375_, 0, v_fst_2288_);
lean_closure_set(v___f_2375_, 1, v___x_2352_);
lean_closure_set(v___f_2375_, 2, v___x_2330_);
lean_closure_set(v___f_2375_, 3, v___x_2374_);
lean_closure_set(v___f_2375_, 4, v_toPure_2267_);
v___x_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2349_);
v___x_2377_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2275_, v_inst_2276_, v___x_2326_, v___x_2376_, v___f_2371_, v___x_2270_, v___x_2270_);
lean_inc(v_toBind_2268_);
v___x_2378_ = lean_apply_4(v_toBind_2268_, lean_box(0), lean_box(0), v___x_2377_, v___f_2375_);
v___y_2305_ = v___x_2378_;
goto v___jp_2304_;
}
}
}
}
}
}
}
}
}
v___jp_2304_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; 
lean_inc(v_toBind_2268_);
v___x_2306_ = lean_apply_4(v_toBind_2268_, lean_box(0), lean_box(0), v___y_2305_, v___f_2269_);
v___x_2307_ = lean_apply_4(v_toBind_2268_, lean_box(0), lean_box(0), v___x_2306_, v___f_2303_);
return v___x_2307_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object** _args){
lean_object* v___x_2400_ = _args[0];
lean_object* v_toPure_2401_ = _args[1];
lean_object* v_toBind_2402_ = _args[2];
lean_object* v___f_2403_ = _args[3];
lean_object* v___x_2404_ = _args[4];
lean_object* v___x_2405_ = _args[5];
lean_object* v_inst_2406_ = _args[6];
lean_object* v_remaining_x27_2407_ = _args[7];
lean_object* v_onAlt_2408_ = _args[8];
lean_object* v_inst_2409_ = _args[9];
lean_object* v_inst_2410_ = _args[10];
lean_object* v___f_2411_ = _args[11];
lean_object* v_fst_2412_ = _args[12];
lean_object* v_next_2413_ = _args[13];
lean_object* v_acc_2414_ = _args[14];
lean_object* v_h_2415_ = _args[15];
lean_object* v_G_2416_ = _args[16];
_start:
{
uint8_t v___x_12979__boxed_2417_; uint8_t v___x_12980__boxed_2418_; lean_object* v_res_2419_; 
v___x_12979__boxed_2417_ = lean_unbox(v___x_2404_);
v___x_12980__boxed_2418_ = lean_unbox(v___x_2405_);
v_res_2419_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__29(v___x_2400_, v_toPure_2401_, v_toBind_2402_, v___f_2403_, v___x_12979__boxed_2417_, v___x_12980__boxed_2418_, v_inst_2406_, v_remaining_x27_2407_, v_onAlt_2408_, v_inst_2409_, v_inst_2410_, v___f_2411_, v_fst_2412_, v_next_2413_, v_acc_2414_, v_h_2415_, v_G_2416_);
lean_dec(v___x_2400_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object* v_matcherApp_2420_, lean_object* v_alts_2421_, lean_object* v___x_2422_, lean_object* v___x_2423_, lean_object* v_remaining_x27_2424_, lean_object* v___f_2425_, lean_object* v_toBind_2426_, lean_object* v___f_2427_, lean_object* v_altTypes_2428_){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2429_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2420_);
v___x_2430_ = lean_array_get_size(v___x_2429_);
v___x_2431_ = lean_array_get_size(v_altTypes_2428_);
lean_inc_n(v___x_2422_, 3);
v___x_2432_ = l_Array_toSubarray___redArg(v_alts_2421_, v___x_2422_, v___x_2423_);
v___x_2433_ = l_Array_toSubarray___redArg(v___x_2429_, v___x_2422_, v___x_2430_);
v___x_2434_ = l_Array_toSubarray___redArg(v_altTypes_2428_, v___x_2422_, v___x_2431_);
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2432_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
v___x_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2437_, 0, v_remaining_x27_2424_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2425_, v___x_2422_, v___x_2437_, lean_box(0));
v___x_2439_ = lean_apply_4(v_toBind_2426_, lean_box(0), lean_box(0), v___x_2438_, v___f_2427_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object* v_alts_2440_, lean_object* v_toPure_2441_, lean_object* v_toBind_2442_, lean_object* v___f_2443_, uint8_t v___x_2444_, uint8_t v___x_2445_, lean_object* v_inst_2446_, lean_object* v_remaining_x27_2447_, lean_object* v_onAlt_2448_, lean_object* v_inst_2449_, lean_object* v_inst_2450_, lean_object* v___f_2451_, lean_object* v_fst_2452_, lean_object* v_matcherApp_2453_, lean_object* v___x_2454_, lean_object* v___f_2455_, lean_object* v_aux_2456_, lean_object* v_____r_2457_){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___f_2461_; lean_object* v___f_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2458_ = lean_array_get_size(v_alts_2440_);
v___x_2459_ = lean_box(v___x_2444_);
v___x_2460_ = lean_box(v___x_2445_);
lean_inc_ref(v_remaining_x27_2447_);
lean_inc(v_inst_2446_);
lean_inc_n(v_toBind_2442_, 2);
v___f_2461_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed), 17, 13);
lean_closure_set(v___f_2461_, 0, v___x_2458_);
lean_closure_set(v___f_2461_, 1, v_toPure_2441_);
lean_closure_set(v___f_2461_, 2, v_toBind_2442_);
lean_closure_set(v___f_2461_, 3, v___f_2443_);
lean_closure_set(v___f_2461_, 4, v___x_2459_);
lean_closure_set(v___f_2461_, 5, v___x_2460_);
lean_closure_set(v___f_2461_, 6, v_inst_2446_);
lean_closure_set(v___f_2461_, 7, v_remaining_x27_2447_);
lean_closure_set(v___f_2461_, 8, v_onAlt_2448_);
lean_closure_set(v___f_2461_, 9, v_inst_2449_);
lean_closure_set(v___f_2461_, 10, v_inst_2450_);
lean_closure_set(v___f_2461_, 11, v___f_2451_);
lean_closure_set(v___f_2461_, 12, v_fst_2452_);
v___f_2462_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__30), 9, 8);
lean_closure_set(v___f_2462_, 0, v_matcherApp_2453_);
lean_closure_set(v___f_2462_, 1, v_alts_2440_);
lean_closure_set(v___f_2462_, 2, v___x_2454_);
lean_closure_set(v___f_2462_, 3, v___x_2458_);
lean_closure_set(v___f_2462_, 4, v_remaining_x27_2447_);
lean_closure_set(v___f_2462_, 5, v___f_2461_);
lean_closure_set(v___f_2462_, 6, v_toBind_2442_);
lean_closure_set(v___f_2462_, 7, v___f_2455_);
v___x_2463_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_2463_, 0, v___x_2458_);
lean_closure_set(v___x_2463_, 1, v_aux_2456_);
v___x_2464_ = lean_apply_2(v_inst_2446_, lean_box(0), v___x_2463_);
v___x_2465_ = lean_apply_4(v_toBind_2442_, lean_box(0), lean_box(0), v___x_2464_, v___f_2462_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_alts_2466_ = _args[0];
lean_object* v_toPure_2467_ = _args[1];
lean_object* v_toBind_2468_ = _args[2];
lean_object* v___f_2469_ = _args[3];
lean_object* v___x_2470_ = _args[4];
lean_object* v___x_2471_ = _args[5];
lean_object* v_inst_2472_ = _args[6];
lean_object* v_remaining_x27_2473_ = _args[7];
lean_object* v_onAlt_2474_ = _args[8];
lean_object* v_inst_2475_ = _args[9];
lean_object* v_inst_2476_ = _args[10];
lean_object* v___f_2477_ = _args[11];
lean_object* v_fst_2478_ = _args[12];
lean_object* v_matcherApp_2479_ = _args[13];
lean_object* v___x_2480_ = _args[14];
lean_object* v___f_2481_ = _args[15];
lean_object* v_aux_2482_ = _args[16];
lean_object* v_____r_2483_ = _args[17];
_start:
{
uint8_t v___x_13236__boxed_2484_; uint8_t v___x_13237__boxed_2485_; lean_object* v_res_2486_; 
v___x_13236__boxed_2484_ = lean_unbox(v___x_2470_);
v___x_13237__boxed_2485_ = lean_unbox(v___x_2471_);
v_res_2486_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__31(v_alts_2466_, v_toPure_2467_, v_toBind_2468_, v___f_2469_, v___x_13236__boxed_2484_, v___x_13237__boxed_2485_, v_inst_2472_, v_remaining_x27_2473_, v_onAlt_2474_, v_inst_2475_, v_inst_2476_, v___f_2477_, v_fst_2478_, v_matcherApp_2479_, v___x_2480_, v___f_2481_, v_aux_2482_, v_____r_2483_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object* v___x_2487_, lean_object* v_e_2488_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = l_Lean_indentD(v_e_2488_);
v___x_2490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2487_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object* v___x_2491_, lean_object* v___f_2492_, lean_object* v_runInBase_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_apply_2(v_runInBase_2493_, lean_box(0), v___x_2491_);
v___x_2500_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2499_, v___f_2492_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object* v___x_2501_, lean_object* v___f_2502_, lean_object* v_runInBase_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__33(v___x_2501_, v___f_2502_, v_runInBase_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object* v_toPure_2510_, lean_object* v_next_2511_, lean_object* v_G_2512_, lean_object* v_____do__lift_2513_){
_start:
{
if (lean_obj_tag(v_____do__lift_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2515_; 
lean_dec(v_G_2512_);
v_a_2514_ = lean_ctor_get(v_____do__lift_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v_____do__lift_2513_, 1);
v___x_2515_ = lean_apply_2(v_toPure_2510_, lean_box(0), v_a_2514_);
return v___x_2515_;
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
lean_dec(v_toPure_2510_);
v_a_2516_ = lean_ctor_get(v_____do__lift_2513_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v_____do__lift_2513_, 1);
v___x_2517_ = lean_unsigned_to_nat(1u);
v___x_2518_ = lean_nat_add(v_next_2511_, v___x_2517_);
v___x_2519_ = lean_apply_4(v_G_2512_, v___x_2518_, v_a_2516_, lean_box(0), lean_box(0));
return v___x_2519_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object* v_toPure_2520_, lean_object* v_next_2521_, lean_object* v_G_2522_, lean_object* v_____do__lift_2523_){
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__35(v_toPure_2520_, v_next_2521_, v_G_2522_, v_____do__lift_2523_);
lean_dec(v_next_2521_);
return v_res_2524_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2533_ = lean_box(0);
v___x_2534_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4));
v___x_2535_ = l_Lean_mkConst(v___x_2534_, v___x_2533_);
return v___x_2535_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2536_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5);
v___x_2537_ = lean_unsigned_to_nat(2u);
v___x_2538_ = lean_mk_empty_array_with_capacity(v___x_2537_);
v___x_2539_ = lean_array_push(v___x_2538_, v___x_2536_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object* v___x_2540_, lean_object* v_toPure_2541_, lean_object* v_inst_2542_, lean_object* v_alt_x27_2543_){
_start:
{
uint8_t v_hasUnitThunk_2544_; 
v_hasUnitThunk_2544_ = lean_ctor_get_uint8(v___x_2540_, sizeof(void*)*2);
if (v_hasUnitThunk_2544_ == 0)
{
lean_object* v___x_2545_; 
lean_dec(v_inst_2542_);
v___x_2545_ = lean_apply_2(v_toPure_2541_, lean_box(0), v_alt_x27_2543_);
return v___x_2545_;
}
else
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
lean_dec(v_toPure_2541_);
v___x_2546_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_2547_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_2548_ = lean_array_push(v___x_2547_, v_alt_x27_2543_);
v___x_2549_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2549_, 0, v___x_2546_);
lean_closure_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = lean_apply_2(v_inst_2542_, lean_box(0), v___x_2549_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object* v___x_2551_, lean_object* v_toPure_2552_, lean_object* v_inst_2553_, lean_object* v_alt_x27_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__34(v___x_2551_, v_toPure_2552_, v_inst_2553_, v_alt_x27_2554_);
lean_dec_ref(v___x_2551_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object* v_ys_2556_, lean_object* v_ys2_2557_, lean_object* v_ys3_2558_, lean_object* v_ys4_2559_, uint8_t v___x_2560_, uint8_t v_useSplitter_2561_, lean_object* v_inst_2562_, lean_object* v_alt_x27_2563_){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; uint8_t v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2564_ = l_Array_append___redArg(v_ys_2556_, v_ys2_2557_);
v___x_2565_ = l_Array_append___redArg(v___x_2564_, v_ys3_2558_);
v___x_2566_ = l_Array_append___redArg(v___x_2565_, v_ys4_2559_);
v___x_2567_ = 1;
v___x_2568_ = lean_box(v___x_2560_);
v___x_2569_ = lean_box(v_useSplitter_2561_);
v___x_2570_ = lean_box(v___x_2560_);
v___x_2571_ = lean_box(v_useSplitter_2561_);
v___x_2572_ = lean_box(v___x_2567_);
v___x_2573_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2573_, 0, v___x_2566_);
lean_closure_set(v___x_2573_, 1, v_alt_x27_2563_);
lean_closure_set(v___x_2573_, 2, v___x_2568_);
lean_closure_set(v___x_2573_, 3, v___x_2569_);
lean_closure_set(v___x_2573_, 4, v___x_2570_);
lean_closure_set(v___x_2573_, 5, v___x_2571_);
lean_closure_set(v___x_2573_, 6, v___x_2572_);
v___x_2574_ = lean_apply_2(v_inst_2562_, lean_box(0), v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object* v_ys_2575_, lean_object* v_ys2_2576_, lean_object* v_ys3_2577_, lean_object* v_ys4_2578_, lean_object* v___x_2579_, lean_object* v_useSplitter_2580_, lean_object* v_inst_2581_, lean_object* v_alt_x27_2582_){
_start:
{
uint8_t v___x_13390__boxed_2583_; uint8_t v_useSplitter_boxed_2584_; lean_object* v_res_2585_; 
v___x_13390__boxed_2583_ = lean_unbox(v___x_2579_);
v_useSplitter_boxed_2584_ = lean_unbox(v_useSplitter_2580_);
v_res_2585_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__36(v_ys_2575_, v_ys2_2576_, v_ys3_2577_, v_ys4_2578_, v___x_13390__boxed_2583_, v_useSplitter_boxed_2584_, v_inst_2581_, v_alt_x27_2582_);
lean_dec_ref(v_ys4_2578_);
lean_dec_ref(v_ys3_2577_);
lean_dec_ref(v_ys2_2576_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object* v_args_2586_, lean_object* v_ys_2587_, lean_object* v_ys2_2588_, lean_object* v_ys3_2589_, lean_object* v_ys4_2590_, lean_object* v_onAlt_2591_, lean_object* v_next_2592_, lean_object* v_altType_2593_, lean_object* v_toBind_2594_, lean_object* v___f_2595_, lean_object* v_alt_2596_){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2597_, 0, v_args_2586_);
lean_ctor_set(v___x_2597_, 1, v_ys_2587_);
lean_ctor_set(v___x_2597_, 2, v_ys2_2588_);
lean_ctor_set(v___x_2597_, 3, v_ys3_2589_);
lean_ctor_set(v___x_2597_, 4, v_ys4_2590_);
v___x_2598_ = lean_apply_4(v_onAlt_2591_, v_next_2592_, v_altType_2593_, v___x_2597_, v_alt_2596_);
v___x_2599_ = lean_apply_4(v_toBind_2594_, lean_box(0), lean_box(0), v___x_2598_, v___f_2595_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object* v_toMonadExceptOf_2600_, lean_object* v_ys_2601_, lean_object* v_ys2_2602_, lean_object* v_ys3_2603_, uint8_t v___x_2604_, uint8_t v_useSplitter_2605_, lean_object* v_inst_2606_, lean_object* v_args_2607_, lean_object* v_onAlt_2608_, lean_object* v_next_2609_, lean_object* v_toBind_2610_, lean_object* v___x_2611_, lean_object* v___f_2612_, lean_object* v_ys4_2613_, lean_object* v_altType_2614_){
_start:
{
lean_object* v_tryCatch_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___f_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v_tryCatch_2615_ = lean_ctor_get(v_toMonadExceptOf_2600_, 1);
lean_inc(v_tryCatch_2615_);
lean_dec_ref(v_toMonadExceptOf_2600_);
v___x_2616_ = lean_box(v___x_2604_);
v___x_2617_ = lean_box(v_useSplitter_2605_);
lean_inc(v_inst_2606_);
lean_inc_ref(v_ys4_2613_);
lean_inc_ref_n(v_ys3_2603_, 2);
lean_inc_ref(v_ys2_2602_);
lean_inc_ref(v_ys_2601_);
v___f_2618_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed), 8, 7);
lean_closure_set(v___f_2618_, 0, v_ys_2601_);
lean_closure_set(v___f_2618_, 1, v_ys2_2602_);
lean_closure_set(v___f_2618_, 2, v_ys3_2603_);
lean_closure_set(v___f_2618_, 3, v_ys4_2613_);
lean_closure_set(v___f_2618_, 4, v___x_2616_);
lean_closure_set(v___f_2618_, 5, v___x_2617_);
lean_closure_set(v___f_2618_, 6, v_inst_2606_);
lean_inc(v_toBind_2610_);
lean_inc_ref(v_args_2607_);
v___f_2619_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__37), 11, 10);
lean_closure_set(v___f_2619_, 0, v_args_2607_);
lean_closure_set(v___f_2619_, 1, v_ys_2601_);
lean_closure_set(v___f_2619_, 2, v_ys2_2602_);
lean_closure_set(v___f_2619_, 3, v_ys3_2603_);
lean_closure_set(v___f_2619_, 4, v_ys4_2613_);
lean_closure_set(v___f_2619_, 5, v_onAlt_2608_);
lean_closure_set(v___f_2619_, 6, v_next_2609_);
lean_closure_set(v___f_2619_, 7, v_altType_2614_);
lean_closure_set(v___f_2619_, 8, v_toBind_2610_);
lean_closure_set(v___f_2619_, 9, v___f_2618_);
v___x_2620_ = l_Array_append___redArg(v_args_2607_, v_ys3_2603_);
lean_dec_ref(v_ys3_2603_);
v___x_2621_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2621_, 0, v___x_2611_);
lean_closure_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = lean_apply_2(v_inst_2606_, lean_box(0), v___x_2621_);
v___x_2623_ = lean_apply_3(v_tryCatch_2615_, lean_box(0), v___x_2622_, v___f_2612_);
v___x_2624_ = lean_apply_4(v_toBind_2610_, lean_box(0), lean_box(0), v___x_2623_, v___f_2619_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object* v_toMonadExceptOf_2625_, lean_object* v_ys_2626_, lean_object* v_ys2_2627_, lean_object* v_ys3_2628_, lean_object* v___x_2629_, lean_object* v_useSplitter_2630_, lean_object* v_inst_2631_, lean_object* v_args_2632_, lean_object* v_onAlt_2633_, lean_object* v_next_2634_, lean_object* v_toBind_2635_, lean_object* v___x_2636_, lean_object* v___f_2637_, lean_object* v_ys4_2638_, lean_object* v_altType_2639_){
_start:
{
uint8_t v___x_13426__boxed_2640_; uint8_t v_useSplitter_boxed_2641_; lean_object* v_res_2642_; 
v___x_13426__boxed_2640_ = lean_unbox(v___x_2629_);
v_useSplitter_boxed_2641_ = lean_unbox(v_useSplitter_2630_);
v_res_2642_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__38(v_toMonadExceptOf_2625_, v_ys_2626_, v_ys2_2627_, v_ys3_2628_, v___x_13426__boxed_2640_, v_useSplitter_boxed_2641_, v_inst_2631_, v_args_2632_, v_onAlt_2633_, v_next_2634_, v_toBind_2635_, v___x_2636_, v___f_2637_, v_ys4_2638_, v_altType_2639_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object* v_toMonadExceptOf_2643_, lean_object* v_ys_2644_, lean_object* v_ys2_2645_, uint8_t v___x_2646_, uint8_t v_useSplitter_2647_, lean_object* v_inst_2648_, lean_object* v_args_2649_, lean_object* v_onAlt_2650_, lean_object* v_next_2651_, lean_object* v_toBind_2652_, lean_object* v___x_2653_, lean_object* v___f_2654_, lean_object* v_fst_2655_, lean_object* v_inst_2656_, lean_object* v_inst_2657_, lean_object* v_ys3_2658_, lean_object* v_altType_2659_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___f_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2660_ = lean_box(v___x_2646_);
v___x_2661_ = lean_box(v_useSplitter_2647_);
v___f_2662_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed), 15, 13);
lean_closure_set(v___f_2662_, 0, v_toMonadExceptOf_2643_);
lean_closure_set(v___f_2662_, 1, v_ys_2644_);
lean_closure_set(v___f_2662_, 2, v_ys2_2645_);
lean_closure_set(v___f_2662_, 3, v_ys3_2658_);
lean_closure_set(v___f_2662_, 4, v___x_2660_);
lean_closure_set(v___f_2662_, 5, v___x_2661_);
lean_closure_set(v___f_2662_, 6, v_inst_2648_);
lean_closure_set(v___f_2662_, 7, v_args_2649_);
lean_closure_set(v___f_2662_, 8, v_onAlt_2650_);
lean_closure_set(v___f_2662_, 9, v_next_2651_);
lean_closure_set(v___f_2662_, 10, v_toBind_2652_);
lean_closure_set(v___f_2662_, 11, v___x_2653_);
lean_closure_set(v___f_2662_, 12, v___f_2654_);
v___x_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2663_, 0, v_fst_2655_);
v___x_2664_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2656_, v_inst_2657_, v_altType_2659_, v___x_2663_, v___f_2662_, v___x_2646_, v___x_2646_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2665_ = _args[0];
lean_object* v_ys_2666_ = _args[1];
lean_object* v_ys2_2667_ = _args[2];
lean_object* v___x_2668_ = _args[3];
lean_object* v_useSplitter_2669_ = _args[4];
lean_object* v_inst_2670_ = _args[5];
lean_object* v_args_2671_ = _args[6];
lean_object* v_onAlt_2672_ = _args[7];
lean_object* v_next_2673_ = _args[8];
lean_object* v_toBind_2674_ = _args[9];
lean_object* v___x_2675_ = _args[10];
lean_object* v___f_2676_ = _args[11];
lean_object* v_fst_2677_ = _args[12];
lean_object* v_inst_2678_ = _args[13];
lean_object* v_inst_2679_ = _args[14];
lean_object* v_ys3_2680_ = _args[15];
lean_object* v_altType_2681_ = _args[16];
_start:
{
uint8_t v___x_13456__boxed_2682_; uint8_t v_useSplitter_boxed_2683_; lean_object* v_res_2684_; 
v___x_13456__boxed_2682_ = lean_unbox(v___x_2668_);
v_useSplitter_boxed_2683_ = lean_unbox(v_useSplitter_2669_);
v_res_2684_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__39(v_toMonadExceptOf_2665_, v_ys_2666_, v_ys2_2667_, v___x_13456__boxed_2682_, v_useSplitter_boxed_2683_, v_inst_2670_, v_args_2671_, v_onAlt_2672_, v_next_2673_, v_toBind_2674_, v___x_2675_, v___f_2676_, v_fst_2677_, v_inst_2678_, v_inst_2679_, v_ys3_2680_, v_altType_2681_);
return v_res_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object* v_toMonadExceptOf_2685_, lean_object* v_ys_2686_, uint8_t v___x_2687_, uint8_t v_useSplitter_2688_, lean_object* v_inst_2689_, lean_object* v_args_2690_, lean_object* v_onAlt_2691_, lean_object* v_next_2692_, lean_object* v_toBind_2693_, lean_object* v___x_2694_, lean_object* v___f_2695_, lean_object* v_fst_2696_, lean_object* v_inst_2697_, lean_object* v_inst_2698_, lean_object* v_numDiscrEqs_2699_, lean_object* v_ys2_2700_, lean_object* v_altType_2701_){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___f_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2702_ = lean_box(v___x_2687_);
v___x_2703_ = lean_box(v_useSplitter_2688_);
lean_inc_ref(v_inst_2698_);
lean_inc_ref(v_inst_2697_);
v___f_2704_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed), 17, 15);
lean_closure_set(v___f_2704_, 0, v_toMonadExceptOf_2685_);
lean_closure_set(v___f_2704_, 1, v_ys_2686_);
lean_closure_set(v___f_2704_, 2, v_ys2_2700_);
lean_closure_set(v___f_2704_, 3, v___x_2702_);
lean_closure_set(v___f_2704_, 4, v___x_2703_);
lean_closure_set(v___f_2704_, 5, v_inst_2689_);
lean_closure_set(v___f_2704_, 6, v_args_2690_);
lean_closure_set(v___f_2704_, 7, v_onAlt_2691_);
lean_closure_set(v___f_2704_, 8, v_next_2692_);
lean_closure_set(v___f_2704_, 9, v_toBind_2693_);
lean_closure_set(v___f_2704_, 10, v___x_2694_);
lean_closure_set(v___f_2704_, 11, v___f_2695_);
lean_closure_set(v___f_2704_, 12, v_fst_2696_);
lean_closure_set(v___f_2704_, 13, v_inst_2697_);
lean_closure_set(v___f_2704_, 14, v_inst_2698_);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_numDiscrEqs_2699_);
v___x_2706_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2697_, v_inst_2698_, v_altType_2701_, v___x_2705_, v___f_2704_, v___x_2687_, v___x_2687_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2707_ = _args[0];
lean_object* v_ys_2708_ = _args[1];
lean_object* v___x_2709_ = _args[2];
lean_object* v_useSplitter_2710_ = _args[3];
lean_object* v_inst_2711_ = _args[4];
lean_object* v_args_2712_ = _args[5];
lean_object* v_onAlt_2713_ = _args[6];
lean_object* v_next_2714_ = _args[7];
lean_object* v_toBind_2715_ = _args[8];
lean_object* v___x_2716_ = _args[9];
lean_object* v___f_2717_ = _args[10];
lean_object* v_fst_2718_ = _args[11];
lean_object* v_inst_2719_ = _args[12];
lean_object* v_inst_2720_ = _args[13];
lean_object* v_numDiscrEqs_2721_ = _args[14];
lean_object* v_ys2_2722_ = _args[15];
lean_object* v_altType_2723_ = _args[16];
_start:
{
uint8_t v___x_13484__boxed_2724_; uint8_t v_useSplitter_boxed_2725_; lean_object* v_res_2726_; 
v___x_13484__boxed_2724_ = lean_unbox(v___x_2709_);
v_useSplitter_boxed_2725_ = lean_unbox(v_useSplitter_2710_);
v_res_2726_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__40(v_toMonadExceptOf_2707_, v_ys_2708_, v___x_13484__boxed_2724_, v_useSplitter_boxed_2725_, v_inst_2711_, v_args_2712_, v_onAlt_2713_, v_next_2714_, v_toBind_2715_, v___x_2716_, v___f_2717_, v_fst_2718_, v_inst_2719_, v_inst_2720_, v_numDiscrEqs_2721_, v_ys2_2722_, v_altType_2723_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object* v_numOverlaps_2727_, lean_object* v_inst_2728_, lean_object* v_inst_2729_, lean_object* v___f_2730_, uint8_t v___x_2731_, lean_object* v_toBind_2732_, lean_object* v___f_2733_, lean_object* v_altType_2734_){
_start:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2735_, 0, v_numOverlaps_2727_);
v___x_2736_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2728_, v_inst_2729_, v_altType_2734_, v___x_2735_, v___f_2730_, v___x_2731_, v___x_2731_);
v___x_2737_ = lean_apply_4(v_toBind_2732_, lean_box(0), lean_box(0), v___x_2736_, v___f_2733_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object* v_numOverlaps_2738_, lean_object* v_inst_2739_, lean_object* v_inst_2740_, lean_object* v___f_2741_, lean_object* v___x_2742_, lean_object* v_toBind_2743_, lean_object* v___f_2744_, lean_object* v_altType_2745_){
_start:
{
uint8_t v___x_13515__boxed_2746_; lean_object* v_res_2747_; 
v___x_13515__boxed_2746_ = lean_unbox(v___x_2742_);
v_res_2747_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__41(v_numOverlaps_2738_, v_inst_2739_, v_inst_2740_, v___f_2741_, v___x_13515__boxed_2746_, v_toBind_2743_, v___f_2744_, v_altType_2745_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object* v___f_2748_, lean_object* v_altType_2749_){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = lean_apply_1(v___f_2748_, v_altType_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2(void){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2755_ = lean_box(0);
v___x_2756_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1));
v___x_2757_ = l_Lean_mkConst(v___x_2756_, v___x_2755_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t v_hasUnitThunk_2758_, lean_object* v_toPure_2759_, lean_object* v_toBind_2760_, lean_object* v___f_2761_, lean_object* v___x_2762_, lean_object* v_inst_2763_, lean_object* v___f_2764_, lean_object* v_altType_2765_){
_start:
{
if (v_hasUnitThunk_2758_ == 0)
{
lean_object* v___x_2766_; lean_object* v___x_2767_; 
lean_dec(v___f_2764_);
lean_dec(v_inst_2763_);
v___x_2766_ = lean_apply_2(v_toPure_2759_, lean_box(0), v_altType_2765_);
v___x_2767_ = lean_apply_4(v_toBind_2760_, lean_box(0), lean_box(0), v___x_2766_, v___f_2761_);
return v___x_2767_;
}
else
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
lean_dec(v___f_2761_);
lean_dec(v_toPure_2759_);
v___x_2768_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_2769_ = lean_mk_empty_array_with_capacity(v___x_2762_);
v___x_2770_ = lean_array_push(v___x_2769_, v___x_2768_);
v___x_2771_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2771_, 0, v_altType_2765_);
lean_closure_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = lean_apply_2(v_inst_2763_, lean_box(0), v___x_2771_);
v___x_2773_ = lean_apply_4(v_toBind_2760_, lean_box(0), lean_box(0), v___x_2772_, v___f_2764_);
return v___x_2773_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object* v_hasUnitThunk_2774_, lean_object* v_toPure_2775_, lean_object* v_toBind_2776_, lean_object* v___f_2777_, lean_object* v___x_2778_, lean_object* v_inst_2779_, lean_object* v___f_2780_, lean_object* v_altType_2781_){
_start:
{
uint8_t v_hasUnitThunk_boxed_2782_; lean_object* v_res_2783_; 
v_hasUnitThunk_boxed_2782_ = lean_unbox(v_hasUnitThunk_2774_);
v_res_2783_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__44(v_hasUnitThunk_boxed_2782_, v_toPure_2775_, v_toBind_2776_, v___f_2777_, v___x_2778_, v_inst_2779_, v___f_2780_, v_altType_2781_);
lean_dec(v___x_2778_);
return v_res_2783_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3(void){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2787_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2));
v___x_2788_ = lean_unsigned_to_nat(8u);
v___x_2789_ = lean_unsigned_to_nat(363u);
v___x_2790_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2791_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2792_ = l_mkPanicMessageWithDecl(v___x_2791_, v___x_2790_, v___x_2789_, v___x_2788_, v___x_2787_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object* v___x_2793_, lean_object* v___x_2794_, lean_object* v_toMonadExceptOf_2795_, uint8_t v___x_2796_, uint8_t v_useSplitter_2797_, lean_object* v_inst_2798_, lean_object* v_onAlt_2799_, lean_object* v_next_2800_, lean_object* v_toBind_2801_, lean_object* v___x_2802_, lean_object* v___f_2803_, lean_object* v_fst_2804_, lean_object* v_inst_2805_, lean_object* v_inst_2806_, lean_object* v_numDiscrEqs_2807_, lean_object* v___f_2808_, uint8_t v_hasUnitThunk_2809_, lean_object* v_toPure_2810_, lean_object* v___x_2811_, lean_object* v___x_2812_, lean_object* v_ys_2813_, lean_object* v_args_2814_){
_start:
{
lean_object* v_numFields_2815_; lean_object* v_numOverlaps_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v_numFields_2815_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_numFields_2815_);
v_numOverlaps_2816_ = lean_ctor_get(v___x_2793_, 1);
lean_inc(v_numOverlaps_2816_);
lean_dec_ref(v___x_2793_);
v___x_2817_ = lean_array_get_size(v_ys_2813_);
v___x_2818_ = lean_nat_dec_eq(v___x_2817_, v_numFields_2815_);
lean_dec(v_numFields_2815_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_dec(v_numOverlaps_2816_);
lean_dec_ref(v_args_2814_);
lean_dec_ref(v_ys_2813_);
lean_dec_ref(v___x_2812_);
lean_dec(v___x_2811_);
lean_dec(v_toPure_2810_);
lean_dec(v___f_2808_);
lean_dec(v_numDiscrEqs_2807_);
lean_dec_ref(v_inst_2806_);
lean_dec_ref(v_inst_2805_);
lean_dec(v_fst_2804_);
lean_dec(v___f_2803_);
lean_dec_ref(v___x_2802_);
lean_dec(v_toBind_2801_);
lean_dec(v_next_2800_);
lean_dec(v_onAlt_2799_);
lean_dec(v_inst_2798_);
lean_dec_ref(v_toMonadExceptOf_2795_);
v___x_2819_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_2820_ = l_panic___redArg(v___x_2794_, v___x_2819_);
return v___x_2820_;
}
else
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___f_2823_; lean_object* v___x_2824_; lean_object* v___f_2825_; lean_object* v___f_2826_; lean_object* v___x_2827_; lean_object* v___f_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2821_ = lean_box(v___x_2796_);
v___x_2822_ = lean_box(v_useSplitter_2797_);
lean_inc_ref(v_inst_2806_);
lean_inc_ref(v_inst_2805_);
lean_inc_n(v_toBind_2801_, 3);
lean_inc_n(v_inst_2798_, 2);
lean_inc_ref(v_ys_2813_);
v___f_2823_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed), 17, 15);
lean_closure_set(v___f_2823_, 0, v_toMonadExceptOf_2795_);
lean_closure_set(v___f_2823_, 1, v_ys_2813_);
lean_closure_set(v___f_2823_, 2, v___x_2821_);
lean_closure_set(v___f_2823_, 3, v___x_2822_);
lean_closure_set(v___f_2823_, 4, v_inst_2798_);
lean_closure_set(v___f_2823_, 5, v_args_2814_);
lean_closure_set(v___f_2823_, 6, v_onAlt_2799_);
lean_closure_set(v___f_2823_, 7, v_next_2800_);
lean_closure_set(v___f_2823_, 8, v_toBind_2801_);
lean_closure_set(v___f_2823_, 9, v___x_2802_);
lean_closure_set(v___f_2823_, 10, v___f_2803_);
lean_closure_set(v___f_2823_, 11, v_fst_2804_);
lean_closure_set(v___f_2823_, 12, v_inst_2805_);
lean_closure_set(v___f_2823_, 13, v_inst_2806_);
lean_closure_set(v___f_2823_, 14, v_numDiscrEqs_2807_);
v___x_2824_ = lean_box(v___x_2796_);
v___f_2825_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed), 8, 7);
lean_closure_set(v___f_2825_, 0, v_numOverlaps_2816_);
lean_closure_set(v___f_2825_, 1, v_inst_2805_);
lean_closure_set(v___f_2825_, 2, v_inst_2806_);
lean_closure_set(v___f_2825_, 3, v___f_2823_);
lean_closure_set(v___f_2825_, 4, v___x_2824_);
lean_closure_set(v___f_2825_, 5, v_toBind_2801_);
lean_closure_set(v___f_2825_, 6, v___f_2808_);
v___f_2826_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__42), 2, 1);
lean_closure_set(v___f_2826_, 0, v___f_2825_);
v___x_2827_ = lean_box(v_hasUnitThunk_2809_);
lean_inc_ref(v___f_2826_);
v___f_2828_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed), 8, 7);
lean_closure_set(v___f_2828_, 0, v___x_2827_);
lean_closure_set(v___f_2828_, 1, v_toPure_2810_);
lean_closure_set(v___f_2828_, 2, v_toBind_2801_);
lean_closure_set(v___f_2828_, 3, v___f_2826_);
lean_closure_set(v___f_2828_, 4, v___x_2811_);
lean_closure_set(v___f_2828_, 5, v_inst_2798_);
lean_closure_set(v___f_2828_, 6, v___f_2826_);
v___x_2829_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2829_, 0, v___x_2812_);
lean_closure_set(v___x_2829_, 1, v_ys_2813_);
v___x_2830_ = lean_apply_2(v_inst_2798_, lean_box(0), v___x_2829_);
v___x_2831_ = lean_apply_4(v_toBind_2801_, lean_box(0), lean_box(0), v___x_2830_, v___f_2828_);
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object** _args){
lean_object* v___x_2832_ = _args[0];
lean_object* v___x_2833_ = _args[1];
lean_object* v_toMonadExceptOf_2834_ = _args[2];
lean_object* v___x_2835_ = _args[3];
lean_object* v_useSplitter_2836_ = _args[4];
lean_object* v_inst_2837_ = _args[5];
lean_object* v_onAlt_2838_ = _args[6];
lean_object* v_next_2839_ = _args[7];
lean_object* v_toBind_2840_ = _args[8];
lean_object* v___x_2841_ = _args[9];
lean_object* v___f_2842_ = _args[10];
lean_object* v_fst_2843_ = _args[11];
lean_object* v_inst_2844_ = _args[12];
lean_object* v_inst_2845_ = _args[13];
lean_object* v_numDiscrEqs_2846_ = _args[14];
lean_object* v___f_2847_ = _args[15];
lean_object* v_hasUnitThunk_2848_ = _args[16];
lean_object* v_toPure_2849_ = _args[17];
lean_object* v___x_2850_ = _args[18];
lean_object* v___x_2851_ = _args[19];
lean_object* v_ys_2852_ = _args[20];
lean_object* v_args_2853_ = _args[21];
_start:
{
uint8_t v___x_13607__boxed_2854_; uint8_t v_useSplitter_boxed_2855_; uint8_t v_hasUnitThunk_boxed_2856_; lean_object* v_res_2857_; 
v___x_13607__boxed_2854_ = lean_unbox(v___x_2835_);
v_useSplitter_boxed_2855_ = lean_unbox(v_useSplitter_2836_);
v_hasUnitThunk_boxed_2856_ = lean_unbox(v_hasUnitThunk_2848_);
v_res_2857_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__43(v___x_2832_, v___x_2833_, v_toMonadExceptOf_2834_, v___x_13607__boxed_2854_, v_useSplitter_boxed_2855_, v_inst_2837_, v_onAlt_2838_, v_next_2839_, v_toBind_2840_, v___x_2841_, v___f_2842_, v_fst_2843_, v_inst_2844_, v_inst_2845_, v_numDiscrEqs_2846_, v___f_2847_, v_hasUnitThunk_boxed_2856_, v_toPure_2849_, v___x_2850_, v___x_2851_, v_ys_2852_, v_args_2853_);
lean_dec(v___x_2833_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object* v_fst_2858_, lean_object* v___x_2859_, lean_object* v___x_2860_, lean_object* v___x_2861_, lean_object* v___x_2862_, lean_object* v___x_2863_, lean_object* v_toPure_2864_, lean_object* v_alt_x27_2865_){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2866_ = lean_array_push(v_fst_2858_, v_alt_x27_2865_);
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2859_);
lean_ctor_set(v___x_2867_, 1, v___x_2860_);
v___x_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2861_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2862_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2863_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2866_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
v___x_2873_ = lean_apply_2(v_toPure_2864_, lean_box(0), v___x_2872_);
return v___x_2873_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2875_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0));
v___x_2876_ = lean_unsigned_to_nat(6u);
v___x_2877_ = lean_unsigned_to_nat(361u);
v___x_2878_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2879_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2880_ = l_mkPanicMessageWithDecl(v___x_2879_, v___x_2878_, v___x_2877_, v___x_2876_, v___x_2875_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object* v___x_2881_, lean_object* v_toPure_2882_, lean_object* v_toBind_2883_, lean_object* v___f_2884_, lean_object* v___x_2885_, lean_object* v___x_2886_, lean_object* v_inst_2887_, lean_object* v___x_2888_, lean_object* v_toMonadExceptOf_2889_, uint8_t v___x_2890_, uint8_t v_useSplitter_2891_, lean_object* v_onAlt_2892_, lean_object* v___f_2893_, lean_object* v_fst_2894_, lean_object* v_inst_2895_, lean_object* v_inst_2896_, lean_object* v_numDiscrEqs_2897_, lean_object* v_next_2898_, lean_object* v_acc_2899_, lean_object* v_h_2900_, lean_object* v_G_2901_){
_start:
{
uint8_t v___x_2902_; 
v___x_2902_ = lean_nat_dec_lt(v_next_2898_, v___x_2881_);
if (v___x_2902_ == 0)
{
lean_object* v___x_2903_; 
lean_dec(v_G_2901_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
lean_dec(v___f_2884_);
lean_dec(v_toBind_2883_);
v___x_2903_ = lean_apply_2(v_toPure_2882_, lean_box(0), v_acc_2899_);
return v___x_2903_;
}
else
{
lean_object* v_snd_2904_; lean_object* v_snd_2905_; lean_object* v_snd_2906_; lean_object* v_snd_2907_; lean_object* v_snd_2908_; lean_object* v_fst_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_3121_; 
v_snd_2904_ = lean_ctor_get(v_acc_2899_, 1);
lean_inc(v_snd_2904_);
v_snd_2905_ = lean_ctor_get(v_snd_2904_, 1);
lean_inc(v_snd_2905_);
v_snd_2906_ = lean_ctor_get(v_snd_2905_, 1);
lean_inc(v_snd_2906_);
v_snd_2907_ = lean_ctor_get(v_snd_2906_, 1);
lean_inc(v_snd_2907_);
v_snd_2908_ = lean_ctor_get(v_snd_2907_, 1);
lean_inc(v_snd_2908_);
v_fst_2909_ = lean_ctor_get(v_acc_2899_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_acc_2899_);
if (v_isSharedCheck_3121_ == 0)
{
lean_object* v_unused_3122_; 
v_unused_3122_ = lean_ctor_get(v_acc_2899_, 1);
lean_dec(v_unused_3122_);
v___x_2911_ = v_acc_2899_;
v_isShared_2912_ = v_isSharedCheck_3121_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_fst_2909_);
lean_dec(v_acc_2899_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_3121_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v_fst_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_3119_; 
v_fst_2913_ = lean_ctor_get(v_snd_2904_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v_snd_2904_);
if (v_isSharedCheck_3119_ == 0)
{
lean_object* v_unused_3120_; 
v_unused_3120_ = lean_ctor_get(v_snd_2904_, 1);
lean_dec(v_unused_3120_);
v___x_2915_ = v_snd_2904_;
v_isShared_2916_ = v_isSharedCheck_3119_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_fst_2913_);
lean_dec(v_snd_2904_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_3119_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v_fst_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_3117_; 
v_fst_2917_ = lean_ctor_get(v_snd_2905_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v_snd_2905_);
if (v_isSharedCheck_3117_ == 0)
{
lean_object* v_unused_3118_; 
v_unused_3118_ = lean_ctor_get(v_snd_2905_, 1);
lean_dec(v_unused_3118_);
v___x_2919_ = v_snd_2905_;
v_isShared_2920_ = v_isSharedCheck_3117_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_fst_2917_);
lean_dec(v_snd_2905_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_3117_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v_fst_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_3115_; 
v_fst_2921_ = lean_ctor_get(v_snd_2906_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v_snd_2906_);
if (v_isSharedCheck_3115_ == 0)
{
lean_object* v_unused_3116_; 
v_unused_3116_ = lean_ctor_get(v_snd_2906_, 1);
lean_dec(v_unused_3116_);
v___x_2923_ = v_snd_2906_;
v_isShared_2924_ = v_isSharedCheck_3115_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_fst_2921_);
lean_dec(v_snd_2906_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_3115_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v_fst_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_3113_; 
v_fst_2925_ = lean_ctor_get(v_snd_2907_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_snd_2907_);
if (v_isSharedCheck_3113_ == 0)
{
lean_object* v_unused_3114_; 
v_unused_3114_ = lean_ctor_get(v_snd_2907_, 1);
lean_dec(v_unused_3114_);
v___x_2927_ = v_snd_2907_;
v_isShared_2928_ = v_isSharedCheck_3113_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_fst_2925_);
lean_dec(v_snd_2907_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_3113_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v_array_2929_; lean_object* v_start_2930_; lean_object* v_stop_2931_; lean_object* v___f_2932_; lean_object* v___y_2934_; uint8_t v___x_2937_; 
v_array_2929_ = lean_ctor_get(v_snd_2908_, 0);
v_start_2930_ = lean_ctor_get(v_snd_2908_, 1);
v_stop_2931_ = lean_ctor_get(v_snd_2908_, 2);
lean_inc(v_next_2898_);
lean_inc(v_toPure_2882_);
v___f_2932_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed), 4, 3);
lean_closure_set(v___f_2932_, 0, v_toPure_2882_);
lean_closure_set(v___f_2932_, 1, v_next_2898_);
lean_closure_set(v___f_2932_, 2, v_G_2901_);
v___x_2937_ = lean_nat_dec_lt(v_start_2930_, v_stop_2931_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2939_; 
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
if (v_isShared_2928_ == 0)
{
v___x_2939_ = v___x_2927_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_fst_2925_);
lean_ctor_set(v_reuseFailAlloc_2954_, 1, v_snd_2908_);
v___x_2939_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
lean_object* v___x_2941_; 
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2939_);
v___x_2941_ = v___x_2923_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_fst_2921_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v___x_2939_);
v___x_2941_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2943_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_2941_);
v___x_2943_ = v___x_2919_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_fst_2917_);
lean_ctor_set(v_reuseFailAlloc_2952_, 1, v___x_2941_);
v___x_2943_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2945_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_2943_);
v___x_2945_ = v___x_2915_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_fst_2913_);
lean_ctor_set(v_reuseFailAlloc_2951_, 1, v___x_2943_);
v___x_2945_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2947_; 
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_2945_);
v___x_2947_ = v___x_2911_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
v___x_2949_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_2948_);
v___y_2934_ = v___x_2949_;
goto v___jp_2933_;
}
}
}
}
}
}
else
{
lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_3109_; 
lean_inc(v_stop_2931_);
lean_inc(v_start_2930_);
lean_inc_ref(v_array_2929_);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_snd_2908_);
if (v_isSharedCheck_3109_ == 0)
{
lean_object* v_unused_3110_; lean_object* v_unused_3111_; lean_object* v_unused_3112_; 
v_unused_3110_ = lean_ctor_get(v_snd_2908_, 2);
lean_dec(v_unused_3110_);
v_unused_3111_ = lean_ctor_get(v_snd_2908_, 1);
lean_dec(v_unused_3111_);
v_unused_3112_ = lean_ctor_get(v_snd_2908_, 0);
lean_dec(v_unused_3112_);
v___x_2956_ = v_snd_2908_;
v_isShared_2957_ = v_isSharedCheck_3109_;
goto v_resetjp_2955_;
}
else
{
lean_dec(v_snd_2908_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_3109_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v_array_2958_; lean_object* v_start_2959_; lean_object* v_stop_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2965_; 
v_array_2958_ = lean_ctor_get(v_fst_2925_, 0);
v_start_2959_ = lean_ctor_get(v_fst_2925_, 1);
v_stop_2960_ = lean_ctor_get(v_fst_2925_, 2);
v___x_2961_ = lean_array_fget(v_array_2929_, v_start_2930_);
v___x_2962_ = lean_unsigned_to_nat(1u);
v___x_2963_ = lean_nat_add(v_start_2930_, v___x_2962_);
lean_dec(v_start_2930_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 1, v___x_2963_);
v___x_2965_ = v___x_2956_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_array_2929_);
lean_ctor_set(v_reuseFailAlloc_3108_, 1, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_3108_, 2, v_stop_2931_);
v___x_2965_ = v_reuseFailAlloc_3108_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
uint8_t v___x_2966_; 
v___x_2966_ = lean_nat_dec_lt(v_start_2959_, v_stop_2960_);
if (v___x_2966_ == 0)
{
lean_object* v___x_2968_; 
lean_dec(v___x_2961_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2965_);
v___x_2968_ = v___x_2927_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_fst_2925_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v___x_2965_);
v___x_2968_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
lean_object* v___x_2970_; 
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2968_);
v___x_2970_ = v___x_2923_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_fst_2921_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2972_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_2970_);
v___x_2972_ = v___x_2919_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_fst_2917_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v___x_2970_);
v___x_2972_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
lean_object* v___x_2974_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_2972_);
v___x_2974_ = v___x_2915_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_fst_2913_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v___x_2972_);
v___x_2974_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2976_; 
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_2974_);
v___x_2976_ = v___x_2911_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_2979_, 1, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
v___x_2978_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_2977_);
v___y_2934_ = v___x_2978_;
goto v___jp_2933_;
}
}
}
}
}
}
else
{
lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_3104_; 
lean_inc(v_stop_2960_);
lean_inc(v_start_2959_);
lean_inc_ref(v_array_2958_);
v_isSharedCheck_3104_ = !lean_is_exclusive(v_fst_2925_);
if (v_isSharedCheck_3104_ == 0)
{
lean_object* v_unused_3105_; lean_object* v_unused_3106_; lean_object* v_unused_3107_; 
v_unused_3105_ = lean_ctor_get(v_fst_2925_, 2);
lean_dec(v_unused_3105_);
v_unused_3106_ = lean_ctor_get(v_fst_2925_, 1);
lean_dec(v_unused_3106_);
v_unused_3107_ = lean_ctor_get(v_fst_2925_, 0);
lean_dec(v_unused_3107_);
v___x_2985_ = v_fst_2925_;
v_isShared_2986_ = v_isSharedCheck_3104_;
goto v_resetjp_2984_;
}
else
{
lean_dec(v_fst_2925_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_3104_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v_array_2987_; lean_object* v_start_2988_; lean_object* v_stop_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2993_; 
v_array_2987_ = lean_ctor_get(v_fst_2921_, 0);
v_start_2988_ = lean_ctor_get(v_fst_2921_, 1);
v_stop_2989_ = lean_ctor_get(v_fst_2921_, 2);
v___x_2990_ = lean_array_fget(v_array_2958_, v_start_2959_);
v___x_2991_ = lean_nat_add(v_start_2959_, v___x_2962_);
lean_dec(v_start_2959_);
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 1, v___x_2991_);
v___x_2993_ = v___x_2985_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_array_2958_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_3103_, 2, v_stop_2960_);
v___x_2993_ = v_reuseFailAlloc_3103_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
uint8_t v___x_2994_; 
v___x_2994_ = lean_nat_dec_lt(v_start_2988_, v_stop_2989_);
if (v___x_2994_ == 0)
{
lean_object* v___x_2996_; 
lean_dec(v___x_2990_);
lean_dec(v___x_2961_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2965_);
lean_ctor_set(v___x_2927_, 0, v___x_2993_);
v___x_2996_ = v___x_2927_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v___x_2965_);
v___x_2996_ = v_reuseFailAlloc_3011_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2998_; 
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2996_);
v___x_2998_ = v___x_2923_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_fst_2921_);
lean_ctor_set(v_reuseFailAlloc_3010_, 1, v___x_2996_);
v___x_2998_ = v_reuseFailAlloc_3010_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
lean_object* v___x_3000_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_2998_);
v___x_3000_ = v___x_2919_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_fst_2917_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v___x_2998_);
v___x_3000_ = v_reuseFailAlloc_3009_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3002_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_3000_);
v___x_3002_ = v___x_2915_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_fst_2913_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v___x_3000_);
v___x_3002_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3004_; 
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_3002_);
v___x_3004_ = v___x_2911_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___x_3002_);
v___x_3004_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3004_);
v___x_3006_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_3005_);
v___y_2934_ = v___x_3006_;
goto v___jp_2933_;
}
}
}
}
}
}
else
{
lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3099_; 
lean_inc(v_stop_2989_);
lean_inc(v_start_2988_);
lean_inc_ref(v_array_2987_);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_fst_2921_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; lean_object* v_unused_3101_; lean_object* v_unused_3102_; 
v_unused_3100_ = lean_ctor_get(v_fst_2921_, 2);
lean_dec(v_unused_3100_);
v_unused_3101_ = lean_ctor_get(v_fst_2921_, 1);
lean_dec(v_unused_3101_);
v_unused_3102_ = lean_ctor_get(v_fst_2921_, 0);
lean_dec(v_unused_3102_);
v___x_3013_ = v_fst_2921_;
v_isShared_3014_ = v_isSharedCheck_3099_;
goto v_resetjp_3012_;
}
else
{
lean_dec(v_fst_2921_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3099_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v_array_3015_; lean_object* v_start_3016_; lean_object* v_stop_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
v_array_3015_ = lean_ctor_get(v_fst_2917_, 0);
v_start_3016_ = lean_ctor_get(v_fst_2917_, 1);
v_stop_3017_ = lean_ctor_get(v_fst_2917_, 2);
v___x_3018_ = lean_array_fget(v_array_2987_, v_start_2988_);
v___x_3019_ = lean_nat_add(v_start_2988_, v___x_2962_);
lean_dec(v_start_2988_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 1, v___x_3019_);
v___x_3021_ = v___x_3013_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_array_2987_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3098_, 2, v_stop_2989_);
v___x_3021_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
uint8_t v___x_3022_; 
v___x_3022_ = lean_nat_dec_lt(v_start_3016_, v_stop_3017_);
if (v___x_3022_ == 0)
{
lean_object* v___x_3024_; 
lean_dec(v___x_3018_);
lean_dec(v___x_2990_);
lean_dec(v___x_2961_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2965_);
lean_ctor_set(v___x_2927_, 0, v___x_2993_);
v___x_3024_ = v___x_2927_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v___x_2965_);
v___x_3024_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3026_; 
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_3024_);
lean_ctor_set(v___x_2923_, 0, v___x_3021_);
v___x_3026_ = v___x_2923_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3021_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_3026_);
v___x_3028_ = v___x_2919_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_fst_2917_);
lean_ctor_set(v_reuseFailAlloc_3037_, 1, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3030_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_3028_);
v___x_3030_ = v___x_2915_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_fst_2913_);
lean_ctor_set(v_reuseFailAlloc_3036_, 1, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
lean_object* v___x_3032_; 
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_3030_);
v___x_3032_ = v___x_2911_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_3035_, 1, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
v___x_3034_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_3033_);
v___y_2934_ = v___x_3034_;
goto v___jp_2933_;
}
}
}
}
}
}
else
{
lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3094_; 
lean_inc(v_stop_3017_);
lean_inc(v_start_3016_);
lean_inc_ref(v_array_3015_);
v_isSharedCheck_3094_ = !lean_is_exclusive(v_fst_2917_);
if (v_isSharedCheck_3094_ == 0)
{
lean_object* v_unused_3095_; lean_object* v_unused_3096_; lean_object* v_unused_3097_; 
v_unused_3095_ = lean_ctor_get(v_fst_2917_, 2);
lean_dec(v_unused_3095_);
v_unused_3096_ = lean_ctor_get(v_fst_2917_, 1);
lean_dec(v_unused_3096_);
v_unused_3097_ = lean_ctor_get(v_fst_2917_, 0);
lean_dec(v_unused_3097_);
v___x_3041_ = v_fst_2917_;
v_isShared_3042_ = v_isSharedCheck_3094_;
goto v_resetjp_3040_;
}
else
{
lean_dec(v_fst_2917_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3094_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v_array_3043_; lean_object* v_start_3044_; lean_object* v_stop_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3049_; 
v_array_3043_ = lean_ctor_get(v_fst_2913_, 0);
v_start_3044_ = lean_ctor_get(v_fst_2913_, 1);
v_stop_3045_ = lean_ctor_get(v_fst_2913_, 2);
v___x_3046_ = lean_array_fget(v_array_3015_, v_start_3016_);
v___x_3047_ = lean_nat_add(v_start_3016_, v___x_2962_);
lean_dec(v_start_3016_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 1, v___x_3047_);
v___x_3049_ = v___x_3041_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_array_3015_);
lean_ctor_set(v_reuseFailAlloc_3093_, 1, v___x_3047_);
lean_ctor_set(v_reuseFailAlloc_3093_, 2, v_stop_3017_);
v___x_3049_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
uint8_t v___x_3050_; 
v___x_3050_ = lean_nat_dec_lt(v_start_3044_, v_stop_3045_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3052_; 
lean_dec(v___x_3046_);
lean_dec(v___x_3018_);
lean_dec(v___x_2990_);
lean_dec(v___x_2961_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2965_);
lean_ctor_set(v___x_2927_, 0, v___x_2993_);
v___x_3052_ = v___x_2927_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v___x_2965_);
v___x_3052_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
lean_object* v___x_3054_; 
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_3052_);
lean_ctor_set(v___x_2923_, 0, v___x_3021_);
v___x_3054_ = v___x_2923_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3021_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v___x_3052_);
v___x_3054_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3056_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v___x_3054_);
lean_ctor_set(v___x_2919_, 0, v___x_3049_);
v___x_3056_ = v___x_2919_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3049_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3058_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_3056_);
v___x_3058_ = v___x_2915_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_fst_2913_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v___x_3058_);
v___x_3060_ = v___x_2911_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_fst_2909_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
v___x_3062_ = lean_apply_2(v_toPure_2882_, lean_box(0), v___x_3061_);
v___y_2934_ = v___x_3062_;
goto v___jp_2933_;
}
}
}
}
}
}
else
{
lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3089_; 
lean_inc(v_stop_3045_);
lean_inc(v_start_3044_);
lean_inc_ref(v_array_3043_);
lean_del_object(v___x_2927_);
lean_del_object(v___x_2923_);
lean_del_object(v___x_2919_);
lean_del_object(v___x_2915_);
lean_del_object(v___x_2911_);
v_isSharedCheck_3089_ = !lean_is_exclusive(v_fst_2913_);
if (v_isSharedCheck_3089_ == 0)
{
lean_object* v_unused_3090_; lean_object* v_unused_3091_; lean_object* v_unused_3092_; 
v_unused_3090_ = lean_ctor_get(v_fst_2913_, 2);
lean_dec(v_unused_3090_);
v_unused_3091_ = lean_ctor_get(v_fst_2913_, 1);
lean_dec(v_unused_3091_);
v_unused_3092_ = lean_ctor_get(v_fst_2913_, 0);
lean_dec(v_unused_3092_);
v___x_3069_ = v_fst_2913_;
v_isShared_3070_ = v_isSharedCheck_3089_;
goto v_resetjp_3068_;
}
else
{
lean_dec(v_fst_2913_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3089_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v_numOverlaps_3071_; uint8_t v_hasUnitThunk_3072_; uint8_t v___x_3073_; 
v_numOverlaps_3071_ = lean_ctor_get(v___x_3046_, 1);
v_hasUnitThunk_3072_ = lean_ctor_get_uint8(v___x_3046_, sizeof(void*)*2);
v___x_3073_ = lean_nat_dec_eq(v_numOverlaps_3071_, v___x_2885_);
if (v___x_3073_ == 0)
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
lean_del_object(v___x_3069_);
lean_dec_ref(v___x_3049_);
lean_dec(v___x_3046_);
lean_dec(v_stop_3045_);
lean_dec(v_start_3044_);
lean_dec_ref(v_array_3043_);
lean_dec_ref(v___x_3021_);
lean_dec(v___x_3018_);
lean_dec_ref(v___x_2993_);
lean_dec(v___x_2990_);
lean_dec_ref(v___x_2965_);
lean_dec(v___x_2961_);
lean_dec(v_fst_2909_);
lean_dec(v_next_2898_);
lean_dec(v_numDiscrEqs_2897_);
lean_dec_ref(v_inst_2896_);
lean_dec_ref(v_inst_2895_);
lean_dec(v_fst_2894_);
lean_dec(v___f_2893_);
lean_dec(v_onAlt_2892_);
lean_dec_ref(v_toMonadExceptOf_2889_);
lean_dec(v___x_2888_);
lean_dec(v_inst_2887_);
lean_dec(v_toPure_2882_);
v___x_3074_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_3075_ = l_panic___redArg(v___x_2886_, v___x_3074_);
v___y_2934_ = v___x_3075_;
goto v___jp_2933_;
}
else
{
lean_object* v___f_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___f_3081_; lean_object* v___x_3082_; lean_object* v___x_3084_; 
lean_inc(v_inst_2887_);
lean_inc_n(v_toPure_2882_, 2);
lean_inc(v___x_3018_);
v___f_3076_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed), 4, 3);
lean_closure_set(v___f_3076_, 0, v___x_3018_);
lean_closure_set(v___f_3076_, 1, v_toPure_2882_);
lean_closure_set(v___f_3076_, 2, v_inst_2887_);
v___x_3077_ = lean_array_fget_borrowed(v_array_3043_, v_start_3044_);
v___x_3078_ = lean_box(v___x_2890_);
v___x_3079_ = lean_box(v_useSplitter_2891_);
v___x_3080_ = lean_box(v_hasUnitThunk_3072_);
lean_inc_ref(v_inst_2896_);
lean_inc_ref(v_inst_2895_);
lean_inc(v___x_3077_);
lean_inc(v_toBind_2883_);
v___f_3081_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed), 22, 20);
lean_closure_set(v___f_3081_, 0, v___x_3018_);
lean_closure_set(v___f_3081_, 1, v___x_2888_);
lean_closure_set(v___f_3081_, 2, v_toMonadExceptOf_2889_);
lean_closure_set(v___f_3081_, 3, v___x_3078_);
lean_closure_set(v___f_3081_, 4, v___x_3079_);
lean_closure_set(v___f_3081_, 5, v_inst_2887_);
lean_closure_set(v___f_3081_, 6, v_onAlt_2892_);
lean_closure_set(v___f_3081_, 7, v_next_2898_);
lean_closure_set(v___f_3081_, 8, v_toBind_2883_);
lean_closure_set(v___f_3081_, 9, v___x_3077_);
lean_closure_set(v___f_3081_, 10, v___f_2893_);
lean_closure_set(v___f_3081_, 11, v_fst_2894_);
lean_closure_set(v___f_3081_, 12, v_inst_2895_);
lean_closure_set(v___f_3081_, 13, v_inst_2896_);
lean_closure_set(v___f_3081_, 14, v_numDiscrEqs_2897_);
lean_closure_set(v___f_3081_, 15, v___f_3076_);
lean_closure_set(v___f_3081_, 16, v___x_3080_);
lean_closure_set(v___f_3081_, 17, v_toPure_2882_);
lean_closure_set(v___f_3081_, 18, v___x_2962_);
lean_closure_set(v___f_3081_, 19, v___x_2961_);
v___x_3082_ = lean_nat_add(v_start_3044_, v___x_2962_);
lean_dec(v_start_3044_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 1, v___x_3082_);
v___x_3084_ = v___x_3069_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_array_3043_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v___x_3082_);
lean_ctor_set(v_reuseFailAlloc_3088_, 2, v_stop_3045_);
v___x_3084_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___f_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___f_3085_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__45), 8, 7);
lean_closure_set(v___f_3085_, 0, v_fst_2909_);
lean_closure_set(v___f_3085_, 1, v___x_2993_);
lean_closure_set(v___f_3085_, 2, v___x_2965_);
lean_closure_set(v___f_3085_, 3, v___x_3021_);
lean_closure_set(v___f_3085_, 4, v___x_3049_);
lean_closure_set(v___f_3085_, 5, v___x_3084_);
lean_closure_set(v___f_3085_, 6, v_toPure_2882_);
v___x_3086_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_2896_, v_inst_2895_, v___x_2990_, v___x_3046_, v___f_3081_);
lean_inc(v_toBind_2883_);
v___x_3087_ = lean_apply_4(v_toBind_2883_, lean_box(0), lean_box(0), v___x_3086_, v___f_3085_);
v___y_2934_ = v___x_3087_;
goto v___jp_2933_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_2933_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
lean_inc(v_toBind_2883_);
v___x_2935_ = lean_apply_4(v_toBind_2883_, lean_box(0), lean_box(0), v___y_2934_, v___f_2884_);
v___x_2936_ = lean_apply_4(v_toBind_2883_, lean_box(0), lean_box(0), v___x_2935_, v___f_2932_);
return v___x_2936_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object** _args){
lean_object* v___x_3123_ = _args[0];
lean_object* v_toPure_3124_ = _args[1];
lean_object* v_toBind_3125_ = _args[2];
lean_object* v___f_3126_ = _args[3];
lean_object* v___x_3127_ = _args[4];
lean_object* v___x_3128_ = _args[5];
lean_object* v_inst_3129_ = _args[6];
lean_object* v___x_3130_ = _args[7];
lean_object* v_toMonadExceptOf_3131_ = _args[8];
lean_object* v___x_3132_ = _args[9];
lean_object* v_useSplitter_3133_ = _args[10];
lean_object* v_onAlt_3134_ = _args[11];
lean_object* v___f_3135_ = _args[12];
lean_object* v_fst_3136_ = _args[13];
lean_object* v_inst_3137_ = _args[14];
lean_object* v_inst_3138_ = _args[15];
lean_object* v_numDiscrEqs_3139_ = _args[16];
lean_object* v_next_3140_ = _args[17];
lean_object* v_acc_3141_ = _args[18];
lean_object* v_h_3142_ = _args[19];
lean_object* v_G_3143_ = _args[20];
_start:
{
uint8_t v___x_13725__boxed_3144_; uint8_t v_useSplitter_boxed_3145_; lean_object* v_res_3146_; 
v___x_13725__boxed_3144_ = lean_unbox(v___x_3132_);
v_useSplitter_boxed_3145_ = lean_unbox(v_useSplitter_3133_);
v_res_3146_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__46(v___x_3123_, v_toPure_3124_, v_toBind_3125_, v___f_3126_, v___x_3127_, v___x_3128_, v_inst_3129_, v___x_3130_, v_toMonadExceptOf_3131_, v___x_13725__boxed_3144_, v_useSplitter_boxed_3145_, v_onAlt_3134_, v___f_3135_, v_fst_3136_, v_inst_3137_, v_inst_3138_, v_numDiscrEqs_3139_, v_next_3140_, v_acc_3141_, v_h_3142_, v_G_3143_);
lean_dec(v___x_3128_);
lean_dec(v___x_3127_);
lean_dec(v___x_3123_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object* v_fst_3147_, lean_object* v_numParams_3148_, lean_object* v_numDiscrs_3149_, lean_object* v_altInfos_3150_, lean_object* v_uElimPos_x3f_3151_, lean_object* v_snd_3152_, lean_object* v_overlaps_3153_, lean_object* v_splitterName_3154_, lean_object* v_matcherLevels_3155_, lean_object* v_params_x27_3156_, lean_object* v_fst_3157_, lean_object* v_discrs_x27_3158_, lean_object* v_fst_3159_, lean_object* v_toPure_3160_, lean_object* v_____do__lift_3161_){
_start:
{
lean_object* v_remaining_x27_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
v_remaining_x27_3162_ = l_Array_append___redArg(v_fst_3147_, v_____do__lift_3161_);
v___x_3163_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3163_, 0, v_numParams_3148_);
lean_ctor_set(v___x_3163_, 1, v_numDiscrs_3149_);
lean_ctor_set(v___x_3163_, 2, v_altInfos_3150_);
lean_ctor_set(v___x_3163_, 3, v_uElimPos_x3f_3151_);
lean_ctor_set(v___x_3163_, 4, v_snd_3152_);
lean_ctor_set(v___x_3163_, 5, v_overlaps_3153_);
v___x_3164_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
lean_ctor_set(v___x_3164_, 1, v_splitterName_3154_);
lean_ctor_set(v___x_3164_, 2, v_matcherLevels_3155_);
lean_ctor_set(v___x_3164_, 3, v_params_x27_3156_);
lean_ctor_set(v___x_3164_, 4, v_fst_3157_);
lean_ctor_set(v___x_3164_, 5, v_discrs_x27_3158_);
lean_ctor_set(v___x_3164_, 6, v_fst_3159_);
lean_ctor_set(v___x_3164_, 7, v_remaining_x27_3162_);
v___x_3165_ = lean_apply_2(v_toPure_3160_, lean_box(0), v___x_3164_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object* v_fst_3166_, lean_object* v_numParams_3167_, lean_object* v_numDiscrs_3168_, lean_object* v_altInfos_3169_, lean_object* v_uElimPos_x3f_3170_, lean_object* v_snd_3171_, lean_object* v_overlaps_3172_, lean_object* v_splitterName_3173_, lean_object* v_matcherLevels_3174_, lean_object* v_params_x27_3175_, lean_object* v_fst_3176_, lean_object* v_discrs_x27_3177_, lean_object* v_fst_3178_, lean_object* v_toPure_3179_, lean_object* v_____do__lift_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__47(v_fst_3166_, v_numParams_3167_, v_numDiscrs_3168_, v_altInfos_3169_, v_uElimPos_x3f_3170_, v_snd_3171_, v_overlaps_3172_, v_splitterName_3173_, v_matcherLevels_3174_, v_params_x27_3175_, v_fst_3176_, v_discrs_x27_3177_, v_fst_3178_, v_toPure_3179_, v_____do__lift_3180_);
lean_dec_ref(v_____do__lift_3180_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object* v_fst_3182_, lean_object* v_numParams_3183_, lean_object* v_numDiscrs_3184_, lean_object* v_altInfos_3185_, lean_object* v_uElimPos_x3f_3186_, lean_object* v_snd_3187_, lean_object* v_overlaps_3188_, lean_object* v_splitterName_3189_, lean_object* v_matcherLevels_3190_, lean_object* v_params_x27_3191_, lean_object* v_fst_3192_, lean_object* v_discrs_x27_3193_, lean_object* v_toPure_3194_, lean_object* v_onRemaining_3195_, lean_object* v_remaining_3196_, lean_object* v_toBind_3197_, lean_object* v_____s_3198_){
_start:
{
lean_object* v_fst_3199_; lean_object* v___f_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_fst_3199_ = lean_ctor_get(v_____s_3198_, 0);
lean_inc(v_fst_3199_);
lean_dec_ref(v_____s_3198_);
v___f_3200_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed), 15, 14);
lean_closure_set(v___f_3200_, 0, v_fst_3182_);
lean_closure_set(v___f_3200_, 1, v_numParams_3183_);
lean_closure_set(v___f_3200_, 2, v_numDiscrs_3184_);
lean_closure_set(v___f_3200_, 3, v_altInfos_3185_);
lean_closure_set(v___f_3200_, 4, v_uElimPos_x3f_3186_);
lean_closure_set(v___f_3200_, 5, v_snd_3187_);
lean_closure_set(v___f_3200_, 6, v_overlaps_3188_);
lean_closure_set(v___f_3200_, 7, v_splitterName_3189_);
lean_closure_set(v___f_3200_, 8, v_matcherLevels_3190_);
lean_closure_set(v___f_3200_, 9, v_params_x27_3191_);
lean_closure_set(v___f_3200_, 10, v_fst_3192_);
lean_closure_set(v___f_3200_, 11, v_discrs_x27_3193_);
lean_closure_set(v___f_3200_, 12, v_fst_3199_);
lean_closure_set(v___f_3200_, 13, v_toPure_3194_);
v___x_3201_ = lean_apply_1(v_onRemaining_3195_, v_remaining_3196_);
v___x_3202_ = lean_apply_4(v_toBind_3197_, lean_box(0), lean_box(0), v___x_3201_, v___f_3200_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object** _args){
lean_object* v_fst_3203_ = _args[0];
lean_object* v_numParams_3204_ = _args[1];
lean_object* v_numDiscrs_3205_ = _args[2];
lean_object* v_altInfos_3206_ = _args[3];
lean_object* v_uElimPos_x3f_3207_ = _args[4];
lean_object* v_snd_3208_ = _args[5];
lean_object* v_overlaps_3209_ = _args[6];
lean_object* v_splitterName_3210_ = _args[7];
lean_object* v_matcherLevels_3211_ = _args[8];
lean_object* v_params_x27_3212_ = _args[9];
lean_object* v_fst_3213_ = _args[10];
lean_object* v_discrs_x27_3214_ = _args[11];
lean_object* v_toPure_3215_ = _args[12];
lean_object* v_onRemaining_3216_ = _args[13];
lean_object* v_remaining_3217_ = _args[14];
lean_object* v_toBind_3218_ = _args[15];
lean_object* v_____s_3219_ = _args[16];
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__48(v_fst_3203_, v_numParams_3204_, v_numDiscrs_3205_, v_altInfos_3206_, v_uElimPos_x3f_3207_, v_snd_3208_, v_overlaps_3209_, v_splitterName_3210_, v_matcherLevels_3211_, v_params_x27_3212_, v_fst_3213_, v_discrs_x27_3214_, v_toPure_3215_, v_onRemaining_3216_, v_remaining_3217_, v_toBind_3218_, v_____s_3219_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object* v_splitterMatchInfo_3221_, lean_object* v_fst_3222_, lean_object* v_numParams_3223_, lean_object* v_numDiscrs_3224_, lean_object* v_altInfos_3225_, lean_object* v_uElimPos_x3f_3226_, lean_object* v_snd_3227_, lean_object* v_overlaps_3228_, lean_object* v_splitterName_3229_, lean_object* v_matcherLevels_3230_, lean_object* v_params_x27_3231_, lean_object* v_fst_3232_, lean_object* v_discrs_x27_3233_, lean_object* v_toPure_3234_, lean_object* v_onRemaining_3235_, lean_object* v_remaining_3236_, lean_object* v_toBind_3237_, lean_object* v_origAltTypes_3238_, lean_object* v_alts_3239_, lean_object* v___x_3240_, lean_object* v___x_3241_, lean_object* v_remaining_x27_3242_, lean_object* v___f_3243_, lean_object* v_altTypes_3244_){
_start:
{
lean_object* v_altInfos_3245_; lean_object* v___f_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v_altInfos_3245_ = lean_ctor_get(v_splitterMatchInfo_3221_, 2);
lean_inc_ref(v_altInfos_3245_);
lean_dec_ref(v_splitterMatchInfo_3221_);
lean_inc(v_toBind_3237_);
lean_inc_ref(v_altInfos_3225_);
v___f_3246_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed), 17, 16);
lean_closure_set(v___f_3246_, 0, v_fst_3222_);
lean_closure_set(v___f_3246_, 1, v_numParams_3223_);
lean_closure_set(v___f_3246_, 2, v_numDiscrs_3224_);
lean_closure_set(v___f_3246_, 3, v_altInfos_3225_);
lean_closure_set(v___f_3246_, 4, v_uElimPos_x3f_3226_);
lean_closure_set(v___f_3246_, 5, v_snd_3227_);
lean_closure_set(v___f_3246_, 6, v_overlaps_3228_);
lean_closure_set(v___f_3246_, 7, v_splitterName_3229_);
lean_closure_set(v___f_3246_, 8, v_matcherLevels_3230_);
lean_closure_set(v___f_3246_, 9, v_params_x27_3231_);
lean_closure_set(v___f_3246_, 10, v_fst_3232_);
lean_closure_set(v___f_3246_, 11, v_discrs_x27_3233_);
lean_closure_set(v___f_3246_, 12, v_toPure_3234_);
lean_closure_set(v___f_3246_, 13, v_onRemaining_3235_);
lean_closure_set(v___f_3246_, 14, v_remaining_3236_);
lean_closure_set(v___f_3246_, 15, v_toBind_3237_);
v___x_3247_ = lean_array_get_size(v_altInfos_3225_);
v___x_3248_ = lean_array_get_size(v_altInfos_3245_);
v___x_3249_ = lean_array_get_size(v_origAltTypes_3238_);
v___x_3250_ = lean_array_get_size(v_altTypes_3244_);
lean_inc_n(v___x_3240_, 5);
v___x_3251_ = l_Array_toSubarray___redArg(v_alts_3239_, v___x_3240_, v___x_3241_);
v___x_3252_ = l_Array_toSubarray___redArg(v_altInfos_3225_, v___x_3240_, v___x_3247_);
v___x_3253_ = l_Array_toSubarray___redArg(v_altInfos_3245_, v___x_3240_, v___x_3248_);
v___x_3254_ = l_Array_toSubarray___redArg(v_origAltTypes_3238_, v___x_3240_, v___x_3249_);
v___x_3255_ = l_Array_toSubarray___redArg(v_altTypes_3244_, v___x_3240_, v___x_3250_);
v___x_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3254_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v___x_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3253_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3252_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v___x_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3251_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3260_, 0, v_remaining_x27_3242_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3243_, v___x_3240_, v___x_3260_, lean_box(0));
v___x_3262_ = lean_apply_4(v_toBind_3237_, lean_box(0), lean_box(0), v___x_3261_, v___f_3246_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object** _args){
lean_object* v_splitterMatchInfo_3263_ = _args[0];
lean_object* v_fst_3264_ = _args[1];
lean_object* v_numParams_3265_ = _args[2];
lean_object* v_numDiscrs_3266_ = _args[3];
lean_object* v_altInfos_3267_ = _args[4];
lean_object* v_uElimPos_x3f_3268_ = _args[5];
lean_object* v_snd_3269_ = _args[6];
lean_object* v_overlaps_3270_ = _args[7];
lean_object* v_splitterName_3271_ = _args[8];
lean_object* v_matcherLevels_3272_ = _args[9];
lean_object* v_params_x27_3273_ = _args[10];
lean_object* v_fst_3274_ = _args[11];
lean_object* v_discrs_x27_3275_ = _args[12];
lean_object* v_toPure_3276_ = _args[13];
lean_object* v_onRemaining_3277_ = _args[14];
lean_object* v_remaining_3278_ = _args[15];
lean_object* v_toBind_3279_ = _args[16];
lean_object* v_origAltTypes_3280_ = _args[17];
lean_object* v_alts_3281_ = _args[18];
lean_object* v___x_3282_ = _args[19];
lean_object* v___x_3283_ = _args[20];
lean_object* v_remaining_x27_3284_ = _args[21];
lean_object* v___f_3285_ = _args[22];
lean_object* v_altTypes_3286_ = _args[23];
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__49(v_splitterMatchInfo_3263_, v_fst_3264_, v_numParams_3265_, v_numDiscrs_3266_, v_altInfos_3267_, v_uElimPos_x3f_3268_, v_snd_3269_, v_overlaps_3270_, v_splitterName_3271_, v_matcherLevels_3272_, v_params_x27_3273_, v_fst_3274_, v_discrs_x27_3275_, v_toPure_3276_, v_onRemaining_3277_, v_remaining_3278_, v_toBind_3279_, v_origAltTypes_3280_, v_alts_3281_, v___x_3282_, v___x_3283_, v_remaining_x27_3284_, v___f_3285_, v_altTypes_3286_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object* v___x_3288_, lean_object* v_aux2_3289_, lean_object* v_inst_3290_, lean_object* v_toBind_3291_, lean_object* v___f_3292_, lean_object* v_____r_3293_){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3294_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3294_, 0, v___x_3288_);
lean_closure_set(v___x_3294_, 1, v_aux2_3289_);
v___x_3295_ = lean_apply_2(v_inst_3290_, lean_box(0), v___x_3294_);
v___x_3296_ = lean_apply_4(v_toBind_3291_, lean_box(0), lean_box(0), v___x_3295_, v___f_3292_);
return v___x_3296_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1(void){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0));
v___x_3299_ = l_Lean_stringToMessageData(v___x_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object* v___x_3300_, lean_object* v_params_x27_3301_, lean_object* v_fst_3302_, lean_object* v_discrs_x27_3303_, lean_object* v_fst_3304_, lean_object* v_numParams_3305_, lean_object* v_numDiscrs_3306_, lean_object* v_altInfos_3307_, lean_object* v_uElimPos_x3f_3308_, lean_object* v_snd_3309_, lean_object* v_overlaps_3310_, lean_object* v_matcherLevels_3311_, lean_object* v_toPure_3312_, lean_object* v_onRemaining_3313_, lean_object* v_remaining_3314_, lean_object* v_toBind_3315_, lean_object* v_origAltTypes_3316_, lean_object* v_alts_3317_, lean_object* v___x_3318_, lean_object* v___x_3319_, lean_object* v_remaining_x27_3320_, lean_object* v___f_3321_, lean_object* v_inst_3322_, lean_object* v___x_3323_, uint8_t v___x_3324_, lean_object* v_liftWith_3325_, lean_object* v_restoreM_3326_, lean_object* v_matchEqns_3327_){
_start:
{
lean_object* v_splitterName_3328_; lean_object* v_splitterMatchInfo_3329_; lean_object* v___x_3330_; lean_object* v_aux2_3331_; lean_object* v_aux2_3332_; lean_object* v_aux2_3333_; lean_object* v___x_3334_; lean_object* v___f_3335_; lean_object* v___f_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___f_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___f_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v_splitterName_3328_ = lean_ctor_get(v_matchEqns_3327_, 1);
lean_inc_n(v_splitterName_3328_, 2);
v_splitterMatchInfo_3329_ = lean_ctor_get(v_matchEqns_3327_, 2);
lean_inc_ref(v_splitterMatchInfo_3329_);
lean_dec_ref(v_matchEqns_3327_);
v___x_3330_ = l_Lean_mkConst(v_splitterName_3328_, v___x_3300_);
v_aux2_3331_ = l_Lean_mkAppN(v___x_3330_, v_params_x27_3301_);
lean_inc_ref(v_fst_3302_);
v_aux2_3332_ = l_Lean_Expr_app___override(v_aux2_3331_, v_fst_3302_);
v_aux2_3333_ = l_Lean_mkAppN(v_aux2_3332_, v_discrs_x27_3303_);
lean_inc_ref_n(v_aux2_3333_, 2);
v___x_3334_ = l_Lean_indentExpr(v_aux2_3333_);
lean_inc(v___x_3319_);
lean_inc_n(v_toBind_3315_, 3);
v___f_3335_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed), 24, 23);
lean_closure_set(v___f_3335_, 0, v_splitterMatchInfo_3329_);
lean_closure_set(v___f_3335_, 1, v_fst_3304_);
lean_closure_set(v___f_3335_, 2, v_numParams_3305_);
lean_closure_set(v___f_3335_, 3, v_numDiscrs_3306_);
lean_closure_set(v___f_3335_, 4, v_altInfos_3307_);
lean_closure_set(v___f_3335_, 5, v_uElimPos_x3f_3308_);
lean_closure_set(v___f_3335_, 6, v_snd_3309_);
lean_closure_set(v___f_3335_, 7, v_overlaps_3310_);
lean_closure_set(v___f_3335_, 8, v_splitterName_3328_);
lean_closure_set(v___f_3335_, 9, v_matcherLevels_3311_);
lean_closure_set(v___f_3335_, 10, v_params_x27_3301_);
lean_closure_set(v___f_3335_, 11, v_fst_3302_);
lean_closure_set(v___f_3335_, 12, v_discrs_x27_3303_);
lean_closure_set(v___f_3335_, 13, v_toPure_3312_);
lean_closure_set(v___f_3335_, 14, v_onRemaining_3313_);
lean_closure_set(v___f_3335_, 15, v_remaining_3314_);
lean_closure_set(v___f_3335_, 16, v_toBind_3315_);
lean_closure_set(v___f_3335_, 17, v_origAltTypes_3316_);
lean_closure_set(v___f_3335_, 18, v_alts_3317_);
lean_closure_set(v___f_3335_, 19, v___x_3318_);
lean_closure_set(v___f_3335_, 20, v___x_3319_);
lean_closure_set(v___f_3335_, 21, v_remaining_x27_3320_);
lean_closure_set(v___f_3335_, 22, v___f_3321_);
lean_inc(v_inst_3322_);
v___f_3336_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__50), 6, 5);
lean_closure_set(v___f_3336_, 0, v___x_3319_);
lean_closure_set(v___f_3336_, 1, v_aux2_3333_);
lean_closure_set(v___f_3336_, 2, v_inst_3322_);
lean_closure_set(v___f_3336_, 3, v_toBind_3315_);
lean_closure_set(v___f_3336_, 4, v___f_3335_);
v___x_3337_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
v___x_3338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
lean_ctor_set(v___x_3338_, 1, v___x_3334_);
v___x_3339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3323_);
v___f_3340_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3340_, 0, v___x_3339_);
v___x_3341_ = lean_box(v___x_3324_);
v___x_3342_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3342_, 0, v_aux2_3333_);
lean_closure_set(v___x_3342_, 1, v___x_3341_);
v___x_3343_ = lean_apply_2(v_inst_3322_, lean_box(0), v___x_3342_);
v___f_3344_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3344_, 0, v___x_3343_);
lean_closure_set(v___f_3344_, 1, v___f_3340_);
v___x_3345_ = lean_apply_2(v_liftWith_3325_, lean_box(0), v___f_3344_);
v___x_3346_ = lean_apply_1(v_restoreM_3326_, lean_box(0));
v___x_3347_ = lean_apply_4(v_toBind_3315_, lean_box(0), lean_box(0), v___x_3345_, v___x_3346_);
v___x_3348_ = lean_apply_4(v_toBind_3315_, lean_box(0), lean_box(0), v___x_3347_, v___f_3336_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object** _args){
lean_object* v___x_3349_ = _args[0];
lean_object* v_params_x27_3350_ = _args[1];
lean_object* v_fst_3351_ = _args[2];
lean_object* v_discrs_x27_3352_ = _args[3];
lean_object* v_fst_3353_ = _args[4];
lean_object* v_numParams_3354_ = _args[5];
lean_object* v_numDiscrs_3355_ = _args[6];
lean_object* v_altInfos_3356_ = _args[7];
lean_object* v_uElimPos_x3f_3357_ = _args[8];
lean_object* v_snd_3358_ = _args[9];
lean_object* v_overlaps_3359_ = _args[10];
lean_object* v_matcherLevels_3360_ = _args[11];
lean_object* v_toPure_3361_ = _args[12];
lean_object* v_onRemaining_3362_ = _args[13];
lean_object* v_remaining_3363_ = _args[14];
lean_object* v_toBind_3364_ = _args[15];
lean_object* v_origAltTypes_3365_ = _args[16];
lean_object* v_alts_3366_ = _args[17];
lean_object* v___x_3367_ = _args[18];
lean_object* v___x_3368_ = _args[19];
lean_object* v_remaining_x27_3369_ = _args[20];
lean_object* v___f_3370_ = _args[21];
lean_object* v_inst_3371_ = _args[22];
lean_object* v___x_3372_ = _args[23];
lean_object* v___x_3373_ = _args[24];
lean_object* v_liftWith_3374_ = _args[25];
lean_object* v_restoreM_3375_ = _args[26];
lean_object* v_matchEqns_3376_ = _args[27];
_start:
{
uint8_t v___x_14251__boxed_3377_; lean_object* v_res_3378_; 
v___x_14251__boxed_3377_ = lean_unbox(v___x_3373_);
v_res_3378_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__53(v___x_3349_, v_params_x27_3350_, v_fst_3351_, v_discrs_x27_3352_, v_fst_3353_, v_numParams_3354_, v_numDiscrs_3355_, v_altInfos_3356_, v_uElimPos_x3f_3357_, v_snd_3358_, v_overlaps_3359_, v_matcherLevels_3360_, v_toPure_3361_, v_onRemaining_3362_, v_remaining_3363_, v_toBind_3364_, v_origAltTypes_3365_, v_alts_3366_, v___x_3367_, v___x_3368_, v_remaining_x27_3369_, v___f_3370_, v_inst_3371_, v___x_3372_, v___x_14251__boxed_3377_, v_liftWith_3374_, v_restoreM_3375_, v_matchEqns_3376_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object* v___x_3379_, lean_object* v_params_x27_3380_, lean_object* v_fst_3381_, lean_object* v_discrs_x27_3382_, lean_object* v_fst_3383_, lean_object* v_numParams_3384_, lean_object* v_numDiscrs_3385_, lean_object* v_altInfos_3386_, lean_object* v_uElimPos_x3f_3387_, lean_object* v_snd_3388_, lean_object* v_overlaps_3389_, lean_object* v_matcherLevels_3390_, lean_object* v_toPure_3391_, lean_object* v_onRemaining_3392_, lean_object* v_remaining_3393_, lean_object* v_toBind_3394_, lean_object* v_alts_3395_, lean_object* v___x_3396_, lean_object* v___x_3397_, lean_object* v_remaining_x27_3398_, lean_object* v___f_3399_, lean_object* v_inst_3400_, lean_object* v___x_3401_, uint8_t v___x_3402_, lean_object* v_liftWith_3403_, lean_object* v_restoreM_3404_, lean_object* v_matcherName_3405_, lean_object* v_origAltTypes_3406_){
_start:
{
lean_object* v___x_3407_; lean_object* v___f_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3407_ = lean_box(v___x_3402_);
lean_inc(v_inst_3400_);
lean_inc(v_toBind_3394_);
v___f_3408_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed), 28, 27);
lean_closure_set(v___f_3408_, 0, v___x_3379_);
lean_closure_set(v___f_3408_, 1, v_params_x27_3380_);
lean_closure_set(v___f_3408_, 2, v_fst_3381_);
lean_closure_set(v___f_3408_, 3, v_discrs_x27_3382_);
lean_closure_set(v___f_3408_, 4, v_fst_3383_);
lean_closure_set(v___f_3408_, 5, v_numParams_3384_);
lean_closure_set(v___f_3408_, 6, v_numDiscrs_3385_);
lean_closure_set(v___f_3408_, 7, v_altInfos_3386_);
lean_closure_set(v___f_3408_, 8, v_uElimPos_x3f_3387_);
lean_closure_set(v___f_3408_, 9, v_snd_3388_);
lean_closure_set(v___f_3408_, 10, v_overlaps_3389_);
lean_closure_set(v___f_3408_, 11, v_matcherLevels_3390_);
lean_closure_set(v___f_3408_, 12, v_toPure_3391_);
lean_closure_set(v___f_3408_, 13, v_onRemaining_3392_);
lean_closure_set(v___f_3408_, 14, v_remaining_3393_);
lean_closure_set(v___f_3408_, 15, v_toBind_3394_);
lean_closure_set(v___f_3408_, 16, v_origAltTypes_3406_);
lean_closure_set(v___f_3408_, 17, v_alts_3395_);
lean_closure_set(v___f_3408_, 18, v___x_3396_);
lean_closure_set(v___f_3408_, 19, v___x_3397_);
lean_closure_set(v___f_3408_, 20, v_remaining_x27_3398_);
lean_closure_set(v___f_3408_, 21, v___f_3399_);
lean_closure_set(v___f_3408_, 22, v_inst_3400_);
lean_closure_set(v___f_3408_, 23, v___x_3401_);
lean_closure_set(v___f_3408_, 24, v___x_3407_);
lean_closure_set(v___f_3408_, 25, v_liftWith_3403_);
lean_closure_set(v___f_3408_, 26, v_restoreM_3404_);
v___x_3409_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_getEquationsFor___boxed), 6, 1);
lean_closure_set(v___x_3409_, 0, v_matcherName_3405_);
v___x_3410_ = lean_apply_2(v_inst_3400_, lean_box(0), v___x_3409_);
v___x_3411_ = lean_apply_4(v_toBind_3394_, lean_box(0), lean_box(0), v___x_3410_, v___f_3408_);
return v___x_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object** _args){
lean_object* v___x_3412_ = _args[0];
lean_object* v_params_x27_3413_ = _args[1];
lean_object* v_fst_3414_ = _args[2];
lean_object* v_discrs_x27_3415_ = _args[3];
lean_object* v_fst_3416_ = _args[4];
lean_object* v_numParams_3417_ = _args[5];
lean_object* v_numDiscrs_3418_ = _args[6];
lean_object* v_altInfos_3419_ = _args[7];
lean_object* v_uElimPos_x3f_3420_ = _args[8];
lean_object* v_snd_3421_ = _args[9];
lean_object* v_overlaps_3422_ = _args[10];
lean_object* v_matcherLevels_3423_ = _args[11];
lean_object* v_toPure_3424_ = _args[12];
lean_object* v_onRemaining_3425_ = _args[13];
lean_object* v_remaining_3426_ = _args[14];
lean_object* v_toBind_3427_ = _args[15];
lean_object* v_alts_3428_ = _args[16];
lean_object* v___x_3429_ = _args[17];
lean_object* v___x_3430_ = _args[18];
lean_object* v_remaining_x27_3431_ = _args[19];
lean_object* v___f_3432_ = _args[20];
lean_object* v_inst_3433_ = _args[21];
lean_object* v___x_3434_ = _args[22];
lean_object* v___x_3435_ = _args[23];
lean_object* v_liftWith_3436_ = _args[24];
lean_object* v_restoreM_3437_ = _args[25];
lean_object* v_matcherName_3438_ = _args[26];
lean_object* v_origAltTypes_3439_ = _args[27];
_start:
{
uint8_t v___x_14313__boxed_3440_; lean_object* v_res_3441_; 
v___x_14313__boxed_3440_ = lean_unbox(v___x_3435_);
v_res_3441_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__51(v___x_3412_, v_params_x27_3413_, v_fst_3414_, v_discrs_x27_3415_, v_fst_3416_, v_numParams_3417_, v_numDiscrs_3418_, v_altInfos_3419_, v_uElimPos_x3f_3420_, v_snd_3421_, v_overlaps_3422_, v_matcherLevels_3423_, v_toPure_3424_, v_onRemaining_3425_, v_remaining_3426_, v_toBind_3427_, v_alts_3428_, v___x_3429_, v___x_3430_, v_remaining_x27_3431_, v___f_3432_, v_inst_3433_, v___x_3434_, v___x_14313__boxed_3440_, v_liftWith_3436_, v_restoreM_3437_, v_matcherName_3438_, v_origAltTypes_3439_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object* v_alts_3442_, lean_object* v_toPure_3443_, lean_object* v_toBind_3444_, lean_object* v___f_3445_, lean_object* v___x_3446_, lean_object* v___x_3447_, lean_object* v_inst_3448_, lean_object* v___x_3449_, lean_object* v_toMonadExceptOf_3450_, uint8_t v___x_3451_, uint8_t v_useSplitter_3452_, lean_object* v_onAlt_3453_, lean_object* v___f_3454_, lean_object* v_fst_3455_, lean_object* v_inst_3456_, lean_object* v_inst_3457_, lean_object* v_numDiscrEqs_3458_, lean_object* v___x_3459_, lean_object* v_params_x27_3460_, lean_object* v_fst_3461_, lean_object* v_discrs_x27_3462_, lean_object* v_fst_3463_, lean_object* v_numParams_3464_, lean_object* v_numDiscrs_3465_, lean_object* v_altInfos_3466_, lean_object* v_uElimPos_x3f_3467_, lean_object* v_snd_3468_, lean_object* v_overlaps_3469_, lean_object* v_matcherLevels_3470_, lean_object* v_onRemaining_3471_, lean_object* v_remaining_3472_, lean_object* v_remaining_x27_3473_, lean_object* v___x_3474_, uint8_t v___x_3475_, lean_object* v_liftWith_3476_, lean_object* v_restoreM_3477_, lean_object* v_matcherName_3478_, lean_object* v_aux1_3479_, lean_object* v_____r_3480_){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___f_3484_; lean_object* v___x_3485_; lean_object* v___f_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3481_ = lean_array_get_size(v_alts_3442_);
v___x_3482_ = lean_box(v___x_3451_);
v___x_3483_ = lean_box(v_useSplitter_3452_);
lean_inc_n(v_inst_3448_, 2);
lean_inc(v___x_3446_);
lean_inc_n(v_toBind_3444_, 2);
lean_inc(v_toPure_3443_);
v___f_3484_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed), 21, 17);
lean_closure_set(v___f_3484_, 0, v___x_3481_);
lean_closure_set(v___f_3484_, 1, v_toPure_3443_);
lean_closure_set(v___f_3484_, 2, v_toBind_3444_);
lean_closure_set(v___f_3484_, 3, v___f_3445_);
lean_closure_set(v___f_3484_, 4, v___x_3446_);
lean_closure_set(v___f_3484_, 5, v___x_3447_);
lean_closure_set(v___f_3484_, 6, v_inst_3448_);
lean_closure_set(v___f_3484_, 7, v___x_3449_);
lean_closure_set(v___f_3484_, 8, v_toMonadExceptOf_3450_);
lean_closure_set(v___f_3484_, 9, v___x_3482_);
lean_closure_set(v___f_3484_, 10, v___x_3483_);
lean_closure_set(v___f_3484_, 11, v_onAlt_3453_);
lean_closure_set(v___f_3484_, 12, v___f_3454_);
lean_closure_set(v___f_3484_, 13, v_fst_3455_);
lean_closure_set(v___f_3484_, 14, v_inst_3456_);
lean_closure_set(v___f_3484_, 15, v_inst_3457_);
lean_closure_set(v___f_3484_, 16, v_numDiscrEqs_3458_);
v___x_3485_ = lean_box(v___x_3475_);
v___f_3486_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed), 28, 27);
lean_closure_set(v___f_3486_, 0, v___x_3459_);
lean_closure_set(v___f_3486_, 1, v_params_x27_3460_);
lean_closure_set(v___f_3486_, 2, v_fst_3461_);
lean_closure_set(v___f_3486_, 3, v_discrs_x27_3462_);
lean_closure_set(v___f_3486_, 4, v_fst_3463_);
lean_closure_set(v___f_3486_, 5, v_numParams_3464_);
lean_closure_set(v___f_3486_, 6, v_numDiscrs_3465_);
lean_closure_set(v___f_3486_, 7, v_altInfos_3466_);
lean_closure_set(v___f_3486_, 8, v_uElimPos_x3f_3467_);
lean_closure_set(v___f_3486_, 9, v_snd_3468_);
lean_closure_set(v___f_3486_, 10, v_overlaps_3469_);
lean_closure_set(v___f_3486_, 11, v_matcherLevels_3470_);
lean_closure_set(v___f_3486_, 12, v_toPure_3443_);
lean_closure_set(v___f_3486_, 13, v_onRemaining_3471_);
lean_closure_set(v___f_3486_, 14, v_remaining_3472_);
lean_closure_set(v___f_3486_, 15, v_toBind_3444_);
lean_closure_set(v___f_3486_, 16, v_alts_3442_);
lean_closure_set(v___f_3486_, 17, v___x_3446_);
lean_closure_set(v___f_3486_, 18, v___x_3481_);
lean_closure_set(v___f_3486_, 19, v_remaining_x27_3473_);
lean_closure_set(v___f_3486_, 20, v___f_3484_);
lean_closure_set(v___f_3486_, 21, v_inst_3448_);
lean_closure_set(v___f_3486_, 22, v___x_3474_);
lean_closure_set(v___f_3486_, 23, v___x_3485_);
lean_closure_set(v___f_3486_, 24, v_liftWith_3476_);
lean_closure_set(v___f_3486_, 25, v_restoreM_3477_);
lean_closure_set(v___f_3486_, 26, v_matcherName_3478_);
v___x_3487_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3487_, 0, v___x_3481_);
lean_closure_set(v___x_3487_, 1, v_aux1_3479_);
v___x_3488_ = lean_apply_2(v_inst_3448_, lean_box(0), v___x_3487_);
v___x_3489_ = lean_apply_4(v_toBind_3444_, lean_box(0), lean_box(0), v___x_3488_, v___f_3486_);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object** _args){
lean_object* v_alts_3490_ = _args[0];
lean_object* v_toPure_3491_ = _args[1];
lean_object* v_toBind_3492_ = _args[2];
lean_object* v___f_3493_ = _args[3];
lean_object* v___x_3494_ = _args[4];
lean_object* v___x_3495_ = _args[5];
lean_object* v_inst_3496_ = _args[6];
lean_object* v___x_3497_ = _args[7];
lean_object* v_toMonadExceptOf_3498_ = _args[8];
lean_object* v___x_3499_ = _args[9];
lean_object* v_useSplitter_3500_ = _args[10];
lean_object* v_onAlt_3501_ = _args[11];
lean_object* v___f_3502_ = _args[12];
lean_object* v_fst_3503_ = _args[13];
lean_object* v_inst_3504_ = _args[14];
lean_object* v_inst_3505_ = _args[15];
lean_object* v_numDiscrEqs_3506_ = _args[16];
lean_object* v___x_3507_ = _args[17];
lean_object* v_params_x27_3508_ = _args[18];
lean_object* v_fst_3509_ = _args[19];
lean_object* v_discrs_x27_3510_ = _args[20];
lean_object* v_fst_3511_ = _args[21];
lean_object* v_numParams_3512_ = _args[22];
lean_object* v_numDiscrs_3513_ = _args[23];
lean_object* v_altInfos_3514_ = _args[24];
lean_object* v_uElimPos_x3f_3515_ = _args[25];
lean_object* v_snd_3516_ = _args[26];
lean_object* v_overlaps_3517_ = _args[27];
lean_object* v_matcherLevels_3518_ = _args[28];
lean_object* v_onRemaining_3519_ = _args[29];
lean_object* v_remaining_3520_ = _args[30];
lean_object* v_remaining_x27_3521_ = _args[31];
lean_object* v___x_3522_ = _args[32];
lean_object* v___x_3523_ = _args[33];
lean_object* v_liftWith_3524_ = _args[34];
lean_object* v_restoreM_3525_ = _args[35];
lean_object* v_matcherName_3526_ = _args[36];
lean_object* v_aux1_3527_ = _args[37];
lean_object* v_____r_3528_ = _args[38];
_start:
{
uint8_t v___x_14347__boxed_3529_; uint8_t v_useSplitter_boxed_3530_; uint8_t v___x_14355__boxed_3531_; lean_object* v_res_3532_; 
v___x_14347__boxed_3529_ = lean_unbox(v___x_3499_);
v_useSplitter_boxed_3530_ = lean_unbox(v_useSplitter_3500_);
v___x_14355__boxed_3531_ = lean_unbox(v___x_3523_);
v_res_3532_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__52(v_alts_3490_, v_toPure_3491_, v_toBind_3492_, v___f_3493_, v___x_3494_, v___x_3495_, v_inst_3496_, v___x_3497_, v_toMonadExceptOf_3498_, v___x_14347__boxed_3529_, v_useSplitter_boxed_3530_, v_onAlt_3501_, v___f_3502_, v_fst_3503_, v_inst_3504_, v_inst_3505_, v_numDiscrEqs_3506_, v___x_3507_, v_params_x27_3508_, v_fst_3509_, v_discrs_x27_3510_, v_fst_3511_, v_numParams_3512_, v_numDiscrs_3513_, v_altInfos_3514_, v_uElimPos_x3f_3515_, v_snd_3516_, v_overlaps_3517_, v_matcherLevels_3518_, v_onRemaining_3519_, v_remaining_3520_, v_remaining_x27_3521_, v___x_3522_, v___x_14355__boxed_3531_, v_liftWith_3524_, v_restoreM_3525_, v_matcherName_3526_, v_aux1_3527_, v_____r_3528_);
return v_res_3532_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0));
v___x_3535_ = l_Lean_stringToMessageData(v___x_3534_);
return v___x_3535_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3(void){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2));
v___x_3538_ = l_Lean_stringToMessageData(v___x_3537_);
return v___x_3538_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4));
v___x_3541_ = l_Lean_stringToMessageData(v___x_3540_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object* v_numParams_3542_, lean_object* v_numDiscrs_3543_, lean_object* v_altInfos_3544_, lean_object* v_uElimPos_x3f_3545_, lean_object* v_snd_3546_, lean_object* v_overlaps_3547_, lean_object* v_matcherName_3548_, lean_object* v_matcherLevels_3549_, lean_object* v_params_x27_3550_, lean_object* v_fst_3551_, lean_object* v_discrs_x27_3552_, lean_object* v_toPure_3553_, lean_object* v_onRemaining_3554_, lean_object* v_remaining_3555_, lean_object* v_toBind_3556_, lean_object* v_inst_3557_, lean_object* v_alts_3558_, lean_object* v___f_3559_, uint8_t v___x_3560_, lean_object* v_inst_3561_, lean_object* v_remaining_x27_3562_, lean_object* v_onAlt_3563_, lean_object* v_inst_3564_, lean_object* v___f_3565_, lean_object* v_matcherApp_3566_, lean_object* v___x_3567_, uint8_t v_useSplitter_3568_, uint8_t v_isCasesOn_3569_, lean_object* v___f_3570_, lean_object* v___x_3571_, lean_object* v___x_3572_, lean_object* v_toMonadExceptOf_3573_, lean_object* v___f_3574_, lean_object* v_numDiscrEqs_3575_, lean_object* v_____s_3576_){
_start:
{
lean_object* v_snd_3577_; lean_object* v_fst_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3644_; 
v_snd_3577_ = lean_ctor_get(v_____s_3576_, 1);
v_fst_3578_ = lean_ctor_get(v_____s_3576_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v_____s_3576_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3580_ = v_____s_3576_;
v_isShared_3581_ = v_isSharedCheck_3644_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_snd_3577_);
lean_inc(v_fst_3578_);
lean_dec(v_____s_3576_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3644_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v_fst_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3642_; 
v_fst_3582_ = lean_ctor_get(v_snd_3577_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v_snd_3577_);
if (v_isSharedCheck_3642_ == 0)
{
lean_object* v_unused_3643_; 
v_unused_3643_ = lean_ctor_get(v_snd_3577_, 1);
lean_dec(v_unused_3643_);
v___x_3584_ = v_snd_3577_;
v_isShared_3585_ = v_isSharedCheck_3642_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_fst_3582_);
lean_dec(v_snd_3577_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3642_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___f_3586_; 
lean_inc(v_toBind_3556_);
lean_inc_ref(v_remaining_3555_);
lean_inc(v_onRemaining_3554_);
lean_inc(v_toPure_3553_);
lean_inc_ref(v_discrs_x27_3552_);
lean_inc_ref(v_fst_3551_);
lean_inc_ref(v_params_x27_3550_);
lean_inc_ref(v_matcherLevels_3549_);
lean_inc(v_matcherName_3548_);
lean_inc_ref(v_overlaps_3547_);
lean_inc_ref(v_snd_3546_);
lean_inc(v_uElimPos_x3f_3545_);
lean_inc_ref(v_altInfos_3544_);
lean_inc(v_numDiscrs_3543_);
lean_inc(v_numParams_3542_);
lean_inc(v_fst_3578_);
v___f_3586_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed), 17, 16);
lean_closure_set(v___f_3586_, 0, v_fst_3578_);
lean_closure_set(v___f_3586_, 1, v_numParams_3542_);
lean_closure_set(v___f_3586_, 2, v_numDiscrs_3543_);
lean_closure_set(v___f_3586_, 3, v_altInfos_3544_);
lean_closure_set(v___f_3586_, 4, v_uElimPos_x3f_3545_);
lean_closure_set(v___f_3586_, 5, v_snd_3546_);
lean_closure_set(v___f_3586_, 6, v_overlaps_3547_);
lean_closure_set(v___f_3586_, 7, v_matcherName_3548_);
lean_closure_set(v___f_3586_, 8, v_matcherLevels_3549_);
lean_closure_set(v___f_3586_, 9, v_params_x27_3550_);
lean_closure_set(v___f_3586_, 10, v_fst_3551_);
lean_closure_set(v___f_3586_, 11, v_discrs_x27_3552_);
lean_closure_set(v___f_3586_, 12, v_toPure_3553_);
lean_closure_set(v___f_3586_, 13, v_onRemaining_3554_);
lean_closure_set(v___f_3586_, 14, v_remaining_3555_);
lean_closure_set(v___f_3586_, 15, v_toBind_3556_);
if (v_useSplitter_3568_ == 0)
{
lean_del_object(v___x_3580_);
lean_dec(v_fst_3578_);
lean_dec(v_numDiscrEqs_3575_);
lean_dec(v___f_3574_);
lean_dec_ref(v_toMonadExceptOf_3573_);
lean_dec(v___x_3572_);
lean_dec(v___x_3571_);
lean_dec(v___f_3570_);
lean_dec_ref(v_remaining_3555_);
lean_dec(v_onRemaining_3554_);
lean_dec_ref(v_overlaps_3547_);
lean_dec_ref(v_snd_3546_);
lean_dec(v_uElimPos_x3f_3545_);
lean_dec_ref(v_altInfos_3544_);
lean_dec(v_numDiscrs_3543_);
lean_dec(v_numParams_3542_);
goto v___jp_3587_;
}
else
{
if (v_isCasesOn_3569_ == 0)
{
lean_object* v_liftWith_3614_; lean_object* v_restoreM_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v_aux1_3618_; lean_object* v_aux1_3619_; lean_object* v_aux1_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3624_; 
lean_dec_ref(v___f_3586_);
lean_del_object(v___x_3584_);
lean_dec_ref(v_matcherApp_3566_);
lean_dec(v___f_3565_);
lean_dec(v___f_3559_);
v_liftWith_3614_ = lean_ctor_get(v_inst_3557_, 0);
lean_inc(v_liftWith_3614_);
v_restoreM_3615_ = lean_ctor_get(v_inst_3557_, 1);
lean_inc(v_restoreM_3615_);
lean_inc_ref(v_matcherLevels_3549_);
v___x_3616_ = lean_array_to_list(v_matcherLevels_3549_);
lean_inc(v___x_3616_);
lean_inc(v_matcherName_3548_);
v___x_3617_ = l_Lean_mkConst(v_matcherName_3548_, v___x_3616_);
v_aux1_3618_ = l_Lean_mkAppN(v___x_3617_, v_params_x27_3550_);
lean_inc_ref(v_fst_3551_);
v_aux1_3619_ = l_Lean_Expr_app___override(v_aux1_3618_, v_fst_3551_);
v_aux1_3620_ = l_Lean_mkAppN(v_aux1_3619_, v_discrs_x27_3552_);
lean_inc_ref(v_aux1_3620_);
v___x_3621_ = l_Lean_indentExpr(v_aux1_3620_);
v___x_3622_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
if (v_isShared_3581_ == 0)
{
lean_ctor_set_tag(v___x_3580_, 7);
lean_ctor_set(v___x_3580_, 1, v___x_3621_);
lean_ctor_set(v___x_3580_, 0, v___x_3622_);
v___x_3624_ = v___x_3580_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3622_);
lean_ctor_set(v_reuseFailAlloc_3641_, 1, v___x_3621_);
v___x_3624_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___f_3627_; uint8_t v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___f_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___f_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3625_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_3626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3624_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___f_3627_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3627_, 0, v___x_3626_);
v___x_3628_ = 0;
v___x_3629_ = lean_box(v___x_3560_);
v___x_3630_ = lean_box(v_useSplitter_3568_);
v___x_3631_ = lean_box(v___x_3628_);
lean_inc_ref(v_aux1_3620_);
lean_inc(v_restoreM_3615_);
lean_inc(v_liftWith_3614_);
lean_inc(v_inst_3561_);
lean_inc_n(v_toBind_3556_, 2);
v___f_3632_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed), 39, 38);
lean_closure_set(v___f_3632_, 0, v_alts_3558_);
lean_closure_set(v___f_3632_, 1, v_toPure_3553_);
lean_closure_set(v___f_3632_, 2, v_toBind_3556_);
lean_closure_set(v___f_3632_, 3, v___f_3570_);
lean_closure_set(v___f_3632_, 4, v___x_3567_);
lean_closure_set(v___f_3632_, 5, v___x_3571_);
lean_closure_set(v___f_3632_, 6, v_inst_3561_);
lean_closure_set(v___f_3632_, 7, v___x_3572_);
lean_closure_set(v___f_3632_, 8, v_toMonadExceptOf_3573_);
lean_closure_set(v___f_3632_, 9, v___x_3629_);
lean_closure_set(v___f_3632_, 10, v___x_3630_);
lean_closure_set(v___f_3632_, 11, v_onAlt_3563_);
lean_closure_set(v___f_3632_, 12, v___f_3574_);
lean_closure_set(v___f_3632_, 13, v_fst_3582_);
lean_closure_set(v___f_3632_, 14, v_inst_3557_);
lean_closure_set(v___f_3632_, 15, v_inst_3564_);
lean_closure_set(v___f_3632_, 16, v_numDiscrEqs_3575_);
lean_closure_set(v___f_3632_, 17, v___x_3616_);
lean_closure_set(v___f_3632_, 18, v_params_x27_3550_);
lean_closure_set(v___f_3632_, 19, v_fst_3551_);
lean_closure_set(v___f_3632_, 20, v_discrs_x27_3552_);
lean_closure_set(v___f_3632_, 21, v_fst_3578_);
lean_closure_set(v___f_3632_, 22, v_numParams_3542_);
lean_closure_set(v___f_3632_, 23, v_numDiscrs_3543_);
lean_closure_set(v___f_3632_, 24, v_altInfos_3544_);
lean_closure_set(v___f_3632_, 25, v_uElimPos_x3f_3545_);
lean_closure_set(v___f_3632_, 26, v_snd_3546_);
lean_closure_set(v___f_3632_, 27, v_overlaps_3547_);
lean_closure_set(v___f_3632_, 28, v_matcherLevels_3549_);
lean_closure_set(v___f_3632_, 29, v_onRemaining_3554_);
lean_closure_set(v___f_3632_, 30, v_remaining_3555_);
lean_closure_set(v___f_3632_, 31, v_remaining_x27_3562_);
lean_closure_set(v___f_3632_, 32, v___x_3625_);
lean_closure_set(v___f_3632_, 33, v___x_3631_);
lean_closure_set(v___f_3632_, 34, v_liftWith_3614_);
lean_closure_set(v___f_3632_, 35, v_restoreM_3615_);
lean_closure_set(v___f_3632_, 36, v_matcherName_3548_);
lean_closure_set(v___f_3632_, 37, v_aux1_3620_);
v___x_3633_ = lean_box(v___x_3628_);
v___x_3634_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3634_, 0, v_aux1_3620_);
lean_closure_set(v___x_3634_, 1, v___x_3633_);
v___x_3635_ = lean_apply_2(v_inst_3561_, lean_box(0), v___x_3634_);
v___f_3636_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3636_, 0, v___x_3635_);
lean_closure_set(v___f_3636_, 1, v___f_3627_);
v___x_3637_ = lean_apply_2(v_liftWith_3614_, lean_box(0), v___f_3636_);
v___x_3638_ = lean_apply_1(v_restoreM_3615_, lean_box(0));
v___x_3639_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3637_, v___x_3638_);
v___x_3640_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3639_, v___f_3632_);
return v___x_3640_;
}
}
else
{
lean_del_object(v___x_3580_);
lean_dec(v_fst_3578_);
lean_dec(v_numDiscrEqs_3575_);
lean_dec(v___f_3574_);
lean_dec_ref(v_toMonadExceptOf_3573_);
lean_dec(v___x_3572_);
lean_dec(v___x_3571_);
lean_dec(v___f_3570_);
lean_dec_ref(v_remaining_3555_);
lean_dec(v_onRemaining_3554_);
lean_dec_ref(v_overlaps_3547_);
lean_dec_ref(v_snd_3546_);
lean_dec(v_uElimPos_x3f_3545_);
lean_dec_ref(v_altInfos_3544_);
lean_dec(v_numDiscrs_3543_);
lean_dec(v_numParams_3542_);
goto v___jp_3587_;
}
}
v___jp_3587_:
{
lean_object* v_liftWith_3588_; lean_object* v_restoreM_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v_aux_3592_; lean_object* v_aux_3593_; lean_object* v_aux_3594_; lean_object* v___x_3595_; uint8_t v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___f_3599_; lean_object* v___x_3600_; lean_object* v___x_3602_; 
v_liftWith_3588_ = lean_ctor_get(v_inst_3557_, 0);
lean_inc(v_liftWith_3588_);
v_restoreM_3589_ = lean_ctor_get(v_inst_3557_, 1);
lean_inc(v_restoreM_3589_);
v___x_3590_ = lean_array_to_list(v_matcherLevels_3549_);
v___x_3591_ = l_Lean_mkConst(v_matcherName_3548_, v___x_3590_);
v_aux_3592_ = l_Lean_mkAppN(v___x_3591_, v_params_x27_3550_);
lean_dec_ref(v_params_x27_3550_);
v_aux_3593_ = l_Lean_Expr_app___override(v_aux_3592_, v_fst_3551_);
v_aux_3594_ = l_Lean_mkAppN(v_aux_3593_, v_discrs_x27_3552_);
lean_dec_ref(v_discrs_x27_3552_);
lean_inc_ref_n(v_aux_3594_, 2);
v___x_3595_ = l_Lean_indentExpr(v_aux_3594_);
v___x_3596_ = 1;
v___x_3597_ = lean_box(v___x_3560_);
v___x_3598_ = lean_box(v___x_3596_);
lean_inc(v_inst_3561_);
lean_inc(v_toBind_3556_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_3599_, 0, v_alts_3558_);
lean_closure_set(v___f_3599_, 1, v_toPure_3553_);
lean_closure_set(v___f_3599_, 2, v_toBind_3556_);
lean_closure_set(v___f_3599_, 3, v___f_3559_);
lean_closure_set(v___f_3599_, 4, v___x_3597_);
lean_closure_set(v___f_3599_, 5, v___x_3598_);
lean_closure_set(v___f_3599_, 6, v_inst_3561_);
lean_closure_set(v___f_3599_, 7, v_remaining_x27_3562_);
lean_closure_set(v___f_3599_, 8, v_onAlt_3563_);
lean_closure_set(v___f_3599_, 9, v_inst_3557_);
lean_closure_set(v___f_3599_, 10, v_inst_3564_);
lean_closure_set(v___f_3599_, 11, v___f_3565_);
lean_closure_set(v___f_3599_, 12, v_fst_3582_);
lean_closure_set(v___f_3599_, 13, v_matcherApp_3566_);
lean_closure_set(v___f_3599_, 14, v___x_3567_);
lean_closure_set(v___f_3599_, 15, v___f_3586_);
lean_closure_set(v___f_3599_, 16, v_aux_3594_);
v___x_3600_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
if (v_isShared_3585_ == 0)
{
lean_ctor_set_tag(v___x_3584_, 7);
lean_ctor_set(v___x_3584_, 1, v___x_3595_);
lean_ctor_set(v___x_3584_, 0, v___x_3600_);
v___x_3602_ = v___x_3584_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v___x_3600_);
lean_ctor_set(v_reuseFailAlloc_3613_, 1, v___x_3595_);
v___x_3602_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
lean_object* v___f_3603_; uint8_t v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___f_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___f_3603_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3603_, 0, v___x_3602_);
v___x_3604_ = 0;
v___x_3605_ = lean_box(v___x_3604_);
v___x_3606_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3606_, 0, v_aux_3594_);
lean_closure_set(v___x_3606_, 1, v___x_3605_);
v___x_3607_ = lean_apply_2(v_inst_3561_, lean_box(0), v___x_3606_);
v___f_3608_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3608_, 0, v___x_3607_);
lean_closure_set(v___f_3608_, 1, v___f_3603_);
v___x_3609_ = lean_apply_2(v_liftWith_3588_, lean_box(0), v___f_3608_);
v___x_3610_ = lean_apply_1(v_restoreM_3589_, lean_box(0));
lean_inc(v_toBind_3556_);
v___x_3611_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3609_, v___x_3610_);
v___x_3612_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3611_, v___f_3599_);
return v___x_3612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object** _args){
lean_object* v_numParams_3645_ = _args[0];
lean_object* v_numDiscrs_3646_ = _args[1];
lean_object* v_altInfos_3647_ = _args[2];
lean_object* v_uElimPos_x3f_3648_ = _args[3];
lean_object* v_snd_3649_ = _args[4];
lean_object* v_overlaps_3650_ = _args[5];
lean_object* v_matcherName_3651_ = _args[6];
lean_object* v_matcherLevels_3652_ = _args[7];
lean_object* v_params_x27_3653_ = _args[8];
lean_object* v_fst_3654_ = _args[9];
lean_object* v_discrs_x27_3655_ = _args[10];
lean_object* v_toPure_3656_ = _args[11];
lean_object* v_onRemaining_3657_ = _args[12];
lean_object* v_remaining_3658_ = _args[13];
lean_object* v_toBind_3659_ = _args[14];
lean_object* v_inst_3660_ = _args[15];
lean_object* v_alts_3661_ = _args[16];
lean_object* v___f_3662_ = _args[17];
lean_object* v___x_3663_ = _args[18];
lean_object* v_inst_3664_ = _args[19];
lean_object* v_remaining_x27_3665_ = _args[20];
lean_object* v_onAlt_3666_ = _args[21];
lean_object* v_inst_3667_ = _args[22];
lean_object* v___f_3668_ = _args[23];
lean_object* v_matcherApp_3669_ = _args[24];
lean_object* v___x_3670_ = _args[25];
lean_object* v_useSplitter_3671_ = _args[26];
lean_object* v_isCasesOn_3672_ = _args[27];
lean_object* v___f_3673_ = _args[28];
lean_object* v___x_3674_ = _args[29];
lean_object* v___x_3675_ = _args[30];
lean_object* v_toMonadExceptOf_3676_ = _args[31];
lean_object* v___f_3677_ = _args[32];
lean_object* v_numDiscrEqs_3678_ = _args[33];
lean_object* v_____s_3679_ = _args[34];
_start:
{
uint8_t v___x_14427__boxed_3680_; uint8_t v_useSplitter_boxed_3681_; uint8_t v_isCasesOn_boxed_3682_; lean_object* v_res_3683_; 
v___x_14427__boxed_3680_ = lean_unbox(v___x_3663_);
v_useSplitter_boxed_3681_ = lean_unbox(v_useSplitter_3671_);
v_isCasesOn_boxed_3682_ = lean_unbox(v_isCasesOn_3672_);
v_res_3683_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__55(v_numParams_3645_, v_numDiscrs_3646_, v_altInfos_3647_, v_uElimPos_x3f_3648_, v_snd_3649_, v_overlaps_3650_, v_matcherName_3651_, v_matcherLevels_3652_, v_params_x27_3653_, v_fst_3654_, v_discrs_x27_3655_, v_toPure_3656_, v_onRemaining_3657_, v_remaining_3658_, v_toBind_3659_, v_inst_3660_, v_alts_3661_, v___f_3662_, v___x_14427__boxed_3680_, v_inst_3664_, v_remaining_x27_3665_, v_onAlt_3666_, v_inst_3667_, v___f_3668_, v_matcherApp_3669_, v___x_3670_, v_useSplitter_boxed_3681_, v_isCasesOn_boxed_3682_, v___f_3673_, v___x_3674_, v___x_3675_, v_toMonadExceptOf_3676_, v___f_3677_, v_numDiscrEqs_3678_, v_____s_3679_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object* v_numParams_3684_, lean_object* v_numDiscrs_3685_, lean_object* v_altInfos_3686_, lean_object* v_uElimPos_x3f_3687_, lean_object* v_snd_3688_, lean_object* v_overlaps_3689_, lean_object* v_matcherName_3690_, lean_object* v_params_x27_3691_, lean_object* v_fst_3692_, lean_object* v_discrs_x27_3693_, lean_object* v_toPure_3694_, lean_object* v_onRemaining_3695_, lean_object* v_remaining_3696_, lean_object* v_toBind_3697_, lean_object* v_inst_3698_, lean_object* v_alts_3699_, lean_object* v___f_3700_, uint8_t v___x_3701_, lean_object* v_inst_3702_, lean_object* v_onAlt_3703_, lean_object* v_inst_3704_, lean_object* v___f_3705_, lean_object* v_matcherApp_3706_, uint8_t v_useSplitter_3707_, uint8_t v_isCasesOn_3708_, lean_object* v___f_3709_, lean_object* v___x_3710_, lean_object* v___x_3711_, lean_object* v_toMonadExceptOf_3712_, lean_object* v___f_3713_, lean_object* v_numDiscrEqs_3714_, lean_object* v_fst_3715_, lean_object* v___f_3716_, lean_object* v_matcherLevels_3717_){
_start:
{
lean_object* v___x_3718_; lean_object* v_remaining_x27_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___f_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; size_t v_sz_3730_; size_t v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3718_ = lean_unsigned_to_nat(0u);
v_remaining_x27_3719_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_3720_ = lean_box(v___x_3701_);
v___x_3721_ = lean_box(v_useSplitter_3707_);
v___x_3722_ = lean_box(v_isCasesOn_3708_);
lean_inc_ref(v_inst_3704_);
lean_inc(v_toBind_3697_);
lean_inc_ref(v_discrs_x27_3693_);
v___f_3723_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed), 35, 34);
lean_closure_set(v___f_3723_, 0, v_numParams_3684_);
lean_closure_set(v___f_3723_, 1, v_numDiscrs_3685_);
lean_closure_set(v___f_3723_, 2, v_altInfos_3686_);
lean_closure_set(v___f_3723_, 3, v_uElimPos_x3f_3687_);
lean_closure_set(v___f_3723_, 4, v_snd_3688_);
lean_closure_set(v___f_3723_, 5, v_overlaps_3689_);
lean_closure_set(v___f_3723_, 6, v_matcherName_3690_);
lean_closure_set(v___f_3723_, 7, v_matcherLevels_3717_);
lean_closure_set(v___f_3723_, 8, v_params_x27_3691_);
lean_closure_set(v___f_3723_, 9, v_fst_3692_);
lean_closure_set(v___f_3723_, 10, v_discrs_x27_3693_);
lean_closure_set(v___f_3723_, 11, v_toPure_3694_);
lean_closure_set(v___f_3723_, 12, v_onRemaining_3695_);
lean_closure_set(v___f_3723_, 13, v_remaining_3696_);
lean_closure_set(v___f_3723_, 14, v_toBind_3697_);
lean_closure_set(v___f_3723_, 15, v_inst_3698_);
lean_closure_set(v___f_3723_, 16, v_alts_3699_);
lean_closure_set(v___f_3723_, 17, v___f_3700_);
lean_closure_set(v___f_3723_, 18, v___x_3720_);
lean_closure_set(v___f_3723_, 19, v_inst_3702_);
lean_closure_set(v___f_3723_, 20, v_remaining_x27_3719_);
lean_closure_set(v___f_3723_, 21, v_onAlt_3703_);
lean_closure_set(v___f_3723_, 22, v_inst_3704_);
lean_closure_set(v___f_3723_, 23, v___f_3705_);
lean_closure_set(v___f_3723_, 24, v_matcherApp_3706_);
lean_closure_set(v___f_3723_, 25, v___x_3718_);
lean_closure_set(v___f_3723_, 26, v___x_3721_);
lean_closure_set(v___f_3723_, 27, v___x_3722_);
lean_closure_set(v___f_3723_, 28, v___f_3709_);
lean_closure_set(v___f_3723_, 29, v___x_3710_);
lean_closure_set(v___f_3723_, 30, v___x_3711_);
lean_closure_set(v___f_3723_, 31, v_toMonadExceptOf_3712_);
lean_closure_set(v___f_3723_, 32, v___f_3713_);
lean_closure_set(v___f_3723_, 33, v_numDiscrEqs_3714_);
v___x_3724_ = l_Array_reverse___redArg(v_fst_3715_);
v___x_3725_ = lean_array_get_size(v___x_3724_);
v___x_3726_ = l_Array_toSubarray___redArg(v___x_3724_, v___x_3718_, v___x_3725_);
v___x_3727_ = l_Array_reverse___redArg(v_discrs_x27_3693_);
v___x_3728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3728_, 0, v___x_3718_);
lean_ctor_set(v___x_3728_, 1, v___x_3726_);
v___x_3729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3729_, 0, v_remaining_x27_3719_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v_sz_3730_ = lean_array_size(v___x_3727_);
v___x_3731_ = ((size_t)0ULL);
v___x_3732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3704_, v___x_3727_, v___f_3716_, v_sz_3730_, v___x_3731_, v___x_3729_);
v___x_3733_ = lean_apply_4(v_toBind_3697_, lean_box(0), lean_box(0), v___x_3732_, v___f_3723_);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object** _args){
lean_object* v_numParams_3734_ = _args[0];
lean_object* v_numDiscrs_3735_ = _args[1];
lean_object* v_altInfos_3736_ = _args[2];
lean_object* v_uElimPos_x3f_3737_ = _args[3];
lean_object* v_snd_3738_ = _args[4];
lean_object* v_overlaps_3739_ = _args[5];
lean_object* v_matcherName_3740_ = _args[6];
lean_object* v_params_x27_3741_ = _args[7];
lean_object* v_fst_3742_ = _args[8];
lean_object* v_discrs_x27_3743_ = _args[9];
lean_object* v_toPure_3744_ = _args[10];
lean_object* v_onRemaining_3745_ = _args[11];
lean_object* v_remaining_3746_ = _args[12];
lean_object* v_toBind_3747_ = _args[13];
lean_object* v_inst_3748_ = _args[14];
lean_object* v_alts_3749_ = _args[15];
lean_object* v___f_3750_ = _args[16];
lean_object* v___x_3751_ = _args[17];
lean_object* v_inst_3752_ = _args[18];
lean_object* v_onAlt_3753_ = _args[19];
lean_object* v_inst_3754_ = _args[20];
lean_object* v___f_3755_ = _args[21];
lean_object* v_matcherApp_3756_ = _args[22];
lean_object* v_useSplitter_3757_ = _args[23];
lean_object* v_isCasesOn_3758_ = _args[24];
lean_object* v___f_3759_ = _args[25];
lean_object* v___x_3760_ = _args[26];
lean_object* v___x_3761_ = _args[27];
lean_object* v_toMonadExceptOf_3762_ = _args[28];
lean_object* v___f_3763_ = _args[29];
lean_object* v_numDiscrEqs_3764_ = _args[30];
lean_object* v_fst_3765_ = _args[31];
lean_object* v___f_3766_ = _args[32];
lean_object* v_matcherLevels_3767_ = _args[33];
_start:
{
uint8_t v___x_14589__boxed_3768_; uint8_t v_useSplitter_boxed_3769_; uint8_t v_isCasesOn_boxed_3770_; lean_object* v_res_3771_; 
v___x_14589__boxed_3768_ = lean_unbox(v___x_3751_);
v_useSplitter_boxed_3769_ = lean_unbox(v_useSplitter_3757_);
v_isCasesOn_boxed_3770_ = lean_unbox(v_isCasesOn_3758_);
v_res_3771_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__54(v_numParams_3734_, v_numDiscrs_3735_, v_altInfos_3736_, v_uElimPos_x3f_3737_, v_snd_3738_, v_overlaps_3739_, v_matcherName_3740_, v_params_x27_3741_, v_fst_3742_, v_discrs_x27_3743_, v_toPure_3744_, v_onRemaining_3745_, v_remaining_3746_, v_toBind_3747_, v_inst_3748_, v_alts_3749_, v___f_3750_, v___x_14589__boxed_3768_, v_inst_3752_, v_onAlt_3753_, v_inst_3754_, v___f_3755_, v_matcherApp_3756_, v_useSplitter_boxed_3769_, v_isCasesOn_boxed_3770_, v___f_3759_, v___x_3760_, v___x_3761_, v_toMonadExceptOf_3762_, v___f_3763_, v_numDiscrEqs_3764_, v_fst_3765_, v___f_3766_, v_matcherLevels_3767_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object* v___f_3772_, lean_object* v_matcherLevels_3773_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = lean_apply_1(v___f_3772_, v_matcherLevels_3773_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object* v_toMatcherInfo_3775_, lean_object* v_matcherName_3776_, lean_object* v_params_x27_3777_, lean_object* v_discrs_x27_3778_, lean_object* v_toPure_3779_, lean_object* v_onRemaining_3780_, lean_object* v_remaining_3781_, lean_object* v_toBind_3782_, lean_object* v_inst_3783_, lean_object* v_alts_3784_, lean_object* v___f_3785_, uint8_t v___x_3786_, lean_object* v_inst_3787_, lean_object* v_onAlt_3788_, lean_object* v_inst_3789_, lean_object* v___f_3790_, lean_object* v_matcherApp_3791_, uint8_t v_useSplitter_3792_, uint8_t v_isCasesOn_3793_, lean_object* v___f_3794_, lean_object* v___x_3795_, lean_object* v___x_3796_, lean_object* v_toMonadExceptOf_3797_, lean_object* v___f_3798_, lean_object* v_numDiscrEqs_3799_, lean_object* v___f_3800_, lean_object* v_matcherLevels_3801_, lean_object* v_____x_3802_){
_start:
{
lean_object* v_snd_3803_; lean_object* v_snd_3804_; lean_object* v_fst_3805_; lean_object* v_fst_3806_; lean_object* v_fst_3807_; lean_object* v_snd_3808_; lean_object* v_numParams_3809_; lean_object* v_numDiscrs_3810_; lean_object* v_altInfos_3811_; lean_object* v_uElimPos_x3f_3812_; lean_object* v_overlaps_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___f_3817_; 
v_snd_3803_ = lean_ctor_get(v_____x_3802_, 1);
lean_inc(v_snd_3803_);
v_snd_3804_ = lean_ctor_get(v_snd_3803_, 1);
lean_inc(v_snd_3804_);
v_fst_3805_ = lean_ctor_get(v_____x_3802_, 0);
lean_inc(v_fst_3805_);
lean_dec_ref(v_____x_3802_);
v_fst_3806_ = lean_ctor_get(v_snd_3803_, 0);
lean_inc(v_fst_3806_);
lean_dec(v_snd_3803_);
v_fst_3807_ = lean_ctor_get(v_snd_3804_, 0);
lean_inc(v_fst_3807_);
v_snd_3808_ = lean_ctor_get(v_snd_3804_, 1);
lean_inc(v_snd_3808_);
lean_dec(v_snd_3804_);
v_numParams_3809_ = lean_ctor_get(v_toMatcherInfo_3775_, 0);
lean_inc(v_numParams_3809_);
v_numDiscrs_3810_ = lean_ctor_get(v_toMatcherInfo_3775_, 1);
lean_inc(v_numDiscrs_3810_);
v_altInfos_3811_ = lean_ctor_get(v_toMatcherInfo_3775_, 2);
lean_inc_ref(v_altInfos_3811_);
v_uElimPos_x3f_3812_ = lean_ctor_get(v_toMatcherInfo_3775_, 3);
lean_inc_n(v_uElimPos_x3f_3812_, 2);
v_overlaps_3813_ = lean_ctor_get(v_toMatcherInfo_3775_, 5);
lean_inc_ref(v_overlaps_3813_);
lean_dec_ref(v_toMatcherInfo_3775_);
v___x_3814_ = lean_box(v___x_3786_);
v___x_3815_ = lean_box(v_useSplitter_3792_);
v___x_3816_ = lean_box(v_isCasesOn_3793_);
lean_inc(v_toBind_3782_);
lean_inc(v_toPure_3779_);
v___f_3817_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed), 34, 33);
lean_closure_set(v___f_3817_, 0, v_numParams_3809_);
lean_closure_set(v___f_3817_, 1, v_numDiscrs_3810_);
lean_closure_set(v___f_3817_, 2, v_altInfos_3811_);
lean_closure_set(v___f_3817_, 3, v_uElimPos_x3f_3812_);
lean_closure_set(v___f_3817_, 4, v_snd_3808_);
lean_closure_set(v___f_3817_, 5, v_overlaps_3813_);
lean_closure_set(v___f_3817_, 6, v_matcherName_3776_);
lean_closure_set(v___f_3817_, 7, v_params_x27_3777_);
lean_closure_set(v___f_3817_, 8, v_fst_3805_);
lean_closure_set(v___f_3817_, 9, v_discrs_x27_3778_);
lean_closure_set(v___f_3817_, 10, v_toPure_3779_);
lean_closure_set(v___f_3817_, 11, v_onRemaining_3780_);
lean_closure_set(v___f_3817_, 12, v_remaining_3781_);
lean_closure_set(v___f_3817_, 13, v_toBind_3782_);
lean_closure_set(v___f_3817_, 14, v_inst_3783_);
lean_closure_set(v___f_3817_, 15, v_alts_3784_);
lean_closure_set(v___f_3817_, 16, v___f_3785_);
lean_closure_set(v___f_3817_, 17, v___x_3814_);
lean_closure_set(v___f_3817_, 18, v_inst_3787_);
lean_closure_set(v___f_3817_, 19, v_onAlt_3788_);
lean_closure_set(v___f_3817_, 20, v_inst_3789_);
lean_closure_set(v___f_3817_, 21, v___f_3790_);
lean_closure_set(v___f_3817_, 22, v_matcherApp_3791_);
lean_closure_set(v___f_3817_, 23, v___x_3815_);
lean_closure_set(v___f_3817_, 24, v___x_3816_);
lean_closure_set(v___f_3817_, 25, v___f_3794_);
lean_closure_set(v___f_3817_, 26, v___x_3795_);
lean_closure_set(v___f_3817_, 27, v___x_3796_);
lean_closure_set(v___f_3817_, 28, v_toMonadExceptOf_3797_);
lean_closure_set(v___f_3817_, 29, v___f_3798_);
lean_closure_set(v___f_3817_, 30, v_numDiscrEqs_3799_);
lean_closure_set(v___f_3817_, 31, v_fst_3807_);
lean_closure_set(v___f_3817_, 32, v___f_3800_);
if (lean_obj_tag(v_uElimPos_x3f_3812_) == 0)
{
lean_object* v___f_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
lean_dec(v_fst_3806_);
v___f_3818_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3818_, 0, v___f_3817_);
v___x_3819_ = lean_apply_2(v_toPure_3779_, lean_box(0), v_matcherLevels_3801_);
v___x_3820_ = lean_apply_4(v_toBind_3782_, lean_box(0), lean_box(0), v___x_3819_, v___f_3818_);
return v___x_3820_;
}
else
{
lean_object* v_val_3821_; lean_object* v___f_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
v_val_3821_ = lean_ctor_get(v_uElimPos_x3f_3812_, 0);
lean_inc(v_val_3821_);
lean_dec_ref_known(v_uElimPos_x3f_3812_, 1);
v___f_3822_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3822_, 0, v___f_3817_);
v___x_3823_ = lean_array_set(v_matcherLevels_3801_, v_val_3821_, v_fst_3806_);
lean_dec(v_val_3821_);
v___x_3824_ = lean_apply_2(v_toPure_3779_, lean_box(0), v___x_3823_);
v___x_3825_ = lean_apply_4(v_toBind_3782_, lean_box(0), lean_box(0), v___x_3824_, v___f_3822_);
return v___x_3825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_3826_ = _args[0];
lean_object* v_matcherName_3827_ = _args[1];
lean_object* v_params_x27_3828_ = _args[2];
lean_object* v_discrs_x27_3829_ = _args[3];
lean_object* v_toPure_3830_ = _args[4];
lean_object* v_onRemaining_3831_ = _args[5];
lean_object* v_remaining_3832_ = _args[6];
lean_object* v_toBind_3833_ = _args[7];
lean_object* v_inst_3834_ = _args[8];
lean_object* v_alts_3835_ = _args[9];
lean_object* v___f_3836_ = _args[10];
lean_object* v___x_3837_ = _args[11];
lean_object* v_inst_3838_ = _args[12];
lean_object* v_onAlt_3839_ = _args[13];
lean_object* v_inst_3840_ = _args[14];
lean_object* v___f_3841_ = _args[15];
lean_object* v_matcherApp_3842_ = _args[16];
lean_object* v_useSplitter_3843_ = _args[17];
lean_object* v_isCasesOn_3844_ = _args[18];
lean_object* v___f_3845_ = _args[19];
lean_object* v___x_3846_ = _args[20];
lean_object* v___x_3847_ = _args[21];
lean_object* v_toMonadExceptOf_3848_ = _args[22];
lean_object* v___f_3849_ = _args[23];
lean_object* v_numDiscrEqs_3850_ = _args[24];
lean_object* v___f_3851_ = _args[25];
lean_object* v_matcherLevels_3852_ = _args[26];
lean_object* v_____x_3853_ = _args[27];
_start:
{
uint8_t v___x_14661__boxed_3854_; uint8_t v_useSplitter_boxed_3855_; uint8_t v_isCasesOn_boxed_3856_; lean_object* v_res_3857_; 
v___x_14661__boxed_3854_ = lean_unbox(v___x_3837_);
v_useSplitter_boxed_3855_ = lean_unbox(v_useSplitter_3843_);
v_isCasesOn_boxed_3856_ = lean_unbox(v_isCasesOn_3844_);
v_res_3857_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__58(v_toMatcherInfo_3826_, v_matcherName_3827_, v_params_x27_3828_, v_discrs_x27_3829_, v_toPure_3830_, v_onRemaining_3831_, v_remaining_3832_, v_toBind_3833_, v_inst_3834_, v_alts_3835_, v___f_3836_, v___x_14661__boxed_3854_, v_inst_3838_, v_onAlt_3839_, v_inst_3840_, v___f_3841_, v_matcherApp_3842_, v_useSplitter_boxed_3855_, v_isCasesOn_boxed_3856_, v___f_3845_, v___x_3846_, v___x_3847_, v_toMonadExceptOf_3848_, v___f_3849_, v_numDiscrEqs_3850_, v___f_3851_, v_matcherLevels_3852_, v_____x_3853_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object* v_toPure_3858_, lean_object* v_inst_3859_, lean_object* v_toBind_3860_, lean_object* v_toMatcherInfo_3861_, lean_object* v_inst_3862_, lean_object* v___f_3863_, lean_object* v_onMotive_3864_, lean_object* v_discrs_3865_, lean_object* v_inst_3866_, lean_object* v_matcherName_3867_, lean_object* v_params_x27_3868_, lean_object* v_onRemaining_3869_, lean_object* v_remaining_3870_, lean_object* v_inst_3871_, lean_object* v_alts_3872_, lean_object* v___f_3873_, lean_object* v_onAlt_3874_, lean_object* v___f_3875_, lean_object* v_matcherApp_3876_, uint8_t v_useSplitter_3877_, uint8_t v_isCasesOn_3878_, lean_object* v___f_3879_, lean_object* v___x_3880_, lean_object* v___x_3881_, lean_object* v_toMonadExceptOf_3882_, lean_object* v___f_3883_, lean_object* v_numDiscrEqs_3884_, lean_object* v___f_3885_, lean_object* v_matcherLevels_3886_, lean_object* v_motive_3887_, lean_object* v_discrs_x27_3888_){
_start:
{
lean_object* v___f_3889_; uint8_t v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___f_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; 
lean_inc_ref_n(v_inst_3862_, 2);
lean_inc_ref(v_discrs_x27_3888_);
lean_inc_ref(v_toMatcherInfo_3861_);
lean_inc_n(v_toBind_3860_, 2);
lean_inc(v_inst_3859_);
lean_inc(v_toPure_3858_);
v___f_3889_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed), 12, 10);
lean_closure_set(v___f_3889_, 0, v_toPure_3858_);
lean_closure_set(v___f_3889_, 1, v_inst_3859_);
lean_closure_set(v___f_3889_, 2, v_toBind_3860_);
lean_closure_set(v___f_3889_, 3, v_toMatcherInfo_3861_);
lean_closure_set(v___f_3889_, 4, v_discrs_x27_3888_);
lean_closure_set(v___f_3889_, 5, v_inst_3862_);
lean_closure_set(v___f_3889_, 6, v___f_3863_);
lean_closure_set(v___f_3889_, 7, v_onMotive_3864_);
lean_closure_set(v___f_3889_, 8, v_discrs_3865_);
lean_closure_set(v___f_3889_, 9, v_inst_3866_);
v___x_3890_ = 0;
v___x_3891_ = lean_box(v___x_3890_);
v___x_3892_ = lean_box(v_useSplitter_3877_);
v___x_3893_ = lean_box(v_isCasesOn_3878_);
lean_inc_ref(v_inst_3871_);
v___f_3894_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed), 28, 27);
lean_closure_set(v___f_3894_, 0, v_toMatcherInfo_3861_);
lean_closure_set(v___f_3894_, 1, v_matcherName_3867_);
lean_closure_set(v___f_3894_, 2, v_params_x27_3868_);
lean_closure_set(v___f_3894_, 3, v_discrs_x27_3888_);
lean_closure_set(v___f_3894_, 4, v_toPure_3858_);
lean_closure_set(v___f_3894_, 5, v_onRemaining_3869_);
lean_closure_set(v___f_3894_, 6, v_remaining_3870_);
lean_closure_set(v___f_3894_, 7, v_toBind_3860_);
lean_closure_set(v___f_3894_, 8, v_inst_3871_);
lean_closure_set(v___f_3894_, 9, v_alts_3872_);
lean_closure_set(v___f_3894_, 10, v___f_3873_);
lean_closure_set(v___f_3894_, 11, v___x_3891_);
lean_closure_set(v___f_3894_, 12, v_inst_3859_);
lean_closure_set(v___f_3894_, 13, v_onAlt_3874_);
lean_closure_set(v___f_3894_, 14, v_inst_3862_);
lean_closure_set(v___f_3894_, 15, v___f_3875_);
lean_closure_set(v___f_3894_, 16, v_matcherApp_3876_);
lean_closure_set(v___f_3894_, 17, v___x_3892_);
lean_closure_set(v___f_3894_, 18, v___x_3893_);
lean_closure_set(v___f_3894_, 19, v___f_3879_);
lean_closure_set(v___f_3894_, 20, v___x_3880_);
lean_closure_set(v___f_3894_, 21, v___x_3881_);
lean_closure_set(v___f_3894_, 22, v_toMonadExceptOf_3882_);
lean_closure_set(v___f_3894_, 23, v___f_3883_);
lean_closure_set(v___f_3894_, 24, v_numDiscrEqs_3884_);
lean_closure_set(v___f_3894_, 25, v___f_3885_);
lean_closure_set(v___f_3894_, 26, v_matcherLevels_3886_);
v___x_3895_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_3871_, v_inst_3862_, v_motive_3887_, v___f_3889_, v___x_3890_);
v___x_3896_ = lean_apply_4(v_toBind_3860_, lean_box(0), lean_box(0), v___x_3895_, v___f_3894_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object** _args){
lean_object* v_toPure_3897_ = _args[0];
lean_object* v_inst_3898_ = _args[1];
lean_object* v_toBind_3899_ = _args[2];
lean_object* v_toMatcherInfo_3900_ = _args[3];
lean_object* v_inst_3901_ = _args[4];
lean_object* v___f_3902_ = _args[5];
lean_object* v_onMotive_3903_ = _args[6];
lean_object* v_discrs_3904_ = _args[7];
lean_object* v_inst_3905_ = _args[8];
lean_object* v_matcherName_3906_ = _args[9];
lean_object* v_params_x27_3907_ = _args[10];
lean_object* v_onRemaining_3908_ = _args[11];
lean_object* v_remaining_3909_ = _args[12];
lean_object* v_inst_3910_ = _args[13];
lean_object* v_alts_3911_ = _args[14];
lean_object* v___f_3912_ = _args[15];
lean_object* v_onAlt_3913_ = _args[16];
lean_object* v___f_3914_ = _args[17];
lean_object* v_matcherApp_3915_ = _args[18];
lean_object* v_useSplitter_3916_ = _args[19];
lean_object* v_isCasesOn_3917_ = _args[20];
lean_object* v___f_3918_ = _args[21];
lean_object* v___x_3919_ = _args[22];
lean_object* v___x_3920_ = _args[23];
lean_object* v_toMonadExceptOf_3921_ = _args[24];
lean_object* v___f_3922_ = _args[25];
lean_object* v_numDiscrEqs_3923_ = _args[26];
lean_object* v___f_3924_ = _args[27];
lean_object* v_matcherLevels_3925_ = _args[28];
lean_object* v_motive_3926_ = _args[29];
lean_object* v_discrs_x27_3927_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_3928_; uint8_t v_isCasesOn_boxed_3929_; lean_object* v_res_3930_; 
v_useSplitter_boxed_3928_ = lean_unbox(v_useSplitter_3916_);
v_isCasesOn_boxed_3929_ = lean_unbox(v_isCasesOn_3917_);
v_res_3930_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__57(v_toPure_3897_, v_inst_3898_, v_toBind_3899_, v_toMatcherInfo_3900_, v_inst_3901_, v___f_3902_, v_onMotive_3903_, v_discrs_3904_, v_inst_3905_, v_matcherName_3906_, v_params_x27_3907_, v_onRemaining_3908_, v_remaining_3909_, v_inst_3910_, v_alts_3911_, v___f_3912_, v_onAlt_3913_, v___f_3914_, v_matcherApp_3915_, v_useSplitter_boxed_3928_, v_isCasesOn_boxed_3929_, v___f_3918_, v___x_3919_, v___x_3920_, v_toMonadExceptOf_3921_, v___f_3922_, v_numDiscrEqs_3923_, v___f_3924_, v_matcherLevels_3925_, v_motive_3926_, v_discrs_x27_3927_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object* v_toPure_3931_, lean_object* v_inst_3932_, lean_object* v_toBind_3933_, lean_object* v_toMatcherInfo_3934_, lean_object* v_inst_3935_, lean_object* v___f_3936_, lean_object* v_onMotive_3937_, lean_object* v_discrs_3938_, lean_object* v_inst_3939_, lean_object* v_matcherName_3940_, lean_object* v_onRemaining_3941_, lean_object* v_remaining_3942_, lean_object* v_inst_3943_, lean_object* v_alts_3944_, lean_object* v___f_3945_, lean_object* v_onAlt_3946_, lean_object* v___f_3947_, lean_object* v_matcherApp_3948_, uint8_t v_useSplitter_3949_, uint8_t v_isCasesOn_3950_, lean_object* v___f_3951_, lean_object* v___x_3952_, lean_object* v___x_3953_, lean_object* v_toMonadExceptOf_3954_, lean_object* v___f_3955_, lean_object* v_numDiscrEqs_3956_, lean_object* v___f_3957_, lean_object* v_matcherLevels_3958_, lean_object* v_motive_3959_, lean_object* v_onParams_3960_, lean_object* v_params_x27_3961_){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___f_3964_; size_t v_sz_3965_; size_t v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3962_ = lean_box(v_useSplitter_3949_);
v___x_3963_ = lean_box(v_isCasesOn_3950_);
lean_inc_ref(v_discrs_3938_);
lean_inc_ref(v_inst_3935_);
lean_inc(v_toBind_3933_);
v___f_3964_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed), 31, 30);
lean_closure_set(v___f_3964_, 0, v_toPure_3931_);
lean_closure_set(v___f_3964_, 1, v_inst_3932_);
lean_closure_set(v___f_3964_, 2, v_toBind_3933_);
lean_closure_set(v___f_3964_, 3, v_toMatcherInfo_3934_);
lean_closure_set(v___f_3964_, 4, v_inst_3935_);
lean_closure_set(v___f_3964_, 5, v___f_3936_);
lean_closure_set(v___f_3964_, 6, v_onMotive_3937_);
lean_closure_set(v___f_3964_, 7, v_discrs_3938_);
lean_closure_set(v___f_3964_, 8, v_inst_3939_);
lean_closure_set(v___f_3964_, 9, v_matcherName_3940_);
lean_closure_set(v___f_3964_, 10, v_params_x27_3961_);
lean_closure_set(v___f_3964_, 11, v_onRemaining_3941_);
lean_closure_set(v___f_3964_, 12, v_remaining_3942_);
lean_closure_set(v___f_3964_, 13, v_inst_3943_);
lean_closure_set(v___f_3964_, 14, v_alts_3944_);
lean_closure_set(v___f_3964_, 15, v___f_3945_);
lean_closure_set(v___f_3964_, 16, v_onAlt_3946_);
lean_closure_set(v___f_3964_, 17, v___f_3947_);
lean_closure_set(v___f_3964_, 18, v_matcherApp_3948_);
lean_closure_set(v___f_3964_, 19, v___x_3962_);
lean_closure_set(v___f_3964_, 20, v___x_3963_);
lean_closure_set(v___f_3964_, 21, v___f_3951_);
lean_closure_set(v___f_3964_, 22, v___x_3952_);
lean_closure_set(v___f_3964_, 23, v___x_3953_);
lean_closure_set(v___f_3964_, 24, v_toMonadExceptOf_3954_);
lean_closure_set(v___f_3964_, 25, v___f_3955_);
lean_closure_set(v___f_3964_, 26, v_numDiscrEqs_3956_);
lean_closure_set(v___f_3964_, 27, v___f_3957_);
lean_closure_set(v___f_3964_, 28, v_matcherLevels_3958_);
lean_closure_set(v___f_3964_, 29, v_motive_3959_);
v_sz_3965_ = lean_array_size(v_discrs_3938_);
v___x_3966_ = ((size_t)0ULL);
v___x_3967_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3935_, v_onParams_3960_, v_sz_3965_, v___x_3966_, v_discrs_3938_);
v___x_3968_ = lean_apply_4(v_toBind_3933_, lean_box(0), lean_box(0), v___x_3967_, v___f_3964_);
return v___x_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object** _args){
lean_object* v_toPure_3969_ = _args[0];
lean_object* v_inst_3970_ = _args[1];
lean_object* v_toBind_3971_ = _args[2];
lean_object* v_toMatcherInfo_3972_ = _args[3];
lean_object* v_inst_3973_ = _args[4];
lean_object* v___f_3974_ = _args[5];
lean_object* v_onMotive_3975_ = _args[6];
lean_object* v_discrs_3976_ = _args[7];
lean_object* v_inst_3977_ = _args[8];
lean_object* v_matcherName_3978_ = _args[9];
lean_object* v_onRemaining_3979_ = _args[10];
lean_object* v_remaining_3980_ = _args[11];
lean_object* v_inst_3981_ = _args[12];
lean_object* v_alts_3982_ = _args[13];
lean_object* v___f_3983_ = _args[14];
lean_object* v_onAlt_3984_ = _args[15];
lean_object* v___f_3985_ = _args[16];
lean_object* v_matcherApp_3986_ = _args[17];
lean_object* v_useSplitter_3987_ = _args[18];
lean_object* v_isCasesOn_3988_ = _args[19];
lean_object* v___f_3989_ = _args[20];
lean_object* v___x_3990_ = _args[21];
lean_object* v___x_3991_ = _args[22];
lean_object* v_toMonadExceptOf_3992_ = _args[23];
lean_object* v___f_3993_ = _args[24];
lean_object* v_numDiscrEqs_3994_ = _args[25];
lean_object* v___f_3995_ = _args[26];
lean_object* v_matcherLevels_3996_ = _args[27];
lean_object* v_motive_3997_ = _args[28];
lean_object* v_onParams_3998_ = _args[29];
lean_object* v_params_x27_3999_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4000_; uint8_t v_isCasesOn_boxed_4001_; lean_object* v_res_4002_; 
v_useSplitter_boxed_4000_ = lean_unbox(v_useSplitter_3987_);
v_isCasesOn_boxed_4001_ = lean_unbox(v_isCasesOn_3988_);
v_res_4002_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__59(v_toPure_3969_, v_inst_3970_, v_toBind_3971_, v_toMatcherInfo_3972_, v_inst_3973_, v___f_3974_, v_onMotive_3975_, v_discrs_3976_, v_inst_3977_, v_matcherName_3978_, v_onRemaining_3979_, v_remaining_3980_, v_inst_3981_, v_alts_3982_, v___f_3983_, v_onAlt_3984_, v___f_3985_, v_matcherApp_3986_, v_useSplitter_boxed_4000_, v_isCasesOn_boxed_4001_, v___f_3989_, v___x_3990_, v___x_3991_, v_toMonadExceptOf_3992_, v___f_3993_, v_numDiscrEqs_3994_, v___f_3995_, v_matcherLevels_3996_, v_motive_3997_, v_onParams_3998_, v_params_x27_3999_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object* v_toPure_4003_, lean_object* v_inst_4004_, lean_object* v_toBind_4005_, lean_object* v_toMatcherInfo_4006_, lean_object* v_inst_4007_, lean_object* v___f_4008_, lean_object* v_onMotive_4009_, lean_object* v_discrs_4010_, lean_object* v_inst_4011_, lean_object* v_matcherName_4012_, lean_object* v_onRemaining_4013_, lean_object* v_remaining_4014_, lean_object* v_inst_4015_, lean_object* v_alts_4016_, lean_object* v___f_4017_, lean_object* v_onAlt_4018_, lean_object* v___f_4019_, lean_object* v_matcherApp_4020_, uint8_t v_useSplitter_4021_, uint8_t v_isCasesOn_4022_, lean_object* v___f_4023_, lean_object* v___x_4024_, lean_object* v___x_4025_, lean_object* v_toMonadExceptOf_4026_, lean_object* v___f_4027_, lean_object* v___f_4028_, lean_object* v_matcherLevels_4029_, lean_object* v_motive_4030_, lean_object* v_onParams_4031_, lean_object* v_params_4032_, lean_object* v_numDiscrEqs_4033_){
_start:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___f_4036_; size_t v_sz_4037_; size_t v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4034_ = lean_box(v_useSplitter_4021_);
v___x_4035_ = lean_box(v_isCasesOn_4022_);
lean_inc(v_onParams_4031_);
lean_inc_ref(v_inst_4007_);
lean_inc(v_toBind_4005_);
v___f_4036_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed), 31, 30);
lean_closure_set(v___f_4036_, 0, v_toPure_4003_);
lean_closure_set(v___f_4036_, 1, v_inst_4004_);
lean_closure_set(v___f_4036_, 2, v_toBind_4005_);
lean_closure_set(v___f_4036_, 3, v_toMatcherInfo_4006_);
lean_closure_set(v___f_4036_, 4, v_inst_4007_);
lean_closure_set(v___f_4036_, 5, v___f_4008_);
lean_closure_set(v___f_4036_, 6, v_onMotive_4009_);
lean_closure_set(v___f_4036_, 7, v_discrs_4010_);
lean_closure_set(v___f_4036_, 8, v_inst_4011_);
lean_closure_set(v___f_4036_, 9, v_matcherName_4012_);
lean_closure_set(v___f_4036_, 10, v_onRemaining_4013_);
lean_closure_set(v___f_4036_, 11, v_remaining_4014_);
lean_closure_set(v___f_4036_, 12, v_inst_4015_);
lean_closure_set(v___f_4036_, 13, v_alts_4016_);
lean_closure_set(v___f_4036_, 14, v___f_4017_);
lean_closure_set(v___f_4036_, 15, v_onAlt_4018_);
lean_closure_set(v___f_4036_, 16, v___f_4019_);
lean_closure_set(v___f_4036_, 17, v_matcherApp_4020_);
lean_closure_set(v___f_4036_, 18, v___x_4034_);
lean_closure_set(v___f_4036_, 19, v___x_4035_);
lean_closure_set(v___f_4036_, 20, v___f_4023_);
lean_closure_set(v___f_4036_, 21, v___x_4024_);
lean_closure_set(v___f_4036_, 22, v___x_4025_);
lean_closure_set(v___f_4036_, 23, v_toMonadExceptOf_4026_);
lean_closure_set(v___f_4036_, 24, v___f_4027_);
lean_closure_set(v___f_4036_, 25, v_numDiscrEqs_4033_);
lean_closure_set(v___f_4036_, 26, v___f_4028_);
lean_closure_set(v___f_4036_, 27, v_matcherLevels_4029_);
lean_closure_set(v___f_4036_, 28, v_motive_4030_);
lean_closure_set(v___f_4036_, 29, v_onParams_4031_);
v_sz_4037_ = lean_array_size(v_params_4032_);
v___x_4038_ = ((size_t)0ULL);
v___x_4039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_4007_, v_onParams_4031_, v_sz_4037_, v___x_4038_, v_params_4032_);
v___x_4040_ = lean_apply_4(v_toBind_4005_, lean_box(0), lean_box(0), v___x_4039_, v___f_4036_);
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object** _args){
lean_object* v_toPure_4041_ = _args[0];
lean_object* v_inst_4042_ = _args[1];
lean_object* v_toBind_4043_ = _args[2];
lean_object* v_toMatcherInfo_4044_ = _args[3];
lean_object* v_inst_4045_ = _args[4];
lean_object* v___f_4046_ = _args[5];
lean_object* v_onMotive_4047_ = _args[6];
lean_object* v_discrs_4048_ = _args[7];
lean_object* v_inst_4049_ = _args[8];
lean_object* v_matcherName_4050_ = _args[9];
lean_object* v_onRemaining_4051_ = _args[10];
lean_object* v_remaining_4052_ = _args[11];
lean_object* v_inst_4053_ = _args[12];
lean_object* v_alts_4054_ = _args[13];
lean_object* v___f_4055_ = _args[14];
lean_object* v_onAlt_4056_ = _args[15];
lean_object* v___f_4057_ = _args[16];
lean_object* v_matcherApp_4058_ = _args[17];
lean_object* v_useSplitter_4059_ = _args[18];
lean_object* v_isCasesOn_4060_ = _args[19];
lean_object* v___f_4061_ = _args[20];
lean_object* v___x_4062_ = _args[21];
lean_object* v___x_4063_ = _args[22];
lean_object* v_toMonadExceptOf_4064_ = _args[23];
lean_object* v___f_4065_ = _args[24];
lean_object* v___f_4066_ = _args[25];
lean_object* v_matcherLevels_4067_ = _args[26];
lean_object* v_motive_4068_ = _args[27];
lean_object* v_onParams_4069_ = _args[28];
lean_object* v_params_4070_ = _args[29];
lean_object* v_numDiscrEqs_4071_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4072_; uint8_t v_isCasesOn_boxed_4073_; lean_object* v_res_4074_; 
v_useSplitter_boxed_4072_ = lean_unbox(v_useSplitter_4059_);
v_isCasesOn_boxed_4073_ = lean_unbox(v_isCasesOn_4060_);
v_res_4074_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__60(v_toPure_4041_, v_inst_4042_, v_toBind_4043_, v_toMatcherInfo_4044_, v_inst_4045_, v___f_4046_, v_onMotive_4047_, v_discrs_4048_, v_inst_4049_, v_matcherName_4050_, v_onRemaining_4051_, v_remaining_4052_, v_inst_4053_, v_alts_4054_, v___f_4055_, v_onAlt_4056_, v___f_4057_, v_matcherApp_4058_, v_useSplitter_boxed_4072_, v_isCasesOn_boxed_4073_, v___f_4061_, v___x_4062_, v___x_4063_, v_toMonadExceptOf_4064_, v___f_4065_, v___f_4066_, v_matcherLevels_4067_, v_motive_4068_, v_onParams_4069_, v_params_4070_, v_numDiscrEqs_4071_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object* v___f_4075_, lean_object* v_numDiscrEqs_4076_){
_start:
{
lean_object* v___x_4077_; 
v___x_4077_ = lean_apply_1(v___f_4075_, v_numDiscrEqs_4076_);
return v___x_4077_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1(void){
_start:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4079_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0));
v___x_4080_ = l_Lean_stringToMessageData(v___x_4079_);
return v___x_4080_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3(void){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4082_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2));
v___x_4083_ = l_Lean_stringToMessageData(v___x_4082_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object* v_matcherName_4084_, lean_object* v_inst_4085_, lean_object* v_inst_4086_, lean_object* v_toBind_4087_, lean_object* v___f_4088_, lean_object* v_toPure_4089_, lean_object* v___f_4090_, lean_object* v_____do__lift_4091_){
_start:
{
if (lean_obj_tag(v_____do__lift_4091_) == 0)
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
lean_dec(v___f_4090_);
lean_dec(v_toPure_4089_);
v___x_4092_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_4093_ = l_Lean_MessageData_ofName(v_matcherName_4084_);
v___x_4094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4092_);
lean_ctor_set(v___x_4094_, 1, v___x_4093_);
v___x_4095_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_4096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4094_);
lean_ctor_set(v___x_4096_, 1, v___x_4095_);
v___x_4097_ = l_Lean_throwError___redArg(v_inst_4085_, v_inst_4086_, v___x_4096_);
v___x_4098_ = lean_apply_4(v_toBind_4087_, lean_box(0), lean_box(0), v___x_4097_, v___f_4088_);
return v___x_4098_;
}
else
{
lean_object* v_val_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
lean_dec(v___f_4088_);
lean_dec_ref(v_inst_4086_);
lean_dec_ref(v_inst_4085_);
lean_dec(v_matcherName_4084_);
v_val_4099_ = lean_ctor_get(v_____do__lift_4091_, 0);
v___x_4100_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_4099_);
v___x_4101_ = lean_apply_2(v_toPure_4089_, lean_box(0), v___x_4100_);
v___x_4102_ = lean_apply_4(v_toBind_4087_, lean_box(0), lean_box(0), v___x_4101_, v___f_4090_);
return v___x_4102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object* v_matcherName_4103_, lean_object* v_inst_4104_, lean_object* v_inst_4105_, lean_object* v_toBind_4106_, lean_object* v___f_4107_, lean_object* v_toPure_4108_, lean_object* v___f_4109_, lean_object* v_____do__lift_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__63(v_matcherName_4103_, v_inst_4104_, v_inst_4105_, v_toBind_4106_, v___f_4107_, v_toPure_4108_, v___f_4109_, v_____do__lift_4110_);
lean_dec(v_____do__lift_4110_);
return v_res_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object* v_matcherApp_4112_, lean_object* v_toPure_4113_, lean_object* v_inst_4114_, lean_object* v_toBind_4115_, lean_object* v_inst_4116_, lean_object* v___f_4117_, lean_object* v_onMotive_4118_, lean_object* v_inst_4119_, lean_object* v_onRemaining_4120_, lean_object* v_inst_4121_, lean_object* v___f_4122_, lean_object* v_onAlt_4123_, lean_object* v___f_4124_, uint8_t v_useSplitter_4125_, lean_object* v___f_4126_, lean_object* v___x_4127_, lean_object* v___x_4128_, lean_object* v_toMonadExceptOf_4129_, lean_object* v___f_4130_, lean_object* v___f_4131_, lean_object* v_onParams_4132_, lean_object* v_inst_4133_, lean_object* v_____do__lift_4134_){
_start:
{
lean_object* v_toMatcherInfo_4135_; lean_object* v_matcherName_4136_; lean_object* v_matcherLevels_4137_; lean_object* v_params_4138_; lean_object* v_motive_4139_; lean_object* v_discrs_4140_; lean_object* v_alts_4141_; lean_object* v_remaining_4142_; uint8_t v_isCasesOn_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___f_4146_; 
v_toMatcherInfo_4135_ = lean_ctor_get(v_matcherApp_4112_, 0);
lean_inc_ref(v_toMatcherInfo_4135_);
v_matcherName_4136_ = lean_ctor_get(v_matcherApp_4112_, 1);
lean_inc_n(v_matcherName_4136_, 3);
v_matcherLevels_4137_ = lean_ctor_get(v_matcherApp_4112_, 2);
lean_inc_ref(v_matcherLevels_4137_);
v_params_4138_ = lean_ctor_get(v_matcherApp_4112_, 3);
lean_inc_ref(v_params_4138_);
v_motive_4139_ = lean_ctor_get(v_matcherApp_4112_, 4);
lean_inc_ref(v_motive_4139_);
v_discrs_4140_ = lean_ctor_get(v_matcherApp_4112_, 5);
lean_inc_ref(v_discrs_4140_);
v_alts_4141_ = lean_ctor_get(v_matcherApp_4112_, 6);
lean_inc_ref(v_alts_4141_);
v_remaining_4142_ = lean_ctor_get(v_matcherApp_4112_, 7);
lean_inc_ref(v_remaining_4142_);
v_isCasesOn_4143_ = l_Lean_isCasesOnRecursor(v_____do__lift_4134_, v_matcherName_4136_);
v___x_4144_ = lean_box(v_useSplitter_4125_);
v___x_4145_ = lean_box(v_isCasesOn_4143_);
lean_inc_ref(v_inst_4119_);
lean_inc_ref(v_inst_4116_);
lean_inc(v_toBind_4115_);
lean_inc(v_toPure_4113_);
v___f_4146_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed), 31, 30);
lean_closure_set(v___f_4146_, 0, v_toPure_4113_);
lean_closure_set(v___f_4146_, 1, v_inst_4114_);
lean_closure_set(v___f_4146_, 2, v_toBind_4115_);
lean_closure_set(v___f_4146_, 3, v_toMatcherInfo_4135_);
lean_closure_set(v___f_4146_, 4, v_inst_4116_);
lean_closure_set(v___f_4146_, 5, v___f_4117_);
lean_closure_set(v___f_4146_, 6, v_onMotive_4118_);
lean_closure_set(v___f_4146_, 7, v_discrs_4140_);
lean_closure_set(v___f_4146_, 8, v_inst_4119_);
lean_closure_set(v___f_4146_, 9, v_matcherName_4136_);
lean_closure_set(v___f_4146_, 10, v_onRemaining_4120_);
lean_closure_set(v___f_4146_, 11, v_remaining_4142_);
lean_closure_set(v___f_4146_, 12, v_inst_4121_);
lean_closure_set(v___f_4146_, 13, v_alts_4141_);
lean_closure_set(v___f_4146_, 14, v___f_4122_);
lean_closure_set(v___f_4146_, 15, v_onAlt_4123_);
lean_closure_set(v___f_4146_, 16, v___f_4124_);
lean_closure_set(v___f_4146_, 17, v_matcherApp_4112_);
lean_closure_set(v___f_4146_, 18, v___x_4144_);
lean_closure_set(v___f_4146_, 19, v___x_4145_);
lean_closure_set(v___f_4146_, 20, v___f_4126_);
lean_closure_set(v___f_4146_, 21, v___x_4127_);
lean_closure_set(v___f_4146_, 22, v___x_4128_);
lean_closure_set(v___f_4146_, 23, v_toMonadExceptOf_4129_);
lean_closure_set(v___f_4146_, 24, v___f_4130_);
lean_closure_set(v___f_4146_, 25, v___f_4131_);
lean_closure_set(v___f_4146_, 26, v_matcherLevels_4137_);
lean_closure_set(v___f_4146_, 27, v_motive_4139_);
lean_closure_set(v___f_4146_, 28, v_onParams_4132_);
lean_closure_set(v___f_4146_, 29, v_params_4138_);
if (v_isCasesOn_4143_ == 0)
{
lean_object* v___f_4147_; lean_object* v___f_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___f_4147_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4147_, 0, v___f_4146_);
lean_inc_ref(v___f_4147_);
lean_inc(v_toBind_4115_);
lean_inc_ref(v_inst_4116_);
lean_inc(v_matcherName_4136_);
v___f_4148_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed), 8, 7);
lean_closure_set(v___f_4148_, 0, v_matcherName_4136_);
lean_closure_set(v___f_4148_, 1, v_inst_4116_);
lean_closure_set(v___f_4148_, 2, v_inst_4119_);
lean_closure_set(v___f_4148_, 3, v_toBind_4115_);
lean_closure_set(v___f_4148_, 4, v___f_4147_);
lean_closure_set(v___f_4148_, 5, v_toPure_4113_);
lean_closure_set(v___f_4148_, 6, v___f_4147_);
v___x_4149_ = l_Lean_Meta_getMatcherInfo_x3f___redArg(v_inst_4116_, v_inst_4133_, v_matcherName_4136_);
v___x_4150_ = lean_apply_4(v_toBind_4115_, lean_box(0), lean_box(0), v___x_4149_, v___f_4148_);
return v___x_4150_;
}
else
{
lean_object* v___f_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
lean_dec(v_matcherName_4136_);
lean_dec_ref(v_inst_4133_);
lean_dec_ref(v_inst_4119_);
lean_dec_ref(v_inst_4116_);
v___f_4151_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4151_, 0, v___f_4146_);
v___x_4152_ = lean_unsigned_to_nat(0u);
v___x_4153_ = lean_apply_2(v_toPure_4113_, lean_box(0), v___x_4152_);
v___x_4154_ = lean_apply_4(v_toBind_4115_, lean_box(0), lean_box(0), v___x_4153_, v___f_4151_);
return v___x_4154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object** _args){
lean_object* v_matcherApp_4155_ = _args[0];
lean_object* v_toPure_4156_ = _args[1];
lean_object* v_inst_4157_ = _args[2];
lean_object* v_toBind_4158_ = _args[3];
lean_object* v_inst_4159_ = _args[4];
lean_object* v___f_4160_ = _args[5];
lean_object* v_onMotive_4161_ = _args[6];
lean_object* v_inst_4162_ = _args[7];
lean_object* v_onRemaining_4163_ = _args[8];
lean_object* v_inst_4164_ = _args[9];
lean_object* v___f_4165_ = _args[10];
lean_object* v_onAlt_4166_ = _args[11];
lean_object* v___f_4167_ = _args[12];
lean_object* v_useSplitter_4168_ = _args[13];
lean_object* v___f_4169_ = _args[14];
lean_object* v___x_4170_ = _args[15];
lean_object* v___x_4171_ = _args[16];
lean_object* v_toMonadExceptOf_4172_ = _args[17];
lean_object* v___f_4173_ = _args[18];
lean_object* v___f_4174_ = _args[19];
lean_object* v_onParams_4175_ = _args[20];
lean_object* v_inst_4176_ = _args[21];
lean_object* v_____do__lift_4177_ = _args[22];
_start:
{
uint8_t v_useSplitter_boxed_4178_; lean_object* v_res_4179_; 
v_useSplitter_boxed_4178_ = lean_unbox(v_useSplitter_4168_);
v_res_4179_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__64(v_matcherApp_4155_, v_toPure_4156_, v_inst_4157_, v_toBind_4158_, v_inst_4159_, v___f_4160_, v_onMotive_4161_, v_inst_4162_, v_onRemaining_4163_, v_inst_4164_, v___f_4165_, v_onAlt_4166_, v___f_4167_, v_useSplitter_boxed_4178_, v___f_4169_, v___x_4170_, v___x_4171_, v_toMonadExceptOf_4172_, v___f_4173_, v___f_4174_, v_onParams_4175_, v_inst_4176_, v_____do__lift_4177_);
return v_res_4179_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Subarray_empty___redArg();
return v___x_4180_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4181_);
lean_ctor_set(v___x_4182_, 1, v___x_4181_);
return v___x_4182_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4183_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1);
v___x_4184_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4185_, 0, v___x_4184_);
lean_ctor_set(v___x_4185_, 1, v___x_4183_);
return v___x_4185_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3(void){
_start:
{
lean_object* v___x_4186_; 
v___x_4186_ = l_Array_instInhabited___redArg();
return v___x_4186_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4(void){
_start:
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4187_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2);
v___x_4188_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
lean_ctor_set(v___x_4189_, 1, v___x_4187_);
return v___x_4189_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5(void){
_start:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v___x_4190_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4);
v___x_4191_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4191_);
lean_ctor_set(v___x_4192_, 1, v___x_4190_);
return v___x_4192_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6(void){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4193_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5);
v___x_4194_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3);
v___x_4195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
lean_ctor_set(v___x_4195_, 1, v___x_4193_);
return v___x_4195_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7(void){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4196_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6);
v___x_4197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4197_, 0, v___x_4196_);
return v___x_4197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object* v_inst_4198_, lean_object* v_inst_4199_, lean_object* v_inst_4200_, lean_object* v_inst_4201_, lean_object* v_inst_4202_, lean_object* v_matcherApp_4203_, uint8_t v_useSplitter_4204_, uint8_t v_addEqualities_4205_, lean_object* v_onParams_4206_, lean_object* v_onMotive_4207_, lean_object* v_onAlt_4208_, lean_object* v_onRemaining_4209_){
_start:
{
lean_object* v_toApplicative_4210_; lean_object* v_toBind_4211_; lean_object* v_getEnv_4212_; lean_object* v_toPure_4213_; lean_object* v_toMonadExceptOf_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___f_4217_; lean_object* v___f_4218_; lean_object* v___f_4219_; lean_object* v___x_4220_; lean_object* v___f_4221_; lean_object* v___x_4222_; lean_object* v___f_4223_; lean_object* v___f_4224_; lean_object* v___f_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___f_4228_; lean_object* v___x_4229_; 
v_toApplicative_4210_ = lean_ctor_get(v_inst_4200_, 0);
v_toBind_4211_ = lean_ctor_get(v_inst_4200_, 1);
lean_inc_n(v_toBind_4211_, 4);
v_getEnv_4212_ = lean_ctor_get(v_inst_4202_, 0);
lean_inc(v_getEnv_4212_);
v_toPure_4213_ = lean_ctor_get(v_toApplicative_4210_, 1);
lean_inc_n(v_toPure_4213_, 5);
v_toMonadExceptOf_4214_ = lean_ctor_get(v_inst_4201_, 0);
lean_inc_ref(v_toMonadExceptOf_4214_);
v___x_4215_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
lean_inc_ref_n(v_inst_4200_, 4);
v___x_4216_ = l_instInhabitedOfMonad___redArg(v_inst_4200_, v___x_4215_);
lean_inc_ref(v_inst_4201_);
v___f_4217_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4217_, 0, v_inst_4200_);
lean_closure_set(v___f_4217_, 1, v_inst_4201_);
lean_inc_n(v_inst_4198_, 3);
v___f_4218_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4218_, 0, v_inst_4198_);
v___f_4219_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4219_, 0, v_inst_4200_);
lean_closure_set(v___f_4219_, 1, v___f_4218_);
v___x_4220_ = l_Lean_instInhabitedExpr;
v___f_4221_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__5), 6, 3);
lean_closure_set(v___f_4221_, 0, v_toPure_4213_);
lean_closure_set(v___f_4221_, 1, v_inst_4198_);
lean_closure_set(v___f_4221_, 2, v_toBind_4211_);
v___x_4222_ = lean_box(v_addEqualities_4205_);
v___f_4223_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed), 7, 4);
lean_closure_set(v___f_4223_, 0, v_toPure_4213_);
lean_closure_set(v___f_4223_, 1, v___x_4222_);
lean_closure_set(v___f_4223_, 2, v_inst_4198_);
lean_closure_set(v___f_4223_, 3, v_toBind_4211_);
v___f_4224_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__11), 2, 1);
lean_closure_set(v___f_4224_, 0, v_toPure_4213_);
v___f_4225_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__12), 2, 1);
lean_closure_set(v___f_4225_, 0, v_toPure_4213_);
v___x_4226_ = l_instInhabitedOfMonad___redArg(v_inst_4200_, v___x_4220_);
v___x_4227_ = lean_box(v_useSplitter_4204_);
v___f_4228_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed), 23, 22);
lean_closure_set(v___f_4228_, 0, v_matcherApp_4203_);
lean_closure_set(v___f_4228_, 1, v_toPure_4213_);
lean_closure_set(v___f_4228_, 2, v_inst_4198_);
lean_closure_set(v___f_4228_, 3, v_toBind_4211_);
lean_closure_set(v___f_4228_, 4, v_inst_4200_);
lean_closure_set(v___f_4228_, 5, v___f_4223_);
lean_closure_set(v___f_4228_, 6, v_onMotive_4207_);
lean_closure_set(v___f_4228_, 7, v_inst_4201_);
lean_closure_set(v___f_4228_, 8, v_onRemaining_4209_);
lean_closure_set(v___f_4228_, 9, v_inst_4199_);
lean_closure_set(v___f_4228_, 10, v___f_4225_);
lean_closure_set(v___f_4228_, 11, v_onAlt_4208_);
lean_closure_set(v___f_4228_, 12, v___f_4219_);
lean_closure_set(v___f_4228_, 13, v___x_4227_);
lean_closure_set(v___f_4228_, 14, v___f_4224_);
lean_closure_set(v___f_4228_, 15, v___x_4216_);
lean_closure_set(v___f_4228_, 16, v___x_4226_);
lean_closure_set(v___f_4228_, 17, v_toMonadExceptOf_4214_);
lean_closure_set(v___f_4228_, 18, v___f_4217_);
lean_closure_set(v___f_4228_, 19, v___f_4221_);
lean_closure_set(v___f_4228_, 20, v_onParams_4206_);
lean_closure_set(v___f_4228_, 21, v_inst_4202_);
v___x_4229_ = lean_apply_4(v_toBind_4211_, lean_box(0), lean_box(0), v_getEnv_4212_, v___f_4228_);
return v___x_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object* v_inst_4230_, lean_object* v_inst_4231_, lean_object* v_inst_4232_, lean_object* v_inst_4233_, lean_object* v_inst_4234_, lean_object* v_matcherApp_4235_, lean_object* v_useSplitter_4236_, lean_object* v_addEqualities_4237_, lean_object* v_onParams_4238_, lean_object* v_onMotive_4239_, lean_object* v_onAlt_4240_, lean_object* v_onRemaining_4241_){
_start:
{
uint8_t v_useSplitter_boxed_4242_; uint8_t v_addEqualities_boxed_4243_; lean_object* v_res_4244_; 
v_useSplitter_boxed_4242_ = lean_unbox(v_useSplitter_4236_);
v_addEqualities_boxed_4243_ = lean_unbox(v_addEqualities_4237_);
v_res_4244_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4230_, v_inst_4231_, v_inst_4232_, v_inst_4233_, v_inst_4234_, v_matcherApp_4235_, v_useSplitter_boxed_4242_, v_addEqualities_boxed_4243_, v_onParams_4238_, v_onMotive_4239_, v_onAlt_4240_, v_onRemaining_4241_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object* v_n_4245_, lean_object* v_inst_4246_, lean_object* v_inst_4247_, lean_object* v_inst_4248_, lean_object* v_inst_4249_, lean_object* v_inst_4250_, lean_object* v_inst_4251_, lean_object* v_inst_4252_, lean_object* v_inst_4253_, lean_object* v_matcherApp_4254_, uint8_t v_useSplitter_4255_, uint8_t v_addEqualities_4256_, lean_object* v_onParams_4257_, lean_object* v_onMotive_4258_, lean_object* v_onAlt_4259_, lean_object* v_onRemaining_4260_){
_start:
{
lean_object* v___x_4261_; 
v___x_4261_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4246_, v_inst_4247_, v_inst_4248_, v_inst_4249_, v_inst_4250_, v_matcherApp_4254_, v_useSplitter_4255_, v_addEqualities_4256_, v_onParams_4257_, v_onMotive_4258_, v_onAlt_4259_, v_onRemaining_4260_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object* v_n_4262_, lean_object* v_inst_4263_, lean_object* v_inst_4264_, lean_object* v_inst_4265_, lean_object* v_inst_4266_, lean_object* v_inst_4267_, lean_object* v_inst_4268_, lean_object* v_inst_4269_, lean_object* v_inst_4270_, lean_object* v_matcherApp_4271_, lean_object* v_useSplitter_4272_, lean_object* v_addEqualities_4273_, lean_object* v_onParams_4274_, lean_object* v_onMotive_4275_, lean_object* v_onAlt_4276_, lean_object* v_onRemaining_4277_){
_start:
{
uint8_t v_useSplitter_boxed_4278_; uint8_t v_addEqualities_boxed_4279_; lean_object* v_res_4280_; 
v_useSplitter_boxed_4278_ = lean_unbox(v_useSplitter_4272_);
v_addEqualities_boxed_4279_ = lean_unbox(v_addEqualities_4273_);
v_res_4280_ = l_Lean_Meta_MatcherApp_transform(v_n_4262_, v_inst_4263_, v_inst_4264_, v_inst_4265_, v_inst_4266_, v_inst_4267_, v_inst_4268_, v_inst_4269_, v_inst_4270_, v_matcherApp_4271_, v_useSplitter_boxed_4278_, v_addEqualities_boxed_4279_, v_onParams_4274_, v_onMotive_4275_, v_onAlt_4276_, v_onRemaining_4277_);
lean_dec_ref(v_inst_4270_);
lean_dec(v_inst_4269_);
lean_dec_ref(v_inst_4268_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_){
_start:
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4287_, 0, v___y_4281_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
lean_object* v_res_4294_; 
v_res_4294_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__0(v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
return v_res_4294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_){
_start:
{
lean_object* v___x_4301_; 
v___x_4301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4301_, 0, v___y_4295_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__1(v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec(v___y_4304_);
lean_dec_ref(v___y_4303_);
return v_res_4308_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object* v_opts_4309_, lean_object* v_opt_4310_){
_start:
{
lean_object* v_name_4311_; lean_object* v_defValue_4312_; lean_object* v_map_4313_; lean_object* v___x_4314_; 
v_name_4311_ = lean_ctor_get(v_opt_4310_, 0);
v_defValue_4312_ = lean_ctor_get(v_opt_4310_, 1);
v_map_4313_ = lean_ctor_get(v_opts_4309_, 0);
v___x_4314_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4313_, v_name_4311_);
if (lean_obj_tag(v___x_4314_) == 0)
{
uint8_t v___x_4315_; 
v___x_4315_ = lean_unbox(v_defValue_4312_);
return v___x_4315_;
}
else
{
lean_object* v_val_4316_; 
v_val_4316_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_val_4316_);
lean_dec_ref_known(v___x_4314_, 1);
if (lean_obj_tag(v_val_4316_) == 1)
{
uint8_t v_v_4317_; 
v_v_4317_ = lean_ctor_get_uint8(v_val_4316_, 0);
lean_dec_ref_known(v_val_4316_, 0);
return v_v_4317_;
}
else
{
uint8_t v___x_4318_; 
lean_dec(v_val_4316_);
v___x_4318_ = lean_unbox(v_defValue_4312_);
return v___x_4318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object* v_opts_4319_, lean_object* v_opt_4320_){
_start:
{
uint8_t v_res_4321_; lean_object* v_r_4322_; 
v_res_4321_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_opts_4319_, v_opt_4320_);
lean_dec_ref(v_opt_4320_);
lean_dec_ref(v_opts_4319_);
v_r_4322_ = lean_box(v_res_4321_);
return v_r_4322_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_4331_, lean_object* v_x_4332_){
_start:
{
if (lean_obj_tag(v_x_4332_) == 1)
{
lean_object* v_pre_4333_; 
v_pre_4333_ = lean_ctor_get(v_x_4332_, 0);
switch(lean_obj_tag(v_pre_4333_))
{
case 1:
{
lean_object* v_pre_4334_; 
v_pre_4334_ = lean_ctor_get(v_pre_4333_, 0);
switch(lean_obj_tag(v_pre_4334_))
{
case 0:
{
lean_object* v_str_4335_; lean_object* v_str_4336_; lean_object* v___x_4337_; uint8_t v___x_4338_; 
v_str_4335_ = lean_ctor_get(v_x_4332_, 1);
v_str_4336_ = lean_ctor_get(v_pre_4333_, 1);
v___x_4337_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_4338_ = lean_string_dec_eq(v_str_4336_, v___x_4337_);
if (v___x_4338_ == 0)
{
lean_object* v___x_4339_; uint8_t v___x_4340_; 
v___x_4339_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_4340_ = lean_string_dec_eq(v_str_4336_, v___x_4339_);
if (v___x_4340_ == 0)
{
return v___x_4340_;
}
else
{
lean_object* v___x_4341_; uint8_t v___x_4342_; 
v___x_4341_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_4342_ = lean_string_dec_eq(v_str_4335_, v___x_4341_);
if (v___x_4342_ == 0)
{
return v___x_4342_;
}
else
{
return v_suppressElabErrors_4331_;
}
}
}
else
{
lean_object* v___x_4343_; uint8_t v___x_4344_; 
v___x_4343_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_4344_ = lean_string_dec_eq(v_str_4335_, v___x_4343_);
if (v___x_4344_ == 0)
{
return v___x_4344_;
}
else
{
return v_suppressElabErrors_4331_;
}
}
}
case 1:
{
lean_object* v_pre_4345_; 
v_pre_4345_ = lean_ctor_get(v_pre_4334_, 0);
if (lean_obj_tag(v_pre_4345_) == 0)
{
lean_object* v_str_4346_; lean_object* v_str_4347_; lean_object* v_str_4348_; lean_object* v___x_4349_; uint8_t v___x_4350_; 
v_str_4346_ = lean_ctor_get(v_x_4332_, 1);
v_str_4347_ = lean_ctor_get(v_pre_4333_, 1);
v_str_4348_ = lean_ctor_get(v_pre_4334_, 1);
v___x_4349_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_4350_ = lean_string_dec_eq(v_str_4348_, v___x_4349_);
if (v___x_4350_ == 0)
{
return v___x_4350_;
}
else
{
lean_object* v___x_4351_; uint8_t v___x_4352_; 
v___x_4351_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_4352_ = lean_string_dec_eq(v_str_4347_, v___x_4351_);
if (v___x_4352_ == 0)
{
return v___x_4352_;
}
else
{
lean_object* v___x_4353_; uint8_t v___x_4354_; 
v___x_4353_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_4354_ = lean_string_dec_eq(v_str_4346_, v___x_4353_);
if (v___x_4354_ == 0)
{
return v___x_4354_;
}
else
{
return v_suppressElabErrors_4331_;
}
}
}
}
else
{
uint8_t v___x_4355_; 
v___x_4355_ = 0;
return v___x_4355_;
}
}
default: 
{
uint8_t v___x_4356_; 
v___x_4356_ = 0;
return v___x_4356_;
}
}
}
case 0:
{
lean_object* v_str_4357_; lean_object* v___x_4358_; uint8_t v___x_4359_; 
v_str_4357_ = lean_ctor_get(v_x_4332_, 1);
v___x_4358_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_4359_ = lean_string_dec_eq(v_str_4357_, v___x_4358_);
if (v___x_4359_ == 0)
{
return v___x_4359_;
}
else
{
return v_suppressElabErrors_4331_;
}
}
default: 
{
uint8_t v___x_4360_; 
v___x_4360_ = 0;
return v___x_4360_;
}
}
}
else
{
uint8_t v___x_4361_; 
v___x_4361_ = 0;
return v___x_4361_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_4362_, lean_object* v_x_4363_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4364_; uint8_t v_res_4365_; lean_object* v_r_4366_; 
v_suppressElabErrors_boxed_4364_ = lean_unbox(v_suppressElabErrors_4362_);
v_res_4365_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_4364_, v_x_4363_);
lean_dec(v_x_4363_);
v_r_4366_ = lean_box(v_res_4365_);
return v_r_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object* v_ref_4368_, lean_object* v_msgData_4369_, uint8_t v_severity_4370_, uint8_t v_isSilent_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
uint8_t v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; uint8_t v___y_4383_; lean_object* v___y_4384_; lean_object* v_toCold_4385_; lean_object* v___y_4386_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; uint8_t v___y_4418_; uint8_t v___y_4419_; lean_object* v___y_4420_; uint8_t v___y_4421_; lean_object* v___y_4422_; lean_object* v___y_4442_; uint8_t v___y_4443_; lean_object* v___y_4444_; uint8_t v___y_4445_; uint8_t v___y_4446_; lean_object* v___y_4447_; lean_object* v___y_4448_; uint8_t v___y_4452_; uint8_t v___y_4453_; uint8_t v___x_4463_; uint8_t v___y_4465_; uint8_t v___x_4471_; 
v___x_4463_ = 2;
v___x_4471_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4370_, v___x_4463_);
if (v___x_4471_ == 0)
{
v___y_4465_ = v___x_4471_;
goto v___jp_4464_;
}
else
{
uint8_t v___x_4472_; 
lean_inc_ref(v_msgData_4369_);
v___x_4472_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4369_);
if (v___x_4472_ == 0)
{
v___y_4465_ = v___x_4472_;
goto v___jp_4464_;
}
else
{
lean_object* v___x_4473_; lean_object* v___x_4474_; 
lean_dec_ref(v_msgData_4369_);
v___x_4473_ = lean_box(0);
v___x_4474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4473_);
return v___x_4474_;
}
}
v___jp_4377_:
{
lean_object* v_currNamespace_4387_; lean_object* v_openDecls_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v_env_4393_; lean_object* v_nextMacroScope_4394_; lean_object* v_ngen_4395_; lean_object* v_auxDeclNGen_4396_; lean_object* v_traceState_4397_; lean_object* v_cache_4398_; lean_object* v_recordedDeps_4399_; lean_object* v_messages_4400_; lean_object* v_infoState_4401_; lean_object* v_snapshotTasks_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4413_; 
v_currNamespace_4387_ = lean_ctor_get(v_toCold_4385_, 4);
v_openDecls_4388_ = lean_ctor_get(v_toCold_4385_, 5);
lean_inc(v_openDecls_4388_);
lean_inc(v_currNamespace_4387_);
v___x_4389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4389_, 0, v_currNamespace_4387_);
lean_ctor_set(v___x_4389_, 1, v_openDecls_4388_);
v___x_4390_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4390_, 0, v___x_4389_);
lean_ctor_set(v___x_4390_, 1, v___y_4384_);
lean_inc_ref(v___y_4380_);
lean_inc_ref(v___y_4379_);
v___x_4391_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4391_, 0, v___y_4379_);
lean_ctor_set(v___x_4391_, 1, v___y_4382_);
lean_ctor_set(v___x_4391_, 2, v___y_4381_);
lean_ctor_set(v___x_4391_, 3, v___y_4380_);
lean_ctor_set(v___x_4391_, 4, v___x_4390_);
lean_ctor_set_uint8(v___x_4391_, sizeof(void*)*5, v___y_4383_);
lean_ctor_set_uint8(v___x_4391_, sizeof(void*)*5 + 1, v___y_4378_);
lean_ctor_set_uint8(v___x_4391_, sizeof(void*)*5 + 2, v_isSilent_4371_);
v___x_4392_ = lean_st_ref_take(v___y_4386_);
v_env_4393_ = lean_ctor_get(v___x_4392_, 0);
v_nextMacroScope_4394_ = lean_ctor_get(v___x_4392_, 1);
v_ngen_4395_ = lean_ctor_get(v___x_4392_, 2);
v_auxDeclNGen_4396_ = lean_ctor_get(v___x_4392_, 3);
v_traceState_4397_ = lean_ctor_get(v___x_4392_, 4);
v_cache_4398_ = lean_ctor_get(v___x_4392_, 5);
v_recordedDeps_4399_ = lean_ctor_get(v___x_4392_, 6);
v_messages_4400_ = lean_ctor_get(v___x_4392_, 7);
v_infoState_4401_ = lean_ctor_get(v___x_4392_, 8);
v_snapshotTasks_4402_ = lean_ctor_get(v___x_4392_, 9);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4392_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4404_ = v___x_4392_;
v_isShared_4405_ = v_isSharedCheck_4413_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_snapshotTasks_4402_);
lean_inc(v_infoState_4401_);
lean_inc(v_messages_4400_);
lean_inc(v_recordedDeps_4399_);
lean_inc(v_cache_4398_);
lean_inc(v_traceState_4397_);
lean_inc(v_auxDeclNGen_4396_);
lean_inc(v_ngen_4395_);
lean_inc(v_nextMacroScope_4394_);
lean_inc(v_env_4393_);
lean_dec(v___x_4392_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4413_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4409_; 
v___x_4406_ = lean_box(0);
v___x_4407_ = l_Lean_MessageLog_add(v___x_4391_, v_messages_4400_);
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 7, v___x_4407_);
v___x_4409_ = v___x_4404_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_env_4393_);
lean_ctor_set(v_reuseFailAlloc_4412_, 1, v_nextMacroScope_4394_);
lean_ctor_set(v_reuseFailAlloc_4412_, 2, v_ngen_4395_);
lean_ctor_set(v_reuseFailAlloc_4412_, 3, v_auxDeclNGen_4396_);
lean_ctor_set(v_reuseFailAlloc_4412_, 4, v_traceState_4397_);
lean_ctor_set(v_reuseFailAlloc_4412_, 5, v_cache_4398_);
lean_ctor_set(v_reuseFailAlloc_4412_, 6, v_recordedDeps_4399_);
lean_ctor_set(v_reuseFailAlloc_4412_, 7, v___x_4407_);
lean_ctor_set(v_reuseFailAlloc_4412_, 8, v_infoState_4401_);
lean_ctor_set(v_reuseFailAlloc_4412_, 9, v_snapshotTasks_4402_);
v___x_4409_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = lean_st_ref_put(v___y_4386_, v___x_4409_);
v___x_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4406_);
return v___x_4411_;
}
}
}
v___jp_4414_:
{
lean_object* v_fileName_4423_; lean_object* v_fileMap_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v_a_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4440_; 
v_fileName_4423_ = lean_ctor_get(v___y_4420_, 0);
v_fileMap_4424_ = lean_ctor_get(v___y_4420_, 1);
v___x_4425_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4369_);
v___x_4426_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v___x_4425_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4429_ = v___x_4426_;
v_isShared_4430_ = v_isSharedCheck_4440_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_a_4427_);
lean_dec(v___x_4426_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4440_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
lean_inc_ref_n(v_fileMap_4424_, 2);
v___x_4431_ = l_Lean_FileMap_toPosition(v_fileMap_4424_, v___y_4417_);
lean_dec(v___y_4417_);
v___x_4432_ = l_Lean_FileMap_toPosition(v_fileMap_4424_, v___y_4422_);
lean_dec(v___y_4422_);
v___x_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4432_);
v___x_4434_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0));
if (v___y_4419_ == 0)
{
lean_del_object(v___x_4429_);
lean_dec_ref(v___y_4415_);
v___y_4378_ = v___y_4418_;
v___y_4379_ = v_fileName_4423_;
v___y_4380_ = v___x_4434_;
v___y_4381_ = v___x_4433_;
v___y_4382_ = v___x_4431_;
v___y_4383_ = v___y_4421_;
v___y_4384_ = v_a_4427_;
v_toCold_4385_ = v___y_4416_;
v___y_4386_ = v___y_4375_;
goto v___jp_4377_;
}
else
{
uint8_t v___x_4435_; 
lean_inc(v_a_4427_);
v___x_4435_ = l_Lean_MessageData_hasTag(v___y_4415_, v_a_4427_);
if (v___x_4435_ == 0)
{
lean_object* v___x_4436_; lean_object* v___x_4438_; 
lean_dec_ref_known(v___x_4433_, 1);
lean_dec_ref(v___x_4431_);
lean_dec(v_a_4427_);
v___x_4436_ = lean_box(0);
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 0, v___x_4436_);
v___x_4438_ = v___x_4429_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v___x_4436_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
else
{
lean_del_object(v___x_4429_);
v___y_4378_ = v___y_4418_;
v___y_4379_ = v_fileName_4423_;
v___y_4380_ = v___x_4434_;
v___y_4381_ = v___x_4433_;
v___y_4382_ = v___x_4431_;
v___y_4383_ = v___y_4421_;
v___y_4384_ = v_a_4427_;
v_toCold_4385_ = v___y_4416_;
v___y_4386_ = v___y_4375_;
goto v___jp_4377_;
}
}
}
}
v___jp_4441_:
{
lean_object* v___x_4449_; 
v___x_4449_ = l_Lean_Syntax_getTailPos_x3f(v___y_4447_, v___y_4446_);
lean_dec(v___y_4447_);
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_inc(v___y_4448_);
v___y_4415_ = v___y_4442_;
v___y_4416_ = v___y_4444_;
v___y_4417_ = v___y_4448_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4443_;
v___y_4420_ = v___y_4444_;
v___y_4421_ = v___y_4446_;
v___y_4422_ = v___y_4448_;
goto v___jp_4414_;
}
else
{
lean_object* v_val_4450_; 
v_val_4450_ = lean_ctor_get(v___x_4449_, 0);
lean_inc(v_val_4450_);
lean_dec_ref_known(v___x_4449_, 1);
v___y_4415_ = v___y_4442_;
v___y_4416_ = v___y_4444_;
v___y_4417_ = v___y_4448_;
v___y_4418_ = v___y_4445_;
v___y_4419_ = v___y_4443_;
v___y_4420_ = v___y_4444_;
v___y_4421_ = v___y_4446_;
v___y_4422_ = v_val_4450_;
goto v___jp_4414_;
}
}
v___jp_4451_:
{
lean_object* v_toCold_4454_; lean_object* v_ref_4455_; uint8_t v_suppressElabErrors_4456_; lean_object* v___x_4457_; lean_object* v___f_4458_; lean_object* v_ref_4459_; lean_object* v___x_4460_; 
v_toCold_4454_ = lean_ctor_get(v___y_4374_, 0);
v_ref_4455_ = lean_ctor_get(v___y_4374_, 2);
v_suppressElabErrors_4456_ = lean_ctor_get_uint8(v___y_4374_, sizeof(void*)*3 + 2);
v___x_4457_ = lean_box(v_suppressElabErrors_4456_);
v___f_4458_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4458_, 0, v___x_4457_);
v_ref_4459_ = l_Lean_replaceRef(v_ref_4368_, v_ref_4455_);
v___x_4460_ = l_Lean_Syntax_getPos_x3f(v_ref_4459_, v___y_4452_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v___x_4461_; 
v___x_4461_ = lean_unsigned_to_nat(0u);
v___y_4442_ = v___f_4458_;
v___y_4443_ = v_suppressElabErrors_4456_;
v___y_4444_ = v_toCold_4454_;
v___y_4445_ = v___y_4453_;
v___y_4446_ = v___y_4452_;
v___y_4447_ = v_ref_4459_;
v___y_4448_ = v___x_4461_;
goto v___jp_4441_;
}
else
{
lean_object* v_val_4462_; 
v_val_4462_ = lean_ctor_get(v___x_4460_, 0);
lean_inc(v_val_4462_);
lean_dec_ref_known(v___x_4460_, 1);
v___y_4442_ = v___f_4458_;
v___y_4443_ = v_suppressElabErrors_4456_;
v___y_4444_ = v_toCold_4454_;
v___y_4445_ = v___y_4453_;
v___y_4446_ = v___y_4452_;
v___y_4447_ = v_ref_4459_;
v___y_4448_ = v_val_4462_;
goto v___jp_4441_;
}
}
v___jp_4464_:
{
uint8_t v___x_4466_; uint8_t v___x_4467_; 
v___x_4466_ = 1;
v___x_4467_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4370_, v___x_4466_);
if (v___x_4467_ == 0)
{
v___y_4452_ = v___y_4465_;
v___y_4453_ = v_severity_4370_;
goto v___jp_4451_;
}
else
{
lean_object* v___x_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4468_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4374_);
v___x_4469_ = l_Lean_warningAsError;
v___x_4470_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v___x_4468_, v___x_4469_);
lean_dec_ref(v___x_4468_);
if (v___x_4470_ == 0)
{
v___y_4452_ = v___y_4465_;
v___y_4453_ = v_severity_4370_;
goto v___jp_4451_;
}
else
{
v___y_4452_ = v___y_4465_;
v___y_4453_ = v___x_4463_;
goto v___jp_4451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_4475_, lean_object* v_msgData_4476_, lean_object* v_severity_4477_, lean_object* v_isSilent_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_){
_start:
{
uint8_t v_severity_boxed_4484_; uint8_t v_isSilent_boxed_4485_; lean_object* v_res_4486_; 
v_severity_boxed_4484_ = lean_unbox(v_severity_4477_);
v_isSilent_boxed_4485_ = lean_unbox(v_isSilent_4478_);
v_res_4486_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4475_, v_msgData_4476_, v_severity_boxed_4484_, v_isSilent_boxed_4485_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_);
lean_dec(v___y_4482_);
lean_dec_ref(v___y_4481_);
lean_dec(v___y_4480_);
lean_dec_ref(v___y_4479_);
lean_dec(v_ref_4475_);
return v_res_4486_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object* v_msgData_4487_, uint8_t v_severity_4488_, uint8_t v_isSilent_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v_ref_4495_; lean_object* v___x_4496_; 
v_ref_4495_ = lean_ctor_get(v___y_4492_, 2);
v___x_4496_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4495_, v_msgData_4487_, v_severity_4488_, v_isSilent_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object* v_msgData_4497_, lean_object* v_severity_4498_, lean_object* v_isSilent_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_){
_start:
{
uint8_t v_severity_boxed_4505_; uint8_t v_isSilent_boxed_4506_; lean_object* v_res_4507_; 
v_severity_boxed_4505_ = lean_unbox(v_severity_4498_);
v_isSilent_boxed_4506_ = lean_unbox(v_isSilent_4499_);
v_res_4507_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4497_, v_severity_boxed_4505_, v_isSilent_boxed_4506_, v___y_4500_, v___y_4501_, v___y_4502_, v___y_4503_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
lean_dec(v___y_4501_);
lean_dec_ref(v___y_4500_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object* v_msgData_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_){
_start:
{
uint8_t v___x_4514_; uint8_t v___x_4515_; lean_object* v___x_4516_; 
v___x_4514_ = 0;
v___x_4515_ = 0;
v___x_4516_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4508_, v___x_4514_, v___x_4515_, v___y_4509_, v___y_4510_, v___y_4511_, v___y_4512_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object* v_msgData_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
lean_object* v_res_4523_; 
v_res_4523_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v_msgData_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
return v_res_4523_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4525_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0));
v___x_4526_ = l_Lean_stringToMessageData(v___x_4525_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t v___x_4527_, lean_object* v___altIdx_4528_, lean_object* v_expAltType_4529_, lean_object* v___altFVars_4530_, lean_object* v_alt_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_){
_start:
{
lean_object* v___x_4537_; 
lean_inc(v___y_4535_);
lean_inc_ref(v___y_4534_);
lean_inc(v___y_4533_);
lean_inc_ref(v___y_4532_);
lean_inc_ref(v_alt_4531_);
v___x_4537_ = lean_infer_type(v_alt_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v___x_4539_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v___x_4537_, 1);
v___x_4539_ = l_Lean_Meta_mkEq(v_expAltType_4529_, v_a_4538_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v_a_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v_a_4540_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_a_4540_);
lean_dec_ref_known(v___x_4539_, 1);
v___x_4541_ = lean_box(0);
v___x_4542_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4540_, v___x_4541_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4597_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4545_ = v___x_4542_;
v_isShared_4546_ = v_isSharedCheck_4597_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4542_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4597_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4547_ = l_Lean_Expr_mvarId_x21(v_a_4543_);
v___x_4548_ = l_Lean_Meta_Split_simpMatchTarget(v___x_4547_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4550_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc_n(v_a_4549_, 2);
lean_dec_ref_known(v___x_4548_, 1);
v___x_4550_ = l_Lean_MVarId_refl(v_a_4549_, v___x_4527_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v___x_4551_; 
lean_dec_ref_known(v___x_4550_, 1);
lean_dec(v_a_4549_);
lean_del_object(v___x_4545_);
v___x_4551_ = l_Lean_Meta_mkEqMPR(v_a_4543_, v_alt_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
return v___x_4551_;
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4588_; 
v_a_4552_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4554_ = v___x_4550_;
v_isShared_4555_ = v_isSharedCheck_4588_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4550_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4588_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
uint8_t v___x_4556_; 
v___x_4556_ = l_Lean_Exception_isInterrupt(v_a_4552_);
if (v___x_4556_ == 0)
{
uint8_t v___x_4557_; 
lean_inc(v_a_4552_);
v___x_4557_ = l_Lean_Exception_isRuntime(v_a_4552_);
if (v___x_4557_ == 0)
{
lean_object* v___x_4558_; lean_object* v___x_4560_; 
lean_del_object(v___x_4554_);
lean_dec(v_a_4552_);
v___x_4558_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1);
lean_inc(v_a_4549_);
if (v_isShared_4546_ == 0)
{
lean_ctor_set_tag(v___x_4545_, 1);
lean_ctor_set(v___x_4545_, 0, v_a_4549_);
v___x_4560_ = v___x_4545_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v_a_4549_);
v___x_4560_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4558_);
lean_ctor_set(v___x_4561_, 1, v___x_4560_);
v___x_4562_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v___x_4561_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v___x_4563_; 
lean_dec_ref_known(v___x_4562_, 1);
v___x_4563_ = l_Lean_MVarId_admit(v_a_4549_, v___x_4527_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4563_) == 0)
{
lean_object* v___x_4564_; 
lean_dec_ref_known(v___x_4563_, 1);
v___x_4564_ = l_Lean_Meta_mkEqMPR(v_a_4543_, v_alt_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
return v___x_4564_;
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_dec(v_a_4543_);
lean_dec_ref(v_alt_4531_);
v_a_4565_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4563_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4563_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4580_; 
lean_dec(v_a_4549_);
lean_dec(v_a_4543_);
lean_dec_ref(v_alt_4531_);
v_a_4573_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4575_ = v___x_4562_;
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4562_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4578_; 
if (v_isShared_4576_ == 0)
{
v___x_4578_ = v___x_4575_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4573_);
v___x_4578_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
return v___x_4578_;
}
}
}
}
}
else
{
lean_object* v___x_4583_; 
lean_dec(v_a_4549_);
lean_del_object(v___x_4545_);
lean_dec(v_a_4543_);
lean_dec_ref(v_alt_4531_);
if (v_isShared_4555_ == 0)
{
v___x_4583_ = v___x_4554_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_a_4552_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
else
{
lean_object* v___x_4586_; 
lean_dec(v_a_4549_);
lean_del_object(v___x_4545_);
lean_dec(v_a_4543_);
lean_dec_ref(v_alt_4531_);
if (v_isShared_4555_ == 0)
{
v___x_4586_ = v___x_4554_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4552_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
lean_del_object(v___x_4545_);
lean_dec(v_a_4543_);
lean_dec_ref(v_alt_4531_);
v_a_4589_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4548_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4548_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
}
else
{
lean_dec_ref(v_alt_4531_);
return v___x_4542_;
}
}
else
{
lean_dec_ref(v_alt_4531_);
return v___x_4539_;
}
}
else
{
lean_dec_ref(v_alt_4531_);
lean_dec_ref(v_expAltType_4529_);
return v___x_4537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object* v___x_4598_, lean_object* v___altIdx_4599_, lean_object* v_expAltType_4600_, lean_object* v___altFVars_4601_, lean_object* v_alt_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_){
_start:
{
uint8_t v___x_32545__boxed_4608_; lean_object* v_res_4609_; 
v___x_32545__boxed_4608_ = lean_unbox(v___x_4598_);
v_res_4609_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__2(v___x_32545__boxed_4608_, v___altIdx_4599_, v_expAltType_4600_, v___altFVars_4601_, v_alt_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_);
lean_dec(v___y_4606_);
lean_dec_ref(v___y_4605_);
lean_dec(v___y_4604_);
lean_dec_ref(v___y_4603_);
lean_dec_ref(v___altFVars_4601_);
lean_dec(v___altIdx_4599_);
return v_res_4609_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object* v___x_4610_, lean_object* v_e_4611_){
_start:
{
uint8_t v___x_4612_; lean_object* v_d_4614_; lean_object* v_b_4615_; 
v___x_4612_ = l_Lean_Expr_hasFVar(v_e_4611_);
if (v___x_4612_ == 0)
{
return v___x_4612_;
}
else
{
switch(lean_obj_tag(v_e_4611_))
{
case 7:
{
lean_object* v_binderType_4618_; lean_object* v_body_4619_; 
v_binderType_4618_ = lean_ctor_get(v_e_4611_, 1);
v_body_4619_ = lean_ctor_get(v_e_4611_, 2);
v_d_4614_ = v_binderType_4618_;
v_b_4615_ = v_body_4619_;
goto v___jp_4613_;
}
case 6:
{
lean_object* v_binderType_4620_; lean_object* v_body_4621_; 
v_binderType_4620_ = lean_ctor_get(v_e_4611_, 1);
v_body_4621_ = lean_ctor_get(v_e_4611_, 2);
v_d_4614_ = v_binderType_4620_;
v_b_4615_ = v_body_4621_;
goto v___jp_4613_;
}
case 10:
{
lean_object* v_expr_4622_; 
v_expr_4622_ = lean_ctor_get(v_e_4611_, 1);
v_e_4611_ = v_expr_4622_;
goto _start;
}
case 8:
{
lean_object* v_type_4624_; lean_object* v_value_4625_; lean_object* v_body_4626_; uint8_t v___x_4627_; 
v_type_4624_ = lean_ctor_get(v_e_4611_, 1);
v_value_4625_ = lean_ctor_get(v_e_4611_, 2);
v_body_4626_ = lean_ctor_get(v_e_4611_, 3);
v___x_4627_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4610_, v_type_4624_);
if (v___x_4627_ == 0)
{
uint8_t v___x_4628_; 
v___x_4628_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4610_, v_value_4625_);
if (v___x_4628_ == 0)
{
v_e_4611_ = v_body_4626_;
goto _start;
}
else
{
return v___x_4612_;
}
}
else
{
return v___x_4612_;
}
}
case 5:
{
lean_object* v_fn_4630_; lean_object* v_arg_4631_; uint8_t v___x_4632_; 
v_fn_4630_ = lean_ctor_get(v_e_4611_, 0);
v_arg_4631_ = lean_ctor_get(v_e_4611_, 1);
v___x_4632_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4610_, v_fn_4630_);
if (v___x_4632_ == 0)
{
v_e_4611_ = v_arg_4631_;
goto _start;
}
else
{
return v___x_4612_;
}
}
case 11:
{
lean_object* v_struct_4634_; 
v_struct_4634_ = lean_ctor_get(v_e_4611_, 2);
v_e_4611_ = v_struct_4634_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4636_; lean_object* v___x_4637_; uint8_t v___x_4638_; 
v_fvarId_4636_ = lean_ctor_get(v_e_4611_, 0);
v___x_4637_ = l_Lean_Expr_fvarId_x21(v___x_4610_);
v___x_4638_ = l_Lean_instBEqFVarId_beq(v_fvarId_4636_, v___x_4637_);
lean_dec(v___x_4637_);
return v___x_4638_;
}
default: 
{
uint8_t v___x_4639_; 
v___x_4639_ = 0;
return v___x_4639_;
}
}
}
v___jp_4613_:
{
uint8_t v___x_4616_; 
v___x_4616_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4610_, v_d_4614_);
if (v___x_4616_ == 0)
{
v_e_4611_ = v_b_4615_;
goto _start;
}
else
{
return v___x_4612_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object* v___x_4640_, lean_object* v_e_4641_){
_start:
{
uint8_t v_res_4642_; lean_object* v_r_4643_; 
v_res_4642_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4640_, v_e_4641_);
lean_dec_ref(v_e_4641_);
lean_dec_ref(v___x_4640_);
v_r_4643_ = lean_box(v_res_4642_);
return v_r_4643_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; 
v___x_4645_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0));
v___x_4646_ = l_Lean_stringToMessageData(v___x_4645_);
return v___x_4646_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; 
v___x_4648_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2));
v___x_4649_ = l_Lean_stringToMessageData(v___x_4648_);
return v___x_4649_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4651_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4));
v___x_4652_ = l_Lean_stringToMessageData(v___x_4651_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object* v_a_4653_, lean_object* v_termAlt_4654_, lean_object* v_a_4655_, lean_object* v_b_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_){
_start:
{
lean_object* v_array_4662_; lean_object* v_start_4663_; lean_object* v_stop_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4692_; 
v_array_4662_ = lean_ctor_get(v_a_4655_, 0);
v_start_4663_ = lean_ctor_get(v_a_4655_, 1);
v_stop_4664_ = lean_ctor_get(v_a_4655_, 2);
v_isSharedCheck_4692_ = !lean_is_exclusive(v_a_4655_);
if (v_isSharedCheck_4692_ == 0)
{
v___x_4666_ = v_a_4655_;
v_isShared_4667_ = v_isSharedCheck_4692_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_stop_4664_);
lean_inc(v_start_4663_);
lean_inc(v_array_4662_);
lean_dec(v_a_4655_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4692_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
uint8_t v___x_4668_; 
v___x_4668_ = lean_nat_dec_lt(v_start_4663_, v_stop_4664_);
if (v___x_4668_ == 0)
{
lean_object* v___x_4669_; 
lean_del_object(v___x_4666_);
lean_dec(v_stop_4664_);
lean_dec(v_start_4663_);
lean_dec_ref(v_array_4662_);
lean_dec_ref(v_termAlt_4654_);
lean_dec_ref(v_a_4653_);
v___x_4669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4669_, 0, v_b_4656_);
return v___x_4669_;
}
else
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4674_; 
v___x_4670_ = lean_box(0);
v___x_4671_ = lean_unsigned_to_nat(1u);
v___x_4672_ = lean_nat_add(v_start_4663_, v___x_4671_);
lean_inc_ref(v_array_4662_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 1, v___x_4672_);
v___x_4674_ = v___x_4666_;
goto v_reusejp_4673_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_array_4662_);
lean_ctor_set(v_reuseFailAlloc_4691_, 1, v___x_4672_);
lean_ctor_set(v_reuseFailAlloc_4691_, 2, v_stop_4664_);
v___x_4674_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4673_;
}
v_reusejp_4673_:
{
lean_object* v___x_4675_; uint8_t v___x_4676_; 
v___x_4675_ = lean_array_fget(v_array_4662_, v_start_4663_);
lean_dec(v_start_4663_);
lean_dec_ref(v_array_4662_);
v___x_4676_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4675_, v_a_4653_);
if (v___x_4676_ == 0)
{
lean_dec(v___x_4675_);
v_a_4655_ = v___x_4674_;
v_b_4656_ = v___x_4670_;
goto _start;
}
else
{
lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; 
v___x_4678_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1);
lean_inc_ref(v_a_4653_);
v___x_4679_ = l_Lean_MessageData_ofExpr(v_a_4653_);
v___x_4680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4678_);
lean_ctor_set(v___x_4680_, 1, v___x_4679_);
v___x_4681_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3);
v___x_4682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4680_);
lean_ctor_set(v___x_4682_, 1, v___x_4681_);
lean_inc_ref(v_termAlt_4654_);
v___x_4683_ = l_Lean_MessageData_ofExpr(v_termAlt_4654_);
v___x_4684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4682_);
lean_ctor_set(v___x_4684_, 1, v___x_4683_);
v___x_4685_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5);
v___x_4686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4684_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
v___x_4687_ = l_Lean_MessageData_ofExpr(v___x_4675_);
v___x_4688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4686_);
lean_ctor_set(v___x_4688_, 1, v___x_4687_);
v___x_4689_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4688_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_);
if (lean_obj_tag(v___x_4689_) == 0)
{
lean_dec_ref_known(v___x_4689_, 1);
v_a_4655_ = v___x_4674_;
v_b_4656_ = v___x_4670_;
goto _start;
}
else
{
lean_dec_ref(v___x_4674_);
lean_dec_ref(v_termAlt_4654_);
lean_dec_ref(v_a_4653_);
return v___x_4689_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object* v_a_4693_, lean_object* v_termAlt_4694_, lean_object* v_a_4695_, lean_object* v_b_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_){
_start:
{
lean_object* v_res_4702_; 
v_res_4702_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4693_, v_termAlt_4694_, v_a_4695_, v_b_4696_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
lean_dec(v___y_4700_);
lean_dec_ref(v___y_4699_);
lean_dec(v___y_4698_);
lean_dec_ref(v___y_4697_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object* v_nExtra_4703_, lean_object* v_v_4704_, uint8_t v___x_4705_, uint8_t v___x_4706_, uint8_t v___x_4707_, lean_object* v_xs_4708_, lean_object* v_termAltBody_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4715_ = lean_array_get_size(v_xs_4708_);
v___x_4716_ = lean_nat_sub(v___x_4715_, v_nExtra_4703_);
v___x_4717_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_4716_);
lean_inc_ref(v_xs_4708_);
v___x_4718_ = l_Array_toSubarray___redArg(v_xs_4708_, v___x_4717_, v___x_4716_);
v___x_4719_ = l_Array_toSubarray___redArg(v_xs_4708_, v___x_4716_, v___x_4715_);
lean_inc(v___y_4713_);
lean_inc_ref(v___y_4712_);
lean_inc(v___y_4711_);
lean_inc_ref(v___y_4710_);
v___x_4720_ = lean_infer_type(v_termAltBody_4709_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
if (lean_obj_tag(v___x_4720_) == 0)
{
lean_object* v_a_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; 
v_a_4721_ = lean_ctor_get(v___x_4720_, 0);
lean_inc_n(v_a_4721_, 2);
lean_dec_ref_known(v___x_4720_, 1);
v___x_4722_ = lean_box(0);
v___x_4723_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4721_, v_v_4704_, v___x_4719_, v___x_4722_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
if (lean_obj_tag(v___x_4723_) == 0)
{
lean_object* v___x_4724_; lean_object* v___x_4725_; 
lean_dec_ref_known(v___x_4723_, 1);
v___x_4724_ = l_Subarray_copy___redArg(v___x_4718_);
v___x_4725_ = l_Lean_Meta_mkLambdaFVars(v___x_4724_, v_a_4721_, v___x_4705_, v___x_4706_, v___x_4705_, v___x_4706_, v___x_4707_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
lean_dec_ref(v___x_4724_);
return v___x_4725_;
}
else
{
lean_object* v_a_4726_; lean_object* v___x_4728_; uint8_t v_isShared_4729_; uint8_t v_isSharedCheck_4733_; 
lean_dec(v_a_4721_);
lean_dec_ref(v___x_4718_);
v_a_4726_ = lean_ctor_get(v___x_4723_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v___x_4723_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4728_ = v___x_4723_;
v_isShared_4729_ = v_isSharedCheck_4733_;
goto v_resetjp_4727_;
}
else
{
lean_inc(v_a_4726_);
lean_dec(v___x_4723_);
v___x_4728_ = lean_box(0);
v_isShared_4729_ = v_isSharedCheck_4733_;
goto v_resetjp_4727_;
}
v_resetjp_4727_:
{
lean_object* v___x_4731_; 
if (v_isShared_4729_ == 0)
{
v___x_4731_ = v___x_4728_;
goto v_reusejp_4730_;
}
else
{
lean_object* v_reuseFailAlloc_4732_; 
v_reuseFailAlloc_4732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4732_, 0, v_a_4726_);
v___x_4731_ = v_reuseFailAlloc_4732_;
goto v_reusejp_4730_;
}
v_reusejp_4730_:
{
return v___x_4731_;
}
}
}
}
else
{
lean_dec_ref(v___x_4719_);
lean_dec_ref(v___x_4718_);
lean_dec(v_v_4704_);
return v___x_4720_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object* v_nExtra_4734_, lean_object* v_v_4735_, lean_object* v___x_4736_, lean_object* v___x_4737_, lean_object* v___x_4738_, lean_object* v_xs_4739_, lean_object* v_termAltBody_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_){
_start:
{
uint8_t v___x_32861__boxed_4746_; uint8_t v___x_32862__boxed_4747_; uint8_t v___x_32863__boxed_4748_; lean_object* v_res_4749_; 
v___x_32861__boxed_4746_ = lean_unbox(v___x_4736_);
v___x_32862__boxed_4747_ = lean_unbox(v___x_4737_);
v___x_32863__boxed_4748_ = lean_unbox(v___x_4738_);
v_res_4749_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(v_nExtra_4734_, v_v_4735_, v___x_32861__boxed_4746_, v___x_32862__boxed_4747_, v___x_32863__boxed_4748_, v_xs_4739_, v_termAltBody_4740_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_);
lean_dec(v___y_4744_);
lean_dec_ref(v___y_4743_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec(v_nExtra_4734_);
return v_res_4749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object* v_nExtra_4750_, size_t v_sz_4751_, size_t v_i_4752_, lean_object* v_bs_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
uint8_t v___x_4759_; 
v___x_4759_ = lean_usize_dec_lt(v_i_4752_, v_sz_4751_);
if (v___x_4759_ == 0)
{
lean_object* v___x_4760_; 
lean_dec(v_nExtra_4750_);
v___x_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4760_, 0, v_bs_4753_);
return v___x_4760_;
}
else
{
uint8_t v___x_4761_; uint8_t v___x_4762_; lean_object* v_v_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___f_4767_; lean_object* v___x_4768_; lean_object* v_bs_x27_4769_; lean_object* v___x_4770_; 
v___x_4761_ = 0;
v___x_4762_ = 1;
v_v_4763_ = lean_array_uget(v_bs_4753_, v_i_4752_);
v___x_4764_ = lean_box(v___x_4761_);
v___x_4765_ = lean_box(v___x_4759_);
v___x_4766_ = lean_box(v___x_4762_);
lean_inc(v_v_4763_);
lean_inc(v_nExtra_4750_);
v___f_4767_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4767_, 0, v_nExtra_4750_);
lean_closure_set(v___f_4767_, 1, v_v_4763_);
lean_closure_set(v___f_4767_, 2, v___x_4764_);
lean_closure_set(v___f_4767_, 3, v___x_4765_);
lean_closure_set(v___f_4767_, 4, v___x_4766_);
v___x_4768_ = lean_unsigned_to_nat(0u);
v_bs_x27_4769_ = lean_array_uset(v_bs_4753_, v_i_4752_, v___x_4768_);
v___x_4770_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_v_4763_, v___f_4767_, v___x_4761_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; size_t v___x_4772_; size_t v___x_4773_; lean_object* v___x_4774_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
lean_inc(v_a_4771_);
lean_dec_ref_known(v___x_4770_, 1);
v___x_4772_ = ((size_t)1ULL);
v___x_4773_ = lean_usize_add(v_i_4752_, v___x_4772_);
v___x_4774_ = lean_array_uset(v_bs_x27_4769_, v_i_4752_, v_a_4771_);
v_i_4752_ = v___x_4773_;
v_bs_4753_ = v___x_4774_;
goto _start;
}
else
{
lean_object* v_a_4776_; lean_object* v___x_4778_; uint8_t v_isShared_4779_; uint8_t v_isSharedCheck_4783_; 
lean_dec_ref(v_bs_x27_4769_);
lean_dec(v_nExtra_4750_);
v_a_4776_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4778_ = v___x_4770_;
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
else
{
lean_inc(v_a_4776_);
lean_dec(v___x_4770_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object* v_nExtra_4784_, lean_object* v_sz_4785_, lean_object* v_i_4786_, lean_object* v_bs_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_){
_start:
{
size_t v_sz_boxed_4793_; size_t v_i_boxed_4794_; lean_object* v_res_4795_; 
v_sz_boxed_4793_ = lean_unbox_usize(v_sz_4785_);
lean_dec(v_sz_4785_);
v_i_boxed_4794_ = lean_unbox_usize(v_i_4786_);
lean_dec(v_i_4786_);
v_res_4795_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4784_, v_sz_boxed_4793_, v_i_boxed_4794_, v_bs_4787_, v___y_4788_, v___y_4789_, v___y_4790_, v___y_4791_);
lean_dec(v___y_4791_);
lean_dec_ref(v___y_4790_);
lean_dec(v___y_4789_);
lean_dec_ref(v___y_4788_);
return v_res_4795_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4796_ = lean_box(0);
v___x_4797_ = l_Lean_Expr_sort___override(v___x_4796_);
return v___x_4797_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4798_ = lean_box(0);
v___x_4799_ = l_Lean_Level_succ___override(v___x_4798_);
return v___x_4799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object* v_nExtra_4800_, uint8_t v___x_4801_, uint8_t v___x_4802_, lean_object* v_alts_4803_, lean_object* v_toMatcherInfo_4804_, lean_object* v_matcherName_4805_, lean_object* v_params_4806_, lean_object* v_matcherLevels_4807_, lean_object* v_motiveArgs_4808_, lean_object* v_body_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_){
_start:
{
lean_object* v___x_4815_; 
lean_inc(v_nExtra_4800_);
v___x_4815_ = l_Lean_Meta_arrowDomainsN(v_nExtra_4800_, v_body_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v_a_4816_; lean_object* v___x_4817_; uint8_t v___x_4818_; lean_object* v___x_4819_; 
v_a_4816_ = lean_ctor_get(v___x_4815_, 0);
lean_inc(v_a_4816_);
lean_dec_ref_known(v___x_4815_, 1);
v___x_4817_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0);
v___x_4818_ = 1;
v___x_4819_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4808_, v___x_4817_, v___x_4801_, v___x_4802_, v___x_4801_, v___x_4802_, v___x_4818_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
if (lean_obj_tag(v___x_4819_) == 0)
{
lean_object* v_a_4820_; size_t v_sz_4821_; size_t v___x_4822_; lean_object* v___x_4823_; 
v_a_4820_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_a_4820_);
lean_dec_ref_known(v___x_4819_, 1);
v_sz_4821_ = lean_array_size(v_alts_4803_);
v___x_4822_ = ((size_t)0ULL);
v___x_4823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4800_, v_sz_4821_, v___x_4822_, v_alts_4803_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
if (lean_obj_tag(v___x_4823_) == 0)
{
lean_object* v_a_4824_; lean_object* v_matcherLevels_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v_uElimPos_x3f_4833_; 
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
lean_inc(v_a_4824_);
lean_dec_ref_known(v___x_4823_, 1);
v_uElimPos_x3f_4833_ = lean_ctor_get(v_toMatcherInfo_4804_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4833_) == 0)
{
v_matcherLevels_4826_ = v_matcherLevels_4807_;
v___y_4827_ = v___y_4812_;
v___y_4828_ = v___y_4813_;
goto v___jp_4825_;
}
else
{
lean_object* v_val_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; 
v_val_4834_ = lean_ctor_get(v_uElimPos_x3f_4833_, 0);
v___x_4835_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1);
v___x_4836_ = lean_array_set(v_matcherLevels_4807_, v_val_4834_, v___x_4835_);
v_matcherLevels_4826_ = v___x_4836_;
v___y_4827_ = v___y_4812_;
v___y_4828_ = v___y_4813_;
goto v___jp_4825_;
}
v___jp_4825_:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4829_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_4830_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4830_, 0, v_toMatcherInfo_4804_);
lean_ctor_set(v___x_4830_, 1, v_matcherName_4805_);
lean_ctor_set(v___x_4830_, 2, v_matcherLevels_4826_);
lean_ctor_set(v___x_4830_, 3, v_params_4806_);
lean_ctor_set(v___x_4830_, 4, v_a_4820_);
lean_ctor_set(v___x_4830_, 5, v_motiveArgs_4808_);
lean_ctor_set(v___x_4830_, 6, v_a_4824_);
lean_ctor_set(v___x_4830_, 7, v___x_4829_);
v___x_4831_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4830_);
v___x_4832_ = l_Lean_mkArrowN(v_a_4816_, v___x_4831_, v___y_4827_, v___y_4828_);
lean_dec(v_a_4816_);
return v___x_4832_;
}
}
else
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4844_; 
lean_dec(v_a_4820_);
lean_dec(v_a_4816_);
lean_dec_ref(v_motiveArgs_4808_);
lean_dec_ref(v_matcherLevels_4807_);
lean_dec_ref(v_params_4806_);
lean_dec(v_matcherName_4805_);
lean_dec_ref(v_toMatcherInfo_4804_);
v_a_4837_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4839_ = v___x_4823_;
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4823_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4842_; 
if (v_isShared_4840_ == 0)
{
v___x_4842_ = v___x_4839_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_a_4837_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
return v___x_4842_;
}
}
}
}
else
{
lean_dec(v_a_4816_);
lean_dec_ref(v_motiveArgs_4808_);
lean_dec_ref(v_matcherLevels_4807_);
lean_dec_ref(v_params_4806_);
lean_dec(v_matcherName_4805_);
lean_dec_ref(v_toMatcherInfo_4804_);
lean_dec_ref(v_alts_4803_);
lean_dec(v_nExtra_4800_);
return v___x_4819_;
}
}
else
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4852_; 
lean_dec_ref(v_motiveArgs_4808_);
lean_dec_ref(v_matcherLevels_4807_);
lean_dec_ref(v_params_4806_);
lean_dec(v_matcherName_4805_);
lean_dec_ref(v_toMatcherInfo_4804_);
lean_dec_ref(v_alts_4803_);
lean_dec(v_nExtra_4800_);
v_a_4845_ = lean_ctor_get(v___x_4815_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4815_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4847_ = v___x_4815_;
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4815_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4850_; 
if (v_isShared_4848_ == 0)
{
v___x_4850_ = v___x_4847_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4845_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object* v_nExtra_4853_, lean_object* v___x_4854_, lean_object* v___x_4855_, lean_object* v_alts_4856_, lean_object* v_toMatcherInfo_4857_, lean_object* v_matcherName_4858_, lean_object* v_params_4859_, lean_object* v_matcherLevels_4860_, lean_object* v_motiveArgs_4861_, lean_object* v_body_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
uint8_t v___x_32996__boxed_4868_; uint8_t v___x_32997__boxed_4869_; lean_object* v_res_4870_; 
v___x_32996__boxed_4868_ = lean_unbox(v___x_4854_);
v___x_32997__boxed_4869_ = lean_unbox(v___x_4855_);
v_res_4870_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__3(v_nExtra_4853_, v___x_32996__boxed_4868_, v___x_32997__boxed_4869_, v_alts_4856_, v_toMatcherInfo_4857_, v_matcherName_4858_, v_params_4859_, v_matcherLevels_4860_, v_motiveArgs_4861_, v_body_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
lean_dec(v___y_4866_);
lean_dec_ref(v___y_4865_);
lean_dec(v___y_4864_);
lean_dec_ref(v___y_4863_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object* v_k_4871_, lean_object* v_ys_4872_, lean_object* v_args_4873_, lean_object* v___mask_4874_, lean_object* v___bodyType_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_){
_start:
{
lean_object* v___x_4881_; 
lean_inc(v___y_4879_);
lean_inc_ref(v___y_4878_);
lean_inc(v___y_4877_);
lean_inc_ref(v___y_4876_);
v___x_4881_ = lean_apply_7(v_k_4871_, v_ys_4872_, v_args_4873_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, lean_box(0));
return v___x_4881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v_k_4882_, lean_object* v_ys_4883_, lean_object* v_args_4884_, lean_object* v___mask_4885_, lean_object* v___bodyType_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(v_k_4882_, v_ys_4883_, v_args_4884_, v___mask_4885_, v___bodyType_4886_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec_ref(v___bodyType_4886_);
lean_dec_ref(v___mask_4885_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object* v_origAltType_4893_, lean_object* v_altInfo_4894_, lean_object* v_k_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v___f_4901_; lean_object* v___x_4902_; 
v___f_4901_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4901_, 0, v_k_4895_);
v___x_4902_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_4893_, v_altInfo_4894_, v___f_4901_, v___y_4896_, v___y_4897_, v___y_4898_, v___y_4899_);
if (lean_obj_tag(v___x_4902_) == 0)
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
v_a_4903_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4902_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4902_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
v_a_4911_ = lean_ctor_get(v___x_4902_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4902_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4902_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4902_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object* v_origAltType_4919_, lean_object* v_altInfo_4920_, lean_object* v_k_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_){
_start:
{
lean_object* v_res_4927_; 
v_res_4927_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_4919_, v_altInfo_4920_, v_k_4921_, v___y_4922_, v___y_4923_, v___y_4924_, v___y_4925_);
lean_dec(v___y_4925_);
lean_dec_ref(v___y_4924_);
lean_dec(v___y_4923_);
lean_dec_ref(v___y_4922_);
return v_res_4927_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object* v___x_4928_, lean_object* v___x_4929_, lean_object* v___f_4930_, lean_object* v_fst_4931_, lean_object* v___x_4932_, lean_object* v___x_4933_, lean_object* v___x_4934_, lean_object* v___x_4935_, lean_object* v___x_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_){
_start:
{
lean_object* v___x_4942_; 
v___x_4942_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v___x_4928_, v___x_4929_, v___f_4930_, v___y_4937_, v___y_4938_, v___y_4939_, v___y_4940_);
if (lean_obj_tag(v___x_4942_) == 0)
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4957_; 
v_a_4943_ = lean_ctor_get(v___x_4942_, 0);
v_isSharedCheck_4957_ = !lean_is_exclusive(v___x_4942_);
if (v_isSharedCheck_4957_ == 0)
{
v___x_4945_ = v___x_4942_;
v_isShared_4946_ = v_isSharedCheck_4957_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v___x_4942_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4957_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4955_; 
v___x_4947_ = lean_array_push(v_fst_4931_, v_a_4943_);
v___x_4948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4932_);
lean_ctor_set(v___x_4948_, 1, v___x_4933_);
v___x_4949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4934_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___x_4950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4950_, 0, v___x_4935_);
lean_ctor_set(v___x_4950_, 1, v___x_4949_);
v___x_4951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4936_);
lean_ctor_set(v___x_4951_, 1, v___x_4950_);
v___x_4952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4947_);
lean_ctor_set(v___x_4952_, 1, v___x_4951_);
v___x_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4952_);
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 0, v___x_4953_);
v___x_4955_ = v___x_4945_;
goto v_reusejp_4954_;
}
else
{
lean_object* v_reuseFailAlloc_4956_; 
v_reuseFailAlloc_4956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4956_, 0, v___x_4953_);
v___x_4955_ = v_reuseFailAlloc_4956_;
goto v_reusejp_4954_;
}
v_reusejp_4954_:
{
return v___x_4955_;
}
}
}
else
{
lean_object* v_a_4958_; lean_object* v___x_4960_; uint8_t v_isShared_4961_; uint8_t v_isSharedCheck_4965_; 
lean_dec_ref(v___x_4936_);
lean_dec_ref(v___x_4935_);
lean_dec_ref(v___x_4934_);
lean_dec_ref(v___x_4933_);
lean_dec_ref(v___x_4932_);
lean_dec(v_fst_4931_);
v_a_4958_ = lean_ctor_get(v___x_4942_, 0);
v_isSharedCheck_4965_ = !lean_is_exclusive(v___x_4942_);
if (v_isSharedCheck_4965_ == 0)
{
v___x_4960_ = v___x_4942_;
v_isShared_4961_ = v_isSharedCheck_4965_;
goto v_resetjp_4959_;
}
else
{
lean_inc(v_a_4958_);
lean_dec(v___x_4942_);
v___x_4960_ = lean_box(0);
v_isShared_4961_ = v_isSharedCheck_4965_;
goto v_resetjp_4959_;
}
v_resetjp_4959_:
{
lean_object* v___x_4963_; 
if (v_isShared_4961_ == 0)
{
v___x_4963_ = v___x_4960_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v_a_4958_);
v___x_4963_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
return v___x_4963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object* v___x_4966_, lean_object* v___x_4967_, lean_object* v___f_4968_, lean_object* v_fst_4969_, lean_object* v___x_4970_, lean_object* v___x_4971_, lean_object* v___x_4972_, lean_object* v___x_4973_, lean_object* v___x_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(v___x_4966_, v___x_4967_, v___f_4968_, v_fst_4969_, v___x_4970_, v___x_4971_, v___x_4972_, v___x_4973_, v___x_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object* v_args_4981_, lean_object* v_ys_4982_, lean_object* v_ys2_4983_, lean_object* v_ys3_4984_, lean_object* v_onAlt_4985_, lean_object* v_a_4986_, uint8_t v___x_4987_, uint8_t v_useSplitter_4988_, lean_object* v___x_4989_, lean_object* v_ys4_4990_, lean_object* v_altType_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v_a_4998_; lean_object* v___x_5007_; lean_object* v___x_5008_; 
lean_inc_ref(v_args_4981_);
v___x_5007_ = l_Array_append___redArg(v_args_4981_, v_ys3_4984_);
v___x_5008_ = l_Lean_Meta_instantiateLambda(v___x_4989_, v___x_5007_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_);
lean_dec_ref(v___x_5007_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v___x_5008_, 1);
v_a_4998_ = v_a_5009_;
goto v___jp_4997_;
}
else
{
lean_object* v_a_5010_; uint8_t v___x_5011_; 
v_a_5010_ = lean_ctor_get(v___x_5008_, 0);
v___x_5011_ = l_Lean_Exception_isInterrupt(v_a_5010_);
if (v___x_5011_ == 0)
{
uint8_t v___x_5012_; 
lean_inc(v_a_5010_);
v___x_5012_ = l_Lean_Exception_isRuntime(v_a_5010_);
if (v___x_5012_ == 0)
{
lean_object* v___x_5013_; lean_object* v___x_5014_; 
lean_dec_ref_known(v___x_5008_, 1);
v___x_5013_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_5014_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5013_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_);
if (lean_obj_tag(v___x_5014_) == 0)
{
lean_object* v_a_5015_; 
v_a_5015_ = lean_ctor_get(v___x_5014_, 0);
lean_inc(v_a_5015_);
lean_dec_ref_known(v___x_5014_, 1);
v_a_4998_ = v_a_5015_;
goto v___jp_4997_;
}
else
{
lean_dec_ref(v_altType_4991_);
lean_dec_ref(v_ys4_4990_);
lean_dec(v_a_4986_);
lean_dec_ref(v_onAlt_4985_);
lean_dec_ref(v_ys3_4984_);
lean_dec_ref(v_ys2_4983_);
lean_dec_ref(v_ys_4982_);
lean_dec_ref(v_args_4981_);
return v___x_5014_;
}
}
else
{
lean_dec_ref(v_altType_4991_);
lean_dec_ref(v_ys4_4990_);
lean_dec(v_a_4986_);
lean_dec_ref(v_onAlt_4985_);
lean_dec_ref(v_ys3_4984_);
lean_dec_ref(v_ys2_4983_);
lean_dec_ref(v_ys_4982_);
lean_dec_ref(v_args_4981_);
return v___x_5008_;
}
}
else
{
lean_dec_ref(v_altType_4991_);
lean_dec_ref(v_ys4_4990_);
lean_dec(v_a_4986_);
lean_dec_ref(v_onAlt_4985_);
lean_dec_ref(v_ys3_4984_);
lean_dec_ref(v_ys2_4983_);
lean_dec_ref(v_ys_4982_);
lean_dec_ref(v_args_4981_);
return v___x_5008_;
}
}
v___jp_4997_:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
lean_inc_ref(v_ys4_4990_);
lean_inc_ref(v_ys3_4984_);
lean_inc_ref(v_ys2_4983_);
lean_inc_ref(v_ys_4982_);
v___x_4999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4999_, 0, v_args_4981_);
lean_ctor_set(v___x_4999_, 1, v_ys_4982_);
lean_ctor_set(v___x_4999_, 2, v_ys2_4983_);
lean_ctor_set(v___x_4999_, 3, v_ys3_4984_);
lean_ctor_set(v___x_4999_, 4, v_ys4_4990_);
lean_inc(v___y_4995_);
lean_inc_ref(v___y_4994_);
lean_inc(v___y_4993_);
lean_inc_ref(v___y_4992_);
v___x_5000_ = lean_apply_9(v_onAlt_4985_, v_a_4986_, v_altType_4991_, v___x_4999_, v_a_4998_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_, lean_box(0));
if (lean_obj_tag(v___x_5000_) == 0)
{
lean_object* v_a_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; uint8_t v___x_5005_; lean_object* v___x_5006_; 
v_a_5001_ = lean_ctor_get(v___x_5000_, 0);
lean_inc(v_a_5001_);
lean_dec_ref_known(v___x_5000_, 1);
v___x_5002_ = l_Array_append___redArg(v_ys_4982_, v_ys2_4983_);
lean_dec_ref(v_ys2_4983_);
v___x_5003_ = l_Array_append___redArg(v___x_5002_, v_ys3_4984_);
lean_dec_ref(v_ys3_4984_);
v___x_5004_ = l_Array_append___redArg(v___x_5003_, v_ys4_4990_);
lean_dec_ref(v_ys4_4990_);
v___x_5005_ = 1;
v___x_5006_ = l_Lean_Meta_mkLambdaFVars(v___x_5004_, v_a_5001_, v___x_4987_, v_useSplitter_4988_, v___x_4987_, v_useSplitter_4988_, v___x_5005_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_);
lean_dec_ref(v___x_5004_);
return v___x_5006_;
}
else
{
lean_dec_ref(v_ys4_4990_);
lean_dec_ref(v_ys3_4984_);
lean_dec_ref(v_ys2_4983_);
lean_dec_ref(v_ys_4982_);
return v___x_5000_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object* v_args_5016_, lean_object* v_ys_5017_, lean_object* v_ys2_5018_, lean_object* v_ys3_5019_, lean_object* v_onAlt_5020_, lean_object* v_a_5021_, lean_object* v___x_5022_, lean_object* v_useSplitter_5023_, lean_object* v___x_5024_, lean_object* v_ys4_5025_, lean_object* v_altType_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_){
_start:
{
uint8_t v___x_33250__boxed_5032_; uint8_t v_useSplitter_boxed_5033_; lean_object* v_res_5034_; 
v___x_33250__boxed_5032_ = lean_unbox(v___x_5022_);
v_useSplitter_boxed_5033_ = lean_unbox(v_useSplitter_5023_);
v_res_5034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(v_args_5016_, v_ys_5017_, v_ys2_5018_, v_ys3_5019_, v_onAlt_5020_, v_a_5021_, v___x_33250__boxed_5032_, v_useSplitter_boxed_5033_, v___x_5024_, v_ys4_5025_, v_altType_5026_, v___y_5027_, v___y_5028_, v___y_5029_, v___y_5030_);
lean_dec(v___y_5030_);
lean_dec_ref(v___y_5029_);
lean_dec(v___y_5028_);
lean_dec_ref(v___y_5027_);
return v_res_5034_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object* v_args_5035_, lean_object* v_ys_5036_, lean_object* v_ys2_5037_, lean_object* v_onAlt_5038_, lean_object* v_a_5039_, uint8_t v___x_5040_, uint8_t v_useSplitter_5041_, lean_object* v___x_5042_, lean_object* v_extraEqualities_5043_, lean_object* v_ys3_5044_, lean_object* v_altType_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___f_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5051_ = lean_box(v___x_5040_);
v___x_5052_ = lean_box(v_useSplitter_5041_);
v___f_5053_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_5053_, 0, v_args_5035_);
lean_closure_set(v___f_5053_, 1, v_ys_5036_);
lean_closure_set(v___f_5053_, 2, v_ys2_5037_);
lean_closure_set(v___f_5053_, 3, v_ys3_5044_);
lean_closure_set(v___f_5053_, 4, v_onAlt_5038_);
lean_closure_set(v___f_5053_, 5, v_a_5039_);
lean_closure_set(v___f_5053_, 6, v___x_5051_);
lean_closure_set(v___f_5053_, 7, v___x_5052_);
lean_closure_set(v___f_5053_, 8, v___x_5042_);
v___x_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5054_, 0, v_extraEqualities_5043_);
v___x_5055_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5045_, v___x_5054_, v___f_5053_, v___x_5040_, v___x_5040_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object* v_args_5056_, lean_object* v_ys_5057_, lean_object* v_ys2_5058_, lean_object* v_onAlt_5059_, lean_object* v_a_5060_, lean_object* v___x_5061_, lean_object* v_useSplitter_5062_, lean_object* v___x_5063_, lean_object* v_extraEqualities_5064_, lean_object* v_ys3_5065_, lean_object* v_altType_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_){
_start:
{
uint8_t v___x_33312__boxed_5072_; uint8_t v_useSplitter_boxed_5073_; lean_object* v_res_5074_; 
v___x_33312__boxed_5072_ = lean_unbox(v___x_5061_);
v_useSplitter_boxed_5073_ = lean_unbox(v_useSplitter_5062_);
v_res_5074_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(v_args_5056_, v_ys_5057_, v_ys2_5058_, v_onAlt_5059_, v_a_5060_, v___x_33312__boxed_5072_, v_useSplitter_boxed_5073_, v___x_5063_, v_extraEqualities_5064_, v_ys3_5065_, v_altType_5066_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_);
lean_dec(v___y_5070_);
lean_dec_ref(v___y_5069_);
lean_dec(v___y_5068_);
lean_dec_ref(v___y_5067_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object* v_args_5075_, lean_object* v_ys_5076_, lean_object* v_onAlt_5077_, lean_object* v_a_5078_, uint8_t v___x_5079_, uint8_t v_useSplitter_5080_, lean_object* v___x_5081_, lean_object* v_extraEqualities_5082_, lean_object* v_numDiscrEqs_5083_, lean_object* v_ys2_5084_, lean_object* v_altType_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_){
_start:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___f_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5091_ = lean_box(v___x_5079_);
v___x_5092_ = lean_box(v_useSplitter_5080_);
v___f_5093_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_5093_, 0, v_args_5075_);
lean_closure_set(v___f_5093_, 1, v_ys_5076_);
lean_closure_set(v___f_5093_, 2, v_ys2_5084_);
lean_closure_set(v___f_5093_, 3, v_onAlt_5077_);
lean_closure_set(v___f_5093_, 4, v_a_5078_);
lean_closure_set(v___f_5093_, 5, v___x_5091_);
lean_closure_set(v___f_5093_, 6, v___x_5092_);
lean_closure_set(v___f_5093_, 7, v___x_5081_);
lean_closure_set(v___f_5093_, 8, v_extraEqualities_5082_);
v___x_5094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5094_, 0, v_numDiscrEqs_5083_);
v___x_5095_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5085_, v___x_5094_, v___f_5093_, v___x_5079_, v___x_5079_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object* v_args_5096_, lean_object* v_ys_5097_, lean_object* v_onAlt_5098_, lean_object* v_a_5099_, lean_object* v___x_5100_, lean_object* v_useSplitter_5101_, lean_object* v___x_5102_, lean_object* v_extraEqualities_5103_, lean_object* v_numDiscrEqs_5104_, lean_object* v_ys2_5105_, lean_object* v_altType_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
uint8_t v___x_33343__boxed_5112_; uint8_t v_useSplitter_boxed_5113_; lean_object* v_res_5114_; 
v___x_33343__boxed_5112_ = lean_unbox(v___x_5100_);
v_useSplitter_boxed_5113_ = lean_unbox(v_useSplitter_5101_);
v_res_5114_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(v_args_5096_, v_ys_5097_, v_onAlt_5098_, v_a_5099_, v___x_33343__boxed_5112_, v_useSplitter_boxed_5113_, v___x_5102_, v_extraEqualities_5103_, v_numDiscrEqs_5104_, v_ys2_5105_, v_altType_5106_, v___y_5107_, v___y_5108_, v___y_5109_, v___y_5110_);
lean_dec(v___y_5110_);
lean_dec_ref(v___y_5109_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
return v_res_5114_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0(void){
_start:
{
lean_object* v___x_5115_; 
v___x_5115_ = l_instMonadEIO___redArg();
return v___x_5115_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object* v_msg_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_){
_start:
{
lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v_toApplicative_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5189_; 
v___x_5126_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5127_ = l_StateRefT_x27_instMonad___redArg(v___x_5126_);
v_toApplicative_5128_ = lean_ctor_get(v___x_5127_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v___x_5127_);
if (v_isSharedCheck_5189_ == 0)
{
lean_object* v_unused_5190_; 
v_unused_5190_ = lean_ctor_get(v___x_5127_, 1);
lean_dec(v_unused_5190_);
v___x_5130_ = v___x_5127_;
v_isShared_5131_ = v_isSharedCheck_5189_;
goto v_resetjp_5129_;
}
else
{
lean_inc(v_toApplicative_5128_);
lean_dec(v___x_5127_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5189_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v_toFunctor_5132_; lean_object* v_toSeq_5133_; lean_object* v_toSeqLeft_5134_; lean_object* v_toSeqRight_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5187_; 
v_toFunctor_5132_ = lean_ctor_get(v_toApplicative_5128_, 0);
v_toSeq_5133_ = lean_ctor_get(v_toApplicative_5128_, 2);
v_toSeqLeft_5134_ = lean_ctor_get(v_toApplicative_5128_, 3);
v_toSeqRight_5135_ = lean_ctor_get(v_toApplicative_5128_, 4);
v_isSharedCheck_5187_ = !lean_is_exclusive(v_toApplicative_5128_);
if (v_isSharedCheck_5187_ == 0)
{
lean_object* v_unused_5188_; 
v_unused_5188_ = lean_ctor_get(v_toApplicative_5128_, 1);
lean_dec(v_unused_5188_);
v___x_5137_ = v_toApplicative_5128_;
v_isShared_5138_ = v_isSharedCheck_5187_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_toSeqRight_5135_);
lean_inc(v_toSeqLeft_5134_);
lean_inc(v_toSeq_5133_);
lean_inc(v_toFunctor_5132_);
lean_dec(v_toApplicative_5128_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5187_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___f_5139_; lean_object* v___f_5140_; lean_object* v___f_5141_; lean_object* v___f_5142_; lean_object* v___x_5143_; lean_object* v___f_5144_; lean_object* v___f_5145_; lean_object* v___f_5146_; lean_object* v___x_5148_; 
v___f_5139_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5140_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5132_);
v___f_5141_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5141_, 0, v_toFunctor_5132_);
v___f_5142_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5142_, 0, v_toFunctor_5132_);
v___x_5143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5143_, 0, v___f_5141_);
lean_ctor_set(v___x_5143_, 1, v___f_5142_);
v___f_5144_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5144_, 0, v_toSeqRight_5135_);
v___f_5145_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5145_, 0, v_toSeqLeft_5134_);
v___f_5146_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5146_, 0, v_toSeq_5133_);
if (v_isShared_5138_ == 0)
{
lean_ctor_set(v___x_5137_, 4, v___f_5144_);
lean_ctor_set(v___x_5137_, 3, v___f_5145_);
lean_ctor_set(v___x_5137_, 2, v___f_5146_);
lean_ctor_set(v___x_5137_, 1, v___f_5139_);
lean_ctor_set(v___x_5137_, 0, v___x_5143_);
v___x_5148_ = v___x_5137_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5186_; 
v_reuseFailAlloc_5186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5186_, 0, v___x_5143_);
lean_ctor_set(v_reuseFailAlloc_5186_, 1, v___f_5139_);
lean_ctor_set(v_reuseFailAlloc_5186_, 2, v___f_5146_);
lean_ctor_set(v_reuseFailAlloc_5186_, 3, v___f_5145_);
lean_ctor_set(v_reuseFailAlloc_5186_, 4, v___f_5144_);
v___x_5148_ = v_reuseFailAlloc_5186_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
lean_object* v___x_5150_; 
if (v_isShared_5131_ == 0)
{
lean_ctor_set(v___x_5130_, 1, v___f_5140_);
lean_ctor_set(v___x_5130_, 0, v___x_5148_);
v___x_5150_ = v___x_5130_;
goto v_reusejp_5149_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v___x_5148_);
lean_ctor_set(v_reuseFailAlloc_5185_, 1, v___f_5140_);
v___x_5150_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5149_;
}
v_reusejp_5149_:
{
lean_object* v___x_5151_; lean_object* v_toApplicative_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5183_; 
v___x_5151_ = l_StateRefT_x27_instMonad___redArg(v___x_5150_);
v_toApplicative_5152_ = lean_ctor_get(v___x_5151_, 0);
v_isSharedCheck_5183_ = !lean_is_exclusive(v___x_5151_);
if (v_isSharedCheck_5183_ == 0)
{
lean_object* v_unused_5184_; 
v_unused_5184_ = lean_ctor_get(v___x_5151_, 1);
lean_dec(v_unused_5184_);
v___x_5154_ = v___x_5151_;
v_isShared_5155_ = v_isSharedCheck_5183_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_toApplicative_5152_);
lean_dec(v___x_5151_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5183_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v_toFunctor_5156_; lean_object* v_toSeq_5157_; lean_object* v_toSeqLeft_5158_; lean_object* v_toSeqRight_5159_; lean_object* v___x_5161_; uint8_t v_isShared_5162_; uint8_t v_isSharedCheck_5181_; 
v_toFunctor_5156_ = lean_ctor_get(v_toApplicative_5152_, 0);
v_toSeq_5157_ = lean_ctor_get(v_toApplicative_5152_, 2);
v_toSeqLeft_5158_ = lean_ctor_get(v_toApplicative_5152_, 3);
v_toSeqRight_5159_ = lean_ctor_get(v_toApplicative_5152_, 4);
v_isSharedCheck_5181_ = !lean_is_exclusive(v_toApplicative_5152_);
if (v_isSharedCheck_5181_ == 0)
{
lean_object* v_unused_5182_; 
v_unused_5182_ = lean_ctor_get(v_toApplicative_5152_, 1);
lean_dec(v_unused_5182_);
v___x_5161_ = v_toApplicative_5152_;
v_isShared_5162_ = v_isSharedCheck_5181_;
goto v_resetjp_5160_;
}
else
{
lean_inc(v_toSeqRight_5159_);
lean_inc(v_toSeqLeft_5158_);
lean_inc(v_toSeq_5157_);
lean_inc(v_toFunctor_5156_);
lean_dec(v_toApplicative_5152_);
v___x_5161_ = lean_box(0);
v_isShared_5162_ = v_isSharedCheck_5181_;
goto v_resetjp_5160_;
}
v_resetjp_5160_:
{
lean_object* v___f_5163_; lean_object* v___f_5164_; lean_object* v___f_5165_; lean_object* v___f_5166_; lean_object* v___x_5167_; lean_object* v___f_5168_; lean_object* v___f_5169_; lean_object* v___f_5170_; lean_object* v___x_5172_; 
v___f_5163_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5164_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5156_);
v___f_5165_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5165_, 0, v_toFunctor_5156_);
v___f_5166_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5166_, 0, v_toFunctor_5156_);
v___x_5167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5167_, 0, v___f_5165_);
lean_ctor_set(v___x_5167_, 1, v___f_5166_);
v___f_5168_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5168_, 0, v_toSeqRight_5159_);
v___f_5169_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5169_, 0, v_toSeqLeft_5158_);
v___f_5170_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5170_, 0, v_toSeq_5157_);
if (v_isShared_5162_ == 0)
{
lean_ctor_set(v___x_5161_, 4, v___f_5168_);
lean_ctor_set(v___x_5161_, 3, v___f_5169_);
lean_ctor_set(v___x_5161_, 2, v___f_5170_);
lean_ctor_set(v___x_5161_, 1, v___f_5163_);
lean_ctor_set(v___x_5161_, 0, v___x_5167_);
v___x_5172_ = v___x_5161_;
goto v_reusejp_5171_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v___x_5167_);
lean_ctor_set(v_reuseFailAlloc_5180_, 1, v___f_5163_);
lean_ctor_set(v_reuseFailAlloc_5180_, 2, v___f_5170_);
lean_ctor_set(v_reuseFailAlloc_5180_, 3, v___f_5169_);
lean_ctor_set(v_reuseFailAlloc_5180_, 4, v___f_5168_);
v___x_5172_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5171_;
}
v_reusejp_5171_:
{
lean_object* v___x_5174_; 
if (v_isShared_5155_ == 0)
{
lean_ctor_set(v___x_5154_, 1, v___f_5164_);
lean_ctor_set(v___x_5154_, 0, v___x_5172_);
v___x_5174_ = v___x_5154_;
goto v_reusejp_5173_;
}
else
{
lean_object* v_reuseFailAlloc_5179_; 
v_reuseFailAlloc_5179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5179_, 0, v___x_5172_);
lean_ctor_set(v_reuseFailAlloc_5179_, 1, v___f_5164_);
v___x_5174_ = v_reuseFailAlloc_5179_;
goto v_reusejp_5173_;
}
v_reusejp_5173_:
{
lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_27300__overap_5177_; lean_object* v___x_5178_; 
v___x_5175_ = l_Lean_instInhabitedExpr;
v___x_5176_ = l_instInhabitedOfMonad___redArg(v___x_5174_, v___x_5175_);
v___x_27300__overap_5177_ = lean_panic_fn_borrowed(v___x_5176_, v_msg_5120_);
lean_dec(v___x_5176_);
lean_inc(v___y_5124_);
lean_inc_ref(v___y_5123_);
lean_inc(v___y_5122_);
lean_inc_ref(v___y_5121_);
v___x_5178_ = lean_apply_5(v___x_27300__overap_5177_, v___y_5121_, v___y_5122_, v___y_5123_, v___y_5124_, lean_box(0));
return v___x_5178_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object* v_msg_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v_msg_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
lean_dec(v___y_5193_);
lean_dec_ref(v___y_5192_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object* v___x_5198_, lean_object* v_onAlt_5199_, lean_object* v_a_5200_, uint8_t v___x_5201_, uint8_t v_useSplitter_5202_, lean_object* v___x_5203_, lean_object* v_extraEqualities_5204_, lean_object* v_numDiscrEqs_5205_, lean_object* v___x_5206_, uint8_t v_hasUnitThunk_5207_, lean_object* v___x_5208_, lean_object* v_ys_5209_, lean_object* v_args_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_){
_start:
{
lean_object* v_numFields_5216_; lean_object* v_numOverlaps_5217_; uint8_t v_hasUnitThunk_5218_; lean_object* v___x_5219_; uint8_t v___x_5220_; 
v_numFields_5216_ = lean_ctor_get(v___x_5198_, 0);
v_numOverlaps_5217_ = lean_ctor_get(v___x_5198_, 1);
v_hasUnitThunk_5218_ = lean_ctor_get_uint8(v___x_5198_, sizeof(void*)*2);
v___x_5219_ = lean_array_get_size(v_ys_5209_);
v___x_5220_ = lean_nat_dec_eq(v___x_5219_, v_numFields_5216_);
if (v___x_5220_ == 0)
{
lean_object* v___x_5221_; lean_object* v___x_5222_; 
lean_dec_ref(v_args_5210_);
lean_dec_ref(v_ys_5209_);
lean_dec_ref(v___x_5206_);
lean_dec(v_numDiscrEqs_5205_);
lean_dec(v_extraEqualities_5204_);
lean_dec_ref(v___x_5203_);
lean_dec(v_a_5200_);
lean_dec_ref(v_onAlt_5199_);
v___x_5221_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_5222_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v___x_5221_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
return v___x_5222_;
}
else
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___f_5225_; lean_object* v_altType_5227_; lean_object* v___y_5228_; lean_object* v___y_5229_; lean_object* v___y_5230_; lean_object* v___y_5231_; lean_object* v___x_5241_; 
v___x_5223_ = lean_box(v___x_5201_);
v___x_5224_ = lean_box(v_useSplitter_5202_);
lean_inc_ref(v_ys_5209_);
v___f_5225_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_5225_, 0, v_args_5210_);
lean_closure_set(v___f_5225_, 1, v_ys_5209_);
lean_closure_set(v___f_5225_, 2, v_onAlt_5199_);
lean_closure_set(v___f_5225_, 3, v_a_5200_);
lean_closure_set(v___f_5225_, 4, v___x_5223_);
lean_closure_set(v___f_5225_, 5, v___x_5224_);
lean_closure_set(v___f_5225_, 6, v___x_5203_);
lean_closure_set(v___f_5225_, 7, v_extraEqualities_5204_);
lean_closure_set(v___f_5225_, 8, v_numDiscrEqs_5205_);
v___x_5241_ = l_Lean_Meta_instantiateForall(v___x_5206_, v_ys_5209_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
lean_dec_ref(v_ys_5209_);
if (lean_obj_tag(v___x_5241_) == 0)
{
if (v_hasUnitThunk_5207_ == 0)
{
lean_object* v_a_5242_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
lean_inc(v_a_5242_);
lean_dec_ref_known(v___x_5241_, 1);
v_altType_5227_ = v_a_5242_;
v___y_5228_ = v___y_5211_;
v___y_5229_ = v___y_5212_;
v___y_5230_ = v___y_5213_;
v___y_5231_ = v___y_5214_;
goto v___jp_5226_;
}
else
{
lean_object* v_a_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v_a_5243_ = lean_ctor_get(v___x_5241_, 0);
lean_inc(v_a_5243_);
lean_dec_ref_known(v___x_5241_, 1);
v___x_5244_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_5245_ = lean_mk_empty_array_with_capacity(v___x_5208_);
v___x_5246_ = lean_array_push(v___x_5245_, v___x_5244_);
v___x_5247_ = l_Lean_Meta_instantiateForall(v_a_5243_, v___x_5246_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
lean_dec_ref(v___x_5246_);
if (lean_obj_tag(v___x_5247_) == 0)
{
lean_object* v_a_5248_; 
v_a_5248_ = lean_ctor_get(v___x_5247_, 0);
lean_inc(v_a_5248_);
lean_dec_ref_known(v___x_5247_, 1);
v_altType_5227_ = v_a_5248_;
v___y_5228_ = v___y_5211_;
v___y_5229_ = v___y_5212_;
v___y_5230_ = v___y_5213_;
v___y_5231_ = v___y_5214_;
goto v___jp_5226_;
}
else
{
lean_dec_ref(v___f_5225_);
return v___x_5247_;
}
}
}
else
{
lean_dec_ref(v___f_5225_);
return v___x_5241_;
}
v___jp_5226_:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; 
lean_inc(v_numOverlaps_5217_);
v___x_5232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5232_, 0, v_numOverlaps_5217_);
v___x_5233_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5227_, v___x_5232_, v___f_5225_, v___x_5201_, v___x_5201_, v___y_5228_, v___y_5229_, v___y_5230_, v___y_5231_);
if (lean_obj_tag(v___x_5233_) == 0)
{
if (v_hasUnitThunk_5218_ == 0)
{
return v___x_5233_;
}
else
{
lean_object* v_a_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; 
v_a_5234_ = lean_ctor_get(v___x_5233_, 0);
lean_inc(v_a_5234_);
lean_dec_ref_known(v___x_5233_, 1);
v___x_5235_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_5236_ = lean_unsigned_to_nat(2u);
v___x_5237_ = lean_mk_empty_array_with_capacity(v___x_5236_);
lean_dec_ref(v___x_5237_);
v___x_5238_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_5239_ = lean_array_push(v___x_5238_, v_a_5234_);
v___x_5240_ = l_Lean_Meta_mkAppM(v___x_5235_, v___x_5239_, v___y_5228_, v___y_5229_, v___y_5230_, v___y_5231_);
return v___x_5240_;
}
}
else
{
return v___x_5233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_5249_ = _args[0];
lean_object* v_onAlt_5250_ = _args[1];
lean_object* v_a_5251_ = _args[2];
lean_object* v___x_5252_ = _args[3];
lean_object* v_useSplitter_5253_ = _args[4];
lean_object* v___x_5254_ = _args[5];
lean_object* v_extraEqualities_5255_ = _args[6];
lean_object* v_numDiscrEqs_5256_ = _args[7];
lean_object* v___x_5257_ = _args[8];
lean_object* v_hasUnitThunk_5258_ = _args[9];
lean_object* v___x_5259_ = _args[10];
lean_object* v_ys_5260_ = _args[11];
lean_object* v_args_5261_ = _args[12];
lean_object* v___y_5262_ = _args[13];
lean_object* v___y_5263_ = _args[14];
lean_object* v___y_5264_ = _args[15];
lean_object* v___y_5265_ = _args[16];
lean_object* v___y_5266_ = _args[17];
_start:
{
uint8_t v___x_33545__boxed_5267_; uint8_t v_useSplitter_boxed_5268_; uint8_t v_hasUnitThunk_boxed_5269_; lean_object* v_res_5270_; 
v___x_33545__boxed_5267_ = lean_unbox(v___x_5252_);
v_useSplitter_boxed_5268_ = lean_unbox(v_useSplitter_5253_);
v_hasUnitThunk_boxed_5269_ = lean_unbox(v_hasUnitThunk_5258_);
v_res_5270_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(v___x_5249_, v_onAlt_5250_, v_a_5251_, v___x_33545__boxed_5267_, v_useSplitter_boxed_5268_, v___x_5254_, v_extraEqualities_5255_, v_numDiscrEqs_5256_, v___x_5257_, v_hasUnitThunk_boxed_5269_, v___x_5259_, v_ys_5260_, v_args_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___x_5259_);
lean_dec_ref(v___x_5249_);
return v_res_5270_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object* v_msg_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_){
_start:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v_toApplicative_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5340_; 
v___x_5277_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5278_ = l_StateRefT_x27_instMonad___redArg(v___x_5277_);
v_toApplicative_5279_ = lean_ctor_get(v___x_5278_, 0);
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5278_);
if (v_isSharedCheck_5340_ == 0)
{
lean_object* v_unused_5341_; 
v_unused_5341_ = lean_ctor_get(v___x_5278_, 1);
lean_dec(v_unused_5341_);
v___x_5281_ = v___x_5278_;
v_isShared_5282_ = v_isSharedCheck_5340_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_toApplicative_5279_);
lean_dec(v___x_5278_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5340_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v_toFunctor_5283_; lean_object* v_toSeq_5284_; lean_object* v_toSeqLeft_5285_; lean_object* v_toSeqRight_5286_; lean_object* v___x_5288_; uint8_t v_isShared_5289_; uint8_t v_isSharedCheck_5338_; 
v_toFunctor_5283_ = lean_ctor_get(v_toApplicative_5279_, 0);
v_toSeq_5284_ = lean_ctor_get(v_toApplicative_5279_, 2);
v_toSeqLeft_5285_ = lean_ctor_get(v_toApplicative_5279_, 3);
v_toSeqRight_5286_ = lean_ctor_get(v_toApplicative_5279_, 4);
v_isSharedCheck_5338_ = !lean_is_exclusive(v_toApplicative_5279_);
if (v_isSharedCheck_5338_ == 0)
{
lean_object* v_unused_5339_; 
v_unused_5339_ = lean_ctor_get(v_toApplicative_5279_, 1);
lean_dec(v_unused_5339_);
v___x_5288_ = v_toApplicative_5279_;
v_isShared_5289_ = v_isSharedCheck_5338_;
goto v_resetjp_5287_;
}
else
{
lean_inc(v_toSeqRight_5286_);
lean_inc(v_toSeqLeft_5285_);
lean_inc(v_toSeq_5284_);
lean_inc(v_toFunctor_5283_);
lean_dec(v_toApplicative_5279_);
v___x_5288_ = lean_box(0);
v_isShared_5289_ = v_isSharedCheck_5338_;
goto v_resetjp_5287_;
}
v_resetjp_5287_:
{
lean_object* v___f_5290_; lean_object* v___f_5291_; lean_object* v___f_5292_; lean_object* v___f_5293_; lean_object* v___x_5294_; lean_object* v___f_5295_; lean_object* v___f_5296_; lean_object* v___f_5297_; lean_object* v___x_5299_; 
v___f_5290_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5291_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5283_);
v___f_5292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5292_, 0, v_toFunctor_5283_);
v___f_5293_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5293_, 0, v_toFunctor_5283_);
v___x_5294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5294_, 0, v___f_5292_);
lean_ctor_set(v___x_5294_, 1, v___f_5293_);
v___f_5295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5295_, 0, v_toSeqRight_5286_);
v___f_5296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5296_, 0, v_toSeqLeft_5285_);
v___f_5297_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5297_, 0, v_toSeq_5284_);
if (v_isShared_5289_ == 0)
{
lean_ctor_set(v___x_5288_, 4, v___f_5295_);
lean_ctor_set(v___x_5288_, 3, v___f_5296_);
lean_ctor_set(v___x_5288_, 2, v___f_5297_);
lean_ctor_set(v___x_5288_, 1, v___f_5290_);
lean_ctor_set(v___x_5288_, 0, v___x_5294_);
v___x_5299_ = v___x_5288_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v___x_5294_);
lean_ctor_set(v_reuseFailAlloc_5337_, 1, v___f_5290_);
lean_ctor_set(v_reuseFailAlloc_5337_, 2, v___f_5297_);
lean_ctor_set(v_reuseFailAlloc_5337_, 3, v___f_5296_);
lean_ctor_set(v_reuseFailAlloc_5337_, 4, v___f_5295_);
v___x_5299_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
lean_object* v___x_5301_; 
if (v_isShared_5282_ == 0)
{
lean_ctor_set(v___x_5281_, 1, v___f_5291_);
lean_ctor_set(v___x_5281_, 0, v___x_5299_);
v___x_5301_ = v___x_5281_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5336_; 
v_reuseFailAlloc_5336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5336_, 0, v___x_5299_);
lean_ctor_set(v_reuseFailAlloc_5336_, 1, v___f_5291_);
v___x_5301_ = v_reuseFailAlloc_5336_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
lean_object* v___x_5302_; lean_object* v_toApplicative_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5334_; 
v___x_5302_ = l_StateRefT_x27_instMonad___redArg(v___x_5301_);
v_toApplicative_5303_ = lean_ctor_get(v___x_5302_, 0);
v_isSharedCheck_5334_ = !lean_is_exclusive(v___x_5302_);
if (v_isSharedCheck_5334_ == 0)
{
lean_object* v_unused_5335_; 
v_unused_5335_ = lean_ctor_get(v___x_5302_, 1);
lean_dec(v_unused_5335_);
v___x_5305_ = v___x_5302_;
v_isShared_5306_ = v_isSharedCheck_5334_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_toApplicative_5303_);
lean_dec(v___x_5302_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5334_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v_toFunctor_5307_; lean_object* v_toSeq_5308_; lean_object* v_toSeqLeft_5309_; lean_object* v_toSeqRight_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5332_; 
v_toFunctor_5307_ = lean_ctor_get(v_toApplicative_5303_, 0);
v_toSeq_5308_ = lean_ctor_get(v_toApplicative_5303_, 2);
v_toSeqLeft_5309_ = lean_ctor_get(v_toApplicative_5303_, 3);
v_toSeqRight_5310_ = lean_ctor_get(v_toApplicative_5303_, 4);
v_isSharedCheck_5332_ = !lean_is_exclusive(v_toApplicative_5303_);
if (v_isSharedCheck_5332_ == 0)
{
lean_object* v_unused_5333_; 
v_unused_5333_ = lean_ctor_get(v_toApplicative_5303_, 1);
lean_dec(v_unused_5333_);
v___x_5312_ = v_toApplicative_5303_;
v_isShared_5313_ = v_isSharedCheck_5332_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_toSeqRight_5310_);
lean_inc(v_toSeqLeft_5309_);
lean_inc(v_toSeq_5308_);
lean_inc(v_toFunctor_5307_);
lean_dec(v_toApplicative_5303_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5332_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v___f_5314_; lean_object* v___f_5315_; lean_object* v___f_5316_; lean_object* v___f_5317_; lean_object* v___x_5318_; lean_object* v___f_5319_; lean_object* v___f_5320_; lean_object* v___f_5321_; lean_object* v___x_5323_; 
v___f_5314_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5315_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5307_);
v___f_5316_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5316_, 0, v_toFunctor_5307_);
v___f_5317_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5317_, 0, v_toFunctor_5307_);
v___x_5318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5318_, 0, v___f_5316_);
lean_ctor_set(v___x_5318_, 1, v___f_5317_);
v___f_5319_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5319_, 0, v_toSeqRight_5310_);
v___f_5320_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5320_, 0, v_toSeqLeft_5309_);
v___f_5321_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5321_, 0, v_toSeq_5308_);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 4, v___f_5319_);
lean_ctor_set(v___x_5312_, 3, v___f_5320_);
lean_ctor_set(v___x_5312_, 2, v___f_5321_);
lean_ctor_set(v___x_5312_, 1, v___f_5314_);
lean_ctor_set(v___x_5312_, 0, v___x_5318_);
v___x_5323_ = v___x_5312_;
goto v_reusejp_5322_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v___x_5318_);
lean_ctor_set(v_reuseFailAlloc_5331_, 1, v___f_5314_);
lean_ctor_set(v_reuseFailAlloc_5331_, 2, v___f_5321_);
lean_ctor_set(v_reuseFailAlloc_5331_, 3, v___f_5320_);
lean_ctor_set(v_reuseFailAlloc_5331_, 4, v___f_5319_);
v___x_5323_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5322_;
}
v_reusejp_5322_:
{
lean_object* v___x_5325_; 
if (v_isShared_5306_ == 0)
{
lean_ctor_set(v___x_5305_, 1, v___f_5315_);
lean_ctor_set(v___x_5305_, 0, v___x_5323_);
v___x_5325_ = v___x_5305_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5330_; 
v_reuseFailAlloc_5330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5330_, 0, v___x_5323_);
lean_ctor_set(v_reuseFailAlloc_5330_, 1, v___f_5315_);
v___x_5325_ = v_reuseFailAlloc_5330_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_27320__overap_5328_; lean_object* v___x_5329_; 
v___x_5326_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
v___x_5327_ = l_instInhabitedOfMonad___redArg(v___x_5325_, v___x_5326_);
v___x_27320__overap_5328_ = lean_panic_fn_borrowed(v___x_5327_, v_msg_5271_);
lean_dec(v___x_5327_);
lean_inc(v___y_5275_);
lean_inc_ref(v___y_5274_);
lean_inc(v___y_5273_);
lean_inc_ref(v___y_5272_);
v___x_5329_ = lean_apply_5(v___x_27320__overap_5328_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_, lean_box(0));
return v___x_5329_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object* v_msg_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_){
_start:
{
lean_object* v_res_5348_; 
v_res_5348_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v_msg_5342_, v___y_5343_, v___y_5344_, v___y_5345_, v___y_5346_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
return v_res_5348_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object* v___x_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_){
_start:
{
lean_object* v___x_5355_; 
v___x_5355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5355_, 0, v___x_5349_);
return v___x_5355_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___x_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(v___x_5356_, v___y_5357_, v___y_5358_, v___y_5359_, v___y_5360_);
lean_dec(v___y_5360_);
lean_dec_ref(v___y_5359_);
lean_dec(v___y_5358_);
lean_dec_ref(v___y_5357_);
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object* v_upperBound_5363_, lean_object* v_onAlt_5364_, uint8_t v_useSplitter_5365_, lean_object* v_extraEqualities_5366_, lean_object* v_numDiscrEqs_5367_, lean_object* v_a_5368_, lean_object* v_b_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_){
_start:
{
lean_object* v___y_5376_; uint8_t v___x_5399_; 
v___x_5399_ = lean_nat_dec_lt(v_a_5368_, v_upperBound_5363_);
if (v___x_5399_ == 0)
{
lean_object* v___x_5400_; 
lean_dec(v_a_5368_);
lean_dec(v_numDiscrEqs_5367_);
lean_dec(v_extraEqualities_5366_);
lean_dec_ref(v_onAlt_5364_);
v___x_5400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5400_, 0, v_b_5369_);
return v___x_5400_;
}
else
{
lean_object* v_snd_5401_; lean_object* v_snd_5402_; lean_object* v_snd_5403_; lean_object* v_snd_5404_; lean_object* v_snd_5405_; lean_object* v_fst_5406_; lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5612_; 
v_snd_5401_ = lean_ctor_get(v_b_5369_, 1);
lean_inc(v_snd_5401_);
v_snd_5402_ = lean_ctor_get(v_snd_5401_, 1);
lean_inc(v_snd_5402_);
v_snd_5403_ = lean_ctor_get(v_snd_5402_, 1);
lean_inc(v_snd_5403_);
v_snd_5404_ = lean_ctor_get(v_snd_5403_, 1);
lean_inc(v_snd_5404_);
v_snd_5405_ = lean_ctor_get(v_snd_5404_, 1);
lean_inc(v_snd_5405_);
v_fst_5406_ = lean_ctor_get(v_b_5369_, 0);
v_isSharedCheck_5612_ = !lean_is_exclusive(v_b_5369_);
if (v_isSharedCheck_5612_ == 0)
{
lean_object* v_unused_5613_; 
v_unused_5613_ = lean_ctor_get(v_b_5369_, 1);
lean_dec(v_unused_5613_);
v___x_5408_ = v_b_5369_;
v_isShared_5409_ = v_isSharedCheck_5612_;
goto v_resetjp_5407_;
}
else
{
lean_inc(v_fst_5406_);
lean_dec(v_b_5369_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5612_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v_fst_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5610_; 
v_fst_5410_ = lean_ctor_get(v_snd_5401_, 0);
v_isSharedCheck_5610_ = !lean_is_exclusive(v_snd_5401_);
if (v_isSharedCheck_5610_ == 0)
{
lean_object* v_unused_5611_; 
v_unused_5611_ = lean_ctor_get(v_snd_5401_, 1);
lean_dec(v_unused_5611_);
v___x_5412_ = v_snd_5401_;
v_isShared_5413_ = v_isSharedCheck_5610_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_fst_5410_);
lean_dec(v_snd_5401_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5610_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v_fst_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5608_; 
v_fst_5414_ = lean_ctor_get(v_snd_5402_, 0);
v_isSharedCheck_5608_ = !lean_is_exclusive(v_snd_5402_);
if (v_isSharedCheck_5608_ == 0)
{
lean_object* v_unused_5609_; 
v_unused_5609_ = lean_ctor_get(v_snd_5402_, 1);
lean_dec(v_unused_5609_);
v___x_5416_ = v_snd_5402_;
v_isShared_5417_ = v_isSharedCheck_5608_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_fst_5414_);
lean_dec(v_snd_5402_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5608_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v_fst_5418_; lean_object* v___x_5420_; uint8_t v_isShared_5421_; uint8_t v_isSharedCheck_5606_; 
v_fst_5418_ = lean_ctor_get(v_snd_5403_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v_snd_5403_);
if (v_isSharedCheck_5606_ == 0)
{
lean_object* v_unused_5607_; 
v_unused_5607_ = lean_ctor_get(v_snd_5403_, 1);
lean_dec(v_unused_5607_);
v___x_5420_ = v_snd_5403_;
v_isShared_5421_ = v_isSharedCheck_5606_;
goto v_resetjp_5419_;
}
else
{
lean_inc(v_fst_5418_);
lean_dec(v_snd_5403_);
v___x_5420_ = lean_box(0);
v_isShared_5421_ = v_isSharedCheck_5606_;
goto v_resetjp_5419_;
}
v_resetjp_5419_:
{
lean_object* v_fst_5422_; lean_object* v___x_5424_; uint8_t v_isShared_5425_; uint8_t v_isSharedCheck_5604_; 
v_fst_5422_ = lean_ctor_get(v_snd_5404_, 0);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_snd_5404_);
if (v_isSharedCheck_5604_ == 0)
{
lean_object* v_unused_5605_; 
v_unused_5605_ = lean_ctor_get(v_snd_5404_, 1);
lean_dec(v_unused_5605_);
v___x_5424_ = v_snd_5404_;
v_isShared_5425_ = v_isSharedCheck_5604_;
goto v_resetjp_5423_;
}
else
{
lean_inc(v_fst_5422_);
lean_dec(v_snd_5404_);
v___x_5424_ = lean_box(0);
v_isShared_5425_ = v_isSharedCheck_5604_;
goto v_resetjp_5423_;
}
v_resetjp_5423_:
{
lean_object* v_array_5426_; lean_object* v_start_5427_; lean_object* v_stop_5428_; uint8_t v___x_5429_; 
v_array_5426_ = lean_ctor_get(v_snd_5405_, 0);
v_start_5427_ = lean_ctor_get(v_snd_5405_, 1);
v_stop_5428_ = lean_ctor_get(v_snd_5405_, 2);
v___x_5429_ = lean_nat_dec_lt(v_start_5427_, v_stop_5428_);
if (v___x_5429_ == 0)
{
lean_object* v___x_5431_; 
if (v_isShared_5425_ == 0)
{
v___x_5431_ = v___x_5424_;
goto v_reusejp_5430_;
}
else
{
lean_object* v_reuseFailAlloc_5446_; 
v_reuseFailAlloc_5446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5446_, 0, v_fst_5422_);
lean_ctor_set(v_reuseFailAlloc_5446_, 1, v_snd_5405_);
v___x_5431_ = v_reuseFailAlloc_5446_;
goto v_reusejp_5430_;
}
v_reusejp_5430_:
{
lean_object* v___x_5433_; 
if (v_isShared_5421_ == 0)
{
lean_ctor_set(v___x_5420_, 1, v___x_5431_);
v___x_5433_ = v___x_5420_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v_fst_5418_);
lean_ctor_set(v_reuseFailAlloc_5445_, 1, v___x_5431_);
v___x_5433_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
lean_object* v___x_5435_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 1, v___x_5433_);
v___x_5435_ = v___x_5416_;
goto v_reusejp_5434_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v_fst_5414_);
lean_ctor_set(v_reuseFailAlloc_5444_, 1, v___x_5433_);
v___x_5435_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5434_;
}
v_reusejp_5434_:
{
lean_object* v___x_5437_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5435_);
v___x_5437_ = v___x_5412_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_fst_5410_);
lean_ctor_set(v_reuseFailAlloc_5443_, 1, v___x_5435_);
v___x_5437_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
lean_object* v___x_5439_; 
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 1, v___x_5437_);
v___x_5439_ = v___x_5408_;
goto v_reusejp_5438_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v_fst_5406_);
lean_ctor_set(v_reuseFailAlloc_5442_, 1, v___x_5437_);
v___x_5439_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5438_;
}
v_reusejp_5438_:
{
lean_object* v___x_5440_; lean_object* v___f_5441_; 
v___x_5440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5440_, 0, v___x_5439_);
v___f_5441_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5441_, 0, v___x_5440_);
v___y_5376_ = v___f_5441_;
goto v___jp_5375_;
}
}
}
}
}
}
else
{
lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5600_; 
lean_inc(v_stop_5428_);
lean_inc(v_start_5427_);
lean_inc_ref(v_array_5426_);
v_isSharedCheck_5600_ = !lean_is_exclusive(v_snd_5405_);
if (v_isSharedCheck_5600_ == 0)
{
lean_object* v_unused_5601_; lean_object* v_unused_5602_; lean_object* v_unused_5603_; 
v_unused_5601_ = lean_ctor_get(v_snd_5405_, 2);
lean_dec(v_unused_5601_);
v_unused_5602_ = lean_ctor_get(v_snd_5405_, 1);
lean_dec(v_unused_5602_);
v_unused_5603_ = lean_ctor_get(v_snd_5405_, 0);
lean_dec(v_unused_5603_);
v___x_5448_ = v_snd_5405_;
v_isShared_5449_ = v_isSharedCheck_5600_;
goto v_resetjp_5447_;
}
else
{
lean_dec(v_snd_5405_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5600_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v_array_5450_; lean_object* v_start_5451_; lean_object* v_stop_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5457_; 
v_array_5450_ = lean_ctor_get(v_fst_5422_, 0);
v_start_5451_ = lean_ctor_get(v_fst_5422_, 1);
v_stop_5452_ = lean_ctor_get(v_fst_5422_, 2);
v___x_5453_ = lean_array_fget(v_array_5426_, v_start_5427_);
v___x_5454_ = lean_unsigned_to_nat(1u);
v___x_5455_ = lean_nat_add(v_start_5427_, v___x_5454_);
lean_dec(v_start_5427_);
if (v_isShared_5449_ == 0)
{
lean_ctor_set(v___x_5448_, 1, v___x_5455_);
v___x_5457_ = v___x_5448_;
goto v_reusejp_5456_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v_array_5426_);
lean_ctor_set(v_reuseFailAlloc_5599_, 1, v___x_5455_);
lean_ctor_set(v_reuseFailAlloc_5599_, 2, v_stop_5428_);
v___x_5457_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5456_;
}
v_reusejp_5456_:
{
uint8_t v___x_5458_; 
v___x_5458_ = lean_nat_dec_lt(v_start_5451_, v_stop_5452_);
if (v___x_5458_ == 0)
{
lean_object* v___x_5460_; 
lean_dec(v___x_5453_);
if (v_isShared_5425_ == 0)
{
lean_ctor_set(v___x_5424_, 1, v___x_5457_);
v___x_5460_ = v___x_5424_;
goto v_reusejp_5459_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_fst_5422_);
lean_ctor_set(v_reuseFailAlloc_5475_, 1, v___x_5457_);
v___x_5460_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5459_;
}
v_reusejp_5459_:
{
lean_object* v___x_5462_; 
if (v_isShared_5421_ == 0)
{
lean_ctor_set(v___x_5420_, 1, v___x_5460_);
v___x_5462_ = v___x_5420_;
goto v_reusejp_5461_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v_fst_5418_);
lean_ctor_set(v_reuseFailAlloc_5474_, 1, v___x_5460_);
v___x_5462_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5461_;
}
v_reusejp_5461_:
{
lean_object* v___x_5464_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 1, v___x_5462_);
v___x_5464_ = v___x_5416_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5473_; 
v_reuseFailAlloc_5473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5473_, 0, v_fst_5414_);
lean_ctor_set(v_reuseFailAlloc_5473_, 1, v___x_5462_);
v___x_5464_ = v_reuseFailAlloc_5473_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
lean_object* v___x_5466_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5464_);
v___x_5466_ = v___x_5412_;
goto v_reusejp_5465_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v_fst_5410_);
lean_ctor_set(v_reuseFailAlloc_5472_, 1, v___x_5464_);
v___x_5466_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5465_;
}
v_reusejp_5465_:
{
lean_object* v___x_5468_; 
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 1, v___x_5466_);
v___x_5468_ = v___x_5408_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5471_; 
v_reuseFailAlloc_5471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5471_, 0, v_fst_5406_);
lean_ctor_set(v_reuseFailAlloc_5471_, 1, v___x_5466_);
v___x_5468_ = v_reuseFailAlloc_5471_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
lean_object* v___x_5469_; lean_object* v___f_5470_; 
v___x_5469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5469_, 0, v___x_5468_);
v___f_5470_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5470_, 0, v___x_5469_);
v___y_5376_ = v___f_5470_;
goto v___jp_5375_;
}
}
}
}
}
}
else
{
lean_object* v___x_5477_; uint8_t v_isShared_5478_; uint8_t v_isSharedCheck_5595_; 
lean_inc(v_stop_5452_);
lean_inc(v_start_5451_);
lean_inc_ref(v_array_5450_);
v_isSharedCheck_5595_ = !lean_is_exclusive(v_fst_5422_);
if (v_isSharedCheck_5595_ == 0)
{
lean_object* v_unused_5596_; lean_object* v_unused_5597_; lean_object* v_unused_5598_; 
v_unused_5596_ = lean_ctor_get(v_fst_5422_, 2);
lean_dec(v_unused_5596_);
v_unused_5597_ = lean_ctor_get(v_fst_5422_, 1);
lean_dec(v_unused_5597_);
v_unused_5598_ = lean_ctor_get(v_fst_5422_, 0);
lean_dec(v_unused_5598_);
v___x_5477_ = v_fst_5422_;
v_isShared_5478_ = v_isSharedCheck_5595_;
goto v_resetjp_5476_;
}
else
{
lean_dec(v_fst_5422_);
v___x_5477_ = lean_box(0);
v_isShared_5478_ = v_isSharedCheck_5595_;
goto v_resetjp_5476_;
}
v_resetjp_5476_:
{
lean_object* v_array_5479_; lean_object* v_start_5480_; lean_object* v_stop_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5485_; 
v_array_5479_ = lean_ctor_get(v_fst_5418_, 0);
v_start_5480_ = lean_ctor_get(v_fst_5418_, 1);
v_stop_5481_ = lean_ctor_get(v_fst_5418_, 2);
v___x_5482_ = lean_array_fget(v_array_5450_, v_start_5451_);
v___x_5483_ = lean_nat_add(v_start_5451_, v___x_5454_);
lean_dec(v_start_5451_);
if (v_isShared_5478_ == 0)
{
lean_ctor_set(v___x_5477_, 1, v___x_5483_);
v___x_5485_ = v___x_5477_;
goto v_reusejp_5484_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v_array_5450_);
lean_ctor_set(v_reuseFailAlloc_5594_, 1, v___x_5483_);
lean_ctor_set(v_reuseFailAlloc_5594_, 2, v_stop_5452_);
v___x_5485_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5484_;
}
v_reusejp_5484_:
{
uint8_t v___x_5486_; 
v___x_5486_ = lean_nat_dec_lt(v_start_5480_, v_stop_5481_);
if (v___x_5486_ == 0)
{
lean_object* v___x_5488_; 
lean_dec(v___x_5482_);
lean_dec(v___x_5453_);
if (v_isShared_5425_ == 0)
{
lean_ctor_set(v___x_5424_, 1, v___x_5457_);
lean_ctor_set(v___x_5424_, 0, v___x_5485_);
v___x_5488_ = v___x_5424_;
goto v_reusejp_5487_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5503_, 1, v___x_5457_);
v___x_5488_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5487_;
}
v_reusejp_5487_:
{
lean_object* v___x_5490_; 
if (v_isShared_5421_ == 0)
{
lean_ctor_set(v___x_5420_, 1, v___x_5488_);
v___x_5490_ = v___x_5420_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v_fst_5418_);
lean_ctor_set(v_reuseFailAlloc_5502_, 1, v___x_5488_);
v___x_5490_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
lean_object* v___x_5492_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 1, v___x_5490_);
v___x_5492_ = v___x_5416_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5501_; 
v_reuseFailAlloc_5501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5501_, 0, v_fst_5414_);
lean_ctor_set(v_reuseFailAlloc_5501_, 1, v___x_5490_);
v___x_5492_ = v_reuseFailAlloc_5501_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
lean_object* v___x_5494_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5492_);
v___x_5494_ = v___x_5412_;
goto v_reusejp_5493_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_fst_5410_);
lean_ctor_set(v_reuseFailAlloc_5500_, 1, v___x_5492_);
v___x_5494_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5493_;
}
v_reusejp_5493_:
{
lean_object* v___x_5496_; 
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 1, v___x_5494_);
v___x_5496_ = v___x_5408_;
goto v_reusejp_5495_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v_fst_5406_);
lean_ctor_set(v_reuseFailAlloc_5499_, 1, v___x_5494_);
v___x_5496_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5495_;
}
v_reusejp_5495_:
{
lean_object* v___x_5497_; lean_object* v___f_5498_; 
v___x_5497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5497_, 0, v___x_5496_);
v___f_5498_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5498_, 0, v___x_5497_);
v___y_5376_ = v___f_5498_;
goto v___jp_5375_;
}
}
}
}
}
}
else
{
lean_object* v___x_5505_; uint8_t v_isShared_5506_; uint8_t v_isSharedCheck_5590_; 
lean_inc(v_stop_5481_);
lean_inc(v_start_5480_);
lean_inc_ref(v_array_5479_);
v_isSharedCheck_5590_ = !lean_is_exclusive(v_fst_5418_);
if (v_isSharedCheck_5590_ == 0)
{
lean_object* v_unused_5591_; lean_object* v_unused_5592_; lean_object* v_unused_5593_; 
v_unused_5591_ = lean_ctor_get(v_fst_5418_, 2);
lean_dec(v_unused_5591_);
v_unused_5592_ = lean_ctor_get(v_fst_5418_, 1);
lean_dec(v_unused_5592_);
v_unused_5593_ = lean_ctor_get(v_fst_5418_, 0);
lean_dec(v_unused_5593_);
v___x_5505_ = v_fst_5418_;
v_isShared_5506_ = v_isSharedCheck_5590_;
goto v_resetjp_5504_;
}
else
{
lean_dec(v_fst_5418_);
v___x_5505_ = lean_box(0);
v_isShared_5506_ = v_isSharedCheck_5590_;
goto v_resetjp_5504_;
}
v_resetjp_5504_:
{
lean_object* v_array_5507_; lean_object* v_start_5508_; lean_object* v_stop_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5513_; 
v_array_5507_ = lean_ctor_get(v_fst_5414_, 0);
v_start_5508_ = lean_ctor_get(v_fst_5414_, 1);
v_stop_5509_ = lean_ctor_get(v_fst_5414_, 2);
v___x_5510_ = lean_array_fget(v_array_5479_, v_start_5480_);
v___x_5511_ = lean_nat_add(v_start_5480_, v___x_5454_);
lean_dec(v_start_5480_);
if (v_isShared_5506_ == 0)
{
lean_ctor_set(v___x_5505_, 1, v___x_5511_);
v___x_5513_ = v___x_5505_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v_array_5479_);
lean_ctor_set(v_reuseFailAlloc_5589_, 1, v___x_5511_);
lean_ctor_set(v_reuseFailAlloc_5589_, 2, v_stop_5481_);
v___x_5513_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
uint8_t v___x_5514_; 
v___x_5514_ = lean_nat_dec_lt(v_start_5508_, v_stop_5509_);
if (v___x_5514_ == 0)
{
lean_object* v___x_5516_; 
lean_dec(v___x_5510_);
lean_dec(v___x_5482_);
lean_dec(v___x_5453_);
if (v_isShared_5425_ == 0)
{
lean_ctor_set(v___x_5424_, 1, v___x_5457_);
lean_ctor_set(v___x_5424_, 0, v___x_5485_);
v___x_5516_ = v___x_5424_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5531_, 1, v___x_5457_);
v___x_5516_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
lean_object* v___x_5518_; 
if (v_isShared_5421_ == 0)
{
lean_ctor_set(v___x_5420_, 1, v___x_5516_);
lean_ctor_set(v___x_5420_, 0, v___x_5513_);
v___x_5518_ = v___x_5420_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v___x_5513_);
lean_ctor_set(v_reuseFailAlloc_5530_, 1, v___x_5516_);
v___x_5518_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 1, v___x_5518_);
v___x_5520_ = v___x_5416_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v_fst_5414_);
lean_ctor_set(v_reuseFailAlloc_5529_, 1, v___x_5518_);
v___x_5520_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
lean_object* v___x_5522_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5520_);
v___x_5522_ = v___x_5412_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v_fst_5410_);
lean_ctor_set(v_reuseFailAlloc_5528_, 1, v___x_5520_);
v___x_5522_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
lean_object* v___x_5524_; 
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 1, v___x_5522_);
v___x_5524_ = v___x_5408_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v_fst_5406_);
lean_ctor_set(v_reuseFailAlloc_5527_, 1, v___x_5522_);
v___x_5524_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
lean_object* v___x_5525_; lean_object* v___f_5526_; 
v___x_5525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5525_, 0, v___x_5524_);
v___f_5526_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5526_, 0, v___x_5525_);
v___y_5376_ = v___f_5526_;
goto v___jp_5375_;
}
}
}
}
}
}
else
{
lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5585_; 
lean_inc(v_stop_5509_);
lean_inc(v_start_5508_);
lean_inc_ref(v_array_5507_);
v_isSharedCheck_5585_ = !lean_is_exclusive(v_fst_5414_);
if (v_isSharedCheck_5585_ == 0)
{
lean_object* v_unused_5586_; lean_object* v_unused_5587_; lean_object* v_unused_5588_; 
v_unused_5586_ = lean_ctor_get(v_fst_5414_, 2);
lean_dec(v_unused_5586_);
v_unused_5587_ = lean_ctor_get(v_fst_5414_, 1);
lean_dec(v_unused_5587_);
v_unused_5588_ = lean_ctor_get(v_fst_5414_, 0);
lean_dec(v_unused_5588_);
v___x_5533_ = v_fst_5414_;
v_isShared_5534_ = v_isSharedCheck_5585_;
goto v_resetjp_5532_;
}
else
{
lean_dec(v_fst_5414_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5585_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v_array_5535_; lean_object* v_start_5536_; lean_object* v_stop_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5541_; 
v_array_5535_ = lean_ctor_get(v_fst_5410_, 0);
v_start_5536_ = lean_ctor_get(v_fst_5410_, 1);
v_stop_5537_ = lean_ctor_get(v_fst_5410_, 2);
v___x_5538_ = lean_array_fget(v_array_5507_, v_start_5508_);
v___x_5539_ = lean_nat_add(v_start_5508_, v___x_5454_);
lean_dec(v_start_5508_);
if (v_isShared_5534_ == 0)
{
lean_ctor_set(v___x_5533_, 1, v___x_5539_);
v___x_5541_ = v___x_5533_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v_array_5507_);
lean_ctor_set(v_reuseFailAlloc_5584_, 1, v___x_5539_);
lean_ctor_set(v_reuseFailAlloc_5584_, 2, v_stop_5509_);
v___x_5541_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
uint8_t v___x_5542_; 
v___x_5542_ = lean_nat_dec_lt(v_start_5536_, v_stop_5537_);
if (v___x_5542_ == 0)
{
lean_object* v___x_5544_; 
lean_dec(v___x_5538_);
lean_dec(v___x_5510_);
lean_dec(v___x_5482_);
lean_dec(v___x_5453_);
if (v_isShared_5425_ == 0)
{
lean_ctor_set(v___x_5424_, 1, v___x_5457_);
lean_ctor_set(v___x_5424_, 0, v___x_5485_);
v___x_5544_ = v___x_5424_;
goto v_reusejp_5543_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5559_, 1, v___x_5457_);
v___x_5544_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5543_;
}
v_reusejp_5543_:
{
lean_object* v___x_5546_; 
if (v_isShared_5421_ == 0)
{
lean_ctor_set(v___x_5420_, 1, v___x_5544_);
lean_ctor_set(v___x_5420_, 0, v___x_5513_);
v___x_5546_ = v___x_5420_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v___x_5513_);
lean_ctor_set(v_reuseFailAlloc_5558_, 1, v___x_5544_);
v___x_5546_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
lean_object* v___x_5548_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set(v___x_5416_, 1, v___x_5546_);
lean_ctor_set(v___x_5416_, 0, v___x_5541_);
v___x_5548_ = v___x_5416_;
goto v_reusejp_5547_;
}
else
{
lean_object* v_reuseFailAlloc_5557_; 
v_reuseFailAlloc_5557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5557_, 0, v___x_5541_);
lean_ctor_set(v_reuseFailAlloc_5557_, 1, v___x_5546_);
v___x_5548_ = v_reuseFailAlloc_5557_;
goto v_reusejp_5547_;
}
v_reusejp_5547_:
{
lean_object* v___x_5550_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5548_);
v___x_5550_ = v___x_5412_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5556_; 
v_reuseFailAlloc_5556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5556_, 0, v_fst_5410_);
lean_ctor_set(v_reuseFailAlloc_5556_, 1, v___x_5548_);
v___x_5550_ = v_reuseFailAlloc_5556_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5552_; 
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 1, v___x_5550_);
v___x_5552_ = v___x_5408_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5555_; 
v_reuseFailAlloc_5555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5555_, 0, v_fst_5406_);
lean_ctor_set(v_reuseFailAlloc_5555_, 1, v___x_5550_);
v___x_5552_ = v_reuseFailAlloc_5555_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
lean_object* v___x_5553_; lean_object* v___f_5554_; 
v___x_5553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5553_, 0, v___x_5552_);
v___f_5554_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5554_, 0, v___x_5553_);
v___y_5376_ = v___f_5554_;
goto v___jp_5375_;
}
}
}
}
}
}
else
{
lean_object* v___x_5561_; uint8_t v_isShared_5562_; uint8_t v_isSharedCheck_5580_; 
lean_inc(v_stop_5537_);
lean_inc(v_start_5536_);
lean_inc_ref(v_array_5535_);
lean_del_object(v___x_5424_);
lean_del_object(v___x_5420_);
lean_del_object(v___x_5416_);
lean_del_object(v___x_5412_);
lean_del_object(v___x_5408_);
v_isSharedCheck_5580_ = !lean_is_exclusive(v_fst_5410_);
if (v_isSharedCheck_5580_ == 0)
{
lean_object* v_unused_5581_; lean_object* v_unused_5582_; lean_object* v_unused_5583_; 
v_unused_5581_ = lean_ctor_get(v_fst_5410_, 2);
lean_dec(v_unused_5581_);
v_unused_5582_ = lean_ctor_get(v_fst_5410_, 1);
lean_dec(v_unused_5582_);
v_unused_5583_ = lean_ctor_get(v_fst_5410_, 0);
lean_dec(v_unused_5583_);
v___x_5561_ = v_fst_5410_;
v_isShared_5562_ = v_isSharedCheck_5580_;
goto v_resetjp_5560_;
}
else
{
lean_dec(v_fst_5410_);
v___x_5561_ = lean_box(0);
v_isShared_5562_ = v_isSharedCheck_5580_;
goto v_resetjp_5560_;
}
v_resetjp_5560_:
{
lean_object* v_numOverlaps_5563_; uint8_t v_hasUnitThunk_5564_; lean_object* v___x_5565_; uint8_t v___x_5566_; 
v_numOverlaps_5563_ = lean_ctor_get(v___x_5538_, 1);
v_hasUnitThunk_5564_ = lean_ctor_get_uint8(v___x_5538_, sizeof(void*)*2);
v___x_5565_ = lean_unsigned_to_nat(0u);
v___x_5566_ = lean_nat_dec_eq(v_numOverlaps_5563_, v___x_5565_);
if (v___x_5566_ == 0)
{
lean_object* v___x_5567_; lean_object* v___x_5568_; 
lean_del_object(v___x_5561_);
lean_dec_ref(v___x_5541_);
lean_dec(v___x_5538_);
lean_dec(v_stop_5537_);
lean_dec(v_start_5536_);
lean_dec_ref(v_array_5535_);
lean_dec_ref(v___x_5513_);
lean_dec(v___x_5510_);
lean_dec_ref(v___x_5485_);
lean_dec(v___x_5482_);
lean_dec_ref(v___x_5457_);
lean_dec(v___x_5453_);
lean_dec(v_fst_5406_);
v___x_5567_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_5568_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed), 6, 1);
lean_closure_set(v___x_5568_, 0, v___x_5567_);
v___y_5376_ = v___x_5568_;
goto v___jp_5375_;
}
else
{
uint8_t v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___f_5574_; lean_object* v___x_5575_; lean_object* v___x_5577_; 
v___x_5569_ = 0;
v___x_5570_ = lean_array_fget_borrowed(v_array_5535_, v_start_5536_);
v___x_5571_ = lean_box(v___x_5569_);
v___x_5572_ = lean_box(v_useSplitter_5365_);
v___x_5573_ = lean_box(v_hasUnitThunk_5564_);
lean_inc(v_numDiscrEqs_5367_);
lean_inc(v_extraEqualities_5366_);
lean_inc(v___x_5570_);
lean_inc(v_a_5368_);
lean_inc_ref(v_onAlt_5364_);
v___f_5574_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed), 18, 11);
lean_closure_set(v___f_5574_, 0, v___x_5510_);
lean_closure_set(v___f_5574_, 1, v_onAlt_5364_);
lean_closure_set(v___f_5574_, 2, v_a_5368_);
lean_closure_set(v___f_5574_, 3, v___x_5571_);
lean_closure_set(v___f_5574_, 4, v___x_5572_);
lean_closure_set(v___f_5574_, 5, v___x_5570_);
lean_closure_set(v___f_5574_, 6, v_extraEqualities_5366_);
lean_closure_set(v___f_5574_, 7, v_numDiscrEqs_5367_);
lean_closure_set(v___f_5574_, 8, v___x_5453_);
lean_closure_set(v___f_5574_, 9, v___x_5573_);
lean_closure_set(v___f_5574_, 10, v___x_5454_);
v___x_5575_ = lean_nat_add(v_start_5536_, v___x_5454_);
lean_dec(v_start_5536_);
if (v_isShared_5562_ == 0)
{
lean_ctor_set(v___x_5561_, 1, v___x_5575_);
v___x_5577_ = v___x_5561_;
goto v_reusejp_5576_;
}
else
{
lean_object* v_reuseFailAlloc_5579_; 
v_reuseFailAlloc_5579_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5579_, 0, v_array_5535_);
lean_ctor_set(v_reuseFailAlloc_5579_, 1, v___x_5575_);
lean_ctor_set(v_reuseFailAlloc_5579_, 2, v_stop_5537_);
v___x_5577_ = v_reuseFailAlloc_5579_;
goto v_reusejp_5576_;
}
v_reusejp_5576_:
{
lean_object* v___f_5578_; 
v___f_5578_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_5578_, 0, v___x_5482_);
lean_closure_set(v___f_5578_, 1, v___x_5538_);
lean_closure_set(v___f_5578_, 2, v___f_5574_);
lean_closure_set(v___f_5578_, 3, v_fst_5406_);
lean_closure_set(v___f_5578_, 4, v___x_5485_);
lean_closure_set(v___f_5578_, 5, v___x_5457_);
lean_closure_set(v___f_5578_, 6, v___x_5513_);
lean_closure_set(v___f_5578_, 7, v___x_5541_);
lean_closure_set(v___f_5578_, 8, v___x_5577_);
v___y_5376_ = v___f_5578_;
goto v___jp_5375_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_5375_:
{
lean_object* v___x_5377_; 
lean_inc(v___y_5373_);
lean_inc_ref(v___y_5372_);
lean_inc(v___y_5371_);
lean_inc_ref(v___y_5370_);
v___x_5377_ = lean_apply_5(v___y_5376_, v___y_5370_, v___y_5371_, v___y_5372_, v___y_5373_, lean_box(0));
if (lean_obj_tag(v___x_5377_) == 0)
{
lean_object* v_a_5378_; lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5390_; 
v_a_5378_ = lean_ctor_get(v___x_5377_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v___x_5377_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5380_ = v___x_5377_;
v_isShared_5381_ = v_isSharedCheck_5390_;
goto v_resetjp_5379_;
}
else
{
lean_inc(v_a_5378_);
lean_dec(v___x_5377_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5390_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
if (lean_obj_tag(v_a_5378_) == 0)
{
lean_object* v_a_5382_; lean_object* v___x_5384_; 
lean_dec(v_a_5368_);
lean_dec(v_numDiscrEqs_5367_);
lean_dec(v_extraEqualities_5366_);
lean_dec_ref(v_onAlt_5364_);
v_a_5382_ = lean_ctor_get(v_a_5378_, 0);
lean_inc(v_a_5382_);
lean_dec_ref_known(v_a_5378_, 1);
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 0, v_a_5382_);
v___x_5384_ = v___x_5380_;
goto v_reusejp_5383_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v_a_5382_);
v___x_5384_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5383_;
}
v_reusejp_5383_:
{
return v___x_5384_;
}
}
else
{
lean_object* v_a_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; 
lean_del_object(v___x_5380_);
v_a_5386_ = lean_ctor_get(v_a_5378_, 0);
lean_inc(v_a_5386_);
lean_dec_ref_known(v_a_5378_, 1);
v___x_5387_ = lean_unsigned_to_nat(1u);
v___x_5388_ = lean_nat_add(v_a_5368_, v___x_5387_);
lean_dec(v_a_5368_);
v_a_5368_ = v___x_5388_;
v_b_5369_ = v_a_5386_;
goto _start;
}
}
}
else
{
lean_object* v_a_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5398_; 
lean_dec(v_a_5368_);
lean_dec(v_numDiscrEqs_5367_);
lean_dec(v_extraEqualities_5366_);
lean_dec_ref(v_onAlt_5364_);
v_a_5391_ = lean_ctor_get(v___x_5377_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5377_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5393_ = v___x_5377_;
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_a_5391_);
lean_dec(v___x_5377_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5391_);
v___x_5396_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
return v___x_5396_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object* v_upperBound_5614_, lean_object* v_onAlt_5615_, lean_object* v_useSplitter_5616_, lean_object* v_extraEqualities_5617_, lean_object* v_numDiscrEqs_5618_, lean_object* v_a_5619_, lean_object* v_b_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_){
_start:
{
uint8_t v_useSplitter_boxed_5626_; lean_object* v_res_5627_; 
v_useSplitter_boxed_5626_ = lean_unbox(v_useSplitter_5616_);
v_res_5627_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_5614_, v_onAlt_5615_, v_useSplitter_boxed_5626_, v_extraEqualities_5617_, v_numDiscrEqs_5618_, v_a_5619_, v_b_5620_, v___y_5621_, v___y_5622_, v___y_5623_, v___y_5624_);
lean_dec(v___y_5624_);
lean_dec_ref(v___y_5623_);
lean_dec(v___y_5622_);
lean_dec_ref(v___y_5621_);
lean_dec(v_upperBound_5614_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t v_addEqualities_5628_, lean_object* v_as_5629_, size_t v_sz_5630_, size_t v_i_5631_, lean_object* v_b_5632_, lean_object* v___y_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_){
_start:
{
lean_object* v_a_5639_; uint8_t v___x_5643_; 
v___x_5643_ = lean_usize_dec_lt(v_i_5631_, v_sz_5630_);
if (v___x_5643_ == 0)
{
lean_object* v___x_5644_; 
v___x_5644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5644_, 0, v_b_5632_);
return v___x_5644_;
}
else
{
lean_object* v_snd_5645_; lean_object* v_snd_5646_; lean_object* v_snd_5647_; lean_object* v_snd_5648_; lean_object* v_fst_5649_; lean_object* v___x_5651_; uint8_t v_isShared_5652_; uint8_t v_isSharedCheck_5795_; 
v_snd_5645_ = lean_ctor_get(v_b_5632_, 1);
lean_inc(v_snd_5645_);
v_snd_5646_ = lean_ctor_get(v_snd_5645_, 1);
lean_inc(v_snd_5646_);
v_snd_5647_ = lean_ctor_get(v_snd_5646_, 1);
lean_inc(v_snd_5647_);
v_snd_5648_ = lean_ctor_get(v_snd_5647_, 1);
lean_inc(v_snd_5648_);
v_fst_5649_ = lean_ctor_get(v_b_5632_, 0);
v_isSharedCheck_5795_ = !lean_is_exclusive(v_b_5632_);
if (v_isSharedCheck_5795_ == 0)
{
lean_object* v_unused_5796_; 
v_unused_5796_ = lean_ctor_get(v_b_5632_, 1);
lean_dec(v_unused_5796_);
v___x_5651_ = v_b_5632_;
v_isShared_5652_ = v_isSharedCheck_5795_;
goto v_resetjp_5650_;
}
else
{
lean_inc(v_fst_5649_);
lean_dec(v_b_5632_);
v___x_5651_ = lean_box(0);
v_isShared_5652_ = v_isSharedCheck_5795_;
goto v_resetjp_5650_;
}
v_resetjp_5650_:
{
lean_object* v_fst_5653_; lean_object* v___x_5655_; uint8_t v_isShared_5656_; uint8_t v_isSharedCheck_5793_; 
v_fst_5653_ = lean_ctor_get(v_snd_5645_, 0);
v_isSharedCheck_5793_ = !lean_is_exclusive(v_snd_5645_);
if (v_isSharedCheck_5793_ == 0)
{
lean_object* v_unused_5794_; 
v_unused_5794_ = lean_ctor_get(v_snd_5645_, 1);
lean_dec(v_unused_5794_);
v___x_5655_ = v_snd_5645_;
v_isShared_5656_ = v_isSharedCheck_5793_;
goto v_resetjp_5654_;
}
else
{
lean_inc(v_fst_5653_);
lean_dec(v_snd_5645_);
v___x_5655_ = lean_box(0);
v_isShared_5656_ = v_isSharedCheck_5793_;
goto v_resetjp_5654_;
}
v_resetjp_5654_:
{
lean_object* v_fst_5657_; lean_object* v___x_5659_; uint8_t v_isShared_5660_; uint8_t v_isSharedCheck_5791_; 
v_fst_5657_ = lean_ctor_get(v_snd_5646_, 0);
v_isSharedCheck_5791_ = !lean_is_exclusive(v_snd_5646_);
if (v_isSharedCheck_5791_ == 0)
{
lean_object* v_unused_5792_; 
v_unused_5792_ = lean_ctor_get(v_snd_5646_, 1);
lean_dec(v_unused_5792_);
v___x_5659_ = v_snd_5646_;
v_isShared_5660_ = v_isSharedCheck_5791_;
goto v_resetjp_5658_;
}
else
{
lean_inc(v_fst_5657_);
lean_dec(v_snd_5646_);
v___x_5659_ = lean_box(0);
v_isShared_5660_ = v_isSharedCheck_5791_;
goto v_resetjp_5658_;
}
v_resetjp_5658_:
{
lean_object* v_fst_5661_; lean_object* v___x_5663_; uint8_t v_isShared_5664_; uint8_t v_isSharedCheck_5789_; 
v_fst_5661_ = lean_ctor_get(v_snd_5647_, 0);
v_isSharedCheck_5789_ = !lean_is_exclusive(v_snd_5647_);
if (v_isSharedCheck_5789_ == 0)
{
lean_object* v_unused_5790_; 
v_unused_5790_ = lean_ctor_get(v_snd_5647_, 1);
lean_dec(v_unused_5790_);
v___x_5663_ = v_snd_5647_;
v_isShared_5664_ = v_isSharedCheck_5789_;
goto v_resetjp_5662_;
}
else
{
lean_inc(v_fst_5661_);
lean_dec(v_snd_5647_);
v___x_5663_ = lean_box(0);
v_isShared_5664_ = v_isSharedCheck_5789_;
goto v_resetjp_5662_;
}
v_resetjp_5662_:
{
lean_object* v_array_5665_; lean_object* v_start_5666_; lean_object* v_stop_5667_; uint8_t v___x_5668_; 
v_array_5665_ = lean_ctor_get(v_snd_5648_, 0);
v_start_5666_ = lean_ctor_get(v_snd_5648_, 1);
v_stop_5667_ = lean_ctor_get(v_snd_5648_, 2);
v___x_5668_ = lean_nat_dec_lt(v_start_5666_, v_stop_5667_);
if (v___x_5668_ == 0)
{
lean_object* v___x_5670_; 
if (v_isShared_5664_ == 0)
{
v___x_5670_ = v___x_5663_;
goto v_reusejp_5669_;
}
else
{
lean_object* v_reuseFailAlloc_5681_; 
v_reuseFailAlloc_5681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5681_, 0, v_fst_5661_);
lean_ctor_set(v_reuseFailAlloc_5681_, 1, v_snd_5648_);
v___x_5670_ = v_reuseFailAlloc_5681_;
goto v_reusejp_5669_;
}
v_reusejp_5669_:
{
lean_object* v___x_5672_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5670_);
v___x_5672_ = v___x_5659_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5680_; 
v_reuseFailAlloc_5680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5680_, 0, v_fst_5657_);
lean_ctor_set(v_reuseFailAlloc_5680_, 1, v___x_5670_);
v___x_5672_ = v_reuseFailAlloc_5680_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
lean_object* v___x_5674_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5672_);
v___x_5674_ = v___x_5655_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v_fst_5653_);
lean_ctor_set(v_reuseFailAlloc_5679_, 1, v___x_5672_);
v___x_5674_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
lean_object* v___x_5676_; 
if (v_isShared_5652_ == 0)
{
lean_ctor_set(v___x_5651_, 1, v___x_5674_);
v___x_5676_ = v___x_5651_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_fst_5649_);
lean_ctor_set(v_reuseFailAlloc_5678_, 1, v___x_5674_);
v___x_5676_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
lean_object* v___x_5677_; 
v___x_5677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5677_, 0, v___x_5676_);
return v___x_5677_;
}
}
}
}
}
else
{
lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5785_; 
lean_inc(v_stop_5667_);
lean_inc(v_start_5666_);
lean_inc_ref(v_array_5665_);
v_isSharedCheck_5785_ = !lean_is_exclusive(v_snd_5648_);
if (v_isSharedCheck_5785_ == 0)
{
lean_object* v_unused_5786_; lean_object* v_unused_5787_; lean_object* v_unused_5788_; 
v_unused_5786_ = lean_ctor_get(v_snd_5648_, 2);
lean_dec(v_unused_5786_);
v_unused_5787_ = lean_ctor_get(v_snd_5648_, 1);
lean_dec(v_unused_5787_);
v_unused_5788_ = lean_ctor_get(v_snd_5648_, 0);
lean_dec(v_unused_5788_);
v___x_5683_ = v_snd_5648_;
v_isShared_5684_ = v_isSharedCheck_5785_;
goto v_resetjp_5682_;
}
else
{
lean_dec(v_snd_5648_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5785_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
lean_object* v_array_5685_; lean_object* v_start_5686_; lean_object* v_stop_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5692_; 
v_array_5685_ = lean_ctor_get(v_fst_5661_, 0);
v_start_5686_ = lean_ctor_get(v_fst_5661_, 1);
v_stop_5687_ = lean_ctor_get(v_fst_5661_, 2);
v___x_5688_ = lean_array_fget(v_array_5665_, v_start_5666_);
v___x_5689_ = lean_unsigned_to_nat(1u);
v___x_5690_ = lean_nat_add(v_start_5666_, v___x_5689_);
lean_dec(v_start_5666_);
if (v_isShared_5684_ == 0)
{
lean_ctor_set(v___x_5683_, 1, v___x_5690_);
v___x_5692_ = v___x_5683_;
goto v_reusejp_5691_;
}
else
{
lean_object* v_reuseFailAlloc_5784_; 
v_reuseFailAlloc_5784_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5784_, 0, v_array_5665_);
lean_ctor_set(v_reuseFailAlloc_5784_, 1, v___x_5690_);
lean_ctor_set(v_reuseFailAlloc_5784_, 2, v_stop_5667_);
v___x_5692_ = v_reuseFailAlloc_5784_;
goto v_reusejp_5691_;
}
v_reusejp_5691_:
{
uint8_t v___x_5693_; 
v___x_5693_ = lean_nat_dec_lt(v_start_5686_, v_stop_5687_);
if (v___x_5693_ == 0)
{
lean_object* v___x_5695_; 
lean_dec(v___x_5688_);
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5692_);
v___x_5695_ = v___x_5663_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_fst_5661_);
lean_ctor_set(v_reuseFailAlloc_5706_, 1, v___x_5692_);
v___x_5695_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
lean_object* v___x_5697_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5695_);
v___x_5697_ = v___x_5659_;
goto v_reusejp_5696_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v_fst_5657_);
lean_ctor_set(v_reuseFailAlloc_5705_, 1, v___x_5695_);
v___x_5697_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5696_;
}
v_reusejp_5696_:
{
lean_object* v___x_5699_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5697_);
v___x_5699_ = v___x_5655_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5704_; 
v_reuseFailAlloc_5704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5704_, 0, v_fst_5653_);
lean_ctor_set(v_reuseFailAlloc_5704_, 1, v___x_5697_);
v___x_5699_ = v_reuseFailAlloc_5704_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
lean_object* v___x_5701_; 
if (v_isShared_5652_ == 0)
{
lean_ctor_set(v___x_5651_, 1, v___x_5699_);
v___x_5701_ = v___x_5651_;
goto v_reusejp_5700_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_fst_5649_);
lean_ctor_set(v_reuseFailAlloc_5703_, 1, v___x_5699_);
v___x_5701_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5700_;
}
v_reusejp_5700_:
{
lean_object* v___x_5702_; 
v___x_5702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5702_, 0, v___x_5701_);
return v___x_5702_;
}
}
}
}
}
else
{
lean_object* v___x_5708_; uint8_t v_isShared_5709_; uint8_t v_isSharedCheck_5780_; 
lean_inc(v_stop_5687_);
lean_inc(v_start_5686_);
lean_inc_ref(v_array_5685_);
v_isSharedCheck_5780_ = !lean_is_exclusive(v_fst_5661_);
if (v_isSharedCheck_5780_ == 0)
{
lean_object* v_unused_5781_; lean_object* v_unused_5782_; lean_object* v_unused_5783_; 
v_unused_5781_ = lean_ctor_get(v_fst_5661_, 2);
lean_dec(v_unused_5781_);
v_unused_5782_ = lean_ctor_get(v_fst_5661_, 1);
lean_dec(v_unused_5782_);
v_unused_5783_ = lean_ctor_get(v_fst_5661_, 0);
lean_dec(v_unused_5783_);
v___x_5708_ = v_fst_5661_;
v_isShared_5709_ = v_isSharedCheck_5780_;
goto v_resetjp_5707_;
}
else
{
lean_dec(v_fst_5661_);
v___x_5708_ = lean_box(0);
v_isShared_5709_ = v_isSharedCheck_5780_;
goto v_resetjp_5707_;
}
v_resetjp_5707_:
{
lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5713_; 
v___x_5710_ = lean_array_fget(v_array_5685_, v_start_5686_);
v___x_5711_ = lean_nat_add(v_start_5686_, v___x_5689_);
lean_dec(v_start_5686_);
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5711_);
v___x_5713_ = v___x_5708_;
goto v_reusejp_5712_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v_array_5685_);
lean_ctor_set(v_reuseFailAlloc_5779_, 1, v___x_5711_);
lean_ctor_set(v_reuseFailAlloc_5779_, 2, v_stop_5687_);
v___x_5713_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5712_;
}
v_reusejp_5712_:
{
if (v_addEqualities_5628_ == 0)
{
lean_dec(v___x_5710_);
goto v___jp_5714_;
}
else
{
if (lean_obj_tag(v___x_5688_) == 0)
{
lean_object* v_a_5730_; lean_object* v___x_5731_; 
lean_del_object(v___x_5663_);
lean_del_object(v___x_5659_);
lean_del_object(v___x_5655_);
lean_del_object(v___x_5651_);
v_a_5730_ = lean_array_uget_borrowed(v_as_5629_, v_i_5631_);
lean_inc(v_a_5730_);
v___x_5731_ = l_Lean_Meta_isProof(v_a_5730_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_);
if (lean_obj_tag(v___x_5731_) == 0)
{
lean_object* v_a_5732_; uint8_t v___x_5733_; 
v_a_5732_ = lean_ctor_get(v___x_5731_, 0);
lean_inc(v_a_5732_);
lean_dec_ref_known(v___x_5731_, 1);
v___x_5733_ = lean_unbox(v_a_5732_);
lean_dec(v_a_5732_);
if (v___x_5733_ == 0)
{
lean_object* v___x_5734_; 
lean_inc(v_a_5730_);
v___x_5734_ = l_Lean_Meta_mkEqHEq(v___x_5710_, v_a_5730_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_);
if (lean_obj_tag(v___x_5734_) == 0)
{
lean_object* v_a_5735_; lean_object* v___x_5736_; 
v_a_5735_ = lean_ctor_get(v___x_5734_, 0);
lean_inc_n(v_a_5735_, 2);
lean_dec_ref_known(v___x_5734_, 1);
v___x_5736_ = l_Lean_mkArrow(v_a_5735_, v_fst_5649_, v___y_5635_, v___y_5636_);
if (lean_obj_tag(v___x_5736_) == 0)
{
lean_object* v_a_5737_; uint8_t v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; 
v_a_5737_ = lean_ctor_get(v___x_5736_, 0);
lean_inc(v_a_5737_);
lean_dec_ref_known(v___x_5736_, 1);
v___x_5738_ = l_Lean_Expr_isHEq(v_a_5735_);
lean_dec(v_a_5735_);
v___x_5739_ = lean_box(v___x_5738_);
v___x_5740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5739_);
v___x_5741_ = lean_array_push(v_fst_5653_, v___x_5740_);
v___x_5742_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_5743_ = lean_array_push(v_fst_5657_, v___x_5742_);
v___x_5744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5744_, 0, v___x_5713_);
lean_ctor_set(v___x_5744_, 1, v___x_5692_);
v___x_5745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5743_);
lean_ctor_set(v___x_5745_, 1, v___x_5744_);
v___x_5746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5746_, 0, v___x_5741_);
lean_ctor_set(v___x_5746_, 1, v___x_5745_);
v___x_5747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5747_, 0, v_a_5737_);
lean_ctor_set(v___x_5747_, 1, v___x_5746_);
v_a_5639_ = v___x_5747_;
goto v___jp_5638_;
}
else
{
lean_object* v_a_5748_; lean_object* v___x_5750_; uint8_t v_isShared_5751_; uint8_t v_isSharedCheck_5755_; 
lean_dec(v_a_5735_);
lean_dec_ref(v___x_5713_);
lean_dec_ref(v___x_5692_);
lean_dec(v_fst_5657_);
lean_dec(v_fst_5653_);
v_a_5748_ = lean_ctor_get(v___x_5736_, 0);
v_isSharedCheck_5755_ = !lean_is_exclusive(v___x_5736_);
if (v_isSharedCheck_5755_ == 0)
{
v___x_5750_ = v___x_5736_;
v_isShared_5751_ = v_isSharedCheck_5755_;
goto v_resetjp_5749_;
}
else
{
lean_inc(v_a_5748_);
lean_dec(v___x_5736_);
v___x_5750_ = lean_box(0);
v_isShared_5751_ = v_isSharedCheck_5755_;
goto v_resetjp_5749_;
}
v_resetjp_5749_:
{
lean_object* v___x_5753_; 
if (v_isShared_5751_ == 0)
{
v___x_5753_ = v___x_5750_;
goto v_reusejp_5752_;
}
else
{
lean_object* v_reuseFailAlloc_5754_; 
v_reuseFailAlloc_5754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5754_, 0, v_a_5748_);
v___x_5753_ = v_reuseFailAlloc_5754_;
goto v_reusejp_5752_;
}
v_reusejp_5752_:
{
return v___x_5753_;
}
}
}
}
else
{
lean_object* v_a_5756_; lean_object* v___x_5758_; uint8_t v_isShared_5759_; uint8_t v_isSharedCheck_5763_; 
lean_dec_ref(v___x_5713_);
lean_dec_ref(v___x_5692_);
lean_dec(v_fst_5657_);
lean_dec(v_fst_5653_);
lean_dec(v_fst_5649_);
v_a_5756_ = lean_ctor_get(v___x_5734_, 0);
v_isSharedCheck_5763_ = !lean_is_exclusive(v___x_5734_);
if (v_isSharedCheck_5763_ == 0)
{
v___x_5758_ = v___x_5734_;
v_isShared_5759_ = v_isSharedCheck_5763_;
goto v_resetjp_5757_;
}
else
{
lean_inc(v_a_5756_);
lean_dec(v___x_5734_);
v___x_5758_ = lean_box(0);
v_isShared_5759_ = v_isSharedCheck_5763_;
goto v_resetjp_5757_;
}
v_resetjp_5757_:
{
lean_object* v___x_5761_; 
if (v_isShared_5759_ == 0)
{
v___x_5761_ = v___x_5758_;
goto v_reusejp_5760_;
}
else
{
lean_object* v_reuseFailAlloc_5762_; 
v_reuseFailAlloc_5762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5762_, 0, v_a_5756_);
v___x_5761_ = v_reuseFailAlloc_5762_;
goto v_reusejp_5760_;
}
v_reusejp_5760_:
{
return v___x_5761_;
}
}
}
}
else
{
lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; 
lean_dec(v___x_5710_);
v___x_5764_ = lean_box(0);
v___x_5765_ = lean_array_push(v_fst_5653_, v___x_5764_);
v___x_5766_ = lean_array_push(v_fst_5657_, v___x_5688_);
v___x_5767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5767_, 0, v___x_5713_);
lean_ctor_set(v___x_5767_, 1, v___x_5692_);
v___x_5768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5768_, 0, v___x_5766_);
lean_ctor_set(v___x_5768_, 1, v___x_5767_);
v___x_5769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5769_, 0, v___x_5765_);
lean_ctor_set(v___x_5769_, 1, v___x_5768_);
v___x_5770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5770_, 0, v_fst_5649_);
lean_ctor_set(v___x_5770_, 1, v___x_5769_);
v_a_5639_ = v___x_5770_;
goto v___jp_5638_;
}
}
else
{
lean_object* v_a_5771_; lean_object* v___x_5773_; uint8_t v_isShared_5774_; uint8_t v_isSharedCheck_5778_; 
lean_dec_ref(v___x_5713_);
lean_dec(v___x_5710_);
lean_dec_ref(v___x_5692_);
lean_dec(v_fst_5657_);
lean_dec(v_fst_5653_);
lean_dec(v_fst_5649_);
v_a_5771_ = lean_ctor_get(v___x_5731_, 0);
v_isSharedCheck_5778_ = !lean_is_exclusive(v___x_5731_);
if (v_isSharedCheck_5778_ == 0)
{
v___x_5773_ = v___x_5731_;
v_isShared_5774_ = v_isSharedCheck_5778_;
goto v_resetjp_5772_;
}
else
{
lean_inc(v_a_5771_);
lean_dec(v___x_5731_);
v___x_5773_ = lean_box(0);
v_isShared_5774_ = v_isSharedCheck_5778_;
goto v_resetjp_5772_;
}
v_resetjp_5772_:
{
lean_object* v___x_5776_; 
if (v_isShared_5774_ == 0)
{
v___x_5776_ = v___x_5773_;
goto v_reusejp_5775_;
}
else
{
lean_object* v_reuseFailAlloc_5777_; 
v_reuseFailAlloc_5777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5777_, 0, v_a_5771_);
v___x_5776_ = v_reuseFailAlloc_5777_;
goto v_reusejp_5775_;
}
v_reusejp_5775_:
{
return v___x_5776_;
}
}
}
}
else
{
lean_dec(v___x_5710_);
goto v___jp_5714_;
}
}
v___jp_5714_:
{
lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5719_; 
v___x_5715_ = lean_box(0);
v___x_5716_ = lean_array_push(v_fst_5653_, v___x_5715_);
v___x_5717_ = lean_array_push(v_fst_5657_, v___x_5688_);
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 1, v___x_5692_);
lean_ctor_set(v___x_5663_, 0, v___x_5713_);
v___x_5719_ = v___x_5663_;
goto v_reusejp_5718_;
}
else
{
lean_object* v_reuseFailAlloc_5729_; 
v_reuseFailAlloc_5729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5729_, 0, v___x_5713_);
lean_ctor_set(v_reuseFailAlloc_5729_, 1, v___x_5692_);
v___x_5719_ = v_reuseFailAlloc_5729_;
goto v_reusejp_5718_;
}
v_reusejp_5718_:
{
lean_object* v___x_5721_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v___x_5719_);
lean_ctor_set(v___x_5659_, 0, v___x_5717_);
v___x_5721_ = v___x_5659_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5728_; 
v_reuseFailAlloc_5728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5728_, 0, v___x_5717_);
lean_ctor_set(v_reuseFailAlloc_5728_, 1, v___x_5719_);
v___x_5721_ = v_reuseFailAlloc_5728_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
lean_object* v___x_5723_; 
if (v_isShared_5656_ == 0)
{
lean_ctor_set(v___x_5655_, 1, v___x_5721_);
lean_ctor_set(v___x_5655_, 0, v___x_5716_);
v___x_5723_ = v___x_5655_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5727_; 
v_reuseFailAlloc_5727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5727_, 0, v___x_5716_);
lean_ctor_set(v_reuseFailAlloc_5727_, 1, v___x_5721_);
v___x_5723_ = v_reuseFailAlloc_5727_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
lean_object* v___x_5725_; 
if (v_isShared_5652_ == 0)
{
lean_ctor_set(v___x_5651_, 1, v___x_5723_);
v___x_5725_ = v___x_5651_;
goto v_reusejp_5724_;
}
else
{
lean_object* v_reuseFailAlloc_5726_; 
v_reuseFailAlloc_5726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5726_, 0, v_fst_5649_);
lean_ctor_set(v_reuseFailAlloc_5726_, 1, v___x_5723_);
v___x_5725_ = v_reuseFailAlloc_5726_;
goto v_reusejp_5724_;
}
v_reusejp_5724_:
{
v_a_5639_ = v___x_5725_;
goto v___jp_5638_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_5638_:
{
size_t v___x_5640_; size_t v___x_5641_; 
v___x_5640_ = ((size_t)1ULL);
v___x_5641_ = lean_usize_add(v_i_5631_, v___x_5640_);
v_i_5631_ = v___x_5641_;
v_b_5632_ = v_a_5639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object* v_addEqualities_5797_, lean_object* v_as_5798_, lean_object* v_sz_5799_, lean_object* v_i_5800_, lean_object* v_b_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_, lean_object* v___y_5806_){
_start:
{
uint8_t v_addEqualities_boxed_5807_; size_t v_sz_boxed_5808_; size_t v_i_boxed_5809_; lean_object* v_res_5810_; 
v_addEqualities_boxed_5807_ = lean_unbox(v_addEqualities_5797_);
v_sz_boxed_5808_ = lean_unbox_usize(v_sz_5799_);
lean_dec(v_sz_5799_);
v_i_boxed_5809_ = lean_unbox_usize(v_i_5800_);
lean_dec(v_i_5800_);
v_res_5810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_boxed_5807_, v_as_5798_, v_sz_boxed_5808_, v_i_boxed_5809_, v_b_5801_, v___y_5802_, v___y_5803_, v___y_5804_, v___y_5805_);
lean_dec(v___y_5805_);
lean_dec_ref(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec_ref(v___y_5802_);
lean_dec_ref(v_as_5798_);
return v_res_5810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object* v_onMotive_5811_, lean_object* v_toMatcherInfo_5812_, lean_object* v_a_5813_, uint8_t v_addEqualities_5814_, size_t v___x_5815_, lean_object* v_discrs_5816_, lean_object* v_motiveArgs_5817_, lean_object* v_motiveBody_5818_, lean_object* v___y_5819_, lean_object* v___y_5820_, lean_object* v___y_5821_, lean_object* v___y_5822_){
_start:
{
lean_object* v___x_5916_; lean_object* v___x_5917_; uint8_t v___x_5918_; 
v___x_5916_ = lean_array_get_size(v_motiveArgs_5817_);
v___x_5917_ = lean_array_get_size(v_discrs_5816_);
v___x_5918_ = lean_nat_dec_eq(v___x_5916_, v___x_5917_);
if (v___x_5918_ == 0)
{
lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v_a_5927_; lean_object* v___x_5929_; uint8_t v_isShared_5930_; uint8_t v_isSharedCheck_5934_; 
lean_dec_ref(v_motiveBody_5818_);
lean_dec_ref(v_motiveArgs_5817_);
lean_dec_ref(v_a_5813_);
lean_dec_ref(v_toMatcherInfo_5812_);
lean_dec_ref(v_onMotive_5811_);
v___x_5919_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_5920_ = l_Nat_reprFast(v___x_5917_);
v___x_5921_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5921_, 0, v___x_5920_);
v___x_5922_ = l_Lean_MessageData_ofFormat(v___x_5921_);
v___x_5923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5919_);
lean_ctor_set(v___x_5923_, 1, v___x_5922_);
v___x_5924_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_5925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5923_);
lean_ctor_set(v___x_5925_, 1, v___x_5924_);
v___x_5926_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5925_, v___y_5819_, v___y_5820_, v___y_5821_, v___y_5822_);
v_a_5927_ = lean_ctor_get(v___x_5926_, 0);
v_isSharedCheck_5934_ = !lean_is_exclusive(v___x_5926_);
if (v_isSharedCheck_5934_ == 0)
{
v___x_5929_ = v___x_5926_;
v_isShared_5930_ = v_isSharedCheck_5934_;
goto v_resetjp_5928_;
}
else
{
lean_inc(v_a_5927_);
lean_dec(v___x_5926_);
v___x_5929_ = lean_box(0);
v_isShared_5930_ = v_isSharedCheck_5934_;
goto v_resetjp_5928_;
}
v_resetjp_5928_:
{
lean_object* v___x_5932_; 
if (v_isShared_5930_ == 0)
{
v___x_5932_ = v___x_5929_;
goto v_reusejp_5931_;
}
else
{
lean_object* v_reuseFailAlloc_5933_; 
v_reuseFailAlloc_5933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5933_, 0, v_a_5927_);
v___x_5932_ = v_reuseFailAlloc_5933_;
goto v_reusejp_5931_;
}
v_reusejp_5931_:
{
return v___x_5932_;
}
}
}
else
{
goto v___jp_5824_;
}
v___jp_5824_:
{
lean_object* v___x_5825_; 
lean_inc(v___y_5822_);
lean_inc_ref(v___y_5821_);
lean_inc(v___y_5820_);
lean_inc_ref(v___y_5819_);
lean_inc_ref(v_motiveArgs_5817_);
v___x_5825_ = lean_apply_7(v_onMotive_5811_, v_motiveArgs_5817_, v_motiveBody_5818_, v___y_5819_, v___y_5820_, v___y_5821_, v___y_5822_, lean_box(0));
if (lean_obj_tag(v___x_5825_) == 0)
{
lean_object* v_a_5826_; lean_object* v_discrInfos_5827_; lean_object* v___x_5828_; lean_object* v_addHEqualities_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; size_t v_sz_5838_; lean_object* v___x_5839_; 
v_a_5826_ = lean_ctor_get(v___x_5825_, 0);
lean_inc(v_a_5826_);
lean_dec_ref_known(v___x_5825_, 1);
v_discrInfos_5827_ = lean_ctor_get(v_toMatcherInfo_5812_, 4);
lean_inc_ref(v_discrInfos_5827_);
lean_dec_ref(v_toMatcherInfo_5812_);
v___x_5828_ = lean_unsigned_to_nat(0u);
v_addHEqualities_5829_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_5830_ = lean_array_get_size(v_a_5813_);
v___x_5831_ = l_Array_toSubarray___redArg(v_a_5813_, v___x_5828_, v___x_5830_);
v___x_5832_ = lean_array_get_size(v_discrInfos_5827_);
v___x_5833_ = l_Array_toSubarray___redArg(v_discrInfos_5827_, v___x_5828_, v___x_5832_);
v___x_5834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5834_, 0, v___x_5831_);
lean_ctor_set(v___x_5834_, 1, v___x_5833_);
v___x_5835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5835_, 0, v_addHEqualities_5829_);
lean_ctor_set(v___x_5835_, 1, v___x_5834_);
v___x_5836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5836_, 0, v_addHEqualities_5829_);
lean_ctor_set(v___x_5836_, 1, v___x_5835_);
v___x_5837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5837_, 0, v_a_5826_);
lean_ctor_set(v___x_5837_, 1, v___x_5836_);
v_sz_5838_ = lean_array_size(v_motiveArgs_5817_);
v___x_5839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_5814_, v_motiveArgs_5817_, v_sz_5838_, v___x_5815_, v___x_5837_, v___y_5819_, v___y_5820_, v___y_5821_, v___y_5822_);
if (lean_obj_tag(v___x_5839_) == 0)
{
lean_object* v_a_5840_; lean_object* v_snd_5841_; lean_object* v_snd_5842_; lean_object* v_fst_5843_; lean_object* v___x_5845_; uint8_t v_isShared_5846_; uint8_t v_isSharedCheck_5898_; 
v_a_5840_ = lean_ctor_get(v___x_5839_, 0);
lean_inc(v_a_5840_);
lean_dec_ref_known(v___x_5839_, 1);
v_snd_5841_ = lean_ctor_get(v_a_5840_, 1);
lean_inc(v_snd_5841_);
v_snd_5842_ = lean_ctor_get(v_snd_5841_, 1);
lean_inc(v_snd_5842_);
v_fst_5843_ = lean_ctor_get(v_a_5840_, 0);
v_isSharedCheck_5898_ = !lean_is_exclusive(v_a_5840_);
if (v_isSharedCheck_5898_ == 0)
{
lean_object* v_unused_5899_; 
v_unused_5899_ = lean_ctor_get(v_a_5840_, 1);
lean_dec(v_unused_5899_);
v___x_5845_ = v_a_5840_;
v_isShared_5846_ = v_isSharedCheck_5898_;
goto v_resetjp_5844_;
}
else
{
lean_inc(v_fst_5843_);
lean_dec(v_a_5840_);
v___x_5845_ = lean_box(0);
v_isShared_5846_ = v_isSharedCheck_5898_;
goto v_resetjp_5844_;
}
v_resetjp_5844_:
{
lean_object* v_fst_5847_; lean_object* v___x_5849_; uint8_t v_isShared_5850_; uint8_t v_isSharedCheck_5896_; 
v_fst_5847_ = lean_ctor_get(v_snd_5841_, 0);
v_isSharedCheck_5896_ = !lean_is_exclusive(v_snd_5841_);
if (v_isSharedCheck_5896_ == 0)
{
lean_object* v_unused_5897_; 
v_unused_5897_ = lean_ctor_get(v_snd_5841_, 1);
lean_dec(v_unused_5897_);
v___x_5849_ = v_snd_5841_;
v_isShared_5850_ = v_isSharedCheck_5896_;
goto v_resetjp_5848_;
}
else
{
lean_inc(v_fst_5847_);
lean_dec(v_snd_5841_);
v___x_5849_ = lean_box(0);
v_isShared_5850_ = v_isSharedCheck_5896_;
goto v_resetjp_5848_;
}
v_resetjp_5848_:
{
lean_object* v_fst_5851_; lean_object* v___x_5853_; uint8_t v_isShared_5854_; uint8_t v_isSharedCheck_5894_; 
v_fst_5851_ = lean_ctor_get(v_snd_5842_, 0);
v_isSharedCheck_5894_ = !lean_is_exclusive(v_snd_5842_);
if (v_isSharedCheck_5894_ == 0)
{
lean_object* v_unused_5895_; 
v_unused_5895_ = lean_ctor_get(v_snd_5842_, 1);
lean_dec(v_unused_5895_);
v___x_5853_ = v_snd_5842_;
v_isShared_5854_ = v_isSharedCheck_5894_;
goto v_resetjp_5852_;
}
else
{
lean_inc(v_fst_5851_);
lean_dec(v_snd_5842_);
v___x_5853_ = lean_box(0);
v_isShared_5854_ = v_isSharedCheck_5894_;
goto v_resetjp_5852_;
}
v_resetjp_5852_:
{
uint8_t v___x_5855_; uint8_t v___x_5856_; uint8_t v___x_5857_; lean_object* v___x_5858_; 
v___x_5855_ = 0;
v___x_5856_ = 1;
v___x_5857_ = 1;
lean_inc(v_fst_5843_);
v___x_5858_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_5817_, v_fst_5843_, v___x_5855_, v___x_5856_, v___x_5855_, v___x_5856_, v___x_5857_, v___y_5819_, v___y_5820_, v___y_5821_, v___y_5822_);
lean_dec_ref(v_motiveArgs_5817_);
if (lean_obj_tag(v___x_5858_) == 0)
{
lean_object* v_a_5859_; lean_object* v___x_5860_; 
v_a_5859_ = lean_ctor_get(v___x_5858_, 0);
lean_inc(v_a_5859_);
lean_dec_ref_known(v___x_5858_, 1);
v___x_5860_ = l_Lean_Meta_getLevel(v_fst_5843_, v___y_5819_, v___y_5820_, v___y_5821_, v___y_5822_);
if (lean_obj_tag(v___x_5860_) == 0)
{
lean_object* v_a_5861_; lean_object* v___x_5863_; uint8_t v_isShared_5864_; uint8_t v_isSharedCheck_5877_; 
v_a_5861_ = lean_ctor_get(v___x_5860_, 0);
v_isSharedCheck_5877_ = !lean_is_exclusive(v___x_5860_);
if (v_isSharedCheck_5877_ == 0)
{
v___x_5863_ = v___x_5860_;
v_isShared_5864_ = v_isSharedCheck_5877_;
goto v_resetjp_5862_;
}
else
{
lean_inc(v_a_5861_);
lean_dec(v___x_5860_);
v___x_5863_ = lean_box(0);
v_isShared_5864_ = v_isSharedCheck_5877_;
goto v_resetjp_5862_;
}
v_resetjp_5862_:
{
lean_object* v___x_5866_; 
if (v_isShared_5854_ == 0)
{
lean_ctor_set(v___x_5853_, 1, v_fst_5851_);
lean_ctor_set(v___x_5853_, 0, v_fst_5847_);
v___x_5866_ = v___x_5853_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5876_; 
v_reuseFailAlloc_5876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5876_, 0, v_fst_5847_);
lean_ctor_set(v_reuseFailAlloc_5876_, 1, v_fst_5851_);
v___x_5866_ = v_reuseFailAlloc_5876_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
lean_object* v___x_5868_; 
if (v_isShared_5850_ == 0)
{
lean_ctor_set(v___x_5849_, 1, v___x_5866_);
lean_ctor_set(v___x_5849_, 0, v_a_5861_);
v___x_5868_ = v___x_5849_;
goto v_reusejp_5867_;
}
else
{
lean_object* v_reuseFailAlloc_5875_; 
v_reuseFailAlloc_5875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5875_, 0, v_a_5861_);
lean_ctor_set(v_reuseFailAlloc_5875_, 1, v___x_5866_);
v___x_5868_ = v_reuseFailAlloc_5875_;
goto v_reusejp_5867_;
}
v_reusejp_5867_:
{
lean_object* v___x_5870_; 
if (v_isShared_5846_ == 0)
{
lean_ctor_set(v___x_5845_, 1, v___x_5868_);
lean_ctor_set(v___x_5845_, 0, v_a_5859_);
v___x_5870_ = v___x_5845_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v_a_5859_);
lean_ctor_set(v_reuseFailAlloc_5874_, 1, v___x_5868_);
v___x_5870_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
lean_object* v___x_5872_; 
if (v_isShared_5864_ == 0)
{
lean_ctor_set(v___x_5863_, 0, v___x_5870_);
v___x_5872_ = v___x_5863_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v___x_5870_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
return v___x_5872_;
}
}
}
}
}
}
else
{
lean_object* v_a_5878_; lean_object* v___x_5880_; uint8_t v_isShared_5881_; uint8_t v_isSharedCheck_5885_; 
lean_dec(v_a_5859_);
lean_del_object(v___x_5853_);
lean_dec(v_fst_5851_);
lean_del_object(v___x_5849_);
lean_dec(v_fst_5847_);
lean_del_object(v___x_5845_);
v_a_5878_ = lean_ctor_get(v___x_5860_, 0);
v_isSharedCheck_5885_ = !lean_is_exclusive(v___x_5860_);
if (v_isSharedCheck_5885_ == 0)
{
v___x_5880_ = v___x_5860_;
v_isShared_5881_ = v_isSharedCheck_5885_;
goto v_resetjp_5879_;
}
else
{
lean_inc(v_a_5878_);
lean_dec(v___x_5860_);
v___x_5880_ = lean_box(0);
v_isShared_5881_ = v_isSharedCheck_5885_;
goto v_resetjp_5879_;
}
v_resetjp_5879_:
{
lean_object* v___x_5883_; 
if (v_isShared_5881_ == 0)
{
v___x_5883_ = v___x_5880_;
goto v_reusejp_5882_;
}
else
{
lean_object* v_reuseFailAlloc_5884_; 
v_reuseFailAlloc_5884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5884_, 0, v_a_5878_);
v___x_5883_ = v_reuseFailAlloc_5884_;
goto v_reusejp_5882_;
}
v_reusejp_5882_:
{
return v___x_5883_;
}
}
}
}
else
{
lean_object* v_a_5886_; lean_object* v___x_5888_; uint8_t v_isShared_5889_; uint8_t v_isSharedCheck_5893_; 
lean_del_object(v___x_5853_);
lean_dec(v_fst_5851_);
lean_del_object(v___x_5849_);
lean_dec(v_fst_5847_);
lean_del_object(v___x_5845_);
lean_dec(v_fst_5843_);
v_a_5886_ = lean_ctor_get(v___x_5858_, 0);
v_isSharedCheck_5893_ = !lean_is_exclusive(v___x_5858_);
if (v_isSharedCheck_5893_ == 0)
{
v___x_5888_ = v___x_5858_;
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
else
{
lean_inc(v_a_5886_);
lean_dec(v___x_5858_);
v___x_5888_ = lean_box(0);
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
v_resetjp_5887_:
{
lean_object* v___x_5891_; 
if (v_isShared_5889_ == 0)
{
v___x_5891_ = v___x_5888_;
goto v_reusejp_5890_;
}
else
{
lean_object* v_reuseFailAlloc_5892_; 
v_reuseFailAlloc_5892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5892_, 0, v_a_5886_);
v___x_5891_ = v_reuseFailAlloc_5892_;
goto v_reusejp_5890_;
}
v_reusejp_5890_:
{
return v___x_5891_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5900_; lean_object* v___x_5902_; uint8_t v_isShared_5903_; uint8_t v_isSharedCheck_5907_; 
lean_dec_ref(v_motiveArgs_5817_);
v_a_5900_ = lean_ctor_get(v___x_5839_, 0);
v_isSharedCheck_5907_ = !lean_is_exclusive(v___x_5839_);
if (v_isSharedCheck_5907_ == 0)
{
v___x_5902_ = v___x_5839_;
v_isShared_5903_ = v_isSharedCheck_5907_;
goto v_resetjp_5901_;
}
else
{
lean_inc(v_a_5900_);
lean_dec(v___x_5839_);
v___x_5902_ = lean_box(0);
v_isShared_5903_ = v_isSharedCheck_5907_;
goto v_resetjp_5901_;
}
v_resetjp_5901_:
{
lean_object* v___x_5905_; 
if (v_isShared_5903_ == 0)
{
v___x_5905_ = v___x_5902_;
goto v_reusejp_5904_;
}
else
{
lean_object* v_reuseFailAlloc_5906_; 
v_reuseFailAlloc_5906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5906_, 0, v_a_5900_);
v___x_5905_ = v_reuseFailAlloc_5906_;
goto v_reusejp_5904_;
}
v_reusejp_5904_:
{
return v___x_5905_;
}
}
}
}
else
{
lean_object* v_a_5908_; lean_object* v___x_5910_; uint8_t v_isShared_5911_; uint8_t v_isSharedCheck_5915_; 
lean_dec_ref(v_motiveArgs_5817_);
lean_dec_ref(v_a_5813_);
lean_dec_ref(v_toMatcherInfo_5812_);
v_a_5908_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5915_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5915_ == 0)
{
v___x_5910_ = v___x_5825_;
v_isShared_5911_ = v_isSharedCheck_5915_;
goto v_resetjp_5909_;
}
else
{
lean_inc(v_a_5908_);
lean_dec(v___x_5825_);
v___x_5910_ = lean_box(0);
v_isShared_5911_ = v_isSharedCheck_5915_;
goto v_resetjp_5909_;
}
v_resetjp_5909_:
{
lean_object* v___x_5913_; 
if (v_isShared_5911_ == 0)
{
v___x_5913_ = v___x_5910_;
goto v_reusejp_5912_;
}
else
{
lean_object* v_reuseFailAlloc_5914_; 
v_reuseFailAlloc_5914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5914_, 0, v_a_5908_);
v___x_5913_ = v_reuseFailAlloc_5914_;
goto v_reusejp_5912_;
}
v_reusejp_5912_:
{
return v___x_5913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object* v_onMotive_5935_, lean_object* v_toMatcherInfo_5936_, lean_object* v_a_5937_, lean_object* v_addEqualities_5938_, lean_object* v___x_5939_, lean_object* v_discrs_5940_, lean_object* v_motiveArgs_5941_, lean_object* v_motiveBody_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_, lean_object* v___y_5947_){
_start:
{
uint8_t v_addEqualities_boxed_5948_; size_t v___x_34595__boxed_5949_; lean_object* v_res_5950_; 
v_addEqualities_boxed_5948_ = lean_unbox(v_addEqualities_5938_);
v___x_34595__boxed_5949_ = lean_unbox_usize(v___x_5939_);
lean_dec(v___x_5939_);
v_res_5950_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(v_onMotive_5935_, v_toMatcherInfo_5936_, v_a_5937_, v_addEqualities_boxed_5948_, v___x_34595__boxed_5949_, v_discrs_5940_, v_motiveArgs_5941_, v_motiveBody_5942_, v___y_5943_, v___y_5944_, v___y_5945_, v___y_5946_);
lean_dec(v___y_5946_);
lean_dec_ref(v___y_5945_);
lean_dec(v___y_5944_);
lean_dec_ref(v___y_5943_);
lean_dec_ref(v_discrs_5940_);
return v_res_5950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object* v_as_5951_, size_t v_sz_5952_, size_t v_i_5953_, lean_object* v_b_5954_, lean_object* v___y_5955_, lean_object* v___y_5956_, lean_object* v___y_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v_a_5961_; uint8_t v___x_5965_; 
v___x_5965_ = lean_usize_dec_lt(v_i_5953_, v_sz_5952_);
if (v___x_5965_ == 0)
{
lean_object* v___x_5966_; 
v___x_5966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5966_, 0, v_b_5954_);
return v___x_5966_;
}
else
{
lean_object* v_snd_5967_; lean_object* v_snd_5968_; lean_object* v_fst_5969_; lean_object* v___x_5971_; uint8_t v_isShared_5972_; uint8_t v_isSharedCheck_6029_; 
v_snd_5967_ = lean_ctor_get(v_b_5954_, 1);
lean_inc(v_snd_5967_);
v_snd_5968_ = lean_ctor_get(v_snd_5967_, 1);
lean_inc(v_snd_5968_);
v_fst_5969_ = lean_ctor_get(v_b_5954_, 0);
v_isSharedCheck_6029_ = !lean_is_exclusive(v_b_5954_);
if (v_isSharedCheck_6029_ == 0)
{
lean_object* v_unused_6030_; 
v_unused_6030_ = lean_ctor_get(v_b_5954_, 1);
lean_dec(v_unused_6030_);
v___x_5971_ = v_b_5954_;
v_isShared_5972_ = v_isSharedCheck_6029_;
goto v_resetjp_5970_;
}
else
{
lean_inc(v_fst_5969_);
lean_dec(v_b_5954_);
v___x_5971_ = lean_box(0);
v_isShared_5972_ = v_isSharedCheck_6029_;
goto v_resetjp_5970_;
}
v_resetjp_5970_:
{
lean_object* v_fst_5973_; lean_object* v___x_5975_; uint8_t v_isShared_5976_; uint8_t v_isSharedCheck_6027_; 
v_fst_5973_ = lean_ctor_get(v_snd_5967_, 0);
v_isSharedCheck_6027_ = !lean_is_exclusive(v_snd_5967_);
if (v_isSharedCheck_6027_ == 0)
{
lean_object* v_unused_6028_; 
v_unused_6028_ = lean_ctor_get(v_snd_5967_, 1);
lean_dec(v_unused_6028_);
v___x_5975_ = v_snd_5967_;
v_isShared_5976_ = v_isSharedCheck_6027_;
goto v_resetjp_5974_;
}
else
{
lean_inc(v_fst_5973_);
lean_dec(v_snd_5967_);
v___x_5975_ = lean_box(0);
v_isShared_5976_ = v_isSharedCheck_6027_;
goto v_resetjp_5974_;
}
v_resetjp_5974_:
{
lean_object* v_array_5977_; lean_object* v_start_5978_; lean_object* v_stop_5979_; uint8_t v___x_5980_; 
v_array_5977_ = lean_ctor_get(v_snd_5968_, 0);
v_start_5978_ = lean_ctor_get(v_snd_5968_, 1);
v_stop_5979_ = lean_ctor_get(v_snd_5968_, 2);
v___x_5980_ = lean_nat_dec_lt(v_start_5978_, v_stop_5979_);
if (v___x_5980_ == 0)
{
lean_object* v___x_5982_; 
if (v_isShared_5976_ == 0)
{
v___x_5982_ = v___x_5975_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5987_; 
v_reuseFailAlloc_5987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5987_, 0, v_fst_5973_);
lean_ctor_set(v_reuseFailAlloc_5987_, 1, v_snd_5968_);
v___x_5982_ = v_reuseFailAlloc_5987_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
lean_object* v___x_5984_; 
if (v_isShared_5972_ == 0)
{
lean_ctor_set(v___x_5971_, 1, v___x_5982_);
v___x_5984_ = v___x_5971_;
goto v_reusejp_5983_;
}
else
{
lean_object* v_reuseFailAlloc_5986_; 
v_reuseFailAlloc_5986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5986_, 0, v_fst_5969_);
lean_ctor_set(v_reuseFailAlloc_5986_, 1, v___x_5982_);
v___x_5984_ = v_reuseFailAlloc_5986_;
goto v_reusejp_5983_;
}
v_reusejp_5983_:
{
lean_object* v___x_5985_; 
v___x_5985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5985_, 0, v___x_5984_);
return v___x_5985_;
}
}
}
else
{
lean_object* v___x_5989_; uint8_t v_isShared_5990_; uint8_t v_isSharedCheck_6023_; 
lean_inc(v_stop_5979_);
lean_inc(v_start_5978_);
lean_inc_ref(v_array_5977_);
v_isSharedCheck_6023_ = !lean_is_exclusive(v_snd_5968_);
if (v_isSharedCheck_6023_ == 0)
{
lean_object* v_unused_6024_; lean_object* v_unused_6025_; lean_object* v_unused_6026_; 
v_unused_6024_ = lean_ctor_get(v_snd_5968_, 2);
lean_dec(v_unused_6024_);
v_unused_6025_ = lean_ctor_get(v_snd_5968_, 1);
lean_dec(v_unused_6025_);
v_unused_6026_ = lean_ctor_get(v_snd_5968_, 0);
lean_dec(v_unused_6026_);
v___x_5989_ = v_snd_5968_;
v_isShared_5990_ = v_isSharedCheck_6023_;
goto v_resetjp_5988_;
}
else
{
lean_dec(v_snd_5968_);
v___x_5989_ = lean_box(0);
v_isShared_5990_ = v_isSharedCheck_6023_;
goto v_resetjp_5988_;
}
v_resetjp_5988_:
{
lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5995_; 
v___x_5991_ = lean_array_fget(v_array_5977_, v_start_5978_);
v___x_5992_ = lean_unsigned_to_nat(1u);
v___x_5993_ = lean_nat_add(v_start_5978_, v___x_5992_);
lean_dec(v_start_5978_);
if (v_isShared_5990_ == 0)
{
lean_ctor_set(v___x_5989_, 1, v___x_5993_);
v___x_5995_ = v___x_5989_;
goto v_reusejp_5994_;
}
else
{
lean_object* v_reuseFailAlloc_6022_; 
v_reuseFailAlloc_6022_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6022_, 0, v_array_5977_);
lean_ctor_set(v_reuseFailAlloc_6022_, 1, v___x_5993_);
lean_ctor_set(v_reuseFailAlloc_6022_, 2, v_stop_5979_);
v___x_5995_ = v_reuseFailAlloc_6022_;
goto v_reusejp_5994_;
}
v_reusejp_5994_:
{
lean_object* v___y_5997_; 
if (lean_obj_tag(v___x_5991_) == 0)
{
lean_object* v___x_6015_; lean_object* v___x_6016_; 
lean_del_object(v___x_5975_);
lean_del_object(v___x_5971_);
v___x_6015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6015_, 0, v_fst_5973_);
lean_ctor_set(v___x_6015_, 1, v___x_5995_);
v___x_6016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6016_, 0, v_fst_5969_);
lean_ctor_set(v___x_6016_, 1, v___x_6015_);
v_a_5961_ = v___x_6016_;
goto v___jp_5960_;
}
else
{
lean_object* v_val_6017_; lean_object* v_a_6018_; uint8_t v___x_6019_; 
v_val_6017_ = lean_ctor_get(v___x_5991_, 0);
lean_inc(v_val_6017_);
lean_dec_ref_known(v___x_5991_, 1);
v_a_6018_ = lean_array_uget_borrowed(v_as_5951_, v_i_5953_);
v___x_6019_ = lean_unbox(v_val_6017_);
lean_dec(v_val_6017_);
if (v___x_6019_ == 0)
{
lean_object* v___x_6020_; 
lean_inc(v_a_6018_);
v___x_6020_ = l_Lean_Meta_mkEqRefl(v_a_6018_, v___y_5955_, v___y_5956_, v___y_5957_, v___y_5958_);
v___y_5997_ = v___x_6020_;
goto v___jp_5996_;
}
else
{
lean_object* v___x_6021_; 
lean_inc(v_a_6018_);
v___x_6021_ = l_Lean_Meta_mkHEqRefl(v_a_6018_, v___y_5955_, v___y_5956_, v___y_5957_, v___y_5958_);
v___y_5997_ = v___x_6021_;
goto v___jp_5996_;
}
}
v___jp_5996_:
{
if (lean_obj_tag(v___y_5997_) == 0)
{
lean_object* v_a_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6002_; 
v_a_5998_ = lean_ctor_get(v___y_5997_, 0);
lean_inc(v_a_5998_);
lean_dec_ref_known(v___y_5997_, 1);
v___x_5999_ = lean_array_push(v_fst_5969_, v_a_5998_);
v___x_6000_ = lean_nat_add(v_fst_5973_, v___x_5992_);
lean_dec(v_fst_5973_);
if (v_isShared_5976_ == 0)
{
lean_ctor_set(v___x_5975_, 1, v___x_5995_);
lean_ctor_set(v___x_5975_, 0, v___x_6000_);
v___x_6002_ = v___x_5975_;
goto v_reusejp_6001_;
}
else
{
lean_object* v_reuseFailAlloc_6006_; 
v_reuseFailAlloc_6006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6006_, 0, v___x_6000_);
lean_ctor_set(v_reuseFailAlloc_6006_, 1, v___x_5995_);
v___x_6002_ = v_reuseFailAlloc_6006_;
goto v_reusejp_6001_;
}
v_reusejp_6001_:
{
lean_object* v___x_6004_; 
if (v_isShared_5972_ == 0)
{
lean_ctor_set(v___x_5971_, 1, v___x_6002_);
lean_ctor_set(v___x_5971_, 0, v___x_5999_);
v___x_6004_ = v___x_5971_;
goto v_reusejp_6003_;
}
else
{
lean_object* v_reuseFailAlloc_6005_; 
v_reuseFailAlloc_6005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6005_, 0, v___x_5999_);
lean_ctor_set(v_reuseFailAlloc_6005_, 1, v___x_6002_);
v___x_6004_ = v_reuseFailAlloc_6005_;
goto v_reusejp_6003_;
}
v_reusejp_6003_:
{
v_a_5961_ = v___x_6004_;
goto v___jp_5960_;
}
}
}
else
{
lean_object* v_a_6007_; lean_object* v___x_6009_; uint8_t v_isShared_6010_; uint8_t v_isSharedCheck_6014_; 
lean_dec_ref(v___x_5995_);
lean_del_object(v___x_5975_);
lean_dec(v_fst_5973_);
lean_del_object(v___x_5971_);
lean_dec(v_fst_5969_);
v_a_6007_ = lean_ctor_get(v___y_5997_, 0);
v_isSharedCheck_6014_ = !lean_is_exclusive(v___y_5997_);
if (v_isSharedCheck_6014_ == 0)
{
v___x_6009_ = v___y_5997_;
v_isShared_6010_ = v_isSharedCheck_6014_;
goto v_resetjp_6008_;
}
else
{
lean_inc(v_a_6007_);
lean_dec(v___y_5997_);
v___x_6009_ = lean_box(0);
v_isShared_6010_ = v_isSharedCheck_6014_;
goto v_resetjp_6008_;
}
v_resetjp_6008_:
{
lean_object* v___x_6012_; 
if (v_isShared_6010_ == 0)
{
v___x_6012_ = v___x_6009_;
goto v_reusejp_6011_;
}
else
{
lean_object* v_reuseFailAlloc_6013_; 
v_reuseFailAlloc_6013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6013_, 0, v_a_6007_);
v___x_6012_ = v_reuseFailAlloc_6013_;
goto v_reusejp_6011_;
}
v_reusejp_6011_:
{
return v___x_6012_;
}
}
}
}
}
}
}
}
}
}
v___jp_5960_:
{
size_t v___x_5962_; size_t v___x_5963_; 
v___x_5962_ = ((size_t)1ULL);
v___x_5963_ = lean_usize_add(v_i_5953_, v___x_5962_);
v_i_5953_ = v___x_5963_;
v_b_5954_ = v_a_5961_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object* v_as_6031_, lean_object* v_sz_6032_, lean_object* v_i_6033_, lean_object* v_b_6034_, lean_object* v___y_6035_, lean_object* v___y_6036_, lean_object* v___y_6037_, lean_object* v___y_6038_, lean_object* v___y_6039_){
_start:
{
size_t v_sz_boxed_6040_; size_t v_i_boxed_6041_; lean_object* v_res_6042_; 
v_sz_boxed_6040_ = lean_unbox_usize(v_sz_6032_);
lean_dec(v_sz_6032_);
v_i_boxed_6041_ = lean_unbox_usize(v_i_6033_);
lean_dec(v_i_6033_);
v_res_6042_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v_as_6031_, v_sz_boxed_6040_, v_i_boxed_6041_, v_b_6034_, v___y_6035_, v___y_6036_, v___y_6037_, v___y_6038_);
lean_dec(v___y_6038_);
lean_dec_ref(v___y_6037_);
lean_dec(v___y_6036_);
lean_dec_ref(v___y_6035_);
lean_dec_ref(v_as_6031_);
return v_res_6042_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object* v___x_6043_, lean_object* v___y_6044_, lean_object* v___y_6045_, lean_object* v___y_6046_, lean_object* v___y_6047_){
_start:
{
lean_object* v___x_6049_; 
v___x_6049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6049_, 0, v___x_6043_);
return v___x_6049_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v___x_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_, lean_object* v___y_6053_, lean_object* v___y_6054_, lean_object* v___y_6055_){
_start:
{
lean_object* v_res_6056_; 
v_res_6056_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(v___x_6050_, v___y_6051_, v___y_6052_, v___y_6053_, v___y_6054_);
lean_dec(v___y_6054_);
lean_dec_ref(v___y_6053_);
lean_dec(v___y_6052_);
lean_dec_ref(v___y_6051_);
return v_res_6056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t v_sz_6057_, size_t v_i_6058_, lean_object* v_bs_6059_, lean_object* v___y_6060_, lean_object* v___y_6061_, lean_object* v___y_6062_){
_start:
{
uint8_t v___x_6064_; 
v___x_6064_ = lean_usize_dec_lt(v_i_6058_, v_sz_6057_);
if (v___x_6064_ == 0)
{
lean_object* v___x_6065_; 
v___x_6065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6065_, 0, v_bs_6059_);
return v___x_6065_;
}
else
{
lean_object* v_v_6066_; lean_object* v___x_6067_; lean_object* v_bs_x27_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; 
v_v_6066_ = lean_array_uget(v_bs_6059_, v_i_6058_);
v___x_6067_ = lean_unsigned_to_nat(0u);
v_bs_x27_6068_ = lean_array_uset(v_bs_6059_, v_i_6058_, v___x_6067_);
v___x_6069_ = l_Lean_Expr_fvarId_x21(v_v_6066_);
lean_dec(v_v_6066_);
v___x_6070_ = l_Lean_FVarId_getUserName___redArg(v___x_6069_, v___y_6060_, v___y_6061_, v___y_6062_);
if (lean_obj_tag(v___x_6070_) == 0)
{
lean_object* v_a_6071_; size_t v___x_6072_; size_t v___x_6073_; lean_object* v___x_6074_; 
v_a_6071_ = lean_ctor_get(v___x_6070_, 0);
lean_inc(v_a_6071_);
lean_dec_ref_known(v___x_6070_, 1);
v___x_6072_ = ((size_t)1ULL);
v___x_6073_ = lean_usize_add(v_i_6058_, v___x_6072_);
v___x_6074_ = lean_array_uset(v_bs_x27_6068_, v_i_6058_, v_a_6071_);
v_i_6058_ = v___x_6073_;
v_bs_6059_ = v___x_6074_;
goto _start;
}
else
{
lean_object* v_a_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6083_; 
lean_dec_ref(v_bs_x27_6068_);
v_a_6076_ = lean_ctor_get(v___x_6070_, 0);
v_isSharedCheck_6083_ = !lean_is_exclusive(v___x_6070_);
if (v_isSharedCheck_6083_ == 0)
{
v___x_6078_ = v___x_6070_;
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_a_6076_);
lean_dec(v___x_6070_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6083_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6081_; 
if (v_isShared_6079_ == 0)
{
v___x_6081_ = v___x_6078_;
goto v_reusejp_6080_;
}
else
{
lean_object* v_reuseFailAlloc_6082_; 
v_reuseFailAlloc_6082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6082_, 0, v_a_6076_);
v___x_6081_ = v_reuseFailAlloc_6082_;
goto v_reusejp_6080_;
}
v_reusejp_6080_:
{
return v___x_6081_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object* v_sz_6084_, lean_object* v_i_6085_, lean_object* v_bs_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_){
_start:
{
size_t v_sz_boxed_6091_; size_t v_i_boxed_6092_; lean_object* v_res_6093_; 
v_sz_boxed_6091_ = lean_unbox_usize(v_sz_6084_);
lean_dec(v_sz_6084_);
v_i_boxed_6092_ = lean_unbox_usize(v_i_6085_);
lean_dec(v_i_6085_);
v_res_6093_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_boxed_6091_, v_i_boxed_6092_, v_bs_6086_, v___y_6087_, v___y_6088_, v___y_6089_);
lean_dec(v___y_6089_);
lean_dec_ref(v___y_6088_);
lean_dec_ref(v___y_6087_);
return v_res_6093_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object* v_xs_6094_, lean_object* v_x_6095_, lean_object* v___y_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_, lean_object* v___y_6099_){
_start:
{
size_t v_sz_6101_; size_t v___x_6102_; lean_object* v___x_6103_; 
v_sz_6101_ = lean_array_size(v_xs_6094_);
v___x_6102_ = ((size_t)0ULL);
v___x_6103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_6101_, v___x_6102_, v_xs_6094_, v___y_6096_, v___y_6098_, v___y_6099_);
return v___x_6103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object* v_xs_6104_, lean_object* v_x_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_){
_start:
{
lean_object* v_res_6111_; 
v_res_6111_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(v_xs_6104_, v_x_6105_, v___y_6106_, v___y_6107_, v___y_6108_, v___y_6109_);
lean_dec(v___y_6109_);
lean_dec_ref(v___y_6108_);
lean_dec(v___y_6107_);
lean_dec_ref(v___y_6106_);
lean_dec_ref(v_x_6105_);
return v_res_6111_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object* v___x_6112_, lean_object* v___x_6113_, lean_object* v___f_6114_, uint8_t v___x_6115_, lean_object* v_fst_6116_, lean_object* v___x_6117_, lean_object* v___x_6118_, lean_object* v___x_6119_, lean_object* v___y_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_, lean_object* v___y_6123_){
_start:
{
lean_object* v___x_6125_; 
v___x_6125_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v___x_6112_, v___x_6113_, v___f_6114_, v___x_6115_, v___x_6115_, v___y_6120_, v___y_6121_, v___y_6122_, v___y_6123_);
if (lean_obj_tag(v___x_6125_) == 0)
{
lean_object* v_a_6126_; lean_object* v___x_6128_; uint8_t v_isShared_6129_; uint8_t v_isSharedCheck_6138_; 
v_a_6126_ = lean_ctor_get(v___x_6125_, 0);
v_isSharedCheck_6138_ = !lean_is_exclusive(v___x_6125_);
if (v_isSharedCheck_6138_ == 0)
{
v___x_6128_ = v___x_6125_;
v_isShared_6129_ = v_isSharedCheck_6138_;
goto v_resetjp_6127_;
}
else
{
lean_inc(v_a_6126_);
lean_dec(v___x_6125_);
v___x_6128_ = lean_box(0);
v_isShared_6129_ = v_isSharedCheck_6138_;
goto v_resetjp_6127_;
}
v_resetjp_6127_:
{
lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6136_; 
v___x_6130_ = lean_array_push(v_fst_6116_, v_a_6126_);
v___x_6131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6117_);
lean_ctor_set(v___x_6131_, 1, v___x_6118_);
v___x_6132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6132_, 0, v___x_6119_);
lean_ctor_set(v___x_6132_, 1, v___x_6131_);
v___x_6133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6133_, 0, v___x_6130_);
lean_ctor_set(v___x_6133_, 1, v___x_6132_);
v___x_6134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6134_, 0, v___x_6133_);
if (v_isShared_6129_ == 0)
{
lean_ctor_set(v___x_6128_, 0, v___x_6134_);
v___x_6136_ = v___x_6128_;
goto v_reusejp_6135_;
}
else
{
lean_object* v_reuseFailAlloc_6137_; 
v_reuseFailAlloc_6137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6137_, 0, v___x_6134_);
v___x_6136_ = v_reuseFailAlloc_6137_;
goto v_reusejp_6135_;
}
v_reusejp_6135_:
{
return v___x_6136_;
}
}
}
else
{
lean_object* v_a_6139_; lean_object* v___x_6141_; uint8_t v_isShared_6142_; uint8_t v_isSharedCheck_6146_; 
lean_dec_ref(v___x_6119_);
lean_dec_ref(v___x_6118_);
lean_dec_ref(v___x_6117_);
lean_dec(v_fst_6116_);
v_a_6139_ = lean_ctor_get(v___x_6125_, 0);
v_isSharedCheck_6146_ = !lean_is_exclusive(v___x_6125_);
if (v_isSharedCheck_6146_ == 0)
{
v___x_6141_ = v___x_6125_;
v_isShared_6142_ = v_isSharedCheck_6146_;
goto v_resetjp_6140_;
}
else
{
lean_inc(v_a_6139_);
lean_dec(v___x_6125_);
v___x_6141_ = lean_box(0);
v_isShared_6142_ = v_isSharedCheck_6146_;
goto v_resetjp_6140_;
}
v_resetjp_6140_:
{
lean_object* v___x_6144_; 
if (v_isShared_6142_ == 0)
{
v___x_6144_ = v___x_6141_;
goto v_reusejp_6143_;
}
else
{
lean_object* v_reuseFailAlloc_6145_; 
v_reuseFailAlloc_6145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6145_, 0, v_a_6139_);
v___x_6144_ = v_reuseFailAlloc_6145_;
goto v_reusejp_6143_;
}
v_reusejp_6143_:
{
return v___x_6144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object* v___x_6147_, lean_object* v___x_6148_, lean_object* v___f_6149_, lean_object* v___x_6150_, lean_object* v_fst_6151_, lean_object* v___x_6152_, lean_object* v___x_6153_, lean_object* v___x_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_){
_start:
{
uint8_t v___x_35058__boxed_6160_; lean_object* v_res_6161_; 
v___x_35058__boxed_6160_ = lean_unbox(v___x_6150_);
v_res_6161_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(v___x_6147_, v___x_6148_, v___f_6149_, v___x_35058__boxed_6160_, v_fst_6151_, v___x_6152_, v___x_6153_, v___x_6154_, v___y_6155_, v___y_6156_, v___y_6157_, v___y_6158_);
lean_dec(v___y_6158_);
lean_dec_ref(v___y_6157_);
lean_dec(v___y_6156_);
lean_dec_ref(v___y_6155_);
return v_res_6161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object* v_fvars_6162_, lean_object* v_names_6163_, lean_object* v_k_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_){
_start:
{
lean_object* v___x_6170_; 
v___x_6170_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_6162_, v_names_6163_, v_k_6164_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_);
if (lean_obj_tag(v___x_6170_) == 0)
{
lean_object* v_a_6171_; lean_object* v___x_6173_; uint8_t v_isShared_6174_; uint8_t v_isSharedCheck_6178_; 
v_a_6171_ = lean_ctor_get(v___x_6170_, 0);
v_isSharedCheck_6178_ = !lean_is_exclusive(v___x_6170_);
if (v_isSharedCheck_6178_ == 0)
{
v___x_6173_ = v___x_6170_;
v_isShared_6174_ = v_isSharedCheck_6178_;
goto v_resetjp_6172_;
}
else
{
lean_inc(v_a_6171_);
lean_dec(v___x_6170_);
v___x_6173_ = lean_box(0);
v_isShared_6174_ = v_isSharedCheck_6178_;
goto v_resetjp_6172_;
}
v_resetjp_6172_:
{
lean_object* v___x_6176_; 
if (v_isShared_6174_ == 0)
{
v___x_6176_ = v___x_6173_;
goto v_reusejp_6175_;
}
else
{
lean_object* v_reuseFailAlloc_6177_; 
v_reuseFailAlloc_6177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6177_, 0, v_a_6171_);
v___x_6176_ = v_reuseFailAlloc_6177_;
goto v_reusejp_6175_;
}
v_reusejp_6175_:
{
return v___x_6176_;
}
}
}
else
{
lean_object* v_a_6179_; lean_object* v___x_6181_; uint8_t v_isShared_6182_; uint8_t v_isSharedCheck_6186_; 
v_a_6179_ = lean_ctor_get(v___x_6170_, 0);
v_isSharedCheck_6186_ = !lean_is_exclusive(v___x_6170_);
if (v_isSharedCheck_6186_ == 0)
{
v___x_6181_ = v___x_6170_;
v_isShared_6182_ = v_isSharedCheck_6186_;
goto v_resetjp_6180_;
}
else
{
lean_inc(v_a_6179_);
lean_dec(v___x_6170_);
v___x_6181_ = lean_box(0);
v_isShared_6182_ = v_isSharedCheck_6186_;
goto v_resetjp_6180_;
}
v_resetjp_6180_:
{
lean_object* v___x_6184_; 
if (v_isShared_6182_ == 0)
{
v___x_6184_ = v___x_6181_;
goto v_reusejp_6183_;
}
else
{
lean_object* v_reuseFailAlloc_6185_; 
v_reuseFailAlloc_6185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6185_, 0, v_a_6179_);
v___x_6184_ = v_reuseFailAlloc_6185_;
goto v_reusejp_6183_;
}
v_reusejp_6183_:
{
return v___x_6184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object* v_fvars_6187_, lean_object* v_names_6188_, lean_object* v_k_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_){
_start:
{
lean_object* v_res_6195_; 
v_res_6195_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6187_, v_names_6188_, v_k_6189_, v___y_6190_, v___y_6191_, v___y_6192_, v___y_6193_);
lean_dec(v___y_6193_);
lean_dec_ref(v___y_6192_);
lean_dec(v___y_6191_);
lean_dec_ref(v___y_6190_);
lean_dec_ref(v_names_6188_);
lean_dec_ref(v_fvars_6187_);
return v_res_6195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object* v___x_6196_, lean_object* v_xs_6197_, lean_object* v_remaining_x27_6198_, lean_object* v_ys4_6199_, lean_object* v_onAlt_6200_, lean_object* v_a_6201_, lean_object* v_altType_6202_, uint8_t v___x_6203_, uint8_t v___x_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_, lean_object* v___y_6208_){
_start:
{
lean_object* v___x_6210_; 
v___x_6210_ = l_Lean_Meta_instantiateLambda(v___x_6196_, v_xs_6197_, v___y_6205_, v___y_6206_, v___y_6207_, v___y_6208_);
if (lean_obj_tag(v___x_6210_) == 0)
{
lean_object* v_a_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; 
v_a_6211_ = lean_ctor_get(v___x_6210_, 0);
lean_inc(v_a_6211_);
lean_dec_ref_known(v___x_6210_, 1);
lean_inc_ref(v_ys4_6199_);
lean_inc_ref(v_remaining_x27_6198_);
lean_inc_ref_n(v_xs_6197_, 2);
v___x_6212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6212_, 0, v_xs_6197_);
lean_ctor_set(v___x_6212_, 1, v_xs_6197_);
lean_ctor_set(v___x_6212_, 2, v_remaining_x27_6198_);
lean_ctor_set(v___x_6212_, 3, v_remaining_x27_6198_);
lean_ctor_set(v___x_6212_, 4, v_ys4_6199_);
lean_inc(v___y_6208_);
lean_inc_ref(v___y_6207_);
lean_inc(v___y_6206_);
lean_inc_ref(v___y_6205_);
v___x_6213_ = lean_apply_9(v_onAlt_6200_, v_a_6201_, v_altType_6202_, v___x_6212_, v_a_6211_, v___y_6205_, v___y_6206_, v___y_6207_, v___y_6208_, lean_box(0));
if (lean_obj_tag(v___x_6213_) == 0)
{
lean_object* v_a_6214_; lean_object* v___x_6215_; uint8_t v___x_6216_; lean_object* v___x_6217_; 
v_a_6214_ = lean_ctor_get(v___x_6213_, 0);
lean_inc(v_a_6214_);
lean_dec_ref_known(v___x_6213_, 1);
v___x_6215_ = l_Array_append___redArg(v_xs_6197_, v_ys4_6199_);
lean_dec_ref(v_ys4_6199_);
v___x_6216_ = 1;
v___x_6217_ = l_Lean_Meta_mkLambdaFVars(v___x_6215_, v_a_6214_, v___x_6203_, v___x_6204_, v___x_6203_, v___x_6204_, v___x_6216_, v___y_6205_, v___y_6206_, v___y_6207_, v___y_6208_);
lean_dec(v___y_6208_);
lean_dec_ref(v___y_6207_);
lean_dec(v___y_6206_);
lean_dec_ref(v___y_6205_);
lean_dec_ref(v___x_6215_);
return v___x_6217_;
}
else
{
lean_dec(v___y_6208_);
lean_dec_ref(v___y_6207_);
lean_dec(v___y_6206_);
lean_dec_ref(v___y_6205_);
lean_dec_ref(v_ys4_6199_);
lean_dec_ref(v_xs_6197_);
return v___x_6213_;
}
}
else
{
lean_dec(v___y_6208_);
lean_dec_ref(v___y_6207_);
lean_dec(v___y_6206_);
lean_dec_ref(v___y_6205_);
lean_dec_ref(v_altType_6202_);
lean_dec(v_a_6201_);
lean_dec_ref(v_onAlt_6200_);
lean_dec_ref(v_ys4_6199_);
lean_dec_ref(v_remaining_x27_6198_);
lean_dec_ref(v_xs_6197_);
return v___x_6210_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object* v___x_6218_, lean_object* v_xs_6219_, lean_object* v_remaining_x27_6220_, lean_object* v_ys4_6221_, lean_object* v_onAlt_6222_, lean_object* v_a_6223_, lean_object* v_altType_6224_, lean_object* v___x_6225_, lean_object* v___x_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_){
_start:
{
uint8_t v___x_35185__boxed_6232_; uint8_t v___x_35186__boxed_6233_; lean_object* v_res_6234_; 
v___x_35185__boxed_6232_ = lean_unbox(v___x_6225_);
v___x_35186__boxed_6233_ = lean_unbox(v___x_6226_);
v_res_6234_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(v___x_6218_, v_xs_6219_, v_remaining_x27_6220_, v_ys4_6221_, v_onAlt_6222_, v_a_6223_, v_altType_6224_, v___x_35185__boxed_6232_, v___x_35186__boxed_6233_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_);
return v_res_6234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object* v___x_6235_, lean_object* v_xs_6236_, lean_object* v_remaining_x27_6237_, lean_object* v_onAlt_6238_, lean_object* v_a_6239_, uint8_t v___x_6240_, uint8_t v___x_6241_, lean_object* v___f_6242_, lean_object* v_ys4_6243_, lean_object* v_altType_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_){
_start:
{
lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___f_6252_; lean_object* v___x_6253_; 
v___x_6250_ = lean_box(v___x_6240_);
v___x_6251_ = lean_box(v___x_6241_);
lean_inc_ref(v_xs_6236_);
lean_inc_ref(v___x_6235_);
v___f_6252_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_6252_, 0, v___x_6235_);
lean_closure_set(v___f_6252_, 1, v_xs_6236_);
lean_closure_set(v___f_6252_, 2, v_remaining_x27_6237_);
lean_closure_set(v___f_6252_, 3, v_ys4_6243_);
lean_closure_set(v___f_6252_, 4, v_onAlt_6238_);
lean_closure_set(v___f_6252_, 5, v_a_6239_);
lean_closure_set(v___f_6252_, 6, v_altType_6244_);
lean_closure_set(v___f_6252_, 7, v___x_6250_);
lean_closure_set(v___f_6252_, 8, v___x_6251_);
v___x_6253_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_6235_, v___f_6242_, v___x_6240_, v___y_6245_, v___y_6246_, v___y_6247_, v___y_6248_);
if (lean_obj_tag(v___x_6253_) == 0)
{
lean_object* v_a_6254_; lean_object* v___x_6255_; 
v_a_6254_ = lean_ctor_get(v___x_6253_, 0);
lean_inc(v_a_6254_);
lean_dec_ref_known(v___x_6253_, 1);
v___x_6255_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_xs_6236_, v_a_6254_, v___f_6252_, v___y_6245_, v___y_6246_, v___y_6247_, v___y_6248_);
lean_dec(v_a_6254_);
lean_dec_ref(v_xs_6236_);
return v___x_6255_;
}
else
{
lean_object* v_a_6256_; lean_object* v___x_6258_; uint8_t v_isShared_6259_; uint8_t v_isSharedCheck_6263_; 
lean_dec_ref(v___f_6252_);
lean_dec_ref(v_xs_6236_);
v_a_6256_ = lean_ctor_get(v___x_6253_, 0);
v_isSharedCheck_6263_ = !lean_is_exclusive(v___x_6253_);
if (v_isSharedCheck_6263_ == 0)
{
v___x_6258_ = v___x_6253_;
v_isShared_6259_ = v_isSharedCheck_6263_;
goto v_resetjp_6257_;
}
else
{
lean_inc(v_a_6256_);
lean_dec(v___x_6253_);
v___x_6258_ = lean_box(0);
v_isShared_6259_ = v_isSharedCheck_6263_;
goto v_resetjp_6257_;
}
v_resetjp_6257_:
{
lean_object* v___x_6261_; 
if (v_isShared_6259_ == 0)
{
v___x_6261_ = v___x_6258_;
goto v_reusejp_6260_;
}
else
{
lean_object* v_reuseFailAlloc_6262_; 
v_reuseFailAlloc_6262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6262_, 0, v_a_6256_);
v___x_6261_ = v_reuseFailAlloc_6262_;
goto v_reusejp_6260_;
}
v_reusejp_6260_:
{
return v___x_6261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_6264_, lean_object* v_xs_6265_, lean_object* v_remaining_x27_6266_, lean_object* v_onAlt_6267_, lean_object* v_a_6268_, lean_object* v___x_6269_, lean_object* v___x_6270_, lean_object* v___f_6271_, lean_object* v_ys4_6272_, lean_object* v_altType_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_){
_start:
{
uint8_t v___x_35227__boxed_6279_; uint8_t v___x_35228__boxed_6280_; lean_object* v_res_6281_; 
v___x_35227__boxed_6279_ = lean_unbox(v___x_6269_);
v___x_35228__boxed_6280_ = lean_unbox(v___x_6270_);
v_res_6281_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(v___x_6264_, v_xs_6265_, v_remaining_x27_6266_, v_onAlt_6267_, v_a_6268_, v___x_35227__boxed_6279_, v___x_35228__boxed_6280_, v___f_6271_, v_ys4_6272_, v_altType_6273_, v___y_6274_, v___y_6275_, v___y_6276_, v___y_6277_);
lean_dec(v___y_6277_);
lean_dec_ref(v___y_6276_);
lean_dec(v___y_6275_);
lean_dec_ref(v___y_6274_);
return v_res_6281_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object* v___x_6282_, lean_object* v_remaining_x27_6283_, lean_object* v_onAlt_6284_, lean_object* v_a_6285_, uint8_t v___x_6286_, uint8_t v___x_6287_, lean_object* v___f_6288_, lean_object* v_extraEqualities_6289_, lean_object* v_xs_6290_, lean_object* v_altType_6291_, lean_object* v___y_6292_, lean_object* v___y_6293_, lean_object* v___y_6294_, lean_object* v___y_6295_){
_start:
{
lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___f_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; 
v___x_6297_ = lean_box(v___x_6286_);
v___x_6298_ = lean_box(v___x_6287_);
v___f_6299_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_6299_, 0, v___x_6282_);
lean_closure_set(v___f_6299_, 1, v_xs_6290_);
lean_closure_set(v___f_6299_, 2, v_remaining_x27_6283_);
lean_closure_set(v___f_6299_, 3, v_onAlt_6284_);
lean_closure_set(v___f_6299_, 4, v_a_6285_);
lean_closure_set(v___f_6299_, 5, v___x_6297_);
lean_closure_set(v___f_6299_, 6, v___x_6298_);
lean_closure_set(v___f_6299_, 7, v___f_6288_);
v___x_6300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6300_, 0, v_extraEqualities_6289_);
v___x_6301_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_6291_, v___x_6300_, v___f_6299_, v___x_6286_, v___x_6286_, v___y_6292_, v___y_6293_, v___y_6294_, v___y_6295_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object* v___x_6302_, lean_object* v_remaining_x27_6303_, lean_object* v_onAlt_6304_, lean_object* v_a_6305_, lean_object* v___x_6306_, lean_object* v___x_6307_, lean_object* v___f_6308_, lean_object* v_extraEqualities_6309_, lean_object* v_xs_6310_, lean_object* v_altType_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_, lean_object* v___y_6316_){
_start:
{
uint8_t v___x_35282__boxed_6317_; uint8_t v___x_35283__boxed_6318_; lean_object* v_res_6319_; 
v___x_35282__boxed_6317_ = lean_unbox(v___x_6306_);
v___x_35283__boxed_6318_ = lean_unbox(v___x_6307_);
v_res_6319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(v___x_6302_, v_remaining_x27_6303_, v_onAlt_6304_, v_a_6305_, v___x_35282__boxed_6317_, v___x_35283__boxed_6318_, v___f_6308_, v_extraEqualities_6309_, v_xs_6310_, v_altType_6311_, v___y_6312_, v___y_6313_, v___y_6314_, v___y_6315_);
lean_dec(v___y_6315_);
lean_dec_ref(v___y_6314_);
lean_dec(v___y_6313_);
lean_dec_ref(v___y_6312_);
return v_res_6319_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object* v_upperBound_6321_, lean_object* v_onAlt_6322_, lean_object* v_extraEqualities_6323_, lean_object* v_a_6324_, lean_object* v_b_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_){
_start:
{
lean_object* v___y_6332_; uint8_t v___x_6355_; 
v___x_6355_ = lean_nat_dec_lt(v_a_6324_, v_upperBound_6321_);
if (v___x_6355_ == 0)
{
lean_object* v___x_6356_; 
lean_dec(v_a_6324_);
lean_dec(v_extraEqualities_6323_);
lean_dec_ref(v_onAlt_6322_);
v___x_6356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6356_, 0, v_b_6325_);
return v___x_6356_;
}
else
{
lean_object* v_snd_6357_; lean_object* v_snd_6358_; lean_object* v_snd_6359_; lean_object* v_fst_6360_; lean_object* v___x_6362_; uint8_t v_isShared_6363_; uint8_t v_isSharedCheck_6467_; 
v_snd_6357_ = lean_ctor_get(v_b_6325_, 1);
lean_inc(v_snd_6357_);
v_snd_6358_ = lean_ctor_get(v_snd_6357_, 1);
lean_inc(v_snd_6358_);
v_snd_6359_ = lean_ctor_get(v_snd_6358_, 1);
lean_inc(v_snd_6359_);
v_fst_6360_ = lean_ctor_get(v_b_6325_, 0);
v_isSharedCheck_6467_ = !lean_is_exclusive(v_b_6325_);
if (v_isSharedCheck_6467_ == 0)
{
lean_object* v_unused_6468_; 
v_unused_6468_ = lean_ctor_get(v_b_6325_, 1);
lean_dec(v_unused_6468_);
v___x_6362_ = v_b_6325_;
v_isShared_6363_ = v_isSharedCheck_6467_;
goto v_resetjp_6361_;
}
else
{
lean_inc(v_fst_6360_);
lean_dec(v_b_6325_);
v___x_6362_ = lean_box(0);
v_isShared_6363_ = v_isSharedCheck_6467_;
goto v_resetjp_6361_;
}
v_resetjp_6361_:
{
lean_object* v_fst_6364_; lean_object* v___x_6366_; uint8_t v_isShared_6367_; uint8_t v_isSharedCheck_6465_; 
v_fst_6364_ = lean_ctor_get(v_snd_6357_, 0);
v_isSharedCheck_6465_ = !lean_is_exclusive(v_snd_6357_);
if (v_isSharedCheck_6465_ == 0)
{
lean_object* v_unused_6466_; 
v_unused_6466_ = lean_ctor_get(v_snd_6357_, 1);
lean_dec(v_unused_6466_);
v___x_6366_ = v_snd_6357_;
v_isShared_6367_ = v_isSharedCheck_6465_;
goto v_resetjp_6365_;
}
else
{
lean_inc(v_fst_6364_);
lean_dec(v_snd_6357_);
v___x_6366_ = lean_box(0);
v_isShared_6367_ = v_isSharedCheck_6465_;
goto v_resetjp_6365_;
}
v_resetjp_6365_:
{
lean_object* v_fst_6368_; lean_object* v___x_6370_; uint8_t v_isShared_6371_; uint8_t v_isSharedCheck_6463_; 
v_fst_6368_ = lean_ctor_get(v_snd_6358_, 0);
v_isSharedCheck_6463_ = !lean_is_exclusive(v_snd_6358_);
if (v_isSharedCheck_6463_ == 0)
{
lean_object* v_unused_6464_; 
v_unused_6464_ = lean_ctor_get(v_snd_6358_, 1);
lean_dec(v_unused_6464_);
v___x_6370_ = v_snd_6358_;
v_isShared_6371_ = v_isSharedCheck_6463_;
goto v_resetjp_6369_;
}
else
{
lean_inc(v_fst_6368_);
lean_dec(v_snd_6358_);
v___x_6370_ = lean_box(0);
v_isShared_6371_ = v_isSharedCheck_6463_;
goto v_resetjp_6369_;
}
v_resetjp_6369_:
{
lean_object* v_array_6372_; lean_object* v_start_6373_; lean_object* v_stop_6374_; uint8_t v___x_6375_; 
v_array_6372_ = lean_ctor_get(v_snd_6359_, 0);
v_start_6373_ = lean_ctor_get(v_snd_6359_, 1);
v_stop_6374_ = lean_ctor_get(v_snd_6359_, 2);
v___x_6375_ = lean_nat_dec_lt(v_start_6373_, v_stop_6374_);
if (v___x_6375_ == 0)
{
lean_object* v___x_6377_; 
if (v_isShared_6371_ == 0)
{
v___x_6377_ = v___x_6370_;
goto v_reusejp_6376_;
}
else
{
lean_object* v_reuseFailAlloc_6386_; 
v_reuseFailAlloc_6386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6386_, 0, v_fst_6368_);
lean_ctor_set(v_reuseFailAlloc_6386_, 1, v_snd_6359_);
v___x_6377_ = v_reuseFailAlloc_6386_;
goto v_reusejp_6376_;
}
v_reusejp_6376_:
{
lean_object* v___x_6379_; 
if (v_isShared_6367_ == 0)
{
lean_ctor_set(v___x_6366_, 1, v___x_6377_);
v___x_6379_ = v___x_6366_;
goto v_reusejp_6378_;
}
else
{
lean_object* v_reuseFailAlloc_6385_; 
v_reuseFailAlloc_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6385_, 0, v_fst_6364_);
lean_ctor_set(v_reuseFailAlloc_6385_, 1, v___x_6377_);
v___x_6379_ = v_reuseFailAlloc_6385_;
goto v_reusejp_6378_;
}
v_reusejp_6378_:
{
lean_object* v___x_6381_; 
if (v_isShared_6363_ == 0)
{
lean_ctor_set(v___x_6362_, 1, v___x_6379_);
v___x_6381_ = v___x_6362_;
goto v_reusejp_6380_;
}
else
{
lean_object* v_reuseFailAlloc_6384_; 
v_reuseFailAlloc_6384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6384_, 0, v_fst_6360_);
lean_ctor_set(v_reuseFailAlloc_6384_, 1, v___x_6379_);
v___x_6381_ = v_reuseFailAlloc_6384_;
goto v_reusejp_6380_;
}
v_reusejp_6380_:
{
lean_object* v___x_6382_; lean_object* v___f_6383_; 
v___x_6382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6382_, 0, v___x_6381_);
v___f_6383_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6383_, 0, v___x_6382_);
v___y_6332_ = v___f_6383_;
goto v___jp_6331_;
}
}
}
}
else
{
lean_object* v___x_6388_; uint8_t v_isShared_6389_; uint8_t v_isSharedCheck_6459_; 
lean_inc(v_stop_6374_);
lean_inc(v_start_6373_);
lean_inc_ref(v_array_6372_);
v_isSharedCheck_6459_ = !lean_is_exclusive(v_snd_6359_);
if (v_isSharedCheck_6459_ == 0)
{
lean_object* v_unused_6460_; lean_object* v_unused_6461_; lean_object* v_unused_6462_; 
v_unused_6460_ = lean_ctor_get(v_snd_6359_, 2);
lean_dec(v_unused_6460_);
v_unused_6461_ = lean_ctor_get(v_snd_6359_, 1);
lean_dec(v_unused_6461_);
v_unused_6462_ = lean_ctor_get(v_snd_6359_, 0);
lean_dec(v_unused_6462_);
v___x_6388_ = v_snd_6359_;
v_isShared_6389_ = v_isSharedCheck_6459_;
goto v_resetjp_6387_;
}
else
{
lean_dec(v_snd_6359_);
v___x_6388_ = lean_box(0);
v_isShared_6389_ = v_isSharedCheck_6459_;
goto v_resetjp_6387_;
}
v_resetjp_6387_:
{
lean_object* v_array_6390_; lean_object* v_start_6391_; lean_object* v_stop_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6397_; 
v_array_6390_ = lean_ctor_get(v_fst_6368_, 0);
v_start_6391_ = lean_ctor_get(v_fst_6368_, 1);
v_stop_6392_ = lean_ctor_get(v_fst_6368_, 2);
v___x_6393_ = lean_array_fget(v_array_6372_, v_start_6373_);
v___x_6394_ = lean_unsigned_to_nat(1u);
v___x_6395_ = lean_nat_add(v_start_6373_, v___x_6394_);
lean_dec(v_start_6373_);
if (v_isShared_6389_ == 0)
{
lean_ctor_set(v___x_6388_, 1, v___x_6395_);
v___x_6397_ = v___x_6388_;
goto v_reusejp_6396_;
}
else
{
lean_object* v_reuseFailAlloc_6458_; 
v_reuseFailAlloc_6458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6458_, 0, v_array_6372_);
lean_ctor_set(v_reuseFailAlloc_6458_, 1, v___x_6395_);
lean_ctor_set(v_reuseFailAlloc_6458_, 2, v_stop_6374_);
v___x_6397_ = v_reuseFailAlloc_6458_;
goto v_reusejp_6396_;
}
v_reusejp_6396_:
{
uint8_t v___x_6398_; 
v___x_6398_ = lean_nat_dec_lt(v_start_6391_, v_stop_6392_);
if (v___x_6398_ == 0)
{
lean_object* v___x_6400_; 
lean_dec(v___x_6393_);
if (v_isShared_6371_ == 0)
{
lean_ctor_set(v___x_6370_, 1, v___x_6397_);
v___x_6400_ = v___x_6370_;
goto v_reusejp_6399_;
}
else
{
lean_object* v_reuseFailAlloc_6409_; 
v_reuseFailAlloc_6409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6409_, 0, v_fst_6368_);
lean_ctor_set(v_reuseFailAlloc_6409_, 1, v___x_6397_);
v___x_6400_ = v_reuseFailAlloc_6409_;
goto v_reusejp_6399_;
}
v_reusejp_6399_:
{
lean_object* v___x_6402_; 
if (v_isShared_6367_ == 0)
{
lean_ctor_set(v___x_6366_, 1, v___x_6400_);
v___x_6402_ = v___x_6366_;
goto v_reusejp_6401_;
}
else
{
lean_object* v_reuseFailAlloc_6408_; 
v_reuseFailAlloc_6408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6408_, 0, v_fst_6364_);
lean_ctor_set(v_reuseFailAlloc_6408_, 1, v___x_6400_);
v___x_6402_ = v_reuseFailAlloc_6408_;
goto v_reusejp_6401_;
}
v_reusejp_6401_:
{
lean_object* v___x_6404_; 
if (v_isShared_6363_ == 0)
{
lean_ctor_set(v___x_6362_, 1, v___x_6402_);
v___x_6404_ = v___x_6362_;
goto v_reusejp_6403_;
}
else
{
lean_object* v_reuseFailAlloc_6407_; 
v_reuseFailAlloc_6407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6407_, 0, v_fst_6360_);
lean_ctor_set(v_reuseFailAlloc_6407_, 1, v___x_6402_);
v___x_6404_ = v_reuseFailAlloc_6407_;
goto v_reusejp_6403_;
}
v_reusejp_6403_:
{
lean_object* v___x_6405_; lean_object* v___f_6406_; 
v___x_6405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6405_, 0, v___x_6404_);
v___f_6406_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6406_, 0, v___x_6405_);
v___y_6332_ = v___f_6406_;
goto v___jp_6331_;
}
}
}
}
else
{
lean_object* v___x_6411_; uint8_t v_isShared_6412_; uint8_t v_isSharedCheck_6454_; 
lean_inc(v_stop_6392_);
lean_inc(v_start_6391_);
lean_inc_ref(v_array_6390_);
v_isSharedCheck_6454_ = !lean_is_exclusive(v_fst_6368_);
if (v_isSharedCheck_6454_ == 0)
{
lean_object* v_unused_6455_; lean_object* v_unused_6456_; lean_object* v_unused_6457_; 
v_unused_6455_ = lean_ctor_get(v_fst_6368_, 2);
lean_dec(v_unused_6455_);
v_unused_6456_ = lean_ctor_get(v_fst_6368_, 1);
lean_dec(v_unused_6456_);
v_unused_6457_ = lean_ctor_get(v_fst_6368_, 0);
lean_dec(v_unused_6457_);
v___x_6411_ = v_fst_6368_;
v_isShared_6412_ = v_isSharedCheck_6454_;
goto v_resetjp_6410_;
}
else
{
lean_dec(v_fst_6368_);
v___x_6411_ = lean_box(0);
v_isShared_6412_ = v_isSharedCheck_6454_;
goto v_resetjp_6410_;
}
v_resetjp_6410_:
{
lean_object* v_array_6413_; lean_object* v_start_6414_; lean_object* v_stop_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6419_; 
v_array_6413_ = lean_ctor_get(v_fst_6364_, 0);
v_start_6414_ = lean_ctor_get(v_fst_6364_, 1);
v_stop_6415_ = lean_ctor_get(v_fst_6364_, 2);
v___x_6416_ = lean_array_fget(v_array_6390_, v_start_6391_);
v___x_6417_ = lean_nat_add(v_start_6391_, v___x_6394_);
lean_dec(v_start_6391_);
if (v_isShared_6412_ == 0)
{
lean_ctor_set(v___x_6411_, 1, v___x_6417_);
v___x_6419_ = v___x_6411_;
goto v_reusejp_6418_;
}
else
{
lean_object* v_reuseFailAlloc_6453_; 
v_reuseFailAlloc_6453_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6453_, 0, v_array_6390_);
lean_ctor_set(v_reuseFailAlloc_6453_, 1, v___x_6417_);
lean_ctor_set(v_reuseFailAlloc_6453_, 2, v_stop_6392_);
v___x_6419_ = v_reuseFailAlloc_6453_;
goto v_reusejp_6418_;
}
v_reusejp_6418_:
{
uint8_t v___x_6420_; 
v___x_6420_ = lean_nat_dec_lt(v_start_6414_, v_stop_6415_);
if (v___x_6420_ == 0)
{
lean_object* v___x_6422_; 
lean_dec(v___x_6416_);
lean_dec(v___x_6393_);
if (v_isShared_6371_ == 0)
{
lean_ctor_set(v___x_6370_, 1, v___x_6397_);
lean_ctor_set(v___x_6370_, 0, v___x_6419_);
v___x_6422_ = v___x_6370_;
goto v_reusejp_6421_;
}
else
{
lean_object* v_reuseFailAlloc_6431_; 
v_reuseFailAlloc_6431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6431_, 0, v___x_6419_);
lean_ctor_set(v_reuseFailAlloc_6431_, 1, v___x_6397_);
v___x_6422_ = v_reuseFailAlloc_6431_;
goto v_reusejp_6421_;
}
v_reusejp_6421_:
{
lean_object* v___x_6424_; 
if (v_isShared_6367_ == 0)
{
lean_ctor_set(v___x_6366_, 1, v___x_6422_);
v___x_6424_ = v___x_6366_;
goto v_reusejp_6423_;
}
else
{
lean_object* v_reuseFailAlloc_6430_; 
v_reuseFailAlloc_6430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6430_, 0, v_fst_6364_);
lean_ctor_set(v_reuseFailAlloc_6430_, 1, v___x_6422_);
v___x_6424_ = v_reuseFailAlloc_6430_;
goto v_reusejp_6423_;
}
v_reusejp_6423_:
{
lean_object* v___x_6426_; 
if (v_isShared_6363_ == 0)
{
lean_ctor_set(v___x_6362_, 1, v___x_6424_);
v___x_6426_ = v___x_6362_;
goto v_reusejp_6425_;
}
else
{
lean_object* v_reuseFailAlloc_6429_; 
v_reuseFailAlloc_6429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6429_, 0, v_fst_6360_);
lean_ctor_set(v_reuseFailAlloc_6429_, 1, v___x_6424_);
v___x_6426_ = v_reuseFailAlloc_6429_;
goto v_reusejp_6425_;
}
v_reusejp_6425_:
{
lean_object* v___x_6427_; lean_object* v___f_6428_; 
v___x_6427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6427_, 0, v___x_6426_);
v___f_6428_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6428_, 0, v___x_6427_);
v___y_6332_ = v___f_6428_;
goto v___jp_6331_;
}
}
}
}
else
{
lean_object* v___x_6433_; uint8_t v_isShared_6434_; uint8_t v_isSharedCheck_6449_; 
lean_inc(v_stop_6415_);
lean_inc(v_start_6414_);
lean_inc_ref(v_array_6413_);
lean_del_object(v___x_6370_);
lean_del_object(v___x_6366_);
lean_del_object(v___x_6362_);
v_isSharedCheck_6449_ = !lean_is_exclusive(v_fst_6364_);
if (v_isSharedCheck_6449_ == 0)
{
lean_object* v_unused_6450_; lean_object* v_unused_6451_; lean_object* v_unused_6452_; 
v_unused_6450_ = lean_ctor_get(v_fst_6364_, 2);
lean_dec(v_unused_6450_);
v_unused_6451_ = lean_ctor_get(v_fst_6364_, 1);
lean_dec(v_unused_6451_);
v_unused_6452_ = lean_ctor_get(v_fst_6364_, 0);
lean_dec(v_unused_6452_);
v___x_6433_ = v_fst_6364_;
v_isShared_6434_ = v_isSharedCheck_6449_;
goto v_resetjp_6432_;
}
else
{
lean_dec(v_fst_6364_);
v___x_6433_ = lean_box(0);
v_isShared_6434_ = v_isSharedCheck_6449_;
goto v_resetjp_6432_;
}
v_resetjp_6432_:
{
lean_object* v___f_6435_; uint8_t v___x_6436_; lean_object* v_remaining_x27_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___f_6441_; lean_object* v___x_6442_; lean_object* v___x_6444_; 
v___f_6435_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0));
v___x_6436_ = 0;
v_remaining_x27_6437_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6438_ = lean_array_fget_borrowed(v_array_6413_, v_start_6414_);
v___x_6439_ = lean_box(v___x_6436_);
v___x_6440_ = lean_box(v___x_6420_);
lean_inc(v_extraEqualities_6323_);
lean_inc(v_a_6324_);
lean_inc_ref(v_onAlt_6322_);
lean_inc(v___x_6438_);
v___f_6441_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_6441_, 0, v___x_6438_);
lean_closure_set(v___f_6441_, 1, v_remaining_x27_6437_);
lean_closure_set(v___f_6441_, 2, v_onAlt_6322_);
lean_closure_set(v___f_6441_, 3, v_a_6324_);
lean_closure_set(v___f_6441_, 4, v___x_6439_);
lean_closure_set(v___f_6441_, 5, v___x_6440_);
lean_closure_set(v___f_6441_, 6, v___f_6435_);
lean_closure_set(v___f_6441_, 7, v_extraEqualities_6323_);
v___x_6442_ = lean_nat_add(v_start_6414_, v___x_6394_);
lean_dec(v_start_6414_);
if (v_isShared_6434_ == 0)
{
lean_ctor_set(v___x_6433_, 1, v___x_6442_);
v___x_6444_ = v___x_6433_;
goto v_reusejp_6443_;
}
else
{
lean_object* v_reuseFailAlloc_6448_; 
v_reuseFailAlloc_6448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6448_, 0, v_array_6413_);
lean_ctor_set(v_reuseFailAlloc_6448_, 1, v___x_6442_);
lean_ctor_set(v_reuseFailAlloc_6448_, 2, v_stop_6415_);
v___x_6444_ = v_reuseFailAlloc_6448_;
goto v_reusejp_6443_;
}
v_reusejp_6443_:
{
lean_object* v___x_6445_; lean_object* v___x_6446_; lean_object* v___f_6447_; 
v___x_6445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6445_, 0, v___x_6416_);
v___x_6446_ = lean_box(v___x_6436_);
v___f_6447_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_6447_, 0, v___x_6393_);
lean_closure_set(v___f_6447_, 1, v___x_6445_);
lean_closure_set(v___f_6447_, 2, v___f_6441_);
lean_closure_set(v___f_6447_, 3, v___x_6446_);
lean_closure_set(v___f_6447_, 4, v_fst_6360_);
lean_closure_set(v___f_6447_, 5, v___x_6419_);
lean_closure_set(v___f_6447_, 6, v___x_6397_);
lean_closure_set(v___f_6447_, 7, v___x_6444_);
v___y_6332_ = v___f_6447_;
goto v___jp_6331_;
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_6331_:
{
lean_object* v___x_6333_; 
lean_inc(v___y_6329_);
lean_inc_ref(v___y_6328_);
lean_inc(v___y_6327_);
lean_inc_ref(v___y_6326_);
v___x_6333_ = lean_apply_5(v___y_6332_, v___y_6326_, v___y_6327_, v___y_6328_, v___y_6329_, lean_box(0));
if (lean_obj_tag(v___x_6333_) == 0)
{
lean_object* v_a_6334_; lean_object* v___x_6336_; uint8_t v_isShared_6337_; uint8_t v_isSharedCheck_6346_; 
v_a_6334_ = lean_ctor_get(v___x_6333_, 0);
v_isSharedCheck_6346_ = !lean_is_exclusive(v___x_6333_);
if (v_isSharedCheck_6346_ == 0)
{
v___x_6336_ = v___x_6333_;
v_isShared_6337_ = v_isSharedCheck_6346_;
goto v_resetjp_6335_;
}
else
{
lean_inc(v_a_6334_);
lean_dec(v___x_6333_);
v___x_6336_ = lean_box(0);
v_isShared_6337_ = v_isSharedCheck_6346_;
goto v_resetjp_6335_;
}
v_resetjp_6335_:
{
if (lean_obj_tag(v_a_6334_) == 0)
{
lean_object* v_a_6338_; lean_object* v___x_6340_; 
lean_dec(v_a_6324_);
lean_dec(v_extraEqualities_6323_);
lean_dec_ref(v_onAlt_6322_);
v_a_6338_ = lean_ctor_get(v_a_6334_, 0);
lean_inc(v_a_6338_);
lean_dec_ref_known(v_a_6334_, 1);
if (v_isShared_6337_ == 0)
{
lean_ctor_set(v___x_6336_, 0, v_a_6338_);
v___x_6340_ = v___x_6336_;
goto v_reusejp_6339_;
}
else
{
lean_object* v_reuseFailAlloc_6341_; 
v_reuseFailAlloc_6341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6341_, 0, v_a_6338_);
v___x_6340_ = v_reuseFailAlloc_6341_;
goto v_reusejp_6339_;
}
v_reusejp_6339_:
{
return v___x_6340_;
}
}
else
{
lean_object* v_a_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; 
lean_del_object(v___x_6336_);
v_a_6342_ = lean_ctor_get(v_a_6334_, 0);
lean_inc(v_a_6342_);
lean_dec_ref_known(v_a_6334_, 1);
v___x_6343_ = lean_unsigned_to_nat(1u);
v___x_6344_ = lean_nat_add(v_a_6324_, v___x_6343_);
lean_dec(v_a_6324_);
v_a_6324_ = v___x_6344_;
v_b_6325_ = v_a_6342_;
goto _start;
}
}
}
else
{
lean_object* v_a_6347_; lean_object* v___x_6349_; uint8_t v_isShared_6350_; uint8_t v_isSharedCheck_6354_; 
lean_dec(v_a_6324_);
lean_dec(v_extraEqualities_6323_);
lean_dec_ref(v_onAlt_6322_);
v_a_6347_ = lean_ctor_get(v___x_6333_, 0);
v_isSharedCheck_6354_ = !lean_is_exclusive(v___x_6333_);
if (v_isSharedCheck_6354_ == 0)
{
v___x_6349_ = v___x_6333_;
v_isShared_6350_ = v_isSharedCheck_6354_;
goto v_resetjp_6348_;
}
else
{
lean_inc(v_a_6347_);
lean_dec(v___x_6333_);
v___x_6349_ = lean_box(0);
v_isShared_6350_ = v_isSharedCheck_6354_;
goto v_resetjp_6348_;
}
v_resetjp_6348_:
{
lean_object* v___x_6352_; 
if (v_isShared_6350_ == 0)
{
v___x_6352_ = v___x_6349_;
goto v_reusejp_6351_;
}
else
{
lean_object* v_reuseFailAlloc_6353_; 
v_reuseFailAlloc_6353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6353_, 0, v_a_6347_);
v___x_6352_ = v_reuseFailAlloc_6353_;
goto v_reusejp_6351_;
}
v_reusejp_6351_:
{
return v___x_6352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_6469_, lean_object* v_onAlt_6470_, lean_object* v_extraEqualities_6471_, lean_object* v_a_6472_, lean_object* v_b_6473_, lean_object* v___y_6474_, lean_object* v___y_6475_, lean_object* v___y_6476_, lean_object* v___y_6477_, lean_object* v___y_6478_){
_start:
{
lean_object* v_res_6479_; 
v_res_6479_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_6469_, v_onAlt_6470_, v_extraEqualities_6471_, v_a_6472_, v_b_6473_, v___y_6474_, v___y_6475_, v___y_6476_, v___y_6477_);
lean_dec(v___y_6477_);
lean_dec_ref(v___y_6476_);
lean_dec(v___y_6475_);
lean_dec_ref(v___y_6474_);
lean_dec(v_upperBound_6469_);
return v_res_6479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object* v_onParams_6480_, size_t v_sz_6481_, size_t v_i_6482_, lean_object* v_bs_6483_, lean_object* v___y_6484_, lean_object* v___y_6485_, lean_object* v___y_6486_, lean_object* v___y_6487_){
_start:
{
uint8_t v___x_6489_; 
v___x_6489_ = lean_usize_dec_lt(v_i_6482_, v_sz_6481_);
if (v___x_6489_ == 0)
{
lean_object* v___x_6490_; 
lean_dec_ref(v_onParams_6480_);
v___x_6490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6490_, 0, v_bs_6483_);
return v___x_6490_;
}
else
{
lean_object* v_v_6491_; lean_object* v___x_6492_; lean_object* v_bs_x27_6493_; lean_object* v___x_6494_; 
v_v_6491_ = lean_array_uget(v_bs_6483_, v_i_6482_);
v___x_6492_ = lean_unsigned_to_nat(0u);
v_bs_x27_6493_ = lean_array_uset(v_bs_6483_, v_i_6482_, v___x_6492_);
lean_inc_ref(v_onParams_6480_);
lean_inc(v___y_6487_);
lean_inc_ref(v___y_6486_);
lean_inc(v___y_6485_);
lean_inc_ref(v___y_6484_);
v___x_6494_ = lean_apply_6(v_onParams_6480_, v_v_6491_, v___y_6484_, v___y_6485_, v___y_6486_, v___y_6487_, lean_box(0));
if (lean_obj_tag(v___x_6494_) == 0)
{
lean_object* v_a_6495_; size_t v___x_6496_; size_t v___x_6497_; lean_object* v___x_6498_; 
v_a_6495_ = lean_ctor_get(v___x_6494_, 0);
lean_inc(v_a_6495_);
lean_dec_ref_known(v___x_6494_, 1);
v___x_6496_ = ((size_t)1ULL);
v___x_6497_ = lean_usize_add(v_i_6482_, v___x_6496_);
v___x_6498_ = lean_array_uset(v_bs_x27_6493_, v_i_6482_, v_a_6495_);
v_i_6482_ = v___x_6497_;
v_bs_6483_ = v___x_6498_;
goto _start;
}
else
{
lean_object* v_a_6500_; lean_object* v___x_6502_; uint8_t v_isShared_6503_; uint8_t v_isSharedCheck_6507_; 
lean_dec_ref(v_bs_x27_6493_);
lean_dec_ref(v_onParams_6480_);
v_a_6500_ = lean_ctor_get(v___x_6494_, 0);
v_isSharedCheck_6507_ = !lean_is_exclusive(v___x_6494_);
if (v_isSharedCheck_6507_ == 0)
{
v___x_6502_ = v___x_6494_;
v_isShared_6503_ = v_isSharedCheck_6507_;
goto v_resetjp_6501_;
}
else
{
lean_inc(v_a_6500_);
lean_dec(v___x_6494_);
v___x_6502_ = lean_box(0);
v_isShared_6503_ = v_isSharedCheck_6507_;
goto v_resetjp_6501_;
}
v_resetjp_6501_:
{
lean_object* v___x_6505_; 
if (v_isShared_6503_ == 0)
{
v___x_6505_ = v___x_6502_;
goto v_reusejp_6504_;
}
else
{
lean_object* v_reuseFailAlloc_6506_; 
v_reuseFailAlloc_6506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6506_, 0, v_a_6500_);
v___x_6505_ = v_reuseFailAlloc_6506_;
goto v_reusejp_6504_;
}
v_reusejp_6504_:
{
return v___x_6505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object* v_onParams_6508_, lean_object* v_sz_6509_, lean_object* v_i_6510_, lean_object* v_bs_6511_, lean_object* v___y_6512_, lean_object* v___y_6513_, lean_object* v___y_6514_, lean_object* v___y_6515_, lean_object* v___y_6516_){
_start:
{
size_t v_sz_boxed_6517_; size_t v_i_boxed_6518_; lean_object* v_res_6519_; 
v_sz_boxed_6517_ = lean_unbox_usize(v_sz_6509_);
lean_dec(v_sz_6509_);
v_i_boxed_6518_ = lean_unbox_usize(v_i_6510_);
lean_dec(v_i_6510_);
v_res_6519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6508_, v_sz_boxed_6517_, v_i_boxed_6518_, v_bs_6511_, v___y_6512_, v___y_6513_, v___y_6514_, v___y_6515_);
lean_dec(v___y_6515_);
lean_dec_ref(v___y_6514_);
lean_dec(v___y_6513_);
lean_dec_ref(v___y_6512_);
return v_res_6519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object* v_declName_6520_, lean_object* v___y_6521_){
_start:
{
lean_object* v___x_6523_; lean_object* v_env_6524_; lean_object* v___x_6525_; lean_object* v___x_6526_; 
v___x_6523_ = lean_st_ref_get(v___y_6521_);
v_env_6524_ = lean_ctor_get(v___x_6523_, 0);
lean_inc_ref(v_env_6524_);
lean_dec(v___x_6523_);
v___x_6525_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_6524_, v_declName_6520_);
v___x_6526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6526_, 0, v___x_6525_);
return v___x_6526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object* v_declName_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_){
_start:
{
lean_object* v_res_6530_; 
v_res_6530_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6527_, v___y_6528_);
lean_dec(v___y_6528_);
return v_res_6530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object* v_matcherApp_6533_, uint8_t v_useSplitter_6534_, uint8_t v_addEqualities_6535_, lean_object* v_onParams_6536_, lean_object* v_onMotive_6537_, lean_object* v_onAlt_6538_, lean_object* v_onRemaining_6539_, lean_object* v___y_6540_, lean_object* v___y_6541_, lean_object* v___y_6542_, lean_object* v___y_6543_){
_start:
{
lean_object* v___x_6545_; lean_object* v_env_6546_; lean_object* v_toMatcherInfo_6547_; lean_object* v_matcherName_6548_; lean_object* v_matcherLevels_6549_; lean_object* v_params_6550_; lean_object* v_motive_6551_; lean_object* v_discrs_6552_; lean_object* v_alts_6553_; lean_object* v_remaining_6554_; lean_object* v___y_6556_; lean_object* v___y_6557_; lean_object* v___y_6558_; lean_object* v___y_6559_; lean_object* v___y_6560_; lean_object* v___y_6561_; lean_object* v___y_6562_; lean_object* v___y_6563_; lean_object* v___y_6564_; lean_object* v___y_6565_; lean_object* v___y_6566_; lean_object* v___y_6567_; lean_object* v___y_6568_; uint8_t v_isCasesOn_6653_; size_t v___y_6655_; lean_object* v___y_6656_; lean_object* v___y_6657_; lean_object* v___y_6658_; lean_object* v___y_6659_; lean_object* v___y_6660_; lean_object* v___y_6661_; lean_object* v_matcherLevels_6662_; lean_object* v___y_6663_; lean_object* v___y_6664_; lean_object* v___y_6665_; lean_object* v___y_6666_; lean_object* v_numDiscrEqs_6860_; lean_object* v___y_6861_; lean_object* v___y_6862_; lean_object* v___y_6863_; lean_object* v___y_6864_; 
v___x_6545_ = lean_st_ref_get(v___y_6543_);
v_env_6546_ = lean_ctor_get(v___x_6545_, 0);
lean_inc_ref(v_env_6546_);
lean_dec(v___x_6545_);
v_toMatcherInfo_6547_ = lean_ctor_get(v_matcherApp_6533_, 0);
lean_inc_ref(v_toMatcherInfo_6547_);
v_matcherName_6548_ = lean_ctor_get(v_matcherApp_6533_, 1);
lean_inc_n(v_matcherName_6548_, 2);
v_matcherLevels_6549_ = lean_ctor_get(v_matcherApp_6533_, 2);
v_params_6550_ = lean_ctor_get(v_matcherApp_6533_, 3);
v_motive_6551_ = lean_ctor_get(v_matcherApp_6533_, 4);
v_discrs_6552_ = lean_ctor_get(v_matcherApp_6533_, 5);
v_alts_6553_ = lean_ctor_get(v_matcherApp_6533_, 6);
lean_inc_ref(v_alts_6553_);
v_remaining_6554_ = lean_ctor_get(v_matcherApp_6533_, 7);
lean_inc_ref(v_remaining_6554_);
v_isCasesOn_6653_ = l_Lean_isCasesOnRecursor(v_env_6546_, v_matcherName_6548_);
if (v_isCasesOn_6653_ == 0)
{
lean_object* v___x_6914_; lean_object* v_a_6915_; 
lean_inc(v_matcherName_6548_);
v___x_6914_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_matcherName_6548_, v___y_6543_);
v_a_6915_ = lean_ctor_get(v___x_6914_, 0);
lean_inc(v_a_6915_);
lean_dec_ref(v___x_6914_);
if (lean_obj_tag(v_a_6915_) == 0)
{
lean_object* v___x_6916_; lean_object* v___x_6917_; lean_object* v___x_6918_; lean_object* v___x_6919_; lean_object* v___x_6920_; lean_object* v___x_6921_; lean_object* v_a_6922_; lean_object* v___x_6924_; uint8_t v_isShared_6925_; uint8_t v_isSharedCheck_6929_; 
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_onMotive_6537_);
lean_dec_ref(v_onParams_6536_);
lean_dec_ref(v_matcherApp_6533_);
v___x_6916_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_6917_ = l_Lean_MessageData_ofName(v_matcherName_6548_);
v___x_6918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6918_, 0, v___x_6916_);
lean_ctor_set(v___x_6918_, 1, v___x_6917_);
v___x_6919_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_6920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6920_, 0, v___x_6918_);
lean_ctor_set(v___x_6920_, 1, v___x_6919_);
v___x_6921_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_6920_, v___y_6540_, v___y_6541_, v___y_6542_, v___y_6543_);
v_a_6922_ = lean_ctor_get(v___x_6921_, 0);
v_isSharedCheck_6929_ = !lean_is_exclusive(v___x_6921_);
if (v_isSharedCheck_6929_ == 0)
{
v___x_6924_ = v___x_6921_;
v_isShared_6925_ = v_isSharedCheck_6929_;
goto v_resetjp_6923_;
}
else
{
lean_inc(v_a_6922_);
lean_dec(v___x_6921_);
v___x_6924_ = lean_box(0);
v_isShared_6925_ = v_isSharedCheck_6929_;
goto v_resetjp_6923_;
}
v_resetjp_6923_:
{
lean_object* v___x_6927_; 
if (v_isShared_6925_ == 0)
{
v___x_6927_ = v___x_6924_;
goto v_reusejp_6926_;
}
else
{
lean_object* v_reuseFailAlloc_6928_; 
v_reuseFailAlloc_6928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6928_, 0, v_a_6922_);
v___x_6927_ = v_reuseFailAlloc_6928_;
goto v_reusejp_6926_;
}
v_reusejp_6926_:
{
return v___x_6927_;
}
}
}
else
{
lean_object* v_val_6930_; lean_object* v___x_6931_; 
v_val_6930_ = lean_ctor_get(v_a_6915_, 0);
lean_inc(v_val_6930_);
lean_dec_ref_known(v_a_6915_, 1);
v___x_6931_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_6930_);
lean_dec(v_val_6930_);
v_numDiscrEqs_6860_ = v___x_6931_;
v___y_6861_ = v___y_6540_;
v___y_6862_ = v___y_6541_;
v___y_6863_ = v___y_6542_;
v___y_6864_ = v___y_6543_;
goto v___jp_6859_;
}
}
else
{
lean_object* v___x_6932_; 
v___x_6932_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_6860_ = v___x_6932_;
v___y_6861_ = v___y_6540_;
v___y_6862_ = v___y_6541_;
v___y_6863_ = v___y_6542_;
v___y_6864_ = v___y_6543_;
goto v___jp_6859_;
}
v___jp_6555_:
{
lean_object* v___x_6569_; lean_object* v___x_6570_; lean_object* v_aux_6571_; lean_object* v_aux_6572_; lean_object* v_aux_6573_; lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; lean_object* v___f_6577_; uint8_t v___x_6578_; lean_object* v___x_6579_; lean_object* v___x_6580_; lean_object* v___x_6581_; 
lean_inc_ref(v___y_6557_);
v___x_6569_ = lean_array_to_list(v___y_6557_);
lean_inc(v_matcherName_6548_);
v___x_6570_ = l_Lean_mkConst(v_matcherName_6548_, v___x_6569_);
v_aux_6571_ = l_Lean_mkAppN(v___x_6570_, v___y_6561_);
lean_inc_ref(v___y_6567_);
v_aux_6572_ = l_Lean_Expr_app___override(v_aux_6571_, v___y_6567_);
v_aux_6573_ = l_Lean_mkAppN(v_aux_6572_, v___y_6559_);
v___x_6574_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
lean_inc_ref_n(v_aux_6573_, 2);
v___x_6575_ = l_Lean_indentExpr(v_aux_6573_);
v___x_6576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6576_, 0, v___x_6574_);
lean_ctor_set(v___x_6576_, 1, v___x_6575_);
v___f_6577_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6577_, 0, v___x_6576_);
v___x_6578_ = 0;
v___x_6579_ = lean_box(v___x_6578_);
v___x_6580_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6580_, 0, v_aux_6573_);
lean_closure_set(v___x_6580_, 1, v___x_6579_);
v___x_6581_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6580_, v___f_6577_, v___y_6558_, v___y_6564_, v___y_6560_, v___y_6556_);
if (lean_obj_tag(v___x_6581_) == 0)
{
lean_object* v___x_6582_; lean_object* v___x_6583_; 
lean_dec_ref_known(v___x_6581_, 1);
v___x_6582_ = lean_array_get_size(v_alts_6553_);
v___x_6583_ = l_Lean_Meta_inferArgumentTypesN(v___x_6582_, v_aux_6573_, v___y_6558_, v___y_6564_, v___y_6560_, v___y_6556_);
if (lean_obj_tag(v___x_6583_) == 0)
{
lean_object* v_a_6584_; lean_object* v___x_6585_; lean_object* v___x_6586_; lean_object* v___x_6587_; lean_object* v___x_6588_; lean_object* v___x_6589_; lean_object* v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; lean_object* v___x_6593_; lean_object* v___x_6594_; 
v_a_6584_ = lean_ctor_get(v___x_6583_, 0);
lean_inc(v_a_6584_);
lean_dec_ref_known(v___x_6583_, 1);
v___x_6585_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_6533_);
v___x_6586_ = lean_array_get_size(v___x_6585_);
v___x_6587_ = lean_array_get_size(v_a_6584_);
lean_inc_n(v___y_6565_, 3);
v___x_6588_ = l_Array_toSubarray___redArg(v_alts_6553_, v___y_6565_, v___x_6582_);
v___x_6589_ = l_Array_toSubarray___redArg(v___x_6585_, v___y_6565_, v___x_6586_);
v___x_6590_ = l_Array_toSubarray___redArg(v_a_6584_, v___y_6565_, v___x_6587_);
v___x_6591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6591_, 0, v___x_6589_);
lean_ctor_set(v___x_6591_, 1, v___x_6590_);
v___x_6592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6592_, 0, v___x_6588_);
lean_ctor_set(v___x_6592_, 1, v___x_6591_);
lean_inc_ref(v___y_6566_);
v___x_6593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6593_, 0, v___y_6566_);
lean_ctor_set(v___x_6593_, 1, v___x_6592_);
v___x_6594_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v___x_6582_, v_onAlt_6538_, v___y_6563_, v___y_6565_, v___x_6593_, v___y_6558_, v___y_6564_, v___y_6560_, v___y_6556_);
if (lean_obj_tag(v___x_6594_) == 0)
{
lean_object* v_a_6595_; lean_object* v_fst_6596_; lean_object* v___x_6597_; 
v_a_6595_ = lean_ctor_get(v___x_6594_, 0);
lean_inc(v_a_6595_);
lean_dec_ref_known(v___x_6594_, 1);
v_fst_6596_ = lean_ctor_get(v_a_6595_, 0);
lean_inc(v_fst_6596_);
lean_dec(v_a_6595_);
lean_inc(v___y_6556_);
lean_inc_ref(v___y_6560_);
lean_inc(v___y_6564_);
lean_inc_ref(v___y_6558_);
v___x_6597_ = lean_apply_6(v_onRemaining_6539_, v_remaining_6554_, v___y_6558_, v___y_6564_, v___y_6560_, v___y_6556_, lean_box(0));
if (lean_obj_tag(v___x_6597_) == 0)
{
lean_object* v_a_6598_; lean_object* v___x_6600_; uint8_t v_isShared_6601_; uint8_t v_isSharedCheck_6620_; 
v_a_6598_ = lean_ctor_get(v___x_6597_, 0);
v_isSharedCheck_6620_ = !lean_is_exclusive(v___x_6597_);
if (v_isSharedCheck_6620_ == 0)
{
v___x_6600_ = v___x_6597_;
v_isShared_6601_ = v_isSharedCheck_6620_;
goto v_resetjp_6599_;
}
else
{
lean_inc(v_a_6598_);
lean_dec(v___x_6597_);
v___x_6600_ = lean_box(0);
v_isShared_6601_ = v_isSharedCheck_6620_;
goto v_resetjp_6599_;
}
v_resetjp_6599_:
{
lean_object* v_numParams_6602_; lean_object* v_numDiscrs_6603_; lean_object* v_altInfos_6604_; lean_object* v_uElimPos_x3f_6605_; lean_object* v_overlaps_6606_; lean_object* v___x_6608_; uint8_t v_isShared_6609_; uint8_t v_isSharedCheck_6618_; 
v_numParams_6602_ = lean_ctor_get(v_toMatcherInfo_6547_, 0);
v_numDiscrs_6603_ = lean_ctor_get(v_toMatcherInfo_6547_, 1);
v_altInfos_6604_ = lean_ctor_get(v_toMatcherInfo_6547_, 2);
v_uElimPos_x3f_6605_ = lean_ctor_get(v_toMatcherInfo_6547_, 3);
v_overlaps_6606_ = lean_ctor_get(v_toMatcherInfo_6547_, 5);
v_isSharedCheck_6618_ = !lean_is_exclusive(v_toMatcherInfo_6547_);
if (v_isSharedCheck_6618_ == 0)
{
lean_object* v_unused_6619_; 
v_unused_6619_ = lean_ctor_get(v_toMatcherInfo_6547_, 4);
lean_dec(v_unused_6619_);
v___x_6608_ = v_toMatcherInfo_6547_;
v_isShared_6609_ = v_isSharedCheck_6618_;
goto v_resetjp_6607_;
}
else
{
lean_inc(v_overlaps_6606_);
lean_inc(v_uElimPos_x3f_6605_);
lean_inc(v_altInfos_6604_);
lean_inc(v_numDiscrs_6603_);
lean_inc(v_numParams_6602_);
lean_dec(v_toMatcherInfo_6547_);
v___x_6608_ = lean_box(0);
v_isShared_6609_ = v_isSharedCheck_6618_;
goto v_resetjp_6607_;
}
v_resetjp_6607_:
{
lean_object* v_remaining_x27_6610_; lean_object* v___x_6612_; 
v_remaining_x27_6610_ = l_Array_append___redArg(v___y_6568_, v_a_6598_);
lean_dec(v_a_6598_);
if (v_isShared_6609_ == 0)
{
lean_ctor_set(v___x_6608_, 4, v___y_6562_);
v___x_6612_ = v___x_6608_;
goto v_reusejp_6611_;
}
else
{
lean_object* v_reuseFailAlloc_6617_; 
v_reuseFailAlloc_6617_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6617_, 0, v_numParams_6602_);
lean_ctor_set(v_reuseFailAlloc_6617_, 1, v_numDiscrs_6603_);
lean_ctor_set(v_reuseFailAlloc_6617_, 2, v_altInfos_6604_);
lean_ctor_set(v_reuseFailAlloc_6617_, 3, v_uElimPos_x3f_6605_);
lean_ctor_set(v_reuseFailAlloc_6617_, 4, v___y_6562_);
lean_ctor_set(v_reuseFailAlloc_6617_, 5, v_overlaps_6606_);
v___x_6612_ = v_reuseFailAlloc_6617_;
goto v_reusejp_6611_;
}
v_reusejp_6611_:
{
lean_object* v___x_6613_; lean_object* v___x_6615_; 
v___x_6613_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6613_, 0, v___x_6612_);
lean_ctor_set(v___x_6613_, 1, v_matcherName_6548_);
lean_ctor_set(v___x_6613_, 2, v___y_6557_);
lean_ctor_set(v___x_6613_, 3, v___y_6561_);
lean_ctor_set(v___x_6613_, 4, v___y_6567_);
lean_ctor_set(v___x_6613_, 5, v___y_6559_);
lean_ctor_set(v___x_6613_, 6, v_fst_6596_);
lean_ctor_set(v___x_6613_, 7, v_remaining_x27_6610_);
if (v_isShared_6601_ == 0)
{
lean_ctor_set(v___x_6600_, 0, v___x_6613_);
v___x_6615_ = v___x_6600_;
goto v_reusejp_6614_;
}
else
{
lean_object* v_reuseFailAlloc_6616_; 
v_reuseFailAlloc_6616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6616_, 0, v___x_6613_);
v___x_6615_ = v_reuseFailAlloc_6616_;
goto v_reusejp_6614_;
}
v_reusejp_6614_:
{
return v___x_6615_;
}
}
}
}
}
else
{
lean_object* v_a_6621_; lean_object* v___x_6623_; uint8_t v_isShared_6624_; uint8_t v_isSharedCheck_6628_; 
lean_dec(v_fst_6596_);
lean_dec(v___y_6568_);
lean_dec_ref(v___y_6567_);
lean_dec_ref(v___y_6562_);
lean_dec_ref(v___y_6561_);
lean_dec_ref(v___y_6559_);
lean_dec_ref(v___y_6557_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
v_a_6621_ = lean_ctor_get(v___x_6597_, 0);
v_isSharedCheck_6628_ = !lean_is_exclusive(v___x_6597_);
if (v_isSharedCheck_6628_ == 0)
{
v___x_6623_ = v___x_6597_;
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
else
{
lean_inc(v_a_6621_);
lean_dec(v___x_6597_);
v___x_6623_ = lean_box(0);
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
v_resetjp_6622_:
{
lean_object* v___x_6626_; 
if (v_isShared_6624_ == 0)
{
v___x_6626_ = v___x_6623_;
goto v_reusejp_6625_;
}
else
{
lean_object* v_reuseFailAlloc_6627_; 
v_reuseFailAlloc_6627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6627_, 0, v_a_6621_);
v___x_6626_ = v_reuseFailAlloc_6627_;
goto v_reusejp_6625_;
}
v_reusejp_6625_:
{
return v___x_6626_;
}
}
}
}
else
{
lean_object* v_a_6629_; lean_object* v___x_6631_; uint8_t v_isShared_6632_; uint8_t v_isSharedCheck_6636_; 
lean_dec(v___y_6568_);
lean_dec_ref(v___y_6567_);
lean_dec_ref(v___y_6562_);
lean_dec_ref(v___y_6561_);
lean_dec_ref(v___y_6559_);
lean_dec_ref(v___y_6557_);
lean_dec_ref(v_remaining_6554_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
v_a_6629_ = lean_ctor_get(v___x_6594_, 0);
v_isSharedCheck_6636_ = !lean_is_exclusive(v___x_6594_);
if (v_isSharedCheck_6636_ == 0)
{
v___x_6631_ = v___x_6594_;
v_isShared_6632_ = v_isSharedCheck_6636_;
goto v_resetjp_6630_;
}
else
{
lean_inc(v_a_6629_);
lean_dec(v___x_6594_);
v___x_6631_ = lean_box(0);
v_isShared_6632_ = v_isSharedCheck_6636_;
goto v_resetjp_6630_;
}
v_resetjp_6630_:
{
lean_object* v___x_6634_; 
if (v_isShared_6632_ == 0)
{
v___x_6634_ = v___x_6631_;
goto v_reusejp_6633_;
}
else
{
lean_object* v_reuseFailAlloc_6635_; 
v_reuseFailAlloc_6635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6635_, 0, v_a_6629_);
v___x_6634_ = v_reuseFailAlloc_6635_;
goto v_reusejp_6633_;
}
v_reusejp_6633_:
{
return v___x_6634_;
}
}
}
}
else
{
lean_object* v_a_6637_; lean_object* v___x_6639_; uint8_t v_isShared_6640_; uint8_t v_isSharedCheck_6644_; 
lean_dec(v___y_6568_);
lean_dec_ref(v___y_6567_);
lean_dec(v___y_6565_);
lean_dec(v___y_6563_);
lean_dec_ref(v___y_6562_);
lean_dec_ref(v___y_6561_);
lean_dec_ref(v___y_6559_);
lean_dec_ref(v___y_6557_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6637_ = lean_ctor_get(v___x_6583_, 0);
v_isSharedCheck_6644_ = !lean_is_exclusive(v___x_6583_);
if (v_isSharedCheck_6644_ == 0)
{
v___x_6639_ = v___x_6583_;
v_isShared_6640_ = v_isSharedCheck_6644_;
goto v_resetjp_6638_;
}
else
{
lean_inc(v_a_6637_);
lean_dec(v___x_6583_);
v___x_6639_ = lean_box(0);
v_isShared_6640_ = v_isSharedCheck_6644_;
goto v_resetjp_6638_;
}
v_resetjp_6638_:
{
lean_object* v___x_6642_; 
if (v_isShared_6640_ == 0)
{
v___x_6642_ = v___x_6639_;
goto v_reusejp_6641_;
}
else
{
lean_object* v_reuseFailAlloc_6643_; 
v_reuseFailAlloc_6643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6643_, 0, v_a_6637_);
v___x_6642_ = v_reuseFailAlloc_6643_;
goto v_reusejp_6641_;
}
v_reusejp_6641_:
{
return v___x_6642_;
}
}
}
}
else
{
lean_object* v_a_6645_; lean_object* v___x_6647_; uint8_t v_isShared_6648_; uint8_t v_isSharedCheck_6652_; 
lean_dec_ref(v_aux_6573_);
lean_dec(v___y_6568_);
lean_dec_ref(v___y_6567_);
lean_dec(v___y_6565_);
lean_dec(v___y_6563_);
lean_dec_ref(v___y_6562_);
lean_dec_ref(v___y_6561_);
lean_dec_ref(v___y_6559_);
lean_dec_ref(v___y_6557_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6645_ = lean_ctor_get(v___x_6581_, 0);
v_isSharedCheck_6652_ = !lean_is_exclusive(v___x_6581_);
if (v_isSharedCheck_6652_ == 0)
{
v___x_6647_ = v___x_6581_;
v_isShared_6648_ = v_isSharedCheck_6652_;
goto v_resetjp_6646_;
}
else
{
lean_inc(v_a_6645_);
lean_dec(v___x_6581_);
v___x_6647_ = lean_box(0);
v_isShared_6648_ = v_isSharedCheck_6652_;
goto v_resetjp_6646_;
}
v_resetjp_6646_:
{
lean_object* v___x_6650_; 
if (v_isShared_6648_ == 0)
{
v___x_6650_ = v___x_6647_;
goto v_reusejp_6649_;
}
else
{
lean_object* v_reuseFailAlloc_6651_; 
v_reuseFailAlloc_6651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6651_, 0, v_a_6645_);
v___x_6650_ = v_reuseFailAlloc_6651_;
goto v_reusejp_6649_;
}
v_reusejp_6649_:
{
return v___x_6650_;
}
}
}
}
v___jp_6654_:
{
lean_object* v___x_6667_; lean_object* v_remaining_x27_6668_; lean_object* v___x_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; lean_object* v___x_6672_; lean_object* v___x_6673_; lean_object* v___x_6674_; size_t v_sz_6675_; lean_object* v___x_6676_; 
v___x_6667_ = lean_unsigned_to_nat(0u);
v_remaining_x27_6668_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6669_ = l_Array_reverse___redArg(v___y_6657_);
v___x_6670_ = lean_array_get_size(v___x_6669_);
v___x_6671_ = l_Array_toSubarray___redArg(v___x_6669_, v___x_6667_, v___x_6670_);
lean_inc_ref(v___y_6656_);
v___x_6672_ = l_Array_reverse___redArg(v___y_6656_);
v___x_6673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6673_, 0, v___x_6667_);
lean_ctor_set(v___x_6673_, 1, v___x_6671_);
v___x_6674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6674_, 0, v_remaining_x27_6668_);
lean_ctor_set(v___x_6674_, 1, v___x_6673_);
v_sz_6675_ = lean_array_size(v___x_6672_);
v___x_6676_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v___x_6672_, v_sz_6675_, v___y_6655_, v___x_6674_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
lean_dec_ref(v___x_6672_);
if (lean_obj_tag(v___x_6676_) == 0)
{
lean_object* v_a_6677_; lean_object* v_snd_6678_; 
v_a_6677_ = lean_ctor_get(v___x_6676_, 0);
lean_inc(v_a_6677_);
lean_dec_ref_known(v___x_6676_, 1);
v_snd_6678_ = lean_ctor_get(v_a_6677_, 1);
lean_inc(v_snd_6678_);
if (v_useSplitter_6534_ == 0)
{
lean_object* v_fst_6679_; lean_object* v_fst_6680_; 
lean_dec(v___y_6660_);
v_fst_6679_ = lean_ctor_get(v_a_6677_, 0);
lean_inc(v_fst_6679_);
lean_dec(v_a_6677_);
v_fst_6680_ = lean_ctor_get(v_snd_6678_, 0);
lean_inc(v_fst_6680_);
lean_dec(v_snd_6678_);
v___y_6556_ = v___y_6666_;
v___y_6557_ = v_matcherLevels_6662_;
v___y_6558_ = v___y_6663_;
v___y_6559_ = v___y_6656_;
v___y_6560_ = v___y_6665_;
v___y_6561_ = v___y_6658_;
v___y_6562_ = v___y_6661_;
v___y_6563_ = v_fst_6680_;
v___y_6564_ = v___y_6664_;
v___y_6565_ = v___x_6667_;
v___y_6566_ = v_remaining_x27_6668_;
v___y_6567_ = v___y_6659_;
v___y_6568_ = v_fst_6679_;
goto v___jp_6555_;
}
else
{
if (v_isCasesOn_6653_ == 0)
{
lean_object* v___x_6682_; uint8_t v_isShared_6683_; uint8_t v_isSharedCheck_6840_; 
v_isSharedCheck_6840_ = !lean_is_exclusive(v_matcherApp_6533_);
if (v_isSharedCheck_6840_ == 0)
{
lean_object* v_unused_6841_; lean_object* v_unused_6842_; lean_object* v_unused_6843_; lean_object* v_unused_6844_; lean_object* v_unused_6845_; lean_object* v_unused_6846_; lean_object* v_unused_6847_; lean_object* v_unused_6848_; 
v_unused_6841_ = lean_ctor_get(v_matcherApp_6533_, 7);
lean_dec(v_unused_6841_);
v_unused_6842_ = lean_ctor_get(v_matcherApp_6533_, 6);
lean_dec(v_unused_6842_);
v_unused_6843_ = lean_ctor_get(v_matcherApp_6533_, 5);
lean_dec(v_unused_6843_);
v_unused_6844_ = lean_ctor_get(v_matcherApp_6533_, 4);
lean_dec(v_unused_6844_);
v_unused_6845_ = lean_ctor_get(v_matcherApp_6533_, 3);
lean_dec(v_unused_6845_);
v_unused_6846_ = lean_ctor_get(v_matcherApp_6533_, 2);
lean_dec(v_unused_6846_);
v_unused_6847_ = lean_ctor_get(v_matcherApp_6533_, 1);
lean_dec(v_unused_6847_);
v_unused_6848_ = lean_ctor_get(v_matcherApp_6533_, 0);
lean_dec(v_unused_6848_);
v___x_6682_ = v_matcherApp_6533_;
v_isShared_6683_ = v_isSharedCheck_6840_;
goto v_resetjp_6681_;
}
else
{
lean_dec(v_matcherApp_6533_);
v___x_6682_ = lean_box(0);
v_isShared_6683_ = v_isSharedCheck_6840_;
goto v_resetjp_6681_;
}
v_resetjp_6681_:
{
lean_object* v_fst_6684_; lean_object* v___x_6686_; uint8_t v_isShared_6687_; uint8_t v_isSharedCheck_6838_; 
v_fst_6684_ = lean_ctor_get(v_a_6677_, 0);
v_isSharedCheck_6838_ = !lean_is_exclusive(v_a_6677_);
if (v_isSharedCheck_6838_ == 0)
{
lean_object* v_unused_6839_; 
v_unused_6839_ = lean_ctor_get(v_a_6677_, 1);
lean_dec(v_unused_6839_);
v___x_6686_ = v_a_6677_;
v_isShared_6687_ = v_isSharedCheck_6838_;
goto v_resetjp_6685_;
}
else
{
lean_inc(v_fst_6684_);
lean_dec(v_a_6677_);
v___x_6686_ = lean_box(0);
v_isShared_6687_ = v_isSharedCheck_6838_;
goto v_resetjp_6685_;
}
v_resetjp_6685_:
{
lean_object* v_fst_6688_; lean_object* v___x_6690_; uint8_t v_isShared_6691_; uint8_t v_isSharedCheck_6836_; 
v_fst_6688_ = lean_ctor_get(v_snd_6678_, 0);
v_isSharedCheck_6836_ = !lean_is_exclusive(v_snd_6678_);
if (v_isSharedCheck_6836_ == 0)
{
lean_object* v_unused_6837_; 
v_unused_6837_ = lean_ctor_get(v_snd_6678_, 1);
lean_dec(v_unused_6837_);
v___x_6690_ = v_snd_6678_;
v_isShared_6691_ = v_isSharedCheck_6836_;
goto v_resetjp_6689_;
}
else
{
lean_inc(v_fst_6688_);
lean_dec(v_snd_6678_);
v___x_6690_ = lean_box(0);
v_isShared_6691_ = v_isSharedCheck_6836_;
goto v_resetjp_6689_;
}
v_resetjp_6689_:
{
lean_object* v___x_6692_; lean_object* v___x_6693_; lean_object* v_aux1_6694_; lean_object* v_aux1_6695_; lean_object* v_aux1_6696_; lean_object* v___x_6697_; lean_object* v___x_6698_; lean_object* v___x_6699_; lean_object* v___x_6700_; lean_object* v___x_6701_; lean_object* v___f_6702_; uint8_t v___x_6703_; lean_object* v___x_6704_; lean_object* v___x_6705_; lean_object* v___x_6706_; 
lean_inc_ref(v_matcherLevels_6662_);
v___x_6692_ = lean_array_to_list(v_matcherLevels_6662_);
lean_inc(v___x_6692_);
lean_inc(v_matcherName_6548_);
v___x_6693_ = l_Lean_mkConst(v_matcherName_6548_, v___x_6692_);
v_aux1_6694_ = l_Lean_mkAppN(v___x_6693_, v___y_6658_);
lean_inc_ref(v___y_6659_);
v_aux1_6695_ = l_Lean_Expr_app___override(v_aux1_6694_, v___y_6659_);
v_aux1_6696_ = l_Lean_mkAppN(v_aux1_6695_, v___y_6656_);
v___x_6697_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
lean_inc_ref_n(v_aux1_6696_, 2);
v___x_6698_ = l_Lean_indentExpr(v_aux1_6696_);
v___x_6699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6699_, 0, v___x_6697_);
lean_ctor_set(v___x_6699_, 1, v___x_6698_);
v___x_6700_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_6701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6701_, 0, v___x_6699_);
lean_ctor_set(v___x_6701_, 1, v___x_6700_);
v___f_6702_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6702_, 0, v___x_6701_);
v___x_6703_ = 0;
v___x_6704_ = lean_box(v___x_6703_);
v___x_6705_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6705_, 0, v_aux1_6696_);
lean_closure_set(v___x_6705_, 1, v___x_6704_);
v___x_6706_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6705_, v___f_6702_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6706_) == 0)
{
lean_object* v___x_6707_; lean_object* v___x_6708_; 
lean_dec_ref_known(v___x_6706_, 1);
v___x_6707_ = lean_array_get_size(v_alts_6553_);
v___x_6708_ = l_Lean_Meta_inferArgumentTypesN(v___x_6707_, v_aux1_6696_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6708_) == 0)
{
lean_object* v_a_6709_; lean_object* v___x_6710_; 
v_a_6709_ = lean_ctor_get(v___x_6708_, 0);
lean_inc(v_a_6709_);
lean_dec_ref_known(v___x_6708_, 1);
lean_inc(v___y_6666_);
lean_inc_ref(v___y_6665_);
lean_inc(v___y_6664_);
lean_inc_ref(v___y_6663_);
v___x_6710_ = lean_get_match_equations_for(v_matcherName_6548_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6710_) == 0)
{
lean_object* v_a_6711_; lean_object* v_splitterName_6712_; lean_object* v_splitterMatchInfo_6713_; lean_object* v___x_6714_; lean_object* v_aux2_6715_; lean_object* v_aux2_6716_; lean_object* v_aux2_6717_; lean_object* v___x_6718_; lean_object* v___x_6719_; lean_object* v___x_6720_; lean_object* v___x_6721_; lean_object* v___f_6722_; lean_object* v___x_6723_; lean_object* v___x_6724_; lean_object* v___x_6725_; 
v_a_6711_ = lean_ctor_get(v___x_6710_, 0);
lean_inc(v_a_6711_);
lean_dec_ref_known(v___x_6710_, 1);
v_splitterName_6712_ = lean_ctor_get(v_a_6711_, 1);
lean_inc_n(v_splitterName_6712_, 2);
v_splitterMatchInfo_6713_ = lean_ctor_get(v_a_6711_, 2);
lean_inc_ref(v_splitterMatchInfo_6713_);
lean_dec(v_a_6711_);
v___x_6714_ = l_Lean_mkConst(v_splitterName_6712_, v___x_6692_);
v_aux2_6715_ = l_Lean_mkAppN(v___x_6714_, v___y_6658_);
lean_inc_ref(v___y_6659_);
v_aux2_6716_ = l_Lean_Expr_app___override(v_aux2_6715_, v___y_6659_);
v_aux2_6717_ = l_Lean_mkAppN(v_aux2_6716_, v___y_6656_);
v___x_6718_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
lean_inc_ref_n(v_aux2_6717_, 2);
v___x_6719_ = l_Lean_indentExpr(v_aux2_6717_);
v___x_6720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6720_, 0, v___x_6718_);
lean_ctor_set(v___x_6720_, 1, v___x_6719_);
v___x_6721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6721_, 0, v___x_6720_);
lean_ctor_set(v___x_6721_, 1, v___x_6700_);
v___f_6722_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6722_, 0, v___x_6721_);
v___x_6723_ = lean_box(v___x_6703_);
v___x_6724_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6724_, 0, v_aux2_6717_);
lean_closure_set(v___x_6724_, 1, v___x_6723_);
v___x_6725_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6724_, v___f_6722_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6725_) == 0)
{
lean_object* v___x_6726_; 
lean_dec_ref_known(v___x_6725_, 1);
v___x_6726_ = l_Lean_Meta_inferArgumentTypesN(v___x_6707_, v_aux2_6717_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6726_) == 0)
{
lean_object* v_a_6727_; lean_object* v_numParams_6728_; lean_object* v_numDiscrs_6729_; lean_object* v_altInfos_6730_; lean_object* v_uElimPos_x3f_6731_; lean_object* v_overlaps_6732_; lean_object* v_altInfos_6733_; lean_object* v___x_6735_; uint8_t v_isShared_6736_; uint8_t v_isSharedCheck_6790_; 
v_a_6727_ = lean_ctor_get(v___x_6726_, 0);
lean_inc(v_a_6727_);
lean_dec_ref_known(v___x_6726_, 1);
v_numParams_6728_ = lean_ctor_get(v_toMatcherInfo_6547_, 0);
lean_inc(v_numParams_6728_);
v_numDiscrs_6729_ = lean_ctor_get(v_toMatcherInfo_6547_, 1);
lean_inc(v_numDiscrs_6729_);
v_altInfos_6730_ = lean_ctor_get(v_toMatcherInfo_6547_, 2);
lean_inc_ref(v_altInfos_6730_);
v_uElimPos_x3f_6731_ = lean_ctor_get(v_toMatcherInfo_6547_, 3);
lean_inc(v_uElimPos_x3f_6731_);
v_overlaps_6732_ = lean_ctor_get(v_toMatcherInfo_6547_, 5);
lean_inc_ref(v_overlaps_6732_);
lean_dec_ref(v_toMatcherInfo_6547_);
v_altInfos_6733_ = lean_ctor_get(v_splitterMatchInfo_6713_, 2);
v_isSharedCheck_6790_ = !lean_is_exclusive(v_splitterMatchInfo_6713_);
if (v_isSharedCheck_6790_ == 0)
{
lean_object* v_unused_6791_; lean_object* v_unused_6792_; lean_object* v_unused_6793_; lean_object* v_unused_6794_; lean_object* v_unused_6795_; 
v_unused_6791_ = lean_ctor_get(v_splitterMatchInfo_6713_, 5);
lean_dec(v_unused_6791_);
v_unused_6792_ = lean_ctor_get(v_splitterMatchInfo_6713_, 4);
lean_dec(v_unused_6792_);
v_unused_6793_ = lean_ctor_get(v_splitterMatchInfo_6713_, 3);
lean_dec(v_unused_6793_);
v_unused_6794_ = lean_ctor_get(v_splitterMatchInfo_6713_, 1);
lean_dec(v_unused_6794_);
v_unused_6795_ = lean_ctor_get(v_splitterMatchInfo_6713_, 0);
lean_dec(v_unused_6795_);
v___x_6735_ = v_splitterMatchInfo_6713_;
v_isShared_6736_ = v_isSharedCheck_6790_;
goto v_resetjp_6734_;
}
else
{
lean_inc(v_altInfos_6733_);
lean_dec(v_splitterMatchInfo_6713_);
v___x_6735_ = lean_box(0);
v_isShared_6736_ = v_isSharedCheck_6790_;
goto v_resetjp_6734_;
}
v_resetjp_6734_:
{
lean_object* v___x_6737_; lean_object* v___x_6738_; lean_object* v___x_6739_; lean_object* v___x_6740_; lean_object* v___x_6741_; lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6747_; 
v___x_6737_ = lean_array_get_size(v_altInfos_6730_);
v___x_6738_ = lean_array_get_size(v_altInfos_6733_);
v___x_6739_ = lean_array_get_size(v_a_6709_);
v___x_6740_ = lean_array_get_size(v_a_6727_);
v___x_6741_ = l_Array_toSubarray___redArg(v_alts_6553_, v___x_6667_, v___x_6707_);
lean_inc_ref(v_altInfos_6730_);
v___x_6742_ = l_Array_toSubarray___redArg(v_altInfos_6730_, v___x_6667_, v___x_6737_);
v___x_6743_ = l_Array_toSubarray___redArg(v_altInfos_6733_, v___x_6667_, v___x_6738_);
v___x_6744_ = l_Array_toSubarray___redArg(v_a_6709_, v___x_6667_, v___x_6739_);
v___x_6745_ = l_Array_toSubarray___redArg(v_a_6727_, v___x_6667_, v___x_6740_);
if (v_isShared_6691_ == 0)
{
lean_ctor_set(v___x_6690_, 1, v___x_6745_);
lean_ctor_set(v___x_6690_, 0, v___x_6744_);
v___x_6747_ = v___x_6690_;
goto v_reusejp_6746_;
}
else
{
lean_object* v_reuseFailAlloc_6789_; 
v_reuseFailAlloc_6789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6789_, 0, v___x_6744_);
lean_ctor_set(v_reuseFailAlloc_6789_, 1, v___x_6745_);
v___x_6747_ = v_reuseFailAlloc_6789_;
goto v_reusejp_6746_;
}
v_reusejp_6746_:
{
lean_object* v___x_6749_; 
if (v_isShared_6687_ == 0)
{
lean_ctor_set(v___x_6686_, 1, v___x_6747_);
lean_ctor_set(v___x_6686_, 0, v___x_6743_);
v___x_6749_ = v___x_6686_;
goto v_reusejp_6748_;
}
else
{
lean_object* v_reuseFailAlloc_6788_; 
v_reuseFailAlloc_6788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6788_, 0, v___x_6743_);
lean_ctor_set(v_reuseFailAlloc_6788_, 1, v___x_6747_);
v___x_6749_ = v_reuseFailAlloc_6788_;
goto v_reusejp_6748_;
}
v_reusejp_6748_:
{
lean_object* v___x_6750_; lean_object* v___x_6751_; lean_object* v___x_6752_; lean_object* v___x_6753_; 
v___x_6750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6750_, 0, v___x_6742_);
lean_ctor_set(v___x_6750_, 1, v___x_6749_);
v___x_6751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6751_, 0, v___x_6741_);
lean_ctor_set(v___x_6751_, 1, v___x_6750_);
v___x_6752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6752_, 0, v_remaining_x27_6668_);
lean_ctor_set(v___x_6752_, 1, v___x_6751_);
v___x_6753_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v___x_6707_, v_onAlt_6538_, v_useSplitter_6534_, v_fst_6688_, v___y_6660_, v___x_6667_, v___x_6752_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_);
if (lean_obj_tag(v___x_6753_) == 0)
{
lean_object* v_a_6754_; lean_object* v_fst_6755_; lean_object* v___x_6756_; 
v_a_6754_ = lean_ctor_get(v___x_6753_, 0);
lean_inc(v_a_6754_);
lean_dec_ref_known(v___x_6753_, 1);
v_fst_6755_ = lean_ctor_get(v_a_6754_, 0);
lean_inc(v_fst_6755_);
lean_dec(v_a_6754_);
lean_inc(v___y_6666_);
lean_inc_ref(v___y_6665_);
lean_inc(v___y_6664_);
lean_inc_ref(v___y_6663_);
v___x_6756_ = lean_apply_6(v_onRemaining_6539_, v_remaining_6554_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_, lean_box(0));
if (lean_obj_tag(v___x_6756_) == 0)
{
lean_object* v_a_6757_; lean_object* v___x_6759_; uint8_t v_isShared_6760_; uint8_t v_isSharedCheck_6771_; 
v_a_6757_ = lean_ctor_get(v___x_6756_, 0);
v_isSharedCheck_6771_ = !lean_is_exclusive(v___x_6756_);
if (v_isSharedCheck_6771_ == 0)
{
v___x_6759_ = v___x_6756_;
v_isShared_6760_ = v_isSharedCheck_6771_;
goto v_resetjp_6758_;
}
else
{
lean_inc(v_a_6757_);
lean_dec(v___x_6756_);
v___x_6759_ = lean_box(0);
v_isShared_6760_ = v_isSharedCheck_6771_;
goto v_resetjp_6758_;
}
v_resetjp_6758_:
{
lean_object* v_remaining_x27_6761_; lean_object* v___x_6763_; 
v_remaining_x27_6761_ = l_Array_append___redArg(v_fst_6684_, v_a_6757_);
lean_dec(v_a_6757_);
if (v_isShared_6736_ == 0)
{
lean_ctor_set(v___x_6735_, 5, v_overlaps_6732_);
lean_ctor_set(v___x_6735_, 4, v___y_6661_);
lean_ctor_set(v___x_6735_, 3, v_uElimPos_x3f_6731_);
lean_ctor_set(v___x_6735_, 2, v_altInfos_6730_);
lean_ctor_set(v___x_6735_, 1, v_numDiscrs_6729_);
lean_ctor_set(v___x_6735_, 0, v_numParams_6728_);
v___x_6763_ = v___x_6735_;
goto v_reusejp_6762_;
}
else
{
lean_object* v_reuseFailAlloc_6770_; 
v_reuseFailAlloc_6770_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6770_, 0, v_numParams_6728_);
lean_ctor_set(v_reuseFailAlloc_6770_, 1, v_numDiscrs_6729_);
lean_ctor_set(v_reuseFailAlloc_6770_, 2, v_altInfos_6730_);
lean_ctor_set(v_reuseFailAlloc_6770_, 3, v_uElimPos_x3f_6731_);
lean_ctor_set(v_reuseFailAlloc_6770_, 4, v___y_6661_);
lean_ctor_set(v_reuseFailAlloc_6770_, 5, v_overlaps_6732_);
v___x_6763_ = v_reuseFailAlloc_6770_;
goto v_reusejp_6762_;
}
v_reusejp_6762_:
{
lean_object* v___x_6765_; 
if (v_isShared_6683_ == 0)
{
lean_ctor_set(v___x_6682_, 7, v_remaining_x27_6761_);
lean_ctor_set(v___x_6682_, 6, v_fst_6755_);
lean_ctor_set(v___x_6682_, 5, v___y_6656_);
lean_ctor_set(v___x_6682_, 4, v___y_6659_);
lean_ctor_set(v___x_6682_, 3, v___y_6658_);
lean_ctor_set(v___x_6682_, 2, v_matcherLevels_6662_);
lean_ctor_set(v___x_6682_, 1, v_splitterName_6712_);
lean_ctor_set(v___x_6682_, 0, v___x_6763_);
v___x_6765_ = v___x_6682_;
goto v_reusejp_6764_;
}
else
{
lean_object* v_reuseFailAlloc_6769_; 
v_reuseFailAlloc_6769_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6769_, 0, v___x_6763_);
lean_ctor_set(v_reuseFailAlloc_6769_, 1, v_splitterName_6712_);
lean_ctor_set(v_reuseFailAlloc_6769_, 2, v_matcherLevels_6662_);
lean_ctor_set(v_reuseFailAlloc_6769_, 3, v___y_6658_);
lean_ctor_set(v_reuseFailAlloc_6769_, 4, v___y_6659_);
lean_ctor_set(v_reuseFailAlloc_6769_, 5, v___y_6656_);
lean_ctor_set(v_reuseFailAlloc_6769_, 6, v_fst_6755_);
lean_ctor_set(v_reuseFailAlloc_6769_, 7, v_remaining_x27_6761_);
v___x_6765_ = v_reuseFailAlloc_6769_;
goto v_reusejp_6764_;
}
v_reusejp_6764_:
{
lean_object* v___x_6767_; 
if (v_isShared_6760_ == 0)
{
lean_ctor_set(v___x_6759_, 0, v___x_6765_);
v___x_6767_ = v___x_6759_;
goto v_reusejp_6766_;
}
else
{
lean_object* v_reuseFailAlloc_6768_; 
v_reuseFailAlloc_6768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6768_, 0, v___x_6765_);
v___x_6767_ = v_reuseFailAlloc_6768_;
goto v_reusejp_6766_;
}
v_reusejp_6766_:
{
return v___x_6767_;
}
}
}
}
}
else
{
lean_object* v_a_6772_; lean_object* v___x_6774_; uint8_t v_isShared_6775_; uint8_t v_isSharedCheck_6779_; 
lean_dec(v_fst_6755_);
lean_del_object(v___x_6735_);
lean_dec_ref(v_overlaps_6732_);
lean_dec(v_uElimPos_x3f_6731_);
lean_dec_ref(v_altInfos_6730_);
lean_dec(v_numDiscrs_6729_);
lean_dec(v_numParams_6728_);
lean_dec(v_splitterName_6712_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
v_a_6772_ = lean_ctor_get(v___x_6756_, 0);
v_isSharedCheck_6779_ = !lean_is_exclusive(v___x_6756_);
if (v_isSharedCheck_6779_ == 0)
{
v___x_6774_ = v___x_6756_;
v_isShared_6775_ = v_isSharedCheck_6779_;
goto v_resetjp_6773_;
}
else
{
lean_inc(v_a_6772_);
lean_dec(v___x_6756_);
v___x_6774_ = lean_box(0);
v_isShared_6775_ = v_isSharedCheck_6779_;
goto v_resetjp_6773_;
}
v_resetjp_6773_:
{
lean_object* v___x_6777_; 
if (v_isShared_6775_ == 0)
{
v___x_6777_ = v___x_6774_;
goto v_reusejp_6776_;
}
else
{
lean_object* v_reuseFailAlloc_6778_; 
v_reuseFailAlloc_6778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6778_, 0, v_a_6772_);
v___x_6777_ = v_reuseFailAlloc_6778_;
goto v_reusejp_6776_;
}
v_reusejp_6776_:
{
return v___x_6777_;
}
}
}
}
else
{
lean_object* v_a_6780_; lean_object* v___x_6782_; uint8_t v_isShared_6783_; uint8_t v_isSharedCheck_6787_; 
lean_del_object(v___x_6735_);
lean_dec_ref(v_overlaps_6732_);
lean_dec(v_uElimPos_x3f_6731_);
lean_dec_ref(v_altInfos_6730_);
lean_dec(v_numDiscrs_6729_);
lean_dec(v_numParams_6728_);
lean_dec(v_splitterName_6712_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_onRemaining_6539_);
v_a_6780_ = lean_ctor_get(v___x_6753_, 0);
v_isSharedCheck_6787_ = !lean_is_exclusive(v___x_6753_);
if (v_isSharedCheck_6787_ == 0)
{
v___x_6782_ = v___x_6753_;
v_isShared_6783_ = v_isSharedCheck_6787_;
goto v_resetjp_6781_;
}
else
{
lean_inc(v_a_6780_);
lean_dec(v___x_6753_);
v___x_6782_ = lean_box(0);
v_isShared_6783_ = v_isSharedCheck_6787_;
goto v_resetjp_6781_;
}
v_resetjp_6781_:
{
lean_object* v___x_6785_; 
if (v_isShared_6783_ == 0)
{
v___x_6785_ = v___x_6782_;
goto v_reusejp_6784_;
}
else
{
lean_object* v_reuseFailAlloc_6786_; 
v_reuseFailAlloc_6786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6786_, 0, v_a_6780_);
v___x_6785_ = v_reuseFailAlloc_6786_;
goto v_reusejp_6784_;
}
v_reusejp_6784_:
{
return v___x_6785_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6796_; lean_object* v___x_6798_; uint8_t v_isShared_6799_; uint8_t v_isSharedCheck_6803_; 
lean_dec_ref(v_splitterMatchInfo_6713_);
lean_dec(v_splitterName_6712_);
lean_dec(v_a_6709_);
lean_del_object(v___x_6690_);
lean_dec(v_fst_6688_);
lean_del_object(v___x_6686_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
v_a_6796_ = lean_ctor_get(v___x_6726_, 0);
v_isSharedCheck_6803_ = !lean_is_exclusive(v___x_6726_);
if (v_isSharedCheck_6803_ == 0)
{
v___x_6798_ = v___x_6726_;
v_isShared_6799_ = v_isSharedCheck_6803_;
goto v_resetjp_6797_;
}
else
{
lean_inc(v_a_6796_);
lean_dec(v___x_6726_);
v___x_6798_ = lean_box(0);
v_isShared_6799_ = v_isSharedCheck_6803_;
goto v_resetjp_6797_;
}
v_resetjp_6797_:
{
lean_object* v___x_6801_; 
if (v_isShared_6799_ == 0)
{
v___x_6801_ = v___x_6798_;
goto v_reusejp_6800_;
}
else
{
lean_object* v_reuseFailAlloc_6802_; 
v_reuseFailAlloc_6802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6802_, 0, v_a_6796_);
v___x_6801_ = v_reuseFailAlloc_6802_;
goto v_reusejp_6800_;
}
v_reusejp_6800_:
{
return v___x_6801_;
}
}
}
}
else
{
lean_object* v_a_6804_; lean_object* v___x_6806_; uint8_t v_isShared_6807_; uint8_t v_isSharedCheck_6811_; 
lean_dec_ref(v_aux2_6717_);
lean_dec_ref(v_splitterMatchInfo_6713_);
lean_dec(v_splitterName_6712_);
lean_dec(v_a_6709_);
lean_del_object(v___x_6690_);
lean_dec(v_fst_6688_);
lean_del_object(v___x_6686_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
v_a_6804_ = lean_ctor_get(v___x_6725_, 0);
v_isSharedCheck_6811_ = !lean_is_exclusive(v___x_6725_);
if (v_isSharedCheck_6811_ == 0)
{
v___x_6806_ = v___x_6725_;
v_isShared_6807_ = v_isSharedCheck_6811_;
goto v_resetjp_6805_;
}
else
{
lean_inc(v_a_6804_);
lean_dec(v___x_6725_);
v___x_6806_ = lean_box(0);
v_isShared_6807_ = v_isSharedCheck_6811_;
goto v_resetjp_6805_;
}
v_resetjp_6805_:
{
lean_object* v___x_6809_; 
if (v_isShared_6807_ == 0)
{
v___x_6809_ = v___x_6806_;
goto v_reusejp_6808_;
}
else
{
lean_object* v_reuseFailAlloc_6810_; 
v_reuseFailAlloc_6810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6810_, 0, v_a_6804_);
v___x_6809_ = v_reuseFailAlloc_6810_;
goto v_reusejp_6808_;
}
v_reusejp_6808_:
{
return v___x_6809_;
}
}
}
}
else
{
lean_object* v_a_6812_; lean_object* v___x_6814_; uint8_t v_isShared_6815_; uint8_t v_isSharedCheck_6819_; 
lean_dec(v_a_6709_);
lean_dec(v___x_6692_);
lean_del_object(v___x_6690_);
lean_dec(v_fst_6688_);
lean_del_object(v___x_6686_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
v_a_6812_ = lean_ctor_get(v___x_6710_, 0);
v_isSharedCheck_6819_ = !lean_is_exclusive(v___x_6710_);
if (v_isSharedCheck_6819_ == 0)
{
v___x_6814_ = v___x_6710_;
v_isShared_6815_ = v_isSharedCheck_6819_;
goto v_resetjp_6813_;
}
else
{
lean_inc(v_a_6812_);
lean_dec(v___x_6710_);
v___x_6814_ = lean_box(0);
v_isShared_6815_ = v_isSharedCheck_6819_;
goto v_resetjp_6813_;
}
v_resetjp_6813_:
{
lean_object* v___x_6817_; 
if (v_isShared_6815_ == 0)
{
v___x_6817_ = v___x_6814_;
goto v_reusejp_6816_;
}
else
{
lean_object* v_reuseFailAlloc_6818_; 
v_reuseFailAlloc_6818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6818_, 0, v_a_6812_);
v___x_6817_ = v_reuseFailAlloc_6818_;
goto v_reusejp_6816_;
}
v_reusejp_6816_:
{
return v___x_6817_;
}
}
}
}
else
{
lean_object* v_a_6820_; lean_object* v___x_6822_; uint8_t v_isShared_6823_; uint8_t v_isSharedCheck_6827_; 
lean_dec(v___x_6692_);
lean_del_object(v___x_6690_);
lean_dec(v_fst_6688_);
lean_del_object(v___x_6686_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
v_a_6820_ = lean_ctor_get(v___x_6708_, 0);
v_isSharedCheck_6827_ = !lean_is_exclusive(v___x_6708_);
if (v_isSharedCheck_6827_ == 0)
{
v___x_6822_ = v___x_6708_;
v_isShared_6823_ = v_isSharedCheck_6827_;
goto v_resetjp_6821_;
}
else
{
lean_inc(v_a_6820_);
lean_dec(v___x_6708_);
v___x_6822_ = lean_box(0);
v_isShared_6823_ = v_isSharedCheck_6827_;
goto v_resetjp_6821_;
}
v_resetjp_6821_:
{
lean_object* v___x_6825_; 
if (v_isShared_6823_ == 0)
{
v___x_6825_ = v___x_6822_;
goto v_reusejp_6824_;
}
else
{
lean_object* v_reuseFailAlloc_6826_; 
v_reuseFailAlloc_6826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6826_, 0, v_a_6820_);
v___x_6825_ = v_reuseFailAlloc_6826_;
goto v_reusejp_6824_;
}
v_reusejp_6824_:
{
return v___x_6825_;
}
}
}
}
else
{
lean_object* v_a_6828_; lean_object* v___x_6830_; uint8_t v_isShared_6831_; uint8_t v_isSharedCheck_6835_; 
lean_dec_ref(v_aux1_6696_);
lean_dec(v___x_6692_);
lean_del_object(v___x_6690_);
lean_dec(v_fst_6688_);
lean_del_object(v___x_6686_);
lean_dec(v_fst_6684_);
lean_del_object(v___x_6682_);
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
v_a_6828_ = lean_ctor_get(v___x_6706_, 0);
v_isSharedCheck_6835_ = !lean_is_exclusive(v___x_6706_);
if (v_isSharedCheck_6835_ == 0)
{
v___x_6830_ = v___x_6706_;
v_isShared_6831_ = v_isSharedCheck_6835_;
goto v_resetjp_6829_;
}
else
{
lean_inc(v_a_6828_);
lean_dec(v___x_6706_);
v___x_6830_ = lean_box(0);
v_isShared_6831_ = v_isSharedCheck_6835_;
goto v_resetjp_6829_;
}
v_resetjp_6829_:
{
lean_object* v___x_6833_; 
if (v_isShared_6831_ == 0)
{
v___x_6833_ = v___x_6830_;
goto v_reusejp_6832_;
}
else
{
lean_object* v_reuseFailAlloc_6834_; 
v_reuseFailAlloc_6834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6834_, 0, v_a_6828_);
v___x_6833_ = v_reuseFailAlloc_6834_;
goto v_reusejp_6832_;
}
v_reusejp_6832_:
{
return v___x_6833_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_6849_; lean_object* v_fst_6850_; 
lean_dec(v___y_6660_);
v_fst_6849_ = lean_ctor_get(v_a_6677_, 0);
lean_inc(v_fst_6849_);
lean_dec(v_a_6677_);
v_fst_6850_ = lean_ctor_get(v_snd_6678_, 0);
lean_inc(v_fst_6850_);
lean_dec(v_snd_6678_);
v___y_6556_ = v___y_6666_;
v___y_6557_ = v_matcherLevels_6662_;
v___y_6558_ = v___y_6663_;
v___y_6559_ = v___y_6656_;
v___y_6560_ = v___y_6665_;
v___y_6561_ = v___y_6658_;
v___y_6562_ = v___y_6661_;
v___y_6563_ = v_fst_6850_;
v___y_6564_ = v___y_6664_;
v___y_6565_ = v___x_6667_;
v___y_6566_ = v_remaining_x27_6668_;
v___y_6567_ = v___y_6659_;
v___y_6568_ = v_fst_6849_;
goto v___jp_6555_;
}
}
}
else
{
lean_object* v_a_6851_; lean_object* v___x_6853_; uint8_t v_isShared_6854_; uint8_t v_isSharedCheck_6858_; 
lean_dec_ref(v_matcherLevels_6662_);
lean_dec_ref(v___y_6661_);
lean_dec(v___y_6660_);
lean_dec_ref(v___y_6659_);
lean_dec_ref(v___y_6658_);
lean_dec_ref(v___y_6656_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6851_ = lean_ctor_get(v___x_6676_, 0);
v_isSharedCheck_6858_ = !lean_is_exclusive(v___x_6676_);
if (v_isSharedCheck_6858_ == 0)
{
v___x_6853_ = v___x_6676_;
v_isShared_6854_ = v_isSharedCheck_6858_;
goto v_resetjp_6852_;
}
else
{
lean_inc(v_a_6851_);
lean_dec(v___x_6676_);
v___x_6853_ = lean_box(0);
v_isShared_6854_ = v_isSharedCheck_6858_;
goto v_resetjp_6852_;
}
v_resetjp_6852_:
{
lean_object* v___x_6856_; 
if (v_isShared_6854_ == 0)
{
v___x_6856_ = v___x_6853_;
goto v_reusejp_6855_;
}
else
{
lean_object* v_reuseFailAlloc_6857_; 
v_reuseFailAlloc_6857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6857_, 0, v_a_6851_);
v___x_6856_ = v_reuseFailAlloc_6857_;
goto v_reusejp_6855_;
}
v_reusejp_6855_:
{
return v___x_6856_;
}
}
}
}
v___jp_6859_:
{
size_t v_sz_6865_; size_t v___x_6866_; lean_object* v___x_6867_; 
v_sz_6865_ = lean_array_size(v_params_6550_);
v___x_6866_ = ((size_t)0ULL);
lean_inc_ref(v_params_6550_);
lean_inc_ref(v_onParams_6536_);
v___x_6867_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6536_, v_sz_6865_, v___x_6866_, v_params_6550_, v___y_6861_, v___y_6862_, v___y_6863_, v___y_6864_);
if (lean_obj_tag(v___x_6867_) == 0)
{
lean_object* v_a_6868_; size_t v_sz_6869_; lean_object* v___x_6870_; 
v_a_6868_ = lean_ctor_get(v___x_6867_, 0);
lean_inc(v_a_6868_);
lean_dec_ref_known(v___x_6867_, 1);
v_sz_6869_ = lean_array_size(v_discrs_6552_);
lean_inc_ref(v_discrs_6552_);
v___x_6870_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6536_, v_sz_6869_, v___x_6866_, v_discrs_6552_, v___y_6861_, v___y_6862_, v___y_6863_, v___y_6864_);
if (lean_obj_tag(v___x_6870_) == 0)
{
lean_object* v_a_6871_; lean_object* v___x_6872_; lean_object* v___x_6873_; lean_object* v___f_6874_; uint8_t v___x_6875_; lean_object* v___x_6876_; 
v_a_6871_ = lean_ctor_get(v___x_6870_, 0);
lean_inc_n(v_a_6871_, 2);
lean_dec_ref_known(v___x_6870_, 1);
v___x_6872_ = lean_box(v_addEqualities_6535_);
v___x_6873_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1));
lean_inc_ref(v_discrs_6552_);
lean_inc_ref(v_toMatcherInfo_6547_);
v___f_6874_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed), 13, 6);
lean_closure_set(v___f_6874_, 0, v_onMotive_6537_);
lean_closure_set(v___f_6874_, 1, v_toMatcherInfo_6547_);
lean_closure_set(v___f_6874_, 2, v_a_6871_);
lean_closure_set(v___f_6874_, 3, v___x_6872_);
lean_closure_set(v___f_6874_, 4, v___x_6873_);
lean_closure_set(v___f_6874_, 5, v_discrs_6552_);
v___x_6875_ = 0;
lean_inc_ref(v_motive_6551_);
v___x_6876_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_6551_, v___f_6874_, v___x_6875_, v___y_6861_, v___y_6862_, v___y_6863_, v___y_6864_);
if (lean_obj_tag(v___x_6876_) == 0)
{
lean_object* v_a_6877_; lean_object* v_snd_6878_; lean_object* v_snd_6879_; lean_object* v_uElimPos_x3f_6880_; 
v_a_6877_ = lean_ctor_get(v___x_6876_, 0);
lean_inc(v_a_6877_);
lean_dec_ref_known(v___x_6876_, 1);
v_snd_6878_ = lean_ctor_get(v_a_6877_, 1);
v_snd_6879_ = lean_ctor_get(v_snd_6878_, 1);
lean_inc(v_snd_6879_);
v_uElimPos_x3f_6880_ = lean_ctor_get(v_toMatcherInfo_6547_, 3);
if (lean_obj_tag(v_uElimPos_x3f_6880_) == 0)
{
lean_object* v_fst_6881_; lean_object* v_fst_6882_; lean_object* v_snd_6883_; 
v_fst_6881_ = lean_ctor_get(v_a_6877_, 0);
lean_inc(v_fst_6881_);
lean_dec(v_a_6877_);
v_fst_6882_ = lean_ctor_get(v_snd_6879_, 0);
lean_inc(v_fst_6882_);
v_snd_6883_ = lean_ctor_get(v_snd_6879_, 1);
lean_inc(v_snd_6883_);
lean_dec(v_snd_6879_);
lean_inc_ref(v_matcherLevels_6549_);
v___y_6655_ = v___x_6866_;
v___y_6656_ = v_a_6871_;
v___y_6657_ = v_fst_6882_;
v___y_6658_ = v_a_6868_;
v___y_6659_ = v_fst_6881_;
v___y_6660_ = v_numDiscrEqs_6860_;
v___y_6661_ = v_snd_6883_;
v_matcherLevels_6662_ = v_matcherLevels_6549_;
v___y_6663_ = v___y_6861_;
v___y_6664_ = v___y_6862_;
v___y_6665_ = v___y_6863_;
v___y_6666_ = v___y_6864_;
goto v___jp_6654_;
}
else
{
lean_object* v_fst_6884_; lean_object* v_fst_6885_; lean_object* v_fst_6886_; lean_object* v_snd_6887_; lean_object* v_val_6888_; lean_object* v___x_6889_; 
lean_inc(v_snd_6878_);
v_fst_6884_ = lean_ctor_get(v_a_6877_, 0);
lean_inc(v_fst_6884_);
lean_dec(v_a_6877_);
v_fst_6885_ = lean_ctor_get(v_snd_6878_, 0);
lean_inc(v_fst_6885_);
lean_dec(v_snd_6878_);
v_fst_6886_ = lean_ctor_get(v_snd_6879_, 0);
lean_inc(v_fst_6886_);
v_snd_6887_ = lean_ctor_get(v_snd_6879_, 1);
lean_inc(v_snd_6887_);
lean_dec(v_snd_6879_);
v_val_6888_ = lean_ctor_get(v_uElimPos_x3f_6880_, 0);
lean_inc_ref(v_matcherLevels_6549_);
v___x_6889_ = lean_array_set(v_matcherLevels_6549_, v_val_6888_, v_fst_6885_);
v___y_6655_ = v___x_6866_;
v___y_6656_ = v_a_6871_;
v___y_6657_ = v_fst_6886_;
v___y_6658_ = v_a_6868_;
v___y_6659_ = v_fst_6884_;
v___y_6660_ = v_numDiscrEqs_6860_;
v___y_6661_ = v_snd_6887_;
v_matcherLevels_6662_ = v___x_6889_;
v___y_6663_ = v___y_6861_;
v___y_6664_ = v___y_6862_;
v___y_6665_ = v___y_6863_;
v___y_6666_ = v___y_6864_;
goto v___jp_6654_;
}
}
else
{
lean_object* v_a_6890_; lean_object* v___x_6892_; uint8_t v_isShared_6893_; uint8_t v_isSharedCheck_6897_; 
lean_dec(v_a_6871_);
lean_dec(v_a_6868_);
lean_dec(v_numDiscrEqs_6860_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6890_ = lean_ctor_get(v___x_6876_, 0);
v_isSharedCheck_6897_ = !lean_is_exclusive(v___x_6876_);
if (v_isSharedCheck_6897_ == 0)
{
v___x_6892_ = v___x_6876_;
v_isShared_6893_ = v_isSharedCheck_6897_;
goto v_resetjp_6891_;
}
else
{
lean_inc(v_a_6890_);
lean_dec(v___x_6876_);
v___x_6892_ = lean_box(0);
v_isShared_6893_ = v_isSharedCheck_6897_;
goto v_resetjp_6891_;
}
v_resetjp_6891_:
{
lean_object* v___x_6895_; 
if (v_isShared_6893_ == 0)
{
v___x_6895_ = v___x_6892_;
goto v_reusejp_6894_;
}
else
{
lean_object* v_reuseFailAlloc_6896_; 
v_reuseFailAlloc_6896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6896_, 0, v_a_6890_);
v___x_6895_ = v_reuseFailAlloc_6896_;
goto v_reusejp_6894_;
}
v_reusejp_6894_:
{
return v___x_6895_;
}
}
}
}
else
{
lean_object* v_a_6898_; lean_object* v___x_6900_; uint8_t v_isShared_6901_; uint8_t v_isSharedCheck_6905_; 
lean_dec(v_a_6868_);
lean_dec(v_numDiscrEqs_6860_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_onMotive_6537_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6898_ = lean_ctor_get(v___x_6870_, 0);
v_isSharedCheck_6905_ = !lean_is_exclusive(v___x_6870_);
if (v_isSharedCheck_6905_ == 0)
{
v___x_6900_ = v___x_6870_;
v_isShared_6901_ = v_isSharedCheck_6905_;
goto v_resetjp_6899_;
}
else
{
lean_inc(v_a_6898_);
lean_dec(v___x_6870_);
v___x_6900_ = lean_box(0);
v_isShared_6901_ = v_isSharedCheck_6905_;
goto v_resetjp_6899_;
}
v_resetjp_6899_:
{
lean_object* v___x_6903_; 
if (v_isShared_6901_ == 0)
{
v___x_6903_ = v___x_6900_;
goto v_reusejp_6902_;
}
else
{
lean_object* v_reuseFailAlloc_6904_; 
v_reuseFailAlloc_6904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6904_, 0, v_a_6898_);
v___x_6903_ = v_reuseFailAlloc_6904_;
goto v_reusejp_6902_;
}
v_reusejp_6902_:
{
return v___x_6903_;
}
}
}
}
else
{
lean_object* v_a_6906_; lean_object* v___x_6908_; uint8_t v_isShared_6909_; uint8_t v_isSharedCheck_6913_; 
lean_dec(v_numDiscrEqs_6860_);
lean_dec_ref(v_remaining_6554_);
lean_dec_ref(v_alts_6553_);
lean_dec(v_matcherName_6548_);
lean_dec_ref(v_toMatcherInfo_6547_);
lean_dec_ref(v_onRemaining_6539_);
lean_dec_ref(v_onAlt_6538_);
lean_dec_ref(v_onMotive_6537_);
lean_dec_ref(v_onParams_6536_);
lean_dec_ref(v_matcherApp_6533_);
v_a_6906_ = lean_ctor_get(v___x_6867_, 0);
v_isSharedCheck_6913_ = !lean_is_exclusive(v___x_6867_);
if (v_isSharedCheck_6913_ == 0)
{
v___x_6908_ = v___x_6867_;
v_isShared_6909_ = v_isSharedCheck_6913_;
goto v_resetjp_6907_;
}
else
{
lean_inc(v_a_6906_);
lean_dec(v___x_6867_);
v___x_6908_ = lean_box(0);
v_isShared_6909_ = v_isSharedCheck_6913_;
goto v_resetjp_6907_;
}
v_resetjp_6907_:
{
lean_object* v___x_6911_; 
if (v_isShared_6909_ == 0)
{
v___x_6911_ = v___x_6908_;
goto v_reusejp_6910_;
}
else
{
lean_object* v_reuseFailAlloc_6912_; 
v_reuseFailAlloc_6912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6912_, 0, v_a_6906_);
v___x_6911_ = v_reuseFailAlloc_6912_;
goto v_reusejp_6910_;
}
v_reusejp_6910_:
{
return v___x_6911_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object* v_matcherApp_6933_, lean_object* v_useSplitter_6934_, lean_object* v_addEqualities_6935_, lean_object* v_onParams_6936_, lean_object* v_onMotive_6937_, lean_object* v_onAlt_6938_, lean_object* v_onRemaining_6939_, lean_object* v___y_6940_, lean_object* v___y_6941_, lean_object* v___y_6942_, lean_object* v___y_6943_, lean_object* v___y_6944_){
_start:
{
uint8_t v_useSplitter_boxed_6945_; uint8_t v_addEqualities_boxed_6946_; lean_object* v_res_6947_; 
v_useSplitter_boxed_6945_ = lean_unbox(v_useSplitter_6934_);
v_addEqualities_boxed_6946_ = lean_unbox(v_addEqualities_6935_);
v_res_6947_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6933_, v_useSplitter_boxed_6945_, v_addEqualities_boxed_6946_, v_onParams_6936_, v_onMotive_6937_, v_onAlt_6938_, v_onRemaining_6939_, v___y_6940_, v___y_6941_, v___y_6942_, v___y_6943_);
lean_dec(v___y_6943_);
lean_dec_ref(v___y_6942_);
lean_dec(v___y_6941_);
lean_dec_ref(v___y_6940_);
return v_res_6947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object* v_matcherApp_6953_, lean_object* v_a_6954_, lean_object* v_a_6955_, lean_object* v_a_6956_, lean_object* v_a_6957_){
_start:
{
lean_object* v_toMatcherInfo_6959_; lean_object* v_matcherName_6960_; lean_object* v_matcherLevels_6961_; lean_object* v_params_6962_; lean_object* v_alts_6963_; lean_object* v_remaining_6964_; lean_object* v___f_6965_; lean_object* v___f_6966_; lean_object* v_nExtra_6967_; uint8_t v___x_6968_; lean_object* v___f_6969_; uint8_t v___x_6970_; lean_object* v___x_6971_; lean_object* v___x_6972_; lean_object* v___f_6973_; lean_object* v___x_6974_; 
v_toMatcherInfo_6959_ = lean_ctor_get(v_matcherApp_6953_, 0);
v_matcherName_6960_ = lean_ctor_get(v_matcherApp_6953_, 1);
v_matcherLevels_6961_ = lean_ctor_get(v_matcherApp_6953_, 2);
v_params_6962_ = lean_ctor_get(v_matcherApp_6953_, 3);
v_alts_6963_ = lean_ctor_get(v_matcherApp_6953_, 6);
v_remaining_6964_ = lean_ctor_get(v_matcherApp_6953_, 7);
v___f_6965_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__0));
v___f_6966_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__1));
v_nExtra_6967_ = lean_array_get_size(v_remaining_6964_);
v___x_6968_ = 1;
v___f_6969_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__2));
v___x_6970_ = 0;
v___x_6971_ = lean_box(v___x_6970_);
v___x_6972_ = lean_box(v___x_6968_);
lean_inc_ref(v_matcherLevels_6961_);
lean_inc_ref(v_params_6962_);
lean_inc(v_matcherName_6960_);
lean_inc_ref(v_toMatcherInfo_6959_);
lean_inc_ref(v_alts_6963_);
v___f_6973_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed), 15, 8);
lean_closure_set(v___f_6973_, 0, v_nExtra_6967_);
lean_closure_set(v___f_6973_, 1, v___x_6971_);
lean_closure_set(v___f_6973_, 2, v___x_6972_);
lean_closure_set(v___f_6973_, 3, v_alts_6963_);
lean_closure_set(v___f_6973_, 4, v_toMatcherInfo_6959_);
lean_closure_set(v___f_6973_, 5, v_matcherName_6960_);
lean_closure_set(v___f_6973_, 6, v_params_6962_);
lean_closure_set(v___f_6973_, 7, v_matcherLevels_6961_);
v___x_6974_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6953_, v___x_6968_, v___x_6970_, v___f_6965_, v___f_6973_, v___f_6969_, v___f_6966_, v_a_6954_, v_a_6955_, v_a_6956_, v_a_6957_);
return v___x_6974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object* v_matcherApp_6975_, lean_object* v_a_6976_, lean_object* v_a_6977_, lean_object* v_a_6978_, lean_object* v_a_6979_, lean_object* v_a_6980_){
_start:
{
lean_object* v_res_6981_; 
v_res_6981_ = l_Lean_Meta_MatcherApp_inferMatchType(v_matcherApp_6975_, v_a_6976_, v_a_6977_, v_a_6978_, v_a_6979_);
lean_dec(v_a_6979_);
lean_dec_ref(v_a_6978_);
lean_dec(v_a_6977_);
lean_dec_ref(v_a_6976_);
return v_res_6981_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object* v_a_6982_, lean_object* v_termAlt_6983_, lean_object* v_inst_6984_, lean_object* v_R_6985_, lean_object* v_a_6986_, lean_object* v_b_6987_, lean_object* v_c_6988_, lean_object* v___y_6989_, lean_object* v___y_6990_, lean_object* v___y_6991_, lean_object* v___y_6992_){
_start:
{
lean_object* v___x_6994_; 
v___x_6994_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_6982_, v_termAlt_6983_, v_a_6986_, v_b_6987_, v___y_6989_, v___y_6990_, v___y_6991_, v___y_6992_);
return v___x_6994_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object* v_a_6995_, lean_object* v_termAlt_6996_, lean_object* v_inst_6997_, lean_object* v_R_6998_, lean_object* v_a_6999_, lean_object* v_b_7000_, lean_object* v_c_7001_, lean_object* v___y_7002_, lean_object* v___y_7003_, lean_object* v___y_7004_, lean_object* v___y_7005_, lean_object* v___y_7006_){
_start:
{
lean_object* v_res_7007_; 
v_res_7007_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(v_a_6995_, v_termAlt_6996_, v_inst_6997_, v_R_6998_, v_a_6999_, v_b_7000_, v_c_7001_, v___y_7002_, v___y_7003_, v___y_7004_, v___y_7005_);
lean_dec(v___y_7005_);
lean_dec_ref(v___y_7004_);
lean_dec(v___y_7003_);
lean_dec_ref(v___y_7002_);
return v_res_7007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object* v_00_u03b1_7008_, lean_object* v_fvars_7009_, lean_object* v_names_7010_, lean_object* v_k_7011_, lean_object* v___y_7012_, lean_object* v___y_7013_, lean_object* v___y_7014_, lean_object* v___y_7015_){
_start:
{
lean_object* v___x_7017_; 
v___x_7017_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_7009_, v_names_7010_, v_k_7011_, v___y_7012_, v___y_7013_, v___y_7014_, v___y_7015_);
return v___x_7017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object* v_00_u03b1_7018_, lean_object* v_fvars_7019_, lean_object* v_names_7020_, lean_object* v_k_7021_, lean_object* v___y_7022_, lean_object* v___y_7023_, lean_object* v___y_7024_, lean_object* v___y_7025_, lean_object* v___y_7026_){
_start:
{
lean_object* v_res_7027_; 
v_res_7027_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(v_00_u03b1_7018_, v_fvars_7019_, v_names_7020_, v_k_7021_, v___y_7022_, v___y_7023_, v___y_7024_, v___y_7025_);
lean_dec(v___y_7025_);
lean_dec_ref(v___y_7024_);
lean_dec(v___y_7023_);
lean_dec_ref(v___y_7022_);
lean_dec_ref(v_names_7020_);
lean_dec_ref(v_fvars_7019_);
return v_res_7027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object* v_00_u03b1_7028_, lean_object* v_origAltType_7029_, lean_object* v_altInfo_7030_, lean_object* v_k_7031_, lean_object* v___y_7032_, lean_object* v___y_7033_, lean_object* v___y_7034_, lean_object* v___y_7035_){
_start:
{
lean_object* v___x_7037_; 
v___x_7037_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_7029_, v_altInfo_7030_, v_k_7031_, v___y_7032_, v___y_7033_, v___y_7034_, v___y_7035_);
return v___x_7037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object* v_00_u03b1_7038_, lean_object* v_origAltType_7039_, lean_object* v_altInfo_7040_, lean_object* v_k_7041_, lean_object* v___y_7042_, lean_object* v___y_7043_, lean_object* v___y_7044_, lean_object* v___y_7045_, lean_object* v___y_7046_){
_start:
{
lean_object* v_res_7047_; 
v_res_7047_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(v_00_u03b1_7038_, v_origAltType_7039_, v_altInfo_7040_, v_k_7041_, v___y_7042_, v___y_7043_, v___y_7044_, v___y_7045_);
lean_dec(v___y_7045_);
lean_dec_ref(v___y_7044_);
lean_dec(v___y_7043_);
lean_dec_ref(v___y_7042_);
return v_res_7047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object* v_declName_7048_, lean_object* v___y_7049_, lean_object* v___y_7050_, lean_object* v___y_7051_, lean_object* v___y_7052_){
_start:
{
lean_object* v___x_7054_; 
v___x_7054_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_7048_, v___y_7052_);
return v___x_7054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object* v_declName_7055_, lean_object* v___y_7056_, lean_object* v___y_7057_, lean_object* v___y_7058_, lean_object* v___y_7059_, lean_object* v___y_7060_){
_start:
{
lean_object* v_res_7061_; 
v_res_7061_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(v_declName_7055_, v___y_7056_, v___y_7057_, v___y_7058_, v___y_7059_);
lean_dec(v___y_7059_);
lean_dec_ref(v___y_7058_);
lean_dec(v___y_7057_);
lean_dec_ref(v___y_7056_);
return v_res_7061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t v_sz_7062_, size_t v_i_7063_, lean_object* v_bs_7064_, lean_object* v___y_7065_, lean_object* v___y_7066_, lean_object* v___y_7067_, lean_object* v___y_7068_){
_start:
{
lean_object* v___x_7070_; 
v___x_7070_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_7062_, v_i_7063_, v_bs_7064_, v___y_7065_, v___y_7067_, v___y_7068_);
return v___x_7070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object* v_sz_7071_, lean_object* v_i_7072_, lean_object* v_bs_7073_, lean_object* v___y_7074_, lean_object* v___y_7075_, lean_object* v___y_7076_, lean_object* v___y_7077_, lean_object* v___y_7078_){
_start:
{
size_t v_sz_boxed_7079_; size_t v_i_boxed_7080_; lean_object* v_res_7081_; 
v_sz_boxed_7079_ = lean_unbox_usize(v_sz_7071_);
lean_dec(v_sz_7071_);
v_i_boxed_7080_ = lean_unbox_usize(v_i_7072_);
lean_dec(v_i_7072_);
v_res_7081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(v_sz_boxed_7079_, v_i_boxed_7080_, v_bs_7073_, v___y_7074_, v___y_7075_, v___y_7076_, v___y_7077_);
lean_dec(v___y_7077_);
lean_dec_ref(v___y_7076_);
lean_dec(v___y_7075_);
lean_dec_ref(v___y_7074_);
return v_res_7081_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object* v_upperBound_7082_, lean_object* v_onAlt_7083_, lean_object* v_extraEqualities_7084_, lean_object* v_inst_7085_, lean_object* v_R_7086_, lean_object* v_a_7087_, lean_object* v_b_7088_, lean_object* v_c_7089_, lean_object* v___y_7090_, lean_object* v___y_7091_, lean_object* v___y_7092_, lean_object* v___y_7093_){
_start:
{
lean_object* v___x_7095_; 
v___x_7095_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_7082_, v_onAlt_7083_, v_extraEqualities_7084_, v_a_7087_, v_b_7088_, v___y_7090_, v___y_7091_, v___y_7092_, v___y_7093_);
return v___x_7095_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object* v_upperBound_7096_, lean_object* v_onAlt_7097_, lean_object* v_extraEqualities_7098_, lean_object* v_inst_7099_, lean_object* v_R_7100_, lean_object* v_a_7101_, lean_object* v_b_7102_, lean_object* v_c_7103_, lean_object* v___y_7104_, lean_object* v___y_7105_, lean_object* v___y_7106_, lean_object* v___y_7107_, lean_object* v___y_7108_){
_start:
{
lean_object* v_res_7109_; 
v_res_7109_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(v_upperBound_7096_, v_onAlt_7097_, v_extraEqualities_7098_, v_inst_7099_, v_R_7100_, v_a_7101_, v_b_7102_, v_c_7103_, v___y_7104_, v___y_7105_, v___y_7106_, v___y_7107_);
lean_dec(v___y_7107_);
lean_dec_ref(v___y_7106_);
lean_dec(v___y_7105_);
lean_dec_ref(v___y_7104_);
lean_dec(v_upperBound_7096_);
return v_res_7109_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object* v_upperBound_7110_, lean_object* v_onAlt_7111_, uint8_t v_useSplitter_7112_, lean_object* v_extraEqualities_7113_, lean_object* v_numDiscrEqs_7114_, lean_object* v_inst_7115_, lean_object* v_R_7116_, lean_object* v_a_7117_, lean_object* v_b_7118_, lean_object* v_c_7119_, lean_object* v___y_7120_, lean_object* v___y_7121_, lean_object* v___y_7122_, lean_object* v___y_7123_){
_start:
{
lean_object* v___x_7125_; 
v___x_7125_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_7110_, v_onAlt_7111_, v_useSplitter_7112_, v_extraEqualities_7113_, v_numDiscrEqs_7114_, v_a_7117_, v_b_7118_, v___y_7120_, v___y_7121_, v___y_7122_, v___y_7123_);
return v___x_7125_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object* v_upperBound_7126_, lean_object* v_onAlt_7127_, lean_object* v_useSplitter_7128_, lean_object* v_extraEqualities_7129_, lean_object* v_numDiscrEqs_7130_, lean_object* v_inst_7131_, lean_object* v_R_7132_, lean_object* v_a_7133_, lean_object* v_b_7134_, lean_object* v_c_7135_, lean_object* v___y_7136_, lean_object* v___y_7137_, lean_object* v___y_7138_, lean_object* v___y_7139_, lean_object* v___y_7140_){
_start:
{
uint8_t v_useSplitter_boxed_7141_; lean_object* v_res_7142_; 
v_useSplitter_boxed_7141_ = lean_unbox(v_useSplitter_7128_);
v_res_7142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(v_upperBound_7126_, v_onAlt_7127_, v_useSplitter_boxed_7141_, v_extraEqualities_7129_, v_numDiscrEqs_7130_, v_inst_7131_, v_R_7132_, v_a_7133_, v_b_7134_, v_c_7135_, v___y_7136_, v___y_7137_, v___y_7138_, v___y_7139_);
lean_dec(v___y_7139_);
lean_dec_ref(v___y_7138_);
lean_dec(v___y_7137_);
lean_dec_ref(v___y_7136_);
lean_dec(v_upperBound_7126_);
return v_res_7142_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
