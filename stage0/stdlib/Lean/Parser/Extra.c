// Lean compiler output
// Module: Lean.Parser.Extra
// Imports: Init Lean.Parser.Basic Lean.PrettyPrinter.Parenthesizer Lean.PrettyPrinter.Formatter
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
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_indent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__7;
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__17___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__5;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__10;
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__1;
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_5695____closed__21;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__3;
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object*);
extern lean_object* l_Lean_Parser_numLit___elambda__1___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_indent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___closed__1;
lean_object* l_Lean_Parser_group_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Int_Init_Data_Int_Basic___instance__2___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__8;
extern lean_object* l___kind_term____x40_Init_Notation___hyg_3____closed__14;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_charLitKind___closed__1;
extern lean_object* l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__9;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_toggleInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLit___elambda__1___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_try_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__4;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine;
lean_object* l_Lean_Parser_leadingNode_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__3;
lean_object* l_Lean_PrettyPrinter_Formatter_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__16___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__12;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Data_Format_0__Lean_Format_pushNewline___closed__1;
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__11;
extern lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3099____closed__4;
lean_object* l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip___closed__1;
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__1;
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind___closed__1;
extern lean_object* l_Lean_strLitKind___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_toggleInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__6;
lean_object* l_Lean_Parser_manyIndent(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__15___closed__3;
lean_object* l_Lean_Parser_ppSpace;
lean_object* l_Lean_Parser_ppHardSpace;
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppIndent(lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_manyIndent___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent(lean_object*);
extern lean_object* l_Lean_Parser_strLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__10;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__8;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__9;
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__11;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
lean_object* l_Lean_Parser_commandParser_formatter(lean_object*);
lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6;
lean_object* l_Lean_Parser_numLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_nameLit___elambda__1___closed__1;
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__14___closed__3;
lean_object* l_Lean_Parser_notSymbol(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__14___closed__3;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
lean_object* l_Lean_Parser_termParser_formatter(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__15___closed__3;
extern lean_object* l_Lean_Parser_ident___elambda__1___closed__1;
lean_object* l_Lean_Parser_checkColGeFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_formatter___closed__1;
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__7;
extern lean_object* l___kind_term____x40_Init_Notation___hyg_5638____closed__5;
lean_object* l_Lean_PrettyPrinter_Formatter_ppDedent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent___lambda__1___closed__1;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__17___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__6;
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_getIndent(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__7;
lean_object* l_Lean_Parser_many1Indent(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__16___closed__3;
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_mkAntiquot___closed__19;
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
lean_object* l_Lean_Parser_ident_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__12;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__8;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_many1_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__19___closed__3;
lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_5695____closed__9;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7___closed__1;
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__19___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__1;
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind___closed__1;
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_mkAntiquot___closed__1;
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_leadingNode_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = l_Lean_Parser_leadingNode_formatter___closed__1;
x_11 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_10, x_9, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_leadingNode_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l___kind_term____x40_Init_Notation___hyg_3____closed__14;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_termParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_termParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l___kind_term____x40_Init_Notation___hyg_3____closed__14;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3099____closed__4;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_commandParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_commandParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_commandParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3099____closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_5695____closed__9;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_toggleInsideQuot_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_5695____closed__21;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_5695____closed__9;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_toggleInsideQuot_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Init_Notation___hyg_5695____closed__21;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__19___closed__3;
x_7 = l_Lean_Parser_antiquotExpr_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__19___closed__3;
x_7 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__8;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_many_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__19;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___kind_term____x40_Init_Notation___hyg_5638____closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbol_formatter___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__11;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_51; 
x_51 = lean_box(0);
x_9 = x_51;
goto block_50;
}
else
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_2, 0);
lean_inc(x_52);
lean_dec(x_2);
x_9 = x_52;
goto block_50;
}
block_50:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_mkAntiquot___closed__1;
x_11 = l_Lean_Name_append(x_9, x_10);
lean_dec(x_9);
if (x_3 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed), 6, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_12);
x_15 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__1;
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = l_Lean_Parser_mkAntiquot___closed__3;
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_mkAntiquot_formatter___closed__7;
x_20 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_mkAntiquot_formatter___closed__9;
x_22 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_23, 0, x_15);
lean_closure_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_mkAntiquot_formatter___closed__4;
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_try_formatter), 6, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_11, x_28, x_4, x_5, x_6, x_7, x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_30 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nonReservedSymbol_formatter___boxed), 6, 1);
lean_closure_set(x_30, 0, x_1);
x_31 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_32 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_32, 0, x_31);
lean_closure_set(x_32, 1, x_30);
x_33 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__1;
x_34 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_34, 0, x_33);
lean_closure_set(x_34, 1, x_32);
x_35 = l_Lean_Parser_mkAntiquot___closed__3;
x_36 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_34);
x_37 = l_Lean_Parser_mkAntiquot_formatter___closed__12;
x_38 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter), 7, 2);
lean_closure_set(x_38, 0, x_36);
lean_closure_set(x_38, 1, x_37);
x_39 = l_Lean_Parser_mkAntiquot_formatter___closed__7;
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_40, 0, x_38);
lean_closure_set(x_40, 1, x_39);
x_41 = l_Lean_Parser_mkAntiquot_formatter___closed__9;
x_42 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_42, 0, x_41);
lean_closure_set(x_42, 1, x_40);
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_43, 0, x_33);
lean_closure_set(x_43, 1, x_42);
x_44 = l_Lean_Parser_mkAntiquot_formatter___closed__4;
x_45 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_45, 0, x_44);
lean_closure_set(x_45, 1, x_43);
x_46 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_47 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_47, 0, x_46);
lean_closure_set(x_47, 1, x_45);
x_48 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_try_formatter), 6, 1);
lean_closure_set(x_48, 0, x_47);
x_49 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_11, x_48, x_4, x_5, x_6, x_7, x_8);
return x_49;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Parser_mkAntiquot_formatter(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__8;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__19;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__1;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___kind_term____x40_Init_Notation___hyg_5638____closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbol_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__10;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__11;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_55; 
x_55 = lean_box(0);
x_9 = x_55;
goto block_54;
}
else
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_2, 0);
lean_inc(x_56);
lean_dec(x_2);
x_9 = x_56;
goto block_54;
}
block_54:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_mkAntiquot___closed__1;
x_11 = l_Lean_Name_append(x_9, x_10);
lean_dec(x_9);
if (x_3 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbol_parenthesizer___boxed), 3, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__8;
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__1;
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_mkAntiquot___closed__3;
x_20 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
x_22 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__9;
x_24 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_22);
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_25, 0, x_17);
lean_closure_set(x_25, 1, x_24);
x_26 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
x_28 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
x_29 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_27);
x_30 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer), 6, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_11, x_30, x_4, x_5, x_6, x_7, x_8);
return x_31;
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbol_parenthesizer___boxed), 3, 2);
lean_closure_set(x_34, 0, x_1);
lean_closure_set(x_34, 1, x_33);
x_35 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__8;
x_36 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_36, 0, x_35);
lean_closure_set(x_36, 1, x_34);
x_37 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__1;
x_38 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_38, 0, x_37);
lean_closure_set(x_38, 1, x_36);
x_39 = l_Lean_Parser_mkAntiquot___closed__3;
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_40, 0, x_39);
lean_closure_set(x_40, 1, x_38);
x_41 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__12;
x_42 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer), 7, 2);
lean_closure_set(x_42, 0, x_40);
lean_closure_set(x_42, 1, x_41);
x_43 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
x_44 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_44, 0, x_42);
lean_closure_set(x_44, 1, x_43);
x_45 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__9;
x_46 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_46, 0, x_45);
lean_closure_set(x_46, 1, x_44);
x_47 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_47, 0, x_37);
lean_closure_set(x_47, 1, x_46);
x_48 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
x_49 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_49, 0, x_48);
lean_closure_set(x_49, 1, x_47);
x_50 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
x_51 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_51, 0, x_50);
lean_closure_set(x_51, 1, x_49);
x_52 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_try_parenthesizer), 6, 1);
lean_closure_set(x_52, 0, x_51);
x_53 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_11, x_52, x_4, x_5, x_6, x_7, x_8);
return x_53;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Parser_mkAntiquot_parenthesizer(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
x_14 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_12, x_13, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_2);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_9);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
x_14 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_12, x_13, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_identKind___closed__1;
x_2 = l_Lean_Parser_ident___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_ident_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__19___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_ident_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_identKind___closed__1;
x_2 = l_Lean_Parser_ident___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_parenthesizer___closed__1;
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__19___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_numLitKind___closed__1;
x_2 = l_Lean_Parser_numLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_numLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__14___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_numLitKind___closed__1;
x_2 = l_Lean_Parser_numLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_parenthesizer___closed__1;
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__14___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_charLitKind___closed__1;
x_2 = l_Lean_Parser_charLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_charLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__16___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_charLitKind___closed__1;
x_2 = l_Lean_Parser_charLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_parenthesizer___closed__1;
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__16___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_strLitKind___closed__1;
x_2 = l_Lean_Parser_strLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_strLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__15___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_strLitKind___closed__1;
x_2 = l_Lean_Parser_strLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_parenthesizer___closed__1;
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__15___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_nameLitKind___closed__1;
x_2 = l_Lean_Parser_nameLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_nameLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__17___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_nameLitKind___closed__1;
x_2 = l_Lean_Parser_nameLit___elambda__1___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_parenthesizer___closed__1;
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__17___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_group_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_nullKind;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_nullKind;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_nullKind;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__7;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Formatter_many_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__7;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_many1_parenthesizer), 6, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("irrelevant");
return x_1;
}
}
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 4);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_10);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_3, 4, x_11);
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
lean_dec(x_12);
x_14 = l_Lean_FileMap_toPosition(x_9, x_10);
lean_dec(x_9);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_nat_dec_le(x_15, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Parser_many1Indent___lambda__1___closed__1;
x_18 = l_Lean_Parser_ParserState_mkError(x_4, x_17);
x_19 = l_Lean_nullKind;
x_20 = l_Lean_Parser_ParserState_mkNode(x_18, x_19, x_13);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_4, 3);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_inc(x_3);
x_22 = lean_apply_2(x_1, x_3, x_4);
x_23 = lean_ctor_get(x_22, 3);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = l_Lean_Parser_manyAux(x_2, x_3, x_22);
x_25 = l_Lean_nullKind;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_13);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_23);
lean_dec(x_3);
lean_dec(x_2);
x_27 = l_Lean_nullKind;
x_28 = l_Lean_Parser_ParserState_mkNode(x_22, x_27, x_13);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = l_Lean_nullKind;
x_30 = l_Lean_Parser_ParserState_mkNode(x_4, x_29, x_13);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_31 = lean_ctor_get(x_6, 0);
x_32 = lean_ctor_get(x_6, 1);
x_33 = lean_ctor_get(x_6, 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_6);
lean_inc(x_33);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_ctor_get(x_4, 1);
lean_inc(x_35);
lean_inc(x_35);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_3, 4, x_36);
lean_ctor_set(x_3, 0, x_34);
x_37 = lean_ctor_get(x_4, 0);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
lean_dec(x_37);
x_39 = l_Lean_FileMap_toPosition(x_33, x_35);
lean_dec(x_33);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_nat_dec_le(x_40, x_40);
lean_dec(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = l_Lean_Parser_many1Indent___lambda__1___closed__1;
x_43 = l_Lean_Parser_ParserState_mkError(x_4, x_42);
x_44 = l_Lean_nullKind;
x_45 = l_Lean_Parser_ParserState_mkNode(x_43, x_44, x_38);
return x_45;
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_4, 3);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_inc(x_3);
x_47 = lean_apply_2(x_1, x_3, x_4);
x_48 = lean_ctor_get(x_47, 3);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = l_Lean_Parser_manyAux(x_2, x_3, x_47);
x_50 = l_Lean_nullKind;
x_51 = l_Lean_Parser_ParserState_mkNode(x_49, x_50, x_38);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_48);
lean_dec(x_3);
lean_dec(x_2);
x_52 = l_Lean_nullKind;
x_53 = l_Lean_Parser_ParserState_mkNode(x_47, x_52, x_38);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_46);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = l_Lean_nullKind;
x_55 = l_Lean_Parser_ParserState_mkNode(x_4, x_54, x_38);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_56 = lean_ctor_get(x_3, 0);
x_57 = lean_ctor_get(x_3, 1);
x_58 = lean_ctor_get(x_3, 2);
x_59 = lean_ctor_get(x_3, 3);
x_60 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
x_61 = lean_ctor_get_uint8(x_3, sizeof(void*)*6 + 1);
x_62 = lean_ctor_get(x_3, 5);
lean_inc(x_62);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_3);
x_63 = lean_ctor_get(x_56, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_56, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_56, 2);
lean_inc(x_65);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 lean_ctor_release(x_56, 2);
 x_66 = x_56;
} else {
 lean_dec_ref(x_56);
 x_66 = lean_box(0);
}
lean_inc(x_65);
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 3, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_63);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_65);
x_68 = lean_ctor_get(x_4, 1);
lean_inc(x_68);
lean_inc(x_68);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_57);
lean_ctor_set(x_70, 2, x_58);
lean_ctor_set(x_70, 3, x_59);
lean_ctor_set(x_70, 4, x_69);
lean_ctor_set(x_70, 5, x_62);
lean_ctor_set_uint8(x_70, sizeof(void*)*6, x_60);
lean_ctor_set_uint8(x_70, sizeof(void*)*6 + 1, x_61);
x_71 = lean_ctor_get(x_4, 0);
lean_inc(x_71);
x_72 = lean_array_get_size(x_71);
lean_dec(x_71);
x_73 = l_Lean_FileMap_toPosition(x_65, x_68);
lean_dec(x_65);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_nat_dec_le(x_74, x_74);
lean_dec(x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_70);
lean_dec(x_2);
lean_dec(x_1);
x_76 = l_Lean_Parser_many1Indent___lambda__1___closed__1;
x_77 = l_Lean_Parser_ParserState_mkError(x_4, x_76);
x_78 = l_Lean_nullKind;
x_79 = l_Lean_Parser_ParserState_mkNode(x_77, x_78, x_72);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_4, 3);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_inc(x_70);
x_81 = lean_apply_2(x_1, x_70, x_4);
x_82 = lean_ctor_get(x_81, 3);
lean_inc(x_82);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = l_Lean_Parser_manyAux(x_2, x_70, x_81);
x_84 = l_Lean_nullKind;
x_85 = l_Lean_Parser_ParserState_mkNode(x_83, x_84, x_72);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_82);
lean_dec(x_70);
lean_dec(x_2);
x_86 = l_Lean_nullKind;
x_87 = l_Lean_Parser_ParserState_mkNode(x_81, x_86, x_72);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_80);
lean_dec(x_70);
lean_dec(x_2);
lean_dec(x_1);
x_88 = l_Lean_nullKind;
x_89 = l_Lean_Parser_ParserState_mkNode(x_4, x_88, x_72);
return x_89;
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_many1Indent___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_many1Indent___lambda__1___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_many1Indent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_Parser_many1Indent___closed__1;
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_many1Indent___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_5);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___closed__7;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_PrettyPrinter_Formatter_many_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___closed__7;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_many_parenthesizer), 6, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_manyIndent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 4);
lean_dec(x_6);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_2, 4, x_9);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
lean_dec(x_10);
x_12 = l_Lean_Parser_manyAux(x_1, x_2, x_3);
x_13 = l_Lean_nullKind;
x_14 = l_Lean_Parser_ParserState_mkNode(x_12, x_13, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_ctor_get(x_5, 2);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_2, 4, x_20);
lean_ctor_set(x_2, 0, x_18);
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
x_23 = l_Lean_Parser_manyAux(x_1, x_2, x_3);
x_24 = l_Lean_nullKind;
x_25 = l_Lean_Parser_ParserState_mkNode(x_23, x_24, x_22);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_26 = lean_ctor_get(x_2, 0);
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_2, 2);
x_29 = lean_ctor_get(x_2, 3);
x_30 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
x_31 = lean_ctor_get_uint8(x_2, sizeof(void*)*6 + 1);
x_32 = lean_ctor_get(x_2, 5);
lean_inc(x_32);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_2);
x_33 = lean_ctor_get(x_26, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_26, 2);
lean_inc(x_35);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 x_36 = x_26;
} else {
 lean_dec_ref(x_26);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 3, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_33);
