// Lean compiler output
// Module: Lean.Meta.Structure
// Imports: public import Lean.AddDecl public import Lean.Meta.AppBuilder import Lean.Structure import Lean.Meta.Transform
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_isOutParam(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getStructureName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getStructureName___closed__0 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__1;
static const lean_string_object l_Lean_Meta_getStructureName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not a structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__2 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__3;
static const lean_string_object l_Lean_Meta_getStructureName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__4 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to generate projection `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`, not enough constructor fields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` for the 'Prop'-valued type `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, field must be a proof, but it has type"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, too many structure parameter overrides"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkProjections___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "projection generation failed, `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` is an ill-formed inductive datatype"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "cannot generate projections for `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`, does not have exactly one constructor"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__3;
static const lean_array_object l_Lean_Meta_mkProjections___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkProjections___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_etaStructReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_etaStructReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_etaStructReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaStructReduce___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_etaStructReduce___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Structure"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.instantiateStructDefaultValueFn\?"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: us.length == cinfo.levelParams.length\n  "};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__0));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__3(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__2));
v___x_55_ = l_Lean_stringToMessageData(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__5(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__4));
v___x_58_ = l_Lean_stringToMessageData(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object* v_struct_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Expr_getAppFn(v_struct_59_);
if (lean_obj_tag(v___x_65_) == 4)
{
lean_object* v_declName_66_; lean_object* v___x_67_; lean_object* v_env_68_; uint8_t v___x_69_; 
v_declName_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_n(v_declName_66_, 2);
lean_dec_ref_known(v___x_65_, 2);
v___x_67_ = lean_st_ref_get(v_a_63_);
v_env_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc_ref(v_env_68_);
lean_dec(v___x_67_);
v___x_69_ = l_Lean_isStructure(v_env_68_, v_declName_66_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
v___x_70_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_71_ = l_Lean_MessageData_ofConstName(v_declName_66_, v___x_69_);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__3, &l_Lean_Meta_getStructureName___closed__3_once, _init_l_Lean_Meta_getStructureName___closed__3);
v___x_74_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_74_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
else
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v_declName_66_);
return v___x_84_;
}
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec_ref(v___x_65_);
v___x_85_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__5, &l_Lean_Meta_getStructureName___closed__5_once, _init_l_Lean_Meta_getStructureName___closed__5);
v___x_86_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_85_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object* v_struct_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_getStructureName(v_struct_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
lean_dec_ref(v_struct_87_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object* v_00_u03b1_94_, lean_object* v_msg_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object* v_00_u03b1_102_, lean_object* v_msg_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(v_00_u03b1_102_, v_msg_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object* v_name_110_, lean_object* v_levelParams_111_, lean_object* v_type_112_, lean_object* v_value_113_, lean_object* v_hints_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; uint8_t v___y_119_; lean_object* v_env_127_; uint8_t v___x_128_; 
v___x_117_ = lean_st_ref_get(v___y_115_);
v_env_127_ = lean_ctor_get(v___x_117_, 0);
lean_inc_ref_n(v_env_127_, 2);
lean_dec(v___x_117_);
v___x_128_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_type_112_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_value_113_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 1;
v___y_119_ = v___x_130_;
goto v___jp_118_;
}
else
{
goto v___jp_125_;
}
}
else
{
lean_dec_ref(v_env_127_);
goto v___jp_125_;
}
v___jp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
lean_inc(v_name_110_);
v___x_120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_120_, 0, v_name_110_);
lean_ctor_set(v___x_120_, 1, v_levelParams_111_);
lean_ctor_set(v___x_120_, 2, v_type_112_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v_name_110_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_123_, 0, v___x_120_);
lean_ctor_set(v___x_123_, 1, v_value_113_);
lean_ctor_set(v___x_123_, 2, v_hints_114_);
lean_ctor_set(v___x_123_, 3, v___x_122_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*4, v___y_119_);
v___x_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
return v___x_124_;
}
v___jp_125_:
{
uint8_t v___x_126_; 
v___x_126_ = 0;
v___y_119_ = v___x_126_;
goto v___jp_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object* v_name_131_, lean_object* v_levelParams_132_, lean_object* v_type_133_, lean_object* v_value_134_, lean_object* v_hints_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_131_, v_levelParams_132_, v_type_133_, v_value_134_, v_hints_135_, v___y_136_);
lean_dec(v___y_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object* v_name_139_, lean_object* v_levelParams_140_, lean_object* v_type_141_, lean_object* v_value_142_, lean_object* v_hints_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_139_, v_levelParams_140_, v_type_141_, v_value_142_, v_hints_143_, v___y_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object* v_name_150_, lean_object* v_levelParams_151_, lean_object* v_type_152_, lean_object* v_value_153_, lean_object* v_hints_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(v_name_150_, v_levelParams_151_, v_type_152_, v_value_153_, v_hints_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object* v_k_161_, lean_object* v_b_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___x_168_; 
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
v___x_168_ = lean_apply_6(v_k_161_, v_b_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, lean_box(0));
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object* v_k_169_, lean_object* v_b_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(v_k_169_, v_b_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object* v_name_177_, uint8_t v_bi_178_, lean_object* v_type_179_, lean_object* v_k_180_, uint8_t v_kind_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v___f_187_; lean_object* v___x_188_; 
v___f_187_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_187_, 0, v_k_180_);
v___x_188_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_177_, v_bi_178_, v_type_179_, v___f_187_, v_kind_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v_a_197_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_188_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_188_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object* v_name_205_, lean_object* v_bi_206_, lean_object* v_type_207_, lean_object* v_k_208_, lean_object* v_kind_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
uint8_t v_bi_boxed_215_; uint8_t v_kind_boxed_216_; lean_object* v_res_217_; 
v_bi_boxed_215_ = lean_unbox(v_bi_206_);
v_kind_boxed_216_ = lean_unbox(v_kind_209_);
v_res_217_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_205_, v_bi_boxed_215_, v_type_207_, v_k_208_, v_kind_boxed_216_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object* v_00_u03b1_218_, lean_object* v_name_219_, uint8_t v_bi_220_, lean_object* v_type_221_, lean_object* v_k_222_, uint8_t v_kind_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_219_, v_bi_220_, v_type_221_, v_k_222_, v_kind_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object* v_00_u03b1_230_, lean_object* v_name_231_, lean_object* v_bi_232_, lean_object* v_type_233_, lean_object* v_k_234_, lean_object* v_kind_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
uint8_t v_bi_boxed_241_; uint8_t v_kind_boxed_242_; lean_object* v_res_243_; 
v_bi_boxed_241_ = lean_unbox(v_bi_232_);
v_kind_boxed_242_ = lean_unbox(v_kind_235_);
v_res_243_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(v_00_u03b1_230_, v_name_231_, v_bi_boxed_241_, v_type_233_, v_k_234_, v_kind_boxed_242_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object* v_k_244_, lean_object* v_b_245_, lean_object* v_c_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v___x_252_; 
lean_inc(v___y_250_);
lean_inc_ref(v___y_249_);
lean_inc(v___y_248_);
lean_inc_ref(v___y_247_);
v___x_252_ = lean_apply_7(v_k_244_, v_b_245_, v_c_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, lean_box(0));
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object* v_k_253_, lean_object* v_b_254_, lean_object* v_c_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(v_k_253_, v_b_254_, v_c_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object* v_type_262_, lean_object* v_maxFVars_x3f_263_, lean_object* v_k_264_, uint8_t v_cleanupAnnotations_265_, uint8_t v_whnfType_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___f_272_; lean_object* v___x_273_; 
v___f_272_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_272_, 0, v_k_264_);
v___x_273_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_262_, v_maxFVars_x3f_263_, v___f_272_, v_cleanupAnnotations_265_, v_whnfType_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_273_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_273_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object* v_type_290_, lean_object* v_maxFVars_x3f_291_, lean_object* v_k_292_, lean_object* v_cleanupAnnotations_293_, lean_object* v_whnfType_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_300_; uint8_t v_whnfType_boxed_301_; lean_object* v_res_302_; 
v_cleanupAnnotations_boxed_300_ = lean_unbox(v_cleanupAnnotations_293_);
v_whnfType_boxed_301_ = lean_unbox(v_whnfType_294_);
v_res_302_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_290_, v_maxFVars_x3f_291_, v_k_292_, v_cleanupAnnotations_boxed_300_, v_whnfType_boxed_301_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object* v_00_u03b1_303_, lean_object* v_type_304_, lean_object* v_maxFVars_x3f_305_, lean_object* v_k_306_, uint8_t v_cleanupAnnotations_307_, uint8_t v_whnfType_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_304_, v_maxFVars_x3f_305_, v_k_306_, v_cleanupAnnotations_307_, v_whnfType_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object* v_00_u03b1_315_, lean_object* v_type_316_, lean_object* v_maxFVars_x3f_317_, lean_object* v_k_318_, lean_object* v_cleanupAnnotations_319_, lean_object* v_whnfType_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_326_; uint8_t v_whnfType_boxed_327_; lean_object* v_res_328_; 
v_cleanupAnnotations_boxed_326_ = lean_unbox(v_cleanupAnnotations_319_);
v_whnfType_boxed_327_ = lean_unbox(v_whnfType_320_);
v_res_328_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(v_00_u03b1_315_, v_type_316_, v_maxFVars_x3f_317_, v_k_318_, v_cleanupAnnotations_boxed_326_, v_whnfType_boxed_327_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object* v_lctx_329_, lean_object* v_localInsts_330_, lean_object* v_x_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_329_, v_localInsts_330_, v_x_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_337_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_337_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object* v_lctx_354_, lean_object* v_localInsts_355_, lean_object* v_x_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_354_, v_localInsts_355_, v_x_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object* v_00_u03b1_363_, lean_object* v_lctx_364_, lean_object* v_localInsts_365_, lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_364_, v_localInsts_365_, v_x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object* v_00_u03b1_373_, lean_object* v_lctx_374_, lean_object* v_localInsts_375_, lean_object* v_x_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(v_00_u03b1_373_, v_lctx_374_, v_localInsts_375_, v_x_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object* v_ref_383_, lean_object* v_msg_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_toCold_390_; lean_object* v_currRecDepth_391_; lean_object* v_ref_392_; uint16_t v_optionFlags_393_; uint8_t v_suppressElabErrors_394_; uint8_t v_isRecordingDeps_395_; lean_object* v_ref_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_toCold_390_ = lean_ctor_get(v___y_387_, 0);
v_currRecDepth_391_ = lean_ctor_get(v___y_387_, 1);
v_ref_392_ = lean_ctor_get(v___y_387_, 2);
v_optionFlags_393_ = lean_ctor_get_uint16(v___y_387_, sizeof(void*)*3);
v_suppressElabErrors_394_ = lean_ctor_get_uint8(v___y_387_, sizeof(void*)*3 + 2);
v_isRecordingDeps_395_ = lean_ctor_get_uint8(v___y_387_, sizeof(void*)*3 + 3);
v_ref_396_ = l_Lean_replaceRef(v_ref_383_, v_ref_392_);
lean_inc(v_currRecDepth_391_);
lean_inc_ref(v_toCold_390_);
v___x_397_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_397_, 0, v_toCold_390_);
lean_ctor_set(v___x_397_, 1, v_currRecDepth_391_);
lean_ctor_set(v___x_397_, 2, v_ref_396_);
lean_ctor_set_uint16(v___x_397_, sizeof(void*)*3, v_optionFlags_393_);
lean_ctor_set_uint8(v___x_397_, sizeof(void*)*3 + 2, v_suppressElabErrors_394_);
lean_ctor_set_uint8(v___x_397_, sizeof(void*)*3 + 3, v_isRecordingDeps_395_);
v___x_398_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_384_, v___y_385_, v___y_386_, v___x_397_, v___y_388_);
lean_dec_ref_known(v___x_397_, 3);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object* v_ref_399_, lean_object* v_msg_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_399_, v_msg_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v_ref_399_);
return v_res_406_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0));
v___x_409_ = l_Lean_stringToMessageData(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2));
v___x_412_ = l_Lean_stringToMessageData(v___x_411_);
return v___x_412_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4));
v___x_415_ = l_Lean_stringToMessageData(v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t v___x_416_, lean_object* v_projName_417_, lean_object* v_n_418_, lean_object* v_ref_419_, lean_object* v___f_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
if (v___x_416_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_426_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
v___x_427_ = l_Lean_MessageData_ofName(v_projName_417_);
v___x_428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = l_Lean_MessageData_ofConstName(v_n_418_, v___x_416_);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_419_, v___x_434_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_437_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
lean_inc(v___y_424_);
lean_inc_ref(v___y_423_);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
v___x_437_ = lean_apply_6(v___f_420_, v_a_436_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, lean_box(0));
return v___x_437_;
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec_ref(v___f_420_);
v_a_438_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_435_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_435_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec(v_n_418_);
lean_dec(v_projName_417_);
v___x_446_ = lean_box(0);
lean_inc(v___y_424_);
lean_inc_ref(v___y_423_);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
v___x_447_ = lean_apply_6(v___f_420_, v___x_446_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, lean_box(0));
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object* v___x_448_, lean_object* v_projName_449_, lean_object* v_n_450_, lean_object* v_ref_451_, lean_object* v___f_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
uint8_t v___x_17119__boxed_458_; lean_object* v_res_459_; 
v___x_17119__boxed_458_ = lean_unbox(v___x_448_);
v_res_459_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(v___x_17119__boxed_458_, v_projName_449_, v_n_450_, v_ref_451_, v___f_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v_ref_451_);
return v_res_459_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_460_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_466_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
lean_ctor_set(v___x_466_, 2, v___x_465_);
lean_ctor_set(v___x_466_, 3, v___x_465_);
lean_ctor_set(v___x_466_, 4, v___x_465_);
lean_ctor_set(v___x_466_, 5, v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object* v_declName_467_, uint8_t v_s_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v_env_473_; lean_object* v_nextMacroScope_474_; lean_object* v_ngen_475_; lean_object* v_auxDeclNGen_476_; lean_object* v_traceState_477_; lean_object* v_recordedDeps_478_; lean_object* v_messages_479_; lean_object* v_infoState_480_; lean_object* v_snapshotTasks_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_511_; 
v___x_472_ = lean_st_ref_take(v___y_470_);
v_env_473_ = lean_ctor_get(v___x_472_, 0);
v_nextMacroScope_474_ = lean_ctor_get(v___x_472_, 1);
v_ngen_475_ = lean_ctor_get(v___x_472_, 2);
v_auxDeclNGen_476_ = lean_ctor_get(v___x_472_, 3);
v_traceState_477_ = lean_ctor_get(v___x_472_, 4);
v_recordedDeps_478_ = lean_ctor_get(v___x_472_, 6);
v_messages_479_ = lean_ctor_get(v___x_472_, 7);
v_infoState_480_ = lean_ctor_get(v___x_472_, 8);
v_snapshotTasks_481_ = lean_ctor_get(v___x_472_, 9);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v___x_472_, 5);
lean_dec(v_unused_512_);
v___x_483_ = v___x_472_;
v_isShared_484_ = v_isSharedCheck_511_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_snapshotTasks_481_);
lean_inc(v_infoState_480_);
lean_inc(v_messages_479_);
lean_inc(v_recordedDeps_478_);
lean_inc(v_traceState_477_);
lean_inc(v_auxDeclNGen_476_);
lean_inc(v_ngen_475_);
lean_inc(v_nextMacroScope_474_);
lean_inc(v_env_473_);
lean_dec(v___x_472_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_511_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_485_ = 0;
v___x_486_ = lean_box(0);
v___x_487_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_473_, v_declName_467_, v_s_468_, v___x_485_, v___x_486_);
v___x_488_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 5, v___x_488_);
lean_ctor_set(v___x_483_, 0, v___x_487_);
v___x_490_ = v___x_483_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_nextMacroScope_474_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_ngen_475_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_auxDeclNGen_476_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_traceState_477_);
lean_ctor_set(v_reuseFailAlloc_510_, 5, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_510_, 6, v_recordedDeps_478_);
lean_ctor_set(v_reuseFailAlloc_510_, 7, v_messages_479_);
lean_ctor_set(v_reuseFailAlloc_510_, 8, v_infoState_480_);
lean_ctor_set(v_reuseFailAlloc_510_, 9, v_snapshotTasks_481_);
v___x_490_ = v_reuseFailAlloc_510_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_mctx_493_; lean_object* v_zetaDeltaFVarIds_494_; lean_object* v_postponed_495_; lean_object* v_diag_496_; lean_object* v_rewriteFires_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_508_; 
v___x_491_ = lean_st_ref_put(v___y_470_, v___x_490_);
v___x_492_ = lean_st_ref_take(v___y_469_);
v_mctx_493_ = lean_ctor_get(v___x_492_, 0);
v_zetaDeltaFVarIds_494_ = lean_ctor_get(v___x_492_, 2);
v_postponed_495_ = lean_ctor_get(v___x_492_, 3);
v_diag_496_ = lean_ctor_get(v___x_492_, 4);
v_rewriteFires_497_ = lean_ctor_get(v___x_492_, 5);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; 
v_unused_509_ = lean_ctor_get(v___x_492_, 1);
lean_dec(v_unused_509_);
v___x_499_ = v___x_492_;
v_isShared_500_ = v_isSharedCheck_508_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_rewriteFires_497_);
lean_inc(v_diag_496_);
lean_inc(v_postponed_495_);
lean_inc(v_zetaDeltaFVarIds_494_);
lean_inc(v_mctx_493_);
lean_dec(v___x_492_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_508_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_501_ = lean_box(0);
v___x_502_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 1, v___x_502_);
v___x_504_ = v___x_499_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_mctx_493_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_zetaDeltaFVarIds_494_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_postponed_495_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_diag_496_);
lean_ctor_set(v_reuseFailAlloc_507_, 5, v_rewriteFires_497_);
v___x_504_ = v_reuseFailAlloc_507_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_st_ref_put(v___y_469_, v___x_504_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_501_);
return v___x_506_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object* v_declName_513_, lean_object* v_s_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
uint8_t v_s_boxed_518_; lean_object* v_res_519_; 
v_s_boxed_518_ = lean_unbox(v_s_514_);
v_res_519_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_513_, v_s_boxed_518_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec(v___y_515_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object* v_declName_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
uint8_t v___x_526_; lean_object* v___x_527_; 
v___x_526_ = 0;
v___x_527_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_520_, v___x_526_, v___y_522_, v___y_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object* v_declName_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_declName_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
return v_res_534_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0));
v___x_537_ = l_Lean_stringToMessageData(v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2));
v___x_540_ = l_Lean_stringToMessageData(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4));
v___x_543_ = l_Lean_stringToMessageData(v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object* v___x_544_, lean_object* v_projName_545_, lean_object* v___x_546_, lean_object* v_a_547_, uint8_t v_instImplicit_548_, lean_object* v___x_549_, lean_object* v_params_550_, lean_object* v_self_551_, lean_object* v_b_552_, uint8_t v___x_553_, lean_object* v_a_554_, lean_object* v___x_555_, lean_object* v_paramInfoOverrides_556_, lean_object* v_n_557_, lean_object* v_ref_558_, lean_object* v___x_559_, uint8_t v_a_560_, lean_object* v_____r_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; uint8_t v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; uint8_t v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_730_ = l_List_lengthTR___redArg(v_paramInfoOverrides_556_);
v___x_731_ = lean_array_get_size(v_params_550_);
v___x_732_ = lean_nat_dec_le(v___x_730_, v___x_731_);
lean_dec(v___x_730_);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_733_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_545_);
v___x_734_ = l_Lean_MessageData_ofName(v_projName_545_);
v___x_735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_735_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
lean_inc(v_n_557_);
v___x_738_ = l_Lean_MessageData_ofConstName(v_n_557_, v___x_732_);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_558_, v___x_741_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_dec_ref_known(v___x_742_, 1);
goto v___jp_691_;
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v___x_559_);
lean_dec(v_n_557_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_743_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_742_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_742_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
goto v___jp_691_;
}
v___jp_567_:
{
lean_object* v___x_570_; lean_object* v_env_571_; lean_object* v_nextMacroScope_572_; lean_object* v_ngen_573_; lean_object* v_auxDeclNGen_574_; lean_object* v_traceState_575_; lean_object* v_recordedDeps_576_; lean_object* v_messages_577_; lean_object* v_infoState_578_; lean_object* v_snapshotTasks_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_612_; 
v___x_570_ = lean_st_ref_take(v___y_568_);
v_env_571_ = lean_ctor_get(v___x_570_, 0);
v_nextMacroScope_572_ = lean_ctor_get(v___x_570_, 1);
v_ngen_573_ = lean_ctor_get(v___x_570_, 2);
v_auxDeclNGen_574_ = lean_ctor_get(v___x_570_, 3);
v_traceState_575_ = lean_ctor_get(v___x_570_, 4);
v_recordedDeps_576_ = lean_ctor_get(v___x_570_, 6);
v_messages_577_ = lean_ctor_get(v___x_570_, 7);
v_infoState_578_ = lean_ctor_get(v___x_570_, 8);
v_snapshotTasks_579_ = lean_ctor_get(v___x_570_, 9);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___x_570_, 5);
lean_dec(v_unused_613_);
v___x_581_ = v___x_570_;
v_isShared_582_ = v_isSharedCheck_612_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_snapshotTasks_579_);
lean_inc(v_infoState_578_);
lean_inc(v_messages_577_);
lean_inc(v_recordedDeps_576_);
lean_inc(v_traceState_575_);
lean_inc(v_auxDeclNGen_574_);
lean_inc(v_ngen_573_);
lean_inc(v_nextMacroScope_572_);
lean_inc(v_env_571_);
lean_dec(v___x_570_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_612_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v_name_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v_name_583_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_name_583_);
lean_dec_ref(v___x_544_);
lean_inc(v_projName_545_);
v___x_584_ = l_Lean_addProjectionFnInfo(v_env_571_, v_projName_545_, v_name_583_, v___x_546_, v_a_547_, v_instImplicit_548_);
v___x_585_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 5, v___x_585_);
lean_ctor_set(v___x_581_, 0, v___x_584_);
v___x_587_ = v___x_581_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_nextMacroScope_572_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_ngen_573_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_auxDeclNGen_574_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v_traceState_575_);
lean_ctor_set(v_reuseFailAlloc_611_, 5, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_611_, 6, v_recordedDeps_576_);
lean_ctor_set(v_reuseFailAlloc_611_, 7, v_messages_577_);
lean_ctor_set(v_reuseFailAlloc_611_, 8, v_infoState_578_);
lean_ctor_set(v_reuseFailAlloc_611_, 9, v_snapshotTasks_579_);
v___x_587_ = v_reuseFailAlloc_611_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v_mctx_590_; lean_object* v_zetaDeltaFVarIds_591_; lean_object* v_postponed_592_; lean_object* v_diag_593_; lean_object* v_rewriteFires_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_609_; 
v___x_588_ = lean_st_ref_put(v___y_568_, v___x_587_);
v___x_589_ = lean_st_ref_take(v___y_569_);
v_mctx_590_ = lean_ctor_get(v___x_589_, 0);
v_zetaDeltaFVarIds_591_ = lean_ctor_get(v___x_589_, 2);
v_postponed_592_ = lean_ctor_get(v___x_589_, 3);
v_diag_593_ = lean_ctor_get(v___x_589_, 4);
v_rewriteFires_594_ = lean_ctor_get(v___x_589_, 5);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_609_ == 0)
{
lean_object* v_unused_610_; 
v_unused_610_ = lean_ctor_get(v___x_589_, 1);
lean_dec(v_unused_610_);
v___x_596_ = v___x_589_;
v_isShared_597_ = v_isSharedCheck_609_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_rewriteFires_594_);
lean_inc(v_diag_593_);
lean_inc(v_postponed_592_);
lean_inc(v_zetaDeltaFVarIds_591_);
lean_inc(v_mctx_590_);
lean_dec(v___x_589_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_609_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_598_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_mctx_590_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v___x_598_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_zetaDeltaFVarIds_591_);
lean_ctor_set(v_reuseFailAlloc_608_, 3, v_postponed_592_);
lean_ctor_set(v_reuseFailAlloc_608_, 4, v_diag_593_);
lean_ctor_set(v_reuseFailAlloc_608_, 5, v_rewriteFires_594_);
v___x_600_ = v_reuseFailAlloc_608_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_601_ = lean_st_ref_put(v___y_569_, v___x_600_);
v___x_602_ = l_Lean_Expr_const___override(v_projName_545_, v___x_549_);
v___x_603_ = l_Lean_mkAppN(v___x_602_, v_params_550_);
v___x_604_ = l_Lean_Expr_app___override(v___x_603_, v_self_551_);
v___x_605_ = l_Lean_Expr_bindingBody_x21(v_b_552_);
v___x_606_ = lean_expr_instantiate1(v___x_605_, v___x_604_);
lean_dec_ref(v___x_604_);
lean_dec_ref(v___x_605_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
}
}
}
v___jp_614_:
{
if (lean_obj_tag(v___y_617_) == 0)
{
lean_dec_ref_known(v___y_617_, 1);
v___y_568_ = v___y_615_;
v___y_569_ = v___y_616_;
goto v___jp_567_;
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_618_ = lean_ctor_get(v___y_617_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___y_617_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___y_617_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___y_617_);
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
v___jp_626_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_633_ = lean_box(0);
lean_inc(v_projName_545_);
v___x_634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_634_, 0, v_projName_545_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_635_, 0, v___y_630_);
lean_ctor_set(v___x_635_, 1, v___y_628_);
lean_ctor_set(v___x_635_, 2, v___x_634_);
lean_ctor_set_uint8(v___x_635_, sizeof(void*)*3, v___x_553_);
v___x_636_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
v___x_637_ = l_Lean_addDecl(v___x_636_, v___y_627_, v___y_629_, v___y_631_);
lean_dec_ref(v___y_629_);
v___y_615_ = v___y_631_;
v___y_616_ = v___y_632_;
v___y_617_ = v___x_637_;
goto v___jp_614_;
}
v___jp_638_:
{
uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v_toCold_647_; lean_object* v_currRecDepth_648_; lean_object* v_ref_649_; uint16_t v_optionFlags_650_; uint8_t v_suppressElabErrors_651_; uint8_t v_isRecordingDeps_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_ref_657_; lean_object* v___x_658_; 
v___x_645_ = 0;
lean_inc_ref(v_a_554_);
v___x_646_ = l_Lean_LocalContext_mkForall(v_a_554_, v___x_555_, v___y_640_, v___x_553_, v___x_645_);
lean_dec_ref(v___y_640_);
v_toCold_647_ = lean_ctor_get(v___y_643_, 0);
v_currRecDepth_648_ = lean_ctor_get(v___y_643_, 1);
v_ref_649_ = lean_ctor_get(v___y_643_, 2);
v_optionFlags_650_ = lean_ctor_get_uint16(v___y_643_, sizeof(void*)*3);
v_suppressElabErrors_651_ = lean_ctor_get_uint8(v___y_643_, sizeof(void*)*3 + 2);
v_isRecordingDeps_652_ = lean_ctor_get_uint8(v___y_643_, sizeof(void*)*3 + 3);
v___x_653_ = l_Lean_Expr_inferImplicit(v___x_646_, v___x_546_, v___x_553_);
v___x_654_ = l_Lean_Expr_updateForallBinderInfos(v___x_653_, v_paramInfoOverrides_556_);
lean_inc_ref(v_self_551_);
lean_inc(v_a_547_);
v___x_655_ = l_Lean_Expr_proj___override(v_n_557_, v_a_547_, v_self_551_);
v___x_656_ = l_Lean_LocalContext_mkLambda(v_a_554_, v___x_555_, v___x_655_, v___x_553_, v___x_645_);
lean_dec_ref(v___x_655_);
v_ref_657_ = l_Lean_replaceRef(v_ref_558_, v_ref_649_);
lean_inc(v_currRecDepth_648_);
lean_inc_ref(v_toCold_647_);
v___x_658_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_658_, 0, v_toCold_647_);
lean_ctor_set(v___x_658_, 1, v_currRecDepth_648_);
lean_ctor_set(v___x_658_, 2, v_ref_657_);
lean_ctor_set_uint16(v___x_658_, sizeof(void*)*3, v_optionFlags_650_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*3 + 2, v_suppressElabErrors_651_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*3 + 3, v_isRecordingDeps_652_);
if (v___y_639_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_box(1);
lean_inc(v_projName_545_);
v___x_660_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_projName_545_, v___x_559_, v___x_654_, v___x_656_, v___x_659_, v___y_644_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_662_, 0, v_a_661_);
v___x_663_ = l_Lean_addDecl(v___x_662_, v___x_645_, v___x_658_, v___y_644_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_dec_ref_known(v___x_663_, 1);
if (v_instImplicit_548_ == 0)
{
lean_object* v___x_664_; 
lean_inc(v_projName_545_);
v___x_664_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_projName_545_, v___y_641_, v___y_642_, v___x_658_, v___y_644_);
lean_dec_ref_known(v___x_658_, 3);
v___y_615_ = v___y_644_;
v___y_616_ = v___y_642_;
v___y_617_ = v___x_664_;
goto v___jp_614_;
}
else
{
lean_dec_ref_known(v___x_658_, 3);
v___y_568_ = v___y_644_;
v___y_569_ = v___y_642_;
goto v___jp_567_;
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec_ref_known(v___x_658_, 3);
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_665_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_663_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_663_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec_ref_known(v___x_658_, 3);
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_673_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_660_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_660_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v_env_683_; uint8_t v___x_684_; 
lean_inc_ref(v___x_654_);
lean_inc(v_projName_545_);
v___x_681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_681_, 0, v_projName_545_);
lean_ctor_set(v___x_681_, 1, v___x_559_);
lean_ctor_set(v___x_681_, 2, v___x_654_);
v___x_682_ = lean_st_ref_get(v___y_644_);
v_env_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc_ref_n(v_env_683_, 2);
lean_dec(v___x_682_);
v___x_684_ = l_Lean_Environment_hasUnsafe(v_env_683_, v___x_654_);
lean_dec_ref(v___x_654_);
if (v___x_684_ == 0)
{
uint8_t v___x_685_; 
v___x_685_ = l_Lean_Environment_hasUnsafe(v_env_683_, v___x_656_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_686_ = lean_box(0);
lean_inc(v_projName_545_);
v___x_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_687_, 0, v_projName_545_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_688_, 0, v___x_681_);
lean_ctor_set(v___x_688_, 1, v___x_656_);
lean_ctor_set(v___x_688_, 2, v___x_687_);
v___x_689_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
v___x_690_ = l_Lean_addDecl(v___x_689_, v___x_645_, v___x_658_, v___y_644_);
lean_dec_ref_known(v___x_658_, 3);
v___y_615_ = v___y_644_;
v___y_616_ = v___y_642_;
v___y_617_ = v___x_690_;
goto v___jp_614_;
}
else
{
v___y_627_ = v___x_645_;
v___y_628_ = v___x_656_;
v___y_629_ = v___x_658_;
v___y_630_ = v___x_681_;
v___y_631_ = v___y_644_;
v___y_632_ = v___y_642_;
goto v___jp_626_;
}
}
else
{
lean_dec_ref(v_env_683_);
v___y_627_ = v___x_645_;
v___y_628_ = v___x_656_;
v___y_629_ = v___x_658_;
v___y_630_ = v___x_681_;
v___y_631_ = v___y_644_;
v___y_632_ = v___y_642_;
goto v___jp_626_;
}
}
}
v___jp_691_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = l_Lean_Expr_bindingDomain_x21(v_b_552_);
v___x_693_ = lean_expr_consume_type_annotations(v___x_692_);
lean_inc_ref(v___x_693_);
v___x_694_ = l_Lean_Meta_isProp(v___x_693_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
if (lean_obj_tag(v___x_694_) == 0)
{
if (v_a_560_ == 0)
{
lean_object* v_a_695_; uint8_t v___x_696_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_unbox(v_a_695_);
lean_dec(v_a_695_);
v___y_639_ = v___x_696_;
v___y_640_ = v___x_693_;
v___y_641_ = v___y_562_;
v___y_642_ = v___y_563_;
v___y_643_ = v___y_564_;
v___y_644_ = v___y_565_;
goto v___jp_638_;
}
else
{
lean_object* v_a_697_; uint8_t v___x_698_; 
v_a_697_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_694_, 1);
v___x_698_ = lean_unbox(v_a_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_699_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_545_);
v___x_700_ = l_Lean_MessageData_ofName(v_projName_545_);
v___x_701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
v___x_703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = lean_unbox(v_a_697_);
lean_inc(v_n_557_);
v___x_705_ = l_Lean_MessageData_ofConstName(v_n_557_, v___x_704_);
v___x_706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_703_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
lean_inc_ref(v___x_693_);
v___x_709_ = l_Lean_indentExpr(v___x_693_);
v___x_710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_558_, v___x_710_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
if (lean_obj_tag(v___x_711_) == 0)
{
uint8_t v___x_712_; 
lean_dec_ref_known(v___x_711_, 1);
v___x_712_ = lean_unbox(v_a_697_);
lean_dec(v_a_697_);
v___y_639_ = v___x_712_;
v___y_640_ = v___x_693_;
v___y_641_ = v___y_562_;
v___y_642_ = v___y_563_;
v___y_643_ = v___y_564_;
v___y_644_ = v___y_565_;
goto v___jp_638_;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_a_697_);
lean_dec_ref(v___x_693_);
lean_dec(v___x_559_);
lean_dec(v_n_557_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_713_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_711_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_711_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
uint8_t v___x_721_; 
v___x_721_ = lean_unbox(v_a_697_);
lean_dec(v_a_697_);
v___y_639_ = v___x_721_;
v___y_640_ = v___x_693_;
v___y_641_ = v___y_562_;
v___y_642_ = v___y_563_;
v___y_643_ = v___y_564_;
v___y_644_ = v___y_565_;
goto v___jp_638_;
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec_ref(v___x_693_);
lean_dec(v___x_559_);
lean_dec(v_n_557_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_self_551_);
lean_dec(v___x_549_);
lean_dec(v_a_547_);
lean_dec(v___x_546_);
lean_dec(v_projName_545_);
lean_dec_ref(v___x_544_);
v_a_722_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_694_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_694_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_751_ = _args[0];
lean_object* v_projName_752_ = _args[1];
lean_object* v___x_753_ = _args[2];
lean_object* v_a_754_ = _args[3];
lean_object* v_instImplicit_755_ = _args[4];
lean_object* v___x_756_ = _args[5];
lean_object* v_params_757_ = _args[6];
lean_object* v_self_758_ = _args[7];
lean_object* v_b_759_ = _args[8];
lean_object* v___x_760_ = _args[9];
lean_object* v_a_761_ = _args[10];
lean_object* v___x_762_ = _args[11];
lean_object* v_paramInfoOverrides_763_ = _args[12];
lean_object* v_n_764_ = _args[13];
lean_object* v_ref_765_ = _args[14];
lean_object* v___x_766_ = _args[15];
lean_object* v_a_767_ = _args[16];
lean_object* v_____r_768_ = _args[17];
lean_object* v___y_769_ = _args[18];
lean_object* v___y_770_ = _args[19];
lean_object* v___y_771_ = _args[20];
lean_object* v___y_772_ = _args[21];
lean_object* v___y_773_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_774_; uint8_t v___x_17358__boxed_775_; uint8_t v_a_17364__boxed_776_; lean_object* v_res_777_; 
v_instImplicit_boxed_774_ = lean_unbox(v_instImplicit_755_);
v___x_17358__boxed_775_ = lean_unbox(v___x_760_);
v_a_17364__boxed_776_ = lean_unbox(v_a_767_);
v_res_777_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(v___x_751_, v_projName_752_, v___x_753_, v_a_754_, v_instImplicit_boxed_774_, v___x_756_, v_params_757_, v_self_758_, v_b_759_, v___x_17358__boxed_775_, v_a_761_, v___x_762_, v_paramInfoOverrides_763_, v_n_764_, v_ref_765_, v___x_766_, v_a_17364__boxed_776_, v_____r_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v_ref_765_);
lean_dec(v_paramInfoOverrides_763_);
lean_dec_ref(v___x_762_);
lean_dec_ref(v_b_759_);
lean_dec_ref(v_params_757_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object* v___y_778_, uint8_t v_isExporting_779_, lean_object* v___x_780_, lean_object* v___y_781_, lean_object* v___x_782_, lean_object* v_a_x3f_783_){
_start:
{
lean_object* v___x_785_; lean_object* v_env_786_; lean_object* v_nextMacroScope_787_; lean_object* v_ngen_788_; lean_object* v_auxDeclNGen_789_; lean_object* v_traceState_790_; lean_object* v_recordedDeps_791_; lean_object* v_messages_792_; lean_object* v_infoState_793_; lean_object* v_snapshotTasks_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_820_; 
v___x_785_ = lean_st_ref_take(v___y_778_);
v_env_786_ = lean_ctor_get(v___x_785_, 0);
v_nextMacroScope_787_ = lean_ctor_get(v___x_785_, 1);
v_ngen_788_ = lean_ctor_get(v___x_785_, 2);
v_auxDeclNGen_789_ = lean_ctor_get(v___x_785_, 3);
v_traceState_790_ = lean_ctor_get(v___x_785_, 4);
v_recordedDeps_791_ = lean_ctor_get(v___x_785_, 6);
v_messages_792_ = lean_ctor_get(v___x_785_, 7);
v_infoState_793_ = lean_ctor_get(v___x_785_, 8);
v_snapshotTasks_794_ = lean_ctor_get(v___x_785_, 9);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v___x_785_, 5);
lean_dec(v_unused_821_);
v___x_796_ = v___x_785_;
v_isShared_797_ = v_isSharedCheck_820_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_snapshotTasks_794_);
lean_inc(v_infoState_793_);
lean_inc(v_messages_792_);
lean_inc(v_recordedDeps_791_);
lean_inc(v_traceState_790_);
lean_inc(v_auxDeclNGen_789_);
lean_inc(v_ngen_788_);
lean_inc(v_nextMacroScope_787_);
lean_inc(v_env_786_);
lean_dec(v___x_785_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_820_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_798_ = l_Lean_Environment_setExporting(v_env_786_, v_isExporting_779_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 5, v___x_780_);
lean_ctor_set(v___x_796_, 0, v___x_798_);
v___x_800_ = v___x_796_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_nextMacroScope_787_);
lean_ctor_set(v_reuseFailAlloc_819_, 2, v_ngen_788_);
lean_ctor_set(v_reuseFailAlloc_819_, 3, v_auxDeclNGen_789_);
lean_ctor_set(v_reuseFailAlloc_819_, 4, v_traceState_790_);
lean_ctor_set(v_reuseFailAlloc_819_, 5, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_819_, 6, v_recordedDeps_791_);
lean_ctor_set(v_reuseFailAlloc_819_, 7, v_messages_792_);
lean_ctor_set(v_reuseFailAlloc_819_, 8, v_infoState_793_);
lean_ctor_set(v_reuseFailAlloc_819_, 9, v_snapshotTasks_794_);
v___x_800_ = v_reuseFailAlloc_819_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v_mctx_803_; lean_object* v_zetaDeltaFVarIds_804_; lean_object* v_postponed_805_; lean_object* v_diag_806_; lean_object* v_rewriteFires_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_817_; 
v___x_801_ = lean_st_ref_put(v___y_778_, v___x_800_);
v___x_802_ = lean_st_ref_take(v___y_781_);
v_mctx_803_ = lean_ctor_get(v___x_802_, 0);
v_zetaDeltaFVarIds_804_ = lean_ctor_get(v___x_802_, 2);
v_postponed_805_ = lean_ctor_get(v___x_802_, 3);
v_diag_806_ = lean_ctor_get(v___x_802_, 4);
v_rewriteFires_807_ = lean_ctor_get(v___x_802_, 5);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; 
v_unused_818_ = lean_ctor_get(v___x_802_, 1);
lean_dec(v_unused_818_);
v___x_809_ = v___x_802_;
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_rewriteFires_807_);
lean_inc(v_diag_806_);
lean_inc(v_postponed_805_);
lean_inc(v_zetaDeltaFVarIds_804_);
lean_inc(v_mctx_803_);
lean_dec(v___x_802_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_box(0);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v___x_782_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_mctx_803_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_zetaDeltaFVarIds_804_);
lean_ctor_set(v_reuseFailAlloc_816_, 3, v_postponed_805_);
lean_ctor_set(v_reuseFailAlloc_816_, 4, v_diag_806_);
lean_ctor_set(v_reuseFailAlloc_816_, 5, v_rewriteFires_807_);
v___x_813_ = v_reuseFailAlloc_816_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_st_ref_put(v___y_781_, v___x_813_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_811_);
return v___x_815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v___y_822_, lean_object* v_isExporting_823_, lean_object* v___x_824_, lean_object* v___y_825_, lean_object* v___x_826_, lean_object* v_a_x3f_827_, lean_object* v___y_828_){
_start:
{
uint8_t v_isExporting_boxed_829_; lean_object* v_res_830_; 
v_isExporting_boxed_829_ = lean_unbox(v_isExporting_823_);
v_res_830_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_822_, v_isExporting_boxed_829_, v___x_824_, v___y_825_, v___x_826_, v_a_x3f_827_);
lean_dec(v_a_x3f_827_);
lean_dec(v___y_825_);
lean_dec(v___y_822_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object* v_x_831_, uint8_t v_isExporting_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___x_838_; lean_object* v_env_839_; lean_object* v___x_840_; uint8_t v_isModule_841_; 
v___x_838_ = lean_st_ref_get(v___y_836_);
v_env_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc_ref(v_env_839_);
lean_dec(v___x_838_);
v___x_840_ = l_Lean_Environment_header(v_env_839_);
v_isModule_841_ = lean_ctor_get_uint8(v___x_840_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_840_);
if (v_isModule_841_ == 0)
{
lean_object* v___x_842_; 
lean_dec_ref(v_env_839_);
lean_inc(v___y_836_);
lean_inc_ref(v___y_835_);
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
v___x_842_ = lean_apply_5(v_x_831_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, lean_box(0));
return v___x_842_;
}
else
{
uint8_t v_isExporting_843_; 
v_isExporting_843_ = lean_ctor_get_uint8(v_env_839_, sizeof(void*)*13);
lean_dec_ref(v_env_839_);
if (v_isExporting_832_ == 0)
{
if (v_isExporting_843_ == 0)
{
lean_object* v___x_911_; 
lean_inc(v___y_836_);
lean_inc_ref(v___y_835_);
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
v___x_911_ = lean_apply_5(v_x_831_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, lean_box(0));
return v___x_911_;
}
else
{
goto v___jp_844_;
}
}
else
{
if (v_isExporting_843_ == 0)
{
goto v___jp_844_;
}
else
{
lean_object* v___x_912_; 
lean_inc(v___y_836_);
lean_inc_ref(v___y_835_);
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
v___x_912_ = lean_apply_5(v_x_831_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, lean_box(0));
return v___x_912_;
}
}
v___jp_844_:
{
lean_object* v___x_845_; lean_object* v_env_846_; lean_object* v_nextMacroScope_847_; lean_object* v_ngen_848_; lean_object* v_auxDeclNGen_849_; lean_object* v_traceState_850_; lean_object* v_recordedDeps_851_; lean_object* v_messages_852_; lean_object* v_infoState_853_; lean_object* v_snapshotTasks_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_909_; 
v___x_845_ = lean_st_ref_take(v___y_836_);
v_env_846_ = lean_ctor_get(v___x_845_, 0);
v_nextMacroScope_847_ = lean_ctor_get(v___x_845_, 1);
v_ngen_848_ = lean_ctor_get(v___x_845_, 2);
v_auxDeclNGen_849_ = lean_ctor_get(v___x_845_, 3);
v_traceState_850_ = lean_ctor_get(v___x_845_, 4);
v_recordedDeps_851_ = lean_ctor_get(v___x_845_, 6);
v_messages_852_ = lean_ctor_get(v___x_845_, 7);
v_infoState_853_ = lean_ctor_get(v___x_845_, 8);
v_snapshotTasks_854_ = lean_ctor_get(v___x_845_, 9);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v___x_845_, 5);
lean_dec(v_unused_910_);
v___x_856_ = v___x_845_;
v_isShared_857_ = v_isSharedCheck_909_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snapshotTasks_854_);
lean_inc(v_infoState_853_);
lean_inc(v_messages_852_);
lean_inc(v_recordedDeps_851_);
lean_inc(v_traceState_850_);
lean_inc(v_auxDeclNGen_849_);
lean_inc(v_ngen_848_);
lean_inc(v_nextMacroScope_847_);
lean_inc(v_env_846_);
lean_dec(v___x_845_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_909_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_858_ = l_Lean_Environment_setExporting(v_env_846_, v_isExporting_832_);
v___x_859_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 5, v___x_859_);
lean_ctor_set(v___x_856_, 0, v___x_858_);
v___x_861_ = v___x_856_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_nextMacroScope_847_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_ngen_848_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_auxDeclNGen_849_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v_traceState_850_);
lean_ctor_set(v_reuseFailAlloc_908_, 5, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_908_, 6, v_recordedDeps_851_);
lean_ctor_set(v_reuseFailAlloc_908_, 7, v_messages_852_);
lean_ctor_set(v_reuseFailAlloc_908_, 8, v_infoState_853_);
lean_ctor_set(v_reuseFailAlloc_908_, 9, v_snapshotTasks_854_);
v___x_861_ = v_reuseFailAlloc_908_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_mctx_864_; lean_object* v_zetaDeltaFVarIds_865_; lean_object* v_postponed_866_; lean_object* v_diag_867_; lean_object* v_rewriteFires_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_906_; 
v___x_862_ = lean_st_ref_put(v___y_836_, v___x_861_);
v___x_863_ = lean_st_ref_take(v___y_834_);
v_mctx_864_ = lean_ctor_get(v___x_863_, 0);
v_zetaDeltaFVarIds_865_ = lean_ctor_get(v___x_863_, 2);
v_postponed_866_ = lean_ctor_get(v___x_863_, 3);
v_diag_867_ = lean_ctor_get(v___x_863_, 4);
v_rewriteFires_868_ = lean_ctor_get(v___x_863_, 5);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v___x_863_, 1);
lean_dec(v_unused_907_);
v___x_870_ = v___x_863_;
v_isShared_871_ = v_isSharedCheck_906_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_rewriteFires_868_);
lean_inc(v_diag_867_);
lean_inc(v_postponed_866_);
lean_inc(v_zetaDeltaFVarIds_865_);
lean_inc(v_mctx_864_);
lean_dec(v___x_863_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_906_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_872_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v___x_872_);
v___x_874_ = v___x_870_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_mctx_864_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_872_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_zetaDeltaFVarIds_865_);
lean_ctor_set(v_reuseFailAlloc_905_, 3, v_postponed_866_);
lean_ctor_set(v_reuseFailAlloc_905_, 4, v_diag_867_);
lean_ctor_set(v_reuseFailAlloc_905_, 5, v_rewriteFires_868_);
v___x_874_ = v_reuseFailAlloc_905_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_875_; lean_object* v_r_876_; 
v___x_875_ = lean_st_ref_put(v___y_834_, v___x_874_);
lean_inc(v___y_836_);
lean_inc_ref(v___y_835_);
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
v_r_876_ = lean_apply_5(v_x_831_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, lean_box(0));
if (lean_obj_tag(v_r_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_893_; 
v_a_877_ = lean_ctor_get(v_r_876_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v_r_876_);
if (v_isSharedCheck_893_ == 0)
{
v___x_879_ = v_r_876_;
v_isShared_880_ = v_isSharedCheck_893_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v_r_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_893_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
lean_inc(v_a_877_);
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 1);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_892_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
v___x_883_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_836_, v_isExporting_843_, v___x_859_, v___y_834_, v___x_872_, v___x_882_);
lean_dec_ref(v___x_882_);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v___x_883_, 0);
lean_dec(v_unused_891_);
v___x_885_ = v___x_883_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_dec(v___x_883_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v_a_877_);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_877_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v_a_894_ = lean_ctor_get(v_r_876_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v_r_876_, 1);
v___x_895_ = lean_box(0);
v___x_896_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_836_, v_isExporting_843_, v___x_859_, v___y_834_, v___x_872_, v___x_895_);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v___x_896_, 0);
lean_dec(v_unused_904_);
v___x_898_ = v___x_896_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_dec(v___x_896_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
lean_ctor_set_tag(v___x_898_, 1);
lean_ctor_set(v___x_898_, 0, v_a_894_);
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_894_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object* v_x_913_, lean_object* v_isExporting_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
uint8_t v_isExporting_boxed_920_; lean_object* v_res_921_; 
v_isExporting_boxed_920_ = lean_unbox(v_isExporting_914_);
v_res_921_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_913_, v_isExporting_boxed_920_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object* v_x_922_, uint8_t v_when_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
if (v_when_923_ == 0)
{
lean_object* v___x_929_; 
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_929_ = lean_apply_5(v_x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_929_;
}
else
{
uint8_t v___x_930_; lean_object* v___x_931_; 
v___x_930_ = 0;
v___x_931_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_922_, v___x_930_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object* v_x_932_, lean_object* v_when_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
uint8_t v_when_boxed_939_; lean_object* v_res_940_; 
v_when_boxed_939_ = lean_unbox(v_when_933_);
v_res_940_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_932_, v_when_boxed_939_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object* v_upperBound_941_, lean_object* v_projDecls_942_, lean_object* v___x_943_, lean_object* v___x_944_, uint8_t v_instImplicit_945_, lean_object* v___x_946_, lean_object* v_params_947_, lean_object* v_self_948_, lean_object* v_a_949_, lean_object* v___x_950_, lean_object* v_n_951_, lean_object* v___x_952_, uint8_t v_a_953_, lean_object* v_a_954_, lean_object* v_b_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
uint8_t v___x_961_; 
v___x_961_ = lean_nat_dec_lt(v_a_954_, v_upperBound_941_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
lean_dec(v_a_954_);
lean_dec(v___x_952_);
lean_dec(v_n_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_a_949_);
lean_dec_ref(v_self_948_);
lean_dec_ref(v_params_947_);
lean_dec(v___x_946_);
lean_dec(v___x_944_);
lean_dec_ref(v___x_943_);
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v_b_955_);
return v___x_962_;
}
else
{
lean_object* v___x_963_; lean_object* v_ref_964_; lean_object* v_projName_965_; lean_object* v_paramInfoOverrides_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___f_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___y_973_; uint8_t v___x_974_; lean_object* v___x_975_; 
v___x_963_ = lean_array_fget_borrowed(v_projDecls_942_, v_a_954_);
v_ref_964_ = lean_ctor_get(v___x_963_, 0);
v_projName_965_ = lean_ctor_get(v___x_963_, 1);
v_paramInfoOverrides_966_ = lean_ctor_get(v___x_963_, 2);
v___x_967_ = lean_box(v_instImplicit_945_);
v___x_968_ = lean_box(v___x_961_);
v___x_969_ = lean_box(v_a_953_);
lean_inc(v___x_952_);
lean_inc_n(v_ref_964_, 2);
lean_inc_n(v_n_951_, 2);
lean_inc(v_paramInfoOverrides_966_);
lean_inc_ref(v___x_950_);
lean_inc_ref(v_a_949_);
lean_inc_ref(v_b_955_);
lean_inc_ref(v_self_948_);
lean_inc_ref(v_params_947_);
lean_inc(v___x_946_);
lean_inc(v_a_954_);
lean_inc(v___x_944_);
lean_inc_n(v_projName_965_, 2);
lean_inc_ref(v___x_943_);
v___f_970_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed), 23, 17);
lean_closure_set(v___f_970_, 0, v___x_943_);
lean_closure_set(v___f_970_, 1, v_projName_965_);
lean_closure_set(v___f_970_, 2, v___x_944_);
lean_closure_set(v___f_970_, 3, v_a_954_);
lean_closure_set(v___f_970_, 4, v___x_967_);
lean_closure_set(v___f_970_, 5, v___x_946_);
lean_closure_set(v___f_970_, 6, v_params_947_);
lean_closure_set(v___f_970_, 7, v_self_948_);
lean_closure_set(v___f_970_, 8, v_b_955_);
lean_closure_set(v___f_970_, 9, v___x_968_);
lean_closure_set(v___f_970_, 10, v_a_949_);
lean_closure_set(v___f_970_, 11, v___x_950_);
lean_closure_set(v___f_970_, 12, v_paramInfoOverrides_966_);
lean_closure_set(v___f_970_, 13, v_n_951_);
lean_closure_set(v___f_970_, 14, v_ref_964_);
lean_closure_set(v___f_970_, 15, v___x_952_);
lean_closure_set(v___f_970_, 16, v___x_969_);
v___x_971_ = l_Lean_Expr_isForall(v_b_955_);
lean_dec_ref(v_b_955_);
v___x_972_ = lean_box(v___x_971_);
v___y_973_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed), 10, 5);
lean_closure_set(v___y_973_, 0, v___x_972_);
lean_closure_set(v___y_973_, 1, v_projName_965_);
lean_closure_set(v___y_973_, 2, v_n_951_);
lean_closure_set(v___y_973_, 3, v_ref_964_);
lean_closure_set(v___y_973_, 4, v___f_970_);
v___x_974_ = l_Lean_isPrivateName(v_projName_965_);
v___x_975_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v___y_973_, v___x_974_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
lean_dec_ref_known(v___x_975_, 1);
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = lean_nat_add(v_a_954_, v___x_977_);
lean_dec(v_a_954_);
v_a_954_ = v___x_978_;
v_b_955_ = v_a_976_;
goto _start;
}
else
{
lean_dec(v_a_954_);
lean_dec(v___x_952_);
lean_dec(v_n_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_a_949_);
lean_dec_ref(v_self_948_);
lean_dec_ref(v_params_947_);
lean_dec(v___x_946_);
lean_dec(v___x_944_);
lean_dec_ref(v___x_943_);
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_980_ = _args[0];
lean_object* v_projDecls_981_ = _args[1];
lean_object* v___x_982_ = _args[2];
lean_object* v___x_983_ = _args[3];
lean_object* v_instImplicit_984_ = _args[4];
lean_object* v___x_985_ = _args[5];
lean_object* v_params_986_ = _args[6];
lean_object* v_self_987_ = _args[7];
lean_object* v_a_988_ = _args[8];
lean_object* v___x_989_ = _args[9];
lean_object* v_n_990_ = _args[10];
lean_object* v___x_991_ = _args[11];
lean_object* v_a_992_ = _args[12];
lean_object* v_a_993_ = _args[13];
lean_object* v_b_994_ = _args[14];
lean_object* v___y_995_ = _args[15];
lean_object* v___y_996_ = _args[16];
lean_object* v___y_997_ = _args[17];
lean_object* v___y_998_ = _args[18];
lean_object* v___y_999_ = _args[19];
_start:
{
uint8_t v_instImplicit_boxed_1000_; uint8_t v_a_17976__boxed_1001_; lean_object* v_res_1002_; 
v_instImplicit_boxed_1000_ = lean_unbox(v_instImplicit_984_);
v_a_17976__boxed_1001_ = lean_unbox(v_a_992_);
v_res_1002_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_980_, v_projDecls_981_, v___x_982_, v___x_983_, v_instImplicit_boxed_1000_, v___x_985_, v_params_986_, v_self_987_, v_a_988_, v___x_989_, v_n_990_, v___x_991_, v_a_17976__boxed_1001_, v_a_993_, v_b_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec_ref(v_projDecls_981_);
lean_dec(v_upperBound_980_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t v_instImplicit_1003_, lean_object* v_as_1004_, size_t v_sz_1005_, size_t v_i_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_a_1013_; uint8_t v___x_1017_; 
v___x_1017_ = lean_usize_dec_lt(v_i_1006_, v_sz_1005_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_b_1007_);
return v___x_1018_;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_a_1019_ = lean_array_uget_borrowed(v_as_1004_, v_i_1006_);
v___x_1020_ = l_Lean_Expr_fvarId_x21(v_a_1019_);
lean_inc(v___x_1020_);
v___x_1021_ = l_Lean_FVarId_getDecl___redArg(v___x_1020_, v___y_1008_, v___y_1009_, v___y_1010_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; uint8_t v___x_1023_; uint8_t v___x_1024_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = l_Lean_LocalDecl_binderInfo(v_a_1022_);
v___x_1024_ = l_Lean_BinderInfo_isInstImplicit(v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = l_Lean_LocalDecl_type(v_a_1022_);
lean_dec(v_a_1022_);
v___x_1029_ = l_Lean_Expr_isOutParam(v___x_1028_);
lean_dec_ref(v___x_1028_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = 0;
v___x_1031_ = l_Lean_LocalContext_setBinderInfo(v_b_1007_, v___x_1020_, v___x_1030_);
v_a_1013_ = v___x_1031_;
goto v___jp_1012_;
}
else
{
goto v___jp_1025_;
}
}
else
{
lean_dec(v_a_1022_);
goto v___jp_1025_;
}
v___jp_1025_:
{
if (v___x_1024_ == 0)
{
lean_dec(v___x_1020_);
v_a_1013_ = v_b_1007_;
goto v___jp_1012_;
}
else
{
if (v_instImplicit_1003_ == 0)
{
lean_dec(v___x_1020_);
v_a_1013_ = v_b_1007_;
goto v___jp_1012_;
}
else
{
uint8_t v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = 1;
v___x_1027_ = l_Lean_LocalContext_setBinderInfo(v_b_1007_, v___x_1020_, v___x_1026_);
v_a_1013_ = v___x_1027_;
goto v___jp_1012_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec(v___x_1020_);
lean_dec_ref(v_b_1007_);
v_a_1032_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1021_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1021_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
v___jp_1012_:
{
size_t v___x_1014_; size_t v___x_1015_; 
v___x_1014_ = ((size_t)1ULL);
v___x_1015_ = lean_usize_add(v_i_1006_, v___x_1014_);
v_i_1006_ = v___x_1015_;
v_b_1007_ = v_a_1013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object* v_instImplicit_1040_, lean_object* v_as_1041_, lean_object* v_sz_1042_, lean_object* v_i_1043_, lean_object* v_b_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
uint8_t v_instImplicit_boxed_1049_; size_t v_sz_boxed_1050_; size_t v_i_boxed_1051_; lean_object* v_res_1052_; 
v_instImplicit_boxed_1049_ = lean_unbox(v_instImplicit_1040_);
v_sz_boxed_1050_ = lean_unbox_usize(v_sz_1042_);
lean_dec(v_sz_1042_);
v_i_boxed_1051_ = lean_unbox_usize(v_i_1043_);
lean_dec(v_i_1043_);
v_res_1052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_boxed_1049_, v_as_1041_, v_sz_boxed_1050_, v_i_boxed_1051_, v_b_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v_as_1041_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object* v_params_1053_, uint8_t v_instImplicit_1054_, lean_object* v_projDecls_1055_, lean_object* v_toConstantVal_1056_, lean_object* v_numParams_1057_, lean_object* v___x_1058_, lean_object* v_n_1059_, lean_object* v_levelParams_1060_, uint8_t v_a_1061_, lean_object* v_ctorType_1062_, lean_object* v_self_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_lctx_1069_; lean_object* v___x_1070_; size_t v_sz_1071_; size_t v___x_1072_; lean_object* v___x_1073_; 
v_lctx_1069_ = lean_ctor_get(v___y_1064_, 2);
lean_inc_ref(v_self_1063_);
lean_inc_ref(v_params_1053_);
v___x_1070_ = lean_array_push(v_params_1053_, v_self_1063_);
v_sz_1071_ = lean_array_size(v_params_1053_);
v___x_1072_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1069_);
v___x_1073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1054_, v_params_1053_, v_sz_1071_, v___x_1072_, v_lctx_1069_, v___y_1064_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v___x_1075_ = lean_array_get_size(v_projDecls_1055_);
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v___x_1075_, v_projDecls_1055_, v_toConstantVal_1056_, v_numParams_1057_, v_instImplicit_1054_, v___x_1058_, v_params_1053_, v_self_1063_, v_a_1074_, v___x_1070_, v_n_1059_, v_levelParams_1060_, v_a_1061_, v___x_1076_, v_ctorType_1062_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1085_; 
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1085_ == 0)
{
lean_object* v_unused_1086_; 
v_unused_1086_ = lean_ctor_get(v___x_1077_, 0);
lean_dec(v_unused_1086_);
v___x_1079_ = v___x_1077_;
v_isShared_1080_ = v_isSharedCheck_1085_;
goto v_resetjp_1078_;
}
else
{
lean_dec(v___x_1077_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1085_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1081_ = lean_box(0);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1081_);
v___x_1083_ = v___x_1079_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
v_a_1087_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1077_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1077_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec_ref(v___x_1070_);
lean_dec_ref(v_self_1063_);
lean_dec_ref(v_ctorType_1062_);
lean_dec(v_levelParams_1060_);
lean_dec(v_n_1059_);
lean_dec(v___x_1058_);
lean_dec(v_numParams_1057_);
lean_dec_ref(v_toConstantVal_1056_);
lean_dec_ref(v_params_1053_);
v_a_1095_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1073_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1073_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object* v_params_1103_, lean_object* v_instImplicit_1104_, lean_object* v_projDecls_1105_, lean_object* v_toConstantVal_1106_, lean_object* v_numParams_1107_, lean_object* v___x_1108_, lean_object* v_n_1109_, lean_object* v_levelParams_1110_, lean_object* v_a_1111_, lean_object* v_ctorType_1112_, lean_object* v_self_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
uint8_t v_instImplicit_boxed_1119_; uint8_t v_a_18114__boxed_1120_; lean_object* v_res_1121_; 
v_instImplicit_boxed_1119_ = lean_unbox(v_instImplicit_1104_);
v_a_18114__boxed_1120_ = lean_unbox(v_a_1111_);
v_res_1121_ = l_Lean_Meta_mkProjections___lam__0(v_params_1103_, v_instImplicit_boxed_1119_, v_projDecls_1105_, v_toConstantVal_1106_, v_numParams_1107_, v___x_1108_, v_n_1109_, v_levelParams_1110_, v_a_18114__boxed_1120_, v_ctorType_1112_, v_self_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec_ref(v_projDecls_1105_);
return v_res_1121_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__2));
v___x_1127_ = l_Lean_stringToMessageData(v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__4));
v___x_1130_ = l_Lean_stringToMessageData(v___x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t v_instImplicit_1131_, lean_object* v_projDecls_1132_, lean_object* v_toConstantVal_1133_, lean_object* v_numParams_1134_, lean_object* v___x_1135_, lean_object* v_n_1136_, lean_object* v_levelParams_1137_, uint8_t v_a_1138_, lean_object* v_params_1139_, lean_object* v_ctorType_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; uint8_t v___y_1153_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___f_1159_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1157_ = lean_box(v_instImplicit_1131_);
v___x_1158_ = lean_box(v_a_1138_);
lean_inc(v_n_1136_);
lean_inc(v___x_1135_);
lean_inc(v_numParams_1134_);
lean_inc_ref(v_params_1139_);
v___f_1159_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__0___boxed), 16, 10);
lean_closure_set(v___f_1159_, 0, v_params_1139_);
lean_closure_set(v___f_1159_, 1, v___x_1157_);
lean_closure_set(v___f_1159_, 2, v_projDecls_1132_);
lean_closure_set(v___f_1159_, 3, v_toConstantVal_1133_);
lean_closure_set(v___f_1159_, 4, v_numParams_1134_);
lean_closure_set(v___f_1159_, 5, v___x_1135_);
lean_closure_set(v___f_1159_, 6, v_n_1136_);
lean_closure_set(v___f_1159_, 7, v_levelParams_1137_);
lean_closure_set(v___f_1159_, 8, v___x_1158_);
lean_closure_set(v___f_1159_, 9, v_ctorType_1140_);
v___x_1165_ = lean_array_get_size(v_params_1139_);
v___x_1166_ = lean_nat_dec_eq(v___x_1165_, v_numParams_1134_);
lean_dec(v_numParams_1134_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_dec_ref(v___f_1159_);
lean_dec_ref(v_params_1139_);
lean_dec(v___x_1135_);
v___x_1167_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__3, &l_Lean_Meta_mkProjections___lam__1___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__3);
v___x_1168_ = l_Lean_MessageData_ofConstName(v_n_1136_, v___x_1166_);
v___x_1169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1167_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__5, &l_Lean_Meta_mkProjections___lam__1___closed__5_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__5);
v___x_1171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1171_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
return v___x_1172_;
}
else
{
goto v___jp_1160_;
}
v___jp_1146_:
{
lean_object* v___x_1154_; uint8_t v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__1));
v___x_1155_ = 0;
v___x_1156_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v___x_1154_, v___y_1153_, v___y_1149_, v___y_1148_, v___x_1155_, v___y_1150_, v___y_1152_, v___y_1151_, v___y_1147_);
return v___x_1156_;
}
v___jp_1160_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = l_Lean_Expr_const___override(v_n_1136_, v___x_1135_);
v___x_1162_ = l_Lean_mkAppN(v___x_1161_, v_params_1139_);
lean_dec_ref(v_params_1139_);
if (v_instImplicit_1131_ == 0)
{
uint8_t v___x_1163_; 
v___x_1163_ = 0;
v___y_1147_ = v___y_1144_;
v___y_1148_ = v___f_1159_;
v___y_1149_ = v___x_1162_;
v___y_1150_ = v___y_1141_;
v___y_1151_ = v___y_1143_;
v___y_1152_ = v___y_1142_;
v___y_1153_ = v___x_1163_;
goto v___jp_1146_;
}
else
{
uint8_t v___x_1164_; 
v___x_1164_ = 3;
v___y_1147_ = v___y_1144_;
v___y_1148_ = v___f_1159_;
v___y_1149_ = v___x_1162_;
v___y_1150_ = v___y_1141_;
v___y_1151_ = v___y_1143_;
v___y_1152_ = v___y_1142_;
v___y_1153_ = v___x_1164_;
goto v___jp_1146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object* v_instImplicit_1173_, lean_object* v_projDecls_1174_, lean_object* v_toConstantVal_1175_, lean_object* v_numParams_1176_, lean_object* v___x_1177_, lean_object* v_n_1178_, lean_object* v_levelParams_1179_, lean_object* v_a_1180_, lean_object* v_params_1181_, lean_object* v_ctorType_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
uint8_t v_instImplicit_boxed_1188_; uint8_t v_a_18218__boxed_1189_; lean_object* v_res_1190_; 
v_instImplicit_boxed_1188_ = lean_unbox(v_instImplicit_1173_);
v_a_18218__boxed_1189_ = lean_unbox(v_a_1180_);
v_res_1190_ = l_Lean_Meta_mkProjections___lam__1(v_instImplicit_boxed_1188_, v_projDecls_1174_, v_toConstantVal_1175_, v_numParams_1176_, v___x_1177_, v_n_1178_, v_levelParams_1179_, v_a_18218__boxed_1189_, v_params_1181_, v_ctorType_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object* v_a_1191_, lean_object* v_a_1192_){
_start:
{
if (lean_obj_tag(v_a_1191_) == 0)
{
lean_object* v___x_1193_; 
v___x_1193_ = l_List_reverse___redArg(v_a_1192_);
return v___x_1193_;
}
else
{
lean_object* v_head_1194_; lean_object* v_tail_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1204_; 
v_head_1194_ = lean_ctor_get(v_a_1191_, 0);
v_tail_1195_ = lean_ctor_get(v_a_1191_, 1);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_a_1191_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1197_ = v_a_1191_;
v_isShared_1198_ = v_isSharedCheck_1204_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_tail_1195_);
lean_inc(v_head_1194_);
lean_dec(v_a_1191_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1204_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1199_; lean_object* v___x_1201_; 
v___x_1199_ = l_Lean_mkLevelParam(v_head_1194_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 1, v_a_1192_);
lean_ctor_set(v___x_1197_, 0, v___x_1199_);
v___x_1201_ = v___x_1197_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1199_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_a_1192_);
v___x_1201_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
v_a_1191_ = v_tail_1195_;
v_a_1192_ = v___x_1201_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_instMonadEIO___redArg();
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object* v_msg_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_toApplicative_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1279_; 
v___x_1216_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0);
v___x_1217_ = l_StateRefT_x27_instMonad___redArg(v___x_1216_);
v_toApplicative_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v___x_1217_, 1);
lean_dec(v_unused_1280_);
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1279_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_toApplicative_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1279_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v_toFunctor_1222_; lean_object* v_toSeq_1223_; lean_object* v_toSeqLeft_1224_; lean_object* v_toSeqRight_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1277_; 
v_toFunctor_1222_ = lean_ctor_get(v_toApplicative_1218_, 0);
v_toSeq_1223_ = lean_ctor_get(v_toApplicative_1218_, 2);
v_toSeqLeft_1224_ = lean_ctor_get(v_toApplicative_1218_, 3);
v_toSeqRight_1225_ = lean_ctor_get(v_toApplicative_1218_, 4);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_toApplicative_1218_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v_toApplicative_1218_, 1);
lean_dec(v_unused_1278_);
v___x_1227_ = v_toApplicative_1218_;
v_isShared_1228_ = v_isSharedCheck_1277_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_toSeqRight_1225_);
lean_inc(v_toSeqLeft_1224_);
lean_inc(v_toSeq_1223_);
lean_inc(v_toFunctor_1222_);
lean_dec(v_toApplicative_1218_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1277_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___f_1231_; lean_object* v___f_1232_; lean_object* v___x_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___x_1238_; 
v___f_1229_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1));
v___f_1230_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1222_);
v___f_1231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1231_, 0, v_toFunctor_1222_);
v___f_1232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1232_, 0, v_toFunctor_1222_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___f_1231_);
lean_ctor_set(v___x_1233_, 1, v___f_1232_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toSeqRight_1225_);
v___f_1235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1235_, 0, v_toSeqLeft_1224_);
v___f_1236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1236_, 0, v_toSeq_1223_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 4, v___f_1234_);
lean_ctor_set(v___x_1227_, 3, v___f_1235_);
lean_ctor_set(v___x_1227_, 2, v___f_1236_);
lean_ctor_set(v___x_1227_, 1, v___f_1229_);
lean_ctor_set(v___x_1227_, 0, v___x_1233_);
v___x_1238_ = v___x_1227_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1276_, 2, v___f_1236_);
lean_ctor_set(v_reuseFailAlloc_1276_, 3, v___f_1235_);
lean_ctor_set(v_reuseFailAlloc_1276_, 4, v___f_1234_);
v___x_1238_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1240_; 
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 1, v___f_1230_);
lean_ctor_set(v___x_1220_, 0, v___x_1238_);
v___x_1240_ = v___x_1220_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v___f_1230_);
v___x_1240_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; lean_object* v_toApplicative_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1273_; 
v___x_1241_ = l_StateRefT_x27_instMonad___redArg(v___x_1240_);
v_toApplicative_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v___x_1241_, 1);
lean_dec(v_unused_1274_);
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_toApplicative_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_toFunctor_1246_; lean_object* v_toSeq_1247_; lean_object* v_toSeqLeft_1248_; lean_object* v_toSeqRight_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1271_; 
v_toFunctor_1246_ = lean_ctor_get(v_toApplicative_1242_, 0);
v_toSeq_1247_ = lean_ctor_get(v_toApplicative_1242_, 2);
v_toSeqLeft_1248_ = lean_ctor_get(v_toApplicative_1242_, 3);
v_toSeqRight_1249_ = lean_ctor_get(v_toApplicative_1242_, 4);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_toApplicative_1242_);
if (v_isSharedCheck_1271_ == 0)
{
lean_object* v_unused_1272_; 
v_unused_1272_ = lean_ctor_get(v_toApplicative_1242_, 1);
lean_dec(v_unused_1272_);
v___x_1251_ = v_toApplicative_1242_;
v_isShared_1252_ = v_isSharedCheck_1271_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_toSeqRight_1249_);
lean_inc(v_toSeqLeft_1248_);
lean_inc(v_toSeq_1247_);
lean_inc(v_toFunctor_1246_);
lean_dec(v_toApplicative_1242_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1271_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___f_1256_; lean_object* v___x_1257_; lean_object* v___f_1258_; lean_object* v___f_1259_; lean_object* v___f_1260_; lean_object* v___x_1262_; 
v___f_1253_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3));
v___f_1254_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1246_);
v___f_1255_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1255_, 0, v_toFunctor_1246_);
v___f_1256_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1256_, 0, v_toFunctor_1246_);
v___x_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___f_1255_);
lean_ctor_set(v___x_1257_, 1, v___f_1256_);
v___f_1258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1258_, 0, v_toSeqRight_1249_);
v___f_1259_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1259_, 0, v_toSeqLeft_1248_);
v___f_1260_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1260_, 0, v_toSeq_1247_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v___f_1258_);
lean_ctor_set(v___x_1251_, 3, v___f_1259_);
lean_ctor_set(v___x_1251_, 2, v___f_1260_);
lean_ctor_set(v___x_1251_, 1, v___f_1253_);
lean_ctor_set(v___x_1251_, 0, v___x_1257_);
v___x_1262_ = v___x_1251_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v___f_1253_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v___f_1260_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v___f_1259_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___f_1258_);
v___x_1262_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
lean_object* v___x_1264_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 1, v___f_1254_);
lean_ctor_set(v___x_1244_, 0, v___x_1262_);
v___x_1264_ = v___x_1244_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___f_1254_);
v___x_1264_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_13151__overap_1267_; lean_object* v___x_1268_; 
v___x_1265_ = lean_box(0);
v___x_1266_ = l_instInhabitedOfMonad___redArg(v___x_1264_, v___x_1265_);
v___x_13151__overap_1267_ = lean_panic_fn_borrowed(v___x_1266_, v_msg_1210_);
lean_dec(v___x_1266_);
lean_inc(v___y_1214_);
lean_inc_ref(v___y_1213_);
lean_inc(v___y_1212_);
lean_inc_ref(v___y_1211_);
v___x_1268_ = lean_apply_5(v___x_13151__overap_1267_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, lean_box(0));
return v___x_1268_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object* v_msg_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v_msg_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1287_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1294_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4));
v___x_1295_ = lean_unsigned_to_nat(11u);
v___x_1296_ = lean_unsigned_to_nat(122u);
v___x_1297_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3));
v___x_1298_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2));
v___x_1299_ = l_mkPanicMessageWithDecl(v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_, v___x_1294_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object* v_constName_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1314_; lean_object* v_env_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; 
v___x_1314_ = lean_st_ref_get(v___y_1304_);
v_env_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc_ref(v_env_1315_);
lean_dec(v___x_1314_);
v___x_1316_ = 0;
lean_inc(v_constName_1300_);
v___x_1317_ = l_Lean_Environment_findAsync_x3f(v_env_1315_, v_constName_1300_, v___x_1316_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; uint8_t v_kind_1319_; 
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_val_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v_kind_1319_ = lean_ctor_get_uint8(v_val_1318_, sizeof(void*)*3);
if (v_kind_1319_ == 6)
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1318_);
if (lean_obj_tag(v___x_1320_) == 6)
{
lean_object* v_val_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
lean_dec(v_constName_1300_);
v_val_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_val_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set_tag(v___x_1323_, 0);
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_val_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
else
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
lean_dec_ref(v___x_1320_);
v___x_1329_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_1330_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_1329_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1339_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
if (lean_obj_tag(v_a_1331_) == 0)
{
lean_del_object(v___x_1333_);
goto v___jp_1306_;
}
else
{
lean_object* v_val_1335_; lean_object* v___x_1337_; 
lean_dec(v_constName_1300_);
v_val_1335_ = lean_ctor_get(v_a_1331_, 0);
lean_inc(v_val_1335_);
lean_dec_ref_known(v_a_1331_, 1);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v_val_1335_);
v___x_1337_ = v___x_1333_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_val_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_constName_1300_);
v_a_1340_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1330_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1330_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
else
{
lean_dec(v_val_1318_);
goto v___jp_1306_;
}
}
else
{
lean_dec(v___x_1317_);
goto v___jp_1306_;
}
v___jp_1306_:
{
lean_object* v___x_1307_; uint8_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1307_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1308_ = 0;
v___x_1309_ = l_Lean_MessageData_ofConstName(v_constName_1300_, v___x_1308_);
v___x_1310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1307_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1);
v___x_1312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1312_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
return v___x_1313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object* v_constName_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v_constName_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1354_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0));
v___x_1357_ = l_Lean_stringToMessageData(v___x_1356_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object* v_constName_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v___x_1364_; lean_object* v_env_1365_; lean_object* v___x_1366_; 
v___x_1364_ = lean_st_ref_get(v___y_1362_);
v_env_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc_ref(v_env_1365_);
lean_dec(v___x_1364_);
lean_inc(v_constName_1358_);
v___x_1366_ = l_Lean_isInductiveCore_x3f(v_env_1365_, v_constName_1358_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v___x_1367_; uint8_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1367_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1368_ = 0;
v___x_1369_ = l_Lean_MessageData_ofConstName(v_constName_1358_, v___x_1368_);
v___x_1370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1367_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1);
v___x_1372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1372_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
return v___x_1373_;
}
else
{
lean_object* v_val_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
lean_dec(v_constName_1358_);
v_val_1374_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1366_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_val_1374_);
lean_dec(v___x_1366_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
lean_ctor_set_tag(v___x_1376_, 0);
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_val_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object* v_constName_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_constName_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
return v_res_1388_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__0));
v___x_1391_ = l_Lean_stringToMessageData(v___x_1390_);
return v___x_1391_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__2));
v___x_1394_ = l_Lean_stringToMessageData(v___x_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object* v_n_1395_, lean_object* v___x_1396_, uint8_t v_instImplicit_1397_, lean_object* v_projDecls_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
lean_inc(v_n_1395_);
v___x_1404_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_n_1395_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___x_1446_; lean_object* v___x_1447_; uint8_t v___x_1448_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1446_ = l_Lean_InductiveVal_numCtors(v_a_1405_);
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = lean_nat_dec_eq(v___x_1446_, v___x_1447_);
lean_dec(v___x_1446_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec(v_a_1405_);
lean_dec_ref(v_projDecls_1398_);
v___x_1449_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__1, &l_Lean_Meta_mkProjections___lam__2___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__1);
v___x_1450_ = l_Lean_MessageData_ofConstName(v_n_1395_, v___x_1448_);
v___x_1451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__3, &l_Lean_Meta_mkProjections___lam__2___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__3);
v___x_1453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1453_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
return v___x_1454_;
}
else
{
v___y_1407_ = v___y_1399_;
v___y_1408_ = v___y_1400_;
v___y_1409_ = v___y_1401_;
v___y_1410_ = v___y_1402_;
goto v___jp_1406_;
}
v___jp_1406_:
{
lean_object* v_toConstantVal_1411_; lean_object* v_numParams_1412_; lean_object* v_ctors_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v_toConstantVal_1411_ = lean_ctor_get(v_a_1405_, 0);
lean_inc_ref(v_toConstantVal_1411_);
v_numParams_1412_ = lean_ctor_get(v_a_1405_, 1);
lean_inc(v_numParams_1412_);
v_ctors_1413_ = lean_ctor_get(v_a_1405_, 4);
lean_inc(v_ctors_1413_);
lean_dec(v_a_1405_);
v___x_1414_ = l_List_head_x21___redArg(v___x_1396_, v_ctors_1413_);
lean_dec(v_ctors_1413_);
v___x_1415_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v___x_1414_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v_levelParams_1417_; lean_object* v_type_1418_; lean_object* v___x_1419_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v_levelParams_1417_ = lean_ctor_get(v_toConstantVal_1411_, 1);
lean_inc(v_levelParams_1417_);
v_type_1418_ = lean_ctor_get(v_toConstantVal_1411_, 2);
lean_inc_ref(v_type_1418_);
lean_dec_ref(v_toConstantVal_1411_);
v___x_1419_ = l_Lean_Meta_isPropFormerType(v_type_1418_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_toConstantVal_1420_; lean_object* v_a_1421_; lean_object* v_type_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___f_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; lean_object* v___x_1429_; 
v_toConstantVal_1420_ = lean_ctor_get(v_a_1416_, 0);
lean_inc_ref(v_toConstantVal_1420_);
lean_dec(v_a_1416_);
v_a_1421_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1419_, 1);
v_type_1422_ = lean_ctor_get(v_toConstantVal_1420_, 2);
lean_inc_ref(v_type_1422_);
v___x_1423_ = lean_box(0);
lean_inc(v_levelParams_1417_);
v___x_1424_ = l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(v_levelParams_1417_, v___x_1423_);
v___x_1425_ = lean_box(v_instImplicit_1397_);
lean_inc(v_numParams_1412_);
v___f_1426_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__1___boxed), 15, 8);
lean_closure_set(v___f_1426_, 0, v___x_1425_);
lean_closure_set(v___f_1426_, 1, v_projDecls_1398_);
lean_closure_set(v___f_1426_, 2, v_toConstantVal_1420_);
lean_closure_set(v___f_1426_, 3, v_numParams_1412_);
lean_closure_set(v___f_1426_, 4, v___x_1424_);
lean_closure_set(v___f_1426_, 5, v_n_1395_);
lean_closure_set(v___f_1426_, 6, v_levelParams_1417_);
lean_closure_set(v___f_1426_, 7, v_a_1421_);
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v_numParams_1412_);
v___x_1428_ = 0;
v___x_1429_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_1422_, v___x_1427_, v___f_1426_, v___x_1428_, v___x_1428_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
return v___x_1429_;
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_levelParams_1417_);
lean_dec(v_a_1416_);
lean_dec(v_numParams_1412_);
lean_dec_ref(v_projDecls_1398_);
lean_dec(v_n_1395_);
v_a_1430_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1419_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1419_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec(v_numParams_1412_);
lean_dec_ref(v_toConstantVal_1411_);
lean_dec_ref(v_projDecls_1398_);
lean_dec(v_n_1395_);
v_a_1438_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1415_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1415_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec_ref(v_projDecls_1398_);
lean_dec(v_n_1395_);
v_a_1455_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1404_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1404_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object* v_n_1463_, lean_object* v___x_1464_, lean_object* v_instImplicit_1465_, lean_object* v_projDecls_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
uint8_t v_instImplicit_boxed_1472_; lean_object* v_res_1473_; 
v_instImplicit_boxed_1472_ = lean_unbox(v_instImplicit_1465_);
v_res_1473_ = l_Lean_Meta_mkProjections___lam__2(v_n_1463_, v___x_1464_, v_instImplicit_boxed_1472_, v_projDecls_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___x_1464_);
return v_res_1473_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__0(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0);
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__1(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = lean_unsigned_to_nat(32u);
v___x_1477_ = lean_mk_empty_array_with_capacity(v___x_1476_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__2(void){
_start:
{
size_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1479_ = ((size_t)5ULL);
v___x_1480_ = lean_unsigned_to_nat(0u);
v___x_1481_ = lean_unsigned_to_nat(32u);
v___x_1482_ = lean_mk_empty_array_with_capacity(v___x_1481_);
v___x_1483_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__1, &l_Lean_Meta_mkProjections___closed__1_once, _init_l_Lean_Meta_mkProjections___closed__1);
v___x_1484_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
lean_ctor_set(v___x_1484_, 1, v___x_1482_);
lean_ctor_set(v___x_1484_, 2, v___x_1480_);
lean_ctor_set(v___x_1484_, 3, v___x_1480_);
lean_ctor_set_usize(v___x_1484_, 4, v___x_1479_);
return v___x_1484_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__3(void){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1485_ = lean_box(1);
v___x_1486_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__2, &l_Lean_Meta_mkProjections___closed__2_once, _init_l_Lean_Meta_mkProjections___closed__2);
v___x_1487_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__0, &l_Lean_Meta_mkProjections___closed__0_once, _init_l_Lean_Meta_mkProjections___closed__0);
v___x_1488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
lean_ctor_set(v___x_1488_, 1, v___x_1486_);
lean_ctor_set(v___x_1488_, 2, v___x_1485_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object* v_n_1491_, lean_object* v_projDecls_1492_, uint8_t v_instImplicit_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___f_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_box(v_instImplicit_1493_);
v___f_1501_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1501_, 0, v_n_1491_);
lean_closure_set(v___f_1501_, 1, v___x_1499_);
lean_closure_set(v___f_1501_, 2, v___x_1500_);
lean_closure_set(v___f_1501_, 3, v_projDecls_1492_);
v___x_1502_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__3, &l_Lean_Meta_mkProjections___closed__3_once, _init_l_Lean_Meta_mkProjections___closed__3);
v___x_1503_ = ((lean_object*)(l_Lean_Meta_mkProjections___closed__4));
v___x_1504_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v___x_1502_, v___x_1503_, v___f_1501_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object* v_n_1505_, lean_object* v_projDecls_1506_, lean_object* v_instImplicit_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
uint8_t v_instImplicit_boxed_1513_; lean_object* v_res_1514_; 
v_instImplicit_boxed_1513_ = lean_unbox(v_instImplicit_1507_);
v_res_1514_ = l_Lean_Meta_mkProjections(v_n_1505_, v_projDecls_1506_, v_instImplicit_boxed_1513_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
lean_dec(v_a_1509_);
lean_dec_ref(v_a_1508_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t v_instImplicit_1515_, lean_object* v_as_1516_, size_t v_sz_1517_, size_t v_i_1518_, lean_object* v_b_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1515_, v_as_1516_, v_sz_1517_, v_i_1518_, v_b_1519_, v___y_1520_, v___y_1522_, v___y_1523_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object* v_instImplicit_1526_, lean_object* v_as_1527_, lean_object* v_sz_1528_, lean_object* v_i_1529_, lean_object* v_b_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
uint8_t v_instImplicit_boxed_1536_; size_t v_sz_boxed_1537_; size_t v_i_boxed_1538_; lean_object* v_res_1539_; 
v_instImplicit_boxed_1536_ = lean_unbox(v_instImplicit_1526_);
v_sz_boxed_1537_ = lean_unbox_usize(v_sz_1528_);
lean_dec(v_sz_1528_);
v_i_boxed_1538_ = lean_unbox_usize(v_i_1529_);
lean_dec(v_i_1529_);
v_res_1539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(v_instImplicit_boxed_1536_, v_as_1527_, v_sz_boxed_1537_, v_i_boxed_1538_, v_b_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec_ref(v_as_1527_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object* v_declName_1540_, uint8_t v_s_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_1540_, v_s_1541_, v___y_1543_, v___y_1545_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object* v_declName_1548_, lean_object* v_s_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
uint8_t v_s_boxed_1555_; lean_object* v_res_1556_; 
v_s_boxed_1555_ = lean_unbox(v_s_1549_);
v_res_1556_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(v_declName_1548_, v_s_boxed_1555_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object* v_00_u03b1_1557_, lean_object* v_ref_1558_, lean_object* v_msg_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_1558_, v_msg_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object* v_00_u03b1_1566_, lean_object* v_ref_1567_, lean_object* v_msg_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(v_00_u03b1_1566_, v_ref_1567_, v_msg_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v_ref_1567_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object* v_00_u03b1_1575_, lean_object* v_x_1576_, uint8_t v_isExporting_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_1576_, v_isExporting_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1584_, lean_object* v_x_1585_, lean_object* v_isExporting_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
uint8_t v_isExporting_boxed_1592_; lean_object* v_res_1593_; 
v_isExporting_boxed_1592_ = lean_unbox(v_isExporting_1586_);
v_res_1593_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(v_00_u03b1_1584_, v_x_1585_, v_isExporting_boxed_1592_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object* v_00_u03b1_1594_, lean_object* v_x_1595_, uint8_t v_when_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v___x_1602_; 
v___x_1602_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_1595_, v_when_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object* v_00_u03b1_1603_, lean_object* v_x_1604_, lean_object* v_when_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
uint8_t v_when_boxed_1611_; lean_object* v_res_1612_; 
v_when_boxed_1611_ = lean_unbox(v_when_1605_);
v_res_1612_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(v_00_u03b1_1603_, v_x_1604_, v_when_boxed_1611_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object* v_upperBound_1613_, lean_object* v_projDecls_1614_, lean_object* v___x_1615_, lean_object* v___x_1616_, uint8_t v_instImplicit_1617_, lean_object* v___x_1618_, lean_object* v_params_1619_, lean_object* v_self_1620_, lean_object* v_a_1621_, lean_object* v___x_1622_, lean_object* v_n_1623_, lean_object* v___x_1624_, uint8_t v_a_1625_, lean_object* v_inst_1626_, lean_object* v_R_1627_, lean_object* v_a_1628_, lean_object* v_b_1629_, lean_object* v_c_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_1613_, v_projDecls_1614_, v___x_1615_, v___x_1616_, v_instImplicit_1617_, v___x_1618_, v_params_1619_, v_self_1620_, v_a_1621_, v___x_1622_, v_n_1623_, v___x_1624_, v_a_1625_, v_a_1628_, v_b_1629_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1637_ = _args[0];
lean_object* v_projDecls_1638_ = _args[1];
lean_object* v___x_1639_ = _args[2];
lean_object* v___x_1640_ = _args[3];
lean_object* v_instImplicit_1641_ = _args[4];
lean_object* v___x_1642_ = _args[5];
lean_object* v_params_1643_ = _args[6];
lean_object* v_self_1644_ = _args[7];
lean_object* v_a_1645_ = _args[8];
lean_object* v___x_1646_ = _args[9];
lean_object* v_n_1647_ = _args[10];
lean_object* v___x_1648_ = _args[11];
lean_object* v_a_1649_ = _args[12];
lean_object* v_inst_1650_ = _args[13];
lean_object* v_R_1651_ = _args[14];
lean_object* v_a_1652_ = _args[15];
lean_object* v_b_1653_ = _args[16];
lean_object* v_c_1654_ = _args[17];
lean_object* v___y_1655_ = _args[18];
lean_object* v___y_1656_ = _args[19];
lean_object* v___y_1657_ = _args[20];
lean_object* v___y_1658_ = _args[21];
lean_object* v___y_1659_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_1660_; uint8_t v_a_18969__boxed_1661_; lean_object* v_res_1662_; 
v_instImplicit_boxed_1660_ = lean_unbox(v_instImplicit_1641_);
v_a_18969__boxed_1661_ = lean_unbox(v_a_1649_);
v_res_1662_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(v_upperBound_1637_, v_projDecls_1638_, v___x_1639_, v___x_1640_, v_instImplicit_boxed_1660_, v___x_1642_, v_params_1643_, v_self_1644_, v_a_1645_, v___x_1646_, v_n_1647_, v___x_1648_, v_a_18969__boxed_1661_, v_inst_1650_, v_R_1651_, v_a_1652_, v_b_1653_, v_c_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v_projDecls_1638_);
lean_dec(v_upperBound_1637_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object* v_k_1663_, uint8_t v_allowLevelAssignments_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1664_, v_k_1663_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1670_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1670_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
v_a_1679_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1670_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1670_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object* v_k_1687_, lean_object* v_allowLevelAssignments_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1694_; lean_object* v_res_1695_; 
v_allowLevelAssignments_boxed_1694_ = lean_unbox(v_allowLevelAssignments_1688_);
v_res_1695_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1687_, v_allowLevelAssignments_boxed_1694_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object* v_00_u03b1_1696_, lean_object* v_k_1697_, uint8_t v_allowLevelAssignments_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1697_, v_allowLevelAssignments_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object* v_00_u03b1_1705_, lean_object* v_k_1706_, lean_object* v_allowLevelAssignments_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1713_; lean_object* v_res_1714_; 
v_allowLevelAssignments_boxed_1713_ = lean_unbox(v_allowLevelAssignments_1707_);
v_res_1714_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(v_00_u03b1_1705_, v_k_1706_, v_allowLevelAssignments_boxed_1713_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object* v_as_1715_, size_t v_sz_1716_, size_t v_i_1717_, lean_object* v_b_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
uint8_t v___x_1724_; 
v___x_1724_ = lean_usize_dec_lt(v_i_1717_, v_sz_1716_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v_b_1718_);
return v___x_1725_;
}
else
{
lean_object* v_snd_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1781_; 
v_snd_1726_ = lean_ctor_get(v_b_1718_, 1);
v_isSharedCheck_1781_ = !lean_is_exclusive(v_b_1718_);
if (v_isSharedCheck_1781_ == 0)
{
lean_object* v_unused_1782_; 
v_unused_1782_ = lean_ctor_get(v_b_1718_, 0);
lean_dec(v_unused_1782_);
v___x_1728_ = v_b_1718_;
v_isShared_1729_ = v_isSharedCheck_1781_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_snd_1726_);
lean_dec(v_b_1718_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1781_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v_array_1730_; lean_object* v_start_1731_; lean_object* v_stop_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v_array_1730_ = lean_ctor_get(v_snd_1726_, 0);
v_start_1731_ = lean_ctor_get(v_snd_1726_, 1);
v_stop_1732_ = lean_ctor_get(v_snd_1726_, 2);
v___x_1733_ = lean_box(0);
v___x_1734_ = lean_nat_dec_lt(v_start_1731_, v_stop_1732_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1736_; 
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1733_);
v___x_1736_ = v___x_1728_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_snd_1726_);
v___x_1736_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
return v___x_1737_;
}
}
else
{
lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1777_; 
lean_inc(v_stop_1732_);
lean_inc(v_start_1731_);
lean_inc_ref(v_array_1730_);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_snd_1726_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; lean_object* v_unused_1779_; lean_object* v_unused_1780_; 
v_unused_1778_ = lean_ctor_get(v_snd_1726_, 2);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_snd_1726_, 1);
lean_dec(v_unused_1779_);
v_unused_1780_ = lean_ctor_get(v_snd_1726_, 0);
lean_dec(v_unused_1780_);
v___x_1740_ = v_snd_1726_;
v_isShared_1741_ = v_isSharedCheck_1777_;
goto v_resetjp_1739_;
}
else
{
lean_dec(v_snd_1726_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1777_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_a_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1747_; 
v_a_1742_ = lean_array_uget_borrowed(v_as_1715_, v_i_1717_);
v___x_1743_ = lean_array_fget(v_array_1730_, v_start_1731_);
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = lean_nat_add(v_start_1731_, v___x_1744_);
lean_dec(v_start_1731_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 1, v___x_1745_);
v___x_1747_ = v___x_1740_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_array_1730_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___x_1745_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_stop_1732_);
v___x_1747_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1748_; 
lean_inc(v_a_1742_);
v___x_1748_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1742_, v___x_1743_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1767_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1767_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1767_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
uint8_t v___x_1753_; 
v___x_1753_ = lean_unbox(v_a_1749_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1754_, 0, v_a_1749_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 1, v___x_1747_);
lean_ctor_set(v___x_1728_, 0, v___x_1754_);
v___x_1756_ = v___x_1728_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1754_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v___x_1747_);
v___x_1756_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1758_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___x_1756_);
v___x_1758_ = v___x_1751_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
else
{
lean_object* v___x_1762_; 
lean_del_object(v___x_1751_);
lean_dec(v_a_1749_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 1, v___x_1747_);
lean_ctor_set(v___x_1728_, 0, v___x_1733_);
v___x_1762_ = v___x_1728_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v___x_1747_);
v___x_1762_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
size_t v___x_1763_; size_t v___x_1764_; 
v___x_1763_ = ((size_t)1ULL);
v___x_1764_ = lean_usize_add(v_i_1717_, v___x_1763_);
v_i_1717_ = v___x_1764_;
v_b_1718_ = v___x_1762_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec_ref(v___x_1747_);
lean_del_object(v___x_1728_);
v_a_1768_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1748_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1748_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object* v_as_1783_, lean_object* v_sz_1784_, lean_object* v_i_1785_, lean_object* v_b_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
size_t v_sz_boxed_1792_; size_t v_i_boxed_1793_; lean_object* v_res_1794_; 
v_sz_boxed_1792_ = lean_unbox_usize(v_sz_1784_);
lean_dec(v_sz_1784_);
v_i_boxed_1793_ = lean_unbox_usize(v_i_1785_);
lean_dec(v_i_1785_);
v_res_1794_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_as_1783_, v_sz_boxed_1792_, v_i_boxed_1793_, v_b_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec_ref(v_as_1783_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t v___x_1795_, lean_object* v_params2_1796_, lean_object* v___x_1797_, lean_object* v_params1_1798_, uint8_t v___x_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
if (v___x_1795_ == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_dec(v___x_1797_);
lean_dec_ref(v_params2_1796_);
v___x_1805_ = lean_box(v___x_1795_);
v___x_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
return v___x_1806_;
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; size_t v_sz_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = l_Array_toSubarray___redArg(v_params2_1796_, v___x_1807_, v___x_1797_);
v___x_1809_ = lean_box(0);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
lean_ctor_set(v___x_1810_, 1, v___x_1808_);
v_sz_1811_ = lean_array_size(v_params1_1798_);
v___x_1812_ = ((size_t)0ULL);
v___x_1813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_params1_1798_, v_sz_1811_, v___x_1812_, v___x_1810_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1827_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1816_ = v___x_1813_;
v_isShared_1817_ = v_isSharedCheck_1827_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1813_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1827_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v_fst_1818_; 
v_fst_1818_ = lean_ctor_get(v_a_1814_, 0);
lean_inc(v_fst_1818_);
lean_dec(v_a_1814_);
if (lean_obj_tag(v_fst_1818_) == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_box(v___x_1799_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v___x_1819_);
v___x_1821_ = v___x_1816_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v_val_1823_; lean_object* v___x_1825_; 
v_val_1823_ = lean_ctor_get(v_fst_1818_, 0);
lean_inc(v_val_1823_);
lean_dec_ref_known(v_fst_1818_, 1);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v_val_1823_);
v___x_1825_ = v___x_1816_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_val_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1835_; 
v_a_1828_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1830_ = v___x_1813_;
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1813_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1835_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object* v___x_1836_, lean_object* v_params2_1837_, lean_object* v___x_1838_, lean_object* v_params1_1839_, lean_object* v___x_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
uint8_t v___x_2007__boxed_1846_; uint8_t v___x_2009__boxed_1847_; lean_object* v_res_1848_; 
v___x_2007__boxed_1846_ = lean_unbox(v___x_1836_);
v___x_2009__boxed_1847_ = lean_unbox(v___x_1840_);
v_res_1848_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(v___x_2007__boxed_1846_, v_params2_1837_, v___x_1838_, v_params1_1839_, v___x_2009__boxed_1847_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec_ref(v_params1_1839_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object* v_params1_1849_, lean_object* v_params2_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___y_1862_; uint8_t v___x_1863_; lean_object* v___x_1864_; 
v___x_1856_ = lean_array_get_size(v_params1_1849_);
v___x_1857_ = lean_array_get_size(v_params2_1850_);
v___x_1858_ = lean_nat_dec_eq(v___x_1856_, v___x_1857_);
v___x_1859_ = 1;
v___x_1860_ = lean_box(v___x_1858_);
v___x_1861_ = lean_box(v___x_1859_);
v___y_1862_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed), 10, 5);
lean_closure_set(v___y_1862_, 0, v___x_1860_);
lean_closure_set(v___y_1862_, 1, v_params2_1850_);
lean_closure_set(v___y_1862_, 2, v___x_1857_);
lean_closure_set(v___y_1862_, 3, v_params1_1849_);
lean_closure_set(v___y_1862_, 4, v___x_1861_);
v___x_1863_ = 0;
v___x_1864_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v___y_1862_, v___x_1863_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object* v_params1_1865_, lean_object* v_params2_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params1_1865_, v_params2_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_);
lean_dec(v_a_1870_);
lean_dec_ref(v_a_1869_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object* v_declName_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v_env_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1876_ = lean_st_ref_get(v___y_1874_);
v_env_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc_ref(v_env_1877_);
lean_dec(v___x_1876_);
v___x_1878_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1877_, v_declName_1873_);
v___x_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object* v_declName_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1880_, v___y_1881_);
lean_dec(v___y_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object* v_declName_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1884_, v___y_1888_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object* v_declName_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(v_declName_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1897_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0(void){
_start:
{
lean_object* v___x_1898_; lean_object* v_dummy_1899_; 
v___x_1898_ = lean_box(0);
v_dummy_1899_ = l_Lean_Expr_sort___override(v___x_1898_);
return v_dummy_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object* v_ctor_1900_, lean_object* v_induct_1901_, lean_object* v_params_1902_, lean_object* v_idx_1903_, lean_object* v_e_1904_, lean_object* v_x_x3f_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_){
_start:
{
if (lean_obj_tag(v_e_1904_) == 11)
{
lean_object* v_typeName_1917_; lean_object* v_idx_1918_; lean_object* v_struct_1919_; uint8_t v___x_1966_; 
v_typeName_1917_ = lean_ctor_get(v_e_1904_, 0);
v_idx_1918_ = lean_ctor_get(v_e_1904_, 1);
v_struct_1919_ = lean_ctor_get(v_e_1904_, 2);
lean_inc_ref(v_struct_1919_);
v___x_1966_ = lean_nat_dec_eq(v_idx_1918_, v_idx_1903_);
if (v___x_1966_ == 0)
{
lean_dec_ref(v_struct_1919_);
lean_dec_ref_known(v_e_1904_, 3);
lean_dec_ref(v_params_1902_);
goto v___jp_1914_;
}
else
{
uint8_t v___x_1967_; 
v___x_1967_ = lean_name_eq(v_induct_1901_, v_typeName_1917_);
if (v___x_1967_ == 0)
{
lean_dec_ref(v_struct_1919_);
lean_dec_ref_known(v_e_1904_, 3);
lean_dec_ref(v_params_1902_);
goto v___jp_1914_;
}
else
{
if (lean_obj_tag(v_x_x3f_1905_) == 0)
{
goto v___jp_1920_;
}
else
{
lean_object* v_val_1968_; uint8_t v___x_1969_; 
v_val_1968_ = lean_ctor_get(v_x_x3f_1905_, 0);
v___x_1969_ = lean_expr_eqv(v_val_1968_, v_struct_1919_);
if (v___x_1969_ == 0)
{
lean_dec_ref(v_struct_1919_);
lean_dec_ref_known(v_e_1904_, 3);
lean_dec_ref(v_params_1902_);
goto v___jp_1914_;
}
else
{
goto v___jp_1920_;
}
}
}
}
v___jp_1920_:
{
lean_object* v___x_1921_; 
lean_inc(v_a_1909_);
lean_inc_ref(v_a_1908_);
lean_inc(v_a_1907_);
lean_inc_ref(v_a_1906_);
v___x_1921_ = lean_infer_type(v_e_1904_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___x_1923_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
lean_inc(v_a_1909_);
lean_inc_ref(v_a_1908_);
lean_inc(v_a_1907_);
lean_inc_ref(v_a_1906_);
v___x_1923_ = lean_whnf(v_a_1922_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v_dummy_1925_; lean_object* v_nargs_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v_dummy_1925_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1926_ = l_Lean_Expr_getAppNumArgs(v_a_1924_);
lean_inc(v_nargs_1926_);
v___x_1927_ = lean_mk_array(v_nargs_1926_, v_dummy_1925_);
v___x_1928_ = lean_unsigned_to_nat(1u);
v___x_1929_ = lean_nat_sub(v_nargs_1926_, v___x_1928_);
lean_dec(v_nargs_1926_);
v___x_1930_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1924_, v___x_1927_, v___x_1929_);
v___x_1931_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1902_, v___x_1930_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1941_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1941_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1941_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
uint8_t v___x_1936_; 
v___x_1936_ = lean_unbox(v_a_1932_);
lean_dec(v_a_1932_);
if (v___x_1936_ == 0)
{
lean_del_object(v___x_1934_);
lean_dec_ref(v_struct_1919_);
goto v___jp_1914_;
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1937_, 0, v_struct_1919_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1937_);
v___x_1939_ = v___x_1934_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v_struct_1919_);
v_a_1942_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1931_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1931_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v_struct_1919_);
lean_dec_ref(v_params_1902_);
v_a_1950_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1923_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1923_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec_ref(v_struct_1919_);
lean_dec_ref(v_params_1902_);
v_a_1958_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1921_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1921_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
else
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_Expr_getAppFn(v_e_1904_);
if (lean_obj_tag(v___x_1970_) == 4)
{
lean_object* v_declName_1971_; lean_object* v___x_1972_; lean_object* v_a_1973_; 
v_declName_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_declName_1971_);
lean_dec_ref_known(v___x_1970_, 2);
v___x_1972_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1971_, v_a_1909_);
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref(v___x_1972_);
if (lean_obj_tag(v_a_1973_) == 1)
{
lean_object* v_val_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_2018_; 
v_val_1974_ = lean_ctor_get(v_a_1973_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_a_1973_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_1976_ = v_a_1973_;
v_isShared_1977_ = v_isSharedCheck_2018_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_val_1974_);
lean_dec(v_a_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_2018_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v_ctorName_1978_; lean_object* v_numParams_1979_; lean_object* v_i_1980_; uint8_t v___x_1981_; 
v_ctorName_1978_ = lean_ctor_get(v_val_1974_, 0);
lean_inc(v_ctorName_1978_);
v_numParams_1979_ = lean_ctor_get(v_val_1974_, 1);
lean_inc(v_numParams_1979_);
v_i_1980_ = lean_ctor_get(v_val_1974_, 2);
lean_inc(v_i_1980_);
lean_dec(v_val_1974_);
v___x_1981_ = lean_name_eq(v_ctorName_1978_, v_ctor_1900_);
lean_dec(v_ctorName_1978_);
if (v___x_1981_ == 0)
{
lean_dec(v_i_1980_);
lean_dec(v_numParams_1979_);
lean_del_object(v___x_1976_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
else
{
uint8_t v___x_1982_; 
v___x_1982_ = lean_nat_dec_eq(v_i_1980_, v_idx_1903_);
lean_dec(v_i_1980_);
if (v___x_1982_ == 0)
{
lean_dec(v_numParams_1979_);
lean_del_object(v___x_1976_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
else
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v___x_1983_ = l_Lean_Expr_getAppNumArgs(v_e_1904_);
v___x_1984_ = lean_unsigned_to_nat(1u);
v___x_1985_ = lean_nat_add(v_numParams_1979_, v___x_1984_);
lean_dec(v_numParams_1979_);
v___x_1986_ = lean_nat_dec_eq(v___x_1983_, v___x_1985_);
lean_dec(v___x_1985_);
lean_dec(v___x_1983_);
if (v___x_1986_ == 0)
{
lean_del_object(v___x_1976_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
else
{
lean_object* v___x_1987_; 
v___x_1987_ = l_Lean_Expr_appArg_x21(v_e_1904_);
if (lean_obj_tag(v_x_x3f_1905_) == 0)
{
goto v___jp_1988_;
}
else
{
lean_object* v_val_2016_; uint8_t v___x_2017_; 
v_val_2016_ = lean_ctor_get(v_x_x3f_1905_, 0);
v___x_2017_ = lean_expr_eqv(v_val_2016_, v___x_1987_);
if (v___x_2017_ == 0)
{
lean_dec_ref(v___x_1987_);
lean_del_object(v___x_1976_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
else
{
goto v___jp_1988_;
}
}
v___jp_1988_:
{
lean_object* v___x_1989_; lean_object* v_dummy_1990_; lean_object* v_nargs_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1989_ = l_Lean_Expr_appFn_x21(v_e_1904_);
lean_dec_ref(v_e_1904_);
v_dummy_1990_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1991_ = l_Lean_Expr_getAppNumArgs(v___x_1989_);
lean_inc(v_nargs_1991_);
v___x_1992_ = lean_mk_array(v_nargs_1991_, v_dummy_1990_);
v___x_1993_ = lean_nat_sub(v_nargs_1991_, v___x_1984_);
lean_dec(v_nargs_1991_);
v___x_1994_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1989_, v___x_1992_, v___x_1993_);
v___x_1995_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1902_, v___x_1994_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2007_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1998_ = v___x_1995_;
v_isShared_1999_ = v_isSharedCheck_2007_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1995_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2007_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
uint8_t v___x_2000_; 
v___x_2000_ = lean_unbox(v_a_1996_);
lean_dec(v_a_1996_);
if (v___x_2000_ == 0)
{
lean_del_object(v___x_1998_);
lean_dec_ref(v___x_1987_);
lean_del_object(v___x_1976_);
goto v___jp_1911_;
}
else
{
lean_object* v___x_2002_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1987_);
v___x_2002_ = v___x_1976_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_1987_);
v___x_2002_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
lean_object* v___x_2004_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v___x_2002_);
v___x_2004_ = v___x_1998_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec_ref(v___x_1987_);
lean_del_object(v___x_1976_);
v_a_2008_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1995_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1995_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
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
lean_dec(v_a_1973_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
}
else
{
lean_dec_ref(v___x_1970_);
lean_dec_ref(v_e_1904_);
lean_dec_ref(v_params_1902_);
goto v___jp_1911_;
}
}
v___jp_1911_:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1912_ = lean_box(0);
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
return v___x_1913_;
}
v___jp_1914_:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = lean_box(0);
v___x_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
return v___x_1916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object* v_ctor_2019_, lean_object* v_induct_2020_, lean_object* v_params_2021_, lean_object* v_idx_2022_, lean_object* v_e_2023_, lean_object* v_x_x3f_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_ctor_2019_, v_induct_2020_, v_params_2021_, v_idx_2022_, v_e_2023_, v_x_x3f_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
lean_dec(v_x_x3f_2024_);
lean_dec(v_idx_2022_);
lean_dec(v_induct_2020_);
lean_dec(v_ctor_2019_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object* v_constName_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_){
_start:
{
lean_object* v___x_2037_; lean_object* v_env_2041_; uint8_t v___x_2042_; lean_object* v___x_2043_; 
v___x_2037_ = lean_st_ref_get(v___y_2035_);
v_env_2041_ = lean_ctor_get(v___x_2037_, 0);
lean_inc_ref(v_env_2041_);
lean_dec(v___x_2037_);
v___x_2042_ = 0;
v___x_2043_ = l_Lean_Environment_findAsync_x3f(v_env_2041_, v_constName_2031_, v___x_2042_);
if (lean_obj_tag(v___x_2043_) == 1)
{
lean_object* v_val_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2063_; 
v_val_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2063_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_val_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2063_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
uint8_t v_kind_2048_; 
v_kind_2048_ = lean_ctor_get_uint8(v_val_2044_, sizeof(void*)*3);
if (v_kind_2048_ == 6)
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2044_);
if (lean_obj_tag(v___x_2049_) == 6)
{
lean_object* v_val_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2060_; 
v_val_2050_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2052_ = v___x_2049_;
v_isShared_2053_ = v_isSharedCheck_2060_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_val_2050_);
lean_dec(v___x_2049_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2060_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v_val_2050_);
v___x_2055_ = v___x_2046_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_val_2050_);
v___x_2055_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
lean_object* v___x_2057_; 
if (v_isShared_2053_ == 0)
{
lean_ctor_set_tag(v___x_2052_, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2055_);
v___x_2057_ = v___x_2052_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
else
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
lean_dec_ref(v___x_2049_);
lean_del_object(v___x_2046_);
v___x_2061_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_2062_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_2061_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
return v___x_2062_;
}
}
else
{
lean_del_object(v___x_2046_);
lean_dec(v_val_2044_);
goto v___jp_2038_;
}
}
}
else
{
lean_dec(v___x_2043_);
goto v___jp_2038_;
}
v___jp_2038_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
return v___x_2040_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object* v_constName_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_constName_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object* v_upperBound_2079_, lean_object* v___x_2080_, lean_object* v___x_2081_, lean_object* v_declName_2082_, lean_object* v___x_2083_, lean_object* v___x_2084_, lean_object* v_a_2085_, lean_object* v_val_2086_, lean_object* v_a_2087_, lean_object* v_b_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
uint8_t v___x_2094_; 
v___x_2094_ = lean_nat_dec_lt(v_a_2087_, v_upperBound_2079_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; 
lean_dec(v_a_2087_);
lean_dec_ref(v___x_2084_);
v___x_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2095_, 0, v_b_2088_);
return v___x_2095_;
}
else
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_dec_ref(v_b_2088_);
v___x_2096_ = l_Lean_instInhabitedExpr;
v___x_2097_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2098_ = lean_nat_add(v___x_2080_, v_a_2087_);
v___x_2099_ = lean_array_get_borrowed(v___x_2096_, v___x_2081_, v___x_2098_);
lean_dec(v___x_2098_);
lean_inc(v___x_2099_);
lean_inc_ref(v___x_2084_);
v___x_2100_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2082_, v___x_2083_, v___x_2084_, v_a_2087_, v___x_2099_, v_a_2085_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2118_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2103_ = v___x_2100_;
v_isShared_2104_ = v_isSharedCheck_2118_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2100_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2118_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
if (lean_obj_tag(v_a_2101_) == 1)
{
lean_object* v_val_2105_; uint8_t v___x_2106_; 
v_val_2105_ = lean_ctor_get(v_a_2101_, 0);
lean_inc(v_val_2105_);
lean_dec_ref_known(v_a_2101_, 1);
v___x_2106_ = lean_expr_eqv(v_val_2105_, v_val_2086_);
lean_dec(v_val_2105_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
lean_dec(v_a_2087_);
lean_dec_ref(v___x_2084_);
v___x_2107_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v___x_2107_);
v___x_2109_ = v___x_2103_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_del_object(v___x_2103_);
v___x_2111_ = lean_unsigned_to_nat(1u);
v___x_2112_ = lean_nat_add(v_a_2087_, v___x_2111_);
lean_dec(v_a_2087_);
v_a_2087_ = v___x_2112_;
v_b_2088_ = v___x_2097_;
goto _start;
}
}
else
{
lean_object* v___x_2114_; lean_object* v___x_2116_; 
lean_dec(v_a_2101_);
lean_dec(v_a_2087_);
lean_dec_ref(v___x_2084_);
v___x_2114_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v___x_2114_);
v___x_2116_ = v___x_2103_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec(v_a_2087_);
lean_dec_ref(v___x_2084_);
v_a_2119_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2100_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2100_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_2127_, lean_object* v___x_2128_, lean_object* v___x_2129_, lean_object* v_declName_2130_, lean_object* v___x_2131_, lean_object* v___x_2132_, lean_object* v_a_2133_, lean_object* v_val_2134_, lean_object* v_a_2135_, lean_object* v_b_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2127_, v___x_2128_, v___x_2129_, v_declName_2130_, v___x_2131_, v___x_2132_, v_a_2133_, v_val_2134_, v_a_2135_, v_b_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec_ref(v_val_2134_);
lean_dec(v_a_2133_);
lean_dec(v___x_2131_);
lean_dec(v_declName_2130_);
lean_dec_ref(v___x_2129_);
lean_dec(v___x_2128_);
lean_dec(v_upperBound_2127_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object* v_e_2143_, lean_object* v_p_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_Expr_getAppFn(v_e_2143_);
if (lean_obj_tag(v___x_2150_) == 4)
{
lean_object* v_declName_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v_declName_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc_n(v_declName_2151_, 2);
lean_dec_ref_known(v___x_2150_, 2);
v___x_2152_ = l_Lean_instInhabitedExpr;
v___x_2153_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_declName_2151_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2225_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2156_ = v___x_2153_;
v_isShared_2157_ = v_isSharedCheck_2225_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2153_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2225_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
if (lean_obj_tag(v_a_2154_) == 1)
{
lean_object* v_val_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2222_; 
v_val_2163_ = lean_ctor_get(v_a_2154_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v_a_2154_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2165_ = v_a_2154_;
v_isShared_2166_ = v_isSharedCheck_2222_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_val_2163_);
lean_dec(v_a_2154_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2222_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v_induct_2167_; lean_object* v_numParams_2168_; lean_object* v_numFields_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v_induct_2167_ = lean_ctor_get(v_val_2163_, 1);
lean_inc_n(v_induct_2167_, 2);
v_numParams_2168_ = lean_ctor_get(v_val_2163_, 3);
lean_inc(v_numParams_2168_);
v_numFields_2169_ = lean_ctor_get(v_val_2163_, 4);
lean_inc(v_numFields_2169_);
lean_dec(v_val_2163_);
v___x_2170_ = lean_apply_1(v_p_2144_, v_induct_2167_);
v___x_2171_ = lean_unbox(v___x_2170_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; lean_object* v___x_2174_; 
lean_dec(v_numFields_2169_);
lean_dec(v_numParams_2168_);
lean_dec(v_induct_2167_);
lean_del_object(v___x_2156_);
lean_dec(v_declName_2151_);
lean_dec_ref(v_e_2143_);
v___x_2172_ = lean_box(0);
if (v_isShared_2166_ == 0)
{
lean_ctor_set_tag(v___x_2165_, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2172_);
v___x_2174_ = v___x_2165_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2172_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
else
{
lean_object* v___x_2176_; uint8_t v___x_2177_; 
lean_del_object(v___x_2165_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_nat_dec_lt(v___x_2176_, v_numFields_2169_);
if (v___x_2177_ == 0)
{
lean_dec(v_numFields_2169_);
lean_dec(v_numParams_2168_);
lean_dec(v_induct_2167_);
lean_dec(v_declName_2151_);
lean_dec_ref(v_e_2143_);
goto v___jp_2158_;
}
else
{
lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2178_ = l_Lean_Expr_getAppNumArgs(v_e_2143_);
v___x_2179_ = lean_nat_add(v_numParams_2168_, v_numFields_2169_);
v___x_2180_ = lean_nat_dec_eq(v___x_2178_, v___x_2179_);
lean_dec(v___x_2179_);
if (v___x_2180_ == 0)
{
lean_dec(v___x_2178_);
lean_dec(v_numFields_2169_);
lean_dec(v_numParams_2168_);
lean_dec(v_induct_2167_);
lean_dec(v_declName_2151_);
lean_dec_ref(v_e_2143_);
goto v___jp_2158_;
}
else
{
lean_object* v_dummy_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_del_object(v___x_2156_);
v_dummy_2181_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
lean_inc(v___x_2178_);
v___x_2182_ = lean_mk_array(v___x_2178_, v_dummy_2181_);
v___x_2183_ = lean_unsigned_to_nat(1u);
v___x_2184_ = lean_nat_sub(v___x_2178_, v___x_2183_);
lean_dec(v___x_2178_);
v___x_2185_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2143_, v___x_2182_, v___x_2184_);
lean_inc(v_numParams_2168_);
v___x_2186_ = l_Array_extract___redArg(v___x_2185_, v___x_2176_, v_numParams_2168_);
v___x_2187_ = lean_array_get_borrowed(v___x_2152_, v___x_2185_, v_numParams_2168_);
v___x_2188_ = lean_box(0);
lean_inc(v___x_2187_);
lean_inc_ref(v___x_2186_);
v___x_2189_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2151_, v_induct_2167_, v___x_2186_, v___x_2176_, v___x_2187_, v___x_2188_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2221_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2192_ = v___x_2189_;
v_isShared_2193_ = v_isSharedCheck_2221_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2189_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2221_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
if (lean_obj_tag(v_a_2190_) == 1)
{
lean_object* v_val_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_del_object(v___x_2192_);
v_val_2194_ = lean_ctor_get(v_a_2190_, 0);
v___x_2195_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2196_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_numFields_2169_, v_numParams_2168_, v___x_2185_, v_declName_2151_, v_induct_2167_, v___x_2186_, v_a_2190_, v_val_2194_, v___x_2183_, v___x_2195_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
lean_dec(v_induct_2167_);
lean_dec(v_declName_2151_);
lean_dec_ref(v___x_2185_);
lean_dec(v_numParams_2168_);
lean_dec(v_numFields_2169_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2209_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2199_ = v___x_2196_;
v_isShared_2200_ = v_isSharedCheck_2209_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2196_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2209_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v_fst_2201_; 
v_fst_2201_ = lean_ctor_get(v_a_2197_, 0);
lean_inc(v_fst_2201_);
lean_dec(v_a_2197_);
if (lean_obj_tag(v_fst_2201_) == 0)
{
lean_object* v___x_2203_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v_a_2190_);
v___x_2203_ = v___x_2199_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2190_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
else
{
lean_object* v_val_2205_; lean_object* v___x_2207_; 
lean_dec_ref_known(v_a_2190_, 1);
v_val_2205_ = lean_ctor_get(v_fst_2201_, 0);
lean_inc(v_val_2205_);
lean_dec_ref_known(v_fst_2201_, 1);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v_val_2205_);
v___x_2207_ = v___x_2199_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_val_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec_ref_known(v_a_2190_, 1);
v_a_2210_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2196_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2196_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
else
{
lean_object* v___x_2219_; 
lean_dec(v_a_2190_);
lean_dec_ref(v___x_2186_);
lean_dec_ref(v___x_2185_);
lean_dec(v_numFields_2169_);
lean_dec(v_numParams_2168_);
lean_dec(v_induct_2167_);
lean_dec(v_declName_2151_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 0, v___x_2188_);
v___x_2219_ = v___x_2192_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2188_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_dec_ref(v___x_2186_);
lean_dec_ref(v___x_2185_);
lean_dec(v_numFields_2169_);
lean_dec(v_numParams_2168_);
lean_dec(v_induct_2167_);
lean_dec(v_declName_2151_);
return v___x_2189_;
}
}
}
}
}
}
else
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
lean_del_object(v___x_2156_);
lean_dec(v_a_2154_);
lean_dec(v_declName_2151_);
lean_dec_ref(v_p_2144_);
lean_dec_ref(v_e_2143_);
v___x_2223_ = lean_box(0);
v___x_2224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
return v___x_2224_;
}
v___jp_2158_:
{
lean_object* v___x_2159_; lean_object* v___x_2161_; 
v___x_2159_ = lean_box(0);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 0, v___x_2159_);
v___x_2161_ = v___x_2156_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec(v_declName_2151_);
lean_dec_ref(v_p_2144_);
lean_dec_ref(v_e_2143_);
v_a_2226_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2153_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2153_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_p_2144_);
lean_dec_ref(v_e_2143_);
v___x_2234_ = lean_box(0);
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object* v_e_2236_, lean_object* v_p_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lean_Meta_etaStruct_x3f(v_e_2236_, v_p_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object* v_upperBound_2244_, lean_object* v___x_2245_, lean_object* v___x_2246_, lean_object* v_declName_2247_, lean_object* v___x_2248_, lean_object* v___x_2249_, lean_object* v_a_2250_, lean_object* v_val_2251_, lean_object* v_inst_2252_, lean_object* v_R_2253_, lean_object* v_a_2254_, lean_object* v_b_2255_, lean_object* v_c_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2244_, v___x_2245_, v___x_2246_, v_declName_2247_, v___x_2248_, v___x_2249_, v_a_2250_, v_val_2251_, v_a_2254_, v_b_2255_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2263_ = _args[0];
lean_object* v___x_2264_ = _args[1];
lean_object* v___x_2265_ = _args[2];
lean_object* v_declName_2266_ = _args[3];
lean_object* v___x_2267_ = _args[4];
lean_object* v___x_2268_ = _args[5];
lean_object* v_a_2269_ = _args[6];
lean_object* v_val_2270_ = _args[7];
lean_object* v_inst_2271_ = _args[8];
lean_object* v_R_2272_ = _args[9];
lean_object* v_a_2273_ = _args[10];
lean_object* v_b_2274_ = _args[11];
lean_object* v_c_2275_ = _args[12];
lean_object* v___y_2276_ = _args[13];
lean_object* v___y_2277_ = _args[14];
lean_object* v___y_2278_ = _args[15];
lean_object* v___y_2279_ = _args[16];
lean_object* v___y_2280_ = _args[17];
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(v_upperBound_2263_, v___x_2264_, v___x_2265_, v_declName_2266_, v___x_2267_, v___x_2268_, v_a_2269_, v_val_2270_, v_inst_2271_, v_R_2272_, v_a_2273_, v_b_2274_, v_c_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec_ref(v_val_2270_);
lean_dec(v_a_2269_);
lean_dec(v___x_2267_);
lean_dec(v_declName_2266_);
lean_dec_ref(v___x_2265_);
lean_dec(v___x_2264_);
lean_dec(v_upperBound_2263_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object* v_e_2282_, lean_object* v___y_2283_){
_start:
{
uint8_t v___x_2285_; 
v___x_2285_ = l_Lean_Expr_hasMVar(v_e_2282_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_e_2282_);
return v___x_2286_;
}
else
{
lean_object* v___x_2287_; lean_object* v_mctx_2288_; lean_object* v___x_2289_; lean_object* v_fst_2290_; lean_object* v_snd_2291_; lean_object* v___x_2292_; lean_object* v_cache_2293_; lean_object* v_zetaDeltaFVarIds_2294_; lean_object* v_postponed_2295_; lean_object* v_diag_2296_; lean_object* v_rewriteFires_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2306_; 
v___x_2287_ = lean_st_ref_get(v___y_2283_);
v_mctx_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc_ref(v_mctx_2288_);
lean_dec(v___x_2287_);
v___x_2289_ = l_Lean_instantiateMVarsCore(v_mctx_2288_, v_e_2282_);
v_fst_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_fst_2290_);
v_snd_2291_ = lean_ctor_get(v___x_2289_, 1);
lean_inc(v_snd_2291_);
lean_dec_ref(v___x_2289_);
v___x_2292_ = lean_st_ref_take(v___y_2283_);
v_cache_2293_ = lean_ctor_get(v___x_2292_, 1);
v_zetaDeltaFVarIds_2294_ = lean_ctor_get(v___x_2292_, 2);
v_postponed_2295_ = lean_ctor_get(v___x_2292_, 3);
v_diag_2296_ = lean_ctor_get(v___x_2292_, 4);
v_rewriteFires_2297_ = lean_ctor_get(v___x_2292_, 5);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2306_ == 0)
{
lean_object* v_unused_2307_; 
v_unused_2307_ = lean_ctor_get(v___x_2292_, 0);
lean_dec(v_unused_2307_);
v___x_2299_ = v___x_2292_;
v_isShared_2300_ = v_isSharedCheck_2306_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_rewriteFires_2297_);
lean_inc(v_diag_2296_);
lean_inc(v_postponed_2295_);
lean_inc(v_zetaDeltaFVarIds_2294_);
lean_inc(v_cache_2293_);
lean_dec(v___x_2292_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2306_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v_snd_2291_);
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_snd_2291_);
lean_ctor_set(v_reuseFailAlloc_2305_, 1, v_cache_2293_);
lean_ctor_set(v_reuseFailAlloc_2305_, 2, v_zetaDeltaFVarIds_2294_);
lean_ctor_set(v_reuseFailAlloc_2305_, 3, v_postponed_2295_);
lean_ctor_set(v_reuseFailAlloc_2305_, 4, v_diag_2296_);
lean_ctor_set(v_reuseFailAlloc_2305_, 5, v_rewriteFires_2297_);
v___x_2302_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_st_ref_put(v___y_2283_, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v_fst_2290_);
return v___x_2304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object* v_e_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2308_, v___y_2309_);
lean_dec(v___y_2309_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object* v_e_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2312_, v___y_2314_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object* v_e_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(v_e_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object* v_x_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
v___x_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object* v_x_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Lean_Meta_etaStructReduce___lam__0(v_x_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
lean_dec_ref(v_x_2336_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object* v_p_2343_, lean_object* v_e_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_Meta_etaStruct_x3f(v_e_2344_, v_p_2343_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2370_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2353_ = v___x_2350_;
v_isShared_2354_ = v_isSharedCheck_2370_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2350_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2370_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
if (lean_obj_tag(v_a_2351_) == 1)
{
lean_object* v_val_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2365_; 
v_val_2355_ = lean_ctor_get(v_a_2351_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_a_2351_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2357_ = v_a_2351_;
v_isShared_2358_ = v_isSharedCheck_2365_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_val_2355_);
lean_dec(v_a_2351_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2365_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set_tag(v___x_2357_, 0);
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_val_2355_);
v___x_2360_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2362_; 
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2360_);
v___x_2362_ = v___x_2353_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v___x_2366_; lean_object* v___x_2368_; 
lean_dec(v_a_2351_);
v___x_2366_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2366_);
v___x_2368_ = v___x_2353_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_a_2371_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2350_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2350_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object* v_p_2379_, lean_object* v_e_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_Meta_etaStructReduce___lam__1(v_p_2379_, v_e_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object* v_00_u03b1_2387_, lean_object* v_x_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_apply_1(v_x_2388_, lean_box(0));
v___x_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2396_, lean_object* v_x_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(v_00_u03b1_2396_, v_x_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_2404_, lean_object* v_b_2405_, lean_object* v_x_2406_){
_start:
{
if (lean_obj_tag(v_x_2406_) == 0)
{
lean_dec(v_b_2405_);
lean_dec_ref(v_a_2404_);
return v_x_2406_;
}
else
{
lean_object* v_key_2407_; lean_object* v_value_2408_; lean_object* v_tail_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2421_; 
v_key_2407_ = lean_ctor_get(v_x_2406_, 0);
v_value_2408_ = lean_ctor_get(v_x_2406_, 1);
v_tail_2409_ = lean_ctor_get(v_x_2406_, 2);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_x_2406_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2411_ = v_x_2406_;
v_isShared_2412_ = v_isSharedCheck_2421_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_tail_2409_);
lean_inc(v_value_2408_);
lean_inc(v_key_2407_);
lean_dec(v_x_2406_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2421_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
uint8_t v___x_2413_; 
v___x_2413_ = l_Lean_ExprStructEq_beq(v_key_2407_, v_a_2404_);
if (v___x_2413_ == 0)
{
lean_object* v___x_2414_; lean_object* v___x_2416_; 
v___x_2414_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2404_, v_b_2405_, v_tail_2409_);
if (v_isShared_2412_ == 0)
{
lean_ctor_set(v___x_2411_, 2, v___x_2414_);
v___x_2416_ = v___x_2411_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_key_2407_);
lean_ctor_set(v_reuseFailAlloc_2417_, 1, v_value_2408_);
lean_ctor_set(v_reuseFailAlloc_2417_, 2, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
else
{
lean_object* v___x_2419_; 
lean_dec(v_value_2408_);
lean_dec(v_key_2407_);
if (v_isShared_2412_ == 0)
{
lean_ctor_set(v___x_2411_, 1, v_b_2405_);
lean_ctor_set(v___x_2411_, 0, v_a_2404_);
v___x_2419_ = v___x_2411_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2404_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_b_2405_);
lean_ctor_set(v_reuseFailAlloc_2420_, 2, v_tail_2409_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_2422_, lean_object* v_x_2423_){
_start:
{
if (lean_obj_tag(v_x_2423_) == 0)
{
return v_x_2422_;
}
else
{
lean_object* v_key_2424_; lean_object* v_value_2425_; lean_object* v_tail_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2449_; 
v_key_2424_ = lean_ctor_get(v_x_2423_, 0);
v_value_2425_ = lean_ctor_get(v_x_2423_, 1);
v_tail_2426_ = lean_ctor_get(v_x_2423_, 2);
v_isSharedCheck_2449_ = !lean_is_exclusive(v_x_2423_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2428_ = v_x_2423_;
v_isShared_2429_ = v_isSharedCheck_2449_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_tail_2426_);
lean_inc(v_value_2425_);
lean_inc(v_key_2424_);
lean_dec(v_x_2423_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2449_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; uint64_t v___x_2431_; uint64_t v___x_2432_; uint64_t v___x_2433_; uint64_t v_fold_2434_; uint64_t v___x_2435_; uint64_t v___x_2436_; uint64_t v___x_2437_; size_t v___x_2438_; size_t v___x_2439_; size_t v___x_2440_; size_t v___x_2441_; size_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2445_; 
v___x_2430_ = lean_array_get_size(v_x_2422_);
v___x_2431_ = l_Lean_ExprStructEq_hash(v_key_2424_);
v___x_2432_ = 32ULL;
v___x_2433_ = lean_uint64_shift_right(v___x_2431_, v___x_2432_);
v_fold_2434_ = lean_uint64_xor(v___x_2431_, v___x_2433_);
v___x_2435_ = 16ULL;
v___x_2436_ = lean_uint64_shift_right(v_fold_2434_, v___x_2435_);
v___x_2437_ = lean_uint64_xor(v_fold_2434_, v___x_2436_);
v___x_2438_ = lean_uint64_to_usize(v___x_2437_);
v___x_2439_ = lean_usize_of_nat(v___x_2430_);
v___x_2440_ = ((size_t)1ULL);
v___x_2441_ = lean_usize_sub(v___x_2439_, v___x_2440_);
v___x_2442_ = lean_usize_land(v___x_2438_, v___x_2441_);
v___x_2443_ = lean_array_uget_borrowed(v_x_2422_, v___x_2442_);
lean_inc(v___x_2443_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 2, v___x_2443_);
v___x_2445_ = v___x_2428_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_key_2424_);
lean_ctor_set(v_reuseFailAlloc_2448_, 1, v_value_2425_);
lean_ctor_set(v_reuseFailAlloc_2448_, 2, v___x_2443_);
v___x_2445_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_array_uset(v_x_2422_, v___x_2442_, v___x_2445_);
v_x_2422_ = v___x_2446_;
v_x_2423_ = v_tail_2426_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2450_, lean_object* v_source_2451_, lean_object* v_target_2452_){
_start:
{
lean_object* v___x_2453_; uint8_t v___x_2454_; 
v___x_2453_ = lean_array_get_size(v_source_2451_);
v___x_2454_ = lean_nat_dec_lt(v_i_2450_, v___x_2453_);
if (v___x_2454_ == 0)
{
lean_dec_ref(v_source_2451_);
lean_dec(v_i_2450_);
return v_target_2452_;
}
else
{
lean_object* v_es_2455_; lean_object* v___x_2456_; lean_object* v_source_2457_; lean_object* v_target_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_es_2455_ = lean_array_fget(v_source_2451_, v_i_2450_);
v___x_2456_ = lean_box(0);
v_source_2457_ = lean_array_fset(v_source_2451_, v_i_2450_, v___x_2456_);
v_target_2458_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2452_, v_es_2455_);
v___x_2459_ = lean_unsigned_to_nat(1u);
v___x_2460_ = lean_nat_add(v_i_2450_, v___x_2459_);
lean_dec(v_i_2450_);
v_i_2450_ = v___x_2460_;
v_source_2451_ = v_source_2457_;
v_target_2452_ = v_target_2458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2462_){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v_nbuckets_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2463_ = lean_array_get_size(v_data_2462_);
v___x_2464_ = lean_unsigned_to_nat(2u);
v_nbuckets_2465_ = lean_nat_mul(v___x_2463_, v___x_2464_);
v___x_2466_ = lean_unsigned_to_nat(0u);
v___x_2467_ = lean_box(0);
v___x_2468_ = lean_mk_array(v_nbuckets_2465_, v___x_2467_);
v___x_2469_ = lean_array_propagate_mark(v_data_2462_, v___x_2468_);
v___x_2470_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2466_, v_data_2462_, v___x_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_2471_, lean_object* v_x_2472_){
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
lean_object* v_key_2474_; lean_object* v_tail_2475_; uint8_t v___x_2476_; 
v_key_2474_ = lean_ctor_get(v_x_2472_, 0);
v_tail_2475_ = lean_ctor_get(v_x_2472_, 2);
v___x_2476_ = l_Lean_ExprStructEq_beq(v_key_2474_, v_a_2471_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_2478_, lean_object* v_x_2479_){
_start:
{
uint8_t v_res_2480_; lean_object* v_r_2481_; 
v_res_2480_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2478_, v_x_2479_);
lean_dec(v_x_2479_);
lean_dec_ref(v_a_2478_);
v_r_2481_ = lean_box(v_res_2480_);
return v_r_2481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2482_, lean_object* v_a_2483_, lean_object* v_b_2484_){
_start:
{
lean_object* v_size_2485_; lean_object* v_buckets_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2529_; 
v_size_2485_ = lean_ctor_get(v_m_2482_, 0);
v_buckets_2486_ = lean_ctor_get(v_m_2482_, 1);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_m_2482_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2488_ = v_m_2482_;
v_isShared_2489_ = v_isSharedCheck_2529_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_buckets_2486_);
lean_inc(v_size_2485_);
lean_dec(v_m_2482_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2529_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; uint64_t v___x_2491_; uint64_t v___x_2492_; uint64_t v___x_2493_; uint64_t v_fold_2494_; uint64_t v___x_2495_; uint64_t v___x_2496_; uint64_t v___x_2497_; size_t v___x_2498_; size_t v___x_2499_; size_t v___x_2500_; size_t v___x_2501_; size_t v___x_2502_; lean_object* v_bkt_2503_; uint8_t v___x_2504_; 
v___x_2490_ = lean_array_get_size(v_buckets_2486_);
v___x_2491_ = l_Lean_ExprStructEq_hash(v_a_2483_);
v___x_2492_ = 32ULL;
v___x_2493_ = lean_uint64_shift_right(v___x_2491_, v___x_2492_);
v_fold_2494_ = lean_uint64_xor(v___x_2491_, v___x_2493_);
v___x_2495_ = 16ULL;
v___x_2496_ = lean_uint64_shift_right(v_fold_2494_, v___x_2495_);
v___x_2497_ = lean_uint64_xor(v_fold_2494_, v___x_2496_);
v___x_2498_ = lean_uint64_to_usize(v___x_2497_);
v___x_2499_ = lean_usize_of_nat(v___x_2490_);
v___x_2500_ = ((size_t)1ULL);
v___x_2501_ = lean_usize_sub(v___x_2499_, v___x_2500_);
v___x_2502_ = lean_usize_land(v___x_2498_, v___x_2501_);
v_bkt_2503_ = lean_array_uget_borrowed(v_buckets_2486_, v___x_2502_);
v___x_2504_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2483_, v_bkt_2503_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; lean_object* v_size_x27_2506_; lean_object* v___x_2507_; lean_object* v_buckets_x27_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2505_ = lean_unsigned_to_nat(1u);
v_size_x27_2506_ = lean_nat_add(v_size_2485_, v___x_2505_);
lean_dec(v_size_2485_);
lean_inc(v_bkt_2503_);
v___x_2507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2507_, 0, v_a_2483_);
lean_ctor_set(v___x_2507_, 1, v_b_2484_);
lean_ctor_set(v___x_2507_, 2, v_bkt_2503_);
v_buckets_x27_2508_ = lean_array_uset(v_buckets_2486_, v___x_2502_, v___x_2507_);
v___x_2509_ = lean_unsigned_to_nat(4u);
v___x_2510_ = lean_nat_mul(v_size_x27_2506_, v___x_2509_);
v___x_2511_ = lean_unsigned_to_nat(3u);
v___x_2512_ = lean_nat_div(v___x_2510_, v___x_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_array_get_size(v_buckets_x27_2508_);
v___x_2514_ = lean_nat_dec_le(v___x_2512_, v___x_2513_);
lean_dec(v___x_2512_);
if (v___x_2514_ == 0)
{
lean_object* v_val_2515_; lean_object* v___x_2517_; 
v_val_2515_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2508_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v_val_2515_);
lean_ctor_set(v___x_2488_, 0, v_size_x27_2506_);
v___x_2517_ = v___x_2488_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_size_x27_2506_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v_val_2515_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
else
{
lean_object* v___x_2520_; 
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v_buckets_x27_2508_);
lean_ctor_set(v___x_2488_, 0, v_size_x27_2506_);
v___x_2520_ = v___x_2488_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_size_x27_2506_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v_buckets_x27_2508_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
else
{
lean_object* v___x_2522_; lean_object* v_buckets_x27_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2527_; 
lean_inc(v_bkt_2503_);
v___x_2522_ = lean_box(0);
v_buckets_x27_2523_ = lean_array_uset(v_buckets_2486_, v___x_2502_, v___x_2522_);
v___x_2524_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2483_, v_b_2484_, v_bkt_2503_);
v___x_2525_ = lean_array_uset(v_buckets_x27_2523_, v___x_2502_, v___x_2524_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v___x_2525_);
v___x_2527_ = v___x_2488_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_size_2485_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object* v_a_2530_, lean_object* v_e_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2534_ = lean_st_ref_take(v_a_2530_);
v___x_2535_ = lean_box(0);
v___x_2536_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v___x_2534_, v_e_2531_, v_a_2532_);
v___x_2537_ = lean_st_ref_put(v_a_2530_, v___x_2536_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2538_, lean_object* v_e_2539_, lean_object* v_a_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(v_a_2538_, v_e_2539_, v_a_2540_);
lean_dec(v_a_2538_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2543_, lean_object* v_x_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_apply_1(v_x_2544_, lean_box(0));
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2552_, lean_object* v_x_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(v_00_u03b1_2552_, v_x_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_2560_, lean_object* v_x_2561_){
_start:
{
if (lean_obj_tag(v_x_2561_) == 0)
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_box(0);
return v___x_2562_;
}
else
{
lean_object* v_key_2563_; lean_object* v_value_2564_; lean_object* v_tail_2565_; uint8_t v___x_2566_; 
v_key_2563_ = lean_ctor_get(v_x_2561_, 0);
v_value_2564_ = lean_ctor_get(v_x_2561_, 1);
v_tail_2565_ = lean_ctor_get(v_x_2561_, 2);
v___x_2566_ = l_Lean_ExprStructEq_beq(v_key_2563_, v_a_2560_);
if (v___x_2566_ == 0)
{
v_x_2561_ = v_tail_2565_;
goto _start;
}
else
{
lean_object* v___x_2568_; 
lean_inc(v_value_2564_);
v___x_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2568_, 0, v_value_2564_);
return v___x_2568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_2569_, lean_object* v_x_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2569_, v_x_2570_);
lean_dec(v_x_2570_);
lean_dec_ref(v_a_2569_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object* v_m_2572_, lean_object* v_a_2573_){
_start:
{
lean_object* v_buckets_2574_; lean_object* v___x_2575_; uint64_t v___x_2576_; uint64_t v___x_2577_; uint64_t v___x_2578_; uint64_t v_fold_2579_; uint64_t v___x_2580_; uint64_t v___x_2581_; uint64_t v___x_2582_; size_t v___x_2583_; size_t v___x_2584_; size_t v___x_2585_; size_t v___x_2586_; size_t v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v_buckets_2574_ = lean_ctor_get(v_m_2572_, 1);
v___x_2575_ = lean_array_get_size(v_buckets_2574_);
v___x_2576_ = l_Lean_ExprStructEq_hash(v_a_2573_);
v___x_2577_ = 32ULL;
v___x_2578_ = lean_uint64_shift_right(v___x_2576_, v___x_2577_);
v_fold_2579_ = lean_uint64_xor(v___x_2576_, v___x_2578_);
v___x_2580_ = 16ULL;
v___x_2581_ = lean_uint64_shift_right(v_fold_2579_, v___x_2580_);
v___x_2582_ = lean_uint64_xor(v_fold_2579_, v___x_2581_);
v___x_2583_ = lean_uint64_to_usize(v___x_2582_);
v___x_2584_ = lean_usize_of_nat(v___x_2575_);
v___x_2585_ = ((size_t)1ULL);
v___x_2586_ = lean_usize_sub(v___x_2584_, v___x_2585_);
v___x_2587_ = lean_usize_land(v___x_2583_, v___x_2586_);
v___x_2588_ = lean_array_uget_borrowed(v_buckets_2574_, v___x_2587_);
v___x_2589_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2573_, v___x_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_2590_, v_a_2591_);
lean_dec_ref(v_a_2591_);
lean_dec_ref(v_m_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_2593_, lean_object* v___y_2594_, lean_object* v_b_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v___x_2601_; 
lean_inc(v___y_2599_);
lean_inc_ref(v___y_2598_);
lean_inc(v___y_2597_);
lean_inc_ref(v___y_2596_);
lean_inc(v___y_2594_);
v___x_2601_ = lean_apply_7(v_k_2593_, v_b_2595_, v___y_2594_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, lean_box(0));
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_2602_, lean_object* v___y_2603_, lean_object* v_b_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_2602_, v___y_2603_, v_b_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2603_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_2611_, uint8_t v_bi_2612_, lean_object* v_type_2613_, lean_object* v_k_2614_, uint8_t v_kind_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v___f_2622_; lean_object* v___x_2623_; 
lean_inc(v___y_2616_);
v___f_2622_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2622_, 0, v_k_2614_);
lean_closure_set(v___f_2622_, 1, v___y_2616_);
v___x_2623_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2611_, v_bi_2612_, v_type_2613_, v___f_2622_, v_kind_2615_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
if (lean_obj_tag(v___x_2623_) == 0)
{
return v___x_2623_;
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_2632_, lean_object* v_bi_2633_, lean_object* v_type_2634_, lean_object* v_k_2635_, lean_object* v_kind_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
uint8_t v_bi_boxed_2643_; uint8_t v_kind_boxed_2644_; lean_object* v_res_2645_; 
v_bi_boxed_2643_ = lean_unbox(v_bi_2633_);
v_kind_boxed_2644_ = lean_unbox(v_kind_2636_);
v_res_2645_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_2632_, v_bi_boxed_2643_, v_type_2634_, v_k_2635_, v_kind_boxed_2644_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec(v___y_2637_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2646_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_2660_, lean_object* v_type_2661_, lean_object* v_val_2662_, lean_object* v_k_2663_, uint8_t v_nondep_2664_, uint8_t v_kind_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_){
_start:
{
lean_object* v___f_2672_; lean_object* v___x_2673_; 
lean_inc(v___y_2666_);
v___f_2672_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2672_, 0, v_k_2663_);
lean_closure_set(v___f_2672_, 1, v___y_2666_);
v___x_2673_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2660_, v_type_2661_, v_val_2662_, v___f_2672_, v_nondep_2664_, v_kind_2665_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
if (lean_obj_tag(v___x_2673_) == 0)
{
return v___x_2673_;
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_2682_, lean_object* v_type_2683_, lean_object* v_val_2684_, lean_object* v_k_2685_, lean_object* v_nondep_2686_, lean_object* v_kind_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
uint8_t v_nondep_boxed_2694_; uint8_t v_kind_boxed_2695_; lean_object* v_res_2696_; 
v_nondep_boxed_2694_ = lean_unbox(v_nondep_2686_);
v_kind_boxed_2695_ = lean_unbox(v_kind_2687_);
v_res_2696_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_2682_, v_type_2683_, v_val_2684_, v_k_2685_, v_nondep_boxed_2694_, v_kind_boxed_2695_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
return v_res_2696_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = l_Lean_maxRecDepthErrorMessage;
v___x_2703_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2702_);
return v___x_2703_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_2705_ = l_Lean_MessageData_ofFormat(v___x_2704_);
return v___x_2705_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2706_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_2707_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2));
v___x_2708_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2707_);
lean_ctor_set(v___x_2708_, 1, v___x_2706_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_2709_){
_start:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2711_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v_ref_2709_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2714_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object* v_x_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v___y_2725_; lean_object* v_toCold_2734_; lean_object* v_currRecDepth_2735_; lean_object* v_ref_2736_; uint16_t v_optionFlags_2737_; uint8_t v_suppressElabErrors_2738_; uint8_t v_isRecordingDeps_2739_; lean_object* v_maxRecDepth_2745_; lean_object* v___x_2746_; uint8_t v___x_2747_; 
v_toCold_2734_ = lean_ctor_get(v___y_2721_, 0);
v_currRecDepth_2735_ = lean_ctor_get(v___y_2721_, 1);
v_ref_2736_ = lean_ctor_get(v___y_2721_, 2);
v_optionFlags_2737_ = lean_ctor_get_uint16(v___y_2721_, sizeof(void*)*3);
v_suppressElabErrors_2738_ = lean_ctor_get_uint8(v___y_2721_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2739_ = lean_ctor_get_uint8(v___y_2721_, sizeof(void*)*3 + 3);
v_maxRecDepth_2745_ = lean_ctor_get(v_toCold_2734_, 3);
v___x_2746_ = lean_unsigned_to_nat(0u);
v___x_2747_ = lean_nat_dec_eq(v_maxRecDepth_2745_, v___x_2746_);
if (v___x_2747_ == 0)
{
uint8_t v___x_2748_; 
v___x_2748_ = lean_nat_dec_eq(v_currRecDepth_2735_, v_maxRecDepth_2745_);
if (v___x_2748_ == 0)
{
goto v___jp_2740_;
}
else
{
lean_object* v___x_2749_; 
lean_dec_ref(v_x_2717_);
lean_inc(v_ref_2736_);
v___x_2749_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2736_);
v___y_2725_ = v___x_2749_;
goto v___jp_2724_;
}
}
else
{
goto v___jp_2740_;
}
v___jp_2724_:
{
if (lean_obj_tag(v___y_2725_) == 0)
{
return v___y_2725_;
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_a_2726_ = lean_ctor_get(v___y_2725_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___y_2725_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___y_2725_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___y_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
v___jp_2740_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2741_ = lean_unsigned_to_nat(1u);
v___x_2742_ = lean_nat_add(v_currRecDepth_2735_, v___x_2741_);
lean_inc(v_ref_2736_);
lean_inc_ref(v_toCold_2734_);
v___x_2743_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2743_, 0, v_toCold_2734_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
lean_ctor_set(v___x_2743_, 2, v_ref_2736_);
lean_ctor_set_uint16(v___x_2743_, sizeof(void*)*3, v_optionFlags_2737_);
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*3 + 2, v_suppressElabErrors_2738_);
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*3 + 3, v_isRecordingDeps_2739_);
lean_inc(v___y_2722_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2718_);
v___x_2744_ = lean_apply_6(v_x_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___x_2743_, v___y_2722_, lean_box(0));
v___y_2725_ = v___x_2744_;
goto v___jp_2724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v_res_2757_; 
v_res_2757_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_);
lean_dec(v___y_2755_);
lean_dec_ref(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec_ref(v___y_2752_);
lean_dec(v___y_2751_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_2758_, lean_object* v_pre_2759_, lean_object* v_post_2760_, lean_object* v_usedLetOnly_2761_, lean_object* v_skipConstInApp_2762_, lean_object* v_skipInstances_2763_, lean_object* v_body_2764_, lean_object* v_x_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
uint8_t v_usedLetOnly_boxed_2772_; uint8_t v_skipConstInApp_boxed_2773_; uint8_t v_skipInstances_boxed_2774_; lean_object* v_res_2775_; 
v_usedLetOnly_boxed_2772_ = lean_unbox(v_usedLetOnly_2761_);
v_skipConstInApp_boxed_2773_ = lean_unbox(v_skipConstInApp_2762_);
v_skipInstances_boxed_2774_ = lean_unbox(v_skipInstances_2763_);
v_res_2775_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_2758_, v_pre_2759_, v_post_2760_, v_usedLetOnly_boxed_2772_, v_skipConstInApp_boxed_2773_, v_skipInstances_boxed_2774_, v_body_2764_, v_x_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2779_, lean_object* v_pre_2780_, lean_object* v_post_2781_, uint8_t v_usedLetOnly_2782_, uint8_t v_skipConstInApp_2783_, uint8_t v_skipInstances_2784_, lean_object* v_body_2785_, lean_object* v_x_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = lean_array_push(v_fvars_2779_, v_x_2786_);
v___x_2794_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_2780_, v_post_2781_, v_usedLetOnly_2782_, v_skipConstInApp_2783_, v_skipInstances_2784_, v___x_2793_, v_body_2785_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2795_, lean_object* v_pre_2796_, lean_object* v_post_2797_, lean_object* v_usedLetOnly_2798_, lean_object* v_skipConstInApp_2799_, lean_object* v_skipInstances_2800_, lean_object* v_body_2801_, lean_object* v_x_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
uint8_t v_usedLetOnly_boxed_2809_; uint8_t v_skipConstInApp_boxed_2810_; uint8_t v_skipInstances_boxed_2811_; lean_object* v_res_2812_; 
v_usedLetOnly_boxed_2809_ = lean_unbox(v_usedLetOnly_2798_);
v_skipConstInApp_boxed_2810_ = lean_unbox(v_skipConstInApp_2799_);
v_skipInstances_boxed_2811_ = lean_unbox(v_skipInstances_2800_);
v_res_2812_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_2795_, v_pre_2796_, v_post_2797_, v_usedLetOnly_boxed_2809_, v_skipConstInApp_boxed_2810_, v_skipInstances_boxed_2811_, v_body_2801_, v_x_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
lean_dec(v___y_2803_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object* v_pre_2813_, lean_object* v_post_2814_, uint8_t v_usedLetOnly_2815_, uint8_t v_skipConstInApp_2816_, uint8_t v_skipInstances_2817_, lean_object* v_e_2818_, lean_object* v_a_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v___x_2825_; 
lean_inc_ref(v_post_2814_);
lean_inc(v___y_2823_);
lean_inc_ref(v___y_2822_);
lean_inc(v___y_2821_);
lean_inc_ref(v___y_2820_);
lean_inc_ref(v_e_2818_);
v___x_2825_ = lean_apply_6(v_post_2814_, v_e_2818_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, lean_box(0));
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2844_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2828_ = v___x_2825_;
v_isShared_2829_ = v_isSharedCheck_2844_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2825_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2844_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
switch(lean_obj_tag(v_a_2826_))
{
case 0:
{
lean_object* v_e_2830_; lean_object* v___x_2832_; 
lean_dec_ref(v_e_2818_);
lean_dec_ref(v_post_2814_);
lean_dec_ref(v_pre_2813_);
v_e_2830_ = lean_ctor_get(v_a_2826_, 0);
lean_inc_ref(v_e_2830_);
lean_dec_ref_known(v_a_2826_, 1);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v_e_2830_);
v___x_2832_ = v___x_2828_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_e_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
case 1:
{
lean_object* v_e_2834_; lean_object* v___x_2835_; 
lean_del_object(v___x_2828_);
lean_dec_ref(v_e_2818_);
v_e_2834_ = lean_ctor_get(v_a_2826_, 0);
lean_inc_ref(v_e_2834_);
lean_dec_ref_known(v_a_2826_, 1);
v___x_2835_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2813_, v_post_2814_, v_usedLetOnly_2815_, v_skipConstInApp_2816_, v_skipInstances_2817_, v_e_2834_, v_a_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
return v___x_2835_;
}
default: 
{
lean_object* v_e_x3f_2836_; 
lean_dec_ref(v_post_2814_);
lean_dec_ref(v_pre_2813_);
v_e_x3f_2836_ = lean_ctor_get(v_a_2826_, 0);
lean_inc(v_e_x3f_2836_);
lean_dec_ref_known(v_a_2826_, 1);
if (lean_obj_tag(v_e_x3f_2836_) == 0)
{
lean_object* v___x_2838_; 
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v_e_2818_);
v___x_2838_ = v___x_2828_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_e_2818_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
else
{
lean_object* v_val_2840_; lean_object* v___x_2842_; 
lean_dec_ref(v_e_2818_);
v_val_2840_ = lean_ctor_get(v_e_x3f_2836_, 0);
lean_inc(v_val_2840_);
lean_dec_ref_known(v_e_x3f_2836_, 1);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v_val_2840_);
v___x_2842_ = v___x_2828_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_val_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
lean_dec_ref(v_e_2818_);
lean_dec_ref(v_post_2814_);
lean_dec_ref(v_pre_2813_);
v_a_2845_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2825_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2825_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object* v_pre_2853_, lean_object* v_post_2854_, uint8_t v_usedLetOnly_2855_, uint8_t v_skipConstInApp_2856_, uint8_t v_skipInstances_2857_, lean_object* v_fvars_2858_, lean_object* v_e_2859_, lean_object* v_a_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
if (lean_obj_tag(v_e_2859_) == 6)
{
lean_object* v_binderName_2866_; lean_object* v_binderType_2867_; lean_object* v_body_2868_; uint8_t v_binderInfo_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___f_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v_binderName_2866_ = lean_ctor_get(v_e_2859_, 0);
lean_inc(v_binderName_2866_);
v_binderType_2867_ = lean_ctor_get(v_e_2859_, 1);
lean_inc_ref(v_binderType_2867_);
v_body_2868_ = lean_ctor_get(v_e_2859_, 2);
lean_inc_ref(v_body_2868_);
v_binderInfo_2869_ = lean_ctor_get_uint8(v_e_2859_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2859_, 3);
v___x_2870_ = lean_box(v_usedLetOnly_2855_);
v___x_2871_ = lean_box(v_skipConstInApp_2856_);
v___x_2872_ = lean_box(v_skipInstances_2857_);
lean_inc_ref(v_post_2854_);
lean_inc_ref(v_pre_2853_);
lean_inc_ref(v_fvars_2858_);
v___f_2873_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2873_, 0, v_fvars_2858_);
lean_closure_set(v___f_2873_, 1, v_pre_2853_);
lean_closure_set(v___f_2873_, 2, v_post_2854_);
lean_closure_set(v___f_2873_, 3, v___x_2870_);
lean_closure_set(v___f_2873_, 4, v___x_2871_);
lean_closure_set(v___f_2873_, 5, v___x_2872_);
lean_closure_set(v___f_2873_, 6, v_body_2868_);
v___x_2874_ = lean_expr_instantiate_rev(v_binderType_2867_, v_fvars_2858_);
lean_dec_ref(v_fvars_2858_);
lean_dec_ref(v_binderType_2867_);
v___x_2875_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2853_, v_post_2854_, v_usedLetOnly_2855_, v_skipConstInApp_2856_, v_skipInstances_2857_, v___x_2874_, v_a_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref_known(v___x_2875_, 1);
v___x_2877_ = 0;
v___x_2878_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2866_, v_binderInfo_2869_, v_a_2876_, v___f_2873_, v___x_2877_, v_a_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2878_;
}
else
{
lean_dec_ref(v___f_2873_);
lean_dec(v_binderName_2866_);
return v___x_2875_;
}
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_expr_instantiate_rev(v_e_2859_, v_fvars_2858_);
lean_dec_ref(v_e_2859_);
lean_inc_ref(v_post_2854_);
lean_inc_ref(v_pre_2853_);
v___x_2880_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2853_, v_post_2854_, v_usedLetOnly_2855_, v_skipConstInApp_2856_, v_skipInstances_2857_, v___x_2879_, v_a_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; uint8_t v___x_2882_; uint8_t v___x_2883_; uint8_t v___x_2884_; lean_object* v___x_2885_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v___x_2882_ = 0;
v___x_2883_ = 1;
v___x_2884_ = 1;
v___x_2885_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2858_, v_a_2881_, v___x_2882_, v_usedLetOnly_2855_, v___x_2882_, v___x_2883_, v___x_2884_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
lean_dec_ref(v_fvars_2858_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2887_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2885_, 1);
v___x_2887_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2853_, v_post_2854_, v_usedLetOnly_2855_, v_skipConstInApp_2856_, v_skipInstances_2857_, v_a_2886_, v_a_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2887_;
}
else
{
lean_dec_ref(v_post_2854_);
lean_dec_ref(v_pre_2853_);
return v___x_2885_;
}
}
else
{
lean_dec_ref(v_fvars_2858_);
lean_dec_ref(v_post_2854_);
lean_dec_ref(v_pre_2853_);
return v___x_2880_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2888_, lean_object* v_pre_2889_, lean_object* v_post_2890_, uint8_t v_usedLetOnly_2891_, uint8_t v_skipConstInApp_2892_, uint8_t v_skipInstances_2893_, lean_object* v_body_2894_, lean_object* v_x_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = lean_array_push(v_fvars_2888_, v_x_2895_);
v___x_2903_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_2889_, v_post_2890_, v_usedLetOnly_2891_, v_skipConstInApp_2892_, v_skipInstances_2893_, v___x_2902_, v_body_2894_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2904_, lean_object* v_pre_2905_, lean_object* v_post_2906_, lean_object* v_usedLetOnly_2907_, lean_object* v_skipConstInApp_2908_, lean_object* v_skipInstances_2909_, lean_object* v_body_2910_, lean_object* v_x_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
uint8_t v_usedLetOnly_boxed_2918_; uint8_t v_skipConstInApp_boxed_2919_; uint8_t v_skipInstances_boxed_2920_; lean_object* v_res_2921_; 
v_usedLetOnly_boxed_2918_ = lean_unbox(v_usedLetOnly_2907_);
v_skipConstInApp_boxed_2919_ = lean_unbox(v_skipConstInApp_2908_);
v_skipInstances_boxed_2920_ = lean_unbox(v_skipInstances_2909_);
v_res_2921_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(v_fvars_2904_, v_pre_2905_, v_post_2906_, v_usedLetOnly_boxed_2918_, v_skipConstInApp_boxed_2919_, v_skipInstances_boxed_2920_, v_body_2910_, v_x_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object* v_pre_2922_, lean_object* v_post_2923_, uint8_t v_usedLetOnly_2924_, uint8_t v_skipConstInApp_2925_, uint8_t v_skipInstances_2926_, lean_object* v_fvars_2927_, lean_object* v_e_2928_, lean_object* v_a_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
if (lean_obj_tag(v_e_2928_) == 8)
{
lean_object* v_declName_2935_; lean_object* v_type_2936_; lean_object* v_value_2937_; lean_object* v_body_2938_; uint8_t v_nondep_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___f_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_declName_2935_ = lean_ctor_get(v_e_2928_, 0);
lean_inc(v_declName_2935_);
v_type_2936_ = lean_ctor_get(v_e_2928_, 1);
lean_inc_ref(v_type_2936_);
v_value_2937_ = lean_ctor_get(v_e_2928_, 2);
lean_inc_ref(v_value_2937_);
v_body_2938_ = lean_ctor_get(v_e_2928_, 3);
lean_inc_ref(v_body_2938_);
v_nondep_2939_ = lean_ctor_get_uint8(v_e_2928_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2928_, 4);
v___x_2940_ = lean_box(v_usedLetOnly_2924_);
v___x_2941_ = lean_box(v_skipConstInApp_2925_);
v___x_2942_ = lean_box(v_skipInstances_2926_);
lean_inc_ref_n(v_post_2923_, 2);
lean_inc_ref_n(v_pre_2922_, 2);
lean_inc_ref(v_fvars_2927_);
v___f_2943_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2943_, 0, v_fvars_2927_);
lean_closure_set(v___f_2943_, 1, v_pre_2922_);
lean_closure_set(v___f_2943_, 2, v_post_2923_);
lean_closure_set(v___f_2943_, 3, v___x_2940_);
lean_closure_set(v___f_2943_, 4, v___x_2941_);
lean_closure_set(v___f_2943_, 5, v___x_2942_);
lean_closure_set(v___f_2943_, 6, v_body_2938_);
v___x_2944_ = lean_expr_instantiate_rev(v_type_2936_, v_fvars_2927_);
lean_dec_ref(v_type_2936_);
v___x_2945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2922_, v_post_2923_, v_usedLetOnly_2924_, v_skipConstInApp_2925_, v_skipInstances_2926_, v___x_2944_, v_a_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref_known(v___x_2945_, 1);
v___x_2947_ = lean_expr_instantiate_rev(v_value_2937_, v_fvars_2927_);
lean_dec_ref(v_fvars_2927_);
lean_dec_ref(v_value_2937_);
v___x_2948_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2922_, v_post_2923_, v_usedLetOnly_2924_, v_skipConstInApp_2925_, v_skipInstances_2926_, v___x_2947_, v_a_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v_a_2949_; uint8_t v___x_2950_; lean_object* v___x_2951_; 
v_a_2949_ = lean_ctor_get(v___x_2948_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2948_, 1);
v___x_2950_ = 0;
v___x_2951_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2935_, v_a_2946_, v_a_2949_, v___f_2943_, v_nondep_2939_, v___x_2950_, v_a_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
return v___x_2951_;
}
else
{
lean_dec(v_a_2946_);
lean_dec_ref(v___f_2943_);
lean_dec(v_declName_2935_);
return v___x_2948_;
}
}
else
{
lean_dec_ref(v___f_2943_);
lean_dec_ref(v_value_2937_);
lean_dec(v_declName_2935_);
lean_dec_ref(v_fvars_2927_);
lean_dec_ref(v_post_2923_);
lean_dec_ref(v_pre_2922_);
return v___x_2945_;
}
}
else
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = lean_expr_instantiate_rev(v_e_2928_, v_fvars_2927_);
lean_dec_ref(v_e_2928_);
lean_inc_ref(v_post_2923_);
lean_inc_ref(v_pre_2922_);
v___x_2953_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2922_, v_post_2923_, v_usedLetOnly_2924_, v_skipConstInApp_2925_, v_skipInstances_2926_, v___x_2952_, v_a_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; uint8_t v___x_2955_; uint8_t v___x_2956_; lean_object* v___x_2957_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc(v_a_2954_);
lean_dec_ref_known(v___x_2953_, 1);
v___x_2955_ = 0;
v___x_2956_ = 1;
v___x_2957_ = l_Lean_Meta_mkLetFVars(v_fvars_2927_, v_a_2954_, v_usedLetOnly_2924_, v___x_2955_, v___x_2956_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
lean_dec_ref(v_fvars_2927_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2959_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2959_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2922_, v_post_2923_, v_usedLetOnly_2924_, v_skipConstInApp_2925_, v_skipInstances_2926_, v_a_2958_, v_a_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
return v___x_2959_;
}
else
{
lean_dec_ref(v_post_2923_);
lean_dec_ref(v_pre_2922_);
return v___x_2957_;
}
}
else
{
lean_dec_ref(v_fvars_2927_);
lean_dec_ref(v_post_2923_);
lean_dec_ref(v_pre_2922_);
return v___x_2953_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object* v_pre_2960_, lean_object* v_post_2961_, uint8_t v_usedLetOnly_2962_, uint8_t v_skipConstInApp_2963_, uint8_t v_skipInstances_2964_, size_t v_sz_2965_, size_t v_i_2966_, lean_object* v_bs_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
uint8_t v___x_2974_; 
v___x_2974_ = lean_usize_dec_lt(v_i_2966_, v_sz_2965_);
if (v___x_2974_ == 0)
{
lean_object* v___x_2975_; 
lean_dec_ref(v_post_2961_);
lean_dec_ref(v_pre_2960_);
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_bs_2967_);
return v___x_2975_;
}
else
{
lean_object* v_v_2976_; lean_object* v___x_2977_; lean_object* v_bs_x27_2978_; lean_object* v___x_2979_; 
v_v_2976_ = lean_array_uget(v_bs_2967_, v_i_2966_);
v___x_2977_ = lean_unsigned_to_nat(0u);
v_bs_x27_2978_ = lean_array_uset(v_bs_2967_, v_i_2966_, v___x_2977_);
lean_inc_ref(v_post_2961_);
lean_inc_ref(v_pre_2960_);
v___x_2979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2960_, v_post_2961_, v_usedLetOnly_2962_, v_skipConstInApp_2963_, v_skipInstances_2964_, v_v_2976_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; size_t v___x_2981_; size_t v___x_2982_; lean_object* v___x_2983_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc(v_a_2980_);
lean_dec_ref_known(v___x_2979_, 1);
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_add(v_i_2966_, v___x_2981_);
v___x_2983_ = lean_array_uset(v_bs_x27_2978_, v_i_2966_, v_a_2980_);
v_i_2966_ = v___x_2982_;
v_bs_2967_ = v___x_2983_;
goto _start;
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec_ref(v_bs_x27_2978_);
lean_dec_ref(v_post_2961_);
lean_dec_ref(v_pre_2960_);
v_a_2985_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2979_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2979_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_2993_, lean_object* v_post_2994_, uint8_t v_usedLetOnly_2995_, uint8_t v_skipConstInApp_2996_, uint8_t v_skipInstances_2997_, lean_object* v___x_2998_, lean_object* v___y_2999_, lean_object* v_b_3000_, lean_object* v_a_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v___x_3007_; 
v___x_3007_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2993_, v_post_2994_, v_usedLetOnly_2995_, v_skipConstInApp_2996_, v_skipInstances_2997_, v___x_2998_, v___y_2999_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3017_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3010_ = v___x_3007_;
v_isShared_3011_ = v_isSharedCheck_3017_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3007_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3017_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3015_; 
v___x_3012_ = lean_array_fset(v_b_3000_, v_a_3001_, v_a_3008_);
v___x_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3012_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 0, v___x_3013_);
v___x_3015_ = v___x_3010_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
else
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
lean_dec_ref(v_b_3000_);
v_a_3018_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3020_ = v___x_3007_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_3007_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3018_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3026_, lean_object* v_post_3027_, lean_object* v_usedLetOnly_3028_, lean_object* v_skipConstInApp_3029_, lean_object* v_skipInstances_3030_, lean_object* v___x_3031_, lean_object* v___y_3032_, lean_object* v_b_3033_, lean_object* v_a_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
uint8_t v_usedLetOnly_boxed_3040_; uint8_t v_skipConstInApp_boxed_3041_; uint8_t v_skipInstances_boxed_3042_; lean_object* v_res_3043_; 
v_usedLetOnly_boxed_3040_ = lean_unbox(v_usedLetOnly_3028_);
v_skipConstInApp_boxed_3041_ = lean_unbox(v_skipConstInApp_3029_);
v_skipInstances_boxed_3042_ = lean_unbox(v_skipInstances_3030_);
v_res_3043_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3026_, v_post_3027_, v_usedLetOnly_boxed_3040_, v_skipConstInApp_boxed_3041_, v_skipInstances_boxed_3042_, v___x_3031_, v___y_3032_, v_b_3033_, v_a_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_a_3034_);
lean_dec(v___y_3032_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3044_, lean_object* v___x_3045_, lean_object* v_pre_3046_, lean_object* v_post_3047_, uint8_t v_usedLetOnly_3048_, uint8_t v_skipConstInApp_3049_, uint8_t v_skipInstances_3050_, lean_object* v_a_3051_, lean_object* v_b_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___y_3060_; uint8_t v___x_3083_; 
v___x_3083_ = lean_nat_dec_lt(v_a_3051_, v_upperBound_3044_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; 
lean_dec(v_a_3051_);
lean_dec_ref(v_post_3047_);
lean_dec_ref(v_pre_3046_);
v___x_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3084_, 0, v_b_3052_);
return v___x_3084_;
}
else
{
lean_object* v___x_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
v___x_3085_ = lean_array_fget_borrowed(v_b_3052_, v_a_3051_);
v___x_3086_ = lean_array_get_size(v___x_3045_);
v___x_3087_ = lean_nat_dec_lt(v_a_3051_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___f_3091_; 
lean_inc(v___x_3085_);
v___x_3088_ = lean_box(v_usedLetOnly_3048_);
v___x_3089_ = lean_box(v_skipConstInApp_3049_);
v___x_3090_ = lean_box(v_skipInstances_3050_);
lean_inc(v_a_3051_);
lean_inc(v___y_3053_);
lean_inc_ref(v_post_3047_);
lean_inc_ref(v_pre_3046_);
v___f_3091_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3091_, 0, v_pre_3046_);
lean_closure_set(v___f_3091_, 1, v_post_3047_);
lean_closure_set(v___f_3091_, 2, v___x_3088_);
lean_closure_set(v___f_3091_, 3, v___x_3089_);
lean_closure_set(v___f_3091_, 4, v___x_3090_);
lean_closure_set(v___f_3091_, 5, v___x_3085_);
lean_closure_set(v___f_3091_, 6, v___y_3053_);
lean_closure_set(v___f_3091_, 7, v_b_3052_);
lean_closure_set(v___f_3091_, 8, v_a_3051_);
v___y_3060_ = v___f_3091_;
goto v___jp_3059_;
}
else
{
lean_object* v___x_3092_; uint8_t v_isInstance_3093_; 
v___x_3092_ = lean_array_fget_borrowed(v___x_3045_, v_a_3051_);
v_isInstance_3093_ = lean_ctor_get_uint8(v___x_3092_, sizeof(void*)*1 + 4);
if (v_isInstance_3093_ == 0)
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___f_3097_; 
lean_inc(v___x_3085_);
v___x_3094_ = lean_box(v_usedLetOnly_3048_);
v___x_3095_ = lean_box(v_skipConstInApp_3049_);
v___x_3096_ = lean_box(v_skipInstances_3050_);
lean_inc(v_a_3051_);
lean_inc(v___y_3053_);
lean_inc_ref(v_post_3047_);
lean_inc_ref(v_pre_3046_);
v___f_3097_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3097_, 0, v_pre_3046_);
lean_closure_set(v___f_3097_, 1, v_post_3047_);
lean_closure_set(v___f_3097_, 2, v___x_3094_);
lean_closure_set(v___f_3097_, 3, v___x_3095_);
lean_closure_set(v___f_3097_, 4, v___x_3096_);
lean_closure_set(v___f_3097_, 5, v___x_3085_);
lean_closure_set(v___f_3097_, 6, v___y_3053_);
lean_closure_set(v___f_3097_, 7, v_b_3052_);
lean_closure_set(v___f_3097_, 8, v_a_3051_);
v___y_3060_ = v___f_3097_;
goto v___jp_3059_;
}
else
{
lean_object* v___x_3098_; lean_object* v___f_3099_; 
v___x_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3098_, 0, v_b_3052_);
v___f_3099_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3099_, 0, v___x_3098_);
v___y_3060_ = v___f_3099_;
goto v___jp_3059_;
}
}
}
v___jp_3059_:
{
lean_object* v___x_3061_; 
lean_inc(v___y_3057_);
lean_inc_ref(v___y_3056_);
lean_inc(v___y_3055_);
lean_inc_ref(v___y_3054_);
v___x_3061_ = lean_apply_5(v___y_3060_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, lean_box(0));
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3074_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3064_ = v___x_3061_;
v_isShared_3065_ = v_isSharedCheck_3074_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3061_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3074_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
if (lean_obj_tag(v_a_3062_) == 0)
{
lean_object* v_a_3066_; lean_object* v___x_3068_; 
lean_dec(v_a_3051_);
lean_dec_ref(v_post_3047_);
lean_dec_ref(v_pre_3046_);
v_a_3066_ = lean_ctor_get(v_a_3062_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v_a_3062_, 1);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 0, v_a_3066_);
v___x_3068_ = v___x_3064_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
lean_del_object(v___x_3064_);
v_a_3070_ = lean_ctor_get(v_a_3062_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v_a_3062_, 1);
v___x_3071_ = lean_unsigned_to_nat(1u);
v___x_3072_ = lean_nat_add(v_a_3051_, v___x_3071_);
lean_dec(v_a_3051_);
v_a_3051_ = v___x_3072_;
v_b_3052_ = v_a_3070_;
goto _start;
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec(v_a_3051_);
lean_dec_ref(v_post_3047_);
lean_dec_ref(v_pre_3046_);
v_a_3075_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3061_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3061_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t v_skipInstances_3100_, lean_object* v_pre_3101_, lean_object* v_post_3102_, uint8_t v_usedLetOnly_3103_, uint8_t v_skipConstInApp_3104_, lean_object* v_x_3105_, lean_object* v_x_3106_, lean_object* v_x_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v_f_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; 
if (lean_obj_tag(v_x_3105_) == 5)
{
lean_object* v_fn_3163_; lean_object* v_arg_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_fn_3163_ = lean_ctor_get(v_x_3105_, 0);
lean_inc_ref(v_fn_3163_);
v_arg_3164_ = lean_ctor_get(v_x_3105_, 1);
lean_inc_ref(v_arg_3164_);
lean_dec_ref_known(v_x_3105_, 2);
v___x_3165_ = lean_array_set(v_x_3106_, v_x_3107_, v_arg_3164_);
v___x_3166_ = lean_unsigned_to_nat(1u);
v___x_3167_ = lean_nat_sub(v_x_3107_, v___x_3166_);
lean_dec(v_x_3107_);
v_x_3105_ = v_fn_3163_;
v_x_3106_ = v___x_3165_;
v_x_3107_ = v___x_3167_;
goto _start;
}
else
{
lean_dec(v_x_3107_);
if (v_skipConstInApp_3104_ == 0)
{
goto v___jp_3160_;
}
else
{
uint8_t v___x_3169_; 
v___x_3169_ = l_Lean_Expr_isConst(v_x_3105_);
if (v___x_3169_ == 0)
{
goto v___jp_3160_;
}
else
{
v_f_3115_ = v_x_3105_;
v___y_3116_ = v___y_3108_;
v___y_3117_ = v___y_3109_;
v___y_3118_ = v___y_3110_;
v___y_3119_ = v___y_3111_;
v___y_3120_ = v___y_3112_;
goto v___jp_3114_;
}
}
}
v___jp_3114_:
{
if (v_skipInstances_3100_ == 0)
{
size_t v_sz_3121_; size_t v___x_3122_; lean_object* v___x_3123_; 
v_sz_3121_ = lean_array_size(v_x_3106_);
v___x_3122_ = ((size_t)0ULL);
lean_inc_ref(v_post_3102_);
lean_inc_ref(v_pre_3101_);
v___x_3123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3101_, v_post_3102_, v_usedLetOnly_3103_, v_skipConstInApp_3104_, v_skipInstances_3100_, v_sz_3121_, v___x_3122_, v_x_3106_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v___x_3125_ = l_Lean_mkAppN(v_f_3115_, v_a_3124_);
lean_dec(v_a_3124_);
v___x_3126_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3101_, v_post_3102_, v_usedLetOnly_3103_, v_skipConstInApp_3104_, v_skipInstances_3100_, v___x_3125_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
return v___x_3126_;
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_dec_ref(v_f_3115_);
lean_dec_ref(v_post_3102_);
lean_dec_ref(v_pre_3101_);
v_a_3127_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_3123_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3123_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
else
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3135_ = lean_array_get_size(v_x_3106_);
lean_inc_ref(v_f_3115_);
v___x_3136_ = l_Lean_Meta_getFunInfoNArgs(v_f_3115_, v___x_3135_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v_paramInfo_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3136_, 1);
v_paramInfo_3138_ = lean_ctor_get(v_a_3137_, 0);
lean_inc_ref(v_paramInfo_3138_);
lean_dec(v_a_3137_);
v___x_3139_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3102_);
lean_inc_ref(v_pre_3101_);
v___x_3140_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v___x_3135_, v_paramInfo_3138_, v_pre_3101_, v_post_3102_, v_usedLetOnly_3103_, v_skipConstInApp_3104_, v_skipInstances_3100_, v___x_3139_, v_x_3106_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
lean_dec_ref(v_paramInfo_3138_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3140_, 1);
v___x_3142_ = l_Lean_mkAppN(v_f_3115_, v_a_3141_);
lean_dec(v_a_3141_);
v___x_3143_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3101_, v_post_3102_, v_usedLetOnly_3103_, v_skipConstInApp_3104_, v_skipInstances_3100_, v___x_3142_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
return v___x_3143_;
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref(v_f_3115_);
lean_dec_ref(v_post_3102_);
lean_dec_ref(v_pre_3101_);
v_a_3144_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3140_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3140_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec_ref(v_f_3115_);
lean_dec_ref(v_x_3106_);
lean_dec_ref(v_post_3102_);
lean_dec_ref(v_pre_3101_);
v_a_3152_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3136_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3136_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
v___jp_3160_:
{
lean_object* v___x_3161_; 
lean_inc_ref(v_post_3102_);
lean_inc_ref(v_pre_3101_);
v___x_3161_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3101_, v_post_3102_, v_usedLetOnly_3103_, v_skipConstInApp_3104_, v_skipInstances_3100_, v_x_3105_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v_a_3162_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
v_f_3115_ = v_a_3162_;
v___y_3116_ = v___y_3108_;
v___y_3117_ = v___y_3109_;
v___y_3118_ = v___y_3110_;
v___y_3119_ = v___y_3111_;
v___y_3120_ = v___y_3112_;
goto v___jp_3114_;
}
else
{
lean_dec_ref(v_x_3106_);
lean_dec_ref(v_post_3102_);
lean_dec_ref(v_pre_3101_);
return v___x_3161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object* v___x_3170_, lean_object* v_pre_3171_, lean_object* v_e_3172_, lean_object* v_post_3173_, uint8_t v_usedLetOnly_3174_, uint8_t v_skipConstInApp_3175_, uint8_t v_skipInstances_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Lean_Core_checkSystem(v___x_3170_, v___y_3180_, v___y_3181_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v___x_3184_; 
lean_dec_ref_known(v___x_3183_, 1);
lean_inc_ref(v_pre_3171_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
lean_inc(v___y_3179_);
lean_inc_ref(v___y_3178_);
lean_inc_ref(v_e_3172_);
v___x_3184_ = lean_apply_6(v_pre_3171_, v_e_3172_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_, lean_box(0));
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3233_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3187_ = v___x_3184_;
v_isShared_3188_ = v_isSharedCheck_3233_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3233_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___y_3190_; 
switch(lean_obj_tag(v_a_3185_))
{
case 0:
{
lean_object* v_e_3225_; lean_object* v___x_3227_; 
lean_dec_ref(v_post_3173_);
lean_dec_ref(v_e_3172_);
lean_dec_ref(v_pre_3171_);
v_e_3225_ = lean_ctor_get(v_a_3185_, 0);
lean_inc_ref(v_e_3225_);
lean_dec_ref_known(v_a_3185_, 1);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v_e_3225_);
v___x_3227_ = v___x_3187_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_e_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
case 1:
{
lean_object* v_e_3229_; lean_object* v___x_3230_; 
lean_del_object(v___x_3187_);
lean_dec_ref(v_e_3172_);
v_e_3229_ = lean_ctor_get(v_a_3185_, 0);
lean_inc_ref(v_e_3229_);
lean_dec_ref_known(v_a_3185_, 1);
v___x_3230_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v_e_3229_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3230_;
}
default: 
{
lean_object* v_e_x3f_3231_; 
lean_del_object(v___x_3187_);
v_e_x3f_3231_ = lean_ctor_get(v_a_3185_, 0);
lean_inc(v_e_x3f_3231_);
lean_dec_ref_known(v_a_3185_, 1);
if (lean_obj_tag(v_e_x3f_3231_) == 0)
{
v___y_3190_ = v_e_3172_;
goto v___jp_3189_;
}
else
{
lean_object* v_val_3232_; 
lean_dec_ref(v_e_3172_);
v_val_3232_ = lean_ctor_get(v_e_x3f_3231_, 0);
lean_inc(v_val_3232_);
lean_dec_ref_known(v_e_x3f_3231_, 1);
v___y_3190_ = v_val_3232_;
goto v___jp_3189_;
}
}
}
v___jp_3189_:
{
switch(lean_obj_tag(v___y_3190_))
{
case 7:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3191_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3192_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___x_3191_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3192_;
}
case 6:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3194_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___x_3193_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3194_;
}
case 8:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3196_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___x_3195_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3196_;
}
case 5:
{
lean_object* v_dummy_3197_; lean_object* v_nargs_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_dummy_3197_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_3198_ = l_Lean_Expr_getAppNumArgs(v___y_3190_);
lean_inc(v_nargs_3198_);
v___x_3199_ = lean_mk_array(v_nargs_3198_, v_dummy_3197_);
v___x_3200_ = lean_unsigned_to_nat(1u);
v___x_3201_ = lean_nat_sub(v_nargs_3198_, v___x_3200_);
lean_dec(v_nargs_3198_);
v___x_3202_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_3176_, v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v___y_3190_, v___x_3199_, v___x_3201_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3202_;
}
case 10:
{
lean_object* v_data_3203_; lean_object* v_expr_3204_; lean_object* v___x_3205_; 
v_data_3203_ = lean_ctor_get(v___y_3190_, 0);
v_expr_3204_ = lean_ctor_get(v___y_3190_, 1);
lean_inc_ref(v_expr_3204_);
lean_inc_ref(v_post_3173_);
lean_inc_ref(v_pre_3171_);
v___x_3205_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v_expr_3204_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; size_t v___x_3207_; size_t v___x_3208_; uint8_t v___x_3209_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3207_ = lean_ptr_addr(v_expr_3204_);
v___x_3208_ = lean_ptr_addr(v_a_3206_);
v___x_3209_ = lean_usize_dec_eq(v___x_3207_, v___x_3208_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_inc(v_data_3203_);
lean_dec_ref_known(v___y_3190_, 2);
v___x_3210_ = l_Lean_Expr_mdata___override(v_data_3203_, v_a_3206_);
v___x_3211_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___x_3210_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3211_;
}
else
{
lean_object* v___x_3212_; 
lean_dec(v_a_3206_);
v___x_3212_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3212_;
}
}
else
{
lean_dec_ref_known(v___y_3190_, 2);
lean_dec_ref(v_post_3173_);
lean_dec_ref(v_pre_3171_);
return v___x_3205_;
}
}
case 11:
{
lean_object* v_typeName_3213_; lean_object* v_idx_3214_; lean_object* v_struct_3215_; lean_object* v___x_3216_; 
v_typeName_3213_ = lean_ctor_get(v___y_3190_, 0);
v_idx_3214_ = lean_ctor_get(v___y_3190_, 1);
v_struct_3215_ = lean_ctor_get(v___y_3190_, 2);
lean_inc_ref(v_struct_3215_);
lean_inc_ref(v_post_3173_);
lean_inc_ref(v_pre_3171_);
v___x_3216_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v_struct_3215_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; size_t v___x_3218_; size_t v___x_3219_; uint8_t v___x_3220_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = lean_ptr_addr(v_struct_3215_);
v___x_3219_ = lean_ptr_addr(v_a_3217_);
v___x_3220_ = lean_usize_dec_eq(v___x_3218_, v___x_3219_);
if (v___x_3220_ == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
lean_inc(v_idx_3214_);
lean_inc(v_typeName_3213_);
lean_dec_ref_known(v___y_3190_, 3);
v___x_3221_ = l_Lean_Expr_proj___override(v_typeName_3213_, v_idx_3214_, v_a_3217_);
v___x_3222_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___x_3221_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3222_;
}
else
{
lean_object* v___x_3223_; 
lean_dec(v_a_3217_);
v___x_3223_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3223_;
}
}
else
{
lean_dec_ref_known(v___y_3190_, 3);
lean_dec_ref(v_post_3173_);
lean_dec_ref(v_pre_3171_);
return v___x_3216_;
}
}
default: 
{
lean_object* v___x_3224_; 
v___x_3224_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3171_, v_post_3173_, v_usedLetOnly_3174_, v_skipConstInApp_3175_, v_skipInstances_3176_, v___y_3190_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3224_;
}
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec_ref(v_post_3173_);
lean_dec_ref(v_e_3172_);
lean_dec_ref(v_pre_3171_);
v_a_3234_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3184_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3184_);
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
else
{
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3249_; 
lean_dec_ref(v_post_3173_);
lean_dec_ref(v_e_3172_);
lean_dec_ref(v_pre_3171_);
v_a_3242_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3244_ = v___x_3183_;
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3183_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3242_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_3250_, lean_object* v_pre_3251_, lean_object* v_e_3252_, lean_object* v_post_3253_, lean_object* v_usedLetOnly_3254_, lean_object* v_skipConstInApp_3255_, lean_object* v_skipInstances_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
uint8_t v_usedLetOnly_boxed_3263_; uint8_t v_skipConstInApp_boxed_3264_; uint8_t v_skipInstances_boxed_3265_; lean_object* v_res_3266_; 
v_usedLetOnly_boxed_3263_ = lean_unbox(v_usedLetOnly_3254_);
v_skipConstInApp_boxed_3264_ = lean_unbox(v_skipConstInApp_3255_);
v_skipInstances_boxed_3265_ = lean_unbox(v_skipInstances_3256_);
v_res_3266_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(v___x_3250_, v_pre_3251_, v_e_3252_, v_post_3253_, v_usedLetOnly_boxed_3263_, v_skipConstInApp_boxed_3264_, v_skipInstances_boxed_3265_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec(v___y_3257_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object* v_pre_3267_, lean_object* v_post_3268_, uint8_t v_usedLetOnly_3269_, uint8_t v_skipConstInApp_3270_, uint8_t v_skipInstances_3271_, lean_object* v_e_3272_, lean_object* v_a_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
lean_inc(v_a_3273_);
v___x_3279_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3279_, 0, lean_box(0));
lean_closure_set(v___x_3279_, 1, lean_box(0));
lean_closure_set(v___x_3279_, 2, v_a_3273_);
v___x_3280_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3279_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3315_; 
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3280_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3283_ = v___x_3280_;
v_isShared_3284_ = v_isSharedCheck_3315_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3280_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3315_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_a_3281_, v_e_3272_);
lean_dec(v_a_3281_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; 
lean_del_object(v___x_3283_);
v___x_3286_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0));
v___x_3287_ = lean_box(v_usedLetOnly_3269_);
v___x_3288_ = lean_box(v_skipConstInApp_3270_);
v___x_3289_ = lean_box(v_skipInstances_3271_);
lean_inc_ref(v_e_3272_);
v___f_3290_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3290_, 0, v___x_3286_);
lean_closure_set(v___f_3290_, 1, v_pre_3267_);
lean_closure_set(v___f_3290_, 2, v_e_3272_);
lean_closure_set(v___f_3290_, 3, v_post_3268_);
lean_closure_set(v___f_3290_, 4, v___x_3287_);
lean_closure_set(v___f_3290_, 5, v___x_3288_);
lean_closure_set(v___f_3290_, 6, v___x_3289_);
v___x_3291_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v___f_3290_, v_a_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc_n(v_a_3292_, 2);
lean_dec_ref_known(v___x_3291_, 1);
lean_inc(v_a_3273_);
v___f_3293_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3293_, 0, v_a_3273_);
lean_closure_set(v___f_3293_, 1, v_e_3272_);
lean_closure_set(v___f_3293_, 2, v_a_3292_);
v___x_3294_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3293_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3301_ == 0)
{
lean_object* v_unused_3302_; 
v_unused_3302_ = lean_ctor_get(v___x_3294_, 0);
lean_dec(v_unused_3302_);
v___x_3296_ = v___x_3294_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_dec(v___x_3294_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
lean_ctor_set(v___x_3296_, 0, v_a_3292_);
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3292_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
else
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
lean_dec(v_a_3292_);
v_a_3303_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3305_ = v___x_3294_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3294_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3303_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
else
{
lean_dec_ref(v_e_3272_);
return v___x_3291_;
}
}
else
{
lean_object* v_val_3311_; lean_object* v___x_3313_; 
lean_dec_ref(v_e_3272_);
lean_dec_ref(v_post_3268_);
lean_dec_ref(v_pre_3267_);
v_val_3311_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_val_3311_);
lean_dec_ref_known(v___x_3285_, 1);
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 0, v_val_3311_);
v___x_3313_ = v___x_3283_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_val_3311_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3323_; 
lean_dec_ref(v_e_3272_);
lean_dec_ref(v_post_3268_);
lean_dec_ref(v_pre_3267_);
v_a_3316_ = lean_ctor_get(v___x_3280_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3280_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3318_ = v___x_3280_;
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3280_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3323_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3316_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3324_, lean_object* v_post_3325_, uint8_t v_usedLetOnly_3326_, uint8_t v_skipConstInApp_3327_, uint8_t v_skipInstances_3328_, lean_object* v_fvars_3329_, lean_object* v_e_3330_, lean_object* v_a_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
if (lean_obj_tag(v_e_3330_) == 7)
{
lean_object* v_binderName_3337_; lean_object* v_binderType_3338_; lean_object* v_body_3339_; uint8_t v_binderInfo_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___f_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v_binderName_3337_ = lean_ctor_get(v_e_3330_, 0);
lean_inc(v_binderName_3337_);
v_binderType_3338_ = lean_ctor_get(v_e_3330_, 1);
lean_inc_ref(v_binderType_3338_);
v_body_3339_ = lean_ctor_get(v_e_3330_, 2);
lean_inc_ref(v_body_3339_);
v_binderInfo_3340_ = lean_ctor_get_uint8(v_e_3330_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3330_, 3);
v___x_3341_ = lean_box(v_usedLetOnly_3326_);
v___x_3342_ = lean_box(v_skipConstInApp_3327_);
v___x_3343_ = lean_box(v_skipInstances_3328_);
lean_inc_ref(v_post_3325_);
lean_inc_ref(v_pre_3324_);
lean_inc_ref(v_fvars_3329_);
v___f_3344_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3344_, 0, v_fvars_3329_);
lean_closure_set(v___f_3344_, 1, v_pre_3324_);
lean_closure_set(v___f_3344_, 2, v_post_3325_);
lean_closure_set(v___f_3344_, 3, v___x_3341_);
lean_closure_set(v___f_3344_, 4, v___x_3342_);
lean_closure_set(v___f_3344_, 5, v___x_3343_);
lean_closure_set(v___f_3344_, 6, v_body_3339_);
v___x_3345_ = lean_expr_instantiate_rev(v_binderType_3338_, v_fvars_3329_);
lean_dec_ref(v_fvars_3329_);
lean_dec_ref(v_binderType_3338_);
v___x_3346_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3324_, v_post_3325_, v_usedLetOnly_3326_, v_skipConstInApp_3327_, v_skipInstances_3328_, v___x_3345_, v_a_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v___x_3348_ = 0;
v___x_3349_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_3337_, v_binderInfo_3340_, v_a_3347_, v___f_3344_, v___x_3348_, v_a_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
return v___x_3349_;
}
else
{
lean_dec_ref(v___f_3344_);
lean_dec(v_binderName_3337_);
return v___x_3346_;
}
}
else
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = lean_expr_instantiate_rev(v_e_3330_, v_fvars_3329_);
lean_dec_ref(v_e_3330_);
lean_inc_ref(v_post_3325_);
lean_inc_ref(v_pre_3324_);
v___x_3351_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3324_, v_post_3325_, v_usedLetOnly_3326_, v_skipConstInApp_3327_, v_skipInstances_3328_, v___x_3350_, v_a_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; uint8_t v___x_3353_; uint8_t v___x_3354_; uint8_t v___x_3355_; lean_object* v___x_3356_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref_known(v___x_3351_, 1);
v___x_3353_ = 0;
v___x_3354_ = 1;
v___x_3355_ = 1;
v___x_3356_ = l_Lean_Meta_mkForallFVars(v_fvars_3329_, v_a_3352_, v___x_3353_, v_usedLetOnly_3326_, v___x_3354_, v___x_3355_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
lean_dec_ref(v_fvars_3329_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v___x_3358_; 
v_a_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc(v_a_3357_);
lean_dec_ref_known(v___x_3356_, 1);
v___x_3358_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3324_, v_post_3325_, v_usedLetOnly_3326_, v_skipConstInApp_3327_, v_skipInstances_3328_, v_a_3357_, v_a_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
return v___x_3358_;
}
else
{
lean_dec_ref(v_post_3325_);
lean_dec_ref(v_pre_3324_);
return v___x_3356_;
}
}
else
{
lean_dec_ref(v_fvars_3329_);
lean_dec_ref(v_post_3325_);
lean_dec_ref(v_pre_3324_);
return v___x_3351_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3359_, lean_object* v_pre_3360_, lean_object* v_post_3361_, uint8_t v_usedLetOnly_3362_, uint8_t v_skipConstInApp_3363_, uint8_t v_skipInstances_3364_, lean_object* v_body_3365_, lean_object* v_x_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_array_push(v_fvars_3359_, v_x_3366_);
v___x_3374_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3360_, v_post_3361_, v_usedLetOnly_3362_, v_skipConstInApp_3363_, v_skipInstances_3364_, v___x_3373_, v_body_3365_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
return v___x_3374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_3375_, lean_object* v_post_3376_, lean_object* v_usedLetOnly_3377_, lean_object* v_skipConstInApp_3378_, lean_object* v_skipInstances_3379_, lean_object* v_e_3380_, lean_object* v_a_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
uint8_t v_usedLetOnly_boxed_3387_; uint8_t v_skipConstInApp_boxed_3388_; uint8_t v_skipInstances_boxed_3389_; lean_object* v_res_3390_; 
v_usedLetOnly_boxed_3387_ = lean_unbox(v_usedLetOnly_3377_);
v_skipConstInApp_boxed_3388_ = lean_unbox(v_skipConstInApp_3378_);
v_skipInstances_boxed_3389_ = lean_unbox(v_skipInstances_3379_);
v_res_3390_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3375_, v_post_3376_, v_usedLetOnly_boxed_3387_, v_skipConstInApp_boxed_3388_, v_skipInstances_boxed_3389_, v_e_3380_, v_a_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v_a_3381_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_3391_, lean_object* v_post_3392_, lean_object* v_usedLetOnly_3393_, lean_object* v_skipConstInApp_3394_, lean_object* v_skipInstances_3395_, lean_object* v_sz_3396_, lean_object* v_i_3397_, lean_object* v_bs_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
uint8_t v_usedLetOnly_boxed_3405_; uint8_t v_skipConstInApp_boxed_3406_; uint8_t v_skipInstances_boxed_3407_; size_t v_sz_boxed_3408_; size_t v_i_boxed_3409_; lean_object* v_res_3410_; 
v_usedLetOnly_boxed_3405_ = lean_unbox(v_usedLetOnly_3393_);
v_skipConstInApp_boxed_3406_ = lean_unbox(v_skipConstInApp_3394_);
v_skipInstances_boxed_3407_ = lean_unbox(v_skipInstances_3395_);
v_sz_boxed_3408_ = lean_unbox_usize(v_sz_3396_);
lean_dec(v_sz_3396_);
v_i_boxed_3409_ = lean_unbox_usize(v_i_3397_);
lean_dec(v_i_3397_);
v_res_3410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3391_, v_post_3392_, v_usedLetOnly_boxed_3405_, v_skipConstInApp_boxed_3406_, v_skipInstances_boxed_3407_, v_sz_boxed_3408_, v_i_boxed_3409_, v_bs_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object* v_pre_3411_, lean_object* v_post_3412_, lean_object* v_usedLetOnly_3413_, lean_object* v_skipConstInApp_3414_, lean_object* v_skipInstances_3415_, lean_object* v_e_3416_, lean_object* v_a_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_){
_start:
{
uint8_t v_usedLetOnly_boxed_3423_; uint8_t v_skipConstInApp_boxed_3424_; uint8_t v_skipInstances_boxed_3425_; lean_object* v_res_3426_; 
v_usedLetOnly_boxed_3423_ = lean_unbox(v_usedLetOnly_3413_);
v_skipConstInApp_boxed_3424_ = lean_unbox(v_skipConstInApp_3414_);
v_skipInstances_boxed_3425_ = lean_unbox(v_skipInstances_3415_);
v_res_3426_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3411_, v_post_3412_, v_usedLetOnly_boxed_3423_, v_skipConstInApp_boxed_3424_, v_skipInstances_boxed_3425_, v_e_3416_, v_a_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v_a_3417_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_3427_, lean_object* v_post_3428_, lean_object* v_usedLetOnly_3429_, lean_object* v_skipConstInApp_3430_, lean_object* v_skipInstances_3431_, lean_object* v_fvars_3432_, lean_object* v_e_3433_, lean_object* v_a_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
uint8_t v_usedLetOnly_boxed_3440_; uint8_t v_skipConstInApp_boxed_3441_; uint8_t v_skipInstances_boxed_3442_; lean_object* v_res_3443_; 
v_usedLetOnly_boxed_3440_ = lean_unbox(v_usedLetOnly_3429_);
v_skipConstInApp_boxed_3441_ = lean_unbox(v_skipConstInApp_3430_);
v_skipInstances_boxed_3442_ = lean_unbox(v_skipInstances_3431_);
v_res_3443_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3427_, v_post_3428_, v_usedLetOnly_boxed_3440_, v_skipConstInApp_boxed_3441_, v_skipInstances_boxed_3442_, v_fvars_3432_, v_e_3433_, v_a_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v_a_3434_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_3444_, lean_object* v_post_3445_, lean_object* v_usedLetOnly_3446_, lean_object* v_skipConstInApp_3447_, lean_object* v_skipInstances_3448_, lean_object* v_fvars_3449_, lean_object* v_e_3450_, lean_object* v_a_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_){
_start:
{
uint8_t v_usedLetOnly_boxed_3457_; uint8_t v_skipConstInApp_boxed_3458_; uint8_t v_skipInstances_boxed_3459_; lean_object* v_res_3460_; 
v_usedLetOnly_boxed_3457_ = lean_unbox(v_usedLetOnly_3446_);
v_skipConstInApp_boxed_3458_ = lean_unbox(v_skipConstInApp_3447_);
v_skipInstances_boxed_3459_ = lean_unbox(v_skipInstances_3448_);
v_res_3460_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3444_, v_post_3445_, v_usedLetOnly_boxed_3457_, v_skipConstInApp_boxed_3458_, v_skipInstances_boxed_3459_, v_fvars_3449_, v_e_3450_, v_a_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec(v_a_3451_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_3461_, lean_object* v_post_3462_, lean_object* v_usedLetOnly_3463_, lean_object* v_skipConstInApp_3464_, lean_object* v_skipInstances_3465_, lean_object* v_fvars_3466_, lean_object* v_e_3467_, lean_object* v_a_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
uint8_t v_usedLetOnly_boxed_3474_; uint8_t v_skipConstInApp_boxed_3475_; uint8_t v_skipInstances_boxed_3476_; lean_object* v_res_3477_; 
v_usedLetOnly_boxed_3474_ = lean_unbox(v_usedLetOnly_3463_);
v_skipConstInApp_boxed_3475_ = lean_unbox(v_skipConstInApp_3464_);
v_skipInstances_boxed_3476_ = lean_unbox(v_skipInstances_3465_);
v_res_3477_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3461_, v_post_3462_, v_usedLetOnly_boxed_3474_, v_skipConstInApp_boxed_3475_, v_skipInstances_boxed_3476_, v_fvars_3466_, v_e_3467_, v_a_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v_a_3468_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_3478_, lean_object* v___x_3479_, lean_object* v_pre_3480_, lean_object* v_post_3481_, lean_object* v_usedLetOnly_3482_, lean_object* v_skipConstInApp_3483_, lean_object* v_skipInstances_3484_, lean_object* v_a_3485_, lean_object* v_b_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
uint8_t v_usedLetOnly_boxed_3493_; uint8_t v_skipConstInApp_boxed_3494_; uint8_t v_skipInstances_boxed_3495_; lean_object* v_res_3496_; 
v_usedLetOnly_boxed_3493_ = lean_unbox(v_usedLetOnly_3482_);
v_skipConstInApp_boxed_3494_ = lean_unbox(v_skipConstInApp_3483_);
v_skipInstances_boxed_3495_ = lean_unbox(v_skipInstances_3484_);
v_res_3496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3478_, v___x_3479_, v_pre_3480_, v_post_3481_, v_usedLetOnly_boxed_3493_, v_skipConstInApp_boxed_3494_, v_skipInstances_boxed_3495_, v_a_3485_, v_b_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
lean_dec(v___y_3487_);
lean_dec_ref(v___x_3479_);
lean_dec(v_upperBound_3478_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_3497_, lean_object* v_pre_3498_, lean_object* v_post_3499_, lean_object* v_usedLetOnly_3500_, lean_object* v_skipConstInApp_3501_, lean_object* v_x_3502_, lean_object* v_x_3503_, lean_object* v_x_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_){
_start:
{
uint8_t v_skipInstances_boxed_3511_; uint8_t v_usedLetOnly_boxed_3512_; uint8_t v_skipConstInApp_boxed_3513_; lean_object* v_res_3514_; 
v_skipInstances_boxed_3511_ = lean_unbox(v_skipInstances_3497_);
v_usedLetOnly_boxed_3512_ = lean_unbox(v_usedLetOnly_3500_);
v_skipConstInApp_boxed_3513_ = lean_unbox(v_skipConstInApp_3501_);
v_res_3514_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_boxed_3511_, v_pre_3498_, v_post_3499_, v_usedLetOnly_boxed_3512_, v_skipConstInApp_boxed_3513_, v_x_3502_, v_x_3503_, v_x_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec(v___y_3505_);
return v_res_3514_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3515_ = lean_box(0);
v___x_3516_ = lean_unsigned_to_nat(16u);
v___x_3517_ = lean_mk_array(v___x_3516_, v___x_3515_);
return v___x_3517_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0);
v___x_3519_ = lean_unsigned_to_nat(0u);
v___x_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
lean_ctor_set(v___x_3520_, 1, v___x_3518_);
return v___x_3520_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1);
v___x_3522_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3522_, 0, lean_box(0));
lean_closure_set(v___x_3522_, 1, lean_box(0));
lean_closure_set(v___x_3522_, 2, v___x_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object* v_input_3523_, lean_object* v_pre_3524_, lean_object* v_post_3525_, uint8_t v_usedLetOnly_3526_, uint8_t v_skipConstInApp_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
uint8_t v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v_a_3536_; lean_object* v___x_3537_; 
v___x_3533_ = 0;
v___x_3534_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2);
v___x_3535_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3534_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_a_3536_);
lean_dec_ref(v___x_3535_);
v___x_3537_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3524_, v_post_3525_, v_usedLetOnly_3526_, v_skipConstInApp_3527_, v___x_3533_, v_input_3523_, v_a_3536_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
v___x_3539_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3539_, 0, lean_box(0));
lean_closure_set(v___x_3539_, 1, lean_box(0));
lean_closure_set(v___x_3539_, 2, v_a_3536_);
v___x_3540_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3539_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3547_ == 0)
{
lean_object* v_unused_3548_; 
v_unused_3548_ = lean_ctor_get(v___x_3540_, 0);
lean_dec(v_unused_3548_);
v___x_3542_ = v___x_3540_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_dec(v___x_3540_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
lean_ctor_set(v___x_3542_, 0, v_a_3538_);
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3538_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
else
{
lean_dec(v_a_3536_);
return v___x_3537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object* v_input_3549_, lean_object* v_pre_3550_, lean_object* v_post_3551_, lean_object* v_usedLetOnly_3552_, lean_object* v_skipConstInApp_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_){
_start:
{
uint8_t v_usedLetOnly_boxed_3559_; uint8_t v_skipConstInApp_boxed_3560_; lean_object* v_res_3561_; 
v_usedLetOnly_boxed_3559_ = lean_unbox(v_usedLetOnly_3552_);
v_skipConstInApp_boxed_3560_ = lean_unbox(v_skipConstInApp_3553_);
v_res_3561_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_input_3549_, v_pre_3550_, v_post_3551_, v_usedLetOnly_boxed_3559_, v_skipConstInApp_boxed_3560_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
lean_dec(v___y_3557_);
lean_dec_ref(v___y_3556_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
return v_res_3561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object* v_e_3563_, lean_object* v_p_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v___f_3570_; lean_object* v___f_3571_; lean_object* v___x_3572_; lean_object* v_a_3573_; uint8_t v___x_3574_; lean_object* v___x_3575_; 
v___f_3570_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___closed__0));
v___f_3571_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3571_, 0, v_p_3564_);
v___x_3572_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_3563_, v_a_3566_);
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref(v___x_3572_);
v___x_3574_ = 0;
v___x_3575_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_a_3573_, v___f_3570_, v___f_3571_, v___x_3574_, v___x_3574_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object* v_e_3576_, lean_object* v_p_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_){
_start:
{
lean_object* v_res_3583_; 
v_res_3583_ = l_Lean_Meta_etaStructReduce(v_e_3576_, v_p_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_);
lean_dec(v_a_3581_);
lean_dec_ref(v_a_3580_);
lean_dec(v_a_3579_);
lean_dec_ref(v_a_3578_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_3584_, lean_object* v___x_3585_, lean_object* v_pre_3586_, lean_object* v_post_3587_, uint8_t v_usedLetOnly_3588_, uint8_t v_skipConstInApp_3589_, uint8_t v_skipInstances_3590_, lean_object* v___x_3591_, lean_object* v_inst_3592_, lean_object* v_R_3593_, lean_object* v_a_3594_, lean_object* v_b_3595_, lean_object* v_c_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
lean_object* v___x_3603_; 
v___x_3603_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3584_, v___x_3585_, v_pre_3586_, v_post_3587_, v_usedLetOnly_3588_, v_skipConstInApp_3589_, v_skipInstances_3590_, v_a_3594_, v_b_3595_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_);
return v___x_3603_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3604_ = _args[0];
lean_object* v___x_3605_ = _args[1];
lean_object* v_pre_3606_ = _args[2];
lean_object* v_post_3607_ = _args[3];
lean_object* v_usedLetOnly_3608_ = _args[4];
lean_object* v_skipConstInApp_3609_ = _args[5];
lean_object* v_skipInstances_3610_ = _args[6];
lean_object* v___x_3611_ = _args[7];
lean_object* v_inst_3612_ = _args[8];
lean_object* v_R_3613_ = _args[9];
lean_object* v_a_3614_ = _args[10];
lean_object* v_b_3615_ = _args[11];
lean_object* v_c_3616_ = _args[12];
lean_object* v___y_3617_ = _args[13];
lean_object* v___y_3618_ = _args[14];
lean_object* v___y_3619_ = _args[15];
lean_object* v___y_3620_ = _args[16];
lean_object* v___y_3621_ = _args[17];
lean_object* v___y_3622_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3623_; uint8_t v_skipConstInApp_boxed_3624_; uint8_t v_skipInstances_boxed_3625_; lean_object* v_res_3626_; 
v_usedLetOnly_boxed_3623_ = lean_unbox(v_usedLetOnly_3608_);
v_skipConstInApp_boxed_3624_ = lean_unbox(v_skipConstInApp_3609_);
v_skipInstances_boxed_3625_ = lean_unbox(v_skipInstances_3610_);
v_res_3626_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(v_upperBound_3604_, v___x_3605_, v_pre_3606_, v_post_3607_, v_usedLetOnly_boxed_3623_, v_skipConstInApp_boxed_3624_, v_skipInstances_boxed_3625_, v___x_3611_, v_inst_3612_, v_R_3613_, v_a_3614_, v_b_3615_, v_c_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec(v___y_3617_);
lean_dec(v___x_3611_);
lean_dec_ref(v___x_3605_);
lean_dec(v_upperBound_3604_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3627_, lean_object* v_m_3628_, lean_object* v_a_3629_){
_start:
{
lean_object* v___x_3630_; 
v___x_3630_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_3628_, v_a_3629_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3631_, lean_object* v_m_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(v_00_u03b2_3631_, v_m_3632_, v_a_3633_);
lean_dec_ref(v_a_3633_);
lean_dec_ref(v_m_3632_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3635_, lean_object* v_name_3636_, uint8_t v_bi_3637_, lean_object* v_type_3638_, lean_object* v_k_3639_, uint8_t v_kind_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3636_, v_bi_3637_, v_type_3638_, v_k_3639_, v_kind_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3648_, lean_object* v_name_3649_, lean_object* v_bi_3650_, lean_object* v_type_3651_, lean_object* v_k_3652_, lean_object* v_kind_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
uint8_t v_bi_boxed_3660_; uint8_t v_kind_boxed_3661_; lean_object* v_res_3662_; 
v_bi_boxed_3660_ = lean_unbox(v_bi_3650_);
v_kind_boxed_3661_ = lean_unbox(v_kind_3653_);
v_res_3662_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3648_, v_name_3649_, v_bi_boxed_3660_, v_type_3651_, v_k_3652_, v_kind_boxed_3661_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec(v___y_3654_);
return v_res_3662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3663_, lean_object* v_name_3664_, lean_object* v_type_3665_, lean_object* v_val_3666_, lean_object* v_k_3667_, uint8_t v_nondep_3668_, uint8_t v_kind_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v___x_3676_; 
v___x_3676_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3664_, v_type_3665_, v_val_3666_, v_k_3667_, v_nondep_3668_, v_kind_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3677_, lean_object* v_name_3678_, lean_object* v_type_3679_, lean_object* v_val_3680_, lean_object* v_k_3681_, lean_object* v_nondep_3682_, lean_object* v_kind_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
uint8_t v_nondep_boxed_3690_; uint8_t v_kind_boxed_3691_; lean_object* v_res_3692_; 
v_nondep_boxed_3690_ = lean_unbox(v_nondep_3682_);
v_kind_boxed_3691_ = lean_unbox(v_kind_3683_);
v_res_3692_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3677_, v_name_3678_, v_type_3679_, v_val_3680_, v_k_3681_, v_nondep_boxed_3690_, v_kind_boxed_3691_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_);
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
lean_dec(v___y_3684_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3693_, lean_object* v_ref_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_){
_start:
{
lean_object* v___x_3700_; 
v___x_3700_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3694_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3701_, lean_object* v_ref_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3701_, v_ref_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec(v___y_3704_);
lean_dec_ref(v___y_3703_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3709_, lean_object* v_x_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3718_, lean_object* v_x_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(v_00_u03b1_3718_, v_x_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_);
lean_dec(v___y_3724_);
lean_dec_ref(v___y_3723_);
lean_dec(v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec(v___y_3720_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3727_, lean_object* v_m_3728_, lean_object* v_a_3729_, lean_object* v_b_3730_){
_start:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v_m_3728_, v_a_3729_, v_b_3730_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3732_, lean_object* v_a_3733_, lean_object* v_x_3734_){
_start:
{
lean_object* v___x_3735_; 
v___x_3735_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3733_, v_x_3734_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3736_, lean_object* v_a_3737_, lean_object* v_x_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3736_, v_a_3737_, v_x_3738_);
lean_dec(v_x_3738_);
lean_dec_ref(v_a_3737_);
return v_res_3739_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3740_, lean_object* v_a_3741_, lean_object* v_x_3742_){
_start:
{
uint8_t v___x_3743_; 
v___x_3743_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3741_, v_x_3742_);
return v___x_3743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3744_, lean_object* v_a_3745_, lean_object* v_x_3746_){
_start:
{
uint8_t v_res_3747_; lean_object* v_r_3748_; 
v_res_3747_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3744_, v_a_3745_, v_x_3746_);
lean_dec(v_x_3746_);
lean_dec_ref(v_a_3745_);
v_r_3748_ = lean_box(v_res_3747_);
return v_r_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3749_, lean_object* v_data_3750_){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3750_);
return v___x_3751_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3752_, lean_object* v_a_3753_, lean_object* v_b_3754_, lean_object* v_x_3755_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3753_, v_b_3754_, v_x_3755_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3757_, lean_object* v_i_3758_, lean_object* v_source_3759_, lean_object* v_target_3760_){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3758_, v_source_3759_, v_target_3760_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3762_, lean_object* v_x_3763_, lean_object* v_x_3764_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3763_, v_x_3764_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object* v_binderType_3766_, lean_object* v_inst_3767_, lean_object* v_toBind_3768_, lean_object* v___f_3769_, lean_object* v_____do__lift_3770_){
_start:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3771_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3771_, 0, v_____do__lift_3770_);
lean_closure_set(v___x_3771_, 1, v_binderType_3766_);
v___x_3772_ = lean_apply_2(v_inst_3767_, lean_box(0), v___x_3771_);
v___x_3773_ = lean_apply_4(v_toBind_3768_, lean_box(0), lean_box(0), v___x_3772_, v___f_3769_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object* v_toPure_3774_, lean_object* v_usedFields_3775_, lean_object* v_binderName_3776_, lean_object* v_body_3777_, lean_object* v_val_3778_, lean_object* v_inst_3779_, lean_object* v_inst_3780_, lean_object* v_fieldVal_x3f_3781_, lean_object* v_____do__lift_3782_){
_start:
{
uint8_t v_____do__lift_291__boxed_3783_; lean_object* v_res_3784_; 
v_____do__lift_291__boxed_3783_ = lean_unbox(v_____do__lift_3782_);
v_res_3784_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(v_toPure_3774_, v_usedFields_3775_, v_binderName_3776_, v_body_3777_, v_val_3778_, v_inst_3779_, v_inst_3780_, v_fieldVal_x3f_3781_, v_____do__lift_291__boxed_3783_);
lean_dec_ref(v_val_3778_);
lean_dec_ref(v_body_3777_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object* v_toPure_3785_, lean_object* v_usedFields_3786_, lean_object* v_binderName_3787_, lean_object* v_body_3788_, lean_object* v_inst_3789_, lean_object* v_inst_3790_, lean_object* v_fieldVal_x3f_3791_, lean_object* v_binderType_3792_, lean_object* v_toBind_3793_, lean_object* v_____x_3794_){
_start:
{
if (lean_obj_tag(v_____x_3794_) == 1)
{
lean_object* v_val_3795_; lean_object* v___f_3796_; lean_object* v___f_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
v_val_3795_ = lean_ctor_get(v_____x_3794_, 0);
lean_inc_n(v_val_3795_, 2);
lean_dec_ref_known(v_____x_3794_, 1);
lean_inc_n(v_inst_3790_, 2);
v___f_3796_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3796_, 0, v_toPure_3785_);
lean_closure_set(v___f_3796_, 1, v_usedFields_3786_);
lean_closure_set(v___f_3796_, 2, v_binderName_3787_);
lean_closure_set(v___f_3796_, 3, v_body_3788_);
lean_closure_set(v___f_3796_, 4, v_val_3795_);
lean_closure_set(v___f_3796_, 5, v_inst_3789_);
lean_closure_set(v___f_3796_, 6, v_inst_3790_);
lean_closure_set(v___f_3796_, 7, v_fieldVal_x3f_3791_);
lean_inc(v_toBind_3793_);
v___f_3797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3797_, 0, v_binderType_3792_);
lean_closure_set(v___f_3797_, 1, v_inst_3790_);
lean_closure_set(v___f_3797_, 2, v_toBind_3793_);
lean_closure_set(v___f_3797_, 3, v___f_3796_);
v___x_3798_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3798_, 0, v_val_3795_);
v___x_3799_ = lean_apply_2(v_inst_3790_, lean_box(0), v___x_3798_);
v___x_3800_ = lean_apply_4(v_toBind_3793_, lean_box(0), lean_box(0), v___x_3799_, v___f_3797_);
return v___x_3800_;
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
lean_dec(v_____x_3794_);
lean_dec(v_toBind_3793_);
lean_dec_ref(v_binderType_3792_);
lean_dec(v_fieldVal_x3f_3791_);
lean_dec(v_inst_3790_);
lean_dec_ref(v_inst_3789_);
lean_dec_ref(v_body_3788_);
lean_dec(v_binderName_3787_);
lean_dec(v_usedFields_3786_);
v___x_3801_ = lean_box(0);
v___x_3802_ = lean_apply_2(v_toPure_3785_, lean_box(0), v___x_3801_);
return v___x_3802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object* v_inst_3806_, lean_object* v_inst_3807_, lean_object* v_fieldVal_x3f_3808_, lean_object* v_usedFields_3809_, lean_object* v_e_3810_){
_start:
{
lean_object* v_toApplicative_3811_; lean_object* v_toBind_3812_; lean_object* v_toPure_3813_; 
v_toApplicative_3811_ = lean_ctor_get(v_inst_3806_, 0);
v_toBind_3812_ = lean_ctor_get(v_inst_3806_, 1);
v_toPure_3813_ = lean_ctor_get(v_toApplicative_3811_, 1);
lean_inc(v_toPure_3813_);
if (lean_obj_tag(v_e_3810_) == 6)
{
lean_object* v_binderName_3818_; lean_object* v_binderType_3819_; lean_object* v_body_3820_; lean_object* v___f_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
lean_inc_n(v_toBind_3812_, 2);
v_binderName_3818_ = lean_ctor_get(v_e_3810_, 0);
lean_inc_n(v_binderName_3818_, 2);
v_binderType_3819_ = lean_ctor_get(v_e_3810_, 1);
lean_inc_ref(v_binderType_3819_);
v_body_3820_ = lean_ctor_get(v_e_3810_, 2);
lean_inc_ref(v_body_3820_);
lean_dec_ref_known(v_e_3810_, 3);
lean_inc(v_fieldVal_x3f_3808_);
v___f_3821_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3821_, 0, v_toPure_3813_);
lean_closure_set(v___f_3821_, 1, v_usedFields_3809_);
lean_closure_set(v___f_3821_, 2, v_binderName_3818_);
lean_closure_set(v___f_3821_, 3, v_body_3820_);
lean_closure_set(v___f_3821_, 4, v_inst_3806_);
lean_closure_set(v___f_3821_, 5, v_inst_3807_);
lean_closure_set(v___f_3821_, 6, v_fieldVal_x3f_3808_);
lean_closure_set(v___f_3821_, 7, v_binderType_3819_);
lean_closure_set(v___f_3821_, 8, v_toBind_3812_);
v___x_3822_ = lean_apply_1(v_fieldVal_x3f_3808_, v_binderName_3818_);
v___x_3823_ = lean_apply_4(v_toBind_3812_, lean_box(0), lean_box(0), v___x_3822_, v___f_3821_);
return v___x_3823_;
}
else
{
lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3840_; 
lean_dec(v_fieldVal_x3f_3808_);
lean_dec(v_inst_3807_);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_inst_3806_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; lean_object* v_unused_3842_; 
v_unused_3841_ = lean_ctor_get(v_inst_3806_, 1);
lean_dec(v_unused_3841_);
v_unused_3842_ = lean_ctor_get(v_inst_3806_, 0);
lean_dec(v_unused_3842_);
v___x_3825_ = v_inst_3806_;
v_isShared_3826_ = v_isSharedCheck_3840_;
goto v_resetjp_3824_;
}
else
{
lean_dec(v_inst_3806_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3840_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3827_; uint8_t v___x_3828_; 
lean_inc_ref(v_e_3810_);
v___x_3827_ = l_Lean_Expr_cleanupAnnotations(v_e_3810_);
v___x_3828_ = l_Lean_Expr_isApp(v___x_3827_);
if (v___x_3828_ == 0)
{
lean_dec_ref(v___x_3827_);
lean_del_object(v___x_3825_);
goto v___jp_3814_;
}
else
{
lean_object* v_arg_3829_; lean_object* v___x_3830_; uint8_t v___x_3831_; 
v_arg_3829_ = lean_ctor_get(v___x_3827_, 1);
lean_inc_ref(v_arg_3829_);
v___x_3830_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3827_);
v___x_3831_ = l_Lean_Expr_isApp(v___x_3830_);
if (v___x_3831_ == 0)
{
lean_dec_ref(v___x_3830_);
lean_dec_ref(v_arg_3829_);
lean_del_object(v___x_3825_);
goto v___jp_3814_;
}
else
{
lean_object* v___x_3832_; lean_object* v___x_3833_; uint8_t v___x_3834_; 
v___x_3832_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3830_);
v___x_3833_ = ((lean_object*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1));
v___x_3834_ = l_Lean_Expr_isConstOf(v___x_3832_, v___x_3833_);
lean_dec_ref(v___x_3832_);
if (v___x_3834_ == 0)
{
lean_dec_ref(v_arg_3829_);
lean_del_object(v___x_3825_);
goto v___jp_3814_;
}
else
{
lean_object* v___x_3836_; 
lean_dec_ref(v_e_3810_);
if (v_isShared_3826_ == 0)
{
lean_ctor_set(v___x_3825_, 1, v_arg_3829_);
lean_ctor_set(v___x_3825_, 0, v_usedFields_3809_);
v___x_3836_ = v___x_3825_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_usedFields_3809_);
lean_ctor_set(v_reuseFailAlloc_3839_, 1, v_arg_3829_);
v___x_3836_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3836_);
v___x_3838_ = lean_apply_2(v_toPure_3813_, lean_box(0), v___x_3837_);
return v___x_3838_;
}
}
}
}
}
}
v___jp_3814_:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3815_, 0, v_usedFields_3809_);
lean_ctor_set(v___x_3815_, 1, v_e_3810_);
v___x_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3815_);
v___x_3817_ = lean_apply_2(v_toPure_3813_, lean_box(0), v___x_3816_);
return v___x_3817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object* v_toPure_3843_, lean_object* v_usedFields_3844_, lean_object* v_binderName_3845_, lean_object* v_body_3846_, lean_object* v_val_3847_, lean_object* v_inst_3848_, lean_object* v_inst_3849_, lean_object* v_fieldVal_x3f_3850_, uint8_t v_____do__lift_3851_){
_start:
{
if (v_____do__lift_3851_ == 0)
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
lean_dec(v_fieldVal_x3f_3850_);
lean_dec(v_inst_3849_);
lean_dec_ref(v_inst_3848_);
lean_dec(v_binderName_3845_);
lean_dec(v_usedFields_3844_);
v___x_3852_ = lean_box(0);
v___x_3853_ = lean_apply_2(v_toPure_3843_, lean_box(0), v___x_3852_);
return v___x_3853_;
}
else
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
lean_dec(v_toPure_3843_);
v___x_3854_ = l_Lean_NameSet_insert(v_usedFields_3844_, v_binderName_3845_);
v___x_3855_ = lean_expr_instantiate1(v_body_3846_, v_val_3847_);
v___x_3856_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3848_, v_inst_3849_, v_fieldVal_x3f_3850_, v___x_3854_, v___x_3855_);
return v___x_3856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object* v_m_3857_, lean_object* v_inst_3858_, lean_object* v_inst_3859_, lean_object* v_fieldVal_x3f_3860_, lean_object* v_usedFields_3861_, lean_object* v_e_3862_){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3858_, v_inst_3859_, v_fieldVal_x3f_3860_, v_usedFields_3861_, v_e_3862_);
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object* v_inst_3864_, lean_object* v_inst_3865_, lean_object* v_fieldVal_x3f_3866_, lean_object* v_toPure_3867_, lean_object* v_____s_3868_){
_start:
{
lean_object* v_fst_3869_; 
v_fst_3869_ = lean_ctor_get(v_____s_3868_, 0);
if (lean_obj_tag(v_fst_3869_) == 0)
{
lean_object* v_snd_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
lean_dec(v_toPure_3867_);
v_snd_3870_ = lean_ctor_get(v_____s_3868_, 1);
lean_inc(v_snd_3870_);
lean_dec_ref(v_____s_3868_);
v___x_3871_ = l_Lean_NameSet_empty;
v___x_3872_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3864_, v_inst_3865_, v_fieldVal_x3f_3866_, v___x_3871_, v_snd_3870_);
return v___x_3872_;
}
else
{
lean_object* v_val_3873_; lean_object* v___x_3874_; 
lean_inc_ref(v_fst_3869_);
lean_dec_ref(v_____s_3868_);
lean_dec(v_fieldVal_x3f_3866_);
lean_dec(v_inst_3865_);
lean_dec_ref(v_inst_3864_);
v_val_3873_ = lean_ctor_get(v_fst_3869_, 0);
lean_inc(v_val_3873_);
lean_dec_ref_known(v_fst_3869_, 1);
v___x_3874_ = lean_apply_2(v_toPure_3867_, lean_box(0), v_val_3873_);
return v___x_3874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object* v_body_3875_, lean_object* v_a_3876_, lean_object* v___x_3877_, lean_object* v_toPure_3878_, lean_object* v_____r_3879_){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3880_ = lean_expr_instantiate1(v_body_3875_, v_a_3876_);
v___x_3881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3877_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
v___x_3883_ = lean_apply_2(v_toPure_3878_, lean_box(0), v___x_3882_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object* v_body_3884_, lean_object* v_a_3885_, lean_object* v___x_3886_, lean_object* v_toPure_3887_, lean_object* v_____r_3888_){
_start:
{
lean_object* v_res_3889_; 
v_res_3889_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3884_, v_a_3885_, v___x_3886_, v_toPure_3887_, v_____r_3888_);
lean_dec_ref(v_a_3885_);
lean_dec_ref(v_body_3884_);
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object* v_snd_3892_, lean_object* v_toPure_3893_, lean_object* v___f_3894_, uint8_t v_____do__lift_3895_){
_start:
{
if (v_____do__lift_3895_ == 0)
{
lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
lean_dec(v___f_3894_);
v___x_3896_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
v___x_3897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
lean_ctor_set(v___x_3897_, 1, v_snd_3892_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
v___x_3899_ = lean_apply_2(v_toPure_3893_, lean_box(0), v___x_3898_);
return v___x_3899_;
}
else
{
lean_object* v___x_3900_; lean_object* v___x_3901_; 
lean_dec(v_toPure_3893_);
lean_dec(v_snd_3892_);
v___x_3900_ = lean_box(0);
v___x_3901_ = lean_apply_1(v___f_3894_, v___x_3900_);
return v___x_3901_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object* v_snd_3902_, lean_object* v_toPure_3903_, lean_object* v___f_3904_, lean_object* v_____do__lift_3905_){
_start:
{
uint8_t v_____do__lift_566__boxed_3906_; lean_object* v_res_3907_; 
v_____do__lift_566__boxed_3906_ = lean_unbox(v_____do__lift_3905_);
v_res_3907_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(v_snd_3902_, v_toPure_3903_, v___f_3904_, v_____do__lift_566__boxed_3906_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object* v_binderType_3908_, lean_object* v_inst_3909_, lean_object* v_toBind_3910_, lean_object* v___f_3911_, lean_object* v_____do__lift_3912_){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3913_, 0, v_____do__lift_3912_);
lean_closure_set(v___x_3913_, 1, v_binderType_3908_);
v___x_3914_ = lean_apply_2(v_inst_3909_, lean_box(0), v___x_3913_);
v___x_3915_ = lean_apply_4(v_toBind_3910_, lean_box(0), lean_box(0), v___x_3914_, v___f_3911_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object* v___x_3916_, lean_object* v_toPure_3917_, lean_object* v_levels_x3f_3918_, lean_object* v_inst_3919_, lean_object* v_toBind_3920_, lean_object* v_a_3921_, lean_object* v_x_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v_snd_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3944_; 
v_snd_3924_ = lean_ctor_get(v___y_3923_, 1);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___y_3923_);
if (v_isSharedCheck_3944_ == 0)
{
lean_object* v_unused_3945_; 
v_unused_3945_ = lean_ctor_get(v___y_3923_, 0);
lean_dec(v_unused_3945_);
v___x_3926_ = v___y_3923_;
v_isShared_3927_ = v_isSharedCheck_3944_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_snd_3924_);
lean_dec(v___y_3923_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3944_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
if (lean_obj_tag(v_snd_3924_) == 6)
{
lean_object* v_binderType_3928_; lean_object* v_body_3929_; lean_object* v___f_3930_; 
lean_del_object(v___x_3926_);
v_binderType_3928_ = lean_ctor_get(v_snd_3924_, 1);
lean_inc_ref(v_binderType_3928_);
v_body_3929_ = lean_ctor_get(v_snd_3924_, 2);
lean_inc(v_toPure_3917_);
lean_inc(v___x_3916_);
lean_inc_ref(v_a_3921_);
lean_inc_ref(v_body_3929_);
v___f_3930_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3930_, 0, v_body_3929_);
lean_closure_set(v___f_3930_, 1, v_a_3921_);
lean_closure_set(v___f_3930_, 2, v___x_3916_);
lean_closure_set(v___f_3930_, 3, v_toPure_3917_);
if (lean_obj_tag(v_levels_x3f_3918_) == 0)
{
lean_object* v___f_3931_; lean_object* v___f_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
lean_dec(v___x_3916_);
v___f_3931_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3931_, 0, v_snd_3924_);
lean_closure_set(v___f_3931_, 1, v_toPure_3917_);
lean_closure_set(v___f_3931_, 2, v___f_3930_);
lean_inc(v_toBind_3920_);
lean_inc(v_inst_3919_);
v___f_3932_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3932_, 0, v_binderType_3928_);
lean_closure_set(v___f_3932_, 1, v_inst_3919_);
lean_closure_set(v___f_3932_, 2, v_toBind_3920_);
lean_closure_set(v___f_3932_, 3, v___f_3931_);
v___x_3933_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3933_, 0, v_a_3921_);
v___x_3934_ = lean_apply_2(v_inst_3919_, lean_box(0), v___x_3933_);
v___x_3935_ = lean_apply_4(v_toBind_3920_, lean_box(0), lean_box(0), v___x_3934_, v___f_3932_);
return v___x_3935_;
}
else
{
lean_object* v___x_3936_; lean_object* v___x_3937_; 
lean_inc_ref(v_body_3929_);
lean_dec_ref(v___f_3930_);
lean_dec_ref_known(v_snd_3924_, 3);
lean_dec_ref(v_binderType_3928_);
lean_dec(v_toBind_3920_);
lean_dec(v_inst_3919_);
v___x_3936_ = lean_box(0);
v___x_3937_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3929_, v_a_3921_, v___x_3916_, v_toPure_3917_, v___x_3936_);
lean_dec_ref(v_a_3921_);
lean_dec_ref(v_body_3929_);
return v___x_3937_;
}
}
else
{
lean_object* v___x_3938_; lean_object* v___x_3940_; 
lean_dec_ref(v_a_3921_);
lean_dec(v_toBind_3920_);
lean_dec(v_inst_3919_);
lean_dec(v___x_3916_);
v___x_3938_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
if (v_isShared_3927_ == 0)
{
lean_ctor_set(v___x_3926_, 0, v___x_3938_);
v___x_3940_ = v___x_3926_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v___x_3938_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v_snd_3924_);
v___x_3940_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
v___x_3942_ = lean_apply_2(v_toPure_3917_, lean_box(0), v___x_3941_);
return v___x_3942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object* v___x_3946_, lean_object* v_toPure_3947_, lean_object* v_levels_x3f_3948_, lean_object* v_inst_3949_, lean_object* v_toBind_3950_, lean_object* v_a_3951_, lean_object* v_x_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(v___x_3946_, v_toPure_3947_, v_levels_x3f_3948_, v_inst_3949_, v_toBind_3950_, v_a_3951_, v_x_3952_, v___y_3953_);
lean_dec(v_levels_x3f_3948_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object* v_toPure_3955_, lean_object* v_levels_x3f_3956_, lean_object* v_inst_3957_, lean_object* v_toBind_3958_, lean_object* v_params_3959_, lean_object* v_inst_3960_, lean_object* v___f_3961_, lean_object* v_val_3962_){
_start:
{
lean_object* v___x_3963_; lean_object* v___f_3964_; lean_object* v___x_3965_; size_t v_sz_3966_; size_t v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3963_ = lean_box(0);
lean_inc(v_toBind_3958_);
v___f_3964_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed), 8, 5);
lean_closure_set(v___f_3964_, 0, v___x_3963_);
lean_closure_set(v___f_3964_, 1, v_toPure_3955_);
lean_closure_set(v___f_3964_, 2, v_levels_x3f_3956_);
lean_closure_set(v___f_3964_, 3, v_inst_3957_);
lean_closure_set(v___f_3964_, 4, v_toBind_3958_);
v___x_3965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3963_);
lean_ctor_set(v___x_3965_, 1, v_val_3962_);
v_sz_3966_ = lean_array_size(v_params_3959_);
v___x_3967_ = ((size_t)0ULL);
v___x_3968_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3960_, v_params_3959_, v___f_3964_, v_sz_3966_, v___x_3967_, v___x_3965_);
v___x_3969_ = lean_apply_4(v_toBind_3958_, lean_box(0), lean_box(0), v___x_3968_, v___f_3961_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object* v_cinfo_3970_, lean_object* v_us_3971_, uint8_t v___x_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_Lean_Core_instantiateValueLevelParams(v_cinfo_3970_, v_us_3971_, v___x_3972_, v___y_3975_, v___y_3976_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object* v_cinfo_3979_, lean_object* v_us_3980_, lean_object* v___x_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
uint8_t v___x_677__boxed_3987_; lean_object* v_res_3988_; 
v___x_677__boxed_3987_ = lean_unbox(v___x_3981_);
v_res_3988_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(v_cinfo_3979_, v_us_3980_, v___x_677__boxed_3987_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec_ref(v_cinfo_3979_);
return v_res_3988_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; 
v___x_3992_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2));
v___x_3993_ = lean_unsigned_to_nat(2u);
v___x_3994_ = lean_unsigned_to_nat(202u);
v___x_3995_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1));
v___x_3996_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0));
v___x_3997_ = l_mkPanicMessageWithDecl(v___x_3996_, v___x_3995_, v___x_3994_, v___x_3993_, v___x_3992_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object* v_cinfo_3998_, lean_object* v___x_3999_, lean_object* v_inst_4000_, lean_object* v_toBind_4001_, lean_object* v___f_4002_, lean_object* v_us_4003_){
_start:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; uint8_t v___x_4007_; 
v___x_4004_ = l_List_lengthTR___redArg(v_us_4003_);
v___x_4005_ = l_Lean_ConstantInfo_levelParams(v_cinfo_3998_);
v___x_4006_ = l_List_lengthTR___redArg(v___x_4005_);
lean_dec(v___x_4005_);
v___x_4007_ = lean_nat_dec_eq(v___x_4004_, v___x_4006_);
lean_dec(v___x_4006_);
lean_dec(v___x_4004_);
if (v___x_4007_ == 0)
{
lean_object* v___x_4008_; lean_object* v___x_4009_; 
lean_dec(v_us_4003_);
lean_dec(v___f_4002_);
lean_dec(v_toBind_4001_);
lean_dec(v_inst_4000_);
lean_dec_ref(v_cinfo_3998_);
v___x_4008_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3);
v___x_4009_ = l_panic___redArg(v___x_3999_, v___x_4008_);
return v___x_4009_;
}
else
{
uint8_t v___x_4010_; lean_object* v___x_4011_; lean_object* v___f_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4010_ = 0;
v___x_4011_ = lean_box(v___x_4010_);
v___f_4012_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_4012_, 0, v_cinfo_3998_);
lean_closure_set(v___f_4012_, 1, v_us_4003_);
lean_closure_set(v___f_4012_, 2, v___x_4011_);
v___x_4013_ = lean_apply_2(v_inst_4000_, lean_box(0), v___f_4012_);
v___x_4014_ = lean_apply_4(v_toBind_4001_, lean_box(0), lean_box(0), v___x_4013_, v___f_4002_);
return v___x_4014_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object* v_cinfo_4015_, lean_object* v___x_4016_, lean_object* v_inst_4017_, lean_object* v_toBind_4018_, lean_object* v___f_4019_, lean_object* v_us_4020_){
_start:
{
lean_object* v_res_4021_; 
v_res_4021_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(v_cinfo_4015_, v___x_4016_, v_inst_4017_, v_toBind_4018_, v___f_4019_, v_us_4020_);
lean_dec(v___x_4016_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object* v___x_4022_, lean_object* v_inst_4023_, lean_object* v_toBind_4024_, lean_object* v___f_4025_, lean_object* v_levels_x3f_4026_, lean_object* v_toPure_4027_, lean_object* v_cinfo_4028_){
_start:
{
lean_object* v___f_4029_; 
lean_inc(v_toBind_4024_);
lean_inc(v_inst_4023_);
lean_inc_ref(v_cinfo_4028_);
v___f_4029_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_4029_, 0, v_cinfo_4028_);
lean_closure_set(v___f_4029_, 1, v___x_4022_);
lean_closure_set(v___f_4029_, 2, v_inst_4023_);
lean_closure_set(v___f_4029_, 3, v_toBind_4024_);
lean_closure_set(v___f_4029_, 4, v___f_4025_);
if (lean_obj_tag(v_levels_x3f_4026_) == 0)
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
lean_dec(v_toPure_4027_);
v___x_4030_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVarsFor___boxed), 6, 1);
lean_closure_set(v___x_4030_, 0, v_cinfo_4028_);
v___x_4031_ = lean_apply_2(v_inst_4023_, lean_box(0), v___x_4030_);
v___x_4032_ = lean_apply_4(v_toBind_4024_, lean_box(0), lean_box(0), v___x_4031_, v___f_4029_);
return v___x_4032_;
}
else
{
lean_object* v_val_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
lean_dec_ref(v_cinfo_4028_);
lean_dec(v_inst_4023_);
v_val_4033_ = lean_ctor_get(v_levels_x3f_4026_, 0);
lean_inc(v_val_4033_);
lean_dec_ref_known(v_levels_x3f_4026_, 1);
v___x_4034_ = lean_apply_2(v_toPure_4027_, lean_box(0), v_val_4033_);
v___x_4035_ = lean_apply_4(v_toBind_4024_, lean_box(0), lean_box(0), v___x_4034_, v___f_4029_);
return v___x_4035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object* v_inst_4036_, lean_object* v_inst_4037_, lean_object* v_inst_4038_, lean_object* v_inst_4039_, lean_object* v_defaultFn_4040_, lean_object* v_levels_x3f_4041_, lean_object* v_params_4042_, lean_object* v_fieldVal_x3f_4043_){
_start:
{
lean_object* v_toApplicative_4044_; lean_object* v_toBind_4045_; lean_object* v_toPure_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___f_4049_; lean_object* v___f_4050_; lean_object* v___x_4051_; lean_object* v___f_4052_; lean_object* v___x_4053_; 
v_toApplicative_4044_ = lean_ctor_get(v_inst_4036_, 0);
v_toBind_4045_ = lean_ctor_get(v_inst_4036_, 1);
lean_inc_n(v_toBind_4045_, 3);
v_toPure_4046_ = lean_ctor_get(v_toApplicative_4044_, 1);
lean_inc_n(v_toPure_4046_, 3);
v___x_4047_ = lean_box(0);
lean_inc_ref_n(v_inst_4036_, 3);
v___x_4048_ = l_Lean_getConstInfo___redArg(v_inst_4036_, v_inst_4037_, v_inst_4038_, v_defaultFn_4040_);
lean_inc_n(v_inst_4039_, 2);
v___f_4049_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4049_, 0, v_inst_4036_);
lean_closure_set(v___f_4049_, 1, v_inst_4039_);
lean_closure_set(v___f_4049_, 2, v_fieldVal_x3f_4043_);
lean_closure_set(v___f_4049_, 3, v_toPure_4046_);
lean_inc(v_levels_x3f_4041_);
v___f_4050_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5), 8, 7);
lean_closure_set(v___f_4050_, 0, v_toPure_4046_);
lean_closure_set(v___f_4050_, 1, v_levels_x3f_4041_);
lean_closure_set(v___f_4050_, 2, v_inst_4039_);
lean_closure_set(v___f_4050_, 3, v_toBind_4045_);
lean_closure_set(v___f_4050_, 4, v_params_4042_);
lean_closure_set(v___f_4050_, 5, v_inst_4036_);
lean_closure_set(v___f_4050_, 6, v___f_4049_);
v___x_4051_ = l_instInhabitedOfMonad___redArg(v_inst_4036_, v___x_4047_);
v___f_4052_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8), 7, 6);
lean_closure_set(v___f_4052_, 0, v___x_4051_);
lean_closure_set(v___f_4052_, 1, v_inst_4039_);
lean_closure_set(v___f_4052_, 2, v_toBind_4045_);
lean_closure_set(v___f_4052_, 3, v___f_4050_);
lean_closure_set(v___f_4052_, 4, v_levels_x3f_4041_);
lean_closure_set(v___f_4052_, 5, v_toPure_4046_);
v___x_4053_ = lean_apply_4(v_toBind_4045_, lean_box(0), lean_box(0), v___x_4048_, v___f_4052_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object* v_m_4054_, lean_object* v_inst_4055_, lean_object* v_inst_4056_, lean_object* v_inst_4057_, lean_object* v_inst_4058_, lean_object* v_inst_4059_, lean_object* v_defaultFn_4060_, lean_object* v_levels_x3f_4061_, lean_object* v_params_4062_, lean_object* v_fieldVal_x3f_4063_){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(v_inst_4055_, v_inst_4056_, v_inst_4057_, v_inst_4058_, v_defaultFn_4060_, v_levels_x3f_4061_, v_params_4062_, v_fieldVal_x3f_4063_);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object* v_m_4065_, lean_object* v_inst_4066_, lean_object* v_inst_4067_, lean_object* v_inst_4068_, lean_object* v_inst_4069_, lean_object* v_inst_4070_, lean_object* v_defaultFn_4071_, lean_object* v_levels_x3f_4072_, lean_object* v_params_4073_, lean_object* v_fieldVal_x3f_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f(v_m_4065_, v_inst_4066_, v_inst_4067_, v_inst_4068_, v_inst_4069_, v_inst_4070_, v_defaultFn_4071_, v_levels_x3f_4072_, v_params_4073_, v_fieldVal_x3f_4074_);
lean_dec_ref(v_inst_4070_);
return v_res_4075_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Structure(builtin);
}
#ifdef __cplusplus
}
#endif