lean_ctor_set(x_37, 1, x_34);
lean_ctor_set(x_37, 2, x_35);
x_38 = lean_ctor_get(x_3, 1);
lean_inc(x_38);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_27);
lean_ctor_set(x_40, 2, x_28);
lean_ctor_set(x_40, 3, x_29);
lean_ctor_set(x_40, 4, x_39);
lean_ctor_set(x_40, 5, x_32);
lean_ctor_set_uint8(x_40, sizeof(void*)*6, x_30);
lean_ctor_set_uint8(x_40, sizeof(void*)*6 + 1, x_31);
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = l_Lean_Parser_manyAux(x_1, x_40, x_3);
x_44 = l_Lean_nullKind;
x_45 = l_Lean_Parser_ParserState_mkNode(x_43, x_44, x_42);
return x_45;
}
}
}
lean_object* l_Lean_Parser_manyIndent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Lean_Parser_many1Indent___closed__1;
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_5);
x_8 = l_Lean_Parser_noFirstTokenInfo(x_4);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_manyIndent___lambda__1), 3, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_formatter___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_parenthesizer___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_parenthesizer(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_String_trim(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
x_5 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_ppHardSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ppSpace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ppLine() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_skip___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_ppGroup(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppGroup(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppIndent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppIndent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppDedent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppDedent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Array_foldlMUnsafe_fold___at_Lean_ppGoal___spec__7___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_push(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppHardSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_pushLine(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Data_Format_0__Lean_Format_pushNewline___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1;
x_7 = l_Lean_PrettyPrinter_Formatter_push(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppLine_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_ppLine_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppGroup_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_indent___boxed), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Lean_PrettyPrinter_Formatter_group(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ppDedent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_Lean_Format_getIndent(x_7);
lean_dec(x_7);
x_9 = lean_nat_to_int(x_8);
x_10 = l_Int_Init_Data_Int_Basic___instance__2___closed__1;
x_11 = lean_int_sub(x_10, x_9);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_12, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_12);
return x_13;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppHardSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppHardSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppLine_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppLine_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Formatter(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Extra(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_leadingNode_formatter___closed__1 = _init_l_Lean_Parser_leadingNode_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_leadingNode_formatter___closed__1);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__4);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__6);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6);
l_Lean_Parser_antiquotExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_formatter___closed__1);
l_Lean_Parser_antiquotExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
l_Lean_Parser_mkAntiquot_formatter___closed__1 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__1);
l_Lean_Parser_mkAntiquot_formatter___closed__2 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__2);
l_Lean_Parser_mkAntiquot_formatter___closed__3 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__3);
l_Lean_Parser_mkAntiquot_formatter___closed__4 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__4);
l_Lean_Parser_mkAntiquot_formatter___closed__5 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__5);
l_Lean_Parser_mkAntiquot_formatter___closed__6 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__6);
l_Lean_Parser_mkAntiquot_formatter___closed__7 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__7);
l_Lean_Parser_mkAntiquot_formatter___closed__8 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__8);
l_Lean_Parser_mkAntiquot_formatter___closed__9 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__9);
l_Lean_Parser_mkAntiquot_formatter___closed__10 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__10);
l_Lean_Parser_mkAntiquot_formatter___closed__11 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__11);
l_Lean_Parser_mkAntiquot_formatter___closed__12 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__12);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__1 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__1);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__2 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__2);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__3 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__3);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__4 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__5 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__5);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__6 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__6);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__7 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__7);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__8 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__8);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__9 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__9);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__10 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__10);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__11 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__11);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__12 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__12);
l_Lean_Parser_ident_formatter___closed__1 = _init_l_Lean_Parser_ident_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_formatter___closed__1);
l_Lean_Parser_ident_parenthesizer___closed__1 = _init_l_Lean_Parser_ident_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_parenthesizer___closed__1);
l_Lean_Parser_numLit_formatter___closed__1 = _init_l_Lean_Parser_numLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__1);
l_Lean_Parser_numLit_parenthesizer___closed__1 = _init_l_Lean_Parser_numLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_parenthesizer___closed__1);
l_Lean_Parser_charLit_formatter___closed__1 = _init_l_Lean_Parser_charLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__1);
l_Lean_Parser_charLit_parenthesizer___closed__1 = _init_l_Lean_Parser_charLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_parenthesizer___closed__1);
l_Lean_Parser_strLit_formatter___closed__1 = _init_l_Lean_Parser_strLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__1);
l_Lean_Parser_strLit_parenthesizer___closed__1 = _init_l_Lean_Parser_strLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_parenthesizer___closed__1);
l_Lean_Parser_nameLit_formatter___closed__1 = _init_l_Lean_Parser_nameLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__1);
l_Lean_Parser_nameLit_parenthesizer___closed__1 = _init_l_Lean_Parser_nameLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_parenthesizer___closed__1);
l_Lean_Parser_many1Indent___lambda__1___closed__1 = _init_l_Lean_Parser_many1Indent___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent___lambda__1___closed__1);
l_Lean_Parser_many1Indent___closed__1 = _init_l_Lean_Parser_many1Indent___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent___closed__1);
l_Lean_Parser_ppHardSpace = _init_l_Lean_Parser_ppHardSpace();
lean_mark_persistent(l_Lean_Parser_ppHardSpace);
l_Lean_Parser_ppSpace = _init_l_Lean_Parser_ppSpace();
lean_mark_persistent(l_Lean_Parser_ppSpace);
l_Lean_Parser_ppLine = _init_l_Lean_Parser_ppLine();
lean_mark_persistent(l_Lean_Parser_ppLine);
l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1 = _init_l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1();
lean_mark_persistent(l_Lean_PrettyPrinter_Formatter_ppLine_formatter___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
