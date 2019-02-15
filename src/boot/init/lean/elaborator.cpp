// Lean compiler output
// Module: init.lean.elaborator
// Imports: init.lean.parser.module init.lean.expander init.lean.expr init.lean.options
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_parser_token__map_insert___rarg(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
obj* l_lean_elaborator_locally___rarg___lambda__2(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_command_variables;
extern "C" obj* lean_expr_mk_pi(obj*, uint8, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj*);
obj* l_lean_elaborator_module_header_elaborate___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main___closed__1;
obj* l_lean_elaborator_level__get__app__args___main(obj*, obj*, obj*);
obj* l_lean_elaborator_elab__def__like(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_sort(obj*);
obj* l_lean_elaborator_run___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj*);
obj* l_lean_elaborator_attrs__to__pexpr(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj*);
extern obj* l_lean_parser_command_attribute_has__view;
obj* l_lean_elaborator_namespace_elaborate(obj*, obj*, obj*);
obj* l_rbnode_balance2__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj*);
obj* l_lean_elaborator_match__spec___closed__1;
obj* l_lean_elaborator_resolve__context___main___closed__1;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj*, obj*);
extern obj* l_lean_parser_level_leading_has__view;
extern obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj*, obj*);
obj* l_list_foldl___main___at_lean_expr_mk__app___spec__1(obj*, obj*);
obj* l_lean_elaborator_run___lambda__5(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__2;
obj* l_lean_elaborator_end__scope___lambda__3___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_declaration;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
obj* l_lean_elaborator_to__level(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj*);
obj* l_lean_elaborator_get__namespace(obj*);
obj* l_lean_elaborator_level__add(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__7;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj*, obj*, obj*);
extern obj* l_lean_parser_command_export_has__view;
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__33;
obj* l_lean_elaborator_to__pexpr___main___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
obj* l_lean_elaborator_include_elaborate(obj*, obj*, obj*);
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
obj* l_list_filter__map___main___rarg(obj*, obj*);
extern obj* l_lean_parser_term_match_has__view;
obj* l_lean_elaborator_current__command___rarg___closed__1;
obj* l_lean_elaborator_level__get__app__args(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
extern obj* l_lean_parser_command_open;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
obj* l_lean_elaborator_run___lambda__2___closed__1;
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___closed__1;
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__26;
obj* l_lean_kvmap_set__string(obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___closed__1;
obj* l_lean_elaborator_mk__eqns___closed__2;
obj* l_lean_elaborator_locally___rarg___lambda__3(obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__4(obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__31;
obj* l_lean_elaborator_register__notation__macro(obj*, obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj*, obj*, obj*);
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state(obj*);
obj* l_lean_elaborator_variables_elaborate___closed__2;
uint8 l_lean_elaborator_match__precedence___main(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__39;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_elaborator_run___closed__6;
extern obj* l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
extern obj* l_lean_parser_command_open_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj*, obj*, obj*, obj*);
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
extern "C" obj* lean_expr_mk_lit(obj*);
obj* l_lean_elaborator_run___lambda__8(obj*);
extern "C" obj* lean_expr_local(obj*, obj*, obj*, uint8);
extern obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_lean_parser_term_simple__binder_view_to__binder__info___main(obj*);
extern obj* l_lean_parser_command_set__option;
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj*, obj*);
obj* l_lean_elaborator_max__recursion;
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___closed__1;
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj*, obj*);
obj* l_lean_elaborator_elab__def__like___closed__1;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation___closed__1;
obj* l_list_zip___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__6;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_check_elaborate(obj*, obj*, obj*);
extern obj* l_lean_expander_builtin__transformers;
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj*, obj*, obj*);
uint8 l_coe__decidable__eq(uint8);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation;
obj* l_lean_elaborator_elaborator__t;
obj* l_lean_elaborator_current__command(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj*, obj*, obj*);
obj* l_lean_kvmap_set__name(obj*, obj*, obj*);
uint8 l_lean_elaborator_is__open__namespace(obj*, obj*);
obj* l_lean_elaborator_elaborators;
obj* l_lean_elaborator_commands_elaborate(uint8, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_string__lit_has__view;
extern obj* l_lean_parser_term_pi_has__view;
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj*, obj*);
extern obj* l_lean_parser_command_universe_has__view;
extern "C" obj* lean_expr_mk_mdata(obj*, obj*);
obj* l_lean_elaborator_locally___rarg(obj*, obj*, obj*);
obj* l_state__t_monad__state___rarg(obj*);
obj* l_lean_elaborator_elaborator__m;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
extern "C" obj* lean_expr_mk_lambda(obj*, uint8, obj*, obj*);
obj* l_reader__t_monad__reader__adapter(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_kvmap_set__nat(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
obj* l_lean_elaborator_declaration_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_to__level___main___closed__4;
obj* l_lean_elaborator_check_elaborate___closed__1;
extern obj* l_lean_parser_command_include;
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj*, obj*, obj*);
obj* l_lean_environment_contains___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj*, obj*, obj*, obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
extern "C" obj* lean_expr_mk_const(obj*, obj*);
extern obj* l_lean_parser_command_reserve__notation;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_except__t_monad__except___rarg(obj*);
extern obj* l_lean_parser_term_have_has__view;
obj* l_lean_elaborator_init__quot_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
extern obj* l_lean_parser_command_variables_has__view;
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l_lean_kvmap_set__bool(obj*, obj*, uint8);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__32;
obj* l_lean_elaborator_end__scope___lambda__1(obj*, obj*);
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_lean_parser_trie_insert___rarg(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj*, obj*, obj*);
obj* l_rbnode_mk__insert__result___main___rarg(uint8, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2;
obj* l_lean_elaborator_preresolve___main(obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg___closed__1;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj*, obj*);
uint8 l_option_is__some___main___rarg(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__5;
obj* l_lean_elaborator_yield__to__outside___rarg(obj*);
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__3;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj*, obj*);
obj* l_lean_name_replace__prefix___main(obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj*, obj*);
obj* l_lean_elaborator_open_elaborate(obj*, obj*, obj*);
extern obj* l_lean_parser_command_section_has__view;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(obj*, obj*);
obj* l_lean_elaborator_mangle__ident(obj*);
obj* l_lean_elaborator_universe_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__4;
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj*, obj*, obj*);
obj* l_lean_parser_syntax_get__pos(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
extern "C" obj* level_mk_imax(obj*, obj*);
obj* l_lean_environment_mk__empty___boxed(obj*);
obj* l_lean_elaborator_attribute_elaborate___closed__2;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
obj* l_list_zip__with___main___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_run___closed__3;
obj* l_lean_elaborator_reserve__notation_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_simple__binders__to__pexpr(obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_is__open__namespace___boxed(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__47;
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj*, obj*, obj*);
obj* l_lean_elaborator_match__open__spec(obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__11;
obj* l_lean_elaborator_ordered__rbmap_empty(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__16;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj*, obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_name_to__string__with__sep___main(obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__17;
extern obj* l_lean_parser_module_header;
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__36;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj*);
obj* l_lean_elaborator_update__parser__config(obj*, obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_elaborator_run___lambda__4___closed__1;
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__46;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj*, obj*);
obj* l_monad__coroutine__trans___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj*, obj*);
obj* l_except__t_lift___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__10;
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj*);
obj* l_lean_elaborator_run(obj*);
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj*);
obj* l_lean_elaborator_match__precedence___boxed(obj*, obj*);
extern obj* l_lean_message__log_empty;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_export_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__38;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj*);
uint8 l_lean_elaborator_is__open__namespace___main(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj*, obj*, obj*);
extern obj* l_char_has__repr___closed__1;
extern "C" obj* lean_environment_mk_empty(obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except(obj*);
obj* l_coroutine_bind___main___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_coelaborator;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj*, obj*, obj*);
extern obj* l_lean_expander_binding__annotation__update;
extern obj* l_lean_parser_command_attribute;
extern obj* l_lean_parser_term_let_has__view;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj*, obj*, obj*, obj*);
extern "C" obj* level_mk_succ(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__45;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__14;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj*);
obj* l_lean_elaborator_get__namespace___rarg(obj*);
obj* l_lean_elaborator_universe_elaborate___closed__2;
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_projection_has__view;
obj* l_lean_elaborator_variables_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj*, obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_coelaborator__m;
obj* l_lean_elaborator_yield__to__outside___rarg___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__12;
obj* l_lean_elaborator_with__current__command(obj*);
obj* l_lean_parser_syntax_to__format___main(obj*);
obj* l_lean_name_append___main(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
extern obj* l_string_join___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__35;
obj* l_lean_elaborator_to__pexpr___main___closed__25;
obj* l_lean_elaborator_names__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_command_check_has__view;
obj* l_lean_elaborator_run___closed__4;
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_set__option_elaborate(obj*, obj*, obj*);
obj* l_reader__t_read___rarg(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context___main(obj*, obj*, obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_max__prec;
obj* l_lean_elaborator_notation_elaborate__aux(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__2;
extern obj* l_lean_options_mk;
obj* l_lean_parser_module_yield__command___lambda__3(obj*, obj*);
obj* l_lean_elaborator_universe_elaborate___closed__1;
obj* l_monad__state__trans___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__20;
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
obj* l_lean_expander_get__opt__type___main(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_term_struct__inst_has__view;
obj* l_lean_elaborator_run___lambda__7(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_lambda_has__view;
obj* l_lean_elaborator_mk__eqns___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(uint8, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj*);
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___main(uint8, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj*);
obj* l_lean_elaborator_run___lambda__3(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj*);
obj* l_lean_elaborator_resolve__context(obj*, obj*, obj*);
obj* l_except__t_monad___rarg(obj*);
extern "C" obj* lean_expr_mk_let(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_app_has__view;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
obj* l_lean_elaborator_to__level___main(obj*, obj*, obj*);
extern obj* l_lean_parser_ident__univs_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__9;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj*);
obj* l_state__t_monad__except___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
obj* l_reader__t_monad__except___rarg(obj*);
extern obj* l_lean_parser_term_sort__app_has__view;
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj*);
extern obj* l_lean_parser_term_explicit_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj*, obj*);
obj* l_lean_elaborator_current__command___rarg(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
obj* l_lean_elaborator_prec__to__nat(obj*);
obj* l_lean_parser_term_get__leading(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__1;
extern obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__24;
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_term_parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate(obj*, obj*, obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__13;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__3;
obj* l_lean_elaborator_to__level___main___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__27;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__4(obj*, obj*, obj*, obj*);
obj* l_state__t_monad___rarg(obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
obj* l_lean_format_pretty(obj*, obj*);
extern obj* l_lean_parser_command_namespace_has__view;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__15;
obj* l_lean_elaborator_notation_elaborate___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__18;
obj* l_lean_elaborator_elaborator__t_monad(obj*);
extern obj* l_lean_parser_term_inaccessible_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__2;
obj* l_lean_elaborator_dummy;
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj*, obj*);
obj* l_lean_elaborator_run___closed__5;
extern obj* l_coroutine_monad___closed__1;
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_module_header_elaborate(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_parser_syntax_kind___main(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__2;
obj* l_lean_elaborator_section_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve(obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
extern obj* l_lean_parser_module_header_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj*, obj*, obj*);
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__1;
extern obj* l_lean_parser_command_section;
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj*, obj*, obj*);
obj* l_reader__t_lift(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__21;
extern "C" obj* level_mk_max(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_struct__inst__item_has__view;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj*);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_match__precedence___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_borrowed_has__view;
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj*);
obj* l_lean_parser_term_binders_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_find(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_universe;
obj* l_lean_elaborator_to__pexpr___main___closed__19;
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
extern obj* l_lean_parser_term_show_has__view;
obj* l_lean_elaborator_run___lambda__6(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__1;
obj* l_except__t_lift___rarg___lambda__1(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj*);
obj* l_lean_level_of__nat___main(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
extern obj* l_lean_parser_syntax_reprint__lst___main___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__22;
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj*);
obj* l_lean_parser_term_binder__ident_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj*, obj*, obj*);
obj* l_lean_elaborator_coelaborator__m_monad__coroutine;
obj* l_list_length__aux___main___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__8;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__43;
uint8 l_rbnode_get__color___main___rarg(obj*);
obj* l_lean_elaborator_attribute_elaborate___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj*);
uint8 l_lean_elaborator_match__precedence(obj*, obj*);
obj* l_lean_elaborator_elaborator;
obj* l_lean_elaborator_to__pexpr___main___closed__23;
obj* l_string_trim(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__34;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj*, obj*, obj*);
extern obj* l_lean_parser_term_sort_has__view;
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_locally(obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
obj* l_lean_elaborator_to__level___main___closed__2;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj*, obj*, obj*);
extern obj* l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_match__spec(obj*, obj*);
obj* l_lean_expander_mk__notation__transformer(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__30;
obj* l_lean_expr_local___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__eqns(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__1(obj*);
obj* l_lean_elaborator_level__add___main(obj*, obj*);
obj* l_lean_elaborator_elaborate__command___boxed(obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_lean_expr_mk__capp(obj*, obj*);
extern "C" obj* level_mk_mvar(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8, obj*, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_app(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj*);
obj* l_lean_elaborator_run___lambda__1___closed__1;
extern obj* l_lean_parser_command_declaration_has__view;
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
extern obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
obj* l_lean_elaborator_run___closed__7;
obj* l_lean_kvmap_insert__core___main(obj*, obj*, obj*);
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__28;
obj* l_lean_elaborator_to__level___main___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_end_has__view;
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj*, obj*, obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
extern obj* l_lean_parser_term_anonymous__constructor_has__view;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__37;
obj* l_lean_elaborator_attribute_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj*);
extern obj* l_lean_parser_command_init__quot;
obj* l_lean_elaborator_variables_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__41;
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj*);
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj*, obj*);
obj* l_rbtree_to__list___rarg(obj*);
obj* l_coroutine_pure___rarg(obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_rbnode_balance1__node___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj*, obj*);
obj* l_lean_elaborator_postprocess__notation__spec(obj*);
obj* l_lean_elaborator_elab__def__like___closed__2;
extern obj* l_lean_parser_command_include_has__view;
extern obj* l_lean_parser_command_namespace;
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj*, obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj*);
obj* l_lean_elaborator_old__elab__command(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj*);
obj* l_lean_file__map_to__position(obj*, obj*);
extern "C" obj* level_mk_param(obj*);
obj* l_lean_name_quick__lt___main(obj*, obj*);
obj* l_state__t_lift___rarg(obj*, obj*, obj*, obj*);
extern "C" obj* lean_elaborator_elaborate_command(obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj*, obj*, obj*);
extern obj* l_lean_expander_get__opt__type___main___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_level_trailing_has__view;
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___closed__1;
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__29;
extern obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
obj* l_option_map___rarg(obj*, obj*);
extern obj* l_lean_expander_no__expansion___closed__1;
extern "C" obj* lean_expr_mk_bvar(obj*);
obj* l_coroutine_yield___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__40;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj*);
extern "C" obj* lean_expr_mk_mvar(obj*, obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj*);
obj* l_lean_elaborator_command_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_prec__to__nat___main(obj*);
obj* l_lean_elaborator_with__current__command___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj*, obj*, uint8, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__42;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
extern "C" uint8 lean_environment_contains(obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation_has__view;
extern obj* l_lean_parser_command_check;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_max__commands;
extern obj* l_lean_parser_command_export;
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__44;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
obj* l_lean_elaborator_init__quot_elaborate___closed__1;
obj* l_lean_elaborator_postprocess__notation__spec___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
extern obj* l_lean_parser_command_set__option_has__view;
obj* l_lean_environment_mk__empty___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* l_lean_environment_contains___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean_environment_contains(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_expr_local___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_3);
x_5 = lean_expr_local(x_0, x_1, x_2, x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborate__command___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_elaborator_elaborate_command(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_8);
return x_8;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_6; 
lean::dec(x_0);
lean::inc(x_1);
x_6 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
return x_6;
}
case 1:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_19; uint8 x_20; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 2);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 3);
lean::inc(x_13);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_15 = x_1;
}
lean::inc(x_9);
lean::inc(x_2);
lean::inc(x_0);
x_19 = lean::apply_2(x_0, x_2, x_9);
x_20 = lean::unbox(x_19);
lean::dec(x_19);
if (x_20 == 0)
{
obj* x_25; uint8 x_26; 
lean::inc(x_2);
lean::inc(x_9);
lean::inc(x_0);
x_25 = lean::apply_2(x_0, x_9, x_2);
x_26 = lean::unbox(x_25);
lean::dec(x_25);
if (x_26 == 0)
{
obj* x_31; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_0);
if (lean::is_scalar(x_15)) {
 x_31 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_31 = x_15;
}
lean::cnstr_set(x_31, 0, x_7);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_13);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
x_32 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_13, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_33 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_33 = x_15;
}
lean::cnstr_set(x_33, 0, x_7);
lean::cnstr_set(x_33, 1, x_9);
lean::cnstr_set(x_33, 2, x_11);
lean::cnstr_set(x_33, 3, x_32);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
x_34 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_7, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_35 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_35 = x_15;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
lean::cnstr_set(x_35, 2, x_11);
lean::cnstr_set(x_35, 3, x_13);
return x_35;
}
}
default:
{
obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_48; uint8 x_49; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_1, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_1, 2);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_1, 3);
lean::inc(x_42);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_44 = x_1;
}
lean::inc(x_38);
lean::inc(x_2);
lean::inc(x_0);
x_48 = lean::apply_2(x_0, x_2, x_38);
x_49 = lean::unbox(x_48);
lean::dec(x_48);
if (x_49 == 0)
{
obj* x_54; uint8 x_55; 
lean::inc(x_2);
lean::inc(x_38);
lean::inc(x_0);
x_54 = lean::apply_2(x_0, x_38, x_2);
x_55 = lean::unbox(x_54);
lean::dec(x_54);
if (x_55 == 0)
{
obj* x_60; 
lean::dec(x_0);
lean::dec(x_38);
lean::dec(x_40);
if (lean::is_scalar(x_44)) {
 x_60 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_60 = x_44;
}
lean::cnstr_set(x_60, 0, x_36);
lean::cnstr_set(x_60, 1, x_2);
lean::cnstr_set(x_60, 2, x_3);
lean::cnstr_set(x_60, 3, x_42);
return x_60;
}
else
{
uint8 x_62; 
lean::inc(x_42);
x_62 = l_rbnode_get__color___main___rarg(x_42);
if (x_62 == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_44);
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_42, x_2, x_3);
x_65 = l_rbnode_balance2__node___main___rarg(x_64, x_38, x_40, x_36);
return x_65;
}
else
{
obj* x_66; obj* x_67; 
x_66 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_42, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_67 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_67 = x_44;
}
lean::cnstr_set(x_67, 0, x_36);
lean::cnstr_set(x_67, 1, x_38);
lean::cnstr_set(x_67, 2, x_40);
lean::cnstr_set(x_67, 3, x_66);
return x_67;
}
}
}
else
{
uint8 x_69; 
lean::inc(x_36);
x_69 = l_rbnode_get__color___main___rarg(x_36);
if (x_69 == 0)
{
obj* x_71; obj* x_72; 
lean::dec(x_44);
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_36, x_2, x_3);
x_72 = l_rbnode_balance1__node___main___rarg(x_71, x_38, x_40, x_42);
return x_72;
}
else
{
obj* x_73; obj* x_74; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_36, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_74 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_74 = x_44;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_38);
lean::cnstr_set(x_74, 2, x_40);
lean::cnstr_set(x_74, 3, x_42);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::inc(x_1);
x_5 = l_rbnode_get__color___main___rarg(x_1);
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_mk__insert__result___main___rarg(x_5, x_6);
return x_7;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_18);
lean::dec(x_12);
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_17);
lean::cnstr_set(x_22, 2, x_19);
return x_22;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_8 = lean::box(0);
return x_8;
}
case 1:
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 3);
lean::inc(x_15);
lean::dec(x_2);
lean::inc(x_11);
lean::inc(x_3);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_3, x_11);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_27; uint8 x_28; 
lean::dec(x_9);
lean::inc(x_3);
lean::inc(x_0);
x_27 = lean::apply_2(x_0, x_11, x_3);
x_28 = lean::unbox(x_27);
lean::dec(x_27);
if (x_28 == 0)
{
obj* x_33; 
lean::dec(x_15);
lean::dec(x_3);
lean::dec(x_0);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_13);
return x_33;
}
else
{
lean::dec(x_13);
x_1 = x_0;
x_2 = x_15;
goto _start;
}
}
else
{
lean::dec(x_15);
lean::dec(x_13);
lean::dec(x_11);
x_1 = x_0;
x_2 = x_9;
goto _start;
}
}
default:
{
obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_52; uint8 x_53; 
x_40 = lean::cnstr_get(x_2, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 2);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 3);
lean::inc(x_46);
lean::dec(x_2);
lean::inc(x_42);
lean::inc(x_3);
lean::inc(x_0);
x_52 = lean::apply_2(x_0, x_3, x_42);
x_53 = lean::unbox(x_52);
lean::dec(x_52);
if (x_53 == 0)
{
obj* x_58; uint8 x_59; 
lean::dec(x_40);
lean::inc(x_3);
lean::inc(x_0);
x_58 = lean::apply_2(x_0, x_42, x_3);
x_59 = lean::unbox(x_58);
lean::dec(x_58);
if (x_59 == 0)
{
obj* x_64; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_46);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_44);
return x_64;
}
else
{
lean::dec(x_44);
x_1 = x_0;
x_2 = x_46;
goto _start;
}
}
else
{
lean::dec(x_44);
lean::dec(x_46);
lean::dec(x_42);
x_1 = x_0;
x_2 = x_40;
goto _start;
}
}
}
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg), 4, 0);
return x_4;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_6 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_3, x_2);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_find___rarg), 3, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_6; 
lean::dec(x_0);
lean::inc(x_1);
x_6 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
return x_6;
}
case 1:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_19; uint8 x_20; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 2);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 3);
lean::inc(x_13);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_15 = x_1;
}
lean::inc(x_9);
lean::inc(x_2);
lean::inc(x_0);
x_19 = lean::apply_2(x_0, x_2, x_9);
x_20 = lean::unbox(x_19);
lean::dec(x_19);
if (x_20 == 0)
{
obj* x_25; uint8 x_26; 
lean::inc(x_2);
lean::inc(x_9);
lean::inc(x_0);
x_25 = lean::apply_2(x_0, x_9, x_2);
x_26 = lean::unbox(x_25);
lean::dec(x_25);
if (x_26 == 0)
{
obj* x_31; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_0);
if (lean::is_scalar(x_15)) {
 x_31 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_31 = x_15;
}
lean::cnstr_set(x_31, 0, x_7);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_13);
return x_31;
}
else
{
obj* x_32; obj* x_33; 
x_32 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_13, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_33 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_33 = x_15;
}
lean::cnstr_set(x_33, 0, x_7);
lean::cnstr_set(x_33, 1, x_9);
lean::cnstr_set(x_33, 2, x_11);
lean::cnstr_set(x_33, 3, x_32);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
x_34 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_7, x_2, x_3);
if (lean::is_scalar(x_15)) {
 x_35 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_35 = x_15;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
lean::cnstr_set(x_35, 2, x_11);
lean::cnstr_set(x_35, 3, x_13);
return x_35;
}
}
default:
{
obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_48; uint8 x_49; 
x_36 = lean::cnstr_get(x_1, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_1, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_1, 2);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_1, 3);
lean::inc(x_42);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 lean::cnstr_release(x_1, 2);
 lean::cnstr_release(x_1, 3);
 x_44 = x_1;
}
lean::inc(x_38);
lean::inc(x_2);
lean::inc(x_0);
x_48 = lean::apply_2(x_0, x_2, x_38);
x_49 = lean::unbox(x_48);
lean::dec(x_48);
if (x_49 == 0)
{
obj* x_54; uint8 x_55; 
lean::inc(x_2);
lean::inc(x_38);
lean::inc(x_0);
x_54 = lean::apply_2(x_0, x_38, x_2);
x_55 = lean::unbox(x_54);
lean::dec(x_54);
if (x_55 == 0)
{
obj* x_60; 
lean::dec(x_0);
lean::dec(x_38);
lean::dec(x_40);
if (lean::is_scalar(x_44)) {
 x_60 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_60 = x_44;
}
lean::cnstr_set(x_60, 0, x_36);
lean::cnstr_set(x_60, 1, x_2);
lean::cnstr_set(x_60, 2, x_3);
lean::cnstr_set(x_60, 3, x_42);
return x_60;
}
else
{
uint8 x_62; 
lean::inc(x_42);
x_62 = l_rbnode_get__color___main___rarg(x_42);
if (x_62 == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_44);
x_64 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_42, x_2, x_3);
x_65 = l_rbnode_balance2__node___main___rarg(x_64, x_38, x_40, x_36);
return x_65;
}
else
{
obj* x_66; obj* x_67; 
x_66 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_42, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_67 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_67 = x_44;
}
lean::cnstr_set(x_67, 0, x_36);
lean::cnstr_set(x_67, 1, x_38);
lean::cnstr_set(x_67, 2, x_40);
lean::cnstr_set(x_67, 3, x_66);
return x_67;
}
}
}
else
{
uint8 x_69; 
lean::inc(x_36);
x_69 = l_rbnode_get__color___main___rarg(x_36);
if (x_69 == 0)
{
obj* x_71; obj* x_72; 
lean::dec(x_44);
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_36, x_2, x_3);
x_72 = l_rbnode_balance1__node___main___rarg(x_71, x_38, x_40, x_42);
return x_72;
}
else
{
obj* x_73; obj* x_74; 
x_73 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_36, x_2, x_3);
if (lean::is_scalar(x_44)) {
 x_74 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_74 = x_44;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_38);
lean::cnstr_set(x_74, 2, x_40);
lean::cnstr_set(x_74, 3, x_42);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::inc(x_1);
x_5 = l_rbnode_get__color___main___rarg(x_1);
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_1, x_2, x_3);
x_7 = l_rbnode_mk__insert__result___main___rarg(x_5, x_6);
return x_7;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_22; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_18);
lean::dec(x_12);
x_22 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_17);
lean::cnstr_set(x_22, 2, x_19);
return x_22;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_8);
return x_8;
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
lean::dec(x_2);
return x_1;
}
else
{
obj* x_5; obj* x_7; obj* x_10; obj* x_12; obj* x_16; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
lean::inc(x_0);
x_16 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(x_0, x_1, x_10, x_12);
x_1 = x_16;
x_2 = x_7;
goto _start;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; 
x_2 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
lean::inc(x_2);
x_4 = l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__6___rarg(x_0, x_2, x_1);
return x_4;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_of__list___rarg), 2, 0);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = l_reader__t_monad___rarg(x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_except__t_monad___rarg(x_0);
lean::inc(x_1);
x_3 = l_state__t_monad___rarg(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_4, 0, lean::box(0));
lean::closure_set(x_4, 1, lean::box(0));
lean::closure_set(x_4, 2, x_3);
x_5 = l_state__t_monad__state___rarg(x_1);
x_6 = l_monad__state__trans___rarg(x_4, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__state___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
lean::inc(x_0);
x_2 = l_except__t_monad___rarg(x_0);
x_3 = l_except__t_monad__except___rarg(x_0);
x_4 = l_state__t_monad__except___rarg(x_2, lean::box(0), x_3);
x_5 = l_reader__t_monad__except___rarg(x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__except___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_lean_elaborator_elaborator__t() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_5 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_5 = x_1;
}
if (lean::is_scalar(x_5)) {
 x_6 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_6 = x_5;
}
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::apply_1(x_0, x_8);
return x_11;
}
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 0);
return x_4;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_3, x_0, x_1, x_5);
return x_8;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_2);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_lean_elaborator_command_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_3, x_0, x_1, x_2);
return x_4;
}
}
obj* _init_l_lean_elaborator_coelaborator__m_monad__coroutine() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_0 = l_coroutine_monad___closed__1;
lean::inc(x_0);
x_2 = l_lean_elaborator_elaborator__t_monad___rarg(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, x_2);
lean::inc(x_0);
x_5 = l_except__t_monad___rarg(x_0);
lean::inc(x_5);
x_7 = l_state__t_monad___rarg(x_5);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_8, 0, lean::box(0));
lean::closure_set(x_8, 1, lean::box(0));
lean::closure_set(x_8, 2, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_lift___rarg), 4, 1);
lean::closure_set(x_9, 0, x_5);
lean::inc(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg), 3, 1);
lean::closure_set(x_11, 0, x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_yield___rarg), 2, 0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_15, 0, x_8);
lean::closure_set(x_15, 1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_16, 0, x_3);
lean::closure_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_monad__reader__adapter), 5, 4);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, lean::box(0));
lean::closure_set(x_3, 3, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* _init_l_lean_elaborator_current__command___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1), 1, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_current__command___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_5; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = l_lean_elaborator_current__command___rarg___closed__1;
lean::inc(x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_2);
return x_5;
}
}
obj* l_lean_elaborator_current__command(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 1, 0);
return x_4;
}
}
obj* l_lean_elaborator_with__current__command___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_5);
x_7 = lean::apply_4(x_1, x_2, x_3, x_4, x_0);
return x_7;
}
}
obj* l_lean_elaborator_with__current__command(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; 
lean::dec(x_1);
x_5 = lean::apply_2(x_0, x_2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_0, x_3, x_1, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_1);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__coe__coelaborator___lambda__1), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean_name_mk_numeral(x_0, x_3);
x_0 = x_8;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_mangle__ident(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 2);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 4);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(x_1, x_3);
return x_6;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = l_lean_parser_syntax_get__pos(x_0);
x_14 = lean::mk_nat_obj(0u);
x_15 = l_option_get__or__else___main___rarg(x_13, x_14);
x_16 = l_lean_file__map_to__position(x_10, x_15);
x_17 = lean::box(0);
x_18 = 2;
x_19 = l_string_join___closed__1;
lean::inc(x_19);
x_21 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_17);
lean::cnstr_set(x_21, 3, x_19);
lean::cnstr_set(x_21, 4, x_1);
lean::cnstr_set_scalar(x_21, sizeof(void*)*5, x_18);
x_22 = x_21;
x_23 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* _init_l_lean_elaborator_level__get__app__args___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("level_get_app_args: unexpected input: ");
return x_0;
}
}
obj* l_lean_elaborator_level__get__app__args___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::inc(x_0);
x_4 = l_lean_parser_syntax_kind___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_4);
lean::inc(x_0);
x_7 = l_lean_parser_syntax_to__format___main(x_0);
x_8 = lean::mk_nat_obj(80u);
x_9 = l_lean_format_pretty(x_7, x_8);
x_10 = l_lean_elaborator_level__get__app__args___main___closed__1;
lean::inc(x_10);
x_12 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_14 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
return x_14;
}
else
{
obj* x_15; obj* x_18; uint8 x_19; 
x_15 = lean::cnstr_get(x_4, 0);
lean::inc(x_15);
lean::dec(x_4);
x_18 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_19 = lean_name_dec_eq(x_15, x_18);
if (x_19 == 0)
{
obj* x_20; uint8 x_21; 
x_20 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_21 = lean_name_dec_eq(x_15, x_20);
lean::dec(x_15);
if (x_21 == 0)
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_31; 
lean::inc(x_0);
x_24 = l_lean_parser_syntax_to__format___main(x_0);
x_25 = lean::mk_nat_obj(80u);
x_26 = l_lean_format_pretty(x_24, x_25);
x_27 = l_lean_elaborator_level__get__app__args___main___closed__1;
lean::inc(x_27);
x_29 = lean::string_append(x_27, x_26);
lean::dec(x_26);
x_31 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_29, x_1, x_2);
return x_31;
}
else
{
obj* x_32; obj* x_33; obj* x_36; 
x_32 = l_lean_parser_level_trailing_has__view;
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
lean::inc(x_0);
x_36 = lean::apply_1(x_33, x_0);
if (lean::obj_tag(x_36) == 0)
{
obj* x_38; obj* x_41; obj* x_43; 
lean::dec(x_0);
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
lean::dec(x_36);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = l_lean_elaborator_level__get__app__args___main(x_41, x_1, x_2);
if (lean::obj_tag(x_43) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_38);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_47 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_47 = x_43;
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_49 = lean::cnstr_get(x_43, 0);
lean::inc(x_49);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_51 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_51 = x_43;
}
x_52 = lean::cnstr_get(x_49, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_49, 1);
lean::inc(x_54);
if (lean::is_shared(x_49)) {
 lean::dec(x_49);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_49, 0);
 lean::cnstr_release(x_49, 1);
 x_56 = x_49;
}
x_57 = lean::cnstr_get(x_52, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_52, 1);
lean::inc(x_59);
if (lean::is_shared(x_52)) {
 lean::dec(x_52);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_61 = x_52;
}
x_62 = lean::cnstr_get(x_38, 1);
lean::inc(x_62);
lean::dec(x_38);
x_65 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_65, 0, x_62);
lean::cnstr_set(x_65, 1, x_59);
if (lean::is_scalar(x_56)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_56;
}
lean::cnstr_set(x_66, 0, x_57);
lean::cnstr_set(x_66, 1, x_65);
if (lean::is_scalar(x_61)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_61;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_51;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_1);
lean::dec(x_36);
x_71 = lean::box(0);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_0);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_2);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_73);
return x_74;
}
}
}
else
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_1);
lean::dec(x_15);
x_77 = lean::box(0);
x_78 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_78, 0, x_0);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_2);
x_80 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
}
}
obj* l_lean_elaborator_level__get__app__args(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_level__add___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_1, x_2);
lean::dec(x_2);
if (x_3 == 0)
{
obj* x_5; obj* x_6; obj* x_9; obj* x_10; 
x_5 = lean::mk_nat_obj(1u);
x_6 = lean::nat_sub(x_1, x_5);
lean::dec(x_5);
lean::dec(x_1);
x_9 = l_lean_elaborator_level__add___main(x_0, x_6);
x_10 = level_mk_succ(x_9);
return x_10;
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_lean_elaborator_level__add(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add___main(x_0, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_0, x_5);
x_9 = level_mk_max(x_3, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_0, x_5);
x_9 = level_mk_imax(x_3, x_8);
return x_9;
}
}
}
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_level: unexpected input: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed universe level");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = level_mk_mvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown universe variable '");
return x_0;
}
}
obj* l_lean_elaborator_to__level___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_10 = x_5;
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_26; 
x_12 = lean::cnstr_get(x_5, 0);
lean::inc(x_12);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_14 = x_5;
}
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 x_19 = x_12;
}
x_20 = lean::cnstr_get(x_15, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_15, 1);
lean::inc(x_22);
lean::dec(x_15);
lean::inc(x_20);
x_26 = l_lean_parser_syntax_kind___main(x_20);
if (lean::obj_tag(x_26) == 0)
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_40; 
lean::dec(x_22);
lean::dec(x_26);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_20);
lean::inc(x_0);
x_33 = l_lean_parser_syntax_to__format___main(x_0);
x_34 = lean::mk_nat_obj(80u);
x_35 = l_lean_format_pretty(x_33, x_34);
x_36 = l_lean_elaborator_to__level___main___closed__1;
lean::inc(x_36);
x_38 = lean::string_append(x_36, x_35);
lean::dec(x_35);
x_40 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_38, x_1, x_17);
return x_40;
}
else
{
obj* x_41; obj* x_44; uint8 x_45; 
x_41 = lean::cnstr_get(x_26, 0);
lean::inc(x_41);
lean::dec(x_26);
x_44 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_45 = lean_name_dec_eq(x_41, x_44);
if (x_45 == 0)
{
obj* x_46; uint8 x_47; 
x_46 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_47 = lean_name_dec_eq(x_41, x_46);
lean::dec(x_41);
if (x_47 == 0)
{
obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_61; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_20);
lean::inc(x_0);
x_54 = l_lean_parser_syntax_to__format___main(x_0);
x_55 = lean::mk_nat_obj(80u);
x_56 = l_lean_format_pretty(x_54, x_55);
x_57 = l_lean_elaborator_to__level___main___closed__1;
lean::inc(x_57);
x_59 = lean::string_append(x_57, x_56);
lean::dec(x_56);
x_61 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_59, x_1, x_17);
return x_61;
}
else
{
obj* x_62; obj* x_63; obj* x_65; 
x_62 = l_lean_parser_level_trailing_has__view;
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::apply_1(x_63, x_20);
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_65);
x_70 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_70);
x_72 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_70, x_1, x_17);
return x_72;
}
else
{
obj* x_73; 
x_73 = lean::cnstr_get(x_65, 0);
lean::inc(x_73);
lean::dec(x_65);
if (lean::obj_tag(x_22) == 0)
{
obj* x_78; obj* x_80; 
lean::dec(x_22);
lean::dec(x_0);
x_78 = lean::cnstr_get(x_73, 0);
lean::inc(x_78);
x_80 = l_lean_elaborator_to__level___main(x_78, x_1, x_17);
if (lean::obj_tag(x_80) == 0)
{
obj* x_83; obj* x_86; 
lean::dec(x_19);
lean::dec(x_73);
x_83 = lean::cnstr_get(x_80, 0);
lean::inc(x_83);
lean::dec(x_80);
if (lean::is_scalar(x_14)) {
 x_86 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_86 = x_14;
 lean::cnstr_set_tag(x_14, 0);
}
lean::cnstr_set(x_86, 0, x_83);
return x_86;
}
else
{
obj* x_87; obj* x_90; obj* x_92; obj* x_95; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
x_87 = lean::cnstr_get(x_80, 0);
lean::inc(x_87);
lean::dec(x_80);
x_90 = lean::cnstr_get(x_87, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_87, 1);
lean::inc(x_92);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_73, 2);
lean::inc(x_95);
lean::dec(x_73);
x_98 = l_lean_parser_number_view_to__nat___main(x_95);
x_99 = l_lean_elaborator_level__add___main(x_90, x_98);
if (lean::is_scalar(x_19)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_19;
}
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_92);
if (lean::is_scalar(x_14)) {
 x_101 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_101 = x_14;
}
lean::cnstr_set(x_101, 0, x_100);
return x_101;
}
}
else
{
obj* x_106; obj* x_108; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_73);
x_106 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_106);
x_108 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_106, x_1, x_17);
return x_108;
}
}
}
}
else
{
obj* x_110; obj* x_111; obj* x_113; 
lean::dec(x_41);
x_110 = l_lean_parser_level_leading_has__view;
x_111 = lean::cnstr_get(x_110, 0);
lean::inc(x_111);
x_113 = lean::apply_1(x_111, x_20);
switch (lean::obj_tag(x_113)) {
case 0:
{
lean::dec(x_113);
if (lean::obj_tag(x_22) == 0)
{
obj* x_118; obj* x_120; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
x_118 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_118);
x_120 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_118, x_1, x_17);
return x_120;
}
else
{
obj* x_122; obj* x_124; obj* x_128; 
lean::dec(x_0);
x_122 = lean::cnstr_get(x_22, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_22, 1);
lean::inc(x_124);
lean::dec(x_22);
lean::inc(x_1);
x_128 = l_lean_elaborator_to__level___main(x_122, x_1, x_17);
if (lean::obj_tag(x_128) == 0)
{
obj* x_132; obj* x_135; 
lean::dec(x_1);
lean::dec(x_19);
lean::dec(x_124);
x_132 = lean::cnstr_get(x_128, 0);
lean::inc(x_132);
lean::dec(x_128);
if (lean::is_scalar(x_14)) {
 x_135 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_135 = x_14;
 lean::cnstr_set_tag(x_14, 0);
}
lean::cnstr_set(x_135, 0, x_132);
return x_135;
}
else
{
obj* x_136; obj* x_139; obj* x_141; obj* x_144; 
x_136 = lean::cnstr_get(x_128, 0);
lean::inc(x_136);
lean::dec(x_128);
x_139 = lean::cnstr_get(x_136, 0);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_136, 1);
lean::inc(x_141);
lean::dec(x_136);
x_144 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_124, x_1, x_141);
if (lean::obj_tag(x_144) == 0)
{
obj* x_147; obj* x_150; 
lean::dec(x_19);
lean::dec(x_139);
x_147 = lean::cnstr_get(x_144, 0);
lean::inc(x_147);
lean::dec(x_144);
if (lean::is_scalar(x_14)) {
 x_150 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_150 = x_14;
 lean::cnstr_set_tag(x_14, 0);
}
lean::cnstr_set(x_150, 0, x_147);
return x_150;
}
else
{
obj* x_151; obj* x_154; obj* x_156; obj* x_159; obj* x_160; obj* x_161; 
x_151 = lean::cnstr_get(x_144, 0);
lean::inc(x_151);
lean::dec(x_144);
x_154 = lean::cnstr_get(x_151, 0);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_151, 1);
lean::inc(x_156);
lean::dec(x_151);
x_159 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_139, x_154);
if (lean::is_scalar(x_19)) {
 x_160 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_160 = x_19;
}
lean::cnstr_set(x_160, 0, x_159);
lean::cnstr_set(x_160, 1, x_156);
if (lean::is_scalar(x_14)) {
 x_161 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_161 = x_14;
}
lean::cnstr_set(x_161, 0, x_160);
return x_161;
}
}
}
}
case 1:
{
lean::dec(x_113);
if (lean::obj_tag(x_22) == 0)
{
obj* x_166; obj* x_168; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
x_166 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_166);
x_168 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_166, x_1, x_17);
return x_168;
}
else
{
obj* x_170; obj* x_172; obj* x_176; 
lean::dec(x_0);
x_170 = lean::cnstr_get(x_22, 0);
lean::inc(x_170);
x_172 = lean::cnstr_get(x_22, 1);
lean::inc(x_172);
lean::dec(x_22);
lean::inc(x_1);
x_176 = l_lean_elaborator_to__level___main(x_170, x_1, x_17);
if (lean::obj_tag(x_176) == 0)
{
obj* x_180; obj* x_183; 
lean::dec(x_1);
lean::dec(x_19);
lean::dec(x_172);
x_180 = lean::cnstr_get(x_176, 0);
lean::inc(x_180);
lean::dec(x_176);
if (lean::is_scalar(x_14)) {
 x_183 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_183 = x_14;
 lean::cnstr_set_tag(x_14, 0);
}
lean::cnstr_set(x_183, 0, x_180);
return x_183;
}
else
{
obj* x_184; obj* x_187; obj* x_189; obj* x_192; 
x_184 = lean::cnstr_get(x_176, 0);
lean::inc(x_184);
lean::dec(x_176);
x_187 = lean::cnstr_get(x_184, 0);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_184, 1);
lean::inc(x_189);
lean::dec(x_184);
x_192 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_172, x_1, x_189);
if (lean::obj_tag(x_192) == 0)
{
obj* x_195; obj* x_198; 
lean::dec(x_19);
lean::dec(x_187);
x_195 = lean::cnstr_get(x_192, 0);
lean::inc(x_195);
lean::dec(x_192);
if (lean::is_scalar(x_14)) {
 x_198 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_198 = x_14;
 lean::cnstr_set_tag(x_14, 0);
}
lean::cnstr_set(x_198, 0, x_195);
return x_198;
}
else
{
obj* x_199; obj* x_202; obj* x_204; obj* x_207; obj* x_208; obj* x_209; 
x_199 = lean::cnstr_get(x_192, 0);
lean::inc(x_199);
lean::dec(x_192);
x_202 = lean::cnstr_get(x_199, 0);
lean::inc(x_202);
x_204 = lean::cnstr_get(x_199, 1);
lean::inc(x_204);
lean::dec(x_199);
x_207 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_187, x_202);
if (lean::is_scalar(x_19)) {
 x_208 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_208 = x_19;
}
lean::cnstr_set(x_208, 0, x_207);
lean::cnstr_set(x_208, 1, x_204);
if (lean::is_scalar(x_14)) {
 x_209 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_209 = x_14;
}
lean::cnstr_set(x_209, 0, x_208);
return x_209;
}
}
}
}
case 2:
{
lean::dec(x_113);
if (lean::obj_tag(x_22) == 0)
{
obj* x_214; obj* x_216; obj* x_217; 
lean::dec(x_22);
lean::dec(x_1);
lean::dec(x_0);
x_214 = l_lean_elaborator_to__level___main___closed__3;
lean::inc(x_214);
if (lean::is_scalar(x_19)) {
 x_216 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_216 = x_19;
}
lean::cnstr_set(x_216, 0, x_214);
lean::cnstr_set(x_216, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_217 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_217 = x_14;
}
lean::cnstr_set(x_217, 0, x_216);
return x_217;
}
else
{
obj* x_221; obj* x_223; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
x_221 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_221);
x_223 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_221, x_1, x_17);
return x_223;
}
}
case 3:
{
obj* x_228; obj* x_230; 
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
lean::dec(x_113);
x_228 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_228);
x_230 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_228, x_1, x_17);
return x_230;
}
case 4:
{
obj* x_231; 
x_231 = lean::cnstr_get(x_113, 0);
lean::inc(x_231);
lean::dec(x_113);
if (lean::obj_tag(x_22) == 0)
{
obj* x_237; obj* x_238; obj* x_239; obj* x_240; 
lean::dec(x_22);
lean::dec(x_1);
lean::dec(x_0);
x_237 = l_lean_parser_number_view_to__nat___main(x_231);
x_238 = l_lean_level_of__nat___main(x_237);
if (lean::is_scalar(x_19)) {
 x_239 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_239 = x_19;
}
lean::cnstr_set(x_239, 0, x_238);
lean::cnstr_set(x_239, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_240 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_240 = x_14;
}
lean::cnstr_set(x_240, 0, x_239);
return x_240;
}
else
{
obj* x_245; obj* x_247; 
lean::dec(x_231);
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
x_245 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_245);
x_247 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_245, x_1, x_17);
return x_247;
}
}
default:
{
obj* x_248; 
x_248 = lean::cnstr_get(x_113, 0);
lean::inc(x_248);
lean::dec(x_113);
if (lean::obj_tag(x_22) == 0)
{
obj* x_252; obj* x_253; obj* x_255; obj* x_259; 
lean::dec(x_22);
x_252 = l_lean_elaborator_mangle__ident(x_248);
x_253 = lean::cnstr_get(x_17, 4);
lean::inc(x_253);
x_255 = lean::cnstr_get(x_253, 1);
lean::inc(x_255);
lean::dec(x_253);
lean::inc(x_252);
x_259 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_255, x_252);
if (lean::obj_tag(x_259) == 0)
{
obj* x_263; obj* x_265; obj* x_266; obj* x_268; obj* x_270; obj* x_271; obj* x_272; 
lean::dec(x_259);
lean::dec(x_14);
lean::dec(x_19);
x_263 = l_lean_name_to__string___closed__1;
lean::inc(x_263);
x_265 = l_lean_name_to__string__with__sep___main(x_263, x_252);
x_266 = l_lean_elaborator_to__level___main___closed__4;
lean::inc(x_266);
x_268 = lean::string_append(x_266, x_265);
lean::dec(x_265);
x_270 = l_char_has__repr___closed__1;
x_271 = lean::string_append(x_268, x_270);
x_272 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_271, x_1, x_17);
return x_272;
}
else
{
obj* x_276; obj* x_277; obj* x_278; 
lean::dec(x_259);
lean::dec(x_1);
lean::dec(x_0);
x_276 = level_mk_param(x_252);
if (lean::is_scalar(x_19)) {
 x_277 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_277 = x_19;
}
lean::cnstr_set(x_277, 0, x_276);
lean::cnstr_set(x_277, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_278 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_278 = x_14;
}
lean::cnstr_set(x_278, 0, x_277);
return x_278;
}
}
else
{
obj* x_283; obj* x_285; 
lean::dec(x_248);
lean::dec(x_22);
lean::dec(x_14);
lean::dec(x_19);
x_283 = l_lean_elaborator_to__level___main___closed__2;
lean::inc(x_283);
x_285 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_283, x_1, x_17);
return x_285;
}
}
}
}
}
}
}
}
obj* l_lean_elaborator_to__level(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__level___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_expr_mk__annotation___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_expr_mk__annotation(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; 
x_2 = lean::box(0);
x_3 = l_lean_elaborator_expr_mk__annotation___closed__1;
lean::inc(x_3);
x_5 = l_lean_kvmap_set__name(x_2, x_3, x_0);
x_6 = lean_expr_mk_mdata(x_5, x_1);
return x_6;
}
}
obj* _init_l_lean_elaborator_dummy() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Prop");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean_expr_mk_const(x_3, x_0);
return x_4;
}
}
obj* _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_9 = x_1;
}
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
lean::dec(x_5);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
lean::inc(x_0);
x_21 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_7);
x_22 = 4;
lean::inc(x_10);
x_24 = lean_expr_local(x_10, x_10, x_0, x_22);
x_25 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
lean::inc(x_25);
x_27 = l_lean_elaborator_expr_mk__annotation(x_25, x_24);
x_28 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_27, x_15);
x_29 = lean_expr_mk_app(x_28, x_17);
if (lean::is_scalar(x_9)) {
 x_30 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_30 = x_9;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_21);
return x_30;
}
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("pre_equations");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__eqns(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; 
x_2 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_1);
x_3 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_3);
x_5 = l_lean_expr_mk__capp(x_3, x_2);
x_6 = l_lean_elaborator_mk__eqns___closed__2;
lean::inc(x_6);
x_8 = l_lean_elaborator_expr_mk__annotation(x_6, x_5);
return x_8;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_0, x_5);
x_9 = lean_expr_mk_app(x_3, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
 lean::cnstr_set_tag(x_27, 0);
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_match_fn");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::inc(x_1);
x_16 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_13, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_8);
x_21 = lean::cnstr_get(x_16, 0);
lean::inc(x_21);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_23 = x_16;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_37; 
x_25 = lean::cnstr_get(x_16, 0);
lean::inc(x_25);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_27 = x_16;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = lean::cnstr_get(x_8, 2);
lean::inc(x_33);
lean::dec(x_8);
lean::inc(x_1);
x_37 = l_lean_elaborator_to__pexpr___main(x_33, x_1, x_30);
if (lean::obj_tag(x_37) == 0)
{
obj* x_43; obj* x_46; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_28);
lean::dec(x_32);
x_43 = lean::cnstr_get(x_37, 0);
lean::inc(x_43);
lean::dec(x_37);
if (lean::is_scalar(x_27)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_27;
 lean::cnstr_set_tag(x_27, 0);
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_52; obj* x_54; obj* x_55; 
x_47 = lean::cnstr_get(x_37, 0);
lean::inc(x_47);
lean::dec(x_37);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_54 = x_47;
}
x_55 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_10, x_1, x_52);
if (lean::obj_tag(x_55) == 0)
{
obj* x_61; obj* x_64; 
lean::dec(x_12);
lean::dec(x_50);
lean::dec(x_28);
lean::dec(x_32);
lean::dec(x_54);
x_61 = lean::cnstr_get(x_55, 0);
lean::inc(x_61);
lean::dec(x_55);
if (lean::is_scalar(x_27)) {
 x_64 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_64 = x_27;
 lean::cnstr_set_tag(x_27, 0);
}
lean::cnstr_set(x_64, 0, x_61);
return x_64;
}
else
{
obj* x_65; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_74; obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
x_65 = lean::cnstr_get(x_55, 0);
lean::inc(x_65);
lean::dec(x_55);
x_68 = lean::cnstr_get(x_65, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_65, 1);
lean::inc(x_70);
if (lean::is_shared(x_65)) {
 lean::dec(x_65);
 x_72 = lean::box(0);
} else {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_72 = x_65;
}
if (lean::is_scalar(x_32)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_32;
}
lean::cnstr_set(x_73, 0, x_28);
lean::cnstr_set(x_73, 1, x_50);
x_74 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
lean::inc(x_74);
if (lean::is_scalar(x_54)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_54;
}
lean::cnstr_set(x_76, 0, x_74);
lean::cnstr_set(x_76, 1, x_73);
if (lean::is_scalar(x_12)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_12;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_68);
if (lean::is_scalar(x_72)) {
 x_78 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_78 = x_72;
}
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_70);
if (lean::is_scalar(x_27)) {
 x_79 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_79 = x_27;
}
lean::cnstr_set(x_79, 0, x_78);
return x_79;
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
 lean::cnstr_set_tag(x_27, 0);
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_10; uint8 x_11; 
lean::dec(x_7);
x_10 = 1;
x_11 = l_coe__decidable__eq(x_10);
if (x_11 == 0)
{
obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_3);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_0);
return x_15;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_0);
x_17 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_5);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_22 = x_17;
}
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_3);
lean::cnstr_set(x_23, 1, x_18);
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_20);
return x_24;
}
}
else
{
uint8 x_26; uint8 x_27; 
lean::dec(x_7);
x_26 = 0;
x_27 = l_coe__decidable__eq(x_26);
if (x_27 == 0)
{
obj* x_30; obj* x_31; 
lean::dec(x_5);
lean::dec(x_3);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_0);
return x_31;
}
else
{
obj* x_33; obj* x_34; obj* x_36; obj* x_38; obj* x_39; obj* x_40; 
lean::dec(x_0);
x_33 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_5);
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
if (lean::is_shared(x_33)) {
 lean::dec(x_33);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_38 = x_33;
}
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_3);
lean::cnstr_set(x_39, 1, x_34);
if (lean::is_scalar(x_38)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_38;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_36);
return x_40;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_10; uint8 x_11; 
lean::dec(x_7);
x_10 = 0;
x_11 = l_coe__decidable__eq(x_10);
if (x_11 == 0)
{
obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_3);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_0);
return x_15;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_0);
x_17 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_22 = x_17;
}
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_3);
lean::cnstr_set(x_23, 1, x_18);
if (lean::is_scalar(x_22)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_22;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_20);
return x_24;
}
}
else
{
obj* x_25; obj* x_28; 
x_25 = lean::cnstr_get(x_7, 0);
lean::inc(x_25);
lean::dec(x_7);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
if (lean::obj_tag(x_28) == 0)
{
uint8 x_32; uint8 x_33; 
lean::dec(x_28);
x_32 = 0;
x_33 = l_coe__decidable__eq(x_32);
if (x_33 == 0)
{
obj* x_36; obj* x_37; 
lean::dec(x_5);
lean::dec(x_3);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_0);
return x_37;
}
else
{
obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_0);
x_39 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 lean::cnstr_release(x_39, 1);
 x_44 = x_39;
}
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_3);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
return x_46;
}
}
else
{
uint8 x_48; uint8 x_49; 
lean::dec(x_28);
x_48 = 1;
x_49 = l_coe__decidable__eq(x_48);
if (x_49 == 0)
{
obj* x_52; obj* x_53; 
lean::dec(x_5);
lean::dec(x_3);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_0);
return x_53;
}
else
{
obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_0);
x_55 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_5);
x_56 = lean::cnstr_get(x_55, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_55, 1);
lean::inc(x_58);
if (lean::is_shared(x_55)) {
 lean::dec(x_55);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_55, 0);
 lean::cnstr_release(x_55, 1);
 x_60 = x_55;
}
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_3);
lean::cnstr_set(x_61, 1, x_56);
if (lean::is_scalar(x_60)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_60;
}
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_58);
return x_62;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unreachable");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
 lean::cnstr_set_tag(x_36, 0);
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean_expr_mk_mdata(x_66, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_88);
lean::dec(x_92);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
 lean::cnstr_set_tag(x_87, 0);
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_expr_mk_sort(x_0);
return x_1;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_6);
x_10 = lean_expr_mk_app(x_4, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
 lean::cnstr_set_tag(x_34, 0);
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
 lean::cnstr_set_tag(x_81, 0);
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
 lean::cnstr_set_tag(x_121, 0);
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
 lean::cnstr_set_tag(x_36, 0);
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean_expr_mk_mdata(x_66, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_88);
lean::dec(x_92);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
 lean::cnstr_set_tag(x_87, 0);
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_6);
x_10 = lean_expr_mk_app(x_4, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
 lean::cnstr_set_tag(x_34, 0);
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
 lean::cnstr_set_tag(x_81, 0);
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
 lean::cnstr_set_tag(x_121, 0);
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
 lean::cnstr_set_tag(x_36, 0);
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean_expr_mk_mdata(x_66, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_88);
lean::dec(x_92);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
 lean::cnstr_set_tag(x_87, 0);
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_6);
x_10 = lean_expr_mk_app(x_4, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
 lean::cnstr_set_tag(x_34, 0);
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
 lean::cnstr_set_tag(x_81, 0);
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
 lean::cnstr_set_tag(x_121, 0);
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_18; obj* x_21; obj* x_24; 
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::inc(x_2);
x_24 = l_lean_elaborator_to__pexpr___main(x_21, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_24, 0);
lean::inc(x_30);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
if (lean::is_shared(x_24)) {
 lean::dec(x_24);
 x_36 = lean::box(0);
} else {
 lean::cnstr_release(x_24, 0);
 x_36 = x_24;
}
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 lean::cnstr_release(x_34, 1);
 x_41 = x_34;
}
x_42 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_12, x_2, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_37);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_42, 0);
lean::inc(x_47);
lean::dec(x_42);
if (lean::is_scalar(x_36)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_36;
 lean::cnstr_set_tag(x_36, 0);
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_51 = lean::cnstr_get(x_42, 0);
lean::inc(x_51);
lean::dec(x_42);
x_54 = lean::cnstr_get(x_51, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_51, 1);
lean::inc(x_56);
lean::dec(x_51);
x_59 = lean::box(0);
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
lean::dec(x_18);
x_63 = l_lean_elaborator_mangle__ident(x_60);
x_64 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
lean::inc(x_64);
x_66 = l_lean_kvmap_set__name(x_59, x_64, x_63);
x_67 = lean_expr_mk_mdata(x_66, x_37);
if (lean::is_scalar(x_14)) {
 x_68 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_68 = x_14;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_54);
if (lean::is_scalar(x_41)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_41;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_56);
if (lean::is_scalar(x_36)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_36;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
else
{
obj* x_72; obj* x_76; 
lean::dec(x_15);
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_72);
lean::inc(x_0);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_81 = lean::cnstr_get(x_76, 0);
lean::inc(x_81);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_83 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_83 = x_76;
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_81);
return x_84;
}
else
{
obj* x_85; obj* x_87; obj* x_88; obj* x_90; obj* x_92; obj* x_93; 
x_85 = lean::cnstr_get(x_76, 0);
lean::inc(x_85);
if (lean::is_shared(x_76)) {
 lean::dec(x_76);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_76, 0);
 x_87 = x_76;
}
x_88 = lean::cnstr_get(x_85, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get(x_85, 1);
lean::inc(x_90);
if (lean::is_shared(x_85)) {
 lean::dec(x_85);
 x_92 = lean::box(0);
} else {
 lean::cnstr_release(x_85, 0);
 lean::cnstr_release(x_85, 1);
 x_92 = x_85;
}
x_93 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_12, x_2, x_90);
if (lean::obj_tag(x_93) == 0)
{
obj* x_97; obj* x_100; 
lean::dec(x_14);
lean::dec(x_88);
lean::dec(x_92);
x_97 = lean::cnstr_get(x_93, 0);
lean::inc(x_97);
lean::dec(x_93);
if (lean::is_scalar(x_87)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_87;
 lean::cnstr_set_tag(x_87, 0);
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; 
x_101 = lean::cnstr_get(x_93, 0);
lean::inc(x_101);
lean::dec(x_93);
x_104 = lean::cnstr_get(x_101, 0);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
lean::dec(x_101);
if (lean::is_scalar(x_14)) {
 x_109 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_109 = x_14;
}
lean::cnstr_set(x_109, 0, x_88);
lean::cnstr_set(x_109, 1, x_104);
if (lean::is_scalar(x_92)) {
 x_110 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_110 = x_92;
}
lean::cnstr_set(x_110, 0, x_109);
lean::cnstr_set(x_110, 1, x_106);
if (lean::is_scalar(x_87)) {
 x_111 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_111 = x_87;
}
lean::cnstr_set(x_111, 0, x_110);
return x_111;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_6);
x_10 = lean_expr_mk_app(x_4, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_19; obj* x_23; 
lean::dec(x_15);
x_19 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_19);
lean::inc(x_0);
x_23 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_19, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_28 = lean::cnstr_get(x_23, 0);
lean::inc(x_28);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_30 = x_23;
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; 
x_32 = lean::cnstr_get(x_23, 0);
lean::inc(x_32);
if (lean::is_shared(x_23)) {
 lean::dec(x_23);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_23, 0);
 x_34 = x_23;
}
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
if (lean::is_shared(x_32)) {
 lean::dec(x_32);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 x_39 = x_32;
}
x_40 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_37);
if (lean::obj_tag(x_40) == 0)
{
obj* x_44; obj* x_47; 
lean::dec(x_14);
lean::dec(x_39);
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 0);
lean::inc(x_44);
lean::dec(x_40);
if (lean::is_scalar(x_34)) {
 x_47 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_47 = x_34;
 lean::cnstr_set_tag(x_34, 0);
}
lean::cnstr_set(x_47, 0, x_44);
return x_47;
}
else
{
obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; 
x_48 = lean::cnstr_get(x_40, 0);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::cnstr_get(x_48, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_48, 1);
lean::inc(x_53);
lean::dec(x_48);
if (lean::is_scalar(x_14)) {
 x_56 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_56 = x_14;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_51);
if (lean::is_scalar(x_39)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_39;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_53);
if (lean::is_scalar(x_34)) {
 x_58 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_58 = x_34;
}
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
obj* x_59; obj* x_62; 
x_59 = lean::cnstr_get(x_15, 0);
lean::inc(x_59);
lean::dec(x_15);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_70; 
lean::dec(x_62);
x_66 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_66);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_2, x_3);
if (lean::obj_tag(x_70) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_75 = lean::cnstr_get(x_70, 0);
lean::inc(x_75);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_77 = x_70;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_86; obj* x_87; 
x_79 = lean::cnstr_get(x_70, 0);
lean::inc(x_79);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_81 = x_70;
}
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_79, 1);
lean::inc(x_84);
if (lean::is_shared(x_79)) {
 lean::dec(x_79);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_79, 0);
 lean::cnstr_release(x_79, 1);
 x_86 = x_79;
}
x_87 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_84);
if (lean::obj_tag(x_87) == 0)
{
obj* x_91; obj* x_94; 
lean::dec(x_14);
lean::dec(x_86);
lean::dec(x_82);
x_91 = lean::cnstr_get(x_87, 0);
lean::inc(x_91);
lean::dec(x_87);
if (lean::is_scalar(x_81)) {
 x_94 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_94 = x_81;
 lean::cnstr_set_tag(x_81, 0);
}
lean::cnstr_set(x_94, 0, x_91);
return x_94;
}
else
{
obj* x_95; obj* x_98; obj* x_100; obj* x_103; obj* x_104; obj* x_105; 
x_95 = lean::cnstr_get(x_87, 0);
lean::inc(x_95);
lean::dec(x_87);
x_98 = lean::cnstr_get(x_95, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
lean::dec(x_95);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_82);
lean::cnstr_set(x_103, 1, x_98);
if (lean::is_scalar(x_86)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_86;
}
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_100);
if (lean::is_scalar(x_81)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_81;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
}
else
{
obj* x_106; obj* x_110; 
x_106 = lean::cnstr_get(x_62, 0);
lean::inc(x_106);
lean::dec(x_62);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_115 = lean::cnstr_get(x_110, 0);
lean::inc(x_115);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_117 = x_110;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_124; obj* x_126; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
if (lean::is_shared(x_110)) {
 lean::dec(x_110);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_110, 0);
 x_121 = x_110;
}
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
if (lean::is_shared(x_119)) {
 lean::dec(x_119);
 x_126 = lean::box(0);
} else {
 lean::cnstr_release(x_119, 0);
 lean::cnstr_release(x_119, 1);
 x_126 = x_119;
}
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_12, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_131; obj* x_134; 
lean::dec(x_14);
lean::dec(x_126);
lean::dec(x_122);
x_131 = lean::cnstr_get(x_127, 0);
lean::inc(x_131);
lean::dec(x_127);
if (lean::is_scalar(x_121)) {
 x_134 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_134 = x_121;
 lean::cnstr_set_tag(x_121, 0);
}
lean::cnstr_set(x_134, 0, x_131);
return x_134;
}
else
{
obj* x_135; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_145; 
x_135 = lean::cnstr_get(x_127, 0);
lean::inc(x_135);
lean::dec(x_127);
x_138 = lean::cnstr_get(x_135, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_14)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_14;
}
lean::cnstr_set(x_143, 0, x_122);
lean::cnstr_set(x_143, 1, x_138);
if (lean::is_scalar(x_126)) {
 x_144 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_144 = x_126;
}
lean::cnstr_set(x_144, 0, x_143);
lean::cnstr_set(x_144, 1, x_140);
if (lean::is_scalar(x_121)) {
 x_145 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_145 = x_121;
}
lean::cnstr_set(x_145, 0, x_144);
return x_145;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_5);
if (lean::is_scalar(x_7)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_7;
}
lean::cnstr_set(x_12, 0, x_8);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::box(0);
x_14 = lean_name_mk_numeral(x_13, x_8);
x_15 = l_lean_kvmap_set__name(x_0, x_14, x_10);
x_0 = x_15;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__level___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::box(0);
x_14 = lean_name_mk_numeral(x_13, x_8);
x_15 = l_lean_kvmap_set__name(x_0, x_14, x_10);
x_0 = x_15;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("column");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("row");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed choice");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("choice");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("ident_univs");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("lambda");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("pi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("sort_app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("anonymous_constructor");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("hole");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("have");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__14() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("show");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__15() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("let");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__16() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("projection");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__17() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("explicit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__18() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("inaccessible");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__19() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("borrowed");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__20() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("choice");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__21() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("struct_inst");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__22() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("match");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__23() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected node: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__24() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__25() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure instance");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__26() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("catchall");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__27() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__28() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mangle__ident), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__29() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("struct");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__30() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected item in structure instance notation");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__31() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("NOT_A_STRING");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__32() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("borrowed");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__33() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("innaccessible");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__34() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__35() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__36() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed let");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__37() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__38() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean_expr_mk_bvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__39() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("show");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__40() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("have");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__41() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__2), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__42() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_dummy;
lean::inc(x_1);
x_3 = lean_expr_mk_mvar(x_0, x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__43() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("anonymous_constructor");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__44() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = level_mk_succ(x_0);
x_2 = lean_expr_mk_sort(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__45() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed pi");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__46() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed lambda");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__47() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("preresolved");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_to__pexpr___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_5; 
x_5 = lean::box(0);
x_3 = x_5;
goto lbl_4;
}
case 1:
{
obj* x_6; 
x_6 = lean::box(0);
x_3 = x_6;
goto lbl_4;
}
case 2:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; uint8 x_21; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_7, 1);
lean::inc(x_11);
lean::dec(x_7);
x_20 = l_lean_elaborator_to__pexpr___main___closed__7;
x_21 = lean_name_dec_eq(x_9, x_20);
if (x_21 == 0)
{
obj* x_22; uint8 x_23; 
x_22 = l_lean_elaborator_to__pexpr___main___closed__2;
x_23 = lean_name_dec_eq(x_9, x_22);
if (x_23 == 0)
{
obj* x_24; uint8 x_25; 
x_24 = l_lean_elaborator_to__pexpr___main___closed__8;
x_25 = lean_name_dec_eq(x_9, x_24);
if (x_25 == 0)
{
obj* x_26; uint8 x_27; 
x_26 = l_lean_elaborator_to__pexpr___main___closed__9;
x_27 = lean_name_dec_eq(x_9, x_26);
if (x_27 == 0)
{
obj* x_28; uint8 x_29; 
x_28 = l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
x_29 = lean_name_dec_eq(x_9, x_28);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = l_lean_elaborator_to__pexpr___main___closed__10;
x_31 = lean_name_dec_eq(x_9, x_30);
if (x_31 == 0)
{
obj* x_32; uint8 x_33; 
x_32 = l_lean_elaborator_to__pexpr___main___closed__11;
x_33 = lean_name_dec_eq(x_9, x_32);
if (x_33 == 0)
{
obj* x_34; uint8 x_35; 
x_34 = l_lean_elaborator_to__pexpr___main___closed__12;
x_35 = lean_name_dec_eq(x_9, x_34);
if (x_35 == 0)
{
obj* x_36; uint8 x_37; 
x_36 = l_lean_elaborator_to__pexpr___main___closed__13;
x_37 = lean_name_dec_eq(x_9, x_36);
if (x_37 == 0)
{
obj* x_38; uint8 x_39; 
x_38 = l_lean_elaborator_to__pexpr___main___closed__14;
x_39 = lean_name_dec_eq(x_9, x_38);
if (x_39 == 0)
{
obj* x_40; uint8 x_41; 
x_40 = l_lean_elaborator_to__pexpr___main___closed__15;
x_41 = lean_name_dec_eq(x_9, x_40);
if (x_41 == 0)
{
obj* x_42; uint8 x_43; 
x_42 = l_lean_elaborator_to__pexpr___main___closed__16;
x_43 = lean_name_dec_eq(x_9, x_42);
if (x_43 == 0)
{
obj* x_44; uint8 x_45; 
x_44 = l_lean_elaborator_to__pexpr___main___closed__17;
x_45 = lean_name_dec_eq(x_9, x_44);
if (x_45 == 0)
{
obj* x_46; uint8 x_47; 
x_46 = l_lean_elaborator_to__pexpr___main___closed__18;
x_47 = lean_name_dec_eq(x_9, x_46);
if (x_47 == 0)
{
obj* x_48; uint8 x_49; 
x_48 = l_lean_elaborator_to__pexpr___main___closed__19;
x_49 = lean_name_dec_eq(x_9, x_48);
if (x_49 == 0)
{
obj* x_50; uint8 x_51; 
x_50 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
x_51 = lean_name_dec_eq(x_9, x_50);
if (x_51 == 0)
{
obj* x_52; uint8 x_53; 
x_52 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
x_53 = lean_name_dec_eq(x_9, x_52);
if (x_53 == 0)
{
obj* x_54; uint8 x_55; 
x_54 = l_lean_elaborator_to__pexpr___main___closed__20;
x_55 = lean_name_dec_eq(x_9, x_54);
if (x_55 == 0)
{
obj* x_57; uint8 x_58; 
lean::dec(x_11);
x_57 = l_lean_elaborator_to__pexpr___main___closed__21;
x_58 = lean_name_dec_eq(x_9, x_57);
if (x_58 == 0)
{
obj* x_59; uint8 x_60; 
x_59 = l_lean_elaborator_to__pexpr___main___closed__22;
x_60 = lean_name_dec_eq(x_9, x_59);
if (x_60 == 0)
{
obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_70; 
x_61 = l_lean_name_to__string___closed__1;
lean::inc(x_61);
x_63 = l_lean_name_to__string__with__sep___main(x_61, x_9);
x_64 = l_lean_elaborator_to__pexpr___main___closed__23;
lean::inc(x_64);
x_66 = lean::string_append(x_64, x_63);
lean::dec(x_63);
lean::inc(x_1);
lean::inc(x_0);
x_70 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_1, x_2);
if (lean::obj_tag(x_70) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_1);
lean::dec(x_0);
x_73 = lean::cnstr_get(x_70, 0);
lean::inc(x_73);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_75 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_75 = x_70;
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_79; obj* x_80; obj* x_82; obj* x_84; 
x_77 = lean::cnstr_get(x_70, 0);
lean::inc(x_77);
if (lean::is_shared(x_70)) {
 lean::dec(x_70);
 x_79 = lean::box(0);
} else {
 lean::cnstr_release(x_70, 0);
 x_79 = x_70;
}
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
if (lean::is_shared(x_77)) {
 lean::dec(x_77);
 x_84 = lean::box(0);
} else {
 lean::cnstr_release(x_77, 0);
 lean::cnstr_release(x_77, 1);
 x_84 = x_77;
}
if (x_23 == 0)
{
obj* x_85; 
x_85 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_89; 
lean::dec(x_1);
lean::dec(x_85);
if (lean::is_scalar(x_84)) {
 x_88 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_88 = x_84;
}
lean::cnstr_set(x_88, 0, x_80);
lean::cnstr_set(x_88, 1, x_82);
if (lean::is_scalar(x_79)) {
 x_89 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_89 = x_79;
}
lean::cnstr_set(x_89, 0, x_88);
return x_89;
}
else
{
obj* x_90; obj* x_93; obj* x_96; obj* x_99; obj* x_100; obj* x_101; obj* x_103; obj* x_105; obj* x_106; obj* x_109; obj* x_111; obj* x_112; obj* x_113; obj* x_114; 
x_90 = lean::cnstr_get(x_85, 0);
lean::inc(x_90);
lean::dec(x_85);
x_93 = lean::cnstr_get(x_1, 0);
lean::inc(x_93);
lean::dec(x_1);
x_96 = lean::cnstr_get(x_93, 2);
lean::inc(x_96);
lean::dec(x_93);
x_99 = l_lean_file__map_to__position(x_96, x_90);
x_100 = lean::box(0);
x_101 = lean::cnstr_get(x_99, 1);
lean::inc(x_101);
x_103 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_103);
x_105 = l_lean_kvmap_set__nat(x_100, x_103, x_101);
x_106 = lean::cnstr_get(x_99, 0);
lean::inc(x_106);
lean::dec(x_99);
x_109 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_109);
x_111 = l_lean_kvmap_set__nat(x_105, x_109, x_106);
x_112 = lean_expr_mk_mdata(x_111, x_80);
if (lean::is_scalar(x_84)) {
 x_113 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_113 = x_84;
}
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_82);
if (lean::is_scalar(x_79)) {
 x_114 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_114 = x_79;
}
lean::cnstr_set(x_114, 0, x_113);
return x_114;
}
}
else
{
obj* x_117; obj* x_118; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_84)) {
 x_117 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_117 = x_84;
}
lean::cnstr_set(x_117, 0, x_80);
lean::cnstr_set(x_117, 1, x_82);
if (lean::is_scalar(x_79)) {
 x_118 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_118 = x_79;
}
lean::cnstr_set(x_118, 0, x_117);
return x_118;
}
}
}
else
{
obj* x_119; obj* x_120; obj* x_123; obj* x_124; obj* x_126; obj* x_128; 
x_119 = l_lean_parser_term_match_has__view;
x_120 = lean::cnstr_get(x_119, 0);
lean::inc(x_120);
lean::inc(x_0);
x_123 = lean::apply_1(x_120, x_0);
x_124 = lean::cnstr_get(x_123, 5);
lean::inc(x_124);
x_126 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_124);
lean::inc(x_1);
x_128 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_126, x_1, x_2);
if (lean::obj_tag(x_128) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_123);
x_130 = lean::cnstr_get(x_128, 0);
lean::inc(x_130);
if (lean::is_shared(x_128)) {
 lean::dec(x_128);
 x_132 = lean::box(0);
} else {
 lean::cnstr_release(x_128, 0);
 x_132 = x_128;
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
x_14 = x_133;
goto lbl_15;
}
else
{
obj* x_134; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_144; obj* x_146; 
x_134 = lean::cnstr_get(x_128, 0);
lean::inc(x_134);
if (lean::is_shared(x_128)) {
 lean::dec(x_128);
 x_136 = lean::box(0);
} else {
 lean::cnstr_release(x_128, 0);
 x_136 = x_128;
}
x_137 = lean::cnstr_get(x_134, 0);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_134, 1);
lean::inc(x_139);
if (lean::is_shared(x_134)) {
 lean::dec(x_134);
 x_141 = lean::box(0);
} else {
 lean::cnstr_release(x_134, 0);
 lean::cnstr_release(x_134, 1);
 x_141 = x_134;
}
x_142 = lean::cnstr_get(x_123, 2);
lean::inc(x_142);
x_144 = l_lean_expander_get__opt__type___main(x_142);
lean::inc(x_1);
x_146 = l_lean_elaborator_to__pexpr___main(x_144, x_1, x_139);
if (lean::obj_tag(x_146) == 0)
{
obj* x_150; obj* x_153; 
lean::dec(x_141);
lean::dec(x_137);
lean::dec(x_123);
x_150 = lean::cnstr_get(x_146, 0);
lean::inc(x_150);
lean::dec(x_146);
if (lean::is_scalar(x_136)) {
 x_153 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_153 = x_136;
 lean::cnstr_set_tag(x_136, 0);
}
lean::cnstr_set(x_153, 0, x_150);
x_14 = x_153;
goto lbl_15;
}
else
{
obj* x_154; obj* x_157; obj* x_159; obj* x_162; 
x_154 = lean::cnstr_get(x_146, 0);
lean::inc(x_154);
lean::dec(x_146);
x_157 = lean::cnstr_get(x_154, 0);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_154, 1);
lean::inc(x_159);
lean::dec(x_154);
x_162 = l_lean_elaborator_mk__eqns(x_157, x_137);
switch (lean::obj_tag(x_162)) {
case 0:
{
obj* x_167; obj* x_171; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_167 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_167);
lean::inc(x_0);
x_171 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_167, x_1, x_159);
x_14 = x_171;
goto lbl_15;
}
case 1:
{
obj* x_176; obj* x_180; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_176 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_176);
lean::inc(x_0);
x_180 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_176, x_1, x_159);
x_14 = x_180;
goto lbl_15;
}
case 2:
{
obj* x_185; obj* x_189; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_185 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_185);
lean::inc(x_0);
x_189 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_185, x_1, x_159);
x_14 = x_189;
goto lbl_15;
}
case 3:
{
obj* x_194; obj* x_198; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_194 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_194);
lean::inc(x_0);
x_198 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_194, x_1, x_159);
x_14 = x_198;
goto lbl_15;
}
case 4:
{
obj* x_203; obj* x_207; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_203 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_203);
lean::inc(x_0);
x_207 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_203, x_1, x_159);
x_14 = x_207;
goto lbl_15;
}
case 5:
{
obj* x_212; obj* x_216; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_212 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_212);
lean::inc(x_0);
x_216 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_212, x_1, x_159);
x_14 = x_216;
goto lbl_15;
}
case 6:
{
obj* x_221; obj* x_225; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_221 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_221);
lean::inc(x_0);
x_225 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_221, x_1, x_159);
x_14 = x_225;
goto lbl_15;
}
case 7:
{
obj* x_230; obj* x_234; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_230 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_230);
lean::inc(x_0);
x_234 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_230, x_1, x_159);
x_14 = x_234;
goto lbl_15;
}
case 8:
{
obj* x_239; obj* x_243; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_239 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_239);
lean::inc(x_0);
x_243 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_239, x_1, x_159);
x_14 = x_243;
goto lbl_15;
}
case 9:
{
obj* x_248; obj* x_252; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_248 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_248);
lean::inc(x_0);
x_252 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_248, x_1, x_159);
x_14 = x_252;
goto lbl_15;
}
case 10:
{
obj* x_253; obj* x_255; obj* x_258; obj* x_262; 
x_253 = lean::cnstr_get(x_162, 0);
lean::inc(x_253);
x_255 = lean::cnstr_get(x_162, 1);
lean::inc(x_255);
lean::dec(x_162);
x_258 = lean::cnstr_get(x_123, 1);
lean::inc(x_258);
lean::dec(x_123);
lean::inc(x_1);
x_262 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_258, x_1, x_159);
if (lean::obj_tag(x_262) == 0)
{
obj* x_266; obj* x_269; 
lean::dec(x_255);
lean::dec(x_253);
lean::dec(x_141);
x_266 = lean::cnstr_get(x_262, 0);
lean::inc(x_266);
lean::dec(x_262);
if (lean::is_scalar(x_136)) {
 x_269 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_269 = x_136;
 lean::cnstr_set_tag(x_136, 0);
}
lean::cnstr_set(x_269, 0, x_266);
x_14 = x_269;
goto lbl_15;
}
else
{
obj* x_270; obj* x_273; obj* x_275; obj* x_278; uint8 x_279; obj* x_281; obj* x_282; obj* x_283; obj* x_284; obj* x_285; 
x_270 = lean::cnstr_get(x_262, 0);
lean::inc(x_270);
lean::dec(x_262);
x_273 = lean::cnstr_get(x_270, 0);
lean::inc(x_273);
x_275 = lean::cnstr_get(x_270, 1);
lean::inc(x_275);
lean::dec(x_270);
x_278 = l_lean_elaborator_to__pexpr___main___closed__24;
x_279 = 1;
lean::inc(x_278);
x_281 = l_lean_kvmap_set__bool(x_253, x_278, x_279);
x_282 = lean_expr_mk_mdata(x_281, x_255);
x_283 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_282, x_273);
if (lean::is_scalar(x_141)) {
 x_284 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_284 = x_141;
}
lean::cnstr_set(x_284, 0, x_283);
lean::cnstr_set(x_284, 1, x_275);
if (lean::is_scalar(x_136)) {
 x_285 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_285 = x_136;
}
lean::cnstr_set(x_285, 0, x_284);
x_14 = x_285;
goto lbl_15;
}
}
default:
{
obj* x_290; obj* x_294; 
lean::dec(x_136);
lean::dec(x_141);
lean::dec(x_162);
lean::dec(x_123);
x_290 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_290);
lean::inc(x_0);
x_294 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_290, x_1, x_159);
x_14 = x_294;
goto lbl_15;
}
}
}
}
}
}
else
{
obj* x_295; obj* x_296; obj* x_299; obj* x_300; obj* x_302; obj* x_303; obj* x_305; obj* x_307; obj* x_308; obj* x_309; obj* x_311; obj* x_313; 
x_295 = l_lean_parser_term_struct__inst_has__view;
x_296 = lean::cnstr_get(x_295, 0);
lean::inc(x_296);
lean::inc(x_0);
x_299 = lean::apply_1(x_296, x_0);
x_300 = lean::cnstr_get(x_299, 3);
lean::inc(x_300);
x_302 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_300);
x_303 = lean::cnstr_get(x_302, 0);
lean::inc(x_303);
x_305 = lean::cnstr_get(x_302, 1);
lean::inc(x_305);
if (lean::is_shared(x_302)) {
 lean::dec(x_302);
 x_307 = lean::box(0);
} else {
 lean::cnstr_release(x_302, 0);
 lean::cnstr_release(x_302, 1);
 x_307 = x_302;
}
x_308 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_305);
x_309 = lean::cnstr_get(x_308, 0);
lean::inc(x_309);
x_311 = lean::cnstr_get(x_308, 1);
lean::inc(x_311);
if (lean::is_shared(x_308)) {
 lean::dec(x_308);
 x_313 = lean::box(0);
} else {
 lean::cnstr_release(x_308, 0);
 lean::cnstr_release(x_308, 1);
 x_313 = x_308;
}
if (lean::obj_tag(x_311) == 0)
{
obj* x_317; 
lean::dec(x_311);
lean::inc(x_1);
lean::inc(x_0);
x_317 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_303, x_1, x_2);
if (lean::obj_tag(x_317) == 0)
{
obj* x_325; obj* x_327; obj* x_328; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
x_325 = lean::cnstr_get(x_317, 0);
lean::inc(x_325);
if (lean::is_shared(x_317)) {
 lean::dec(x_317);
 x_327 = lean::box(0);
} else {
 lean::cnstr_release(x_317, 0);
 x_327 = x_317;
}
if (lean::is_scalar(x_327)) {
 x_328 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_328 = x_327;
}
lean::cnstr_set(x_328, 0, x_325);
return x_328;
}
else
{
obj* x_329; obj* x_331; obj* x_332; obj* x_334; obj* x_337; obj* x_341; 
x_329 = lean::cnstr_get(x_317, 0);
lean::inc(x_329);
if (lean::is_shared(x_317)) {
 lean::dec(x_317);
 x_331 = lean::box(0);
} else {
 lean::cnstr_release(x_317, 0);
 x_331 = x_317;
}
x_332 = lean::cnstr_get(x_329, 0);
lean::inc(x_332);
x_334 = lean::cnstr_get(x_329, 1);
lean::inc(x_334);
lean::dec(x_329);
lean::inc(x_1);
lean::inc(x_0);
x_341 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_309, x_1, x_334);
if (lean::obj_tag(x_341) == 0)
{
obj* x_349; obj* x_352; 
lean::dec(x_332);
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
x_349 = lean::cnstr_get(x_341, 0);
lean::inc(x_349);
lean::dec(x_341);
if (lean::is_scalar(x_331)) {
 x_352 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_352 = x_331;
 lean::cnstr_set_tag(x_331, 0);
}
lean::cnstr_set(x_352, 0, x_349);
return x_352;
}
else
{
obj* x_353; obj* x_356; obj* x_358; obj* x_361; 
x_353 = lean::cnstr_get(x_341, 0);
lean::inc(x_353);
lean::dec(x_341);
x_356 = lean::cnstr_get(x_353, 0);
lean::inc(x_356);
x_358 = lean::cnstr_get(x_353, 1);
lean::inc(x_358);
lean::dec(x_353);
x_361 = lean::cnstr_get(x_299, 2);
lean::inc(x_361);
if (lean::obj_tag(x_361) == 0)
{
obj* x_365; 
lean::dec(x_331);
lean::dec(x_361);
if (lean::is_scalar(x_313)) {
 x_365 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_365 = x_313;
}
lean::cnstr_set(x_365, 0, x_356);
lean::cnstr_set(x_365, 1, x_358);
x_337 = x_365;
goto lbl_338;
}
else
{
obj* x_366; obj* x_369; obj* x_373; 
x_366 = lean::cnstr_get(x_361, 0);
lean::inc(x_366);
lean::dec(x_361);
x_369 = lean::cnstr_get(x_366, 0);
lean::inc(x_369);
lean::dec(x_366);
lean::inc(x_1);
x_373 = l_lean_elaborator_to__pexpr___main(x_369, x_1, x_358);
if (lean::obj_tag(x_373) == 0)
{
obj* x_382; obj* x_385; 
lean::dec(x_332);
lean::dec(x_356);
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
x_382 = lean::cnstr_get(x_373, 0);
lean::inc(x_382);
lean::dec(x_373);
if (lean::is_scalar(x_331)) {
 x_385 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_385 = x_331;
 lean::cnstr_set_tag(x_331, 0);
}
lean::cnstr_set(x_385, 0, x_382);
return x_385;
}
else
{
obj* x_387; obj* x_390; obj* x_392; obj* x_395; obj* x_396; obj* x_397; obj* x_398; 
lean::dec(x_331);
x_387 = lean::cnstr_get(x_373, 0);
lean::inc(x_387);
lean::dec(x_373);
x_390 = lean::cnstr_get(x_387, 0);
lean::inc(x_390);
x_392 = lean::cnstr_get(x_387, 1);
lean::inc(x_392);
lean::dec(x_387);
x_395 = lean::box(0);
x_396 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_396, 0, x_390);
lean::cnstr_set(x_396, 1, x_395);
x_397 = l_list_append___rarg(x_356, x_396);
if (lean::is_scalar(x_313)) {
 x_398 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_398 = x_313;
}
lean::cnstr_set(x_398, 0, x_397);
lean::cnstr_set(x_398, 1, x_392);
x_337 = x_398;
goto lbl_338;
}
}
}
lbl_338:
{
obj* x_399; obj* x_401; obj* x_404; obj* x_405; obj* x_407; obj* x_408; obj* x_411; obj* x_412; uint8 x_413; obj* x_415; obj* x_416; obj* x_419; obj* x_421; obj* x_422; obj* x_424; obj* x_425; obj* x_426; obj* x_428; obj* x_429; obj* x_430; obj* x_431; obj* x_432; 
x_399 = lean::cnstr_get(x_337, 0);
lean::inc(x_399);
x_401 = lean::cnstr_get(x_337, 1);
lean::inc(x_401);
lean::dec(x_337);
x_404 = lean::box(0);
x_405 = lean::mk_nat_obj(0u);
lean::inc(x_332);
x_407 = l_list_length__aux___main___rarg(x_332, x_405);
x_408 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_408);
lean::inc(x_404);
x_411 = l_lean_kvmap_set__nat(x_404, x_408, x_407);
x_412 = l_lean_elaborator_to__pexpr___main___closed__26;
x_413 = 0;
lean::inc(x_412);
x_415 = l_lean_kvmap_set__bool(x_411, x_412, x_413);
x_416 = lean::cnstr_get(x_299, 1);
lean::inc(x_416);
lean::dec(x_299);
x_419 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_419);
x_421 = l_option_map___rarg(x_419, x_416);
x_422 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_422);
x_424 = l_option_map___rarg(x_422, x_421);
x_425 = l_option_get__or__else___main___rarg(x_424, x_404);
x_426 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_426);
x_428 = l_lean_kvmap_set__name(x_415, x_426, x_425);
x_429 = l_list_append___rarg(x_332, x_399);
x_430 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_429);
x_431 = lean_expr_mk_mdata(x_428, x_430);
if (lean::is_scalar(x_307)) {
 x_432 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_432 = x_307;
}
lean::cnstr_set(x_432, 0, x_431);
lean::cnstr_set(x_432, 1, x_401);
x_16 = x_432;
goto lbl_17;
}
}
}
else
{
obj* x_433; obj* x_435; obj* x_437; obj* x_438; 
x_433 = lean::cnstr_get(x_311, 0);
lean::inc(x_433);
x_435 = lean::cnstr_get(x_311, 1);
lean::inc(x_435);
if (lean::is_shared(x_311)) {
 lean::dec(x_311);
 x_437 = lean::box(0);
} else {
 lean::cnstr_release(x_311, 0);
 lean::cnstr_release(x_311, 1);
 x_437 = x_311;
}
x_438 = lean::cnstr_get(x_433, 0);
lean::inc(x_438);
lean::dec(x_433);
if (lean::obj_tag(x_438) == 0)
{
obj* x_442; obj* x_443; obj* x_445; obj* x_446; obj* x_449; 
lean::dec(x_435);
x_442 = l_lean_parser_term_struct__inst__item_has__view;
x_443 = lean::cnstr_get(x_442, 1);
lean::inc(x_443);
x_445 = lean::apply_1(x_443, x_438);
x_446 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
lean::inc(x_446);
x_449 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_445, x_446, x_1, x_2);
if (lean::obj_tag(x_449) == 0)
{
obj* x_459; obj* x_461; obj* x_462; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
lean::dec(x_303);
lean::dec(x_437);
x_459 = lean::cnstr_get(x_449, 0);
lean::inc(x_459);
if (lean::is_shared(x_449)) {
 lean::dec(x_449);
 x_461 = lean::box(0);
} else {
 lean::cnstr_release(x_449, 0);
 x_461 = x_449;
}
if (lean::is_scalar(x_461)) {
 x_462 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_462 = x_461;
}
lean::cnstr_set(x_462, 0, x_459);
return x_462;
}
else
{
obj* x_463; obj* x_465; obj* x_466; obj* x_468; obj* x_473; 
x_463 = lean::cnstr_get(x_449, 0);
lean::inc(x_463);
if (lean::is_shared(x_449)) {
 lean::dec(x_449);
 x_465 = lean::box(0);
} else {
 lean::cnstr_release(x_449, 0);
 x_465 = x_449;
}
x_466 = lean::cnstr_get(x_463, 0);
lean::inc(x_466);
x_468 = lean::cnstr_get(x_463, 1);
lean::inc(x_468);
lean::dec(x_463);
lean::inc(x_1);
lean::inc(x_0);
x_473 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_303, x_1, x_468);
if (lean::obj_tag(x_473) == 0)
{
obj* x_483; obj* x_486; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
lean::dec(x_437);
lean::dec(x_466);
x_483 = lean::cnstr_get(x_473, 0);
lean::inc(x_483);
lean::dec(x_473);
if (lean::is_scalar(x_465)) {
 x_486 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_486 = x_465;
 lean::cnstr_set_tag(x_465, 0);
}
lean::cnstr_set(x_486, 0, x_483);
return x_486;
}
else
{
obj* x_487; obj* x_490; obj* x_492; obj* x_495; obj* x_499; 
x_487 = lean::cnstr_get(x_473, 0);
lean::inc(x_487);
lean::dec(x_473);
x_490 = lean::cnstr_get(x_487, 0);
lean::inc(x_490);
x_492 = lean::cnstr_get(x_487, 1);
lean::inc(x_492);
lean::dec(x_487);
lean::inc(x_1);
lean::inc(x_0);
x_499 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_309, x_1, x_492);
if (lean::obj_tag(x_499) == 0)
{
obj* x_509; obj* x_512; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_437);
lean::dec(x_466);
lean::dec(x_490);
x_509 = lean::cnstr_get(x_499, 0);
lean::inc(x_509);
lean::dec(x_499);
if (lean::is_scalar(x_465)) {
 x_512 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_512 = x_465;
 lean::cnstr_set_tag(x_465, 0);
}
lean::cnstr_set(x_512, 0, x_509);
return x_512;
}
else
{
obj* x_513; obj* x_516; obj* x_518; obj* x_521; 
x_513 = lean::cnstr_get(x_499, 0);
lean::inc(x_513);
lean::dec(x_499);
x_516 = lean::cnstr_get(x_513, 0);
lean::inc(x_516);
x_518 = lean::cnstr_get(x_513, 1);
lean::inc(x_518);
lean::dec(x_513);
x_521 = lean::cnstr_get(x_299, 2);
lean::inc(x_521);
if (lean::obj_tag(x_521) == 0)
{
obj* x_526; 
lean::dec(x_437);
lean::dec(x_465);
lean::dec(x_521);
if (lean::is_scalar(x_313)) {
 x_526 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_526 = x_313;
}
lean::cnstr_set(x_526, 0, x_516);
lean::cnstr_set(x_526, 1, x_518);
x_495 = x_526;
goto lbl_496;
}
else
{
obj* x_527; obj* x_530; obj* x_534; 
x_527 = lean::cnstr_get(x_521, 0);
lean::inc(x_527);
lean::dec(x_521);
x_530 = lean::cnstr_get(x_527, 0);
lean::inc(x_530);
lean::dec(x_527);
lean::inc(x_1);
x_534 = l_lean_elaborator_to__pexpr___main(x_530, x_1, x_518);
if (lean::obj_tag(x_534) == 0)
{
obj* x_545; obj* x_548; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_437);
lean::dec(x_466);
lean::dec(x_516);
lean::dec(x_490);
x_545 = lean::cnstr_get(x_534, 0);
lean::inc(x_545);
lean::dec(x_534);
if (lean::is_scalar(x_465)) {
 x_548 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_548 = x_465;
 lean::cnstr_set_tag(x_465, 0);
}
lean::cnstr_set(x_548, 0, x_545);
return x_548;
}
else
{
obj* x_550; obj* x_553; obj* x_555; obj* x_558; obj* x_559; obj* x_560; obj* x_561; 
lean::dec(x_465);
x_550 = lean::cnstr_get(x_534, 0);
lean::inc(x_550);
lean::dec(x_534);
x_553 = lean::cnstr_get(x_550, 0);
lean::inc(x_553);
x_555 = lean::cnstr_get(x_550, 1);
lean::inc(x_555);
lean::dec(x_550);
x_558 = lean::box(0);
if (lean::is_scalar(x_437)) {
 x_559 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_559 = x_437;
}
lean::cnstr_set(x_559, 0, x_553);
lean::cnstr_set(x_559, 1, x_558);
x_560 = l_list_append___rarg(x_516, x_559);
if (lean::is_scalar(x_313)) {
 x_561 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_561 = x_313;
}
lean::cnstr_set(x_561, 0, x_560);
lean::cnstr_set(x_561, 1, x_555);
x_495 = x_561;
goto lbl_496;
}
}
}
lbl_496:
{
obj* x_562; obj* x_564; obj* x_567; obj* x_568; obj* x_570; obj* x_571; obj* x_574; obj* x_575; uint8 x_576; obj* x_579; obj* x_580; obj* x_583; obj* x_585; obj* x_586; obj* x_588; obj* x_589; obj* x_590; obj* x_592; obj* x_593; obj* x_594; obj* x_595; obj* x_596; 
x_562 = lean::cnstr_get(x_495, 0);
lean::inc(x_562);
x_564 = lean::cnstr_get(x_495, 1);
lean::inc(x_564);
lean::dec(x_495);
x_567 = lean::box(0);
x_568 = lean::mk_nat_obj(0u);
lean::inc(x_490);
x_570 = l_list_length__aux___main___rarg(x_490, x_568);
x_571 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_571);
lean::inc(x_567);
x_574 = l_lean_kvmap_set__nat(x_567, x_571, x_570);
x_575 = l_lean_elaborator_to__pexpr___main___closed__26;
x_576 = lean::unbox(x_466);
lean::dec(x_466);
lean::inc(x_575);
x_579 = l_lean_kvmap_set__bool(x_574, x_575, x_576);
x_580 = lean::cnstr_get(x_299, 1);
lean::inc(x_580);
lean::dec(x_299);
x_583 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_583);
x_585 = l_option_map___rarg(x_583, x_580);
x_586 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_586);
x_588 = l_option_map___rarg(x_586, x_585);
x_589 = l_option_get__or__else___main___rarg(x_588, x_567);
x_590 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_590);
x_592 = l_lean_kvmap_set__name(x_579, x_590, x_589);
x_593 = l_list_append___rarg(x_490, x_562);
x_594 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_593);
x_595 = lean_expr_mk_mdata(x_592, x_594);
if (lean::is_scalar(x_307)) {
 x_596 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_596 = x_307;
}
lean::cnstr_set(x_596, 0, x_595);
lean::cnstr_set(x_596, 1, x_564);
x_16 = x_596;
goto lbl_17;
}
}
}
}
else
{
if (lean::obj_tag(x_435) == 0)
{
obj* x_601; 
lean::dec(x_438);
lean::dec(x_435);
lean::inc(x_1);
lean::inc(x_0);
x_601 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_303, x_1, x_2);
if (lean::obj_tag(x_601) == 0)
{
obj* x_610; obj* x_612; obj* x_613; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
lean::dec(x_437);
x_610 = lean::cnstr_get(x_601, 0);
lean::inc(x_610);
if (lean::is_shared(x_601)) {
 lean::dec(x_601);
 x_612 = lean::box(0);
} else {
 lean::cnstr_release(x_601, 0);
 x_612 = x_601;
}
if (lean::is_scalar(x_612)) {
 x_613 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_613 = x_612;
}
lean::cnstr_set(x_613, 0, x_610);
return x_613;
}
else
{
obj* x_614; obj* x_616; obj* x_617; obj* x_619; obj* x_622; obj* x_626; 
x_614 = lean::cnstr_get(x_601, 0);
lean::inc(x_614);
if (lean::is_shared(x_601)) {
 lean::dec(x_601);
 x_616 = lean::box(0);
} else {
 lean::cnstr_release(x_601, 0);
 x_616 = x_601;
}
x_617 = lean::cnstr_get(x_614, 0);
lean::inc(x_617);
x_619 = lean::cnstr_get(x_614, 1);
lean::inc(x_619);
lean::dec(x_614);
lean::inc(x_1);
lean::inc(x_0);
x_626 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_309, x_1, x_619);
if (lean::obj_tag(x_626) == 0)
{
obj* x_635; obj* x_638; 
lean::dec(x_617);
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_437);
x_635 = lean::cnstr_get(x_626, 0);
lean::inc(x_635);
lean::dec(x_626);
if (lean::is_scalar(x_616)) {
 x_638 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_638 = x_616;
 lean::cnstr_set_tag(x_616, 0);
}
lean::cnstr_set(x_638, 0, x_635);
return x_638;
}
else
{
obj* x_639; obj* x_642; obj* x_644; obj* x_647; 
x_639 = lean::cnstr_get(x_626, 0);
lean::inc(x_639);
lean::dec(x_626);
x_642 = lean::cnstr_get(x_639, 0);
lean::inc(x_642);
x_644 = lean::cnstr_get(x_639, 1);
lean::inc(x_644);
lean::dec(x_639);
x_647 = lean::cnstr_get(x_299, 2);
lean::inc(x_647);
if (lean::obj_tag(x_647) == 0)
{
obj* x_652; 
lean::dec(x_616);
lean::dec(x_647);
lean::dec(x_437);
if (lean::is_scalar(x_313)) {
 x_652 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_652 = x_313;
}
lean::cnstr_set(x_652, 0, x_642);
lean::cnstr_set(x_652, 1, x_644);
x_622 = x_652;
goto lbl_623;
}
else
{
obj* x_653; obj* x_656; obj* x_660; 
x_653 = lean::cnstr_get(x_647, 0);
lean::inc(x_653);
lean::dec(x_647);
x_656 = lean::cnstr_get(x_653, 0);
lean::inc(x_656);
lean::dec(x_653);
lean::inc(x_1);
x_660 = l_lean_elaborator_to__pexpr___main(x_656, x_1, x_644);
if (lean::obj_tag(x_660) == 0)
{
obj* x_670; obj* x_673; 
lean::dec(x_617);
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_642);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_437);
x_670 = lean::cnstr_get(x_660, 0);
lean::inc(x_670);
lean::dec(x_660);
if (lean::is_scalar(x_616)) {
 x_673 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_673 = x_616;
 lean::cnstr_set_tag(x_616, 0);
}
lean::cnstr_set(x_673, 0, x_670);
return x_673;
}
else
{
obj* x_675; obj* x_678; obj* x_680; obj* x_683; obj* x_684; obj* x_685; obj* x_686; 
lean::dec(x_616);
x_675 = lean::cnstr_get(x_660, 0);
lean::inc(x_675);
lean::dec(x_660);
x_678 = lean::cnstr_get(x_675, 0);
lean::inc(x_678);
x_680 = lean::cnstr_get(x_675, 1);
lean::inc(x_680);
lean::dec(x_675);
x_683 = lean::box(0);
if (lean::is_scalar(x_437)) {
 x_684 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_684 = x_437;
}
lean::cnstr_set(x_684, 0, x_678);
lean::cnstr_set(x_684, 1, x_683);
x_685 = l_list_append___rarg(x_642, x_684);
if (lean::is_scalar(x_313)) {
 x_686 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_686 = x_313;
}
lean::cnstr_set(x_686, 0, x_685);
lean::cnstr_set(x_686, 1, x_680);
x_622 = x_686;
goto lbl_623;
}
}
}
lbl_623:
{
obj* x_687; obj* x_689; obj* x_692; obj* x_693; obj* x_695; obj* x_696; obj* x_699; obj* x_700; uint8 x_701; obj* x_703; obj* x_704; obj* x_707; obj* x_709; obj* x_710; obj* x_712; obj* x_713; obj* x_714; obj* x_716; obj* x_717; obj* x_718; obj* x_719; obj* x_720; 
x_687 = lean::cnstr_get(x_622, 0);
lean::inc(x_687);
x_689 = lean::cnstr_get(x_622, 1);
lean::inc(x_689);
lean::dec(x_622);
x_692 = lean::box(0);
x_693 = lean::mk_nat_obj(0u);
lean::inc(x_617);
x_695 = l_list_length__aux___main___rarg(x_617, x_693);
x_696 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_696);
lean::inc(x_692);
x_699 = l_lean_kvmap_set__nat(x_692, x_696, x_695);
x_700 = l_lean_elaborator_to__pexpr___main___closed__26;
x_701 = 1;
lean::inc(x_700);
x_703 = l_lean_kvmap_set__bool(x_699, x_700, x_701);
x_704 = lean::cnstr_get(x_299, 1);
lean::inc(x_704);
lean::dec(x_299);
x_707 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_707);
x_709 = l_option_map___rarg(x_707, x_704);
x_710 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_710);
x_712 = l_option_map___rarg(x_710, x_709);
x_713 = l_option_get__or__else___main___rarg(x_712, x_692);
x_714 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_714);
x_716 = l_lean_kvmap_set__name(x_703, x_714, x_713);
x_717 = l_list_append___rarg(x_617, x_687);
x_718 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_717);
x_719 = lean_expr_mk_mdata(x_716, x_718);
if (lean::is_scalar(x_307)) {
 x_720 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_720 = x_307;
}
lean::cnstr_set(x_720, 0, x_719);
lean::cnstr_set(x_720, 1, x_689);
x_16 = x_720;
goto lbl_17;
}
}
}
else
{
obj* x_722; obj* x_723; obj* x_725; obj* x_726; obj* x_729; 
lean::dec(x_435);
x_722 = l_lean_parser_term_struct__inst__item_has__view;
x_723 = lean::cnstr_get(x_722, 1);
lean::inc(x_723);
x_725 = lean::apply_1(x_723, x_438);
x_726 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
lean::inc(x_726);
x_729 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_725, x_726, x_1, x_2);
if (lean::obj_tag(x_729) == 0)
{
obj* x_739; obj* x_741; obj* x_742; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
lean::dec(x_303);
lean::dec(x_437);
x_739 = lean::cnstr_get(x_729, 0);
lean::inc(x_739);
if (lean::is_shared(x_729)) {
 lean::dec(x_729);
 x_741 = lean::box(0);
} else {
 lean::cnstr_release(x_729, 0);
 x_741 = x_729;
}
if (lean::is_scalar(x_741)) {
 x_742 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_742 = x_741;
}
lean::cnstr_set(x_742, 0, x_739);
return x_742;
}
else
{
obj* x_743; obj* x_745; obj* x_746; obj* x_748; obj* x_753; 
x_743 = lean::cnstr_get(x_729, 0);
lean::inc(x_743);
if (lean::is_shared(x_729)) {
 lean::dec(x_729);
 x_745 = lean::box(0);
} else {
 lean::cnstr_release(x_729, 0);
 x_745 = x_729;
}
x_746 = lean::cnstr_get(x_743, 0);
lean::inc(x_746);
x_748 = lean::cnstr_get(x_743, 1);
lean::inc(x_748);
lean::dec(x_743);
lean::inc(x_1);
lean::inc(x_0);
x_753 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_303, x_1, x_748);
if (lean::obj_tag(x_753) == 0)
{
obj* x_763; obj* x_766; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_309);
lean::dec(x_299);
lean::dec(x_437);
lean::dec(x_746);
x_763 = lean::cnstr_get(x_753, 0);
lean::inc(x_763);
lean::dec(x_753);
if (lean::is_scalar(x_745)) {
 x_766 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_766 = x_745;
 lean::cnstr_set_tag(x_745, 0);
}
lean::cnstr_set(x_766, 0, x_763);
return x_766;
}
else
{
obj* x_767; obj* x_770; obj* x_772; obj* x_775; obj* x_779; 
x_767 = lean::cnstr_get(x_753, 0);
lean::inc(x_767);
lean::dec(x_753);
x_770 = lean::cnstr_get(x_767, 0);
lean::inc(x_770);
x_772 = lean::cnstr_get(x_767, 1);
lean::inc(x_772);
lean::dec(x_767);
lean::inc(x_1);
lean::inc(x_0);
x_779 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_309, x_1, x_772);
if (lean::obj_tag(x_779) == 0)
{
obj* x_789; obj* x_792; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_770);
lean::dec(x_437);
lean::dec(x_746);
x_789 = lean::cnstr_get(x_779, 0);
lean::inc(x_789);
lean::dec(x_779);
if (lean::is_scalar(x_745)) {
 x_792 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_792 = x_745;
 lean::cnstr_set_tag(x_745, 0);
}
lean::cnstr_set(x_792, 0, x_789);
return x_792;
}
else
{
obj* x_793; obj* x_796; obj* x_798; obj* x_801; 
x_793 = lean::cnstr_get(x_779, 0);
lean::inc(x_793);
lean::dec(x_779);
x_796 = lean::cnstr_get(x_793, 0);
lean::inc(x_796);
x_798 = lean::cnstr_get(x_793, 1);
lean::inc(x_798);
lean::dec(x_793);
x_801 = lean::cnstr_get(x_299, 2);
lean::inc(x_801);
if (lean::obj_tag(x_801) == 0)
{
obj* x_806; 
lean::dec(x_801);
lean::dec(x_437);
lean::dec(x_745);
if (lean::is_scalar(x_313)) {
 x_806 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_806 = x_313;
}
lean::cnstr_set(x_806, 0, x_796);
lean::cnstr_set(x_806, 1, x_798);
x_775 = x_806;
goto lbl_776;
}
else
{
obj* x_807; obj* x_810; obj* x_814; 
x_807 = lean::cnstr_get(x_801, 0);
lean::inc(x_807);
lean::dec(x_801);
x_810 = lean::cnstr_get(x_807, 0);
lean::inc(x_810);
lean::dec(x_807);
lean::inc(x_1);
x_814 = l_lean_elaborator_to__pexpr___main(x_810, x_1, x_798);
if (lean::obj_tag(x_814) == 0)
{
obj* x_825; obj* x_828; 
lean::dec(x_313);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_307);
lean::dec(x_299);
lean::dec(x_770);
lean::dec(x_796);
lean::dec(x_437);
lean::dec(x_746);
x_825 = lean::cnstr_get(x_814, 0);
lean::inc(x_825);
lean::dec(x_814);
if (lean::is_scalar(x_745)) {
 x_828 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_828 = x_745;
 lean::cnstr_set_tag(x_745, 0);
}
lean::cnstr_set(x_828, 0, x_825);
return x_828;
}
else
{
obj* x_830; obj* x_833; obj* x_835; obj* x_838; obj* x_839; obj* x_840; obj* x_841; 
lean::dec(x_745);
x_830 = lean::cnstr_get(x_814, 0);
lean::inc(x_830);
lean::dec(x_814);
x_833 = lean::cnstr_get(x_830, 0);
lean::inc(x_833);
x_835 = lean::cnstr_get(x_830, 1);
lean::inc(x_835);
lean::dec(x_830);
x_838 = lean::box(0);
if (lean::is_scalar(x_437)) {
 x_839 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_839 = x_437;
}
lean::cnstr_set(x_839, 0, x_833);
lean::cnstr_set(x_839, 1, x_838);
x_840 = l_list_append___rarg(x_796, x_839);
if (lean::is_scalar(x_313)) {
 x_841 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_841 = x_313;
}
lean::cnstr_set(x_841, 0, x_840);
lean::cnstr_set(x_841, 1, x_835);
x_775 = x_841;
goto lbl_776;
}
}
}
lbl_776:
{
obj* x_842; obj* x_844; obj* x_847; obj* x_848; obj* x_850; obj* x_851; obj* x_854; obj* x_855; uint8 x_856; obj* x_859; obj* x_860; obj* x_863; obj* x_865; obj* x_866; obj* x_868; obj* x_869; obj* x_870; obj* x_872; obj* x_873; obj* x_874; obj* x_875; obj* x_876; 
x_842 = lean::cnstr_get(x_775, 0);
lean::inc(x_842);
x_844 = lean::cnstr_get(x_775, 1);
lean::inc(x_844);
lean::dec(x_775);
x_847 = lean::box(0);
x_848 = lean::mk_nat_obj(0u);
lean::inc(x_770);
x_850 = l_list_length__aux___main___rarg(x_770, x_848);
x_851 = l_lean_elaborator_to__pexpr___main___closed__25;
lean::inc(x_851);
lean::inc(x_847);
x_854 = l_lean_kvmap_set__nat(x_847, x_851, x_850);
x_855 = l_lean_elaborator_to__pexpr___main___closed__26;
x_856 = lean::unbox(x_746);
lean::dec(x_746);
lean::inc(x_855);
x_859 = l_lean_kvmap_set__bool(x_854, x_855, x_856);
x_860 = lean::cnstr_get(x_299, 1);
lean::inc(x_860);
lean::dec(x_299);
x_863 = l_lean_elaborator_to__pexpr___main___closed__27;
lean::inc(x_863);
x_865 = l_option_map___rarg(x_863, x_860);
x_866 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_866);
x_868 = l_option_map___rarg(x_866, x_865);
x_869 = l_option_get__or__else___main___rarg(x_868, x_847);
x_870 = l_lean_elaborator_to__pexpr___main___closed__29;
lean::inc(x_870);
x_872 = l_lean_kvmap_set__name(x_859, x_870, x_869);
x_873 = l_list_append___rarg(x_770, x_842);
x_874 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_873);
x_875 = lean_expr_mk_mdata(x_872, x_874);
if (lean::is_scalar(x_307)) {
 x_876 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_876 = x_307;
}
lean::cnstr_set(x_876, 0, x_875);
lean::cnstr_set(x_876, 1, x_844);
x_16 = x_876;
goto lbl_17;
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
obj* x_879; 
lean::inc(x_1);
lean::inc(x_11);
x_879 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_11, x_1, x_2);
if (lean::obj_tag(x_879) == 0)
{
obj* x_884; obj* x_886; obj* x_887; 
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_884 = lean::cnstr_get(x_879, 0);
lean::inc(x_884);
if (lean::is_shared(x_879)) {
 lean::dec(x_879);
 x_886 = lean::box(0);
} else {
 lean::cnstr_release(x_879, 0);
 x_886 = x_879;
}
if (lean::is_scalar(x_886)) {
 x_887 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_887 = x_886;
}
lean::cnstr_set(x_887, 0, x_884);
return x_887;
}
else
{
obj* x_888; obj* x_891; obj* x_893; obj* x_895; obj* x_896; obj* x_897; 
x_888 = lean::cnstr_get(x_879, 0);
lean::inc(x_888);
lean::dec(x_879);
x_891 = lean::cnstr_get(x_888, 0);
lean::inc(x_891);
x_893 = lean::cnstr_get(x_888, 1);
lean::inc(x_893);
if (lean::is_shared(x_888)) {
 lean::dec(x_888);
 x_895 = lean::box(0);
} else {
 lean::cnstr_release(x_888, 0);
 lean::cnstr_release(x_888, 1);
 x_895 = x_888;
}
x_896 = l_list_reverse___rarg(x_891);
if (lean::is_scalar(x_895)) {
 x_897 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_897 = x_895;
}
lean::cnstr_set(x_897, 0, x_896);
lean::cnstr_set(x_897, 1, x_893);
x_18 = x_897;
goto lbl_19;
}
}
}
else
{
obj* x_900; obj* x_901; obj* x_904; obj* x_905; obj* x_906; obj* x_908; obj* x_909; obj* x_910; 
lean::dec(x_11);
lean::dec(x_9);
x_900 = l_lean_parser_string__lit_has__view;
x_901 = lean::cnstr_get(x_900, 0);
lean::inc(x_901);
lean::inc(x_0);
x_904 = lean::apply_1(x_901, x_0);
x_905 = l_lean_parser_string__lit_view_value(x_904);
x_906 = l_lean_elaborator_to__pexpr___main___closed__31;
lean::inc(x_906);
x_908 = l_option_get__or__else___main___rarg(x_905, x_906);
x_909 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_909, 0, x_908);
x_910 = lean_expr_mk_lit(x_909);
if (x_23 == 0)
{
obj* x_911; 
x_911 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_911) == 0)
{
obj* x_914; obj* x_915; 
lean::dec(x_911);
lean::dec(x_1);
x_914 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_914, 0, x_910);
lean::cnstr_set(x_914, 1, x_2);
x_915 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_915, 0, x_914);
return x_915;
}
else
{
obj* x_916; obj* x_919; obj* x_922; obj* x_925; obj* x_926; obj* x_927; obj* x_929; obj* x_931; obj* x_932; obj* x_935; obj* x_937; obj* x_938; obj* x_939; obj* x_940; 
x_916 = lean::cnstr_get(x_911, 0);
lean::inc(x_916);
lean::dec(x_911);
x_919 = lean::cnstr_get(x_1, 0);
lean::inc(x_919);
lean::dec(x_1);
x_922 = lean::cnstr_get(x_919, 2);
lean::inc(x_922);
lean::dec(x_919);
x_925 = l_lean_file__map_to__position(x_922, x_916);
x_926 = lean::box(0);
x_927 = lean::cnstr_get(x_925, 1);
lean::inc(x_927);
x_929 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_929);
x_931 = l_lean_kvmap_set__nat(x_926, x_929, x_927);
x_932 = lean::cnstr_get(x_925, 0);
lean::inc(x_932);
lean::dec(x_925);
x_935 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_935);
x_937 = l_lean_kvmap_set__nat(x_931, x_935, x_932);
x_938 = lean_expr_mk_mdata(x_937, x_910);
x_939 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_939, 0, x_938);
lean::cnstr_set(x_939, 1, x_2);
x_940 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_940, 0, x_939);
return x_940;
}
}
else
{
obj* x_943; obj* x_944; 
lean::dec(x_1);
lean::dec(x_0);
x_943 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_943, 0, x_910);
lean::cnstr_set(x_943, 1, x_2);
x_944 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_944, 0, x_943);
return x_944;
}
}
}
else
{
obj* x_947; obj* x_948; obj* x_951; obj* x_952; obj* x_953; obj* x_954; 
lean::dec(x_11);
lean::dec(x_9);
x_947 = l_lean_parser_number_has__view;
x_948 = lean::cnstr_get(x_947, 0);
lean::inc(x_948);
lean::inc(x_0);
x_951 = lean::apply_1(x_948, x_0);
x_952 = l_lean_parser_number_view_to__nat___main(x_951);
x_953 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_953, 0, x_952);
x_954 = lean_expr_mk_lit(x_953);
if (x_23 == 0)
{
obj* x_955; 
x_955 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_955) == 0)
{
obj* x_958; obj* x_959; 
lean::dec(x_1);
lean::dec(x_955);
x_958 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_958, 0, x_954);
lean::cnstr_set(x_958, 1, x_2);
x_959 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_959, 0, x_958);
return x_959;
}
else
{
obj* x_960; obj* x_963; obj* x_966; obj* x_969; obj* x_970; obj* x_971; obj* x_973; obj* x_975; obj* x_976; obj* x_979; obj* x_981; obj* x_982; obj* x_983; obj* x_984; 
x_960 = lean::cnstr_get(x_955, 0);
lean::inc(x_960);
lean::dec(x_955);
x_963 = lean::cnstr_get(x_1, 0);
lean::inc(x_963);
lean::dec(x_1);
x_966 = lean::cnstr_get(x_963, 2);
lean::inc(x_966);
lean::dec(x_963);
x_969 = l_lean_file__map_to__position(x_966, x_960);
x_970 = lean::box(0);
x_971 = lean::cnstr_get(x_969, 1);
lean::inc(x_971);
x_973 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_973);
x_975 = l_lean_kvmap_set__nat(x_970, x_973, x_971);
x_976 = lean::cnstr_get(x_969, 0);
lean::inc(x_976);
lean::dec(x_969);
x_979 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_979);
x_981 = l_lean_kvmap_set__nat(x_975, x_979, x_976);
x_982 = lean_expr_mk_mdata(x_981, x_954);
x_983 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_983, 0, x_982);
lean::cnstr_set(x_983, 1, x_2);
x_984 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_984, 0, x_983);
return x_984;
}
}
else
{
obj* x_987; obj* x_988; 
lean::dec(x_1);
lean::dec(x_0);
x_987 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_987, 0, x_954);
lean::cnstr_set(x_987, 1, x_2);
x_988 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_988, 0, x_987);
return x_988;
}
}
}
else
{
obj* x_990; obj* x_991; obj* x_994; obj* x_995; obj* x_999; 
lean::dec(x_11);
x_990 = l_lean_parser_term_borrowed_has__view;
x_991 = lean::cnstr_get(x_990, 0);
lean::inc(x_991);
lean::inc(x_0);
x_994 = lean::apply_1(x_991, x_0);
x_995 = lean::cnstr_get(x_994, 1);
lean::inc(x_995);
lean::dec(x_994);
lean::inc(x_1);
x_999 = l_lean_elaborator_to__pexpr___main(x_995, x_1, x_2);
if (lean::obj_tag(x_999) == 0)
{
obj* x_1003; obj* x_1005; obj* x_1006; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1003 = lean::cnstr_get(x_999, 0);
lean::inc(x_1003);
if (lean::is_shared(x_999)) {
 lean::dec(x_999);
 x_1005 = lean::box(0);
} else {
 lean::cnstr_release(x_999, 0);
 x_1005 = x_999;
}
if (lean::is_scalar(x_1005)) {
 x_1006 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1006 = x_1005;
}
lean::cnstr_set(x_1006, 0, x_1003);
return x_1006;
}
else
{
obj* x_1007; obj* x_1010; obj* x_1012; obj* x_1014; obj* x_1015; obj* x_1017; obj* x_1018; 
x_1007 = lean::cnstr_get(x_999, 0);
lean::inc(x_1007);
lean::dec(x_999);
x_1010 = lean::cnstr_get(x_1007, 0);
lean::inc(x_1010);
x_1012 = lean::cnstr_get(x_1007, 1);
lean::inc(x_1012);
if (lean::is_shared(x_1007)) {
 lean::dec(x_1007);
 x_1014 = lean::box(0);
} else {
 lean::cnstr_release(x_1007, 0);
 lean::cnstr_release(x_1007, 1);
 x_1014 = x_1007;
}
x_1015 = l_lean_elaborator_to__pexpr___main___closed__32;
lean::inc(x_1015);
x_1017 = l_lean_elaborator_expr_mk__annotation(x_1015, x_1010);
if (lean::is_scalar(x_1014)) {
 x_1018 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1018 = x_1014;
}
lean::cnstr_set(x_1018, 0, x_1017);
lean::cnstr_set(x_1018, 1, x_1012);
x_16 = x_1018;
goto lbl_17;
}
}
}
else
{
obj* x_1020; obj* x_1021; obj* x_1024; obj* x_1025; obj* x_1029; 
lean::dec(x_11);
x_1020 = l_lean_parser_term_inaccessible_has__view;
x_1021 = lean::cnstr_get(x_1020, 0);
lean::inc(x_1021);
lean::inc(x_0);
x_1024 = lean::apply_1(x_1021, x_0);
x_1025 = lean::cnstr_get(x_1024, 1);
lean::inc(x_1025);
lean::dec(x_1024);
lean::inc(x_1);
x_1029 = l_lean_elaborator_to__pexpr___main(x_1025, x_1, x_2);
if (lean::obj_tag(x_1029) == 0)
{
obj* x_1033; obj* x_1035; obj* x_1036; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1033 = lean::cnstr_get(x_1029, 0);
lean::inc(x_1033);
if (lean::is_shared(x_1029)) {
 lean::dec(x_1029);
 x_1035 = lean::box(0);
} else {
 lean::cnstr_release(x_1029, 0);
 x_1035 = x_1029;
}
if (lean::is_scalar(x_1035)) {
 x_1036 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1036 = x_1035;
}
lean::cnstr_set(x_1036, 0, x_1033);
return x_1036;
}
else
{
obj* x_1037; obj* x_1040; obj* x_1042; obj* x_1044; obj* x_1045; obj* x_1047; obj* x_1048; 
x_1037 = lean::cnstr_get(x_1029, 0);
lean::inc(x_1037);
lean::dec(x_1029);
x_1040 = lean::cnstr_get(x_1037, 0);
lean::inc(x_1040);
x_1042 = lean::cnstr_get(x_1037, 1);
lean::inc(x_1042);
if (lean::is_shared(x_1037)) {
 lean::dec(x_1037);
 x_1044 = lean::box(0);
} else {
 lean::cnstr_release(x_1037, 0);
 lean::cnstr_release(x_1037, 1);
 x_1044 = x_1037;
}
x_1045 = l_lean_elaborator_to__pexpr___main___closed__33;
lean::inc(x_1045);
x_1047 = l_lean_elaborator_expr_mk__annotation(x_1045, x_1040);
if (lean::is_scalar(x_1044)) {
 x_1048 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1048 = x_1044;
}
lean::cnstr_set(x_1048, 0, x_1047);
lean::cnstr_set(x_1048, 1, x_1042);
x_16 = x_1048;
goto lbl_17;
}
}
}
else
{
obj* x_1050; obj* x_1051; obj* x_1054; obj* x_1055; obj* x_1057; obj* x_1058; obj* x_1060; obj* x_1063; 
lean::dec(x_11);
x_1050 = l_lean_parser_term_explicit_has__view;
x_1051 = lean::cnstr_get(x_1050, 0);
lean::inc(x_1051);
lean::inc(x_0);
x_1054 = lean::apply_1(x_1051, x_0);
x_1055 = lean::cnstr_get(x_1054, 0);
lean::inc(x_1055);
x_1057 = l_lean_parser_ident__univs_has__view;
x_1058 = lean::cnstr_get(x_1057, 1);
lean::inc(x_1058);
x_1060 = lean::cnstr_get(x_1054, 1);
lean::inc(x_1060);
lean::dec(x_1054);
x_1063 = lean::apply_1(x_1058, x_1060);
if (lean::obj_tag(x_1055) == 0)
{
obj* x_1066; 
lean::dec(x_1055);
lean::inc(x_1);
x_1066 = l_lean_elaborator_to__pexpr___main(x_1063, x_1, x_2);
if (lean::obj_tag(x_1066) == 0)
{
obj* x_1070; obj* x_1072; obj* x_1073; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1070 = lean::cnstr_get(x_1066, 0);
lean::inc(x_1070);
if (lean::is_shared(x_1066)) {
 lean::dec(x_1066);
 x_1072 = lean::box(0);
} else {
 lean::cnstr_release(x_1066, 0);
 x_1072 = x_1066;
}
if (lean::is_scalar(x_1072)) {
 x_1073 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1073 = x_1072;
}
lean::cnstr_set(x_1073, 0, x_1070);
return x_1073;
}
else
{
obj* x_1074; obj* x_1077; obj* x_1079; obj* x_1081; obj* x_1082; obj* x_1084; obj* x_1085; 
x_1074 = lean::cnstr_get(x_1066, 0);
lean::inc(x_1074);
lean::dec(x_1066);
x_1077 = lean::cnstr_get(x_1074, 0);
lean::inc(x_1077);
x_1079 = lean::cnstr_get(x_1074, 1);
lean::inc(x_1079);
if (lean::is_shared(x_1074)) {
 lean::dec(x_1074);
 x_1081 = lean::box(0);
} else {
 lean::cnstr_release(x_1074, 0);
 lean::cnstr_release(x_1074, 1);
 x_1081 = x_1074;
}
x_1082 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
lean::inc(x_1082);
x_1084 = l_lean_elaborator_expr_mk__annotation(x_1082, x_1077);
if (lean::is_scalar(x_1081)) {
 x_1085 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1085 = x_1081;
}
lean::cnstr_set(x_1085, 0, x_1084);
lean::cnstr_set(x_1085, 1, x_1079);
x_16 = x_1085;
goto lbl_17;
}
}
else
{
obj* x_1088; 
lean::dec(x_1055);
lean::inc(x_1);
x_1088 = l_lean_elaborator_to__pexpr___main(x_1063, x_1, x_2);
if (lean::obj_tag(x_1088) == 0)
{
obj* x_1092; obj* x_1094; obj* x_1095; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1092 = lean::cnstr_get(x_1088, 0);
lean::inc(x_1092);
if (lean::is_shared(x_1088)) {
 lean::dec(x_1088);
 x_1094 = lean::box(0);
} else {
 lean::cnstr_release(x_1088, 0);
 x_1094 = x_1088;
}
if (lean::is_scalar(x_1094)) {
 x_1095 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1095 = x_1094;
}
lean::cnstr_set(x_1095, 0, x_1092);
return x_1095;
}
else
{
obj* x_1096; obj* x_1099; obj* x_1101; obj* x_1103; obj* x_1104; obj* x_1106; obj* x_1107; 
x_1096 = lean::cnstr_get(x_1088, 0);
lean::inc(x_1096);
lean::dec(x_1088);
x_1099 = lean::cnstr_get(x_1096, 0);
lean::inc(x_1099);
x_1101 = lean::cnstr_get(x_1096, 1);
lean::inc(x_1101);
if (lean::is_shared(x_1096)) {
 lean::dec(x_1096);
 x_1103 = lean::box(0);
} else {
 lean::cnstr_release(x_1096, 0);
 lean::cnstr_release(x_1096, 1);
 x_1103 = x_1096;
}
x_1104 = l_lean_elaborator_to__pexpr___main___closed__34;
lean::inc(x_1104);
x_1106 = l_lean_elaborator_expr_mk__annotation(x_1104, x_1099);
if (lean::is_scalar(x_1103)) {
 x_1107 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1107 = x_1103;
}
lean::cnstr_set(x_1107, 0, x_1106);
lean::cnstr_set(x_1107, 1, x_1101);
x_16 = x_1107;
goto lbl_17;
}
}
}
}
else
{
obj* x_1109; obj* x_1110; obj* x_1113; obj* x_1114; obj* x_1116; 
lean::dec(x_11);
x_1109 = l_lean_parser_term_projection_has__view;
x_1110 = lean::cnstr_get(x_1109, 0);
lean::inc(x_1110);
lean::inc(x_0);
x_1113 = lean::apply_1(x_1110, x_0);
x_1114 = lean::cnstr_get(x_1113, 2);
lean::inc(x_1114);
x_1116 = lean::cnstr_get(x_1113, 0);
lean::inc(x_1116);
lean::dec(x_1113);
if (lean::obj_tag(x_1114) == 0)
{
obj* x_1119; obj* x_1123; 
x_1119 = lean::cnstr_get(x_1114, 0);
lean::inc(x_1119);
lean::dec(x_1114);
lean::inc(x_1);
x_1123 = l_lean_elaborator_to__pexpr___main(x_1116, x_1, x_2);
if (lean::obj_tag(x_1123) == 0)
{
obj* x_1128; obj* x_1130; obj* x_1131; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1119);
x_1128 = lean::cnstr_get(x_1123, 0);
lean::inc(x_1128);
if (lean::is_shared(x_1123)) {
 lean::dec(x_1123);
 x_1130 = lean::box(0);
} else {
 lean::cnstr_release(x_1123, 0);
 x_1130 = x_1123;
}
if (lean::is_scalar(x_1130)) {
 x_1131 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1131 = x_1130;
}
lean::cnstr_set(x_1131, 0, x_1128);
return x_1131;
}
else
{
obj* x_1132; obj* x_1135; obj* x_1137; obj* x_1139; obj* x_1140; obj* x_1143; obj* x_1144; obj* x_1145; obj* x_1147; obj* x_1148; obj* x_1149; 
x_1132 = lean::cnstr_get(x_1123, 0);
lean::inc(x_1132);
lean::dec(x_1123);
x_1135 = lean::cnstr_get(x_1132, 0);
lean::inc(x_1135);
x_1137 = lean::cnstr_get(x_1132, 1);
lean::inc(x_1137);
if (lean::is_shared(x_1132)) {
 lean::dec(x_1132);
 x_1139 = lean::box(0);
} else {
 lean::cnstr_release(x_1132, 0);
 lean::cnstr_release(x_1132, 1);
 x_1139 = x_1132;
}
x_1140 = lean::cnstr_get(x_1119, 2);
lean::inc(x_1140);
lean::dec(x_1119);
x_1143 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1143, 0, x_1140);
x_1144 = lean::box(0);
x_1145 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1145);
x_1147 = l_lean_kvmap_insert__core___main(x_1144, x_1145, x_1143);
x_1148 = lean_expr_mk_mdata(x_1147, x_1135);
if (lean::is_scalar(x_1139)) {
 x_1149 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1149 = x_1139;
}
lean::cnstr_set(x_1149, 0, x_1148);
lean::cnstr_set(x_1149, 1, x_1137);
x_16 = x_1149;
goto lbl_17;
}
}
else
{
obj* x_1150; obj* x_1154; 
x_1150 = lean::cnstr_get(x_1114, 0);
lean::inc(x_1150);
lean::dec(x_1114);
lean::inc(x_1);
x_1154 = l_lean_elaborator_to__pexpr___main(x_1116, x_1, x_2);
if (lean::obj_tag(x_1154) == 0)
{
obj* x_1159; obj* x_1161; obj* x_1162; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1150);
x_1159 = lean::cnstr_get(x_1154, 0);
lean::inc(x_1159);
if (lean::is_shared(x_1154)) {
 lean::dec(x_1154);
 x_1161 = lean::box(0);
} else {
 lean::cnstr_release(x_1154, 0);
 x_1161 = x_1154;
}
if (lean::is_scalar(x_1161)) {
 x_1162 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1162 = x_1161;
}
lean::cnstr_set(x_1162, 0, x_1159);
return x_1162;
}
else
{
obj* x_1163; obj* x_1166; obj* x_1168; obj* x_1170; obj* x_1171; obj* x_1172; obj* x_1173; obj* x_1174; obj* x_1176; obj* x_1177; obj* x_1178; 
x_1163 = lean::cnstr_get(x_1154, 0);
lean::inc(x_1163);
lean::dec(x_1154);
x_1166 = lean::cnstr_get(x_1163, 0);
lean::inc(x_1166);
x_1168 = lean::cnstr_get(x_1163, 1);
lean::inc(x_1168);
if (lean::is_shared(x_1163)) {
 lean::dec(x_1163);
 x_1170 = lean::box(0);
} else {
 lean::cnstr_release(x_1163, 0);
 lean::cnstr_release(x_1163, 1);
 x_1170 = x_1163;
}
x_1171 = l_lean_parser_number_view_to__nat___main(x_1150);
x_1172 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1172, 0, x_1171);
x_1173 = lean::box(0);
x_1174 = l_lean_elaborator_to__pexpr___main___closed__35;
lean::inc(x_1174);
x_1176 = l_lean_kvmap_insert__core___main(x_1173, x_1174, x_1172);
x_1177 = lean_expr_mk_mdata(x_1176, x_1166);
if (lean::is_scalar(x_1170)) {
 x_1178 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1178 = x_1170;
}
lean::cnstr_set(x_1178, 0, x_1177);
lean::cnstr_set(x_1178, 1, x_1168);
x_16 = x_1178;
goto lbl_17;
}
}
}
}
else
{
obj* x_1180; obj* x_1181; obj* x_1184; obj* x_1185; 
lean::dec(x_11);
x_1180 = l_lean_parser_term_let_has__view;
x_1181 = lean::cnstr_get(x_1180, 0);
lean::inc(x_1181);
lean::inc(x_0);
x_1184 = lean::apply_1(x_1181, x_0);
x_1185 = lean::cnstr_get(x_1184, 1);
lean::inc(x_1185);
if (lean::obj_tag(x_1185) == 0)
{
obj* x_1187; obj* x_1190; obj* x_1192; obj* x_1194; 
x_1187 = lean::cnstr_get(x_1185, 0);
lean::inc(x_1187);
lean::dec(x_1185);
x_1190 = lean::cnstr_get(x_1187, 0);
lean::inc(x_1190);
x_1192 = lean::cnstr_get(x_1187, 1);
lean::inc(x_1192);
x_1194 = lean::cnstr_get(x_1187, 2);
lean::inc(x_1194);
lean::dec(x_1187);
if (lean::obj_tag(x_1192) == 0)
{
lean::dec(x_1192);
if (lean::obj_tag(x_1194) == 0)
{
obj* x_1201; obj* x_1205; 
lean::dec(x_1184);
lean::dec(x_1194);
lean::dec(x_1190);
x_1201 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_1201);
lean::inc(x_0);
x_1205 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1201, x_1, x_2);
if (lean::obj_tag(x_1205) == 0)
{
obj* x_1209; obj* x_1211; obj* x_1212; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1209 = lean::cnstr_get(x_1205, 0);
lean::inc(x_1209);
if (lean::is_shared(x_1205)) {
 lean::dec(x_1205);
 x_1211 = lean::box(0);
} else {
 lean::cnstr_release(x_1205, 0);
 x_1211 = x_1205;
}
if (lean::is_scalar(x_1211)) {
 x_1212 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1212 = x_1211;
}
lean::cnstr_set(x_1212, 0, x_1209);
return x_1212;
}
else
{
obj* x_1213; 
x_1213 = lean::cnstr_get(x_1205, 0);
lean::inc(x_1213);
lean::dec(x_1205);
x_16 = x_1213;
goto lbl_17;
}
}
else
{
obj* x_1216; obj* x_1219; obj* x_1223; 
x_1216 = lean::cnstr_get(x_1194, 0);
lean::inc(x_1216);
lean::dec(x_1194);
x_1219 = lean::cnstr_get(x_1216, 1);
lean::inc(x_1219);
lean::dec(x_1216);
lean::inc(x_1);
x_1223 = l_lean_elaborator_to__pexpr___main(x_1219, x_1, x_2);
if (lean::obj_tag(x_1223) == 0)
{
obj* x_1229; obj* x_1231; obj* x_1232; 
lean::dec(x_1184);
lean::dec(x_1190);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1229 = lean::cnstr_get(x_1223, 0);
lean::inc(x_1229);
if (lean::is_shared(x_1223)) {
 lean::dec(x_1223);
 x_1231 = lean::box(0);
} else {
 lean::cnstr_release(x_1223, 0);
 x_1231 = x_1223;
}
if (lean::is_scalar(x_1231)) {
 x_1232 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1232 = x_1231;
}
lean::cnstr_set(x_1232, 0, x_1229);
return x_1232;
}
else
{
obj* x_1233; obj* x_1235; obj* x_1236; obj* x_1238; obj* x_1240; obj* x_1241; obj* x_1244; 
x_1233 = lean::cnstr_get(x_1223, 0);
lean::inc(x_1233);
if (lean::is_shared(x_1223)) {
 lean::dec(x_1223);
 x_1235 = lean::box(0);
} else {
 lean::cnstr_release(x_1223, 0);
 x_1235 = x_1223;
}
x_1236 = lean::cnstr_get(x_1233, 0);
lean::inc(x_1236);
x_1238 = lean::cnstr_get(x_1233, 1);
lean::inc(x_1238);
if (lean::is_shared(x_1233)) {
 lean::dec(x_1233);
 x_1240 = lean::box(0);
} else {
 lean::cnstr_release(x_1233, 0);
 lean::cnstr_release(x_1233, 1);
 x_1240 = x_1233;
}
x_1241 = lean::cnstr_get(x_1184, 3);
lean::inc(x_1241);
lean::inc(x_1);
x_1244 = l_lean_elaborator_to__pexpr___main(x_1241, x_1, x_1238);
if (lean::obj_tag(x_1244) == 0)
{
obj* x_1252; obj* x_1255; 
lean::dec(x_1236);
lean::dec(x_1184);
lean::dec(x_1190);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1240);
x_1252 = lean::cnstr_get(x_1244, 0);
lean::inc(x_1252);
lean::dec(x_1244);
if (lean::is_scalar(x_1235)) {
 x_1255 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1255 = x_1235;
 lean::cnstr_set_tag(x_1235, 0);
}
lean::cnstr_set(x_1255, 0, x_1252);
return x_1255;
}
else
{
obj* x_1256; obj* x_1259; obj* x_1261; obj* x_1264; obj* x_1268; 
x_1256 = lean::cnstr_get(x_1244, 0);
lean::inc(x_1256);
lean::dec(x_1244);
x_1259 = lean::cnstr_get(x_1256, 0);
lean::inc(x_1259);
x_1261 = lean::cnstr_get(x_1256, 1);
lean::inc(x_1261);
lean::dec(x_1256);
x_1264 = lean::cnstr_get(x_1184, 5);
lean::inc(x_1264);
lean::dec(x_1184);
lean::inc(x_1);
x_1268 = l_lean_elaborator_to__pexpr___main(x_1264, x_1, x_1261);
if (lean::obj_tag(x_1268) == 0)
{
obj* x_1276; obj* x_1279; 
lean::dec(x_1236);
lean::dec(x_1259);
lean::dec(x_1190);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1240);
x_1276 = lean::cnstr_get(x_1268, 0);
lean::inc(x_1276);
lean::dec(x_1268);
if (lean::is_scalar(x_1235)) {
 x_1279 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1279 = x_1235;
 lean::cnstr_set_tag(x_1235, 0);
}
lean::cnstr_set(x_1279, 0, x_1276);
return x_1279;
}
else
{
obj* x_1281; obj* x_1284; obj* x_1286; obj* x_1289; obj* x_1290; obj* x_1291; 
lean::dec(x_1235);
x_1281 = lean::cnstr_get(x_1268, 0);
lean::inc(x_1281);
lean::dec(x_1268);
x_1284 = lean::cnstr_get(x_1281, 0);
lean::inc(x_1284);
x_1286 = lean::cnstr_get(x_1281, 1);
lean::inc(x_1286);
lean::dec(x_1281);
x_1289 = l_lean_elaborator_mangle__ident(x_1190);
x_1290 = lean_expr_mk_let(x_1289, x_1236, x_1259, x_1284);
if (lean::is_scalar(x_1240)) {
 x_1291 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1291 = x_1240;
}
lean::cnstr_set(x_1291, 0, x_1290);
lean::cnstr_set(x_1291, 1, x_1286);
x_16 = x_1291;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1296; obj* x_1300; 
lean::dec(x_1184);
lean::dec(x_1194);
lean::dec(x_1190);
lean::dec(x_1192);
x_1296 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_1296);
lean::inc(x_0);
x_1300 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1296, x_1, x_2);
if (lean::obj_tag(x_1300) == 0)
{
obj* x_1304; obj* x_1306; obj* x_1307; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1304 = lean::cnstr_get(x_1300, 0);
lean::inc(x_1304);
if (lean::is_shared(x_1300)) {
 lean::dec(x_1300);
 x_1306 = lean::box(0);
} else {
 lean::cnstr_release(x_1300, 0);
 x_1306 = x_1300;
}
if (lean::is_scalar(x_1306)) {
 x_1307 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1307 = x_1306;
}
lean::cnstr_set(x_1307, 0, x_1304);
return x_1307;
}
else
{
obj* x_1308; 
x_1308 = lean::cnstr_get(x_1300, 0);
lean::inc(x_1308);
lean::dec(x_1300);
x_16 = x_1308;
goto lbl_17;
}
}
}
else
{
obj* x_1313; obj* x_1317; 
lean::dec(x_1184);
lean::dec(x_1185);
x_1313 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_1313);
lean::inc(x_0);
x_1317 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1313, x_1, x_2);
if (lean::obj_tag(x_1317) == 0)
{
obj* x_1321; obj* x_1323; obj* x_1324; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1321 = lean::cnstr_get(x_1317, 0);
lean::inc(x_1321);
if (lean::is_shared(x_1317)) {
 lean::dec(x_1317);
 x_1323 = lean::box(0);
} else {
 lean::cnstr_release(x_1317, 0);
 x_1323 = x_1317;
}
if (lean::is_scalar(x_1323)) {
 x_1324 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1324 = x_1323;
}
lean::cnstr_set(x_1324, 0, x_1321);
return x_1324;
}
else
{
obj* x_1325; 
x_1325 = lean::cnstr_get(x_1317, 0);
lean::inc(x_1325);
lean::dec(x_1317);
x_16 = x_1325;
goto lbl_17;
}
}
}
}
else
{
obj* x_1329; obj* x_1330; obj* x_1333; obj* x_1334; obj* x_1337; 
lean::dec(x_11);
x_1329 = l_lean_parser_term_show_has__view;
x_1330 = lean::cnstr_get(x_1329, 0);
lean::inc(x_1330);
lean::inc(x_0);
x_1333 = lean::apply_1(x_1330, x_0);
x_1334 = lean::cnstr_get(x_1333, 1);
lean::inc(x_1334);
lean::inc(x_1);
x_1337 = l_lean_elaborator_to__pexpr___main(x_1334, x_1, x_2);
if (lean::obj_tag(x_1337) == 0)
{
obj* x_1342; obj* x_1344; obj* x_1345; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1333);
x_1342 = lean::cnstr_get(x_1337, 0);
lean::inc(x_1342);
if (lean::is_shared(x_1337)) {
 lean::dec(x_1337);
 x_1344 = lean::box(0);
} else {
 lean::cnstr_release(x_1337, 0);
 x_1344 = x_1337;
}
if (lean::is_scalar(x_1344)) {
 x_1345 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1345 = x_1344;
}
lean::cnstr_set(x_1345, 0, x_1342);
return x_1345;
}
else
{
obj* x_1346; obj* x_1348; obj* x_1349; obj* x_1351; obj* x_1353; obj* x_1354; obj* x_1357; obj* x_1361; 
x_1346 = lean::cnstr_get(x_1337, 0);
lean::inc(x_1346);
if (lean::is_shared(x_1337)) {
 lean::dec(x_1337);
 x_1348 = lean::box(0);
} else {
 lean::cnstr_release(x_1337, 0);
 x_1348 = x_1337;
}
x_1349 = lean::cnstr_get(x_1346, 0);
lean::inc(x_1349);
x_1351 = lean::cnstr_get(x_1346, 1);
lean::inc(x_1351);
if (lean::is_shared(x_1346)) {
 lean::dec(x_1346);
 x_1353 = lean::box(0);
} else {
 lean::cnstr_release(x_1346, 0);
 lean::cnstr_release(x_1346, 1);
 x_1353 = x_1346;
}
x_1354 = lean::cnstr_get(x_1333, 3);
lean::inc(x_1354);
lean::dec(x_1333);
x_1357 = lean::cnstr_get(x_1354, 1);
lean::inc(x_1357);
lean::dec(x_1354);
lean::inc(x_1);
x_1361 = l_lean_elaborator_to__pexpr___main(x_1357, x_1, x_1351);
if (lean::obj_tag(x_1361) == 0)
{
obj* x_1367; obj* x_1370; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1349);
lean::dec(x_1353);
x_1367 = lean::cnstr_get(x_1361, 0);
lean::inc(x_1367);
lean::dec(x_1361);
if (lean::is_scalar(x_1348)) {
 x_1370 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1370 = x_1348;
 lean::cnstr_set_tag(x_1348, 0);
}
lean::cnstr_set(x_1370, 0, x_1367);
return x_1370;
}
else
{
obj* x_1372; obj* x_1375; obj* x_1377; obj* x_1380; uint8 x_1381; obj* x_1382; obj* x_1385; obj* x_1386; obj* x_1387; obj* x_1389; obj* x_1390; 
lean::dec(x_1348);
x_1372 = lean::cnstr_get(x_1361, 0);
lean::inc(x_1372);
lean::dec(x_1361);
x_1375 = lean::cnstr_get(x_1372, 0);
lean::inc(x_1375);
x_1377 = lean::cnstr_get(x_1372, 1);
lean::inc(x_1377);
lean::dec(x_1372);
x_1380 = l_lean_elaborator_to__pexpr___main___closed__37;
x_1381 = 0;
x_1382 = l_lean_elaborator_to__pexpr___main___closed__38;
lean::inc(x_1382);
lean::inc(x_1380);
x_1385 = lean_expr_mk_lambda(x_1380, x_1381, x_1349, x_1382);
x_1386 = lean_expr_mk_app(x_1385, x_1375);
x_1387 = l_lean_elaborator_to__pexpr___main___closed__39;
lean::inc(x_1387);
x_1389 = l_lean_elaborator_expr_mk__annotation(x_1387, x_1386);
if (lean::is_scalar(x_1353)) {
 x_1390 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1390 = x_1353;
}
lean::cnstr_set(x_1390, 0, x_1389);
lean::cnstr_set(x_1390, 1, x_1377);
x_16 = x_1390;
goto lbl_17;
}
}
}
}
else
{
obj* x_1392; obj* x_1393; obj* x_1396; obj* x_1397; obj* x_1399; obj* x_1402; 
lean::dec(x_11);
x_1392 = l_lean_parser_term_have_has__view;
x_1393 = lean::cnstr_get(x_1392, 0);
lean::inc(x_1393);
lean::inc(x_0);
x_1396 = lean::apply_1(x_1393, x_0);
x_1399 = lean::cnstr_get(x_1396, 2);
lean::inc(x_1399);
lean::inc(x_1);
x_1402 = l_lean_elaborator_to__pexpr___main(x_1399, x_1, x_2);
if (lean::obj_tag(x_1402) == 0)
{
obj* x_1407; obj* x_1409; obj* x_1410; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1396);
x_1407 = lean::cnstr_get(x_1402, 0);
lean::inc(x_1407);
if (lean::is_shared(x_1402)) {
 lean::dec(x_1402);
 x_1409 = lean::box(0);
} else {
 lean::cnstr_release(x_1402, 0);
 x_1409 = x_1402;
}
if (lean::is_scalar(x_1409)) {
 x_1410 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1410 = x_1409;
}
lean::cnstr_set(x_1410, 0, x_1407);
return x_1410;
}
else
{
obj* x_1411; obj* x_1413; obj* x_1414; obj* x_1416; obj* x_1418; obj* x_1419; obj* x_1422; 
x_1411 = lean::cnstr_get(x_1402, 0);
lean::inc(x_1411);
if (lean::is_shared(x_1402)) {
 lean::dec(x_1402);
 x_1413 = lean::box(0);
} else {
 lean::cnstr_release(x_1402, 0);
 x_1413 = x_1402;
}
x_1414 = lean::cnstr_get(x_1411, 0);
lean::inc(x_1414);
x_1416 = lean::cnstr_get(x_1411, 1);
lean::inc(x_1416);
if (lean::is_shared(x_1411)) {
 lean::dec(x_1411);
 x_1418 = lean::box(0);
} else {
 lean::cnstr_release(x_1411, 0);
 lean::cnstr_release(x_1411, 1);
 x_1418 = x_1411;
}
x_1419 = lean::cnstr_get(x_1396, 5);
lean::inc(x_1419);
lean::inc(x_1);
x_1422 = l_lean_elaborator_to__pexpr___main(x_1419, x_1, x_1416);
if (lean::obj_tag(x_1422) == 0)
{
obj* x_1429; obj* x_1432; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1414);
lean::dec(x_1396);
lean::dec(x_1418);
x_1429 = lean::cnstr_get(x_1422, 0);
lean::inc(x_1429);
lean::dec(x_1422);
if (lean::is_scalar(x_1413)) {
 x_1432 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1432 = x_1413;
 lean::cnstr_set_tag(x_1413, 0);
}
lean::cnstr_set(x_1432, 0, x_1429);
return x_1432;
}
else
{
obj* x_1434; obj* x_1437; obj* x_1439; obj* x_1442; obj* x_1444; obj* x_1446; obj* x_1447; obj* x_1449; obj* x_1450; obj* x_1452; uint8 x_1453; obj* x_1454; obj* x_1455; 
lean::dec(x_1413);
x_1434 = lean::cnstr_get(x_1422, 0);
lean::inc(x_1434);
lean::dec(x_1422);
x_1437 = lean::cnstr_get(x_1434, 0);
lean::inc(x_1437);
x_1439 = lean::cnstr_get(x_1434, 1);
lean::inc(x_1439);
lean::dec(x_1434);
x_1442 = lean::cnstr_get(x_1396, 1);
lean::inc(x_1442);
x_1444 = l_lean_elaborator_to__pexpr___main___closed__41;
lean::inc(x_1444);
x_1446 = l_option_map___rarg(x_1444, x_1442);
x_1447 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_1447);
x_1449 = l_option_map___rarg(x_1447, x_1446);
x_1450 = l_lean_elaborator_to__pexpr___main___closed__37;
lean::inc(x_1450);
x_1452 = l_option_get__or__else___main___rarg(x_1449, x_1450);
x_1453 = 0;
x_1454 = lean_expr_mk_lambda(x_1452, x_1453, x_1414, x_1437);
if (lean::is_scalar(x_1418)) {
 x_1455 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1455 = x_1418;
}
lean::cnstr_set(x_1455, 0, x_1454);
lean::cnstr_set(x_1455, 1, x_1439);
x_1397 = x_1455;
goto lbl_1398;
}
}
lbl_1398:
{
obj* x_1456; obj* x_1458; obj* x_1460; obj* x_1461; 
x_1456 = lean::cnstr_get(x_1397, 0);
lean::inc(x_1456);
x_1458 = lean::cnstr_get(x_1397, 1);
lean::inc(x_1458);
if (lean::is_shared(x_1397)) {
 lean::dec(x_1397);
 x_1460 = lean::box(0);
} else {
 lean::cnstr_release(x_1397, 0);
 lean::cnstr_release(x_1397, 1);
 x_1460 = x_1397;
}
x_1461 = lean::cnstr_get(x_1396, 3);
lean::inc(x_1461);
lean::dec(x_1396);
if (lean::obj_tag(x_1461) == 0)
{
obj* x_1464; obj* x_1467; obj* x_1471; 
x_1464 = lean::cnstr_get(x_1461, 0);
lean::inc(x_1464);
lean::dec(x_1461);
x_1467 = lean::cnstr_get(x_1464, 1);
lean::inc(x_1467);
lean::dec(x_1464);
lean::inc(x_1);
x_1471 = l_lean_elaborator_to__pexpr___main(x_1467, x_1, x_1458);
if (lean::obj_tag(x_1471) == 0)
{
obj* x_1477; obj* x_1479; obj* x_1480; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1460);
lean::dec(x_1456);
x_1477 = lean::cnstr_get(x_1471, 0);
lean::inc(x_1477);
if (lean::is_shared(x_1471)) {
 lean::dec(x_1471);
 x_1479 = lean::box(0);
} else {
 lean::cnstr_release(x_1471, 0);
 x_1479 = x_1471;
}
if (lean::is_scalar(x_1479)) {
 x_1480 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1480 = x_1479;
}
lean::cnstr_set(x_1480, 0, x_1477);
return x_1480;
}
else
{
obj* x_1481; obj* x_1484; obj* x_1486; obj* x_1489; obj* x_1491; obj* x_1492; obj* x_1493; 
x_1481 = lean::cnstr_get(x_1471, 0);
lean::inc(x_1481);
lean::dec(x_1471);
x_1484 = lean::cnstr_get(x_1481, 0);
lean::inc(x_1484);
x_1486 = lean::cnstr_get(x_1481, 1);
lean::inc(x_1486);
lean::dec(x_1481);
x_1489 = l_lean_elaborator_to__pexpr___main___closed__40;
lean::inc(x_1489);
x_1491 = l_lean_elaborator_expr_mk__annotation(x_1489, x_1456);
x_1492 = lean_expr_mk_app(x_1491, x_1484);
if (lean::is_scalar(x_1460)) {
 x_1493 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1493 = x_1460;
}
lean::cnstr_set(x_1493, 0, x_1492);
lean::cnstr_set(x_1493, 1, x_1486);
x_16 = x_1493;
goto lbl_17;
}
}
else
{
obj* x_1494; obj* x_1497; obj* x_1500; obj* x_1504; 
x_1494 = lean::cnstr_get(x_1461, 0);
lean::inc(x_1494);
lean::dec(x_1461);
x_1497 = lean::cnstr_get(x_1494, 1);
lean::inc(x_1497);
lean::dec(x_1494);
x_1500 = lean::cnstr_get(x_1497, 1);
lean::inc(x_1500);
lean::dec(x_1497);
lean::inc(x_1);
x_1504 = l_lean_elaborator_to__pexpr___main(x_1500, x_1, x_1458);
if (lean::obj_tag(x_1504) == 0)
{
obj* x_1510; obj* x_1512; obj* x_1513; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1460);
lean::dec(x_1456);
x_1510 = lean::cnstr_get(x_1504, 0);
lean::inc(x_1510);
if (lean::is_shared(x_1504)) {
 lean::dec(x_1504);
 x_1512 = lean::box(0);
} else {
 lean::cnstr_release(x_1504, 0);
 x_1512 = x_1504;
}
if (lean::is_scalar(x_1512)) {
 x_1513 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1513 = x_1512;
}
lean::cnstr_set(x_1513, 0, x_1510);
return x_1513;
}
else
{
obj* x_1514; obj* x_1517; obj* x_1519; obj* x_1522; obj* x_1524; obj* x_1525; obj* x_1526; 
x_1514 = lean::cnstr_get(x_1504, 0);
lean::inc(x_1514);
lean::dec(x_1504);
x_1517 = lean::cnstr_get(x_1514, 0);
lean::inc(x_1517);
x_1519 = lean::cnstr_get(x_1514, 1);
lean::inc(x_1519);
lean::dec(x_1514);
x_1522 = l_lean_elaborator_to__pexpr___main___closed__40;
lean::inc(x_1522);
x_1524 = l_lean_elaborator_expr_mk__annotation(x_1522, x_1456);
x_1525 = lean_expr_mk_app(x_1524, x_1517);
if (lean::is_scalar(x_1460)) {
 x_1526 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1526 = x_1460;
}
lean::cnstr_set(x_1526, 0, x_1525);
lean::cnstr_set(x_1526, 1, x_1519);
x_16 = x_1526;
goto lbl_17;
}
}
}
}
}
else
{
lean::dec(x_11);
lean::dec(x_9);
if (x_23 == 0)
{
obj* x_1529; 
x_1529 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1529) == 0)
{
obj* x_1532; obj* x_1534; obj* x_1535; 
lean::dec(x_1529);
lean::dec(x_1);
x_1532 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1532);
x_1534 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1534, 0, x_1532);
lean::cnstr_set(x_1534, 1, x_2);
x_1535 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1535, 0, x_1534);
return x_1535;
}
else
{
obj* x_1536; obj* x_1539; obj* x_1542; obj* x_1545; obj* x_1546; obj* x_1547; obj* x_1549; obj* x_1551; obj* x_1552; obj* x_1555; obj* x_1557; obj* x_1558; obj* x_1560; obj* x_1561; obj* x_1562; 
x_1536 = lean::cnstr_get(x_1529, 0);
lean::inc(x_1536);
lean::dec(x_1529);
x_1539 = lean::cnstr_get(x_1, 0);
lean::inc(x_1539);
lean::dec(x_1);
x_1542 = lean::cnstr_get(x_1539, 2);
lean::inc(x_1542);
lean::dec(x_1539);
x_1545 = l_lean_file__map_to__position(x_1542, x_1536);
x_1546 = lean::box(0);
x_1547 = lean::cnstr_get(x_1545, 1);
lean::inc(x_1547);
x_1549 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1549);
x_1551 = l_lean_kvmap_set__nat(x_1546, x_1549, x_1547);
x_1552 = lean::cnstr_get(x_1545, 0);
lean::inc(x_1552);
lean::dec(x_1545);
x_1555 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1555);
x_1557 = l_lean_kvmap_set__nat(x_1551, x_1555, x_1552);
x_1558 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1558);
x_1560 = lean_expr_mk_mdata(x_1557, x_1558);
x_1561 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1561, 0, x_1560);
lean::cnstr_set(x_1561, 1, x_2);
x_1562 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1562, 0, x_1561);
return x_1562;
}
}
else
{
obj* x_1565; obj* x_1567; obj* x_1568; 
lean::dec(x_1);
lean::dec(x_0);
x_1565 = l_lean_elaborator_to__pexpr___main___closed__42;
lean::inc(x_1565);
x_1567 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1567, 0, x_1565);
lean::cnstr_set(x_1567, 1, x_2);
x_1568 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1568, 0, x_1567);
return x_1568;
}
}
}
else
{
obj* x_1570; obj* x_1571; obj* x_1574; obj* x_1575; obj* x_1578; obj* x_1579; obj* x_1581; obj* x_1583; 
lean::dec(x_11);
x_1570 = l_lean_parser_term_anonymous__constructor_has__view;
x_1571 = lean::cnstr_get(x_1570, 0);
lean::inc(x_1571);
lean::inc(x_0);
x_1574 = lean::apply_1(x_1571, x_0);
x_1575 = lean::cnstr_get(x_1574, 1);
lean::inc(x_1575);
lean::dec(x_1574);
x_1578 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_1575);
x_1579 = l_lean_expander_get__opt__type___main___closed__1;
lean::inc(x_1579);
x_1581 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_1579, x_1578);
lean::inc(x_1);
x_1583 = l_lean_elaborator_to__pexpr___main(x_1581, x_1, x_2);
if (lean::obj_tag(x_1583) == 0)
{
obj* x_1587; obj* x_1589; obj* x_1590; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1587 = lean::cnstr_get(x_1583, 0);
lean::inc(x_1587);
if (lean::is_shared(x_1583)) {
 lean::dec(x_1583);
 x_1589 = lean::box(0);
} else {
 lean::cnstr_release(x_1583, 0);
 x_1589 = x_1583;
}
if (lean::is_scalar(x_1589)) {
 x_1590 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1590 = x_1589;
}
lean::cnstr_set(x_1590, 0, x_1587);
return x_1590;
}
else
{
obj* x_1591; obj* x_1594; obj* x_1596; obj* x_1598; obj* x_1599; obj* x_1601; obj* x_1602; 
x_1591 = lean::cnstr_get(x_1583, 0);
lean::inc(x_1591);
lean::dec(x_1583);
x_1594 = lean::cnstr_get(x_1591, 0);
lean::inc(x_1594);
x_1596 = lean::cnstr_get(x_1591, 1);
lean::inc(x_1596);
if (lean::is_shared(x_1591)) {
 lean::dec(x_1591);
 x_1598 = lean::box(0);
} else {
 lean::cnstr_release(x_1591, 0);
 lean::cnstr_release(x_1591, 1);
 x_1598 = x_1591;
}
x_1599 = l_lean_elaborator_to__pexpr___main___closed__43;
lean::inc(x_1599);
x_1601 = l_lean_elaborator_expr_mk__annotation(x_1599, x_1594);
if (lean::is_scalar(x_1598)) {
 x_1602 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1602 = x_1598;
}
lean::cnstr_set(x_1602, 0, x_1601);
lean::cnstr_set(x_1602, 1, x_1596);
x_16 = x_1602;
goto lbl_17;
}
}
}
else
{
obj* x_1604; obj* x_1605; obj* x_1608; obj* x_1609; obj* x_1610; obj* x_1612; obj* x_1614; 
lean::dec(x_11);
x_1604 = l_lean_parser_term_sort__app_has__view;
x_1605 = lean::cnstr_get(x_1604, 0);
lean::inc(x_1605);
lean::inc(x_0);
x_1608 = lean::apply_1(x_1605, x_0);
x_1609 = l_lean_parser_term_sort_has__view;
x_1610 = lean::cnstr_get(x_1609, 0);
lean::inc(x_1610);
x_1612 = lean::cnstr_get(x_1608, 0);
lean::inc(x_1612);
x_1614 = lean::apply_1(x_1610, x_1612);
if (lean::obj_tag(x_1614) == 0)
{
obj* x_1616; obj* x_1620; 
lean::dec(x_1614);
x_1616 = lean::cnstr_get(x_1608, 1);
lean::inc(x_1616);
lean::dec(x_1608);
lean::inc(x_1);
x_1620 = l_lean_elaborator_to__level___main(x_1616, x_1, x_2);
if (lean::obj_tag(x_1620) == 0)
{
obj* x_1624; obj* x_1626; obj* x_1627; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1624 = lean::cnstr_get(x_1620, 0);
lean::inc(x_1624);
if (lean::is_shared(x_1620)) {
 lean::dec(x_1620);
 x_1626 = lean::box(0);
} else {
 lean::cnstr_release(x_1620, 0);
 x_1626 = x_1620;
}
if (lean::is_scalar(x_1626)) {
 x_1627 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1627 = x_1626;
}
lean::cnstr_set(x_1627, 0, x_1624);
return x_1627;
}
else
{
obj* x_1628; obj* x_1631; obj* x_1633; obj* x_1635; obj* x_1636; obj* x_1637; 
x_1628 = lean::cnstr_get(x_1620, 0);
lean::inc(x_1628);
lean::dec(x_1620);
x_1631 = lean::cnstr_get(x_1628, 0);
lean::inc(x_1631);
x_1633 = lean::cnstr_get(x_1628, 1);
lean::inc(x_1633);
if (lean::is_shared(x_1628)) {
 lean::dec(x_1628);
 x_1635 = lean::box(0);
} else {
 lean::cnstr_release(x_1628, 0);
 lean::cnstr_release(x_1628, 1);
 x_1635 = x_1628;
}
x_1636 = lean_expr_mk_sort(x_1631);
if (lean::is_scalar(x_1635)) {
 x_1637 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1637 = x_1635;
}
lean::cnstr_set(x_1637, 0, x_1636);
lean::cnstr_set(x_1637, 1, x_1633);
x_16 = x_1637;
goto lbl_17;
}
}
else
{
obj* x_1639; obj* x_1643; 
lean::dec(x_1614);
x_1639 = lean::cnstr_get(x_1608, 1);
lean::inc(x_1639);
lean::dec(x_1608);
lean::inc(x_1);
x_1643 = l_lean_elaborator_to__level___main(x_1639, x_1, x_2);
if (lean::obj_tag(x_1643) == 0)
{
obj* x_1647; obj* x_1649; obj* x_1650; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1647 = lean::cnstr_get(x_1643, 0);
lean::inc(x_1647);
if (lean::is_shared(x_1643)) {
 lean::dec(x_1643);
 x_1649 = lean::box(0);
} else {
 lean::cnstr_release(x_1643, 0);
 x_1649 = x_1643;
}
if (lean::is_scalar(x_1649)) {
 x_1650 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1650 = x_1649;
}
lean::cnstr_set(x_1650, 0, x_1647);
return x_1650;
}
else
{
obj* x_1651; obj* x_1654; obj* x_1656; obj* x_1658; obj* x_1659; obj* x_1660; obj* x_1661; 
x_1651 = lean::cnstr_get(x_1643, 0);
lean::inc(x_1651);
lean::dec(x_1643);
x_1654 = lean::cnstr_get(x_1651, 0);
lean::inc(x_1654);
x_1656 = lean::cnstr_get(x_1651, 1);
lean::inc(x_1656);
if (lean::is_shared(x_1651)) {
 lean::dec(x_1651);
 x_1658 = lean::box(0);
} else {
 lean::cnstr_release(x_1651, 0);
 lean::cnstr_release(x_1651, 1);
 x_1658 = x_1651;
}
x_1659 = level_mk_succ(x_1654);
x_1660 = lean_expr_mk_sort(x_1659);
if (lean::is_scalar(x_1658)) {
 x_1661 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1661 = x_1658;
}
lean::cnstr_set(x_1661, 0, x_1660);
lean::cnstr_set(x_1661, 1, x_1656);
x_16 = x_1661;
goto lbl_17;
}
}
}
}
else
{
obj* x_1664; obj* x_1665; obj* x_1668; 
lean::dec(x_11);
lean::dec(x_9);
x_1664 = l_lean_parser_term_sort_has__view;
x_1665 = lean::cnstr_get(x_1664, 0);
lean::inc(x_1665);
lean::inc(x_0);
x_1668 = lean::apply_1(x_1665, x_0);
if (lean::obj_tag(x_1668) == 0)
{
lean::dec(x_1668);
if (x_23 == 0)
{
obj* x_1670; 
x_1670 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1670) == 0)
{
obj* x_1673; obj* x_1675; obj* x_1676; 
lean::dec(x_1670);
lean::dec(x_1);
x_1673 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_1673);
x_1675 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1675, 0, x_1673);
lean::cnstr_set(x_1675, 1, x_2);
x_1676 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1676, 0, x_1675);
return x_1676;
}
else
{
obj* x_1677; obj* x_1680; obj* x_1683; obj* x_1686; obj* x_1687; obj* x_1688; obj* x_1690; obj* x_1692; obj* x_1693; obj* x_1696; obj* x_1698; obj* x_1699; obj* x_1701; obj* x_1702; obj* x_1703; 
x_1677 = lean::cnstr_get(x_1670, 0);
lean::inc(x_1677);
lean::dec(x_1670);
x_1680 = lean::cnstr_get(x_1, 0);
lean::inc(x_1680);
lean::dec(x_1);
x_1683 = lean::cnstr_get(x_1680, 2);
lean::inc(x_1683);
lean::dec(x_1680);
x_1686 = l_lean_file__map_to__position(x_1683, x_1677);
x_1687 = lean::box(0);
x_1688 = lean::cnstr_get(x_1686, 1);
lean::inc(x_1688);
x_1690 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1690);
x_1692 = l_lean_kvmap_set__nat(x_1687, x_1690, x_1688);
x_1693 = lean::cnstr_get(x_1686, 0);
lean::inc(x_1693);
lean::dec(x_1686);
x_1696 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1696);
x_1698 = l_lean_kvmap_set__nat(x_1692, x_1696, x_1693);
x_1699 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_1699);
x_1701 = lean_expr_mk_mdata(x_1698, x_1699);
x_1702 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1702, 0, x_1701);
lean::cnstr_set(x_1702, 1, x_2);
x_1703 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1703, 0, x_1702);
return x_1703;
}
}
else
{
obj* x_1706; obj* x_1708; obj* x_1709; 
lean::dec(x_1);
lean::dec(x_0);
x_1706 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
lean::inc(x_1706);
x_1708 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1708, 0, x_1706);
lean::cnstr_set(x_1708, 1, x_2);
x_1709 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1709, 0, x_1708);
return x_1709;
}
}
else
{
lean::dec(x_1668);
if (x_23 == 0)
{
obj* x_1711; 
x_1711 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1711) == 0)
{
obj* x_1714; obj* x_1716; obj* x_1717; 
lean::dec(x_1);
lean::dec(x_1711);
x_1714 = l_lean_elaborator_to__pexpr___main___closed__44;
lean::inc(x_1714);
x_1716 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1716, 0, x_1714);
lean::cnstr_set(x_1716, 1, x_2);
x_1717 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1717, 0, x_1716);
return x_1717;
}
else
{
obj* x_1718; obj* x_1721; obj* x_1724; obj* x_1727; obj* x_1728; obj* x_1729; obj* x_1731; obj* x_1733; obj* x_1734; obj* x_1737; obj* x_1739; obj* x_1740; obj* x_1742; obj* x_1743; obj* x_1744; 
x_1718 = lean::cnstr_get(x_1711, 0);
lean::inc(x_1718);
lean::dec(x_1711);
x_1721 = lean::cnstr_get(x_1, 0);
lean::inc(x_1721);
lean::dec(x_1);
x_1724 = lean::cnstr_get(x_1721, 2);
lean::inc(x_1724);
lean::dec(x_1721);
x_1727 = l_lean_file__map_to__position(x_1724, x_1718);
x_1728 = lean::box(0);
x_1729 = lean::cnstr_get(x_1727, 1);
lean::inc(x_1729);
x_1731 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_1731);
x_1733 = l_lean_kvmap_set__nat(x_1728, x_1731, x_1729);
x_1734 = lean::cnstr_get(x_1727, 0);
lean::inc(x_1734);
lean::dec(x_1727);
x_1737 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_1737);
x_1739 = l_lean_kvmap_set__nat(x_1733, x_1737, x_1734);
x_1740 = l_lean_elaborator_to__pexpr___main___closed__44;
lean::inc(x_1740);
x_1742 = lean_expr_mk_mdata(x_1739, x_1740);
x_1743 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1743, 0, x_1742);
lean::cnstr_set(x_1743, 1, x_2);
x_1744 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1744, 0, x_1743);
return x_1744;
}
}
else
{
obj* x_1747; obj* x_1749; obj* x_1750; 
lean::dec(x_1);
lean::dec(x_0);
x_1747 = l_lean_elaborator_to__pexpr___main___closed__44;
lean::inc(x_1747);
x_1749 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1749, 0, x_1747);
lean::cnstr_set(x_1749, 1, x_2);
x_1750 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1750, 0, x_1749);
return x_1750;
}
}
}
}
else
{
obj* x_1752; obj* x_1753; obj* x_1756; obj* x_1757; 
lean::dec(x_11);
x_1752 = l_lean_parser_term_pi_has__view;
x_1753 = lean::cnstr_get(x_1752, 0);
lean::inc(x_1753);
lean::inc(x_0);
x_1756 = lean::apply_1(x_1753, x_0);
x_1757 = lean::cnstr_get(x_1756, 1);
lean::inc(x_1757);
if (lean::obj_tag(x_1757) == 0)
{
obj* x_1761; obj* x_1765; 
lean::dec(x_1757);
lean::dec(x_1756);
x_1761 = l_lean_elaborator_to__pexpr___main___closed__45;
lean::inc(x_1);
lean::inc(x_1761);
lean::inc(x_0);
x_1765 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1761, x_1, x_2);
if (lean::obj_tag(x_1765) == 0)
{
obj* x_1769; obj* x_1771; obj* x_1772; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1769 = lean::cnstr_get(x_1765, 0);
lean::inc(x_1769);
if (lean::is_shared(x_1765)) {
 lean::dec(x_1765);
 x_1771 = lean::box(0);
} else {
 lean::cnstr_release(x_1765, 0);
 x_1771 = x_1765;
}
if (lean::is_scalar(x_1771)) {
 x_1772 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1772 = x_1771;
}
lean::cnstr_set(x_1772, 0, x_1769);
return x_1772;
}
else
{
obj* x_1773; 
x_1773 = lean::cnstr_get(x_1765, 0);
lean::inc(x_1773);
lean::dec(x_1765);
x_16 = x_1773;
goto lbl_17;
}
}
else
{
obj* x_1776; obj* x_1779; obj* x_1780; obj* x_1782; obj* x_1784; obj* x_1785; obj* x_1787; obj* x_1791; 
x_1776 = lean::cnstr_get(x_1757, 0);
lean::inc(x_1776);
lean::dec(x_1757);
x_1779 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1776);
x_1780 = lean::cnstr_get(x_1779, 0);
lean::inc(x_1780);
x_1782 = lean::cnstr_get(x_1779, 1);
lean::inc(x_1782);
if (lean::is_shared(x_1779)) {
 lean::dec(x_1779);
 x_1784 = lean::box(0);
} else {
 lean::cnstr_release(x_1779, 0);
 lean::cnstr_release(x_1779, 1);
 x_1784 = x_1779;
}
x_1785 = lean::cnstr_get(x_1782, 0);
lean::inc(x_1785);
x_1787 = lean::cnstr_get(x_1782, 1);
lean::inc(x_1787);
lean::dec(x_1782);
lean::inc(x_1);
x_1791 = l_lean_elaborator_to__pexpr___main(x_1787, x_1, x_2);
if (lean::obj_tag(x_1791) == 0)
{
obj* x_1799; obj* x_1801; obj* x_1802; 
lean::dec(x_1785);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1784);
lean::dec(x_1780);
lean::dec(x_1756);
x_1799 = lean::cnstr_get(x_1791, 0);
lean::inc(x_1799);
if (lean::is_shared(x_1791)) {
 lean::dec(x_1791);
 x_1801 = lean::box(0);
} else {
 lean::cnstr_release(x_1791, 0);
 x_1801 = x_1791;
}
if (lean::is_scalar(x_1801)) {
 x_1802 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1802 = x_1801;
}
lean::cnstr_set(x_1802, 0, x_1799);
return x_1802;
}
else
{
obj* x_1803; obj* x_1805; obj* x_1806; obj* x_1808; obj* x_1811; obj* x_1815; 
x_1803 = lean::cnstr_get(x_1791, 0);
lean::inc(x_1803);
if (lean::is_shared(x_1791)) {
 lean::dec(x_1791);
 x_1805 = lean::box(0);
} else {
 lean::cnstr_release(x_1791, 0);
 x_1805 = x_1791;
}
x_1806 = lean::cnstr_get(x_1803, 0);
lean::inc(x_1806);
x_1808 = lean::cnstr_get(x_1803, 1);
lean::inc(x_1808);
lean::dec(x_1803);
x_1811 = lean::cnstr_get(x_1756, 3);
lean::inc(x_1811);
lean::dec(x_1756);
lean::inc(x_1);
x_1815 = l_lean_elaborator_to__pexpr___main(x_1811, x_1, x_1808);
if (lean::obj_tag(x_1815) == 0)
{
obj* x_1823; obj* x_1826; 
lean::dec(x_1785);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1784);
lean::dec(x_1780);
lean::dec(x_1806);
x_1823 = lean::cnstr_get(x_1815, 0);
lean::inc(x_1823);
lean::dec(x_1815);
if (lean::is_scalar(x_1805)) {
 x_1826 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1826 = x_1805;
 lean::cnstr_set_tag(x_1805, 0);
}
lean::cnstr_set(x_1826, 0, x_1823);
return x_1826;
}
else
{
obj* x_1828; obj* x_1831; obj* x_1833; obj* x_1836; uint8 x_1837; obj* x_1839; obj* x_1840; 
lean::dec(x_1805);
x_1828 = lean::cnstr_get(x_1815, 0);
lean::inc(x_1828);
lean::dec(x_1815);
x_1831 = lean::cnstr_get(x_1828, 0);
lean::inc(x_1831);
x_1833 = lean::cnstr_get(x_1828, 1);
lean::inc(x_1833);
lean::dec(x_1828);
x_1836 = l_lean_elaborator_mangle__ident(x_1785);
x_1837 = lean::unbox(x_1780);
lean::dec(x_1780);
x_1839 = lean_expr_mk_pi(x_1836, x_1837, x_1806, x_1831);
if (lean::is_scalar(x_1784)) {
 x_1840 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1840 = x_1784;
}
lean::cnstr_set(x_1840, 0, x_1839);
lean::cnstr_set(x_1840, 1, x_1833);
x_16 = x_1840;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1842; obj* x_1843; obj* x_1846; obj* x_1847; 
lean::dec(x_11);
x_1842 = l_lean_parser_term_lambda_has__view;
x_1843 = lean::cnstr_get(x_1842, 0);
lean::inc(x_1843);
lean::inc(x_0);
x_1846 = lean::apply_1(x_1843, x_0);
x_1847 = lean::cnstr_get(x_1846, 1);
lean::inc(x_1847);
if (lean::obj_tag(x_1847) == 0)
{
obj* x_1851; obj* x_1855; 
lean::dec(x_1846);
lean::dec(x_1847);
x_1851 = l_lean_elaborator_to__pexpr___main___closed__46;
lean::inc(x_1);
lean::inc(x_1851);
lean::inc(x_0);
x_1855 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1851, x_1, x_2);
if (lean::obj_tag(x_1855) == 0)
{
obj* x_1859; obj* x_1861; obj* x_1862; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1859 = lean::cnstr_get(x_1855, 0);
lean::inc(x_1859);
if (lean::is_shared(x_1855)) {
 lean::dec(x_1855);
 x_1861 = lean::box(0);
} else {
 lean::cnstr_release(x_1855, 0);
 x_1861 = x_1855;
}
if (lean::is_scalar(x_1861)) {
 x_1862 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1862 = x_1861;
}
lean::cnstr_set(x_1862, 0, x_1859);
return x_1862;
}
else
{
obj* x_1863; 
x_1863 = lean::cnstr_get(x_1855, 0);
lean::inc(x_1863);
lean::dec(x_1855);
x_16 = x_1863;
goto lbl_17;
}
}
else
{
obj* x_1866; obj* x_1869; obj* x_1870; obj* x_1872; obj* x_1874; obj* x_1875; obj* x_1877; obj* x_1881; 
x_1866 = lean::cnstr_get(x_1847, 0);
lean::inc(x_1866);
lean::dec(x_1847);
x_1869 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1866);
x_1870 = lean::cnstr_get(x_1869, 0);
lean::inc(x_1870);
x_1872 = lean::cnstr_get(x_1869, 1);
lean::inc(x_1872);
if (lean::is_shared(x_1869)) {
 lean::dec(x_1869);
 x_1874 = lean::box(0);
} else {
 lean::cnstr_release(x_1869, 0);
 lean::cnstr_release(x_1869, 1);
 x_1874 = x_1869;
}
x_1875 = lean::cnstr_get(x_1872, 0);
lean::inc(x_1875);
x_1877 = lean::cnstr_get(x_1872, 1);
lean::inc(x_1877);
lean::dec(x_1872);
lean::inc(x_1);
x_1881 = l_lean_elaborator_to__pexpr___main(x_1877, x_1, x_2);
if (lean::obj_tag(x_1881) == 0)
{
obj* x_1889; obj* x_1891; obj* x_1892; 
lean::dec(x_1875);
lean::dec(x_1846);
lean::dec(x_1870);
lean::dec(x_1874);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1889 = lean::cnstr_get(x_1881, 0);
lean::inc(x_1889);
if (lean::is_shared(x_1881)) {
 lean::dec(x_1881);
 x_1891 = lean::box(0);
} else {
 lean::cnstr_release(x_1881, 0);
 x_1891 = x_1881;
}
if (lean::is_scalar(x_1891)) {
 x_1892 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1892 = x_1891;
}
lean::cnstr_set(x_1892, 0, x_1889);
return x_1892;
}
else
{
obj* x_1893; obj* x_1895; obj* x_1896; obj* x_1898; obj* x_1901; obj* x_1905; 
x_1893 = lean::cnstr_get(x_1881, 0);
lean::inc(x_1893);
if (lean::is_shared(x_1881)) {
 lean::dec(x_1881);
 x_1895 = lean::box(0);
} else {
 lean::cnstr_release(x_1881, 0);
 x_1895 = x_1881;
}
x_1896 = lean::cnstr_get(x_1893, 0);
lean::inc(x_1896);
x_1898 = lean::cnstr_get(x_1893, 1);
lean::inc(x_1898);
lean::dec(x_1893);
x_1901 = lean::cnstr_get(x_1846, 3);
lean::inc(x_1901);
lean::dec(x_1846);
lean::inc(x_1);
x_1905 = l_lean_elaborator_to__pexpr___main(x_1901, x_1, x_1898);
if (lean::obj_tag(x_1905) == 0)
{
obj* x_1913; obj* x_1916; 
lean::dec(x_1875);
lean::dec(x_1896);
lean::dec(x_1870);
lean::dec(x_1874);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_1913 = lean::cnstr_get(x_1905, 0);
lean::inc(x_1913);
lean::dec(x_1905);
if (lean::is_scalar(x_1895)) {
 x_1916 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1916 = x_1895;
 lean::cnstr_set_tag(x_1895, 0);
}
lean::cnstr_set(x_1916, 0, x_1913);
return x_1916;
}
else
{
obj* x_1918; obj* x_1921; obj* x_1923; obj* x_1926; uint8 x_1927; obj* x_1929; obj* x_1930; 
lean::dec(x_1895);
x_1918 = lean::cnstr_get(x_1905, 0);
lean::inc(x_1918);
lean::dec(x_1905);
x_1921 = lean::cnstr_get(x_1918, 0);
lean::inc(x_1921);
x_1923 = lean::cnstr_get(x_1918, 1);
lean::inc(x_1923);
lean::dec(x_1918);
x_1926 = l_lean_elaborator_mangle__ident(x_1875);
x_1927 = lean::unbox(x_1870);
lean::dec(x_1870);
x_1929 = lean_expr_mk_lambda(x_1926, x_1927, x_1896, x_1921);
if (lean::is_scalar(x_1874)) {
 x_1930 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1930 = x_1874;
}
lean::cnstr_set(x_1930, 0, x_1929);
lean::cnstr_set(x_1930, 1, x_1923);
x_16 = x_1930;
goto lbl_17;
}
}
}
}
}
else
{
obj* x_1932; obj* x_1933; obj* x_1936; obj* x_1937; obj* x_1940; 
lean::dec(x_11);
x_1932 = l_lean_parser_term_app_has__view;
x_1933 = lean::cnstr_get(x_1932, 0);
lean::inc(x_1933);
lean::inc(x_0);
x_1936 = lean::apply_1(x_1933, x_0);
x_1937 = lean::cnstr_get(x_1936, 0);
lean::inc(x_1937);
lean::inc(x_1);
x_1940 = l_lean_elaborator_to__pexpr___main(x_1937, x_1, x_2);
if (lean::obj_tag(x_1940) == 0)
{
obj* x_1945; obj* x_1947; obj* x_1948; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1936);
x_1945 = lean::cnstr_get(x_1940, 0);
lean::inc(x_1945);
if (lean::is_shared(x_1940)) {
 lean::dec(x_1940);
 x_1947 = lean::box(0);
} else {
 lean::cnstr_release(x_1940, 0);
 x_1947 = x_1940;
}
if (lean::is_scalar(x_1947)) {
 x_1948 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1948 = x_1947;
}
lean::cnstr_set(x_1948, 0, x_1945);
return x_1948;
}
else
{
obj* x_1949; obj* x_1951; obj* x_1952; obj* x_1954; obj* x_1956; obj* x_1957; obj* x_1961; 
x_1949 = lean::cnstr_get(x_1940, 0);
lean::inc(x_1949);
if (lean::is_shared(x_1940)) {
 lean::dec(x_1940);
 x_1951 = lean::box(0);
} else {
 lean::cnstr_release(x_1940, 0);
 x_1951 = x_1940;
}
x_1952 = lean::cnstr_get(x_1949, 0);
lean::inc(x_1952);
x_1954 = lean::cnstr_get(x_1949, 1);
lean::inc(x_1954);
if (lean::is_shared(x_1949)) {
 lean::dec(x_1949);
 x_1956 = lean::box(0);
} else {
 lean::cnstr_release(x_1949, 0);
 lean::cnstr_release(x_1949, 1);
 x_1956 = x_1949;
}
x_1957 = lean::cnstr_get(x_1936, 1);
lean::inc(x_1957);
lean::dec(x_1936);
lean::inc(x_1);
x_1961 = l_lean_elaborator_to__pexpr___main(x_1957, x_1, x_1954);
if (lean::obj_tag(x_1961) == 0)
{
obj* x_1967; obj* x_1970; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1956);
lean::dec(x_1952);
x_1967 = lean::cnstr_get(x_1961, 0);
lean::inc(x_1967);
lean::dec(x_1961);
if (lean::is_scalar(x_1951)) {
 x_1970 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1970 = x_1951;
 lean::cnstr_set_tag(x_1951, 0);
}
lean::cnstr_set(x_1970, 0, x_1967);
return x_1970;
}
else
{
obj* x_1972; obj* x_1975; obj* x_1977; obj* x_1980; obj* x_1981; 
lean::dec(x_1951);
x_1972 = lean::cnstr_get(x_1961, 0);
lean::inc(x_1972);
lean::dec(x_1961);
x_1975 = lean::cnstr_get(x_1972, 0);
lean::inc(x_1975);
x_1977 = lean::cnstr_get(x_1972, 1);
lean::inc(x_1977);
lean::dec(x_1972);
x_1980 = lean_expr_mk_app(x_1952, x_1975);
if (lean::is_scalar(x_1956)) {
 x_1981 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1981 = x_1956;
}
lean::cnstr_set(x_1981, 0, x_1980);
lean::cnstr_set(x_1981, 1, x_1977);
x_16 = x_1981;
goto lbl_17;
}
}
}
}
else
{
obj* x_1983; obj* x_1984; obj* x_1987; obj* x_1988; obj* x_1990; 
lean::dec(x_11);
x_1983 = l_lean_parser_ident__univs_has__view;
x_1984 = lean::cnstr_get(x_1983, 0);
lean::inc(x_1984);
lean::inc(x_0);
x_1987 = lean::apply_1(x_1984, x_0);
x_1988 = lean::cnstr_get(x_1987, 0);
lean::inc(x_1988);
x_1990 = lean::cnstr_get(x_1987, 1);
lean::inc(x_1990);
lean::dec(x_1987);
if (lean::obj_tag(x_1990) == 0)
{
obj* x_1995; obj* x_1996; obj* x_1998; obj* x_1999; obj* x_2002; obj* x_2003; obj* x_2004; obj* x_2006; obj* x_2007; obj* x_2008; uint8 x_2009; 
lean::dec(x_1990);
lean::inc(x_1988);
x_1995 = l_lean_elaborator_mangle__ident(x_1988);
x_1996 = lean::box(0);
lean::inc(x_1996);
x_1998 = lean_expr_mk_const(x_1995, x_1996);
x_1999 = lean::cnstr_get(x_1988, 3);
lean::inc(x_1999);
lean::dec(x_1988);
x_2002 = lean::mk_nat_obj(0u);
x_2003 = l_list_enum__from___main___rarg(x_2002, x_1999);
x_2004 = l_lean_elaborator_to__pexpr___main___closed__47;
lean::inc(x_2004);
x_2006 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(x_2004, x_2003);
x_2007 = lean_expr_mk_mdata(x_2006, x_1998);
x_2008 = l_lean_elaborator_to__pexpr___main___closed__2;
x_2009 = lean_name_dec_eq(x_9, x_2008);
lean::dec(x_9);
if (x_2009 == 0)
{
obj* x_2011; 
x_2011 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2011) == 0)
{
obj* x_2015; obj* x_2016; 
lean::dec(x_1996);
lean::dec(x_1);
lean::dec(x_2011);
x_2015 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2015, 0, x_2007);
lean::cnstr_set(x_2015, 1, x_2);
x_2016 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2016, 0, x_2015);
return x_2016;
}
else
{
obj* x_2017; obj* x_2020; obj* x_2023; obj* x_2026; obj* x_2027; obj* x_2029; obj* x_2031; obj* x_2032; obj* x_2035; obj* x_2037; obj* x_2038; obj* x_2039; obj* x_2040; 
x_2017 = lean::cnstr_get(x_2011, 0);
lean::inc(x_2017);
lean::dec(x_2011);
x_2020 = lean::cnstr_get(x_1, 0);
lean::inc(x_2020);
lean::dec(x_1);
x_2023 = lean::cnstr_get(x_2020, 2);
lean::inc(x_2023);
lean::dec(x_2020);
x_2026 = l_lean_file__map_to__position(x_2023, x_2017);
x_2027 = lean::cnstr_get(x_2026, 1);
lean::inc(x_2027);
x_2029 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2029);
x_2031 = l_lean_kvmap_set__nat(x_1996, x_2029, x_2027);
x_2032 = lean::cnstr_get(x_2026, 0);
lean::inc(x_2032);
lean::dec(x_2026);
x_2035 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2035);
x_2037 = l_lean_kvmap_set__nat(x_2031, x_2035, x_2032);
x_2038 = lean_expr_mk_mdata(x_2037, x_2007);
x_2039 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2039, 0, x_2038);
lean::cnstr_set(x_2039, 1, x_2);
x_2040 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2040, 0, x_2039);
return x_2040;
}
}
else
{
obj* x_2044; obj* x_2045; 
lean::dec(x_1996);
lean::dec(x_1);
lean::dec(x_0);
x_2044 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2044, 0, x_2007);
lean::cnstr_set(x_2044, 1, x_2);
x_2045 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2045, 0, x_2044);
return x_2045;
}
}
else
{
obj* x_2046; obj* x_2049; obj* x_2053; 
x_2046 = lean::cnstr_get(x_1990, 0);
lean::inc(x_2046);
lean::dec(x_1990);
x_2049 = lean::cnstr_get(x_2046, 1);
lean::inc(x_2049);
lean::dec(x_2046);
lean::inc(x_1);
x_2053 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_2049, x_1, x_2);
if (lean::obj_tag(x_2053) == 0)
{
obj* x_2058; obj* x_2060; obj* x_2061; 
lean::dec(x_1988);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_2058 = lean::cnstr_get(x_2053, 0);
lean::inc(x_2058);
if (lean::is_shared(x_2053)) {
 lean::dec(x_2053);
 x_2060 = lean::box(0);
} else {
 lean::cnstr_release(x_2053, 0);
 x_2060 = x_2053;
}
if (lean::is_scalar(x_2060)) {
 x_2061 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2061 = x_2060;
}
lean::cnstr_set(x_2061, 0, x_2058);
return x_2061;
}
else
{
obj* x_2062; obj* x_2065; obj* x_2067; obj* x_2069; obj* x_2071; obj* x_2072; obj* x_2073; obj* x_2076; obj* x_2077; obj* x_2078; obj* x_2080; obj* x_2081; obj* x_2082; 
x_2062 = lean::cnstr_get(x_2053, 0);
lean::inc(x_2062);
lean::dec(x_2053);
x_2065 = lean::cnstr_get(x_2062, 0);
lean::inc(x_2065);
x_2067 = lean::cnstr_get(x_2062, 1);
lean::inc(x_2067);
if (lean::is_shared(x_2062)) {
 lean::dec(x_2062);
 x_2069 = lean::box(0);
} else {
 lean::cnstr_release(x_2062, 0);
 lean::cnstr_release(x_2062, 1);
 x_2069 = x_2062;
}
lean::inc(x_1988);
x_2071 = l_lean_elaborator_mangle__ident(x_1988);
x_2072 = lean_expr_mk_const(x_2071, x_2065);
x_2073 = lean::cnstr_get(x_1988, 3);
lean::inc(x_2073);
lean::dec(x_1988);
x_2076 = lean::mk_nat_obj(0u);
x_2077 = l_list_enum__from___main___rarg(x_2076, x_2073);
x_2078 = l_lean_elaborator_to__pexpr___main___closed__47;
lean::inc(x_2078);
x_2080 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(x_2078, x_2077);
x_2081 = lean_expr_mk_mdata(x_2080, x_2072);
if (lean::is_scalar(x_2069)) {
 x_2082 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2082 = x_2069;
}
lean::cnstr_set(x_2082, 0, x_2081);
lean::cnstr_set(x_2082, 1, x_2067);
x_16 = x_2082;
goto lbl_17;
}
}
}
lbl_15:
{
if (lean::obj_tag(x_14) == 0)
{
obj* x_2086; obj* x_2088; obj* x_2089; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_2086 = lean::cnstr_get(x_14, 0);
lean::inc(x_2086);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_2088 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_2088 = x_14;
}
if (lean::is_scalar(x_2088)) {
 x_2089 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2089 = x_2088;
}
lean::cnstr_set(x_2089, 0, x_2086);
return x_2089;
}
else
{
obj* x_2090; obj* x_2092; obj* x_2093; obj* x_2095; obj* x_2097; obj* x_2098; uint8 x_2099; 
x_2090 = lean::cnstr_get(x_14, 0);
lean::inc(x_2090);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_2092 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_2092 = x_14;
}
x_2093 = lean::cnstr_get(x_2090, 0);
lean::inc(x_2093);
x_2095 = lean::cnstr_get(x_2090, 1);
lean::inc(x_2095);
if (lean::is_shared(x_2090)) {
 lean::dec(x_2090);
 x_2097 = lean::box(0);
} else {
 lean::cnstr_release(x_2090, 0);
 lean::cnstr_release(x_2090, 1);
 x_2097 = x_2090;
}
x_2098 = l_lean_elaborator_to__pexpr___main___closed__2;
x_2099 = lean_name_dec_eq(x_9, x_2098);
lean::dec(x_9);
if (x_2099 == 0)
{
obj* x_2101; 
x_2101 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2101) == 0)
{
obj* x_2104; obj* x_2105; 
lean::dec(x_2101);
lean::dec(x_1);
if (lean::is_scalar(x_2097)) {
 x_2104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2104 = x_2097;
}
lean::cnstr_set(x_2104, 0, x_2093);
lean::cnstr_set(x_2104, 1, x_2095);
if (lean::is_scalar(x_2092)) {
 x_2105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2105 = x_2092;
}
lean::cnstr_set(x_2105, 0, x_2104);
return x_2105;
}
else
{
obj* x_2106; obj* x_2109; obj* x_2112; obj* x_2115; obj* x_2116; obj* x_2117; obj* x_2119; obj* x_2121; obj* x_2122; obj* x_2125; obj* x_2127; obj* x_2128; obj* x_2129; obj* x_2130; 
x_2106 = lean::cnstr_get(x_2101, 0);
lean::inc(x_2106);
lean::dec(x_2101);
x_2109 = lean::cnstr_get(x_1, 0);
lean::inc(x_2109);
lean::dec(x_1);
x_2112 = lean::cnstr_get(x_2109, 2);
lean::inc(x_2112);
lean::dec(x_2109);
x_2115 = l_lean_file__map_to__position(x_2112, x_2106);
x_2116 = lean::box(0);
x_2117 = lean::cnstr_get(x_2115, 1);
lean::inc(x_2117);
x_2119 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2119);
x_2121 = l_lean_kvmap_set__nat(x_2116, x_2119, x_2117);
x_2122 = lean::cnstr_get(x_2115, 0);
lean::inc(x_2122);
lean::dec(x_2115);
x_2125 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2125);
x_2127 = l_lean_kvmap_set__nat(x_2121, x_2125, x_2122);
x_2128 = lean_expr_mk_mdata(x_2127, x_2093);
if (lean::is_scalar(x_2097)) {
 x_2129 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2129 = x_2097;
}
lean::cnstr_set(x_2129, 0, x_2128);
lean::cnstr_set(x_2129, 1, x_2095);
if (lean::is_scalar(x_2092)) {
 x_2130 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2130 = x_2092;
}
lean::cnstr_set(x_2130, 0, x_2129);
return x_2130;
}
}
else
{
obj* x_2133; obj* x_2134; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_2097)) {
 x_2133 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2133 = x_2097;
}
lean::cnstr_set(x_2133, 0, x_2093);
lean::cnstr_set(x_2133, 1, x_2095);
if (lean::is_scalar(x_2092)) {
 x_2134 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_2134 = x_2092;
}
lean::cnstr_set(x_2134, 0, x_2133);
return x_2134;
}
}
}
lbl_17:
{
obj* x_2135; obj* x_2137; obj* x_2139; obj* x_2140; uint8 x_2141; 
x_2135 = lean::cnstr_get(x_16, 0);
lean::inc(x_2135);
x_2137 = lean::cnstr_get(x_16, 1);
lean::inc(x_2137);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_2139 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 lean::cnstr_release(x_16, 1);
 x_2139 = x_16;
}
x_2140 = l_lean_elaborator_to__pexpr___main___closed__2;
x_2141 = lean_name_dec_eq(x_9, x_2140);
lean::dec(x_9);
if (x_2141 == 0)
{
obj* x_2143; 
x_2143 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_2143) == 0)
{
obj* x_2146; obj* x_2147; 
lean::dec(x_1);
lean::dec(x_2143);
if (lean::is_scalar(x_2139)) {
 x_2146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2146 = x_2139;
}
lean::cnstr_set(x_2146, 0, x_2135);
lean::cnstr_set(x_2146, 1, x_2137);
x_2147 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2147, 0, x_2146);
return x_2147;
}
else
{
obj* x_2148; obj* x_2151; obj* x_2154; obj* x_2157; obj* x_2158; obj* x_2159; obj* x_2161; obj* x_2163; obj* x_2164; obj* x_2167; obj* x_2169; obj* x_2170; obj* x_2171; obj* x_2172; 
x_2148 = lean::cnstr_get(x_2143, 0);
lean::inc(x_2148);
lean::dec(x_2143);
x_2151 = lean::cnstr_get(x_1, 0);
lean::inc(x_2151);
lean::dec(x_1);
x_2154 = lean::cnstr_get(x_2151, 2);
lean::inc(x_2154);
lean::dec(x_2151);
x_2157 = l_lean_file__map_to__position(x_2154, x_2148);
x_2158 = lean::box(0);
x_2159 = lean::cnstr_get(x_2157, 1);
lean::inc(x_2159);
x_2161 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_2161);
x_2163 = l_lean_kvmap_set__nat(x_2158, x_2161, x_2159);
x_2164 = lean::cnstr_get(x_2157, 0);
lean::inc(x_2164);
lean::dec(x_2157);
x_2167 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_2167);
x_2169 = l_lean_kvmap_set__nat(x_2163, x_2167, x_2164);
x_2170 = lean_expr_mk_mdata(x_2169, x_2135);
if (lean::is_scalar(x_2139)) {
 x_2171 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2171 = x_2139;
}
lean::cnstr_set(x_2171, 0, x_2170);
lean::cnstr_set(x_2171, 1, x_2137);
x_2172 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2172, 0, x_2171);
return x_2172;
}
}
else
{
obj* x_2175; obj* x_2176; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_2139)) {
 x_2175 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2175 = x_2139;
}
lean::cnstr_set(x_2175, 0, x_2135);
lean::cnstr_set(x_2175, 1, x_2137);
x_2176 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2176, 0, x_2175);
return x_2176;
}
}
lbl_19:
{
obj* x_2177; obj* x_2179; obj* x_2181; 
x_2177 = lean::cnstr_get(x_18, 0);
lean::inc(x_2177);
x_2179 = lean::cnstr_get(x_18, 1);
lean::inc(x_2179);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_2181 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 x_2181 = x_18;
}
if (lean::obj_tag(x_2177) == 0)
{
obj* x_2185; obj* x_2189; 
lean::dec(x_2181);
lean::dec(x_2177);
lean::dec(x_11);
x_2185 = l_lean_elaborator_to__pexpr___main___closed__5;
lean::inc(x_1);
lean::inc(x_2185);
lean::inc(x_0);
x_2189 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2185, x_1, x_2179);
if (lean::obj_tag(x_2189) == 0)
{
obj* x_2193; obj* x_2195; obj* x_2196; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_0);
x_2193 = lean::cnstr_get(x_2189, 0);
lean::inc(x_2193);
if (lean::is_shared(x_2189)) {
 lean::dec(x_2189);
 x_2195 = lean::box(0);
} else {
 lean::cnstr_release(x_2189, 0);
 x_2195 = x_2189;
}
if (lean::is_scalar(x_2195)) {
 x_2196 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2196 = x_2195;
}
lean::cnstr_set(x_2196, 0, x_2193);
return x_2196;
}
else
{
obj* x_2197; 
x_2197 = lean::cnstr_get(x_2189, 0);
lean::inc(x_2197);
lean::dec(x_2189);
x_16 = x_2197;
goto lbl_17;
}
}
else
{
obj* x_2200; obj* x_2202; obj* x_2205; obj* x_2206; obj* x_2207; obj* x_2208; obj* x_2210; obj* x_2211; obj* x_2212; obj* x_2213; obj* x_2214; 
x_2200 = lean::cnstr_get(x_2177, 0);
lean::inc(x_2200);
x_2202 = lean::cnstr_get(x_2177, 1);
lean::inc(x_2202);
lean::dec(x_2177);
x_2205 = lean::box(0);
x_2206 = lean::mk_nat_obj(0u);
x_2207 = l_list_length__aux___main___rarg(x_11, x_2206);
x_2208 = l_lean_elaborator_to__pexpr___main___closed__6;
lean::inc(x_2208);
x_2210 = l_lean_kvmap_set__nat(x_2205, x_2208, x_2207);
x_2211 = l_list_reverse___rarg(x_2202);
x_2212 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_2200, x_2211);
x_2213 = lean_expr_mk_mdata(x_2210, x_2212);
if (lean::is_scalar(x_2181)) {
 x_2214 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2214 = x_2181;
}
lean::cnstr_set(x_2214, 0, x_2213);
lean::cnstr_set(x_2214, 1, x_2179);
x_16 = x_2214;
goto lbl_17;
}
}
}
default:
{
obj* x_2215; 
x_2215 = lean::box(0);
x_3 = x_2215;
goto lbl_4;
}
}
lbl_4:
{
obj* x_2218; obj* x_2219; obj* x_2220; obj* x_2221; obj* x_2223; obj* x_2225; 
lean::dec(x_3);
lean::inc(x_0);
x_2218 = l_lean_parser_syntax_to__format___main(x_0);
x_2219 = lean::mk_nat_obj(80u);
x_2220 = l_lean_format_pretty(x_2218, x_2219);
x_2221 = l_lean_elaborator_to__pexpr___main___closed__1;
lean::inc(x_2221);
x_2223 = lean::string_append(x_2221, x_2220);
lean::dec(x_2220);
x_2225 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2223, x_1, x_2);
return x_2225;
}
}
}
obj* l_lean_elaborator_to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__pexpr___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_get__namespace___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_1, 4);
lean::inc(x_3);
lean::dec(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_3);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_0);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_3, 0);
lean::inc(x_10);
lean::dec(x_3);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_10);
lean::cnstr_set(x_13, 1, x_0);
x_14 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_14, 0, x_13);
return x_14;
}
}
}
obj* l_lean_elaborator_get__namespace(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_get__namespace___rarg), 1, 0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; uint8 x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; uint8 x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_9);
lean::dec(x_7);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; uint8 x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_33);
lean::dec(x_35);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
uint8 x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
uint8 x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
lean::inc(x_1);
x_3 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_1, x_0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; uint8 x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; uint8 x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_9);
lean::dec(x_7);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; uint8 x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_33);
lean::dec(x_35);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
uint8 x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
uint8 x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
lean::inc(x_0);
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
lean::inc(x_1);
x_3 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_1, x_0);
return x_3;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; uint8 x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; uint8 x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_9);
lean::dec(x_7);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; uint8 x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_33);
lean::dec(x_35);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
uint8 x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
uint8 x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_5);
x_9 = lean::box(0);
x_10 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_8, x_3, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_old__elab__command(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
lean::inc(x_3);
x_8 = l_lean_elaborator_get__namespace___rarg(x_3);
switch (lean::obj_tag(x_1)) {
case 0:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 1:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 2:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 3:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 4:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 5:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 6:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 7:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 8:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 9:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
case 10:
{
obj* x_21; obj* x_23; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_34; obj* x_36; obj* x_37; obj* x_40; obj* x_42; obj* x_43; 
x_21 = lean::cnstr_get(x_1, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_1, 1);
lean::inc(x_23);
lean::dec(x_1);
x_26 = lean::cnstr_get(x_4, 2);
lean::inc(x_26);
x_28 = l_lean_parser_syntax_get__pos(x_0);
x_29 = lean::mk_nat_obj(0u);
x_30 = l_option_get__or__else___main___rarg(x_28, x_29);
x_31 = l_lean_file__map_to__position(x_26, x_30);
x_32 = lean::cnstr_get(x_31, 1);
lean::inc(x_32);
x_34 = l_lean_elaborator_to__pexpr___main___closed__3;
lean::inc(x_34);
x_36 = l_lean_kvmap_set__nat(x_21, x_34, x_32);
x_37 = lean::cnstr_get(x_31, 0);
lean::inc(x_37);
lean::dec(x_31);
x_40 = l_lean_elaborator_to__pexpr___main___closed__4;
lean::inc(x_40);
x_42 = l_lean_kvmap_set__nat(x_36, x_40, x_37);
x_43 = lean_expr_mk_mdata(x_42, x_23);
x_9 = x_43;
goto lbl_10;
}
default:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
}
lbl_10:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_9);
x_48 = lean::cnstr_get(x_8, 0);
lean::inc(x_48);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_50 = x_8;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_71; obj* x_74; obj* x_75; obj* x_77; obj* x_80; obj* x_81; obj* x_83; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_92; 
x_52 = lean::cnstr_get(x_8, 0);
lean::inc(x_52);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_54 = x_8;
}
x_55 = lean::cnstr_get(x_52, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_52, 1);
lean::inc(x_57);
if (lean::is_shared(x_52)) {
 lean::dec(x_52);
 x_59 = lean::box(0);
} else {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 x_59 = x_52;
}
x_60 = lean::cnstr_get(x_4, 0);
lean::inc(x_60);
lean::dec(x_4);
x_63 = lean::cnstr_get(x_3, 8);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_3, 9);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_3, 4);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_67, 1);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_69, 0);
lean::inc(x_71);
lean::dec(x_69);
x_74 = l_list_reverse___rarg(x_71);
x_75 = lean::cnstr_get(x_67, 2);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_75, 0);
lean::inc(x_77);
lean::dec(x_75);
x_80 = l_list_reverse___rarg(x_77);
x_81 = lean::cnstr_get(x_67, 3);
lean::inc(x_81);
x_83 = l_rbtree_to__list___rarg(x_81);
x_84 = lean::cnstr_get(x_67, 6);
lean::inc(x_84);
x_86 = lean::cnstr_get(x_3, 10);
lean::inc(x_86);
x_88 = lean::alloc_cnstr(0, 8, 0);
lean::cnstr_set(x_88, 0, x_63);
lean::cnstr_set(x_88, 1, x_65);
lean::cnstr_set(x_88, 2, x_74);
lean::cnstr_set(x_88, 3, x_80);
lean::cnstr_set(x_88, 4, x_83);
lean::cnstr_set(x_88, 5, x_84);
lean::cnstr_set(x_88, 6, x_86);
lean::cnstr_set(x_88, 7, x_55);
x_89 = lean_elaborator_elaborate_command(x_60, x_9, x_88);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
if (lean::obj_tag(x_90) == 0)
{
obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_3);
lean::dec(x_90);
lean::dec(x_67);
x_98 = lean::cnstr_get(x_57, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_57, 1);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_57, 2);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_57, 3);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_57, 4);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_57, 5);
lean::inc(x_108);
x_110 = l_list_append___rarg(x_92, x_108);
x_111 = lean::cnstr_get(x_57, 6);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_57, 7);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_57, 8);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_57, 9);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_57, 10);
lean::inc(x_119);
lean::dec(x_57);
x_122 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_122, 0, x_98);
lean::cnstr_set(x_122, 1, x_100);
lean::cnstr_set(x_122, 2, x_102);
lean::cnstr_set(x_122, 3, x_104);
lean::cnstr_set(x_122, 4, x_106);
lean::cnstr_set(x_122, 5, x_110);
lean::cnstr_set(x_122, 6, x_111);
lean::cnstr_set(x_122, 7, x_113);
lean::cnstr_set(x_122, 8, x_115);
lean::cnstr_set(x_122, 9, x_117);
lean::cnstr_set(x_122, 10, x_119);
x_123 = lean::box(0);
if (lean::is_scalar(x_59)) {
 x_124 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_124 = x_59;
}
lean::cnstr_set(x_124, 0, x_123);
lean::cnstr_set(x_124, 1, x_122);
if (lean::is_scalar(x_54)) {
 x_125 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_125 = x_54;
}
lean::cnstr_set(x_125, 0, x_124);
return x_125;
}
else
{
obj* x_127; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_140; obj* x_142; obj* x_144; obj* x_145; obj* x_147; obj* x_149; obj* x_150; obj* x_152; obj* x_153; obj* x_155; obj* x_158; obj* x_160; obj* x_161; obj* x_163; obj* x_165; obj* x_168; obj* x_170; obj* x_172; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
lean::dec(x_57);
x_127 = lean::cnstr_get(x_90, 0);
lean::inc(x_127);
lean::dec(x_90);
x_130 = lean::cnstr_get(x_3, 0);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_3, 1);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_3, 2);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_3, 3);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_67, 0);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_127, 2);
lean::inc(x_140);
x_142 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
lean::inc(x_142);
x_144 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_142, x_140);
x_145 = lean::cnstr_get(x_127, 3);
lean::inc(x_145);
x_147 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
lean::inc(x_147);
x_149 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_147, x_145);
x_150 = lean::cnstr_get(x_127, 4);
lean::inc(x_150);
x_152 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_150);
x_153 = lean::cnstr_get(x_67, 4);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_67, 5);
lean::inc(x_155);
lean::dec(x_67);
x_158 = lean::cnstr_get(x_127, 5);
lean::inc(x_158);
x_160 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_160, 0, x_138);
lean::cnstr_set(x_160, 1, x_144);
lean::cnstr_set(x_160, 2, x_149);
lean::cnstr_set(x_160, 3, x_152);
lean::cnstr_set(x_160, 4, x_153);
lean::cnstr_set(x_160, 5, x_155);
lean::cnstr_set(x_160, 6, x_158);
x_161 = lean::cnstr_get(x_3, 5);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_3, 6);
lean::inc(x_163);
x_165 = lean::cnstr_get(x_3, 7);
lean::inc(x_165);
lean::dec(x_3);
x_168 = lean::cnstr_get(x_127, 0);
lean::inc(x_168);
x_170 = lean::cnstr_get(x_127, 1);
lean::inc(x_170);
x_172 = lean::cnstr_get(x_127, 6);
lean::inc(x_172);
lean::dec(x_127);
x_175 = l_list_append___rarg(x_92, x_161);
x_176 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_176, 0, x_130);
lean::cnstr_set(x_176, 1, x_132);
lean::cnstr_set(x_176, 2, x_134);
lean::cnstr_set(x_176, 3, x_136);
lean::cnstr_set(x_176, 4, x_160);
lean::cnstr_set(x_176, 5, x_175);
lean::cnstr_set(x_176, 6, x_163);
lean::cnstr_set(x_176, 7, x_165);
lean::cnstr_set(x_176, 8, x_168);
lean::cnstr_set(x_176, 9, x_170);
lean::cnstr_set(x_176, 10, x_172);
x_177 = lean::box(0);
if (lean::is_scalar(x_59)) {
 x_178 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_178 = x_59;
}
lean::cnstr_set(x_178, 0, x_177);
lean::cnstr_set(x_178, 1, x_176);
if (lean::is_scalar(x_54)) {
 x_179 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_179 = x_54;
}
lean::cnstr_set(x_179, 0, x_178);
return x_179;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::box(0);
x_9 = lean_expr_mk_const(x_3, x_8);
x_10 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_5);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_lean_elaborator_names__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_0);
x_2 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_2);
x_4 = l_lean_expr_mk__capp(x_2, x_1);
return x_4;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_19; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::inc(x_1);
x_19 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_16, x_1, x_2);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_13);
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_26 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_26 = x_19;
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_36; 
x_28 = lean::cnstr_get(x_19, 0);
lean::inc(x_28);
if (lean::is_shared(x_19)) {
 lean::dec(x_19);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_19, 0);
 x_30 = x_19;
}
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 lean::cnstr_release(x_28, 1);
 x_35 = x_28;
}
x_36 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_10, x_1, x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_41; obj* x_44; 
lean::dec(x_13);
lean::dec(x_12);
lean::dec(x_35);
lean::dec(x_31);
x_41 = lean::cnstr_get(x_36, 0);
lean::inc(x_41);
lean::dec(x_36);
if (lean::is_scalar(x_30)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_30;
 lean::cnstr_set_tag(x_30, 0);
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_48; obj* x_50; obj* x_53; obj* x_56; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_45 = lean::cnstr_get(x_36, 0);
lean::inc(x_45);
lean::dec(x_36);
x_48 = lean::cnstr_get(x_45, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_45, 1);
lean::inc(x_50);
lean::dec(x_45);
x_53 = lean::cnstr_get(x_13, 0);
lean::inc(x_53);
lean::dec(x_13);
x_56 = lean::cnstr_get(x_53, 2);
lean::inc(x_56);
lean::dec(x_53);
x_59 = l_lean_expr_mk__capp(x_56, x_31);
if (lean::is_scalar(x_12)) {
 x_60 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_60 = x_12;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_48);
if (lean::is_scalar(x_35)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_35;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_50);
if (lean::is_scalar(x_30)) {
 x_62 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_62 = x_30;
}
lean::cnstr_set(x_62, 0, x_61);
return x_62;
}
}
}
}
}
obj* l_lean_elaborator_attrs__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_6 = x_3;
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_15 = x_8;
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_16);
x_18 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_10;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("noncomputable");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("meta");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("doc_string");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; uint8 x_10; obj* x_11; uint8 x_13; obj* x_14; obj* x_17; 
x_3 = lean::box(0);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 3);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = l_option_is__some___main___rarg(x_11);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_21; 
x_21 = lean::cnstr_get(x_6, 0);
lean::inc(x_21);
lean::dec(x_6);
if (lean::obj_tag(x_21) == 0)
{
obj* x_25; 
lean::dec(x_21);
x_25 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
lean::inc(x_25);
x_17 = x_25;
goto lbl_18;
}
else
{
obj* x_28; 
lean::dec(x_21);
x_28 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
lean::inc(x_28);
x_17 = x_28;
goto lbl_18;
}
}
}
else
{
obj* x_30; obj* x_33; 
x_30 = lean::cnstr_get(x_4, 0);
lean::inc(x_30);
lean::dec(x_4);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
if (lean::obj_tag(x_33) == 0)
{
lean::dec(x_33);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_38; 
x_38 = lean::cnstr_get(x_6, 0);
lean::inc(x_38);
lean::dec(x_6);
if (lean::obj_tag(x_38) == 0)
{
obj* x_42; 
lean::dec(x_38);
x_42 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
lean::inc(x_42);
x_17 = x_42;
goto lbl_18;
}
else
{
obj* x_45; 
lean::dec(x_38);
x_45 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
lean::inc(x_45);
x_17 = x_45;
goto lbl_18;
}
}
}
else
{
obj* x_47; obj* x_50; obj* x_53; obj* x_56; 
x_47 = lean::cnstr_get(x_33, 0);
lean::inc(x_47);
lean::dec(x_33);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_53 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
lean::inc(x_53);
lean::inc(x_3);
x_56 = l_lean_kvmap_set__string(x_3, x_53, x_50);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
x_17 = x_56;
goto lbl_18;
}
else
{
obj* x_58; 
x_58 = lean::cnstr_get(x_6, 0);
lean::inc(x_58);
lean::dec(x_6);
if (lean::obj_tag(x_58) == 0)
{
obj* x_62; uint8 x_63; obj* x_65; 
lean::dec(x_58);
x_62 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
x_63 = 1;
lean::inc(x_62);
x_65 = l_lean_kvmap_set__bool(x_56, x_62, x_63);
x_17 = x_65;
goto lbl_18;
}
else
{
obj* x_67; uint8 x_68; obj* x_70; 
lean::dec(x_58);
x_67 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
x_68 = 1;
lean::inc(x_67);
x_70 = l_lean_kvmap_set__bool(x_56, x_67, x_68);
x_17 = x_70;
goto lbl_18;
}
}
}
}
lbl_18:
{
obj* x_71; obj* x_73; obj* x_74; obj* x_76; 
x_71 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
lean::inc(x_71);
x_73 = l_lean_kvmap_set__bool(x_17, x_71, x_10);
x_74 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
lean::inc(x_74);
x_76 = l_lean_kvmap_set__bool(x_73, x_74, x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_78; 
lean::dec(x_14);
x_78 = l_lean_elaborator_attrs__to__pexpr(x_3, x_1, x_2);
if (lean::obj_tag(x_78) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_76);
x_80 = lean::cnstr_get(x_78, 0);
lean::inc(x_80);
if (lean::is_shared(x_78)) {
 lean::dec(x_78);
 x_82 = lean::box(0);
} else {
 lean::cnstr_release(x_78, 0);
 x_82 = x_78;
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_86; obj* x_87; obj* x_89; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_84 = lean::cnstr_get(x_78, 0);
lean::inc(x_84);
if (lean::is_shared(x_78)) {
 lean::dec(x_78);
 x_86 = lean::box(0);
} else {
 lean::cnstr_release(x_78, 0);
 x_86 = x_78;
}
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
if (lean::is_shared(x_84)) {
 lean::dec(x_84);
 x_91 = lean::box(0);
} else {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 x_91 = x_84;
}
x_92 = lean_expr_mk_mdata(x_76, x_87);
if (lean::is_scalar(x_91)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_91;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_89);
if (lean::is_scalar(x_86)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_86;
}
lean::cnstr_set(x_94, 0, x_93);
return x_94;
}
}
else
{
obj* x_96; obj* x_99; obj* x_102; 
lean::dec(x_3);
x_96 = lean::cnstr_get(x_14, 0);
lean::inc(x_96);
lean::dec(x_14);
x_99 = lean::cnstr_get(x_96, 1);
lean::inc(x_99);
lean::dec(x_96);
x_102 = l_lean_elaborator_attrs__to__pexpr(x_99, x_1, x_2);
if (lean::obj_tag(x_102) == 0)
{
obj* x_104; obj* x_106; obj* x_107; 
lean::dec(x_76);
x_104 = lean::cnstr_get(x_102, 0);
lean::inc(x_104);
if (lean::is_shared(x_102)) {
 lean::dec(x_102);
 x_106 = lean::box(0);
} else {
 lean::cnstr_release(x_102, 0);
 x_106 = x_102;
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_104);
return x_107;
}
else
{
obj* x_108; obj* x_110; obj* x_111; obj* x_113; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
x_108 = lean::cnstr_get(x_102, 0);
lean::inc(x_108);
if (lean::is_shared(x_102)) {
 lean::dec(x_102);
 x_110 = lean::box(0);
} else {
 lean::cnstr_release(x_102, 0);
 x_110 = x_102;
}
x_111 = lean::cnstr_get(x_108, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_108, 1);
lean::inc(x_113);
if (lean::is_shared(x_108)) {
 lean::dec(x_108);
 x_115 = lean::box(0);
} else {
 lean::cnstr_release(x_108, 0);
 lean::cnstr_release(x_108, 1);
 x_115 = x_108;
}
x_116 = lean_expr_mk_mdata(x_76, x_111);
if (lean::is_scalar(x_115)) {
 x_117 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_117 = x_115;
}
lean::cnstr_set(x_117, 0, x_116);
lean::cnstr_set(x_117, 1, x_113);
if (lean::is_scalar(x_110)) {
 x_118 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_118 = x_110;
}
lean::cnstr_set(x_118, 0, x_117);
return x_118;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = level_mk_param(x_8);
x_10 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_5);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = l_lean_elaborator_mangle__ident(x_1);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; obj* x_9; 
lean::dec(x_4);
x_8 = lean::box(0);
x_9 = lean_expr_mk_const(x_3, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_13; obj* x_16; obj* x_17; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
lean::dec(x_4);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_13);
x_17 = lean_expr_mk_const(x_3, x_16);
return x_17;
}
}
}
obj* l_lean_elaborator_locally___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 5);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 6);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 7);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 8);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_1, 9);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 10);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_4);
lean::cnstr_set(x_23, 2, x_6);
lean::cnstr_set(x_23, 3, x_8);
lean::cnstr_set(x_23, 4, x_0);
lean::cnstr_set(x_23, 5, x_10);
lean::cnstr_set(x_23, 6, x_12);
lean::cnstr_set(x_23, 7, x_14);
lean::cnstr_set(x_23, 8, x_16);
lean::cnstr_set(x_23, 9, x_18);
lean::cnstr_set(x_23, 10, x_20);
return x_23;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_0, 2);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = lean::apply_1(x_4, x_7);
return x_8;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__3), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_2, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
x_16 = l_lean_elaborator_locally___rarg___closed__1;
lean::inc(x_16);
x_18 = lean::apply_4(x_11, lean::box(0), lean::box(0), x_16, x_14);
lean::inc(x_3);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__4), 4, 3);
lean::closure_set(x_20, 0, x_1);
lean::closure_set(x_20, 1, x_3);
lean::closure_set(x_20, 2, x_2);
x_21 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_18, x_20);
return x_21;
}
}
obj* l_lean_elaborator_locally(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg), 3, 0);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_16; obj* x_18; obj* x_19; obj* x_21; obj* x_25; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_8);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
if (lean::is_shared(x_13)) {
 lean::dec(x_13);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_13, 0);
 lean::cnstr_release(x_13, 1);
 x_18 = x_13;
}
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_16, 1);
lean::inc(x_21);
lean::dec(x_16);
lean::inc(x_1);
x_25 = l_lean_elaborator_to__pexpr___main(x_21, x_1, x_2);
if (lean::obj_tag(x_25) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_18);
lean::dec(x_19);
x_32 = lean::cnstr_get(x_25, 0);
lean::inc(x_32);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_34 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_34 = x_25;
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_44; 
x_36 = lean::cnstr_get(x_25, 0);
lean::inc(x_36);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 x_38 = x_25;
}
x_39 = lean::cnstr_get(x_36, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_36, 1);
lean::inc(x_41);
lean::dec(x_36);
x_44 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_10, x_1, x_41);
if (lean::obj_tag(x_44) == 0)
{
obj* x_50; obj* x_53; 
lean::dec(x_12);
lean::dec(x_14);
lean::dec(x_18);
lean::dec(x_19);
lean::dec(x_39);
x_50 = lean::cnstr_get(x_44, 0);
lean::inc(x_50);
lean::dec(x_44);
if (lean::is_scalar(x_38)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_38;
 lean::cnstr_set_tag(x_38, 0);
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_57; obj* x_59; obj* x_62; uint8 x_63; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_54 = lean::cnstr_get(x_44, 0);
lean::inc(x_54);
lean::dec(x_44);
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
lean::dec(x_54);
x_62 = l_lean_elaborator_mangle__ident(x_19);
x_63 = lean::unbox(x_14);
lean::dec(x_14);
lean::inc(x_62);
x_66 = lean_expr_local(x_62, x_62, x_39, x_63);
if (lean::is_scalar(x_12)) {
 x_67 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_67 = x_12;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_57);
if (lean::is_scalar(x_18)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_18;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_59);
if (lean::is_scalar(x_38)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_38;
}
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
}
}
}
}
obj* l_lean_elaborator_simple__binders__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_6 = x_3;
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; 
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 x_10 = x_3;
}
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_15 = x_8;
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_16);
x_18 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_20 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_20 = x_10;
}
lean::cnstr_set(x_20, 0, x_19);
return x_20;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_18; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
lean::inc(x_2);
x_18 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_15, x_2, x_3);
if (lean::obj_tag(x_18) == 0)
{
obj* x_24; obj* x_26; obj* x_27; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_0);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_18, 0);
lean::inc(x_24);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_26 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_26 = x_18;
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_24);
return x_27;
}
else
{
obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_40; 
x_28 = lean::cnstr_get(x_18, 0);
lean::inc(x_28);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_30 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_30 = x_18;
}
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_28, 1);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 lean::cnstr_release(x_28, 1);
 x_35 = x_28;
}
x_36 = lean::cnstr_get(x_10, 3);
lean::inc(x_36);
lean::dec(x_10);
lean::inc(x_2);
x_40 = l_lean_elaborator_to__pexpr___main(x_36, x_2, x_33);
if (lean::obj_tag(x_40) == 0)
{
obj* x_47; obj* x_50; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_35);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_31);
x_47 = lean::cnstr_get(x_40, 0);
lean::inc(x_47);
lean::dec(x_40);
if (lean::is_scalar(x_30)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_30;
 lean::cnstr_set_tag(x_30, 0);
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; 
x_51 = lean::cnstr_get(x_40, 0);
lean::inc(x_51);
lean::dec(x_40);
x_54 = lean::cnstr_get(x_0, 0);
lean::inc(x_54);
x_56 = l_lean_elaborator_mangle__ident(x_54);
x_57 = lean::cnstr_get(x_51, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_51, 1);
lean::inc(x_59);
if (lean::is_shared(x_51)) {
 lean::dec(x_51);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_51, 0);
 lean::cnstr_release(x_51, 1);
 x_61 = x_51;
}
x_62 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_0, x_12, x_2, x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_69; obj* x_72; 
lean::dec(x_14);
lean::dec(x_35);
lean::dec(x_57);
lean::dec(x_31);
lean::dec(x_56);
lean::dec(x_61);
x_69 = lean::cnstr_get(x_62, 0);
lean::inc(x_69);
lean::dec(x_62);
if (lean::is_scalar(x_30)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_30;
 lean::cnstr_set_tag(x_30, 0);
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_73 = lean::cnstr_get(x_62, 0);
lean::inc(x_73);
lean::dec(x_62);
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_73, 1);
lean::inc(x_78);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_80 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 lean::cnstr_release(x_73, 1);
 x_80 = x_73;
}
if (lean::is_scalar(x_35)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_35;
}
lean::cnstr_set(x_81, 0, x_31);
lean::cnstr_set(x_81, 1, x_57);
if (lean::is_scalar(x_61)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_61;
}
lean::cnstr_set(x_82, 0, x_56);
lean::cnstr_set(x_82, 1, x_81);
if (lean::is_scalar(x_14)) {
 x_83 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_83 = x_14;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_76);
if (lean::is_scalar(x_80)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_80;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_78);
if (lean::is_scalar(x_30)) {
 x_85 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_85 = x_30;
}
lean::cnstr_set(x_85, 0, x_84);
return x_85;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = level_mk_param(x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elab_def_like: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("defs");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_elab__def__like(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_17; 
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_2, 2);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 3);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 4);
lean::inc(x_12);
lean::dec(x_2);
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
if (lean::obj_tag(x_15) == 0)
{
obj* x_27; obj* x_29; 
lean::dec(x_12);
lean::dec(x_17);
lean::dec(x_15);
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
x_27 = l_lean_elaborator_elab__def__like___closed__1;
lean::inc(x_27);
x_29 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_27, x_4, x_5);
return x_29;
}
else
{
obj* x_30; obj* x_34; 
x_30 = lean::cnstr_get(x_15, 0);
lean::inc(x_30);
lean::dec(x_15);
lean::inc(x_4);
x_34 = l_lean_elaborator_decl__modifiers__to__pexpr(x_1, x_4, x_5);
if (lean::obj_tag(x_34) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_17);
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_0);
x_43 = lean::cnstr_get(x_34, 0);
lean::inc(x_43);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_45 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_45 = x_34;
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_47 = lean::cnstr_get(x_34, 0);
lean::inc(x_47);
if (lean::is_shared(x_34)) {
 lean::dec(x_34);
 x_49 = lean::box(0);
} else {
 lean::cnstr_release(x_34, 0);
 x_49 = x_34;
}
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_47, 1);
lean::inc(x_52);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 1);
 x_54 = x_47;
}
x_55 = lean::box(0);
x_56 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_56, 0, x_3);
x_57 = lean_expr_mk_lit(x_56);
if (lean::obj_tag(x_6) == 0)
{
obj* x_61; obj* x_63; 
x_61 = l_lean_expander_get__opt__type___main(x_17);
lean::inc(x_4);
x_63 = l_lean_elaborator_to__pexpr___main(x_61, x_4, x_52);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
if (lean::obj_tag(x_63) == 0)
{
obj* x_75; obj* x_77; obj* x_78; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_75 = lean::cnstr_get(x_63, 0);
lean::inc(x_75);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_77 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_77 = x_63;
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_79; 
x_79 = lean::cnstr_get(x_63, 0);
lean::inc(x_79);
lean::dec(x_63);
x_58 = x_55;
x_59 = x_79;
goto lbl_60;
}
}
else
{
obj* x_82; 
x_82 = lean::cnstr_get(x_6, 0);
lean::inc(x_82);
lean::dec(x_6);
if (lean::obj_tag(x_63) == 0)
{
obj* x_96; obj* x_98; obj* x_99; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
lean::dec(x_82);
x_96 = lean::cnstr_get(x_63, 0);
lean::inc(x_96);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_98 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_98 = x_63;
}
if (lean::is_scalar(x_98)) {
 x_99 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_99 = x_98;
}
lean::cnstr_set(x_99, 0, x_96);
return x_99;
}
else
{
obj* x_100; obj* x_103; obj* x_106; 
x_100 = lean::cnstr_get(x_63, 0);
lean::inc(x_100);
lean::dec(x_63);
x_103 = lean::cnstr_get(x_82, 1);
lean::inc(x_103);
lean::dec(x_82);
x_106 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_103);
x_58 = x_106;
x_59 = x_100;
goto lbl_60;
}
}
}
else
{
obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_121; obj* x_123; obj* x_127; obj* x_128; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_140; obj* x_141; obj* x_143; obj* x_145; obj* x_147; obj* x_149; obj* x_151; obj* x_154; obj* x_155; obj* x_157; 
x_107 = lean::cnstr_get(x_6, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_52, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_52, 1);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_52, 2);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_52, 3);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_52, 4);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_117, 0);
lean::inc(x_119);
x_121 = lean::cnstr_get(x_117, 1);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_107, 1);
lean::inc(x_123);
lean::dec(x_107);
lean::inc(x_123);
x_127 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_123);
x_128 = l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(x_121, x_127);
x_129 = lean::cnstr_get(x_117, 2);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_117, 3);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_117, 4);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_117, 5);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_117, 6);
lean::inc(x_137);
lean::dec(x_117);
x_140 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_140, 0, x_119);
lean::cnstr_set(x_140, 1, x_128);
lean::cnstr_set(x_140, 2, x_129);
lean::cnstr_set(x_140, 3, x_131);
lean::cnstr_set(x_140, 4, x_133);
lean::cnstr_set(x_140, 5, x_135);
lean::cnstr_set(x_140, 6, x_137);
x_141 = lean::cnstr_get(x_52, 5);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_52, 6);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_52, 7);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_52, 8);
lean::inc(x_147);
x_149 = lean::cnstr_get(x_52, 9);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_52, 10);
lean::inc(x_151);
lean::dec(x_52);
x_154 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_154, 0, x_109);
lean::cnstr_set(x_154, 1, x_111);
lean::cnstr_set(x_154, 2, x_113);
lean::cnstr_set(x_154, 3, x_115);
lean::cnstr_set(x_154, 4, x_140);
lean::cnstr_set(x_154, 5, x_141);
lean::cnstr_set(x_154, 6, x_143);
lean::cnstr_set(x_154, 7, x_145);
lean::cnstr_set(x_154, 8, x_147);
lean::cnstr_set(x_154, 9, x_149);
lean::cnstr_set(x_154, 10, x_151);
x_155 = l_lean_expander_get__opt__type___main(x_17);
lean::inc(x_4);
x_157 = l_lean_elaborator_to__pexpr___main(x_155, x_4, x_154);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_6);
lean::dec(x_123);
if (lean::obj_tag(x_157) == 0)
{
obj* x_170; obj* x_172; obj* x_173; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_170 = lean::cnstr_get(x_157, 0);
lean::inc(x_170);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_172 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 x_172 = x_157;
}
if (lean::is_scalar(x_172)) {
 x_173 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_173 = x_172;
}
lean::cnstr_set(x_173, 0, x_170);
return x_173;
}
else
{
obj* x_174; 
x_174 = lean::cnstr_get(x_157, 0);
lean::inc(x_174);
lean::dec(x_157);
x_58 = x_55;
x_59 = x_174;
goto lbl_60;
}
}
else
{
lean::dec(x_6);
if (lean::obj_tag(x_157) == 0)
{
obj* x_189; obj* x_191; obj* x_192; 
lean::dec(x_30);
lean::dec(x_12);
lean::dec(x_8);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_123);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
x_189 = lean::cnstr_get(x_157, 0);
lean::inc(x_189);
if (lean::is_shared(x_157)) {
 lean::dec(x_157);
 x_191 = lean::box(0);
} else {
 lean::cnstr_release(x_157, 0);
 x_191 = x_157;
}
if (lean::is_scalar(x_191)) {
 x_192 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_192 = x_191;
}
lean::cnstr_set(x_192, 0, x_189);
return x_192;
}
else
{
obj* x_193; obj* x_196; 
x_193 = lean::cnstr_get(x_157, 0);
lean::inc(x_193);
lean::dec(x_157);
x_196 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_123);
x_58 = x_196;
x_59 = x_193;
goto lbl_60;
}
}
}
lbl_60:
{
obj* x_197; obj* x_199; obj* x_202; obj* x_203; obj* x_205; uint8 x_206; obj* x_209; obj* x_211; obj* x_212; obj* x_214; obj* x_215; 
x_197 = lean::cnstr_get(x_59, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_59, 1);
lean::inc(x_199);
lean::dec(x_59);
x_202 = l_lean_elaborator_names__to__pexpr(x_58);
x_203 = lean::cnstr_get(x_8, 0);
lean::inc(x_203);
x_205 = l_lean_elaborator_mangle__ident(x_203);
x_206 = 4;
lean::inc(x_197);
lean::inc(x_205);
x_209 = lean_expr_local(x_205, x_205, x_197, x_206);
lean::inc(x_55);
x_211 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_211, 0, x_209);
lean::cnstr_set(x_211, 1, x_55);
x_212 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_212);
x_214 = l_lean_expr_mk__capp(x_212, x_211);
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_220; obj* x_223; obj* x_227; 
lean::dec(x_8);
lean::dec(x_54);
lean::dec(x_197);
x_220 = lean::cnstr_get(x_12, 0);
lean::inc(x_220);
lean::dec(x_12);
x_223 = lean::cnstr_get(x_220, 1);
lean::inc(x_223);
lean::dec(x_220);
lean::inc(x_4);
x_227 = l_lean_elaborator_to__pexpr___main(x_223, x_4, x_199);
if (lean::obj_tag(x_227) == 0)
{
obj* x_237; obj* x_239; obj* x_240; 
lean::dec(x_30);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
lean::dec(x_202);
lean::dec(x_214);
x_237 = lean::cnstr_get(x_227, 0);
lean::inc(x_237);
if (lean::is_shared(x_227)) {
 lean::dec(x_227);
 x_239 = lean::box(0);
} else {
 lean::cnstr_release(x_227, 0);
 x_239 = x_227;
}
if (lean::is_scalar(x_239)) {
 x_240 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_240 = x_239;
}
lean::cnstr_set(x_240, 0, x_237);
return x_240;
}
else
{
obj* x_241; 
x_241 = lean::cnstr_get(x_227, 0);
lean::inc(x_241);
lean::dec(x_227);
x_215 = x_241;
goto lbl_216;
}
}
case 1:
{
obj* x_247; obj* x_248; 
lean::dec(x_12);
lean::dec(x_8);
lean::inc(x_55);
x_247 = l_lean_elaborator_mk__eqns(x_197, x_55);
if (lean::is_scalar(x_54)) {
 x_248 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_248 = x_54;
}
lean::cnstr_set(x_248, 0, x_247);
lean::cnstr_set(x_248, 1, x_199);
x_215 = x_248;
goto lbl_216;
}
default:
{
obj* x_249; obj* x_253; 
x_249 = lean::cnstr_get(x_12, 0);
lean::inc(x_249);
lean::dec(x_12);
lean::inc(x_4);
x_253 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_8, x_249, x_4, x_199);
if (lean::obj_tag(x_253) == 0)
{
obj* x_265; obj* x_267; obj* x_268; 
lean::dec(x_30);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_54);
lean::dec(x_55);
lean::dec(x_49);
lean::dec(x_50);
lean::dec(x_57);
lean::dec(x_202);
lean::dec(x_197);
lean::dec(x_214);
x_265 = lean::cnstr_get(x_253, 0);
lean::inc(x_265);
if (lean::is_shared(x_253)) {
 lean::dec(x_253);
 x_267 = lean::box(0);
} else {
 lean::cnstr_release(x_253, 0);
 x_267 = x_253;
}
if (lean::is_scalar(x_267)) {
 x_268 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_268 = x_267;
}
lean::cnstr_set(x_268, 0, x_265);
return x_268;
}
else
{
obj* x_269; obj* x_272; obj* x_274; obj* x_277; obj* x_278; 
x_269 = lean::cnstr_get(x_253, 0);
lean::inc(x_269);
lean::dec(x_253);
x_272 = lean::cnstr_get(x_269, 0);
lean::inc(x_272);
x_274 = lean::cnstr_get(x_269, 1);
lean::inc(x_274);
lean::dec(x_269);
x_277 = l_lean_elaborator_mk__eqns(x_197, x_272);
if (lean::is_scalar(x_54)) {
 x_278 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_278 = x_54;
}
lean::cnstr_set(x_278, 0, x_277);
lean::cnstr_set(x_278, 1, x_274);
x_215 = x_278;
goto lbl_216;
}
}
}
lbl_216:
{
obj* x_279; obj* x_281; obj* x_285; 
x_279 = lean::cnstr_get(x_215, 0);
lean::inc(x_279);
x_281 = lean::cnstr_get(x_215, 1);
lean::inc(x_281);
lean::dec(x_215);
lean::inc(x_4);
x_285 = l_lean_elaborator_simple__binders__to__pexpr(x_30, x_4, x_281);
if (lean::obj_tag(x_285) == 0)
{
obj* x_294; obj* x_297; 
lean::dec(x_279);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_55);
lean::dec(x_50);
lean::dec(x_57);
lean::dec(x_202);
lean::dec(x_214);
x_294 = lean::cnstr_get(x_285, 0);
lean::inc(x_294);
lean::dec(x_285);
if (lean::is_scalar(x_49)) {
 x_297 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_297 = x_49;
 lean::cnstr_set_tag(x_49, 0);
}
lean::cnstr_set(x_297, 0, x_294);
return x_297;
}
else
{
obj* x_299; obj* x_302; obj* x_304; obj* x_307; obj* x_308; obj* x_309; obj* x_310; obj* x_311; obj* x_312; obj* x_314; obj* x_315; obj* x_317; obj* x_318; 
lean::dec(x_49);
x_299 = lean::cnstr_get(x_285, 0);
lean::inc(x_299);
lean::dec(x_285);
x_302 = lean::cnstr_get(x_299, 0);
lean::inc(x_302);
x_304 = lean::cnstr_get(x_299, 1);
lean::inc(x_304);
lean::dec(x_299);
x_307 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_307, 0, x_279);
lean::cnstr_set(x_307, 1, x_55);
x_308 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_308, 0, x_302);
lean::cnstr_set(x_308, 1, x_307);
x_309 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_309, 0, x_214);
lean::cnstr_set(x_309, 1, x_308);
x_310 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_310, 0, x_202);
lean::cnstr_set(x_310, 1, x_309);
x_311 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_311, 0, x_57);
lean::cnstr_set(x_311, 1, x_310);
x_312 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_312, 0, x_50);
lean::cnstr_set(x_312, 1, x_311);
lean::inc(x_212);
x_314 = l_lean_expr_mk__capp(x_212, x_312);
x_315 = l_lean_elaborator_elab__def__like___closed__2;
lean::inc(x_315);
x_317 = lean_expr_mk_mdata(x_315, x_314);
x_318 = l_lean_elaborator_old__elab__command(x_0, x_317, x_4, x_304);
return x_318;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(2u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* l_lean_elaborator_infer__mod__to__pexpr(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_elaborator_infer__mod__to__pexpr___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_8; 
lean::dec(x_4);
x_8 = l_lean_elaborator_infer__mod__to__pexpr___closed__2;
lean::inc(x_8);
return x_8;
}
else
{
obj* x_11; 
lean::dec(x_4);
x_11 = l_lean_elaborator_infer__mod__to__pexpr___closed__3;
lean::inc(x_11);
return x_11;
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("declaration.elaborate: unexpected input");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_21; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
x_17 = lean::cnstr_get(x_10, 3);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
lean::dec(x_17);
if (lean::obj_tag(x_19) == 0)
{
obj* x_27; obj* x_31; 
lean::dec(x_10);
lean::dec(x_19);
lean::dec(x_21);
x_27 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_27);
lean::inc(x_0);
x_31 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_27, x_2, x_3);
if (lean::obj_tag(x_31) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_36 = lean::cnstr_get(x_31, 0);
lean::inc(x_36);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_38 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_38 = x_31;
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; 
x_40 = lean::cnstr_get(x_31, 0);
lean::inc(x_40);
lean::dec(x_31);
x_15 = x_40;
goto lbl_16;
}
}
else
{
obj* x_43; 
x_43 = lean::cnstr_get(x_19, 0);
lean::inc(x_43);
lean::dec(x_19);
if (lean::obj_tag(x_43) == 0)
{
lean::dec(x_43);
if (lean::obj_tag(x_21) == 0)
{
obj* x_49; obj* x_53; 
lean::dec(x_10);
lean::dec(x_21);
x_49 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_49);
lean::inc(x_0);
x_53 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_49, x_2, x_3);
if (lean::obj_tag(x_53) == 0)
{
obj* x_58; obj* x_60; obj* x_61; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_60 = x_53;
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_58);
return x_61;
}
else
{
obj* x_62; 
x_62 = lean::cnstr_get(x_53, 0);
lean::inc(x_62);
lean::dec(x_53);
x_15 = x_62;
goto lbl_16;
}
}
else
{
obj* x_65; obj* x_68; obj* x_72; 
x_65 = lean::cnstr_get(x_21, 0);
lean::inc(x_65);
lean::dec(x_21);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
lean::dec(x_65);
lean::inc(x_2);
x_72 = l_lean_elaborator_to__pexpr___main(x_68, x_2, x_3);
if (lean::obj_tag(x_72) == 0)
{
obj* x_78; obj* x_80; obj* x_81; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_0);
lean::dec(x_2);
x_78 = lean::cnstr_get(x_72, 0);
lean::inc(x_78);
if (lean::is_shared(x_72)) {
 lean::dec(x_72);
 x_80 = lean::box(0);
} else {
 lean::cnstr_release(x_72, 0);
 x_80 = x_72;
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_78);
return x_81;
}
else
{
obj* x_82; obj* x_85; obj* x_87; obj* x_89; obj* x_90; obj* x_93; uint8 x_94; obj* x_96; obj* x_97; 
x_82 = lean::cnstr_get(x_72, 0);
lean::inc(x_82);
lean::dec(x_72);
x_85 = lean::cnstr_get(x_82, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_82, 1);
lean::inc(x_87);
if (lean::is_shared(x_82)) {
 lean::dec(x_82);
 x_89 = lean::box(0);
} else {
 lean::cnstr_release(x_82, 0);
 lean::cnstr_release(x_82, 1);
 x_89 = x_82;
}
x_90 = lean::cnstr_get(x_10, 1);
lean::inc(x_90);
lean::dec(x_10);
x_93 = l_lean_elaborator_mangle__ident(x_90);
x_94 = 0;
lean::inc(x_93);
x_96 = lean_expr_local(x_93, x_93, x_85, x_94);
if (lean::is_scalar(x_89)) {
 x_97 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_97 = x_89;
}
lean::cnstr_set(x_97, 0, x_96);
lean::cnstr_set(x_97, 1, x_87);
x_15 = x_97;
goto lbl_16;
}
}
}
else
{
obj* x_101; obj* x_105; 
lean::dec(x_10);
lean::dec(x_21);
lean::dec(x_43);
x_101 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_101);
lean::inc(x_0);
x_105 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_101, x_2, x_3);
if (lean::obj_tag(x_105) == 0)
{
obj* x_110; obj* x_112; obj* x_113; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_110 = lean::cnstr_get(x_105, 0);
lean::inc(x_110);
if (lean::is_shared(x_105)) {
 lean::dec(x_105);
 x_112 = lean::box(0);
} else {
 lean::cnstr_release(x_105, 0);
 x_112 = x_105;
}
if (lean::is_scalar(x_112)) {
 x_113 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_113 = x_112;
}
lean::cnstr_set(x_113, 0, x_110);
return x_113;
}
else
{
obj* x_114; 
x_114 = lean::cnstr_get(x_105, 0);
lean::inc(x_114);
lean::dec(x_105);
x_15 = x_114;
goto lbl_16;
}
}
}
lbl_16:
{
obj* x_117; obj* x_119; obj* x_121; obj* x_122; 
x_117 = lean::cnstr_get(x_15, 0);
lean::inc(x_117);
x_119 = lean::cnstr_get(x_15, 1);
lean::inc(x_119);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_121 = x_15;
}
x_122 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_12, x_2, x_119);
if (lean::obj_tag(x_122) == 0)
{
obj* x_126; obj* x_128; obj* x_129; 
lean::dec(x_14);
lean::dec(x_117);
lean::dec(x_121);
x_126 = lean::cnstr_get(x_122, 0);
lean::inc(x_126);
if (lean::is_shared(x_122)) {
 lean::dec(x_122);
 x_128 = lean::box(0);
} else {
 lean::cnstr_release(x_122, 0);
 x_128 = x_122;
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_126);
return x_129;
}
else
{
obj* x_130; obj* x_132; obj* x_133; obj* x_135; obj* x_138; obj* x_139; obj* x_140; 
x_130 = lean::cnstr_get(x_122, 0);
lean::inc(x_130);
if (lean::is_shared(x_122)) {
 lean::dec(x_122);
 x_132 = lean::box(0);
} else {
 lean::cnstr_release(x_122, 0);
 x_132 = x_122;
}
x_133 = lean::cnstr_get(x_130, 0);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_130, 1);
lean::inc(x_135);
lean::dec(x_130);
if (lean::is_scalar(x_14)) {
 x_138 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_138 = x_14;
}
lean::cnstr_set(x_138, 0, x_117);
lean::cnstr_set(x_138, 1, x_133);
if (lean::is_scalar(x_121)) {
 x_139 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_139 = x_121;
}
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_135);
if (lean::is_scalar(x_132)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_132;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::cnstr_get(x_3, 2);
lean::inc(x_8);
lean::dec(x_3);
x_11 = l_lean_elaborator_infer__mod__to__pexpr(x_8);
x_12 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_5);
if (lean::is_scalar(x_7)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_7;
}
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = level_mk_param(x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
lean::dec(x_8);
lean::inc(x_1);
x_17 = l_lean_elaborator_to__pexpr___main(x_13, x_1, x_2);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_17, 0);
lean::inc(x_21);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_23 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_23 = x_17;
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_21);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; 
x_25 = lean::cnstr_get(x_17, 0);
lean::inc(x_25);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_27 = x_17;
}
x_28 = lean::cnstr_get(x_25, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
if (lean::is_shared(x_25)) {
 lean::dec(x_25);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_32 = x_25;
}
x_33 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_10, x_1, x_30);
if (lean::obj_tag(x_33) == 0)
{
obj* x_37; obj* x_40; 
lean::dec(x_12);
lean::dec(x_28);
lean::dec(x_32);
x_37 = lean::cnstr_get(x_33, 0);
lean::inc(x_37);
lean::dec(x_33);
if (lean::is_scalar(x_27)) {
 x_40 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_40 = x_27;
 lean::cnstr_set_tag(x_27, 0);
}
lean::cnstr_set(x_40, 0, x_37);
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
x_41 = lean::cnstr_get(x_33, 0);
lean::inc(x_41);
lean::dec(x_33);
x_44 = lean::cnstr_get(x_41, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_41, 1);
lean::inc(x_46);
lean::dec(x_41);
if (lean::is_scalar(x_12)) {
 x_49 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_49 = x_12;
}
lean::cnstr_set(x_49, 0, x_28);
lean::cnstr_set(x_49, 1, x_44);
if (lean::is_scalar(x_32)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_32;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_46);
if (lean::is_scalar(x_27)) {
 x_51 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_51 = x_27;
}
lean::cnstr_set(x_51, 0, x_50);
return x_51;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 1);
lean::inc(x_12);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_14 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_14 = x_1;
}
switch (lean::obj_tag(x_10)) {
case 0:
{
obj* x_17; obj* x_20; 
x_17 = lean::cnstr_get(x_10, 0);
lean::inc(x_17);
lean::dec(x_10);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
lean::dec(x_17);
if (lean::obj_tag(x_20) == 0)
{
obj* x_24; obj* x_28; 
lean::dec(x_20);
x_24 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_24);
lean::inc(x_0);
x_28 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_24, x_2, x_3);
if (lean::obj_tag(x_28) == 0)
{
obj* x_33; obj* x_35; obj* x_36; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
x_33 = lean::cnstr_get(x_28, 0);
lean::inc(x_33);
if (lean::is_shared(x_28)) {
 lean::dec(x_28);
 x_35 = lean::box(0);
} else {
 lean::cnstr_release(x_28, 0);
 x_35 = x_28;
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_33);
return x_36;
}
else
{
obj* x_37; 
x_37 = lean::cnstr_get(x_28, 0);
lean::inc(x_37);
lean::dec(x_28);
x_15 = x_37;
goto lbl_16;
}
}
else
{
obj* x_40; uint8 x_43; obj* x_44; obj* x_45; obj* x_46; 
x_40 = lean::cnstr_get(x_20, 0);
lean::inc(x_40);
lean::dec(x_20);
x_43 = 0;
x_44 = lean::box(x_43);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_40);
x_46 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_3);
x_15 = x_46;
goto lbl_16;
}
}
case 1:
{
obj* x_47; obj* x_50; uint8 x_53; obj* x_54; obj* x_55; obj* x_56; 
x_47 = lean::cnstr_get(x_10, 0);
lean::inc(x_47);
lean::dec(x_10);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_53 = 1;
x_54 = lean::box(x_53);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_50);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_3);
x_15 = x_56;
goto lbl_16;
}
case 2:
{
obj* x_57; obj* x_60; uint8 x_63; obj* x_64; obj* x_65; obj* x_66; 
x_57 = lean::cnstr_get(x_10, 0);
lean::inc(x_57);
lean::dec(x_10);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
lean::dec(x_57);
x_63 = 2;
x_64 = lean::box(x_63);
x_65 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_60);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_3);
x_15 = x_66;
goto lbl_16;
}
default:
{
obj* x_67; obj* x_70; uint8 x_73; obj* x_74; obj* x_75; obj* x_76; 
x_67 = lean::cnstr_get(x_10, 0);
lean::inc(x_67);
lean::dec(x_10);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
lean::dec(x_67);
x_73 = 3;
x_74 = lean::box(x_73);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_70);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_3);
x_15 = x_76;
goto lbl_16;
}
}
lbl_16:
{
obj* x_77; obj* x_79; obj* x_81; obj* x_82; obj* x_84; obj* x_87; obj* x_89; obj* x_92; obj* x_94; 
x_77 = lean::cnstr_get(x_15, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_15, 1);
lean::inc(x_79);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_81 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_81 = x_15;
}
x_82 = lean::cnstr_get(x_77, 0);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_77, 1);
lean::inc(x_84);
lean::dec(x_77);
x_87 = lean::cnstr_get(x_84, 2);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_87, 1);
lean::inc(x_89);
lean::dec(x_87);
x_92 = l_lean_expander_get__opt__type___main(x_89);
lean::inc(x_2);
x_94 = l_lean_elaborator_to__pexpr___main(x_92, x_2, x_79);
if (lean::obj_tag(x_94) == 0)
{
obj* x_102; obj* x_104; obj* x_105; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_82);
lean::dec(x_81);
lean::dec(x_84);
x_102 = lean::cnstr_get(x_94, 0);
lean::inc(x_102);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_104 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_104 = x_94;
}
if (lean::is_scalar(x_104)) {
 x_105 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_105 = x_104;
}
lean::cnstr_set(x_105, 0, x_102);
return x_105;
}
else
{
obj* x_106; obj* x_108; obj* x_109; obj* x_111; obj* x_114; 
x_106 = lean::cnstr_get(x_94, 0);
lean::inc(x_106);
if (lean::is_shared(x_94)) {
 lean::dec(x_94);
 x_108 = lean::box(0);
} else {
 lean::cnstr_release(x_94, 0);
 x_108 = x_94;
}
x_109 = lean::cnstr_get(x_106, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_106, 1);
lean::inc(x_111);
lean::dec(x_106);
x_114 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_12, x_2, x_111);
if (lean::obj_tag(x_114) == 0)
{
obj* x_120; obj* x_123; 
lean::dec(x_14);
lean::dec(x_82);
lean::dec(x_81);
lean::dec(x_84);
lean::dec(x_109);
x_120 = lean::cnstr_get(x_114, 0);
lean::inc(x_120);
lean::dec(x_114);
if (lean::is_scalar(x_108)) {
 x_123 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_123 = x_108;
 lean::cnstr_set_tag(x_108, 0);
}
lean::cnstr_set(x_123, 0, x_120);
return x_123;
}
else
{
obj* x_124; obj* x_127; obj* x_129; obj* x_132; obj* x_133; uint8 x_134; obj* x_139; obj* x_140; obj* x_142; obj* x_143; obj* x_144; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_154; obj* x_155; obj* x_156; obj* x_157; 
x_124 = lean::cnstr_get(x_114, 0);
lean::inc(x_124);
lean::dec(x_114);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
lean::dec(x_124);
x_132 = l_lean_elaborator_mk__eqns___closed__1;
x_133 = l_lean_elaborator_dummy;
x_134 = lean::unbox(x_82);
lean::dec(x_82);
lean::inc(x_133);
lean::inc(x_132);
lean::inc(x_132);
x_139 = lean_expr_local(x_132, x_132, x_133, x_134);
x_140 = lean::cnstr_get(x_84, 0);
lean::inc(x_140);
x_142 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_140);
x_143 = l_lean_elaborator_names__to__pexpr(x_142);
x_144 = lean::cnstr_get(x_84, 1);
lean::inc(x_144);
lean::dec(x_84);
x_147 = l_lean_elaborator_infer__mod__to__pexpr(x_144);
x_148 = lean::box(0);
if (lean::is_scalar(x_14)) {
 x_149 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_149 = x_14;
}
lean::cnstr_set(x_149, 0, x_109);
lean::cnstr_set(x_149, 1, x_148);
x_150 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_150, 0, x_147);
lean::cnstr_set(x_150, 1, x_149);
x_151 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_151, 0, x_143);
lean::cnstr_set(x_151, 1, x_150);
x_152 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_152, 0, x_139);
lean::cnstr_set(x_152, 1, x_151);
lean::inc(x_132);
x_154 = l_lean_expr_mk__capp(x_132, x_152);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_154);
lean::cnstr_set(x_155, 1, x_127);
if (lean::is_scalar(x_81)) {
 x_156 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_156 = x_81;
}
lean::cnstr_set(x_156, 0, x_155);
lean::cnstr_set(x_156, 1, x_129);
if (lean::is_scalar(x_108)) {
 x_157 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_157 = x_108;
}
lean::cnstr_set(x_157, 0, x_156);
return x_157;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_3);
x_9 = level_mk_param(x_3);
x_10 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_3, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
lean::inc(x_0);
x_3 = l_lean_name_to__string__with__sep___main(x_1, x_0);
x_4 = l_lean_parser_substring_of__string(x_3);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
x_9 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_9, 0, x_0);
lean::cnstr_set(x_9, 1, x_4);
lean::cnstr_set(x_9, 2, x_0);
lean::cnstr_set(x_9, 3, x_0);
lean::cnstr_set(x_9, 4, x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_0);
return x_10;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("def");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("constant");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("inductives");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_infer__mod__to__pexpr(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("structure");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("mk");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
x_7 = l_lean_parser_command_declaration_has__view;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::inc(x_0);
x_11 = lean::apply_1(x_8, x_0);
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_14; obj* x_17; obj* x_19; 
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
lean::dec(x_12);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_11, 0);
lean::inc(x_19);
lean::dec(x_11);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_23; obj* x_24; 
lean::dec(x_17);
x_23 = lean::mk_nat_obj(1u);
x_24 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_23, x_1, x_2);
x_5 = x_24;
goto lbl_6;
}
case 1:
{
obj* x_26; obj* x_27; 
lean::dec(x_17);
x_26 = lean::mk_nat_obj(5u);
x_27 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_26, x_1, x_2);
x_5 = x_27;
goto lbl_6;
}
default:
{
obj* x_29; obj* x_30; 
lean::dec(x_17);
x_29 = lean::mk_nat_obj(0u);
x_30 = l_lean_elaborator_elab__def__like(x_0, x_19, x_14, x_29, x_1, x_2);
x_5 = x_30;
goto lbl_6;
}
}
}
case 1:
{
obj* x_31; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_55; obj* x_57; obj* x_58; obj* x_59; 
x_31 = lean::cnstr_get(x_12, 0);
lean::inc(x_31);
lean::dec(x_12);
x_34 = lean::cnstr_get(x_11, 0);
lean::inc(x_34);
lean::dec(x_11);
x_37 = lean::box(0);
x_38 = lean::cnstr_get(x_31, 1);
lean::inc(x_38);
x_40 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
lean::inc(x_40);
x_42 = l_option_get__or__else___main___rarg(x_38, x_40);
x_43 = lean::cnstr_get(x_31, 2);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_43, 1);
lean::inc(x_47);
lean::dec(x_43);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_47);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_45);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::cnstr_get(x_31, 3);
lean::inc(x_52);
lean::dec(x_31);
x_55 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
lean::inc(x_55);
x_57 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_37);
lean::cnstr_set(x_57, 2, x_42);
lean::cnstr_set(x_57, 3, x_51);
lean::cnstr_set(x_57, 4, x_52);
x_58 = lean::mk_nat_obj(3u);
x_59 = l_lean_elaborator_elab__def__like(x_0, x_34, x_57, x_58, x_1, x_2);
x_5 = x_59;
goto lbl_6;
}
case 2:
{
obj* x_60; obj* x_63; obj* x_66; obj* x_67; obj* x_69; obj* x_71; obj* x_74; obj* x_75; obj* x_76; obj* x_79; obj* x_80; obj* x_83; obj* x_84; obj* x_85; 
x_60 = lean::cnstr_get(x_12, 0);
lean::inc(x_60);
lean::dec(x_12);
x_63 = lean::cnstr_get(x_11, 0);
lean::inc(x_63);
lean::dec(x_11);
x_66 = lean::box(0);
x_67 = lean::cnstr_get(x_60, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_67, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_67, 1);
lean::inc(x_71);
lean::dec(x_67);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_71);
x_75 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_75, 0, x_69);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::cnstr_get(x_60, 2);
lean::inc(x_76);
lean::dec(x_60);
x_79 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_80 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
lean::inc(x_80);
lean::inc(x_79);
x_83 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_83, 0, x_79);
lean::cnstr_set(x_83, 1, x_66);
lean::cnstr_set(x_83, 2, x_80);
lean::cnstr_set(x_83, 3, x_75);
lean::cnstr_set(x_83, 4, x_76);
x_84 = lean::mk_nat_obj(2u);
x_85 = l_lean_elaborator_elab__def__like(x_0, x_63, x_83, x_84, x_1, x_2);
x_5 = x_85;
goto lbl_6;
}
case 3:
{
obj* x_86; obj* x_89; obj* x_91; obj* x_94; obj* x_96; 
x_86 = lean::cnstr_get(x_12, 0);
lean::inc(x_86);
lean::dec(x_12);
x_89 = lean::cnstr_get(x_86, 1);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_86, 2);
lean::inc(x_91);
lean::dec(x_86);
x_94 = lean::cnstr_get(x_91, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get(x_91, 1);
lean::inc(x_96);
lean::dec(x_91);
if (lean::obj_tag(x_94) == 0)
{
obj* x_103; obj* x_105; 
lean::dec(x_11);
lean::dec(x_89);
lean::dec(x_96);
lean::dec(x_94);
x_103 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_103);
x_105 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_103, x_1, x_2);
x_5 = x_105;
goto lbl_6;
}
else
{
obj* x_106; 
x_106 = lean::cnstr_get(x_94, 0);
lean::inc(x_106);
lean::dec(x_94);
if (lean::obj_tag(x_106) == 0)
{
obj* x_110; obj* x_114; 
lean::dec(x_106);
x_110 = lean::cnstr_get(x_11, 0);
lean::inc(x_110);
lean::dec(x_11);
lean::inc(x_1);
x_114 = l_lean_elaborator_decl__modifiers__to__pexpr(x_110, x_1, x_2);
if (lean::obj_tag(x_114) == 0)
{
obj* x_119; obj* x_121; obj* x_122; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_89);
lean::dec(x_96);
x_119 = lean::cnstr_get(x_114, 0);
lean::inc(x_119);
if (lean::is_shared(x_114)) {
 lean::dec(x_114);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_114, 0);
 x_121 = x_114;
}
if (lean::is_scalar(x_121)) {
 x_122 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_122 = x_121;
}
lean::cnstr_set(x_122, 0, x_119);
x_5 = x_122;
goto lbl_6;
}
else
{
obj* x_123; obj* x_125; obj* x_126; obj* x_128; obj* x_131; obj* x_135; 
x_123 = lean::cnstr_get(x_114, 0);
lean::inc(x_123);
if (lean::is_shared(x_114)) {
 lean::dec(x_114);
 x_125 = lean::box(0);
} else {
 lean::cnstr_release(x_114, 0);
 x_125 = x_114;
}
x_126 = lean::cnstr_get(x_123, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_123, 1);
lean::inc(x_128);
lean::dec(x_123);
x_131 = lean::cnstr_get(x_96, 1);
lean::inc(x_131);
lean::dec(x_96);
lean::inc(x_1);
x_135 = l_lean_elaborator_to__pexpr___main(x_131, x_1, x_128);
if (lean::obj_tag(x_135) == 0)
{
obj* x_140; obj* x_143; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_89);
lean::dec(x_126);
x_140 = lean::cnstr_get(x_135, 0);
lean::inc(x_140);
lean::dec(x_135);
if (lean::is_scalar(x_125)) {
 x_143 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_143 = x_125;
 lean::cnstr_set_tag(x_125, 0);
}
lean::cnstr_set(x_143, 0, x_140);
x_5 = x_143;
goto lbl_6;
}
else
{
obj* x_145; obj* x_148; obj* x_150; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_160; obj* x_161; obj* x_163; obj* x_164; 
lean::dec(x_125);
x_145 = lean::cnstr_get(x_135, 0);
lean::inc(x_145);
lean::dec(x_135);
x_148 = lean::cnstr_get(x_145, 0);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_145, 1);
lean::inc(x_150);
lean::dec(x_145);
x_153 = lean::box(0);
x_154 = l_lean_elaborator_ident__univ__params__to__pexpr(x_89);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_148);
lean::cnstr_set(x_155, 1, x_153);
x_156 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_156, 0, x_154);
lean::cnstr_set(x_156, 1, x_155);
x_157 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_157, 0, x_126);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_158);
x_160 = l_lean_expr_mk__capp(x_158, x_157);
x_161 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
lean::inc(x_161);
x_163 = lean_expr_mk_mdata(x_161, x_160);
x_164 = l_lean_elaborator_old__elab__command(x_0, x_163, x_1, x_150);
x_5 = x_164;
goto lbl_6;
}
}
}
else
{
obj* x_169; obj* x_171; 
lean::dec(x_11);
lean::dec(x_89);
lean::dec(x_106);
lean::dec(x_96);
x_169 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_169);
x_171 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_169, x_1, x_2);
x_5 = x_171;
goto lbl_6;
}
}
}
case 4:
{
obj* x_172; obj* x_175; obj* x_177; obj* x_179; obj* x_181; obj* x_183; 
x_172 = lean::cnstr_get(x_12, 0);
lean::inc(x_172);
lean::dec(x_12);
x_175 = lean::cnstr_get(x_172, 0);
lean::inc(x_175);
x_177 = lean::cnstr_get(x_172, 2);
lean::inc(x_177);
x_179 = lean::cnstr_get(x_172, 3);
lean::inc(x_179);
x_181 = lean::cnstr_get(x_172, 4);
lean::inc(x_181);
x_183 = lean::cnstr_get(x_172, 6);
lean::inc(x_183);
lean::dec(x_172);
if (lean::obj_tag(x_175) == 0)
{
obj* x_187; obj* x_189; 
lean::dec(x_175);
x_187 = lean::cnstr_get(x_181, 0);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_181, 1);
lean::inc(x_189);
lean::dec(x_181);
if (lean::obj_tag(x_187) == 0)
{
obj* x_198; obj* x_200; 
lean::dec(x_189);
lean::dec(x_187);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_11);
x_198 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_198);
x_200 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_198, x_1, x_2);
x_5 = x_200;
goto lbl_6;
}
else
{
obj* x_201; obj* x_204; obj* x_209; 
x_201 = lean::cnstr_get(x_187, 0);
lean::inc(x_201);
lean::dec(x_187);
x_204 = lean::cnstr_get(x_11, 0);
lean::inc(x_204);
lean::dec(x_11);
lean::inc(x_1);
lean::inc(x_204);
x_209 = l_lean_elaborator_decl__modifiers__to__pexpr(x_204, x_1, x_2);
if (lean::obj_tag(x_209) == 0)
{
obj* x_218; obj* x_220; obj* x_221; 
lean::dec(x_204);
lean::dec(x_189);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_1);
lean::dec(x_0);
x_218 = lean::cnstr_get(x_209, 0);
lean::inc(x_218);
if (lean::is_shared(x_209)) {
 lean::dec(x_209);
 x_220 = lean::box(0);
} else {
 lean::cnstr_release(x_209, 0);
 x_220 = x_209;
}
if (lean::is_scalar(x_220)) {
 x_221 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_221 = x_220;
}
lean::cnstr_set(x_221, 0, x_218);
x_5 = x_221;
goto lbl_6;
}
else
{
obj* x_222; obj* x_224; obj* x_225; obj* x_227; obj* x_230; obj* x_231; obj* x_233; 
x_222 = lean::cnstr_get(x_209, 0);
lean::inc(x_222);
if (lean::is_shared(x_209)) {
 lean::dec(x_209);
 x_224 = lean::box(0);
} else {
 lean::cnstr_release(x_209, 0);
 x_224 = x_209;
}
x_225 = lean::cnstr_get(x_222, 0);
lean::inc(x_225);
x_227 = lean::cnstr_get(x_222, 1);
lean::inc(x_227);
lean::dec(x_222);
x_230 = lean::box(0);
x_233 = lean::cnstr_get(x_204, 1);
lean::inc(x_233);
lean::dec(x_204);
if (lean::obj_tag(x_233) == 0)
{
lean::dec(x_233);
x_231 = x_230;
goto lbl_232;
}
else
{
obj* x_237; obj* x_240; 
x_237 = lean::cnstr_get(x_233, 0);
lean::inc(x_237);
lean::dec(x_233);
x_240 = lean::cnstr_get(x_237, 1);
lean::inc(x_240);
lean::dec(x_237);
x_231 = x_240;
goto lbl_232;
}
lbl_232:
{
obj* x_244; 
lean::inc(x_1);
x_244 = l_lean_elaborator_attrs__to__pexpr(x_231, x_1, x_227);
if (lean::obj_tag(x_244) == 0)
{
obj* x_254; obj* x_257; 
lean::dec(x_189);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_1);
lean::dec(x_0);
x_254 = lean::cnstr_get(x_244, 0);
lean::inc(x_254);
lean::dec(x_244);
if (lean::is_scalar(x_224)) {
 x_257 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_257 = x_224;
 lean::cnstr_set_tag(x_224, 0);
}
lean::cnstr_set(x_257, 0, x_254);
x_5 = x_257;
goto lbl_6;
}
else
{
obj* x_258; obj* x_260; obj* x_261; obj* x_263; obj* x_267; obj* x_268; obj* x_270; obj* x_271; obj* x_272; 
x_258 = lean::cnstr_get(x_244, 0);
lean::inc(x_258);
if (lean::is_shared(x_244)) {
 lean::dec(x_244);
 x_260 = lean::box(0);
} else {
 lean::cnstr_release(x_244, 0);
 x_260 = x_244;
}
x_261 = lean::cnstr_get(x_258, 0);
lean::inc(x_261);
x_263 = lean::cnstr_get(x_258, 1);
lean::inc(x_263);
lean::dec(x_258);
lean::inc(x_230);
x_267 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_267, 0, x_261);
lean::cnstr_set(x_267, 1, x_230);
x_268 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_268);
x_270 = l_lean_expr_mk__capp(x_268, x_267);
if (lean::obj_tag(x_177) == 0)
{
obj* x_274; obj* x_276; 
x_274 = l_lean_expander_get__opt__type___main(x_189);
lean::inc(x_1);
x_276 = l_lean_elaborator_to__pexpr___main(x_274, x_1, x_263);
if (lean::obj_tag(x_177) == 0)
{
lean::dec(x_177);
if (lean::obj_tag(x_276) == 0)
{
obj* x_287; obj* x_290; 
lean::dec(x_270);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_1);
lean::dec(x_0);
x_287 = lean::cnstr_get(x_276, 0);
lean::inc(x_287);
lean::dec(x_276);
if (lean::is_scalar(x_260)) {
 x_290 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_290 = x_260;
 lean::cnstr_set_tag(x_260, 0);
}
lean::cnstr_set(x_290, 0, x_287);
x_5 = x_290;
goto lbl_6;
}
else
{
obj* x_292; 
lean::dec(x_260);
x_292 = lean::cnstr_get(x_276, 0);
lean::inc(x_292);
lean::dec(x_276);
x_271 = x_230;
x_272 = x_292;
goto lbl_273;
}
}
else
{
obj* x_295; 
x_295 = lean::cnstr_get(x_177, 0);
lean::inc(x_295);
lean::dec(x_177);
if (lean::obj_tag(x_276) == 0)
{
obj* x_308; obj* x_311; 
lean::dec(x_270);
lean::dec(x_295);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_1);
lean::dec(x_0);
x_308 = lean::cnstr_get(x_276, 0);
lean::inc(x_308);
lean::dec(x_276);
if (lean::is_scalar(x_260)) {
 x_311 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_311 = x_260;
 lean::cnstr_set_tag(x_260, 0);
}
lean::cnstr_set(x_311, 0, x_308);
x_5 = x_311;
goto lbl_6;
}
else
{
obj* x_313; obj* x_316; obj* x_319; 
lean::dec(x_260);
x_313 = lean::cnstr_get(x_276, 0);
lean::inc(x_313);
lean::dec(x_276);
x_316 = lean::cnstr_get(x_295, 1);
lean::inc(x_316);
lean::dec(x_295);
x_319 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_316);
x_271 = x_319;
x_272 = x_313;
goto lbl_273;
}
}
}
else
{
obj* x_320; obj* x_322; obj* x_324; obj* x_326; obj* x_328; obj* x_330; obj* x_332; obj* x_334; obj* x_336; obj* x_340; obj* x_341; obj* x_342; obj* x_344; obj* x_346; obj* x_348; obj* x_350; obj* x_353; obj* x_354; obj* x_356; obj* x_358; obj* x_360; obj* x_362; obj* x_364; obj* x_367; obj* x_368; obj* x_370; 
x_320 = lean::cnstr_get(x_177, 0);
lean::inc(x_320);
x_322 = lean::cnstr_get(x_263, 0);
lean::inc(x_322);
x_324 = lean::cnstr_get(x_263, 1);
lean::inc(x_324);
x_326 = lean::cnstr_get(x_263, 2);
lean::inc(x_326);
x_328 = lean::cnstr_get(x_263, 3);
lean::inc(x_328);
x_330 = lean::cnstr_get(x_263, 4);
lean::inc(x_330);
x_332 = lean::cnstr_get(x_330, 0);
lean::inc(x_332);
x_334 = lean::cnstr_get(x_330, 1);
lean::inc(x_334);
x_336 = lean::cnstr_get(x_320, 1);
lean::inc(x_336);
lean::dec(x_320);
lean::inc(x_336);
x_340 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_336);
x_341 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(x_334, x_340);
x_342 = lean::cnstr_get(x_330, 2);
lean::inc(x_342);
x_344 = lean::cnstr_get(x_330, 3);
lean::inc(x_344);
x_346 = lean::cnstr_get(x_330, 4);
lean::inc(x_346);
x_348 = lean::cnstr_get(x_330, 5);
lean::inc(x_348);
x_350 = lean::cnstr_get(x_330, 6);
lean::inc(x_350);
lean::dec(x_330);
x_353 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_353, 0, x_332);
lean::cnstr_set(x_353, 1, x_341);
lean::cnstr_set(x_353, 2, x_342);
lean::cnstr_set(x_353, 3, x_344);
lean::cnstr_set(x_353, 4, x_346);
lean::cnstr_set(x_353, 5, x_348);
lean::cnstr_set(x_353, 6, x_350);
x_354 = lean::cnstr_get(x_263, 5);
lean::inc(x_354);
x_356 = lean::cnstr_get(x_263, 6);
lean::inc(x_356);
x_358 = lean::cnstr_get(x_263, 7);
lean::inc(x_358);
x_360 = lean::cnstr_get(x_263, 8);
lean::inc(x_360);
x_362 = lean::cnstr_get(x_263, 9);
lean::inc(x_362);
x_364 = lean::cnstr_get(x_263, 10);
lean::inc(x_364);
lean::dec(x_263);
x_367 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_367, 0, x_322);
lean::cnstr_set(x_367, 1, x_324);
lean::cnstr_set(x_367, 2, x_326);
lean::cnstr_set(x_367, 3, x_328);
lean::cnstr_set(x_367, 4, x_353);
lean::cnstr_set(x_367, 5, x_354);
lean::cnstr_set(x_367, 6, x_356);
lean::cnstr_set(x_367, 7, x_358);
lean::cnstr_set(x_367, 8, x_360);
lean::cnstr_set(x_367, 9, x_362);
lean::cnstr_set(x_367, 10, x_364);
x_368 = l_lean_expander_get__opt__type___main(x_189);
lean::inc(x_1);
x_370 = l_lean_elaborator_to__pexpr___main(x_368, x_1, x_367);
if (lean::obj_tag(x_177) == 0)
{
lean::dec(x_177);
lean::dec(x_336);
if (lean::obj_tag(x_370) == 0)
{
obj* x_382; obj* x_385; 
lean::dec(x_270);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_1);
lean::dec(x_0);
x_382 = lean::cnstr_get(x_370, 0);
lean::inc(x_382);
lean::dec(x_370);
if (lean::is_scalar(x_260)) {
 x_385 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_385 = x_260;
 lean::cnstr_set_tag(x_260, 0);
}
lean::cnstr_set(x_385, 0, x_382);
x_5 = x_385;
goto lbl_6;
}
else
{
obj* x_387; 
lean::dec(x_260);
x_387 = lean::cnstr_get(x_370, 0);
lean::inc(x_387);
lean::dec(x_370);
x_271 = x_230;
x_272 = x_387;
goto lbl_273;
}
}
else
{
lean::dec(x_177);
if (lean::obj_tag(x_370) == 0)
{
obj* x_401; obj* x_404; 
lean::dec(x_270);
lean::dec(x_201);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_224);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_336);
x_401 = lean::cnstr_get(x_370, 0);
lean::inc(x_401);
lean::dec(x_370);
if (lean::is_scalar(x_260)) {
 x_404 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_404 = x_260;
 lean::cnstr_set_tag(x_260, 0);
}
lean::cnstr_set(x_404, 0, x_401);
x_5 = x_404;
goto lbl_6;
}
else
{
obj* x_406; obj* x_409; 
lean::dec(x_260);
x_406 = lean::cnstr_get(x_370, 0);
lean::inc(x_406);
lean::dec(x_370);
x_409 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_336);
x_271 = x_409;
x_272 = x_406;
goto lbl_273;
}
}
}
lbl_273:
{
obj* x_410; obj* x_412; obj* x_416; 
x_410 = lean::cnstr_get(x_272, 0);
lean::inc(x_410);
x_412 = lean::cnstr_get(x_272, 1);
lean::inc(x_412);
lean::dec(x_272);
lean::inc(x_1);
x_416 = l_lean_elaborator_simple__binders__to__pexpr(x_201, x_1, x_412);
if (lean::obj_tag(x_416) == 0)
{
obj* x_426; obj* x_429; 
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_410);
lean::dec(x_271);
x_426 = lean::cnstr_get(x_416, 0);
lean::inc(x_426);
lean::dec(x_416);
if (lean::is_scalar(x_224)) {
 x_429 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_429 = x_224;
 lean::cnstr_set_tag(x_224, 0);
}
lean::cnstr_set(x_429, 0, x_426);
x_5 = x_429;
goto lbl_6;
}
else
{
obj* x_430; obj* x_433; obj* x_435; obj* x_441; 
x_430 = lean::cnstr_get(x_416, 0);
lean::inc(x_430);
lean::dec(x_416);
x_433 = lean::cnstr_get(x_430, 0);
lean::inc(x_433);
x_435 = lean::cnstr_get(x_430, 1);
lean::inc(x_435);
lean::dec(x_430);
lean::inc(x_1);
lean::inc(x_183);
lean::inc(x_0);
x_441 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_183, x_1, x_435);
if (lean::obj_tag(x_441) == 0)
{
obj* x_452; obj* x_455; 
lean::dec(x_270);
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_230);
lean::dec(x_225);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_410);
lean::dec(x_271);
lean::dec(x_433);
x_452 = lean::cnstr_get(x_441, 0);
lean::inc(x_452);
lean::dec(x_441);
if (lean::is_scalar(x_224)) {
 x_455 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_455 = x_224;
 lean::cnstr_set_tag(x_224, 0);
}
lean::cnstr_set(x_455, 0, x_452);
x_5 = x_455;
goto lbl_6;
}
else
{
obj* x_457; obj* x_460; obj* x_462; obj* x_465; obj* x_466; obj* x_469; uint8 x_470; obj* x_472; obj* x_474; obj* x_476; obj* x_478; obj* x_480; obj* x_482; obj* x_483; obj* x_485; obj* x_487; obj* x_489; obj* x_490; obj* x_491; obj* x_492; obj* x_493; obj* x_494; obj* x_495; obj* x_496; obj* x_498; obj* x_499; obj* x_501; obj* x_502; 
lean::dec(x_224);
x_457 = lean::cnstr_get(x_441, 0);
lean::inc(x_457);
lean::dec(x_441);
x_460 = lean::cnstr_get(x_457, 0);
lean::inc(x_460);
x_462 = lean::cnstr_get(x_457, 1);
lean::inc(x_462);
lean::dec(x_457);
x_465 = l_lean_elaborator_names__to__pexpr(x_271);
x_466 = lean::cnstr_get(x_179, 0);
lean::inc(x_466);
lean::dec(x_179);
x_469 = l_lean_elaborator_mangle__ident(x_466);
x_470 = 0;
lean::inc(x_469);
x_472 = lean_expr_local(x_469, x_469, x_410, x_470);
lean::inc(x_230);
x_474 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_474, 0, x_472);
lean::cnstr_set(x_474, 1, x_230);
lean::inc(x_268);
x_476 = l_lean_expr_mk__capp(x_268, x_474);
lean::inc(x_268);
x_478 = l_lean_expr_mk__capp(x_268, x_460);
lean::inc(x_230);
x_480 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_480, 0, x_478);
lean::cnstr_set(x_480, 1, x_230);
lean::inc(x_268);
x_482 = l_lean_expr_mk__capp(x_268, x_480);
x_483 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_183);
lean::inc(x_268);
x_485 = l_lean_expr_mk__capp(x_268, x_483);
lean::inc(x_230);
x_487 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_487, 0, x_485);
lean::cnstr_set(x_487, 1, x_230);
lean::inc(x_268);
x_489 = l_lean_expr_mk__capp(x_268, x_487);
x_490 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_490, 0, x_489);
lean::cnstr_set(x_490, 1, x_230);
x_491 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_491, 0, x_482);
lean::cnstr_set(x_491, 1, x_490);
x_492 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_492, 0, x_433);
lean::cnstr_set(x_492, 1, x_491);
x_493 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_493, 0, x_476);
lean::cnstr_set(x_493, 1, x_492);
x_494 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_494, 0, x_465);
lean::cnstr_set(x_494, 1, x_493);
x_495 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_495, 0, x_270);
lean::cnstr_set(x_495, 1, x_494);
x_496 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_496, 0, x_225);
lean::cnstr_set(x_496, 1, x_495);
lean::inc(x_268);
x_498 = l_lean_expr_mk__capp(x_268, x_496);
x_499 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
lean::inc(x_499);
x_501 = lean_expr_mk_mdata(x_499, x_498);
x_502 = l_lean_elaborator_old__elab__command(x_0, x_501, x_1, x_462);
x_5 = x_502;
goto lbl_6;
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
obj* x_509; obj* x_511; 
lean::dec(x_183);
lean::dec(x_181);
lean::dec(x_179);
lean::dec(x_177);
lean::dec(x_11);
lean::dec(x_175);
x_509 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_509);
x_511 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_509, x_1, x_2);
x_5 = x_511;
goto lbl_6;
}
}
default:
{
obj* x_512; obj* x_515; obj* x_517; obj* x_519; obj* x_521; obj* x_523; obj* x_525; obj* x_527; 
x_512 = lean::cnstr_get(x_12, 0);
lean::inc(x_512);
lean::dec(x_12);
x_515 = lean::cnstr_get(x_512, 0);
lean::inc(x_515);
x_517 = lean::cnstr_get(x_512, 1);
lean::inc(x_517);
x_519 = lean::cnstr_get(x_512, 2);
lean::inc(x_519);
x_521 = lean::cnstr_get(x_512, 3);
lean::inc(x_521);
x_523 = lean::cnstr_get(x_512, 4);
lean::inc(x_523);
x_525 = lean::cnstr_get(x_512, 6);
lean::inc(x_525);
x_527 = lean::cnstr_get(x_512, 7);
lean::inc(x_527);
lean::dec(x_512);
if (lean::obj_tag(x_515) == 0)
{
obj* x_531; obj* x_533; 
lean::dec(x_515);
x_531 = lean::cnstr_get(x_521, 0);
lean::inc(x_531);
x_533 = lean::cnstr_get(x_521, 1);
lean::inc(x_533);
lean::dec(x_521);
if (lean::obj_tag(x_531) == 0)
{
obj* x_544; obj* x_546; 
lean::dec(x_11);
lean::dec(x_531);
lean::dec(x_527);
lean::dec(x_533);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_517);
x_544 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_544);
x_546 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_544, x_1, x_2);
x_5 = x_546;
goto lbl_6;
}
else
{
obj* x_547; obj* x_550; obj* x_554; 
x_547 = lean::cnstr_get(x_531, 0);
lean::inc(x_547);
lean::dec(x_531);
x_550 = lean::cnstr_get(x_11, 0);
lean::inc(x_550);
lean::dec(x_11);
lean::inc(x_1);
x_554 = l_lean_elaborator_decl__modifiers__to__pexpr(x_550, x_1, x_2);
if (lean::obj_tag(x_554) == 0)
{
obj* x_564; obj* x_566; obj* x_567; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_533);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_517);
lean::dec(x_547);
x_564 = lean::cnstr_get(x_554, 0);
lean::inc(x_564);
if (lean::is_shared(x_554)) {
 lean::dec(x_554);
 x_566 = lean::box(0);
} else {
 lean::cnstr_release(x_554, 0);
 x_566 = x_554;
}
if (lean::is_scalar(x_566)) {
 x_567 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_567 = x_566;
}
lean::cnstr_set(x_567, 0, x_564);
x_5 = x_567;
goto lbl_6;
}
else
{
obj* x_568; obj* x_570; obj* x_571; obj* x_573; obj* x_576; obj* x_577; obj* x_578; 
x_568 = lean::cnstr_get(x_554, 0);
lean::inc(x_568);
if (lean::is_shared(x_554)) {
 lean::dec(x_554);
 x_570 = lean::box(0);
} else {
 lean::cnstr_release(x_554, 0);
 x_570 = x_554;
}
x_571 = lean::cnstr_get(x_568, 0);
lean::inc(x_571);
x_573 = lean::cnstr_get(x_568, 1);
lean::inc(x_573);
lean::dec(x_568);
x_576 = lean::box(0);
if (lean::obj_tag(x_517) == 0)
{
obj* x_580; obj* x_582; 
x_580 = l_lean_expander_get__opt__type___main(x_533);
lean::inc(x_1);
x_582 = l_lean_elaborator_to__pexpr___main(x_580, x_1, x_573);
if (lean::obj_tag(x_517) == 0)
{
lean::dec(x_517);
if (lean::obj_tag(x_582) == 0)
{
obj* x_594; obj* x_596; obj* x_597; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_570);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_547);
x_594 = lean::cnstr_get(x_582, 0);
lean::inc(x_594);
if (lean::is_shared(x_582)) {
 lean::dec(x_582);
 x_596 = lean::box(0);
} else {
 lean::cnstr_release(x_582, 0);
 x_596 = x_582;
}
if (lean::is_scalar(x_596)) {
 x_597 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_597 = x_596;
}
lean::cnstr_set(x_597, 0, x_594);
x_5 = x_597;
goto lbl_6;
}
else
{
obj* x_598; 
x_598 = lean::cnstr_get(x_582, 0);
lean::inc(x_598);
lean::dec(x_582);
x_577 = x_576;
x_578 = x_598;
goto lbl_579;
}
}
else
{
obj* x_601; 
x_601 = lean::cnstr_get(x_517, 0);
lean::inc(x_601);
lean::dec(x_517);
if (lean::obj_tag(x_582) == 0)
{
obj* x_615; obj* x_617; obj* x_618; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_570);
lean::dec(x_601);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_547);
x_615 = lean::cnstr_get(x_582, 0);
lean::inc(x_615);
if (lean::is_shared(x_582)) {
 lean::dec(x_582);
 x_617 = lean::box(0);
} else {
 lean::cnstr_release(x_582, 0);
 x_617 = x_582;
}
if (lean::is_scalar(x_617)) {
 x_618 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_618 = x_617;
}
lean::cnstr_set(x_618, 0, x_615);
x_5 = x_618;
goto lbl_6;
}
else
{
obj* x_619; obj* x_622; obj* x_625; 
x_619 = lean::cnstr_get(x_582, 0);
lean::inc(x_619);
lean::dec(x_582);
x_622 = lean::cnstr_get(x_601, 1);
lean::inc(x_622);
lean::dec(x_601);
x_625 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_622);
x_577 = x_625;
x_578 = x_619;
goto lbl_579;
}
}
}
else
{
obj* x_626; obj* x_628; obj* x_630; obj* x_632; obj* x_634; obj* x_636; obj* x_638; obj* x_640; obj* x_642; obj* x_646; obj* x_647; obj* x_648; obj* x_650; obj* x_652; obj* x_654; obj* x_656; obj* x_659; obj* x_660; obj* x_662; obj* x_664; obj* x_666; obj* x_668; obj* x_670; obj* x_673; obj* x_674; obj* x_676; 
x_626 = lean::cnstr_get(x_517, 0);
lean::inc(x_626);
x_628 = lean::cnstr_get(x_573, 0);
lean::inc(x_628);
x_630 = lean::cnstr_get(x_573, 1);
lean::inc(x_630);
x_632 = lean::cnstr_get(x_573, 2);
lean::inc(x_632);
x_634 = lean::cnstr_get(x_573, 3);
lean::inc(x_634);
x_636 = lean::cnstr_get(x_573, 4);
lean::inc(x_636);
x_638 = lean::cnstr_get(x_636, 0);
lean::inc(x_638);
x_640 = lean::cnstr_get(x_636, 1);
lean::inc(x_640);
x_642 = lean::cnstr_get(x_626, 1);
lean::inc(x_642);
lean::dec(x_626);
lean::inc(x_642);
x_646 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_642);
x_647 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(x_640, x_646);
x_648 = lean::cnstr_get(x_636, 2);
lean::inc(x_648);
x_650 = lean::cnstr_get(x_636, 3);
lean::inc(x_650);
x_652 = lean::cnstr_get(x_636, 4);
lean::inc(x_652);
x_654 = lean::cnstr_get(x_636, 5);
lean::inc(x_654);
x_656 = lean::cnstr_get(x_636, 6);
lean::inc(x_656);
lean::dec(x_636);
x_659 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_659, 0, x_638);
lean::cnstr_set(x_659, 1, x_647);
lean::cnstr_set(x_659, 2, x_648);
lean::cnstr_set(x_659, 3, x_650);
lean::cnstr_set(x_659, 4, x_652);
lean::cnstr_set(x_659, 5, x_654);
lean::cnstr_set(x_659, 6, x_656);
x_660 = lean::cnstr_get(x_573, 5);
lean::inc(x_660);
x_662 = lean::cnstr_get(x_573, 6);
lean::inc(x_662);
x_664 = lean::cnstr_get(x_573, 7);
lean::inc(x_664);
x_666 = lean::cnstr_get(x_573, 8);
lean::inc(x_666);
x_668 = lean::cnstr_get(x_573, 9);
lean::inc(x_668);
x_670 = lean::cnstr_get(x_573, 10);
lean::inc(x_670);
lean::dec(x_573);
x_673 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_673, 0, x_628);
lean::cnstr_set(x_673, 1, x_630);
lean::cnstr_set(x_673, 2, x_632);
lean::cnstr_set(x_673, 3, x_634);
lean::cnstr_set(x_673, 4, x_659);
lean::cnstr_set(x_673, 5, x_660);
lean::cnstr_set(x_673, 6, x_662);
lean::cnstr_set(x_673, 7, x_664);
lean::cnstr_set(x_673, 8, x_666);
lean::cnstr_set(x_673, 9, x_668);
lean::cnstr_set(x_673, 10, x_670);
x_674 = l_lean_expander_get__opt__type___main(x_533);
lean::inc(x_1);
x_676 = l_lean_elaborator_to__pexpr___main(x_674, x_1, x_673);
if (lean::obj_tag(x_517) == 0)
{
lean::dec(x_642);
lean::dec(x_517);
if (lean::obj_tag(x_676) == 0)
{
obj* x_689; obj* x_691; obj* x_692; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_570);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_547);
x_689 = lean::cnstr_get(x_676, 0);
lean::inc(x_689);
if (lean::is_shared(x_676)) {
 lean::dec(x_676);
 x_691 = lean::box(0);
} else {
 lean::cnstr_release(x_676, 0);
 x_691 = x_676;
}
if (lean::is_scalar(x_691)) {
 x_692 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_692 = x_691;
}
lean::cnstr_set(x_692, 0, x_689);
x_5 = x_692;
goto lbl_6;
}
else
{
obj* x_693; 
x_693 = lean::cnstr_get(x_676, 0);
lean::inc(x_693);
lean::dec(x_676);
x_577 = x_576;
x_578 = x_693;
goto lbl_579;
}
}
else
{
lean::dec(x_517);
if (lean::obj_tag(x_676) == 0)
{
obj* x_708; obj* x_710; obj* x_711; 
lean::dec(x_642);
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_570);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_547);
x_708 = lean::cnstr_get(x_676, 0);
lean::inc(x_708);
if (lean::is_shared(x_676)) {
 lean::dec(x_676);
 x_710 = lean::box(0);
} else {
 lean::cnstr_release(x_676, 0);
 x_710 = x_676;
}
if (lean::is_scalar(x_710)) {
 x_711 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_711 = x_710;
}
lean::cnstr_set(x_711, 0, x_708);
x_5 = x_711;
goto lbl_6;
}
else
{
obj* x_712; obj* x_715; 
x_712 = lean::cnstr_get(x_676, 0);
lean::inc(x_712);
lean::dec(x_676);
x_715 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_642);
x_577 = x_715;
x_578 = x_712;
goto lbl_579;
}
}
}
lbl_579:
{
obj* x_716; obj* x_718; obj* x_722; 
x_716 = lean::cnstr_get(x_578, 0);
lean::inc(x_716);
x_718 = lean::cnstr_get(x_578, 1);
lean::inc(x_718);
lean::dec(x_578);
lean::inc(x_1);
x_722 = l_lean_elaborator_simple__binders__to__pexpr(x_547, x_1, x_718);
if (lean::obj_tag(x_722) == 0)
{
obj* x_733; obj* x_736; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_577);
lean::dec(x_716);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_527);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
x_733 = lean::cnstr_get(x_722, 0);
lean::inc(x_733);
lean::dec(x_722);
if (lean::is_scalar(x_570)) {
 x_736 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_736 = x_570;
 lean::cnstr_set_tag(x_570, 0);
}
lean::cnstr_set(x_736, 0, x_733);
x_5 = x_736;
goto lbl_6;
}
else
{
obj* x_737; obj* x_740; obj* x_742; obj* x_745; obj* x_746; obj* x_749; obj* x_750; uint8 x_751; obj* x_754; obj* x_755; 
x_737 = lean::cnstr_get(x_722, 0);
lean::inc(x_737);
lean::dec(x_722);
x_740 = lean::cnstr_get(x_737, 0);
lean::inc(x_740);
x_742 = lean::cnstr_get(x_737, 1);
lean::inc(x_742);
lean::dec(x_737);
x_745 = l_lean_elaborator_names__to__pexpr(x_577);
x_746 = lean::cnstr_get(x_519, 0);
lean::inc(x_746);
lean::dec(x_519);
x_749 = l_lean_elaborator_mangle__ident(x_746);
x_750 = l_lean_elaborator_dummy;
x_751 = 0;
lean::inc(x_750);
lean::inc(x_749);
x_754 = lean_expr_local(x_749, x_749, x_750, x_751);
if (lean::obj_tag(x_523) == 0)
{
lean::dec(x_523);
x_755 = x_576;
goto lbl_756;
}
else
{
obj* x_758; obj* x_761; 
x_758 = lean::cnstr_get(x_523, 0);
lean::inc(x_758);
lean::dec(x_523);
x_761 = lean::cnstr_get(x_758, 1);
lean::inc(x_761);
lean::dec(x_758);
x_755 = x_761;
goto lbl_756;
}
lbl_756:
{
obj* x_765; 
lean::inc(x_1);
x_765 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_755, x_1, x_742);
if (lean::obj_tag(x_765) == 0)
{
obj* x_776; obj* x_779; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_716);
lean::dec(x_745);
lean::dec(x_754);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_740);
lean::dec(x_527);
lean::dec(x_525);
x_776 = lean::cnstr_get(x_765, 0);
lean::inc(x_776);
lean::dec(x_765);
if (lean::is_scalar(x_570)) {
 x_779 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_779 = x_570;
 lean::cnstr_set_tag(x_570, 0);
}
lean::cnstr_set(x_779, 0, x_776);
x_5 = x_779;
goto lbl_6;
}
else
{
obj* x_780; obj* x_783; obj* x_785; obj* x_788; obj* x_790; obj* x_793; obj* x_794; 
x_780 = lean::cnstr_get(x_765, 0);
lean::inc(x_780);
lean::dec(x_765);
x_783 = lean::cnstr_get(x_780, 0);
lean::inc(x_783);
x_785 = lean::cnstr_get(x_780, 1);
lean::inc(x_785);
lean::dec(x_780);
x_788 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_788);
x_790 = l_lean_expr_mk__capp(x_788, x_783);
lean::inc(x_1);
lean::inc(x_0);
x_793 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_527, x_1, x_785);
if (lean::obj_tag(x_525) == 0)
{
obj* x_796; 
x_796 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
lean::inc(x_796);
x_794 = x_796;
goto lbl_795;
}
else
{
obj* x_798; obj* x_800; obj* x_803; 
x_798 = lean::cnstr_get(x_525, 0);
lean::inc(x_798);
x_800 = lean::cnstr_get(x_798, 0);
lean::inc(x_800);
lean::dec(x_798);
x_803 = l_lean_elaborator_mangle__ident(x_800);
x_794 = x_803;
goto lbl_795;
}
lbl_795:
{
obj* x_806; 
lean::inc(x_750);
lean::inc(x_794);
x_806 = lean_expr_local(x_794, x_794, x_750, x_751);
if (lean::obj_tag(x_525) == 0)
{
lean::dec(x_525);
if (lean::obj_tag(x_793) == 0)
{
obj* x_818; obj* x_821; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_716);
lean::dec(x_745);
lean::dec(x_754);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_790);
lean::dec(x_740);
lean::dec(x_806);
x_818 = lean::cnstr_get(x_793, 0);
lean::inc(x_818);
lean::dec(x_793);
if (lean::is_scalar(x_570)) {
 x_821 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_821 = x_570;
 lean::cnstr_set_tag(x_570, 0);
}
lean::cnstr_set(x_821, 0, x_818);
x_5 = x_821;
goto lbl_6;
}
else
{
obj* x_823; obj* x_826; obj* x_828; obj* x_832; obj* x_833; obj* x_834; obj* x_836; obj* x_837; obj* x_838; obj* x_839; obj* x_840; obj* x_841; obj* x_842; obj* x_843; obj* x_845; obj* x_846; obj* x_848; obj* x_849; 
lean::dec(x_570);
x_823 = lean::cnstr_get(x_793, 0);
lean::inc(x_823);
lean::dec(x_793);
x_826 = lean::cnstr_get(x_823, 0);
lean::inc(x_826);
x_828 = lean::cnstr_get(x_823, 1);
lean::inc(x_828);
lean::dec(x_823);
lean::inc(x_788);
x_832 = l_lean_expr_mk__capp(x_788, x_826);
x_833 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_833, 0, x_832);
lean::cnstr_set(x_833, 1, x_576);
x_834 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
lean::inc(x_834);
x_836 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_836, 0, x_834);
lean::cnstr_set(x_836, 1, x_833);
x_837 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_837, 0, x_806);
lean::cnstr_set(x_837, 1, x_836);
x_838 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_838, 0, x_716);
lean::cnstr_set(x_838, 1, x_837);
x_839 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_839, 0, x_790);
lean::cnstr_set(x_839, 1, x_838);
x_840 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_840, 0, x_740);
lean::cnstr_set(x_840, 1, x_839);
x_841 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_841, 0, x_754);
lean::cnstr_set(x_841, 1, x_840);
x_842 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_842, 0, x_745);
lean::cnstr_set(x_842, 1, x_841);
x_843 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_843, 0, x_571);
lean::cnstr_set(x_843, 1, x_842);
lean::inc(x_788);
x_845 = l_lean_expr_mk__capp(x_788, x_843);
x_846 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
lean::inc(x_846);
x_848 = lean_expr_mk_mdata(x_846, x_845);
x_849 = l_lean_elaborator_old__elab__command(x_0, x_848, x_1, x_828);
x_5 = x_849;
goto lbl_6;
}
}
else
{
obj* x_850; 
x_850 = lean::cnstr_get(x_525, 0);
lean::inc(x_850);
lean::dec(x_525);
if (lean::obj_tag(x_793) == 0)
{
obj* x_864; obj* x_867; 
lean::dec(x_576);
lean::dec(x_571);
lean::dec(x_716);
lean::dec(x_745);
lean::dec(x_754);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_850);
lean::dec(x_790);
lean::dec(x_740);
lean::dec(x_806);
x_864 = lean::cnstr_get(x_793, 0);
lean::inc(x_864);
lean::dec(x_793);
if (lean::is_scalar(x_570)) {
 x_867 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_867 = x_570;
 lean::cnstr_set_tag(x_570, 0);
}
lean::cnstr_set(x_867, 0, x_864);
x_5 = x_867;
goto lbl_6;
}
else
{
obj* x_869; obj* x_872; obj* x_874; obj* x_877; obj* x_880; obj* x_882; obj* x_883; obj* x_884; obj* x_885; obj* x_886; obj* x_887; obj* x_888; obj* x_889; obj* x_890; obj* x_891; obj* x_893; obj* x_894; obj* x_896; obj* x_897; 
lean::dec(x_570);
x_869 = lean::cnstr_get(x_793, 0);
lean::inc(x_869);
lean::dec(x_793);
x_872 = lean::cnstr_get(x_869, 0);
lean::inc(x_872);
x_874 = lean::cnstr_get(x_869, 1);
lean::inc(x_874);
lean::dec(x_869);
x_877 = lean::cnstr_get(x_850, 1);
lean::inc(x_877);
lean::dec(x_850);
x_880 = l_lean_elaborator_infer__mod__to__pexpr(x_877);
lean::inc(x_788);
x_882 = l_lean_expr_mk__capp(x_788, x_872);
x_883 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_883, 0, x_882);
lean::cnstr_set(x_883, 1, x_576);
x_884 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_884, 0, x_880);
lean::cnstr_set(x_884, 1, x_883);
x_885 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_885, 0, x_806);
lean::cnstr_set(x_885, 1, x_884);
x_886 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_886, 0, x_716);
lean::cnstr_set(x_886, 1, x_885);
x_887 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_887, 0, x_790);
lean::cnstr_set(x_887, 1, x_886);
x_888 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_888, 0, x_740);
lean::cnstr_set(x_888, 1, x_887);
x_889 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_889, 0, x_754);
lean::cnstr_set(x_889, 1, x_888);
x_890 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_890, 0, x_745);
lean::cnstr_set(x_890, 1, x_889);
x_891 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_891, 0, x_571);
lean::cnstr_set(x_891, 1, x_890);
lean::inc(x_788);
x_893 = l_lean_expr_mk__capp(x_788, x_891);
x_894 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
lean::inc(x_894);
x_896 = lean_expr_mk_mdata(x_894, x_893);
x_897 = l_lean_elaborator_old__elab__command(x_0, x_896, x_1, x_874);
x_5 = x_897;
goto lbl_6;
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
else
{
obj* x_906; obj* x_908; 
lean::dec(x_11);
lean::dec(x_527);
lean::dec(x_521);
lean::dec(x_525);
lean::dec(x_519);
lean::dec(x_523);
lean::dec(x_517);
lean::dec(x_515);
x_906 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_906);
x_908 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_906, x_1, x_2);
x_5 = x_908;
goto lbl_6;
}
}
}
lbl_6:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_910; obj* x_912; obj* x_913; 
lean::dec(x_3);
x_910 = lean::cnstr_get(x_5, 0);
lean::inc(x_910);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_912 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_912 = x_5;
}
if (lean::is_scalar(x_912)) {
 x_913 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_913 = x_912;
}
lean::cnstr_set(x_913, 0, x_910);
return x_913;
}
else
{
obj* x_914; obj* x_916; obj* x_917; obj* x_919; obj* x_920; obj* x_922; obj* x_924; obj* x_926; obj* x_928; obj* x_930; obj* x_932; obj* x_934; obj* x_936; obj* x_938; obj* x_941; obj* x_942; obj* x_943; obj* x_944; 
x_914 = lean::cnstr_get(x_5, 0);
lean::inc(x_914);
if (lean::is_shared(x_5)) {
 lean::dec(x_5);
 x_916 = lean::box(0);
} else {
 lean::cnstr_release(x_5, 0);
 x_916 = x_5;
}
x_917 = lean::cnstr_get(x_914, 1);
lean::inc(x_917);
if (lean::is_shared(x_914)) {
 lean::dec(x_914);
 x_919 = lean::box(0);
} else {
 lean::cnstr_release(x_914, 0);
 lean::cnstr_release(x_914, 1);
 x_919 = x_914;
}
x_920 = lean::cnstr_get(x_917, 0);
lean::inc(x_920);
x_922 = lean::cnstr_get(x_917, 1);
lean::inc(x_922);
x_924 = lean::cnstr_get(x_917, 2);
lean::inc(x_924);
x_926 = lean::cnstr_get(x_917, 3);
lean::inc(x_926);
x_928 = lean::cnstr_get(x_917, 5);
lean::inc(x_928);
x_930 = lean::cnstr_get(x_917, 6);
lean::inc(x_930);
x_932 = lean::cnstr_get(x_917, 7);
lean::inc(x_932);
x_934 = lean::cnstr_get(x_917, 8);
lean::inc(x_934);
x_936 = lean::cnstr_get(x_917, 9);
lean::inc(x_936);
x_938 = lean::cnstr_get(x_917, 10);
lean::inc(x_938);
lean::dec(x_917);
x_941 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_941, 0, x_920);
lean::cnstr_set(x_941, 1, x_922);
lean::cnstr_set(x_941, 2, x_924);
lean::cnstr_set(x_941, 3, x_926);
lean::cnstr_set(x_941, 4, x_3);
lean::cnstr_set(x_941, 5, x_928);
lean::cnstr_set(x_941, 6, x_930);
lean::cnstr_set(x_941, 7, x_932);
lean::cnstr_set(x_941, 8, x_934);
lean::cnstr_set(x_941, 9, x_936);
lean::cnstr_set(x_941, 10, x_938);
x_942 = lean::box(0);
if (lean::is_scalar(x_919)) {
 x_943 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_943 = x_919;
}
lean::cnstr_set(x_943, 0, x_942);
lean::cnstr_set(x_943, 1, x_941);
if (lean::is_scalar(x_916)) {
 x_944 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_944 = x_916;
}
lean::cnstr_set(x_944, 0, x_943);
return x_944;
}
}
}
}
obj* l_lean_elaborator_declaration_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_21; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_17);
lean::dec(x_11);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_8);
lean::cnstr_set(x_21, 1, x_16);
lean::cnstr_set(x_21, 2, x_18);
return x_21;
}
}
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; uint8 x_29; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_10 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_10 = x_0;
}
lean::inc(x_6);
x_14 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_6);
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_19 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 x_19 = x_14;
}
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_17, 1);
lean::inc(x_22);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_24 = x_17;
}
x_27 = l_lean_expander_binding__annotation__update;
lean::inc(x_27);
x_29 = l_lean_parser_syntax_is__of__kind___main(x_27, x_22);
if (x_29 == 0)
{
uint8 x_33; obj* x_34; obj* x_35; 
lean::dec(x_15);
lean::dec(x_19);
lean::dec(x_20);
x_33 = 1;
x_34 = lean::box(x_33);
if (lean::is_scalar(x_24)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_24;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_2);
x_11 = x_35;
goto lbl_12;
}
else
{
obj* x_37; 
lean::dec(x_24);
x_37 = lean::box(0);
x_25 = x_37;
goto lbl_26;
}
lbl_12:
{
obj* x_38; obj* x_40; obj* x_42; obj* x_43; 
x_38 = lean::cnstr_get(x_11, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_11, 1);
lean::inc(x_40);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_42 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 x_42 = x_11;
}
x_43 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_8, x_1, x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_42);
lean::dec(x_38);
x_48 = lean::cnstr_get(x_43, 0);
lean::inc(x_48);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_50 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_50 = x_43;
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_48);
return x_51;
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_57; uint8 x_60; 
x_52 = lean::cnstr_get(x_43, 0);
lean::inc(x_52);
if (lean::is_shared(x_43)) {
 lean::dec(x_43);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_43, 0);
 x_54 = x_43;
}
x_55 = lean::cnstr_get(x_52, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_52, 1);
lean::inc(x_57);
lean::dec(x_52);
x_60 = lean::unbox(x_38);
lean::dec(x_38);
if (x_60 == 0)
{
obj* x_64; obj* x_65; 
lean::dec(x_6);
lean::dec(x_10);
if (lean::is_scalar(x_42)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_42;
}
lean::cnstr_set(x_64, 0, x_55);
lean::cnstr_set(x_64, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_54;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
else
{
obj* x_66; obj* x_67; obj* x_68; 
if (lean::is_scalar(x_10)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_10;
}
lean::cnstr_set(x_66, 0, x_6);
lean::cnstr_set(x_66, 1, x_55);
if (lean::is_scalar(x_42)) {
 x_67 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_67 = x_42;
}
lean::cnstr_set(x_67, 0, x_66);
lean::cnstr_set(x_67, 1, x_57);
if (lean::is_scalar(x_54)) {
 x_68 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_68 = x_54;
}
lean::cnstr_set(x_68, 0, x_67);
return x_68;
}
}
}
lbl_26:
{
obj* x_70; obj* x_71; obj* x_73; obj* x_77; 
lean::dec(x_25);
x_70 = l_lean_elaborator_mangle__ident(x_20);
x_71 = lean::cnstr_get(x_2, 4);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_71, 2);
lean::inc(x_73);
lean::inc(x_70);
lean::inc(x_73);
x_77 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_73, x_70);
if (lean::obj_tag(x_77) == 0)
{
obj* x_82; obj* x_83; obj* x_86; obj* x_87; obj* x_90; obj* x_91; obj* x_92; obj* x_95; 
lean::dec(x_15);
lean::dec(x_71);
lean::dec(x_73);
lean::dec(x_77);
x_82 = lean::box(0);
x_83 = l_lean_name_to__string___closed__1;
lean::inc(x_70);
lean::inc(x_83);
x_86 = l_lean_name_to__string__with__sep___main(x_83, x_70);
x_87 = l_lean_parser_substring_of__string(x_86);
lean::inc(x_82);
lean::inc(x_82);
x_90 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_90, 0, x_82);
lean::cnstr_set(x_90, 1, x_87);
lean::cnstr_set(x_90, 2, x_70);
lean::cnstr_set(x_90, 3, x_82);
lean::cnstr_set(x_90, 4, x_82);
x_91 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_91, 0, x_90);
x_92 = l_string_join___closed__1;
lean::inc(x_1);
lean::inc(x_92);
x_95 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_91, x_92, x_1, x_2);
if (lean::obj_tag(x_95) == 0)
{
obj* x_101; obj* x_103; obj* x_104; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_8);
lean::dec(x_19);
x_101 = lean::cnstr_get(x_95, 0);
lean::inc(x_101);
if (lean::is_shared(x_95)) {
 lean::dec(x_95);
 x_103 = lean::box(0);
} else {
 lean::cnstr_release(x_95, 0);
 x_103 = x_95;
}
if (lean::is_scalar(x_103)) {
 x_104 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_104 = x_103;
}
lean::cnstr_set(x_104, 0, x_101);
return x_104;
}
else
{
obj* x_105; obj* x_108; uint8 x_111; obj* x_112; obj* x_113; 
x_105 = lean::cnstr_get(x_95, 0);
lean::inc(x_105);
lean::dec(x_95);
x_108 = lean::cnstr_get(x_105, 1);
lean::inc(x_108);
lean::dec(x_105);
x_111 = 0;
x_112 = lean::box(x_111);
if (lean::is_scalar(x_19)) {
 x_113 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_113 = x_19;
}
lean::cnstr_set(x_113, 0, x_112);
lean::cnstr_set(x_113, 1, x_108);
x_11 = x_113;
goto lbl_12;
}
}
else
{
obj* x_114; obj* x_117; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_137; uint8 x_138; obj* x_140; obj* x_141; obj* x_142; obj* x_144; obj* x_146; obj* x_148; obj* x_151; obj* x_152; obj* x_154; obj* x_156; obj* x_158; obj* x_160; obj* x_162; obj* x_165; uint8 x_166; obj* x_167; obj* x_168; 
x_114 = lean::cnstr_get(x_77, 0);
lean::inc(x_114);
lean::dec(x_77);
x_117 = lean::cnstr_get(x_114, 1);
lean::inc(x_117);
lean::dec(x_114);
x_120 = lean::cnstr_get(x_2, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_2, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_2, 2);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_2, 3);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_71, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_71, 1);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_117, 0);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_117, 1);
lean::inc(x_134);
lean::dec(x_117);
x_137 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_137, 0, x_132);
lean::cnstr_set(x_137, 1, x_134);
x_138 = lean::unbox(x_15);
lean::dec(x_15);
lean::cnstr_set_scalar(x_137, sizeof(void*)*2, x_138);
x_140 = x_137;
x_141 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(x_73, x_70, x_140);
x_142 = lean::cnstr_get(x_71, 3);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_71, 4);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_71, 5);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_71, 6);
lean::inc(x_148);
lean::dec(x_71);
x_151 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_151, 0, x_128);
lean::cnstr_set(x_151, 1, x_130);
lean::cnstr_set(x_151, 2, x_141);
lean::cnstr_set(x_151, 3, x_142);
lean::cnstr_set(x_151, 4, x_144);
lean::cnstr_set(x_151, 5, x_146);
lean::cnstr_set(x_151, 6, x_148);
x_152 = lean::cnstr_get(x_2, 5);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_2, 6);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_2, 7);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_2, 8);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_2, 9);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_2, 10);
lean::inc(x_162);
lean::dec(x_2);
x_165 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_165, 0, x_120);
lean::cnstr_set(x_165, 1, x_122);
lean::cnstr_set(x_165, 2, x_124);
lean::cnstr_set(x_165, 3, x_126);
lean::cnstr_set(x_165, 4, x_151);
lean::cnstr_set(x_165, 5, x_152);
lean::cnstr_set(x_165, 6, x_154);
lean::cnstr_set(x_165, 7, x_156);
lean::cnstr_set(x_165, 8, x_158);
lean::cnstr_set(x_165, 9, x_160);
lean::cnstr_set(x_165, 10, x_162);
x_166 = 0;
x_167 = lean::box(x_166);
if (lean::is_scalar(x_19)) {
 x_168 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_168 = x_19;
}
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set(x_168, 1, x_165);
x_11 = x_168;
goto lbl_12;
}
}
}
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("variables.elaborate: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("variables");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_variables_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; 
x_3 = l_lean_parser_command_variables_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_12; obj* x_16; 
lean::dec(x_8);
x_12 = l_lean_elaborator_variables_elaborate___closed__1;
lean::inc(x_1);
lean::inc(x_12);
lean::inc(x_0);
x_16 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_1);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_16, 0);
lean::inc(x_19);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_21 = x_16;
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_32; 
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
if (lean::is_shared(x_16)) {
 lean::dec(x_16);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_16, 0);
 x_25 = x_16;
}
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
lean::inc(x_1);
x_32 = l_lean_elaborator_simple__binders__to__pexpr(x_26, x_1, x_28);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_38; 
lean::dec(x_1);
lean::dec(x_0);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
lean::dec(x_32);
if (lean::is_scalar(x_25)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_25;
 lean::cnstr_set_tag(x_25, 0);
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; obj* x_50; obj* x_51; 
lean::dec(x_25);
x_40 = lean::cnstr_get(x_32, 0);
lean::inc(x_40);
lean::dec(x_32);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = l_lean_elaborator_variables_elaborate___closed__2;
lean::inc(x_48);
x_50 = lean_expr_mk_mdata(x_48, x_43);
x_51 = l_lean_elaborator_old__elab__command(x_0, x_50, x_1, x_45);
return x_51;
}
}
}
else
{
obj* x_52; obj* x_56; 
x_52 = lean::cnstr_get(x_8, 0);
lean::inc(x_52);
lean::dec(x_8);
lean::inc(x_1);
x_56 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_52, x_1, x_2);
if (lean::obj_tag(x_56) == 0)
{
obj* x_59; obj* x_61; obj* x_62; 
lean::dec(x_1);
lean::dec(x_0);
x_59 = lean::cnstr_get(x_56, 0);
lean::inc(x_59);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_61 = x_56;
}
if (lean::is_scalar(x_61)) {
 x_62 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_62 = x_61;
}
lean::cnstr_set(x_62, 0, x_59);
return x_62;
}
else
{
obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_72; 
x_63 = lean::cnstr_get(x_56, 0);
lean::inc(x_63);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_65 = x_56;
}
x_66 = lean::cnstr_get(x_63, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_63, 1);
lean::inc(x_68);
lean::dec(x_63);
lean::inc(x_1);
x_72 = l_lean_elaborator_simple__binders__to__pexpr(x_66, x_1, x_68);
if (lean::obj_tag(x_72) == 0)
{
obj* x_75; obj* x_78; 
lean::dec(x_1);
lean::dec(x_0);
x_75 = lean::cnstr_get(x_72, 0);
lean::inc(x_75);
lean::dec(x_72);
if (lean::is_scalar(x_65)) {
 x_78 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_78 = x_65;
 lean::cnstr_set_tag(x_65, 0);
}
lean::cnstr_set(x_78, 0, x_75);
return x_78;
}
else
{
obj* x_80; obj* x_83; obj* x_85; obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_65);
x_80 = lean::cnstr_get(x_72, 0);
lean::inc(x_80);
lean::dec(x_72);
x_83 = lean::cnstr_get(x_80, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_80, 1);
lean::inc(x_85);
lean::dec(x_80);
x_88 = l_lean_elaborator_variables_elaborate___closed__2;
lean::inc(x_88);
x_90 = lean_expr_mk_mdata(x_88, x_83);
x_91 = l_lean_elaborator_old__elab__command(x_0, x_90, x_1, x_85);
return x_91;
}
}
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_mangle__ident(x_3);
x_9 = lean::box(0);
x_10 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_8, x_9);
x_0 = x_10;
x_1 = x_5;
goto _start;
}
}
}
obj* l_lean_elaborator_include_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_1);
x_4 = l_lean_parser_command_include_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_7, 1);
lean::inc(x_26);
lean::dec(x_7);
x_29 = l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(x_24, x_26);
x_30 = lean::cnstr_get(x_16, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_16, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_29);
lean::cnstr_set(x_37, 4, x_30);
lean::cnstr_set(x_37, 5, x_32);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* _init_l_lean_elaborator_module_header_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not implemented: imports");
return x_0;
}
}
obj* l_lean_elaborator_module_header_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; 
x_3 = l_lean_parser_module_header_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_15; obj* x_17; 
lean::dec(x_10);
lean::dec(x_8);
x_15 = l_lean_elaborator_module_header_elaborate___closed__1;
lean::inc(x_15);
x_17 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_15, x_1, x_2);
return x_17;
}
else
{
lean::dec(x_8);
if (lean::obj_tag(x_10) == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_1);
lean::dec(x_0);
x_22 = lean::box(0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_26; obj* x_28; 
lean::dec(x_10);
x_26 = l_lean_elaborator_module_header_elaborate___closed__1;
lean::inc(x_26);
x_28 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_26, x_1, x_2);
return x_28;
}
}
}
}
obj* l_lean_elaborator_prec__to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::mk_nat_obj(0u);
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_6);
return x_9;
}
}
}
obj* l_lean_elaborator_prec__to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_prec__to__nat___main(x_0);
return x_1;
}
}
obj* _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_tokens: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_12; obj* x_14; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 1);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_9, 3);
lean::inc(x_14);
lean::dec(x_9);
if (lean::obj_tag(x_12) == 0)
{
obj* x_21; 
lean::dec(x_14);
lean::dec(x_6);
lean::dec(x_12);
lean::dec(x_0);
x_21 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
lean::inc(x_21);
return x_21;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; 
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
lean::dec(x_12);
x_26 = lean::cnstr_get(x_0, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_26, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_26, 1);
lean::inc(x_30);
lean::dec(x_26);
x_33 = lean::cnstr_get(x_23, 1);
lean::inc(x_33);
lean::dec(x_23);
x_36 = l_string_trim(x_33);
x_37 = l_lean_elaborator_prec__to__nat___main(x_14);
x_38 = lean::box(0);
lean::inc(x_36);
x_40 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_40, 0, x_36);
lean::cnstr_set(x_40, 1, x_37);
lean::cnstr_set(x_40, 2, x_38);
x_41 = l_lean_parser_trie_insert___rarg(x_30, x_36, x_40);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_28);
lean::cnstr_set(x_42, 1, x_41);
x_43 = lean::cnstr_get(x_0, 1);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_0, 2);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_0, 3);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_0, 4);
lean::inc(x_49);
lean::dec(x_0);
x_52 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_52, 0, x_42);
lean::cnstr_set(x_52, 1, x_43);
lean::cnstr_set(x_52, 2, x_45);
lean::cnstr_set(x_52, 3, x_47);
lean::cnstr_set(x_52, 4, x_49);
x_0 = x_52;
x_1 = x_6;
goto _start;
}
}
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(x_1, x_2);
return x_5;
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_7, 0, x_3);
lean::cnstr_set(x_7, 1, x_6);
return x_7;
}
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binder__ident_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binders_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unimplemented");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_expander_expand__bracketed__binder___main___closed__4;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_8 = x_0;
}
x_13 = lean::cnstr_get(x_4, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
lean::dec(x_13);
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; 
lean::dec(x_15);
lean::dec(x_4);
x_20 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
lean::inc(x_20);
x_9 = x_20;
goto lbl_10;
}
else
{
obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_31; obj* x_32; 
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
lean::dec(x_15);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
x_28 = l_string_trim(x_25);
lean::inc(x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_30, 0, x_28);
x_31 = lean::mk_nat_obj(0u);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_32, 0, x_28);
lean::closure_set(x_32, 1, x_31);
lean::closure_set(x_32, 2, x_30);
x_11 = x_32;
goto lbl_12;
}
lbl_10:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_8);
lean::dec(x_6);
x_35 = lean::cnstr_get(x_9, 0);
lean::inc(x_35);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_37 = x_9;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; 
x_39 = lean::cnstr_get(x_9, 0);
lean::inc(x_39);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_41 = x_9;
}
x_42 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_6);
if (lean::obj_tag(x_42) == 0)
{
obj* x_45; obj* x_48; 
lean::dec(x_8);
lean::dec(x_39);
x_45 = lean::cnstr_get(x_42, 0);
lean::inc(x_45);
lean::dec(x_42);
if (lean::is_scalar(x_41)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_41;
 lean::cnstr_set_tag(x_41, 0);
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_52; obj* x_53; 
x_49 = lean::cnstr_get(x_42, 0);
lean::inc(x_49);
lean::dec(x_42);
if (lean::is_scalar(x_8)) {
 x_52 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_52 = x_8;
}
lean::cnstr_set(x_52, 0, x_39);
lean::cnstr_set(x_52, 1, x_49);
if (lean::is_scalar(x_41)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_41;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
lbl_12:
{
obj* x_54; obj* x_56; 
x_56 = lean::cnstr_get(x_4, 1);
lean::inc(x_56);
lean::dec(x_4);
if (lean::obj_tag(x_56) == 0)
{
obj* x_60; 
lean::dec(x_56);
x_60 = l_lean_expander_no__expansion___closed__1;
lean::inc(x_60);
x_54 = x_60;
goto lbl_55;
}
else
{
obj* x_62; obj* x_64; 
x_62 = lean::cnstr_get(x_56, 0);
lean::inc(x_62);
if (lean::is_shared(x_56)) {
 lean::dec(x_56);
 x_64 = lean::box(0);
} else {
 lean::cnstr_release(x_56, 0);
 x_64 = x_56;
}
switch (lean::obj_tag(x_62)) {
case 0:
{
obj* x_67; 
lean::dec(x_62);
lean::dec(x_64);
x_67 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
lean::inc(x_67);
x_54 = x_67;
goto lbl_55;
}
case 1:
{
obj* x_71; 
lean::dec(x_62);
lean::dec(x_64);
x_71 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
lean::inc(x_71);
x_54 = x_71;
goto lbl_55;
}
default:
{
obj* x_73; obj* x_76; 
x_73 = lean::cnstr_get(x_62, 0);
lean::inc(x_73);
lean::dec(x_62);
x_76 = lean::cnstr_get(x_73, 1);
lean::inc(x_76);
lean::dec(x_73);
if (lean::obj_tag(x_76) == 0)
{
obj* x_81; 
lean::dec(x_64);
lean::dec(x_76);
x_81 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
lean::inc(x_81);
x_54 = x_81;
goto lbl_55;
}
else
{
obj* x_83; obj* x_86; 
x_83 = lean::cnstr_get(x_76, 0);
lean::inc(x_83);
lean::dec(x_76);
x_86 = lean::cnstr_get(x_83, 1);
lean::inc(x_86);
lean::dec(x_83);
switch (lean::obj_tag(x_86)) {
case 0:
{
obj* x_89; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_89 = lean::cnstr_get(x_86, 0);
lean::inc(x_89);
lean::dec(x_86);
x_92 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_89);
x_93 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_93, 0, x_92);
if (lean::is_scalar(x_64)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_64;
}
lean::cnstr_set(x_94, 0, x_93);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_94);
x_54 = x_95;
goto lbl_55;
}
case 1:
{
obj* x_98; 
lean::dec(x_86);
lean::dec(x_64);
x_98 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
lean::inc(x_98);
x_54 = x_98;
goto lbl_55;
}
case 2:
{
obj* x_100; obj* x_103; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_100 = lean::cnstr_get(x_86, 0);
lean::inc(x_100);
lean::dec(x_86);
x_103 = lean::cnstr_get(x_100, 2);
lean::inc(x_103);
lean::dec(x_100);
x_106 = l_lean_elaborator_prec__to__nat___main(x_103);
x_107 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_107, 0, x_106);
if (lean::is_scalar(x_64)) {
 x_108 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_108 = x_64;
}
lean::cnstr_set(x_108, 0, x_107);
x_109 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_109, 0, x_108);
x_54 = x_109;
goto lbl_55;
}
default:
{
obj* x_112; 
lean::dec(x_86);
lean::dec(x_64);
x_112 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
lean::inc(x_112);
x_54 = x_112;
goto lbl_55;
}
}
}
}
}
}
lbl_55:
{
if (lean::obj_tag(x_54) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_11);
x_115 = lean::cnstr_get(x_54, 0);
lean::inc(x_115);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_117 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 x_117 = x_54;
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
x_9 = x_118;
goto lbl_10;
}
else
{
obj* x_119; obj* x_121; obj* x_122; obj* x_123; obj* x_124; 
x_119 = lean::cnstr_get(x_54, 0);
lean::inc(x_119);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_121 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 x_121 = x_54;
}
x_122 = l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(x_119);
x_123 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_123, 0, x_11);
lean::cnstr_set(x_123, 1, x_122);
if (lean::is_scalar(x_121)) {
 x_124 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_124 = x_121;
}
lean::cnstr_set(x_124, 0, x_123);
x_9 = x_124;
goto lbl_10;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_5);
if (lean::is_scalar(x_7)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_7;
}
lean::cnstr_set(x_9, 0, x_3);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_8; 
lean::dec(x_1);
x_8 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_8, 0, x_3);
x_9 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_7 = x_0;
}
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_8, 0, x_3);
x_9 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_5);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_get__leading), 6, 0);
return x_0;
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_5);
x_8 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_8, 0);
lean::inc(x_14);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_16 = x_8;
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; 
x_18 = lean::cnstr_get(x_8, 0);
lean::inc(x_18);
if (lean::is_shared(x_8)) {
 lean::dec(x_8);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_8, 0);
 x_20 = x_8;
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_30; 
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_30 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
lean::inc(x_30);
return x_30;
}
else
{
obj* x_32; obj* x_35; obj* x_38; 
x_32 = lean::cnstr_get(x_5, 0);
lean::inc(x_32);
lean::dec(x_5);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
lean::dec(x_32);
x_38 = lean::cnstr_get(x_35, 1);
lean::inc(x_38);
lean::dec(x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_48; 
lean::dec(x_20);
lean::dec(x_18);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_38);
x_48 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
lean::inc(x_48);
return x_48;
}
else
{
obj* x_50; obj* x_53; obj* x_56; 
x_50 = lean::cnstr_get(x_38, 0);
lean::inc(x_50);
lean::dec(x_38);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
lean::dec(x_50);
x_56 = l_string_trim(x_53);
x_21 = x_56;
goto lbl_22;
}
}
lbl_22:
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_18);
x_58 = l_list_join___main___rarg(x_57);
x_59 = lean::cnstr_get(x_1, 0);
lean::inc(x_59);
lean::dec(x_1);
if (lean::obj_tag(x_59) == 0)
{
obj* x_63; 
lean::dec(x_59);
x_63 = lean::cnstr_get(x_3, 0);
lean::inc(x_63);
lean::dec(x_3);
if (lean::obj_tag(x_63) == 0)
{
obj* x_67; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_79; obj* x_82; obj* x_83; 
lean::dec(x_63);
x_67 = lean::cnstr_get(x_2, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_2, 1);
lean::inc(x_69);
x_71 = lean::box(0);
x_72 = lean_name_mk_string(x_71, x_21);
x_73 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_73, 0, x_0);
lean::closure_set(x_73, 1, x_58);
x_74 = l_lean_parser_token__map_insert___rarg(x_69, x_72, x_73);
x_75 = lean::cnstr_get(x_2, 2);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_2, 3);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_2, 4);
lean::inc(x_79);
lean::dec(x_2);
x_82 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_82, 0, x_67);
lean::cnstr_set(x_82, 1, x_74);
lean::cnstr_set(x_82, 2, x_75);
lean::cnstr_set(x_82, 3, x_77);
lean::cnstr_set(x_82, 4, x_79);
if (lean::is_scalar(x_20)) {
 x_83 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_83 = x_20;
}
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
else
{
obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_101; obj* x_104; obj* x_105; 
lean::dec(x_63);
x_85 = lean::cnstr_get(x_2, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_2, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_2, 2);
lean::inc(x_89);
x_91 = lean::box(0);
x_92 = lean_name_mk_string(x_91, x_21);
x_93 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_58);
x_94 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
lean::inc(x_94);
x_96 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_96, 0, x_94);
lean::cnstr_set(x_96, 1, x_93);
x_97 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_97, 0, x_0);
lean::closure_set(x_97, 1, x_96);
x_98 = l_lean_parser_token__map_insert___rarg(x_89, x_92, x_97);
x_99 = lean::cnstr_get(x_2, 3);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_2, 4);
lean::inc(x_101);
lean::dec(x_2);
x_104 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_104, 0, x_85);
lean::cnstr_set(x_104, 1, x_87);
lean::cnstr_set(x_104, 2, x_98);
lean::cnstr_set(x_104, 3, x_99);
lean::cnstr_set(x_104, 4, x_101);
if (lean::is_scalar(x_20)) {
 x_105 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_105 = x_20;
}
lean::cnstr_set(x_105, 0, x_104);
return x_105;
}
}
else
{
obj* x_107; 
lean::dec(x_59);
x_107 = lean::cnstr_get(x_3, 0);
lean::inc(x_107);
lean::dec(x_3);
if (lean::obj_tag(x_107) == 0)
{
obj* x_111; obj* x_113; obj* x_115; obj* x_117; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_126; obj* x_127; 
lean::dec(x_107);
x_111 = lean::cnstr_get(x_2, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_2, 1);
lean::inc(x_113);
x_115 = lean::cnstr_get(x_2, 2);
lean::inc(x_115);
x_117 = lean::cnstr_get(x_2, 3);
lean::inc(x_117);
x_119 = lean::box(0);
x_120 = lean_name_mk_string(x_119, x_21);
x_121 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_121, 0, x_0);
lean::closure_set(x_121, 1, x_58);
x_122 = l_lean_parser_token__map_insert___rarg(x_117, x_120, x_121);
x_123 = lean::cnstr_get(x_2, 4);
lean::inc(x_123);
lean::dec(x_2);
x_126 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_126, 0, x_111);
lean::cnstr_set(x_126, 1, x_113);
lean::cnstr_set(x_126, 2, x_115);
lean::cnstr_set(x_126, 3, x_122);
lean::cnstr_set(x_126, 4, x_123);
if (lean::is_scalar(x_20)) {
 x_127 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_127 = x_20;
}
lean::cnstr_set(x_127, 0, x_126);
return x_127;
}
else
{
obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; 
lean::dec(x_107);
x_129 = lean::cnstr_get(x_2, 0);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_2, 1);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_2, 2);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_2, 3);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_2, 4);
lean::inc(x_137);
lean::dec(x_2);
x_140 = lean::box(0);
x_141 = lean_name_mk_string(x_140, x_21);
x_142 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_58);
x_143 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
lean::inc(x_143);
x_145 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_145, 0, x_143);
lean::cnstr_set(x_145, 1, x_142);
x_146 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_146, 0, x_0);
lean::closure_set(x_146, 1, x_145);
x_147 = l_lean_parser_token__map_insert___rarg(x_137, x_141, x_146);
x_148 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_148, 0, x_129);
lean::cnstr_set(x_148, 1, x_131);
lean::cnstr_set(x_148, 2, x_133);
lean::cnstr_set(x_148, 3, x_135);
lean::cnstr_set(x_148, 4, x_147);
if (lean::is_scalar(x_20)) {
 x_149 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_149 = x_20;
}
lean::cnstr_set(x_149, 0, x_148);
return x_149;
}
}
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
x_15 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_13, x_0);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_24; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 x_18 = x_15;
}
x_19 = l_lean_parser_command_reserve__notation_has__view;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
x_22 = lean::apply_1(x_20, x_8);
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_22, x_16, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_30; 
lean::dec(x_10);
lean::dec(x_2);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
lean::dec(x_24);
if (lean::is_scalar(x_18)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_18;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_32; obj* x_35; obj* x_37; 
lean::dec(x_18);
x_32 = lean::cnstr_get(x_24, 0);
lean::inc(x_32);
lean::dec(x_24);
x_35 = lean::cnstr_get(x_32, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 1);
lean::inc(x_37);
lean::dec(x_32);
x_0 = x_35;
x_1 = x_10;
x_3 = x_37;
goto _start;
}
}
else
{
obj* x_42; 
lean::dec(x_8);
x_42 = lean::cnstr_get(x_15, 0);
lean::inc(x_42);
lean::dec(x_15);
x_0 = x_42;
x_1 = x_10;
goto _start;
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 2);
lean::inc(x_15);
x_17 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_15, x_0);
if (lean::obj_tag(x_17) == 0)
{
obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_27; 
lean::dec(x_8);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_21 = x_17;
}
x_22 = l_lean_parser_command_notation_has__view;
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
x_25 = lean::apply_1(x_23, x_13);
lean::inc(x_2);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_25, x_19, x_2, x_3);
if (lean::obj_tag(x_27) == 0)
{
obj* x_30; obj* x_33; 
lean::dec(x_10);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
lean::dec(x_27);
if (lean::is_scalar(x_21)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_21;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_35; obj* x_38; obj* x_40; 
lean::dec(x_21);
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
lean::dec(x_27);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_0 = x_38;
x_1 = x_10;
x_3 = x_40;
goto _start;
}
}
else
{
obj* x_44; obj* x_46; obj* x_47; obj* x_51; 
x_44 = lean::cnstr_get(x_17, 0);
lean::inc(x_44);
if (lean::is_shared(x_17)) {
 lean::dec(x_17);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_17, 0);
 x_46 = x_17;
}
x_47 = lean::cnstr_get(x_8, 0);
lean::inc(x_47);
lean::dec(x_8);
lean::inc(x_13);
x_51 = l_lean_elaborator_command__parser__config_register__notation__parser(x_47, x_13, x_44);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; obj* x_55; obj* x_56; obj* x_58; obj* x_60; 
x_52 = lean::cnstr_get(x_51, 0);
lean::inc(x_52);
lean::dec(x_51);
x_55 = l_lean_parser_command_notation_has__view;
x_56 = lean::cnstr_get(x_55, 1);
lean::inc(x_56);
x_58 = lean::apply_1(x_56, x_13);
lean::inc(x_2);
x_60 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_58, x_52, x_2, x_3);
if (lean::obj_tag(x_60) == 0)
{
obj* x_63; obj* x_66; 
lean::dec(x_10);
lean::dec(x_2);
x_63 = lean::cnstr_get(x_60, 0);
lean::inc(x_63);
lean::dec(x_60);
if (lean::is_scalar(x_46)) {
 x_66 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_66 = x_46;
 lean::cnstr_set_tag(x_46, 0);
}
lean::cnstr_set(x_66, 0, x_63);
return x_66;
}
else
{
obj* x_68; obj* x_71; obj* x_73; 
lean::dec(x_46);
x_68 = lean::cnstr_get(x_60, 0);
lean::inc(x_68);
lean::dec(x_60);
x_71 = lean::cnstr_get(x_68, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 1);
lean::inc(x_73);
lean::dec(x_68);
x_0 = x_71;
x_1 = x_10;
x_3 = x_73;
goto _start;
}
}
else
{
obj* x_79; 
lean::dec(x_13);
lean::dec(x_46);
x_79 = lean::cnstr_get(x_51, 0);
lean::inc(x_79);
lean::dec(x_51);
x_0 = x_79;
x_1 = x_10;
goto _start;
}
}
}
}
}
obj* l_lean_elaborator_update__parser__config(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_6);
x_11 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(x_4, x_6, x_0, x_1);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_18 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_18 = x_11;
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_35; obj* x_36; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_22 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_22 = x_11;
}
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
if (lean::is_shared(x_20)) {
 lean::dec(x_20);
 x_27 = lean::box(0);
} else {
 lean::cnstr_release(x_20, 0);
 lean::cnstr_release(x_20, 1);
 x_27 = x_20;
}
x_28 = lean::cnstr_get(x_1, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_1, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::inc(x_28);
x_35 = l_list_append___rarg(x_28, x_32);
x_36 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(x_23, x_35, x_0, x_25);
if (lean::obj_tag(x_36) == 0)
{
obj* x_43; obj* x_46; 
lean::dec(x_27);
lean::dec(x_28);
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_30);
x_43 = lean::cnstr_get(x_36, 0);
lean::inc(x_43);
lean::dec(x_36);
if (lean::is_scalar(x_22)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_22;
 lean::cnstr_set_tag(x_22, 0);
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_50; obj* x_53; obj* x_55; obj* x_57; obj* x_59; obj* x_62; obj* x_63; obj* x_65; obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
x_47 = lean::cnstr_get(x_36, 0);
lean::inc(x_47);
lean::dec(x_36);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
lean::dec(x_47);
x_53 = lean::cnstr_get(x_1, 2);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_1, 3);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_1, 5);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_2, 1);
lean::inc(x_59);
lean::dec(x_2);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_50);
lean::cnstr_set(x_62, 1, x_59);
x_63 = lean::cnstr_get(x_1, 7);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_1, 8);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_1, 9);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_1, 10);
lean::inc(x_69);
lean::dec(x_1);
x_72 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_72, 0, x_6);
lean::cnstr_set(x_72, 1, x_28);
lean::cnstr_set(x_72, 2, x_53);
lean::cnstr_set(x_72, 3, x_55);
lean::cnstr_set(x_72, 4, x_30);
lean::cnstr_set(x_72, 5, x_57);
lean::cnstr_set(x_72, 6, x_62);
lean::cnstr_set(x_72, 7, x_63);
lean::cnstr_set(x_72, 8, x_65);
lean::cnstr_set(x_72, 9, x_67);
lean::cnstr_set(x_72, 10, x_69);
x_73 = lean::box(0);
if (lean::is_scalar(x_27)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_27;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_72);
if (lean::is_scalar(x_22)) {
 x_75 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_75 = x_22;
}
lean::cnstr_set(x_75, 0, x_74);
return x_75;
}
}
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_2 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_2 = x_1;
}
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 6);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 7);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 8);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 9);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 10);
lean::inc(x_21);
lean::dec(x_0);
x_24 = l_lean_message__log_empty;
lean::inc(x_24);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_3);
lean::cnstr_set(x_26, 1, x_5);
lean::cnstr_set(x_26, 2, x_7);
lean::cnstr_set(x_26, 3, x_9);
lean::cnstr_set(x_26, 4, x_11);
lean::cnstr_set(x_26, 5, x_24);
lean::cnstr_set(x_26, 6, x_13);
lean::cnstr_set(x_26, 7, x_15);
lean::cnstr_set(x_26, 8, x_17);
lean::cnstr_set(x_26, 9, x_19);
lean::cnstr_set(x_26, 10, x_21);
x_27 = lean::box(0);
if (lean::is_scalar(x_2)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_2;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
lean::inc(x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module_yield__command___lambda__3), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
lean::inc(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_11, 0, x_3);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__1), 2, 1);
lean::closure_set(x_14, 0, x_1);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_16, 0, x_13);
lean::closure_set(x_16, 1, x_15);
return x_16;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = l_lean_elaborator_yield__to__outside___rarg___closed__1;
lean::inc(x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_5);
return x_7;
}
}
obj* l_lean_elaborator_yield__to__outside(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg), 1, 0);
return x_4;
}
}
obj* _init_l_lean_elaborator_postprocess__notation__spec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_lean_parser_max__prec;
lean::inc(x_5);
x_7 = l_lean_parser_number_view_of__nat(x_5);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_lean_elaborator_postprocess__notation__spec(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::obj_tag(x_1) == 0)
{
if (lean::obj_tag(x_3) == 0)
{
lean::dec(x_1);
lean::dec(x_3);
return x_0;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; 
x_7 = lean::cnstr_get(x_3, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_11 = x_3;
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
if (lean::is_shared(x_7)) {
 lean::dec(x_7);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_16 = x_7;
}
x_17 = lean::cnstr_get(x_12, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_12, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_12, 3);
lean::inc(x_23);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 lean::cnstr_release(x_12, 3);
 x_25 = x_12;
}
if (lean::obj_tag(x_23) == 0)
{
obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_0);
lean::dec(x_23);
x_28 = l_lean_elaborator_postprocess__notation__spec___closed__1;
lean::inc(x_28);
if (lean::is_scalar(x_25)) {
 x_30 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_30 = x_25;
}
lean::cnstr_set(x_30, 0, x_17);
lean::cnstr_set(x_30, 1, x_19);
lean::cnstr_set(x_30, 2, x_21);
lean::cnstr_set(x_30, 3, x_28);
if (lean::is_scalar(x_16)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_16;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_14);
if (lean::is_scalar(x_11)) {
 x_32 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_32 = x_11;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_32);
return x_33;
}
else
{
lean::dec(x_11);
lean::dec(x_17);
lean::dec(x_21);
lean::dec(x_16);
lean::dec(x_19);
lean::dec(x_14);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_23);
lean::dec(x_25);
return x_0;
}
}
}
else
{
lean::dec(x_1);
lean::dec(x_3);
return x_0;
}
}
}
obj* l_lean_elaborator_reserve__notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_14; obj* x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_40; obj* x_41; 
x_3 = l_lean_parser_command_reserve__notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::apply_1(x_4, x_0);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_elaborator_postprocess__notation__spec(x_11);
x_15 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_15, 0, x_7);
lean::cnstr_set(x_15, 1, x_9);
lean::cnstr_set(x_15, 2, x_14);
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_15);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 3);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 4);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 5);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_2, 6);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_2, 7);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_2, 8);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_2, 9);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_2, 10);
lean::inc(x_37);
lean::dec(x_2);
x_40 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_19);
lean::cnstr_set(x_40, 2, x_21);
lean::cnstr_set(x_40, 3, x_23);
lean::cnstr_set(x_40, 4, x_25);
lean::cnstr_set(x_40, 5, x_27);
lean::cnstr_set(x_40, 6, x_29);
lean::cnstr_set(x_40, 7, x_31);
lean::cnstr_set(x_40, 8, x_33);
lean::cnstr_set(x_40, 9, x_35);
lean::cnstr_set(x_40, 10, x_37);
x_41 = l_lean_elaborator_update__parser__config(x_1, x_40);
return x_41;
}
}
uint8 l_lean_elaborator_match__precedence___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
lean::dec(x_1);
x_4 = 0;
return x_4;
}
else
{
uint8 x_6; 
lean::dec(x_1);
x_6 = 1;
return x_6;
}
}
else
{
obj* x_7; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
uint8 x_12; 
lean::dec(x_7);
lean::dec(x_1);
x_12 = 0;
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_20; obj* x_23; uint8 x_24; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_7, 1);
lean::inc(x_16);
lean::dec(x_7);
x_19 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_16);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
x_23 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_20);
x_24 = lean::nat_dec_eq(x_19, x_23);
lean::dec(x_23);
lean::dec(x_19);
if (x_24 == 0)
{
uint8 x_27; 
x_27 = 0;
return x_27;
}
else
{
uint8 x_28; 
x_28 = 1;
return x_28;
}
}
}
}
}
obj* l_lean_elaborator_match__precedence___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_elaborator_match__precedence(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_match__precedence___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1), 1, 0);
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
lean::dec(x_0);
x_2 = l_lean_parser_syntax_reprint__lst___main___closed__1;
lean::inc(x_2);
return x_2;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_20; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_8 = x_0;
}
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
lean::dec(x_4);
x_16 = lean::cnstr_get(x_11, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 3);
lean::inc(x_20);
lean::dec(x_16);
if (lean::obj_tag(x_18) == 0)
{
obj* x_29; 
lean::dec(x_8);
lean::dec(x_20);
lean::dec(x_13);
lean::dec(x_18);
lean::dec(x_11);
lean::dec(x_6);
x_29 = lean::box(0);
return x_29;
}
else
{
obj* x_30; obj* x_32; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_41; 
x_30 = lean::cnstr_get(x_18, 0);
lean::inc(x_30);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_32 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 x_32 = x_18;
}
x_33 = lean::cnstr_get(x_13, 0);
lean::inc(x_33);
x_39 = lean::cnstr_get(x_33, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_33, 3);
lean::inc(x_41);
if (lean::obj_tag(x_39) == 0)
{
obj* x_51; 
lean::dec(x_32);
lean::dec(x_33);
lean::dec(x_20);
lean::dec(x_13);
lean::dec(x_11);
lean::dec(x_30);
lean::dec(x_39);
lean::dec(x_41);
x_51 = lean::box(0);
x_9 = x_51;
goto lbl_10;
}
else
{
obj* x_52; obj* x_55; obj* x_58; obj* x_59; obj* x_62; uint8 x_63; 
x_52 = lean::cnstr_get(x_39, 0);
lean::inc(x_52);
lean::dec(x_39);
x_55 = lean::cnstr_get(x_30, 1);
lean::inc(x_55);
lean::dec(x_30);
x_58 = l_string_trim(x_55);
x_59 = lean::cnstr_get(x_52, 1);
lean::inc(x_59);
lean::dec(x_52);
x_62 = l_string_trim(x_59);
x_63 = lean::string_dec_eq(x_58, x_62);
lean::dec(x_62);
lean::dec(x_58);
if (x_63 == 0)
{
obj* x_72; 
lean::dec(x_32);
lean::dec(x_33);
lean::dec(x_20);
lean::dec(x_13);
lean::dec(x_11);
lean::dec(x_41);
x_72 = lean::box(0);
x_9 = x_72;
goto lbl_10;
}
else
{
uint8 x_73; 
x_73 = l_lean_elaborator_match__precedence___main(x_20, x_41);
if (x_73 == 0)
{
obj* x_78; 
lean::dec(x_32);
lean::dec(x_33);
lean::dec(x_13);
lean::dec(x_11);
x_78 = lean::box(0);
x_9 = x_78;
goto lbl_10;
}
else
{
obj* x_79; 
x_79 = lean::box(0);
x_37 = x_79;
goto lbl_38;
}
}
}
lbl_36:
{
if (lean::obj_tag(x_35) == 0)
{
obj* x_83; 
lean::dec(x_32);
lean::dec(x_33);
lean::dec(x_35);
x_83 = lean::box(0);
x_9 = x_83;
goto lbl_10;
}
else
{
obj* x_84; obj* x_87; obj* x_88; 
x_84 = lean::cnstr_get(x_35, 0);
lean::inc(x_84);
lean::dec(x_35);
x_87 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_87, 0, x_33);
lean::cnstr_set(x_87, 1, x_84);
if (lean::is_scalar(x_32)) {
 x_88 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_88 = x_32;
}
lean::cnstr_set(x_88, 0, x_87);
x_9 = x_88;
goto lbl_10;
}
}
lbl_38:
{
obj* x_90; 
lean::dec(x_37);
x_90 = lean::cnstr_get(x_11, 1);
lean::inc(x_90);
lean::dec(x_11);
if (lean::obj_tag(x_90) == 0)
{
obj* x_94; 
lean::dec(x_90);
x_94 = lean::cnstr_get(x_13, 1);
lean::inc(x_94);
lean::dec(x_13);
if (lean::obj_tag(x_94) == 0)
{
obj* x_97; 
x_97 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_97, 0, x_94);
x_35 = x_97;
goto lbl_36;
}
else
{
obj* x_99; 
lean::dec(x_94);
x_99 = lean::box(0);
x_35 = x_99;
goto lbl_36;
}
}
else
{
obj* x_100; obj* x_102; 
x_100 = lean::cnstr_get(x_90, 0);
lean::inc(x_100);
if (lean::is_shared(x_90)) {
 lean::dec(x_90);
 x_102 = lean::box(0);
} else {
 lean::cnstr_release(x_90, 0);
 x_102 = x_90;
}
switch (lean::obj_tag(x_100)) {
case 0:
{
obj* x_103; obj* x_106; 
x_103 = lean::cnstr_get(x_100, 0);
lean::inc(x_103);
lean::dec(x_100);
x_106 = lean::cnstr_get(x_13, 1);
lean::inc(x_106);
lean::dec(x_13);
if (lean::obj_tag(x_106) == 0)
{
obj* x_112; 
lean::dec(x_102);
lean::dec(x_103);
lean::dec(x_106);
x_112 = lean::box(0);
x_35 = x_112;
goto lbl_36;
}
else
{
obj* x_113; 
x_113 = lean::cnstr_get(x_106, 0);
lean::inc(x_113);
switch (lean::obj_tag(x_113)) {
case 0:
{
obj* x_115; obj* x_118; obj* x_121; uint8 x_124; 
x_115 = lean::cnstr_get(x_113, 0);
lean::inc(x_115);
lean::dec(x_113);
x_118 = lean::cnstr_get(x_103, 1);
lean::inc(x_118);
lean::dec(x_103);
x_121 = lean::cnstr_get(x_115, 1);
lean::inc(x_121);
lean::dec(x_115);
x_124 = l_lean_elaborator_match__precedence___main(x_118, x_121);
if (x_124 == 0)
{
obj* x_127; 
lean::dec(x_102);
lean::dec(x_106);
x_127 = lean::box(0);
x_35 = x_127;
goto lbl_36;
}
else
{
obj* x_128; 
if (lean::is_scalar(x_102)) {
 x_128 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_128 = x_102;
}
lean::cnstr_set(x_128, 0, x_106);
x_35 = x_128;
goto lbl_36;
}
}
case 1:
{
obj* x_133; 
lean::dec(x_102);
lean::dec(x_103);
lean::dec(x_106);
lean::dec(x_113);
x_133 = lean::box(0);
x_35 = x_133;
goto lbl_36;
}
default:
{
obj* x_138; 
lean::dec(x_102);
lean::dec(x_103);
lean::dec(x_106);
lean::dec(x_113);
x_138 = lean::box(0);
x_35 = x_138;
goto lbl_36;
}
}
}
}
case 1:
{
obj* x_139; obj* x_142; 
x_139 = lean::cnstr_get(x_100, 0);
lean::inc(x_139);
lean::dec(x_100);
x_142 = lean::cnstr_get(x_13, 1);
lean::inc(x_142);
lean::dec(x_13);
if (lean::obj_tag(x_142) == 0)
{
obj* x_148; 
lean::dec(x_102);
lean::dec(x_142);
lean::dec(x_139);
x_148 = lean::box(0);
x_35 = x_148;
goto lbl_36;
}
else
{
obj* x_149; 
x_149 = lean::cnstr_get(x_142, 0);
lean::inc(x_149);
switch (lean::obj_tag(x_149)) {
case 0:
{
obj* x_155; 
lean::dec(x_102);
lean::dec(x_142);
lean::dec(x_139);
lean::dec(x_149);
x_155 = lean::box(0);
x_35 = x_155;
goto lbl_36;
}
case 1:
{
obj* x_156; obj* x_159; obj* x_162; uint8 x_165; 
x_156 = lean::cnstr_get(x_149, 0);
lean::inc(x_156);
lean::dec(x_149);
x_159 = lean::cnstr_get(x_139, 1);
lean::inc(x_159);
lean::dec(x_139);
x_162 = lean::cnstr_get(x_156, 1);
lean::inc(x_162);
lean::dec(x_156);
x_165 = l_lean_elaborator_match__precedence___main(x_159, x_162);
if (x_165 == 0)
{
obj* x_168; 
lean::dec(x_102);
lean::dec(x_142);
x_168 = lean::box(0);
x_35 = x_168;
goto lbl_36;
}
else
{
obj* x_169; 
if (lean::is_scalar(x_102)) {
 x_169 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_169 = x_102;
}
lean::cnstr_set(x_169, 0, x_142);
x_35 = x_169;
goto lbl_36;
}
}
default:
{
obj* x_174; 
lean::dec(x_102);
lean::dec(x_142);
lean::dec(x_139);
lean::dec(x_149);
x_174 = lean::box(0);
x_35 = x_174;
goto lbl_36;
}
}
}
}
default:
{
obj* x_175; obj* x_177; obj* x_178; obj* x_180; 
x_175 = lean::cnstr_get(x_100, 0);
lean::inc(x_175);
if (lean::is_shared(x_100)) {
 lean::dec(x_100);
 x_177 = lean::box(0);
} else {
 lean::cnstr_release(x_100, 0);
 x_177 = x_100;
}
x_180 = lean::cnstr_get(x_13, 1);
lean::inc(x_180);
lean::dec(x_13);
if (lean::obj_tag(x_180) == 0)
{
obj* x_187; 
lean::dec(x_102);
lean::dec(x_180);
lean::dec(x_175);
lean::dec(x_177);
x_187 = lean::box(0);
x_35 = x_187;
goto lbl_36;
}
else
{
obj* x_188; obj* x_190; 
x_188 = lean::cnstr_get(x_180, 0);
lean::inc(x_188);
if (lean::is_shared(x_180)) {
 lean::dec(x_180);
 x_190 = lean::box(0);
} else {
 lean::cnstr_release(x_180, 0);
 x_190 = x_180;
}
switch (lean::obj_tag(x_188)) {
case 0:
{
obj* x_196; 
lean::dec(x_102);
lean::dec(x_175);
lean::dec(x_177);
lean::dec(x_190);
lean::dec(x_188);
x_196 = lean::box(0);
x_35 = x_196;
goto lbl_36;
}
case 1:
{
obj* x_202; 
lean::dec(x_102);
lean::dec(x_175);
lean::dec(x_177);
lean::dec(x_190);
lean::dec(x_188);
x_202 = lean::box(0);
x_35 = x_202;
goto lbl_36;
}
default:
{
obj* x_203; obj* x_206; obj* x_208; obj* x_211; 
x_203 = lean::cnstr_get(x_188, 0);
lean::inc(x_203);
lean::dec(x_188);
x_206 = lean::cnstr_get(x_175, 1);
lean::inc(x_206);
x_208 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
lean::inc(x_206);
lean::inc(x_208);
x_211 = l_option_map___rarg(x_208, x_206);
if (lean::obj_tag(x_211) == 0)
{
obj* x_214; obj* x_219; 
lean::dec(x_211);
lean::dec(x_206);
x_214 = lean::cnstr_get(x_203, 1);
lean::inc(x_214);
lean::dec(x_203);
lean::inc(x_214);
lean::inc(x_208);
x_219 = l_option_map___rarg(x_208, x_214);
if (lean::obj_tag(x_219) == 0)
{
obj* x_223; 
lean::dec(x_219);
lean::dec(x_214);
lean::dec(x_190);
x_223 = lean::box(0);
x_178 = x_223;
goto lbl_179;
}
else
{
obj* x_224; 
x_224 = lean::cnstr_get(x_219, 0);
lean::inc(x_224);
lean::dec(x_219);
switch (lean::obj_tag(x_224)) {
case 0:
{
obj* x_228; 
lean::dec(x_224);
if (lean::is_scalar(x_190)) {
 x_228 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_228 = x_190;
}
lean::cnstr_set(x_228, 0, x_214);
x_178 = x_228;
goto lbl_179;
}
case 1:
{
obj* x_232; 
lean::dec(x_224);
lean::dec(x_214);
lean::dec(x_190);
x_232 = lean::box(0);
x_178 = x_232;
goto lbl_179;
}
case 2:
{
obj* x_236; 
lean::dec(x_224);
lean::dec(x_214);
lean::dec(x_190);
x_236 = lean::box(0);
x_178 = x_236;
goto lbl_179;
}
default:
{
obj* x_240; 
lean::dec(x_224);
lean::dec(x_214);
lean::dec(x_190);
x_240 = lean::box(0);
x_178 = x_240;
goto lbl_179;
}
}
}
}
else
{
obj* x_241; 
x_241 = lean::cnstr_get(x_211, 0);
lean::inc(x_241);
lean::dec(x_211);
switch (lean::obj_tag(x_241)) {
case 0:
{
obj* x_244; obj* x_247; obj* x_251; 
x_244 = lean::cnstr_get(x_241, 0);
lean::inc(x_244);
lean::dec(x_241);
x_247 = lean::cnstr_get(x_203, 1);
lean::inc(x_247);
lean::dec(x_203);
lean::inc(x_208);
x_251 = l_option_map___rarg(x_208, x_247);
if (lean::obj_tag(x_251) == 0)
{
obj* x_256; 
lean::dec(x_251);
lean::dec(x_244);
lean::dec(x_190);
lean::dec(x_206);
x_256 = lean::box(0);
x_178 = x_256;
goto lbl_179;
}
else
{
obj* x_257; 
x_257 = lean::cnstr_get(x_251, 0);
lean::inc(x_257);
lean::dec(x_251);
switch (lean::obj_tag(x_257)) {
case 0:
{
obj* x_260; obj* x_263; obj* x_264; uint8 x_265; 
x_260 = lean::cnstr_get(x_257, 0);
lean::inc(x_260);
lean::dec(x_257);
x_263 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_244);
x_264 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_260);
x_265 = lean::nat_dec_eq(x_263, x_264);
lean::dec(x_264);
lean::dec(x_263);
if (x_265 == 0)
{
obj* x_270; 
lean::dec(x_190);
lean::dec(x_206);
x_270 = lean::box(0);
x_178 = x_270;
goto lbl_179;
}
else
{
obj* x_271; 
if (lean::is_scalar(x_190)) {
 x_271 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_271 = x_190;
}
lean::cnstr_set(x_271, 0, x_206);
x_178 = x_271;
goto lbl_179;
}
}
case 1:
{
obj* x_276; 
lean::dec(x_244);
lean::dec(x_257);
lean::dec(x_190);
lean::dec(x_206);
x_276 = lean::box(0);
x_178 = x_276;
goto lbl_179;
}
case 2:
{
obj* x_281; 
lean::dec(x_244);
lean::dec(x_257);
lean::dec(x_190);
lean::dec(x_206);
x_281 = lean::box(0);
x_178 = x_281;
goto lbl_179;
}
default:
{
obj* x_286; 
lean::dec(x_244);
lean::dec(x_257);
lean::dec(x_190);
lean::dec(x_206);
x_286 = lean::box(0);
x_178 = x_286;
goto lbl_179;
}
}
}
}
case 1:
{
obj* x_291; 
lean::dec(x_241);
lean::dec(x_203);
lean::dec(x_190);
lean::dec(x_206);
x_291 = lean::box(0);
x_178 = x_291;
goto lbl_179;
}
case 2:
{
obj* x_296; 
lean::dec(x_241);
lean::dec(x_203);
lean::dec(x_190);
lean::dec(x_206);
x_296 = lean::box(0);
x_178 = x_296;
goto lbl_179;
}
default:
{
obj* x_301; 
lean::dec(x_241);
lean::dec(x_203);
lean::dec(x_190);
lean::dec(x_206);
x_301 = lean::box(0);
x_178 = x_301;
goto lbl_179;
}
}
}
}
}
}
lbl_179:
{
if (lean::obj_tag(x_178) == 0)
{
obj* x_306; 
lean::dec(x_178);
lean::dec(x_102);
lean::dec(x_175);
lean::dec(x_177);
x_306 = lean::box(0);
x_35 = x_306;
goto lbl_36;
}
else
{
obj* x_307; obj* x_309; obj* x_310; obj* x_313; obj* x_314; obj* x_315; obj* x_316; 
x_307 = lean::cnstr_get(x_178, 0);
lean::inc(x_307);
if (lean::is_shared(x_178)) {
 lean::dec(x_178);
 x_309 = lean::box(0);
} else {
 lean::cnstr_release(x_178, 0);
 x_309 = x_178;
}
x_310 = lean::cnstr_get(x_175, 0);
lean::inc(x_310);
lean::dec(x_175);
x_313 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_313, 0, x_310);
lean::cnstr_set(x_313, 1, x_307);
if (lean::is_scalar(x_177)) {
 x_314 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_314 = x_177;
}
lean::cnstr_set(x_314, 0, x_313);
if (lean::is_scalar(x_102)) {
 x_315 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_315 = x_102;
}
lean::cnstr_set(x_315, 0, x_314);
if (lean::is_scalar(x_309)) {
 x_316 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_316 = x_309;
}
lean::cnstr_set(x_316, 0, x_315);
x_35 = x_316;
goto lbl_36;
}
}
}
}
}
}
}
lbl_10:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_320; 
lean::dec(x_8);
lean::dec(x_6);
lean::dec(x_9);
x_320 = lean::box(0);
return x_320;
}
else
{
obj* x_321; obj* x_323; obj* x_324; 
x_321 = lean::cnstr_get(x_9, 0);
lean::inc(x_321);
if (lean::is_shared(x_9)) {
 lean::dec(x_9);
 x_323 = lean::box(0);
} else {
 lean::cnstr_release(x_9, 0);
 x_323 = x_9;
}
x_324 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_6);
if (lean::obj_tag(x_324) == 0)
{
obj* x_329; 
lean::dec(x_321);
lean::dec(x_323);
lean::dec(x_324);
lean::dec(x_8);
x_329 = lean::box(0);
return x_329;
}
else
{
obj* x_330; obj* x_333; obj* x_334; 
x_330 = lean::cnstr_get(x_324, 0);
lean::inc(x_330);
lean::dec(x_324);
if (lean::is_scalar(x_8)) {
 x_333 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_333 = x_8;
}
lean::cnstr_set(x_333, 0, x_321);
lean::cnstr_set(x_333, 1, x_330);
if (lean::is_scalar(x_323)) {
 x_334 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_334 = x_323;
}
lean::cnstr_set(x_334, 0, x_333);
return x_334;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_match__spec___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_zip___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_match__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; uint8 x_7; obj* x_8; uint8 x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::inc(x_2);
x_7 = l_option_is__some___main___rarg(x_2);
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
if (x_7 == 0)
{
if (x_10 == 0)
{
obj* x_11; 
x_11 = lean::box(0);
x_4 = x_11;
goto lbl_5;
}
else
{
obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_15 = lean::box(0);
return x_15;
}
}
else
{
if (x_10 == 0)
{
obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
}
lbl_5:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_30; obj* x_31; 
lean::dec(x_4);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_1, 1);
lean::inc(x_25);
lean::dec(x_1);
x_28 = l_lean_elaborator_match__spec___closed__1;
lean::inc(x_28);
x_30 = l_list_zip__with___main___rarg(x_28, x_22, x_25);
x_31 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_30);
if (lean::obj_tag(x_31) == 0)
{
obj* x_34; 
lean::dec(x_2);
lean::dec(x_31);
x_34 = lean::box(0);
return x_34;
}
else
{
obj* x_35; obj* x_37; obj* x_38; obj* x_39; 
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_37 = x_31;
}
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_2);
lean::cnstr_set(x_38, 1, x_35);
if (lean::is_scalar(x_37)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_37;
}
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
}
}
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 2);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 2);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_match__spec(x_2, x_5);
return x_8;
}
}
obj* _init_l_lean_elaborator_notation_elaborate__aux___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid notation, matches multiple reserved notations");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_notation_elaborate__aux___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = l_list_filter__map___main___rarg(x_4, x_5);
if (lean::obj_tag(x_7) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_7);
lean::dec(x_1);
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 2);
lean::inc(x_14);
x_16 = l_lean_elaborator_postprocess__notation__spec(x_14);
x_17 = lean::cnstr_get(x_0, 3);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 4);
lean::inc(x_19);
lean::dec(x_0);
x_22 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_22, 0, x_10);
lean::cnstr_set(x_22, 1, x_12);
lean::cnstr_set(x_22, 2, x_16);
lean::cnstr_set(x_22, 3, x_17);
lean::cnstr_set(x_22, 4, x_19);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_2);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
else
{
obj* x_25; obj* x_27; 
x_25 = lean::cnstr_get(x_7, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_7, 1);
lean::inc(x_27);
lean::dec(x_7);
if (lean::obj_tag(x_27) == 0)
{
obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_1);
lean::dec(x_27);
x_32 = lean::cnstr_get(x_0, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 3);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_0, 4);
lean::inc(x_38);
lean::dec(x_0);
x_41 = l_lean_elaborator_postprocess__notation__spec(x_25);
x_42 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_42, 0, x_32);
lean::cnstr_set(x_42, 1, x_34);
lean::cnstr_set(x_42, 2, x_41);
lean::cnstr_set(x_42, 3, x_36);
lean::cnstr_set(x_42, 4, x_38);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_2);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_43);
return x_44;
}
else
{
obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; 
lean::dec(x_25);
lean::dec(x_27);
x_47 = l_lean_parser_command_notation_has__view;
x_48 = lean::cnstr_get(x_47, 1);
lean::inc(x_48);
x_50 = lean::apply_1(x_48, x_0);
x_51 = l_lean_elaborator_notation_elaborate__aux___closed__1;
lean::inc(x_51);
x_53 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_50, x_51, x_1, x_2);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_57; 
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_56 = x_53;
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_54);
return x_57;
}
else
{
obj* x_58; obj* x_60; obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_78; obj* x_79; obj* x_80; 
x_58 = lean::cnstr_get(x_53, 0);
lean::inc(x_58);
if (lean::is_shared(x_53)) {
 lean::dec(x_53);
 x_60 = lean::box(0);
} else {
 lean::cnstr_release(x_53, 0);
 x_60 = x_53;
}
x_61 = lean::cnstr_get(x_58, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_58, 1);
lean::inc(x_63);
if (lean::is_shared(x_58)) {
 lean::dec(x_58);
 x_65 = lean::box(0);
} else {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_65 = x_58;
}
x_66 = lean::cnstr_get(x_61, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_61, 1);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_61, 2);
lean::inc(x_70);
x_72 = l_lean_elaborator_postprocess__notation__spec(x_70);
x_73 = lean::cnstr_get(x_61, 3);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_61, 4);
lean::inc(x_75);
lean::dec(x_61);
x_78 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_78, 0, x_66);
lean::cnstr_set(x_78, 1, x_68);
lean::cnstr_set(x_78, 2, x_72);
lean::cnstr_set(x_78, 3, x_73);
lean::cnstr_set(x_78, 4, x_75);
if (lean::is_scalar(x_65)) {
 x_79 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_79 = x_65;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_63);
if (lean::is_scalar(x_60)) {
 x_80 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_80 = x_60;
}
lean::cnstr_set(x_80, 0, x_79);
return x_80;
}
}
}
}
}
obj* _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__notation__kind___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_32; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_5, x_7);
lean::dec(x_7);
x_10 = lean::cnstr_get(x_0, 3);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_0, 5);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_0, 6);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 7);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 8);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 9);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 10);
lean::inc(x_24);
lean::dec(x_0);
x_27 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_27, 0, x_1);
lean::cnstr_set(x_27, 1, x_3);
lean::cnstr_set(x_27, 2, x_8);
lean::cnstr_set(x_27, 3, x_10);
lean::cnstr_set(x_27, 4, x_12);
lean::cnstr_set(x_27, 5, x_14);
lean::cnstr_set(x_27, 6, x_16);
lean::cnstr_set(x_27, 7, x_18);
lean::cnstr_set(x_27, 8, x_20);
lean::cnstr_set(x_27, 9, x_22);
lean::cnstr_set(x_27, 10, x_24);
x_28 = l_lean_elaborator_mk__notation__kind___rarg___closed__1;
lean::inc(x_28);
x_30 = lean_name_mk_numeral(x_28, x_5);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_31);
return x_32;
}
}
obj* l_lean_elaborator_mk__notation__kind(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mk__notation__kind___rarg), 1, 0);
return x_2;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_register__notation__macro(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_mk__notation__kind___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_8 = x_4;
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_12 = x_4;
}
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_17 = x_10;
}
lean::inc(x_13);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_13);
lean::cnstr_set(x_19, 1, x_0);
lean::inc(x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mk__notation__transformer), 3, 1);
lean::closure_set(x_21, 0, x_19);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_15, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_15, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_15, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_15, 6);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_15, 7);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_43 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_40, x_13, x_21);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_38);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::cnstr_get(x_15, 8);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_15, 9);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_15, 10);
lean::inc(x_49);
lean::dec(x_15);
x_52 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_52, 0, x_22);
lean::cnstr_set(x_52, 1, x_24);
lean::cnstr_set(x_52, 2, x_26);
lean::cnstr_set(x_52, 3, x_28);
lean::cnstr_set(x_52, 4, x_30);
lean::cnstr_set(x_52, 5, x_32);
lean::cnstr_set(x_52, 6, x_34);
lean::cnstr_set(x_52, 7, x_44);
lean::cnstr_set(x_52, 8, x_45);
lean::cnstr_set(x_52, 9, x_47);
lean::cnstr_set(x_52, 10, x_49);
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_19);
lean::cnstr_set(x_53, 1, x_52);
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
}
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_2; 
lean::dec(x_0);
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_5; uint8 x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_5);
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::dec(x_3);
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_9);
return x_8;
}
else
{
obj* x_13; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
lean::dec(x_9);
switch (lean::obj_tag(x_13)) {
case 0:
{
lean::dec(x_13);
return x_8;
}
case 1:
{
lean::dec(x_13);
return x_8;
}
default:
{
obj* x_18; obj* x_21; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
if (lean::obj_tag(x_21) == 0)
{
lean::dec(x_21);
return x_8;
}
else
{
obj* x_25; obj* x_28; 
x_25 = lean::cnstr_get(x_21, 0);
lean::inc(x_25);
lean::dec(x_21);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
lean::dec(x_25);
switch (lean::obj_tag(x_28)) {
case 0:
{
lean::dec(x_28);
return x_8;
}
case 1:
{
lean::dec(x_28);
return x_8;
}
case 2:
{
lean::dec(x_28);
return x_8;
}
default:
{
uint8 x_35; 
lean::dec(x_28);
x_35 = 1;
return x_35;
}
}
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ignoring notation using 'fold' action");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; uint8 x_14; 
x_3 = l_lean_parser_command_notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_6, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
lean::dec(x_9);
x_14 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_11);
if (x_14 == 0)
{
obj* x_15; 
x_15 = lean::box(0);
x_7 = x_15;
goto lbl_8;
}
else
{
obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; uint8 x_35; obj* x_36; obj* x_37; obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_58; obj* x_59; obj* x_60; 
lean::dec(x_6);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 2);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 3);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 4);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_1, 0);
lean::inc(x_27);
lean::dec(x_1);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
lean::dec(x_27);
x_33 = lean::box(0);
x_34 = l_lean_elaborator_notation_elaborate___closed__1;
x_35 = 1;
x_36 = l_string_join___closed__1;
x_37 = l_lean_elaborator_notation_elaborate___closed__2;
lean::inc(x_37);
lean::inc(x_36);
lean::inc(x_33);
lean::inc(x_34);
x_42 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_42, 0, x_30);
lean::cnstr_set(x_42, 1, x_34);
lean::cnstr_set(x_42, 2, x_33);
lean::cnstr_set(x_42, 3, x_36);
lean::cnstr_set(x_42, 4, x_37);
lean::cnstr_set_scalar(x_42, sizeof(void*)*5, x_35);
x_43 = x_42;
x_44 = lean::cnstr_get(x_2, 5);
lean::inc(x_44);
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_43);
lean::cnstr_set(x_46, 1, x_44);
x_47 = lean::cnstr_get(x_2, 6);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 7);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 8);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 9);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 10);
lean::inc(x_55);
lean::dec(x_2);
x_58 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_58, 0, x_17);
lean::cnstr_set(x_58, 1, x_19);
lean::cnstr_set(x_58, 2, x_21);
lean::cnstr_set(x_58, 3, x_23);
lean::cnstr_set(x_58, 4, x_25);
lean::cnstr_set(x_58, 5, x_46);
lean::cnstr_set(x_58, 6, x_47);
lean::cnstr_set(x_58, 7, x_49);
lean::cnstr_set(x_58, 8, x_51);
lean::cnstr_set(x_58, 9, x_53);
lean::cnstr_set(x_58, 10, x_55);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_33);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
lbl_8:
{
obj* x_63; 
lean::dec(x_7);
lean::inc(x_1);
x_63 = l_lean_elaborator_notation_elaborate__aux(x_6, x_1, x_2);
if (lean::obj_tag(x_63) == 0)
{
obj* x_65; obj* x_67; obj* x_68; 
lean::dec(x_1);
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_67 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_67 = x_63;
}
if (lean::is_scalar(x_67)) {
 x_68 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_68 = x_67;
}
lean::cnstr_set(x_68, 0, x_65);
return x_68;
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_74; obj* x_79; 
x_69 = lean::cnstr_get(x_63, 0);
lean::inc(x_69);
if (lean::is_shared(x_63)) {
 lean::dec(x_63);
 x_71 = lean::box(0);
} else {
 lean::cnstr_release(x_63, 0);
 x_71 = x_63;
}
x_72 = lean::cnstr_get(x_69, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_69, 1);
lean::inc(x_74);
lean::dec(x_69);
lean::inc(x_1);
lean::inc(x_72);
x_79 = l_lean_elaborator_register__notation__macro(x_72, x_1, x_74);
if (lean::obj_tag(x_79) == 0)
{
obj* x_82; obj* x_85; 
lean::dec(x_1);
lean::dec(x_72);
x_82 = lean::cnstr_get(x_79, 0);
lean::inc(x_82);
lean::dec(x_79);
if (lean::is_scalar(x_71)) {
 x_85 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_85 = x_71;
 lean::cnstr_set_tag(x_71, 0);
}
lean::cnstr_set(x_85, 0, x_82);
return x_85;
}
else
{
obj* x_87; obj* x_90; obj* x_92; obj* x_95; 
lean::dec(x_71);
x_87 = lean::cnstr_get(x_79, 0);
lean::inc(x_87);
lean::dec(x_79);
x_90 = lean::cnstr_get(x_87, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_87, 1);
lean::inc(x_92);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_72, 0);
lean::inc(x_95);
lean::dec(x_72);
if (lean::obj_tag(x_95) == 0)
{
obj* x_99; obj* x_101; obj* x_103; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_114; obj* x_116; obj* x_118; obj* x_120; obj* x_123; obj* x_124; 
lean::dec(x_95);
x_99 = lean::cnstr_get(x_92, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_92, 1);
lean::inc(x_101);
x_103 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_103, 0, x_90);
lean::cnstr_set(x_103, 1, x_101);
x_104 = lean::cnstr_get(x_92, 2);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_92, 3);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_92, 4);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_92, 5);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_92, 6);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_92, 7);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_92, 8);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_92, 9);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_92, 10);
lean::inc(x_120);
lean::dec(x_92);
x_123 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_123, 0, x_99);
lean::cnstr_set(x_123, 1, x_103);
lean::cnstr_set(x_123, 2, x_104);
lean::cnstr_set(x_123, 3, x_106);
lean::cnstr_set(x_123, 4, x_108);
lean::cnstr_set(x_123, 5, x_110);
lean::cnstr_set(x_123, 6, x_112);
lean::cnstr_set(x_123, 7, x_114);
lean::cnstr_set(x_123, 8, x_116);
lean::cnstr_set(x_123, 9, x_118);
lean::cnstr_set(x_123, 10, x_120);
x_124 = l_lean_elaborator_update__parser__config(x_1, x_123);
return x_124;
}
else
{
obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_139; obj* x_141; obj* x_143; obj* x_145; obj* x_147; obj* x_149; obj* x_152; obj* x_153; obj* x_155; obj* x_157; obj* x_159; obj* x_161; obj* x_163; obj* x_166; obj* x_167; 
lean::dec(x_95);
x_126 = lean::cnstr_get(x_92, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_92, 1);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_92, 2);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_92, 3);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_92, 4);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_134, 0);
lean::inc(x_136);
x_138 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_138, 0, x_90);
lean::cnstr_set(x_138, 1, x_136);
x_139 = lean::cnstr_get(x_134, 1);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_134, 2);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_134, 3);
lean::inc(x_143);
x_145 = lean::cnstr_get(x_134, 4);
lean::inc(x_145);
x_147 = lean::cnstr_get(x_134, 5);
lean::inc(x_147);
x_149 = lean::cnstr_get(x_134, 6);
lean::inc(x_149);
lean::dec(x_134);
x_152 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_152, 0, x_138);
lean::cnstr_set(x_152, 1, x_139);
lean::cnstr_set(x_152, 2, x_141);
lean::cnstr_set(x_152, 3, x_143);
lean::cnstr_set(x_152, 4, x_145);
lean::cnstr_set(x_152, 5, x_147);
lean::cnstr_set(x_152, 6, x_149);
x_153 = lean::cnstr_get(x_92, 5);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_92, 6);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_92, 7);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_92, 8);
lean::inc(x_159);
x_161 = lean::cnstr_get(x_92, 9);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_92, 10);
lean::inc(x_163);
lean::dec(x_92);
x_166 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_166, 0, x_126);
lean::cnstr_set(x_166, 1, x_128);
lean::cnstr_set(x_166, 2, x_130);
lean::cnstr_set(x_166, 3, x_132);
lean::cnstr_set(x_166, 4, x_152);
lean::cnstr_set(x_166, 5, x_153);
lean::cnstr_set(x_166, 6, x_155);
lean::cnstr_set(x_166, 7, x_157);
lean::cnstr_set(x_166, 8, x_159);
lean::cnstr_set(x_166, 9, x_161);
lean::cnstr_set(x_166, 10, x_163);
x_167 = l_lean_elaborator_update__parser__config(x_1, x_166);
return x_167;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("a universe named '");
return x_0;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been declared in this scope");
return x_0;
}
}
obj* l_lean_elaborator_universe_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_14; obj* x_18; 
x_3 = l_lean_parser_command_universe_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_11 = l_lean_elaborator_mangle__ident(x_8);
x_12 = lean::cnstr_get(x_2, 4);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 1);
lean::inc(x_14);
lean::inc(x_11);
lean::inc(x_14);
x_18 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_14, x_11);
if (lean::obj_tag(x_18) == 0)
{
obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_18);
lean::dec(x_1);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_2, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_12, 0);
lean::inc(x_30);
lean::inc(x_11);
x_33 = level_mk_param(x_11);
x_34 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_14, x_11, x_33);
x_35 = lean::cnstr_get(x_12, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_12, 3);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_12, 4);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_12, 5);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_12, 6);
lean::inc(x_43);
lean::dec(x_12);
x_46 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_46, 0, x_30);
lean::cnstr_set(x_46, 1, x_34);
lean::cnstr_set(x_46, 2, x_35);
lean::cnstr_set(x_46, 3, x_37);
lean::cnstr_set(x_46, 4, x_39);
lean::cnstr_set(x_46, 5, x_41);
lean::cnstr_set(x_46, 6, x_43);
x_47 = lean::cnstr_get(x_2, 5);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 6);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 7);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 8);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 9);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_2, 10);
lean::inc(x_57);
lean::dec(x_2);
x_60 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_60, 0, x_22);
lean::cnstr_set(x_60, 1, x_24);
lean::cnstr_set(x_60, 2, x_26);
lean::cnstr_set(x_60, 3, x_28);
lean::cnstr_set(x_60, 4, x_46);
lean::cnstr_set(x_60, 5, x_47);
lean::cnstr_set(x_60, 6, x_49);
lean::cnstr_set(x_60, 7, x_51);
lean::cnstr_set(x_60, 8, x_53);
lean::cnstr_set(x_60, 9, x_55);
lean::cnstr_set(x_60, 10, x_57);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
return x_63;
}
else
{
obj* x_67; obj* x_69; obj* x_70; obj* x_72; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_14);
lean::dec(x_12);
lean::dec(x_18);
x_67 = l_lean_name_to__string___closed__1;
lean::inc(x_67);
x_69 = l_lean_name_to__string__with__sep___main(x_67, x_11);
x_70 = l_lean_elaborator_universe_elaborate___closed__1;
lean::inc(x_70);
x_72 = lean::string_append(x_70, x_69);
lean::dec(x_69);
x_74 = l_lean_elaborator_universe_elaborate___closed__2;
x_75 = lean::string_append(x_72, x_74);
x_76 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_75, x_1, x_2);
return x_76;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown identifier '");
return x_0;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'attribute' command, identifier is ambiguous");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_13; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
x_13 = lean::cnstr_get(x_8, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_18; obj* x_21; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_31; 
lean::dec(x_13);
lean::inc(x_8);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_8);
x_18 = lean::cnstr_get(x_8, 2);
lean::inc(x_18);
lean::dec(x_8);
x_21 = l_lean_name_to__string___closed__1;
lean::inc(x_21);
x_23 = l_lean_name_to__string__with__sep___main(x_21, x_18);
x_24 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
lean::inc(x_24);
x_26 = lean::string_append(x_24, x_23);
lean::dec(x_23);
x_28 = l_char_has__repr___closed__1;
x_29 = lean::string_append(x_26, x_28);
lean::inc(x_1);
x_31 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_17, x_29, x_1, x_2);
if (lean::obj_tag(x_31) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_35 = lean::cnstr_get(x_31, 0);
lean::inc(x_35);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_37 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_37 = x_31;
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; 
x_39 = lean::cnstr_get(x_31, 0);
lean::inc(x_39);
if (lean::is_shared(x_31)) {
 lean::dec(x_31);
 x_41 = lean::box(0);
} else {
 lean::cnstr_release(x_31, 0);
 x_41 = x_31;
}
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
if (lean::is_shared(x_39)) {
 lean::dec(x_39);
 x_46 = lean::box(0);
} else {
 lean::cnstr_release(x_39, 0);
 lean::cnstr_release(x_39, 1);
 x_46 = x_39;
}
x_47 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_44);
if (lean::obj_tag(x_47) == 0)
{
obj* x_51; obj* x_54; 
lean::dec(x_12);
lean::dec(x_42);
lean::dec(x_46);
x_51 = lean::cnstr_get(x_47, 0);
lean::inc(x_51);
lean::dec(x_47);
if (lean::is_scalar(x_41)) {
 x_54 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_54 = x_41;
 lean::cnstr_set_tag(x_41, 0);
}
lean::cnstr_set(x_54, 0, x_51);
return x_54;
}
else
{
obj* x_55; obj* x_58; obj* x_60; obj* x_63; obj* x_64; obj* x_65; 
x_55 = lean::cnstr_get(x_47, 0);
lean::inc(x_55);
lean::dec(x_47);
x_58 = lean::cnstr_get(x_55, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_55, 1);
lean::inc(x_60);
lean::dec(x_55);
if (lean::is_scalar(x_12)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_12;
}
lean::cnstr_set(x_63, 0, x_42);
lean::cnstr_set(x_63, 1, x_58);
if (lean::is_scalar(x_46)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_46;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_60);
if (lean::is_scalar(x_41)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_41;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
else
{
obj* x_66; obj* x_68; 
x_66 = lean::cnstr_get(x_13, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_13, 1);
lean::inc(x_68);
lean::dec(x_13);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; 
lean::dec(x_8);
lean::dec(x_68);
x_73 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_2);
if (lean::obj_tag(x_73) == 0)
{
obj* x_76; obj* x_78; obj* x_79; 
lean::dec(x_12);
lean::dec(x_66);
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_78 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 x_78 = x_73;
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_76);
return x_79;
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_85; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_80 = lean::cnstr_get(x_73, 0);
lean::inc(x_80);
if (lean::is_shared(x_73)) {
 lean::dec(x_73);
 x_82 = lean::box(0);
} else {
 lean::cnstr_release(x_73, 0);
 x_82 = x_73;
}
x_83 = lean::cnstr_get(x_80, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_80, 1);
lean::inc(x_85);
if (lean::is_shared(x_80)) {
 lean::dec(x_80);
 x_87 = lean::box(0);
} else {
 lean::cnstr_release(x_80, 0);
 lean::cnstr_release(x_80, 1);
 x_87 = x_80;
}
x_88 = lean::box(0);
x_89 = lean_expr_mk_const(x_66, x_88);
if (lean::is_scalar(x_12)) {
 x_90 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_90 = x_12;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_83);
if (lean::is_scalar(x_87)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_87;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_85);
if (lean::is_scalar(x_82)) {
 x_92 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_92 = x_82;
}
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
else
{
obj* x_95; obj* x_96; obj* x_99; 
lean::dec(x_68);
lean::dec(x_66);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_8);
x_96 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
lean::inc(x_1);
lean::inc(x_96);
x_99 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_95, x_96, x_1, x_2);
if (lean::obj_tag(x_99) == 0)
{
obj* x_103; obj* x_105; obj* x_106; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_103 = lean::cnstr_get(x_99, 0);
lean::inc(x_103);
if (lean::is_shared(x_99)) {
 lean::dec(x_99);
 x_105 = lean::box(0);
} else {
 lean::cnstr_release(x_99, 0);
 x_105 = x_99;
}
if (lean::is_scalar(x_105)) {
 x_106 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_106 = x_105;
}
lean::cnstr_set(x_106, 0, x_103);
return x_106;
}
else
{
obj* x_107; obj* x_109; obj* x_110; obj* x_112; obj* x_114; obj* x_115; 
x_107 = lean::cnstr_get(x_99, 0);
lean::inc(x_107);
if (lean::is_shared(x_99)) {
 lean::dec(x_99);
 x_109 = lean::box(0);
} else {
 lean::cnstr_release(x_99, 0);
 x_109 = x_99;
}
x_110 = lean::cnstr_get(x_107, 0);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_107, 1);
lean::inc(x_112);
if (lean::is_shared(x_107)) {
 lean::dec(x_107);
 x_114 = lean::box(0);
} else {
 lean::cnstr_release(x_107, 0);
 lean::cnstr_release(x_107, 1);
 x_114 = x_107;
}
x_115 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_10, x_1, x_112);
if (lean::obj_tag(x_115) == 0)
{
obj* x_119; obj* x_122; 
lean::dec(x_12);
lean::dec(x_114);
lean::dec(x_110);
x_119 = lean::cnstr_get(x_115, 0);
lean::inc(x_119);
lean::dec(x_115);
if (lean::is_scalar(x_109)) {
 x_122 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_122 = x_109;
 lean::cnstr_set_tag(x_109, 0);
}
lean::cnstr_set(x_122, 0, x_119);
return x_122;
}
else
{
obj* x_123; obj* x_126; obj* x_128; obj* x_131; obj* x_132; obj* x_133; 
x_123 = lean::cnstr_get(x_115, 0);
lean::inc(x_123);
lean::dec(x_115);
x_126 = lean::cnstr_get(x_123, 0);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_123, 1);
lean::inc(x_128);
lean::dec(x_123);
if (lean::is_scalar(x_12)) {
 x_131 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_131 = x_12;
}
lean::cnstr_set(x_131, 0, x_110);
lean::cnstr_set(x_131, 1, x_126);
if (lean::is_scalar(x_114)) {
 x_132 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_132 = x_114;
}
lean::cnstr_set(x_132, 0, x_131);
lean::cnstr_set(x_132, 1, x_128);
if (lean::is_scalar(x_109)) {
 x_133 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_133 = x_109;
}
lean::cnstr_set(x_133, 0, x_132);
return x_133;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("attribute");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("local");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_attribute_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_11; 
x_3 = l_lean_parser_command_attribute_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
lean::inc(x_1);
x_11 = l_lean_elaborator_attrs__to__pexpr(x_8, x_1, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_11, 0);
lean::inc(x_15);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_17 = x_11;
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_15);
return x_18;
}
else
{
obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_30; 
x_19 = lean::cnstr_get(x_11, 0);
lean::inc(x_19);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_21 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_21 = x_11;
}
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
lean::dec(x_19);
x_27 = lean::cnstr_get(x_7, 5);
lean::inc(x_27);
lean::inc(x_1);
x_30 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_27, x_1, x_24);
if (lean::obj_tag(x_30) == 0)
{
obj* x_35; obj* x_38; 
lean::dec(x_7);
lean::dec(x_22);
lean::dec(x_1);
lean::dec(x_0);
x_35 = lean::cnstr_get(x_30, 0);
lean::inc(x_35);
lean::dec(x_30);
if (lean::is_scalar(x_21)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_21;
 lean::cnstr_set_tag(x_21, 0);
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; uint8 x_51; obj* x_52; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
lean::dec(x_21);
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
lean::dec(x_30);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_7, 0);
lean::inc(x_48);
lean::dec(x_7);
x_51 = l_option_is__some___main___rarg(x_48);
x_52 = l_lean_elaborator_attribute_elaborate___closed__1;
x_53 = l_lean_elaborator_attribute_elaborate___closed__2;
lean::inc(x_53);
lean::inc(x_52);
x_56 = l_lean_kvmap_set__bool(x_52, x_53, x_51);
x_57 = l_lean_elaborator_mk__eqns___closed__1;
lean::inc(x_57);
x_59 = l_lean_expr_mk__capp(x_57, x_43);
x_60 = lean_expr_mk_app(x_22, x_59);
x_61 = lean_expr_mk_mdata(x_56, x_60);
x_62 = l_lean_elaborator_old__elab__command(x_0, x_61, x_1, x_45);
return x_62;
}
}
}
}
obj* _init_l_lean_elaborator_check_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("#check");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
return x_7;
}
}
obj* l_lean_elaborator_check_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_12; 
x_3 = l_lean_parser_command_check_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::inc(x_0);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
lean::inc(x_1);
x_12 = l_lean_elaborator_to__pexpr___main(x_8, x_1, x_2);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; obj* x_17; obj* x_18; 
lean::dec(x_1);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
if (lean::is_shared(x_12)) {
 lean::dec(x_12);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_12, 0);
 x_17 = x_12;
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_15);
return x_18;
}
else
{
obj* x_19; obj* x_22; obj* x_24; obj* x_27; obj* x_29; obj* x_30; 
x_19 = lean::cnstr_get(x_12, 0);
lean::inc(x_19);
lean::dec(x_12);
x_22 = lean::cnstr_get(x_19, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
lean::dec(x_19);
x_27 = l_lean_elaborator_check_elaborate___closed__1;
lean::inc(x_27);
x_29 = lean_expr_mk_mdata(x_27, x_22);
x_30 = l_lean_elaborator_old__elab__command(x_0, x_29, x_1, x_24);
return x_30;
}
}
}
obj* l_lean_elaborator_open_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_37; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_1);
x_4 = l_lean_parser_command_open_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_2, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_16, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_16, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_16, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_16, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_16, 5);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_7, 1);
lean::inc(x_30);
lean::dec(x_7);
x_33 = l_list_append___rarg(x_28, x_30);
x_34 = lean::cnstr_get(x_16, 6);
lean::inc(x_34);
lean::dec(x_16);
x_37 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_37, 0, x_18);
lean::cnstr_set(x_37, 1, x_20);
lean::cnstr_set(x_37, 2, x_22);
lean::cnstr_set(x_37, 3, x_24);
lean::cnstr_set(x_37, 4, x_26);
lean::cnstr_set(x_37, 5, x_33);
lean::cnstr_set(x_37, 6, x_34);
x_38 = lean::cnstr_get(x_2, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_2, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_2, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_2, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 10);
lean::inc(x_48);
lean::dec(x_2);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_8);
lean::cnstr_set(x_51, 1, x_10);
lean::cnstr_set(x_51, 2, x_12);
lean::cnstr_set(x_51, 3, x_14);
lean::cnstr_set(x_51, 4, x_37);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
x_54 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_9 = x_1;
}
lean::inc(x_0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_0);
lean::cnstr_set(x_11, 1, x_5);
x_12 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_0, x_7);
if (lean::is_scalar(x_9)) {
 x_13 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_13 = x_9;
}
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
}
obj* l_lean_elaborator_export_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_get__namespace___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_8 = x_4;
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_10 = lean::cnstr_get(x_4, 0);
lean::inc(x_10);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 x_12 = x_4;
}
x_13 = lean::cnstr_get(x_10, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
if (lean::is_shared(x_10)) {
 lean::dec(x_10);
 x_17 = lean::box(0);
} else {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_17 = x_10;
}
x_18 = l_lean_parser_command_export_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::apply_1(x_19, x_0);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_15, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_21, 1);
lean::inc(x_30);
lean::dec(x_21);
x_33 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_13, x_30);
x_34 = l_list_append___rarg(x_28, x_33);
x_35 = lean::cnstr_get(x_15, 4);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_15, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_15, 6);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_15, 7);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_15, 8);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_15, 9);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_15, 10);
lean::inc(x_47);
lean::dec(x_15);
x_50 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_50, 0, x_22);
lean::cnstr_set(x_50, 1, x_24);
lean::cnstr_set(x_50, 2, x_26);
lean::cnstr_set(x_50, 3, x_34);
lean::cnstr_set(x_50, 4, x_35);
lean::cnstr_set(x_50, 5, x_37);
lean::cnstr_set(x_50, 6, x_39);
lean::cnstr_set(x_50, 7, x_41);
lean::cnstr_set(x_50, 8, x_43);
lean::cnstr_set(x_50, 9, x_45);
lean::cnstr_set(x_50, 10, x_47);
x_51 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_17;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_50);
if (lean::is_scalar(x_12)) {
 x_53 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_53 = x_12;
}
lean::cnstr_set(x_53, 0, x_52);
return x_53;
}
}
}
obj* _init_l_lean_elaborator_init__quot_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string("command");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("init_quot");
lean::inc(x_0);
x_6 = lean_name_mk_string(x_0, x_4);
x_7 = l_lean_kvmap_set__name(x_0, x_3, x_6);
x_8 = l_lean_elaborator_dummy;
lean::inc(x_8);
x_10 = lean_expr_mk_mdata(x_7, x_8);
return x_10;
}
}
obj* l_lean_elaborator_init__quot_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; 
x_3 = l_lean_elaborator_init__quot_elaborate___closed__1;
lean::inc(x_3);
x_5 = l_lean_elaborator_old__elab__command(x_0, x_3, x_1, x_2);
return x_5;
}
}
obj* l_lean_elaborator_set__option_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_13; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; 
lean::dec(x_1);
x_4 = l_lean_parser_command_set__option_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::apply_1(x_5, x_0);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_8, 2);
lean::inc(x_10);
lean::dec(x_8);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_7, 2);
lean::inc(x_17);
lean::dec(x_7);
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 1);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 2);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 3);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_13, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_13, 1);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_13, 2);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_13, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_13, 4);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_13, 5);
lean::inc(x_38);
lean::dec(x_13);
x_41 = lean::cnstr_get(x_2, 5);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_2, 6);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_2, 7);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 8);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 9);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 10);
lean::inc(x_51);
lean::dec(x_2);
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_54; 
x_54 = lean::cnstr_get(x_17, 0);
lean::inc(x_54);
lean::dec(x_17);
if (lean::obj_tag(x_54) == 0)
{
uint8 x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_54);
x_58 = 1;
x_59 = l_lean_kvmap_set__bool(x_15, x_10, x_58);
x_60 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_60, 0, x_28);
lean::cnstr_set(x_60, 1, x_30);
lean::cnstr_set(x_60, 2, x_32);
lean::cnstr_set(x_60, 3, x_34);
lean::cnstr_set(x_60, 4, x_36);
lean::cnstr_set(x_60, 5, x_38);
lean::cnstr_set(x_60, 6, x_59);
x_61 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_61, 0, x_20);
lean::cnstr_set(x_61, 1, x_22);
lean::cnstr_set(x_61, 2, x_24);
lean::cnstr_set(x_61, 3, x_26);
lean::cnstr_set(x_61, 4, x_60);
lean::cnstr_set(x_61, 5, x_41);
lean::cnstr_set(x_61, 6, x_43);
lean::cnstr_set(x_61, 7, x_45);
lean::cnstr_set(x_61, 8, x_47);
lean::cnstr_set(x_61, 9, x_49);
lean::cnstr_set(x_61, 10, x_51);
x_62 = lean::box(0);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_64, 0, x_63);
return x_64;
}
else
{
uint8 x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_54);
x_66 = 0;
x_67 = l_lean_kvmap_set__bool(x_15, x_10, x_66);
x_68 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_68, 0, x_28);
lean::cnstr_set(x_68, 1, x_30);
lean::cnstr_set(x_68, 2, x_32);
lean::cnstr_set(x_68, 3, x_34);
lean::cnstr_set(x_68, 4, x_36);
lean::cnstr_set(x_68, 5, x_38);
lean::cnstr_set(x_68, 6, x_67);
x_69 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_69, 0, x_20);
lean::cnstr_set(x_69, 1, x_22);
lean::cnstr_set(x_69, 2, x_24);
lean::cnstr_set(x_69, 3, x_26);
lean::cnstr_set(x_69, 4, x_68);
lean::cnstr_set(x_69, 5, x_41);
lean::cnstr_set(x_69, 6, x_43);
lean::cnstr_set(x_69, 7, x_45);
lean::cnstr_set(x_69, 8, x_47);
lean::cnstr_set(x_69, 9, x_49);
lean::cnstr_set(x_69, 10, x_51);
x_70 = lean::box(0);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_69);
x_72 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
obj* x_73; obj* x_76; 
x_73 = lean::cnstr_get(x_17, 0);
lean::inc(x_73);
lean::dec(x_17);
x_76 = l_lean_parser_string__lit_view_value(x_73);
if (lean::obj_tag(x_76) == 0)
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_10);
lean::dec(x_76);
x_79 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_79, 0, x_28);
lean::cnstr_set(x_79, 1, x_30);
lean::cnstr_set(x_79, 2, x_32);
lean::cnstr_set(x_79, 3, x_34);
lean::cnstr_set(x_79, 4, x_36);
lean::cnstr_set(x_79, 5, x_38);
lean::cnstr_set(x_79, 6, x_15);
x_80 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_80, 0, x_20);
lean::cnstr_set(x_80, 1, x_22);
lean::cnstr_set(x_80, 2, x_24);
lean::cnstr_set(x_80, 3, x_26);
lean::cnstr_set(x_80, 4, x_79);
lean::cnstr_set(x_80, 5, x_41);
lean::cnstr_set(x_80, 6, x_43);
lean::cnstr_set(x_80, 7, x_45);
lean::cnstr_set(x_80, 8, x_47);
lean::cnstr_set(x_80, 9, x_49);
lean::cnstr_set(x_80, 10, x_51);
x_81 = lean::box(0);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_80);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_82);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_84 = lean::cnstr_get(x_76, 0);
lean::inc(x_84);
lean::dec(x_76);
x_87 = l_lean_kvmap_set__string(x_15, x_10, x_84);
x_88 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_88, 0, x_28);
lean::cnstr_set(x_88, 1, x_30);
lean::cnstr_set(x_88, 2, x_32);
lean::cnstr_set(x_88, 3, x_34);
lean::cnstr_set(x_88, 4, x_36);
lean::cnstr_set(x_88, 5, x_38);
lean::cnstr_set(x_88, 6, x_87);
x_89 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_89, 0, x_20);
lean::cnstr_set(x_89, 1, x_22);
lean::cnstr_set(x_89, 2, x_24);
lean::cnstr_set(x_89, 3, x_26);
lean::cnstr_set(x_89, 4, x_88);
lean::cnstr_set(x_89, 5, x_41);
lean::cnstr_set(x_89, 6, x_43);
lean::cnstr_set(x_89, 7, x_45);
lean::cnstr_set(x_89, 8, x_47);
lean::cnstr_set(x_89, 9, x_49);
lean::cnstr_set(x_89, 10, x_51);
x_90 = lean::box(0);
x_91 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_89);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
return x_92;
}
}
default:
{
obj* x_93; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_93 = lean::cnstr_get(x_17, 0);
lean::inc(x_93);
lean::dec(x_17);
x_96 = l_lean_parser_number_view_to__nat___main(x_93);
x_97 = l_lean_kvmap_set__nat(x_15, x_10, x_96);
x_98 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_98, 0, x_28);
lean::cnstr_set(x_98, 1, x_30);
lean::cnstr_set(x_98, 2, x_32);
lean::cnstr_set(x_98, 3, x_34);
lean::cnstr_set(x_98, 4, x_36);
lean::cnstr_set(x_98, 5, x_38);
lean::cnstr_set(x_98, 6, x_97);
x_99 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_99, 0, x_20);
lean::cnstr_set(x_99, 1, x_22);
lean::cnstr_set(x_99, 2, x_24);
lean::cnstr_set(x_99, 3, x_26);
lean::cnstr_set(x_99, 4, x_98);
lean::cnstr_set(x_99, 5, x_41);
lean::cnstr_set(x_99, 6, x_43);
lean::cnstr_set(x_99, 7, x_45);
lean::cnstr_set(x_99, 8, x_47);
lean::cnstr_set(x_99, 9, x_49);
lean::cnstr_set(x_99, 10, x_51);
x_100 = lean::box(0);
x_101 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_99);
x_102 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
lean::dec(x_8);
x_16 = l_lean_parser_syntax_get__pos(x_0);
x_17 = lean::mk_nat_obj(0u);
x_18 = l_option_get__or__else___main___rarg(x_16, x_17);
x_19 = l_lean_file__map_to__position(x_13, x_18);
x_20 = lean::box(0);
x_21 = 2;
x_22 = l_string_join___closed__1;
lean::inc(x_22);
x_24 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_24, 0, x_11);
lean::cnstr_set(x_24, 1, x_19);
lean::cnstr_set(x_24, 2, x_20);
lean::cnstr_set(x_24, 3, x_22);
lean::cnstr_set(x_24, 4, x_1);
lean::cnstr_set_scalar(x_24, sizeof(void*)*5, x_21);
x_25 = x_24;
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_25);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_27, 0, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_28, 0, x_5);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_30, 0, x_27);
lean::closure_set(x_30, 1, x_29);
return x_30;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_0, x_1, x_2, x_4);
return x_7;
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_command_elaborate), 3, 0);
return x_0;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_16; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_11 = lean::cnstr_get(x_0, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 1);
lean::inc(x_13);
lean::dec(x_0);
x_16 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_16);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_20, 0, x_11);
lean::closure_set(x_20, 1, x_16);
lean::closure_set(x_20, 2, x_1);
lean::closure_set(x_20, 3, x_2);
lean::closure_set(x_20, 4, x_3);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1), 4, 3);
lean::closure_set(x_21, 0, x_13);
lean::closure_set(x_21, 1, x_1);
lean::closure_set(x_21, 2, x_2);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_22, 0, x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_23, 0, x_20);
lean::closure_set(x_23, 1, x_22);
return x_23;
}
}
}
obj* _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no_kind.elaborate: unreachable");
return x_0;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_10; obj* x_12; 
lean::dec(x_4);
x_10 = l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
lean::inc(x_10);
x_12 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_10, x_1, x_2, x_6);
return x_12;
}
else
{
obj* x_14; obj* x_17; obj* x_20; 
lean::dec(x_0);
x_14 = lean::cnstr_get(x_4, 0);
lean::inc(x_14);
lean::dec(x_4);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_17, x_1, x_2, x_6);
return x_20;
}
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_7 = x_2;
}
lean::inc(x_3);
x_9 = l_lean_parser_syntax_as__node___main(x_3);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_5);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__1), 4, 3);
lean::closure_set(x_13, 0, x_3);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_1);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
return x_15;
}
}
obj* l_lean_elaborator_no__kind_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__2), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_5);
return x_8;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_yield__to__outside___rarg(x_5);
x_9 = lean::box(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__2___boxed), 5, 4);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_1);
lean::closure_set(x_10, 2, x_2);
lean::closure_set(x_10, 3, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_12, 0, x_8);
lean::closure_set(x_12, 1, x_11);
return x_12;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("end");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("module");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("eoi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of input, expected 'end'");
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'end', there is no open scope to end");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj* x_0, obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_14; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
}
lean::inc(x_5);
x_11 = l_lean_parser_syntax_as__node___main(x_5);
x_12 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
lean::inc(x_12);
x_14 = l_option_map___rarg(x_12, x_11);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_5);
lean::dec(x_14);
lean::dec(x_9);
x_18 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_21 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_18, x_0, x_1, x_7);
x_22 = lean::box(x_2);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_23, 0, x_22);
lean::closure_set(x_23, 1, x_3);
lean::closure_set(x_23, 2, x_0);
lean::closure_set(x_23, 3, x_1);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_24, 0, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_25, 0, x_21);
lean::closure_set(x_25, 1, x_24);
return x_25;
}
else
{
obj* x_26; obj* x_29; uint8 x_30; 
x_26 = lean::cnstr_get(x_14, 0);
lean::inc(x_26);
lean::dec(x_14);
x_29 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
x_30 = lean_name_dec_eq(x_26, x_29);
if (x_30 == 0)
{
obj* x_31; uint8 x_32; 
x_31 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
x_32 = lean_name_dec_eq(x_26, x_31);
lean::dec(x_26);
if (x_32 == 0)
{
obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_5);
lean::dec(x_9);
x_36 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_39 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_36, x_0, x_1, x_7);
x_40 = lean::box(x_2);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_41, 0, x_40);
lean::closure_set(x_41, 1, x_3);
lean::closure_set(x_41, 2, x_0);
lean::closure_set(x_41, 3, x_1);
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_42, 0, x_41);
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_43, 0, x_39);
lean::closure_set(x_43, 1, x_42);
return x_43;
}
else
{
lean::dec(x_3);
if (x_2 == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_48 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_9;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_7);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
x_51 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_51, 0, x_50);
return x_51;
}
else
{
obj* x_53; obj* x_55; 
lean::dec(x_9);
x_53 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
lean::inc(x_53);
x_55 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_53, x_0, x_1, x_7);
return x_55;
}
}
}
else
{
lean::dec(x_3);
lean::dec(x_26);
if (x_2 == 0)
{
obj* x_59; obj* x_61; 
lean::dec(x_9);
x_59 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
lean::inc(x_59);
x_61 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_59, x_0, x_1, x_7);
return x_61;
}
else
{
obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_65 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_9;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_7);
x_67 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_67, 0, x_66);
x_68 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_68, 0, x_67);
return x_68;
}
}
}
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("commands.elaborate: out of fuel");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
lean::inc(x_8);
x_10 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_3, x_8, x_0, x_1, x_5);
return x_10;
}
}
obj* l_lean_elaborator_commands_elaborate___main(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_1, x_8);
lean::dec(x_8);
lean::dec(x_1);
x_12 = l_lean_elaborator_current__command___rarg(x_4);
x_13 = lean::box(x_0);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__4___boxed), 5, 4);
lean::closure_set(x_14, 0, x_2);
lean::closure_set(x_14, 1, x_3);
lean::closure_set(x_14, 2, x_13);
lean::closure_set(x_14, 3, x_9);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_15, 0, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_16, 0, x_12);
lean::closure_set(x_16, 1, x_15);
return x_16;
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_1);
x_18 = l_lean_elaborator_current__command___rarg(x_4);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__5), 3, 2);
lean::closure_set(x_19, 0, x_2);
lean::closure_set(x_19, 1, x_3);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_21, 0, x_18);
lean::closure_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__2(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__3(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__4(x_0, x_1, x_5, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_end__scope___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_6 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_6 = x_1;
}
x_7 = lean::apply_1(x_0, x_2);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of ");
return x_0;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", expected name '");
return x_0;
}
}
obj* l_lean_elaborator_end__scope___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_16; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_shared(x_4)) {
 lean::dec(x_4);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
}
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
x_14 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_14);
x_16 = l_option_map___rarg(x_14, x_12);
if (lean::obj_tag(x_16) == 0)
{
lean::dec(x_16);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_23 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_9;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_7);
x_25 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_26, 0, x_25);
return x_26;
}
else
{
obj* x_28; 
lean::dec(x_9);
x_28 = lean::box(0);
x_10 = x_28;
goto lbl_11;
}
}
else
{
obj* x_29; 
x_29 = lean::cnstr_get(x_16, 0);
lean::inc(x_29);
lean::dec(x_16);
if (lean::obj_tag(x_1) == 0)
{
obj* x_34; 
lean::dec(x_9);
lean::dec(x_29);
x_34 = lean::box(0);
x_10 = x_34;
goto lbl_11;
}
else
{
obj* x_35; uint8 x_37; 
x_35 = lean::cnstr_get(x_1, 0);
lean::inc(x_35);
x_37 = lean_name_dec_eq(x_29, x_35);
lean::dec(x_35);
lean::dec(x_29);
if (x_37 == 0)
{
obj* x_41; 
lean::dec(x_9);
x_41 = lean::box(0);
x_10 = x_41;
goto lbl_11;
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_47 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_9;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_7);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
x_50 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_50, 0, x_49);
return x_50;
}
}
}
lbl_11:
{
obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_10);
x_52 = l_lean_parser_command_end_has__view;
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
x_55 = lean::apply_1(x_53, x_5);
x_56 = l_lean_elaborator_end__scope___lambda__2___closed__1;
lean::inc(x_56);
x_58 = lean::string_append(x_56, x_0);
lean::dec(x_0);
x_60 = l_lean_elaborator_end__scope___lambda__2___closed__2;
x_61 = lean::string_append(x_58, x_60);
x_62 = lean::box(0);
x_63 = l_option_get__or__else___main___rarg(x_1, x_62);
x_64 = l_lean_name_to__string___closed__1;
lean::inc(x_64);
x_66 = l_lean_name_to__string__with__sep___main(x_64, x_63);
x_67 = lean::string_append(x_61, x_66);
lean::dec(x_66);
x_69 = l_char_has__repr___closed__1;
x_70 = lean::string_append(x_67, x_69);
x_71 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_55, x_70, x_2, x_3, x_7);
return x_71;
}
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_end_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_end__scope___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_current__command___rarg(x_5);
x_9 = l_lean_elaborator_end__scope___lambda__3___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__2), 5, 4);
lean::closure_set(x_12, 0, x_0);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
lean::closure_set(x_12, 3, x_3);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_end__scope(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
x_6 = l_lean_elaborator_update__parser__config(x_3, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__3), 5, 4);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_1);
lean::closure_set(x_8, 2, x_2);
lean::closure_set(x_8, 3, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_4(x_0, x_4, x_1, x_2, x_6);
return x_9;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1), 4, 3);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 0);
return x_4;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 1;
x_6 = lean::mk_nat_obj(1000u);
x_7 = l_lean_elaborator_commands_elaborate___main(x_5, x_6, x_1, x_2, x_3);
return x_7;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_5 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_5 = x_0;
}
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
if (lean::is_scalar(x_5)) {
 x_9 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_9 = x_5;
}
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_3);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_4 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_4 = x_1;
}
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 10);
lean::inc(x_23);
lean::dec(x_2);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_7);
lean::cnstr_set(x_26, 2, x_9);
lean::cnstr_set(x_26, 3, x_11);
lean::cnstr_set(x_26, 4, x_0);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = lean::box(0);
if (lean::is_scalar(x_4)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_4;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
lean::inc(x_9);
x_11 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_12, 0, x_4);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1), 4, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; 
lean::inc(x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
lean::inc(x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_7);
x_10 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
lean::inc(x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4), 4, 3);
lean::closure_set(x_12, 0, x_10);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_9);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("section");
return x_0;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_12; obj* x_13; obj* x_15; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_lean_elaborator_to__pexpr___main___closed__28;
lean::inc(x_10);
x_12 = l_option_map___rarg(x_10, x_7);
x_13 = l_lean_elaborator_section_elaborate___lambda__1___closed__1;
lean::inc(x_13);
x_15 = l_lean_elaborator_end__scope(x_13, x_12, x_1, x_2, x_4);
return x_15;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_10 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(x_0, x_1, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__1), 4, 3);
lean::closure_set(x_11, 0, x_3);
lean::closure_set(x_11, 1, x_0);
lean::closure_set(x_11, 2, x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* _init_l_lean_elaborator_section_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_section_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_section_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_section_elaborate___closed__1;
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__2), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_1);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_6; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = 1;
x_7 = lean::mk_nat_obj(1000u);
x_8 = l_lean_elaborator_commands_elaborate___main(x_6, x_7, x_0, x_1, x_3);
return x_8;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_shared(x_3)) {
 lean::dec(x_3);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
}
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_6, 4);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_17, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_0, 1);
lean::inc(x_27);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_27, 2);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_name_append___main(x_4, x_30);
x_34 = lean::cnstr_get(x_17, 4);
lean::inc(x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_33);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::cnstr_get(x_17, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_17, 6);
lean::inc(x_39);
lean::dec(x_17);
x_42 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_21);
lean::cnstr_set(x_42, 2, x_23);
lean::cnstr_set(x_42, 3, x_25);
lean::cnstr_set(x_42, 4, x_36);
lean::cnstr_set(x_42, 5, x_37);
lean::cnstr_set(x_42, 6, x_39);
x_43 = lean::cnstr_get(x_6, 5);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_6, 6);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_6, 7);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_6, 8);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_6, 9);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_6, 10);
lean::inc(x_53);
lean::dec(x_6);
x_56 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_56, 0, x_9);
lean::cnstr_set(x_56, 1, x_11);
lean::cnstr_set(x_56, 2, x_13);
lean::cnstr_set(x_56, 3, x_15);
lean::cnstr_set(x_56, 4, x_42);
lean::cnstr_set(x_56, 5, x_43);
lean::cnstr_set(x_56, 6, x_45);
lean::cnstr_set(x_56, 7, x_47);
lean::cnstr_set(x_56, 8, x_49);
lean::cnstr_set(x_56, 9, x_51);
lean::cnstr_set(x_56, 10, x_53);
x_57 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_8;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_60, 0, x_59);
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_61, 0, x_1);
lean::closure_set(x_61, 1, x_2);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_62, 0, x_61);
x_63 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_63, 0, x_60);
lean::closure_set(x_63, 1, x_62);
return x_63;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
x_6 = l_lean_elaborator_get__namespace___rarg(x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2), 4, 3);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
lean::inc(x_9);
x_11 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_12, 0, x_4);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3), 5, 1);
lean::closure_set(x_4, 0, x_0);
lean::inc(x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4), 4, 3);
lean::closure_set(x_12, 0, x_4);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_2);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("namespace");
return x_0;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_13; obj* x_14; obj* x_16; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_10);
x_14 = l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
lean::inc(x_14);
x_16 = l_lean_elaborator_end__scope(x_14, x_13, x_1, x_2, x_4);
return x_16;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_3);
x_11 = l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(x_3, x_0, x_1, x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__1), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_0 = l_lean_parser_command_namespace_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_3, 0, x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* l_lean_elaborator_namespace_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_namespace_elaborate___closed__1;
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__2), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_1);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; 
lean::inc(x_0);
x_4 = lean::alloc_cnstr(1, 4, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
return x_4;
}
case 1:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_16; uint8 x_17; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_13 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_13 = x_0;
}
lean::inc(x_7);
lean::inc(x_1);
x_16 = l_lean_name_quick__lt___main(x_1, x_7);
x_17 = lean::unbox(x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_21; uint8 x_22; 
lean::inc(x_1);
lean::inc(x_7);
x_21 = l_lean_name_quick__lt___main(x_7, x_1);
x_22 = lean::unbox(x_21);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_26; 
lean::dec(x_9);
lean::dec(x_7);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_11);
return x_26;
}
else
{
obj* x_27; obj* x_28; 
x_27 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_11, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_5);
lean::cnstr_set(x_28, 1, x_7);
lean::cnstr_set(x_28, 2, x_9);
lean::cnstr_set(x_28, 3, x_27);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; 
x_29 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_5, x_1, x_2);
if (lean::is_scalar(x_13)) {
 x_30 = lean::alloc_cnstr(1, 4, 0);
} else {
 x_30 = x_13;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
return x_30;
}
}
default:
{
obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_42; uint8 x_43; 
x_31 = lean::cnstr_get(x_0, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_0, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_0, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_0, 3);
lean::inc(x_37);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_39 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 lean::cnstr_release(x_0, 2);
 lean::cnstr_release(x_0, 3);
 x_39 = x_0;
}
lean::inc(x_33);
lean::inc(x_1);
x_42 = l_lean_name_quick__lt___main(x_1, x_33);
x_43 = lean::unbox(x_42);
lean::dec(x_42);
if (x_43 == 0)
{
obj* x_47; uint8 x_48; 
lean::inc(x_1);
lean::inc(x_33);
x_47 = l_lean_name_quick__lt___main(x_33, x_1);
x_48 = lean::unbox(x_47);
lean::dec(x_47);
if (x_48 == 0)
{
obj* x_52; 
lean::dec(x_33);
lean::dec(x_35);
if (lean::is_scalar(x_39)) {
 x_52 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_52 = x_39;
}
lean::cnstr_set(x_52, 0, x_31);
lean::cnstr_set(x_52, 1, x_1);
lean::cnstr_set(x_52, 2, x_2);
lean::cnstr_set(x_52, 3, x_37);
return x_52;
}
else
{
uint8 x_54; 
lean::inc(x_37);
x_54 = l_rbnode_get__color___main___rarg(x_37);
if (x_54 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_39);
x_56 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_37, x_1, x_2);
x_57 = l_rbnode_balance2__node___main___rarg(x_56, x_33, x_35, x_31);
return x_57;
}
else
{
obj* x_58; obj* x_59; 
x_58 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_37, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_59 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_59 = x_39;
}
lean::cnstr_set(x_59, 0, x_31);
lean::cnstr_set(x_59, 1, x_33);
lean::cnstr_set(x_59, 2, x_35);
lean::cnstr_set(x_59, 3, x_58);
return x_59;
}
}
}
else
{
uint8 x_61; 
lean::inc(x_31);
x_61 = l_rbnode_get__color___main___rarg(x_31);
if (x_61 == 0)
{
obj* x_63; obj* x_64; 
lean::dec(x_39);
x_63 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_31, x_1, x_2);
x_64 = l_rbnode_balance1__node___main___rarg(x_63, x_33, x_35, x_37);
return x_64;
}
else
{
obj* x_65; obj* x_66; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_31, x_1, x_2);
if (lean::is_scalar(x_39)) {
 x_66 = lean::alloc_cnstr(2, 4, 0);
} else {
 x_66 = x_39;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_33);
lean::cnstr_set(x_66, 2, x_35);
lean::cnstr_set(x_66, 3, x_37);
return x_66;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_4 = l_rbnode_get__color___main___rarg(x_0);
x_5 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
x_6 = l_rbnode_mk__insert__result___main___rarg(x_4, x_5);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_3; obj* x_5; obj* x_8; obj* x_10; obj* x_13; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
x_13 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_8, x_10);
x_0 = x_13;
x_1 = x_5;
goto _start;
}
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_module_header_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_reserve__notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_universe_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_variables_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_include_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_attribute_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_open_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_export_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_check_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_init__quot_elaborate___closed__1;
lean::inc(x_7);
x_9 = l_lean_elaborator_old__elab__command(x_2, x_7, x_0, x_4);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_set__option_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_53; obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_0 = l_lean_parser_module_header;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2), 3, 0);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
x_4 = l_lean_parser_command_notation;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4), 3, 0);
lean::inc(x_4);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_5);
x_8 = l_lean_parser_command_reserve__notation;
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6), 3, 0);
lean::inc(x_8);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_8);
lean::cnstr_set(x_11, 1, x_9);
x_12 = l_lean_parser_command_universe;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8), 3, 0);
lean::inc(x_12);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_13);
x_16 = l_lean_parser_no__kind;
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate), 3, 0);
lean::inc(x_16);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_17);
x_20 = l_lean_parser_command_section;
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate), 3, 0);
lean::inc(x_20);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_20);
lean::cnstr_set(x_23, 1, x_21);
x_24 = l_lean_parser_command_namespace;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate), 3, 0);
lean::inc(x_24);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_25);
x_28 = l_lean_parser_command_variables;
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10), 3, 0);
lean::inc(x_28);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_28);
lean::cnstr_set(x_31, 1, x_29);
x_32 = l_lean_parser_command_include;
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12), 3, 0);
lean::inc(x_32);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_33);
x_36 = l_lean_parser_command_declaration;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14), 3, 0);
lean::inc(x_36);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_36);
lean::cnstr_set(x_39, 1, x_37);
x_40 = l_lean_parser_command_attribute;
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16), 3, 0);
lean::inc(x_40);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_41);
x_44 = l_lean_parser_command_open;
x_45 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18), 3, 0);
lean::inc(x_44);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_44);
lean::cnstr_set(x_47, 1, x_45);
x_48 = l_lean_parser_command_export;
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20), 3, 0);
lean::inc(x_48);
x_51 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_51, 0, x_48);
lean::cnstr_set(x_51, 1, x_49);
x_52 = l_lean_parser_command_check;
x_53 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22), 3, 0);
lean::inc(x_52);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_52);
lean::cnstr_set(x_55, 1, x_53);
x_56 = l_lean_parser_command_init__quot;
x_57 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24), 3, 0);
lean::inc(x_56);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_56);
lean::cnstr_set(x_59, 1, x_57);
x_60 = l_lean_parser_command_set__option;
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26), 3, 0);
lean::inc(x_60);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_61);
x_64 = lean::box(0);
lean::inc(x_64);
x_66 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_66, 0, x_63);
lean::cnstr_set(x_66, 1, x_64);
x_67 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_67, 0, x_59);
lean::cnstr_set(x_67, 1, x_66);
x_68 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_68, 0, x_55);
lean::cnstr_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_69, 0, x_51);
lean::cnstr_set(x_69, 1, x_68);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_47);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_43);
lean::cnstr_set(x_71, 1, x_70);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_39);
lean::cnstr_set(x_72, 1, x_71);
x_73 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_73, 0, x_35);
lean::cnstr_set(x_73, 1, x_72);
x_74 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_74, 0, x_31);
lean::cnstr_set(x_74, 1, x_73);
x_75 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_75, 0, x_27);
lean::cnstr_set(x_75, 1, x_74);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_23);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_77, 0, x_19);
lean::cnstr_set(x_77, 1, x_76);
x_78 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_78, 0, x_15);
lean::cnstr_set(x_78, 1, x_77);
x_79 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_79, 0, x_11);
lean::cnstr_set(x_79, 1, x_78);
x_80 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_80, 0, x_7);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_81, 0, x_3);
lean::cnstr_set(x_81, 1, x_80);
x_82 = l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(x_64, x_81);
return x_82;
}
}
obj* _init_l_lean_elaborator_elaborators() {
_start:
{
obj* x_0; 
x_0 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
lean::inc(x_0);
return x_0;
}
}
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = 0;
return x_4;
}
else
{
obj* x_5; obj* x_7; uint8 x_10; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean_name_dec_eq(x_0, x_5);
lean::dec(x_5);
if (x_10 == 0)
{
uint8 x_12; 
x_12 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_7);
if (x_12 == 0)
{
uint8 x_13; 
x_13 = 0;
return x_13;
}
else
{
uint8 x_14; 
x_14 = 1;
return x_14;
}
}
else
{
uint8 x_17; 
lean::dec(x_7);
lean::dec(x_0);
x_17 = 1;
return x_17;
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; obj* x_5; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = 0;
x_5 = lean::box(x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; obj* x_14; uint8 x_17; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean::cnstr_get(x_11, 2);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean_name_dec_eq(x_14, x_0);
lean::dec(x_14);
if (x_17 == 0)
{
x_1 = x_8;
goto _start;
}
else
{
uint8 x_22; obj* x_23; 
lean::dec(x_8);
lean::dec(x_0);
x_22 = 1;
x_23 = lean::box(x_22);
return x_23;
}
}
}
}
uint8 l_lean_elaborator_is__open__namespace___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::box(0);
x_3 = lean_name_dec_eq(x_1, x_2);
lean::dec(x_2);
if (x_3 == 0)
{
obj* x_5; obj* x_8; uint8 x_11; 
x_5 = lean::cnstr_get(x_0, 4);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 4);
lean::inc(x_8);
lean::inc(x_1);
x_11 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_1, x_8);
if (x_11 == 0)
{
obj* x_12; obj* x_15; uint8 x_16; 
x_12 = lean::cnstr_get(x_5, 5);
lean::inc(x_12);
lean::dec(x_5);
x_15 = l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(x_1, x_12);
x_16 = lean::unbox(x_15);
lean::dec(x_15);
if (x_16 == 0)
{
uint8 x_18; 
x_18 = 0;
return x_18;
}
else
{
uint8 x_19; 
x_19 = 1;
return x_19;
}
}
else
{
uint8 x_22; 
lean::dec(x_5);
lean::dec(x_1);
x_22 = 1;
return x_22;
}
}
else
{
uint8 x_25; 
lean::dec(x_1);
lean::dec(x_0);
x_25 = 1;
return x_25;
}
}
}
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_elaborator_is__open__namespace(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_is__open__namespace___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_4; obj* x_5; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = 0;
x_5 = lean::box(x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; uint8 x_14; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean_name_dec_eq(x_0, x_11);
lean::dec(x_11);
if (x_14 == 0)
{
x_1 = x_8;
goto _start;
}
else
{
uint8 x_19; obj* x_20; 
lean::dec(x_8);
lean::dec(x_0);
x_19 = 1;
x_20 = lean::box(x_19);
return x_20;
}
}
}
}
obj* l_lean_elaborator_match__open__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_5; obj* x_8; obj* x_11; obj* x_12; 
lean::dec(x_2);
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_5, 2);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_lean_name_append___main(x_8, x_0);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; uint8 x_21; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_15 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_15 = x_2;
}
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 2);
lean::inc(x_18);
lean::dec(x_16);
x_21 = lean_name_dec_eq(x_0, x_18);
lean::dec(x_18);
if (x_21 == 0)
{
obj* x_23; obj* x_27; uint8 x_28; 
x_23 = lean::cnstr_get(x_13, 2);
lean::inc(x_23);
lean::dec(x_13);
lean::inc(x_0);
x_27 = l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(x_0, x_23);
x_28 = lean::unbox(x_27);
lean::dec(x_27);
if (x_28 == 0)
{
obj* x_33; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_15);
x_33 = lean::box(0);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_40; obj* x_41; 
x_34 = lean::cnstr_get(x_1, 0);
lean::inc(x_34);
lean::dec(x_1);
x_37 = lean::cnstr_get(x_34, 2);
lean::inc(x_37);
lean::dec(x_34);
x_40 = l_lean_name_append___main(x_37, x_0);
if (lean::is_scalar(x_15)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_15;
}
lean::cnstr_set(x_41, 0, x_40);
return x_41;
}
}
else
{
obj* x_43; obj* x_46; obj* x_49; obj* x_50; 
lean::dec(x_13);
x_43 = lean::cnstr_get(x_1, 0);
lean::inc(x_43);
lean::dec(x_1);
x_46 = lean::cnstr_get(x_43, 2);
lean::inc(x_46);
lean::dec(x_43);
x_49 = l_lean_name_append___main(x_46, x_0);
if (lean::is_scalar(x_15)) {
 x_50 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_50 = x_15;
}
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_14; uint8 x_15; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_9 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_9 = x_2;
}
x_10 = lean::cnstr_get(x_1, 8);
lean::inc(x_10);
lean::inc(x_0);
lean::inc(x_5);
x_14 = l_lean_name_append___main(x_5, x_0);
x_15 = lean_environment_contains(x_10, x_14);
if (x_15 == 0)
{
lean::dec(x_9);
lean::dec(x_5);
x_2 = x_7;
goto _start;
}
else
{
obj* x_19; obj* x_20; 
x_19 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_5);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::inc(x_0);
x_11 = l_lean_elaborator_is__open__namespace___main(x_0, x_8);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_lean_elaborator_match__open__spec(x_0, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_resolve__context___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_root_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_resolve__context___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_2, 4);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 2);
lean::inc(x_6);
lean::inc(x_0);
x_9 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_6, x_0);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_15; 
lean::dec(x_9);
x_11 = lean::cnstr_get(x_4, 4);
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_2, x_11);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; obj* x_20; obj* x_21; uint8 x_24; obj* x_26; obj* x_27; obj* x_30; obj* x_32; obj* x_33; obj* x_36; obj* x_37; obj* x_38; obj* x_40; 
x_16 = l_lean_elaborator_resolve__context___main___closed__1;
x_17 = lean::box(0);
lean::inc(x_16);
lean::inc(x_0);
x_20 = l_lean_name_replace__prefix___main(x_0, x_16, x_17);
x_21 = lean::cnstr_get(x_2, 8);
lean::inc(x_21);
lean::inc(x_20);
x_24 = lean_environment_contains(x_21, x_20);
lean::inc(x_0);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_match__open__spec), 2, 1);
lean::closure_set(x_26, 0, x_0);
x_27 = lean::cnstr_get(x_4, 5);
lean::inc(x_27);
lean::dec(x_4);
x_30 = l_list_filter__map___main___rarg(x_26, x_27);
lean::inc(x_2);
x_32 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_2, x_30);
x_33 = lean::cnstr_get(x_2, 3);
lean::inc(x_33);
lean::inc(x_2);
x_36 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_2, x_33);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_resolve__context___main___lambda__1), 2, 1);
lean::closure_set(x_37, 0, x_0);
x_38 = l_list_filter__map___main___rarg(x_37, x_36);
lean::inc(x_2);
x_40 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_2, x_38);
if (x_24 == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_20);
x_42 = l_list_append___rarg(x_15, x_32);
x_43 = l_list_append___rarg(x_42, x_40);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_2);
x_45 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_45, 0, x_44);
return x_45;
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
x_46 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_46, 0, x_20);
lean::cnstr_set(x_46, 1, x_15);
x_47 = l_list_append___rarg(x_46, x_32);
x_48 = l_list_append___rarg(x_47, x_40);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_2);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
return x_50;
}
}
else
{
obj* x_52; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_4);
x_52 = lean::cnstr_get(x_15, 0);
lean::inc(x_52);
if (lean::is_shared(x_15)) {
 lean::dec(x_15);
 x_54 = lean::box(0);
} else {
 lean::cnstr_release(x_15, 0);
 lean::cnstr_release(x_15, 1);
 x_54 = x_15;
}
x_55 = l_lean_name_append___main(x_52, x_0);
x_56 = lean::box(0);
if (lean::is_scalar(x_54)) {
 x_57 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_57 = x_54;
}
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_2);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
return x_59;
}
}
else
{
obj* x_62; obj* x_65; obj* x_67; obj* x_68; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_4);
lean::dec(x_0);
x_62 = lean::cnstr_get(x_9, 0);
lean::inc(x_62);
lean::dec(x_9);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
if (lean::is_shared(x_62)) {
 lean::dec(x_62);
 x_67 = lean::box(0);
} else {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 x_67 = x_62;
}
x_68 = lean::cnstr_get(x_65, 0);
lean::inc(x_68);
lean::dec(x_65);
x_71 = lean::box(0);
x_72 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set(x_72, 1, x_71);
if (lean::is_scalar(x_67)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_67;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_2);
x_74 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_74, 0, x_73);
return x_74;
}
}
}
obj* l_lean_elaborator_resolve__context(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_12 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_12 = x_0;
}
lean::inc(x_1);
x_14 = l_lean_elaborator_preresolve___main(x_8, x_1, x_2);
if (lean::obj_tag(x_14) == 0)
{
obj* x_18; obj* x_20; obj* x_21; 
lean::dec(x_12);
lean::dec(x_10);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_14, 0);
lean::inc(x_18);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_20 = x_14;
}
if (lean::is_scalar(x_20)) {
 x_21 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_21 = x_20;
}
lean::cnstr_set(x_21, 0, x_18);
return x_21;
}
else
{
obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_22 = lean::cnstr_get(x_14, 0);
lean::inc(x_22);
if (lean::is_shared(x_14)) {
 lean::dec(x_14);
 x_24 = lean::box(0);
} else {
 lean::cnstr_release(x_14, 0);
 x_24 = x_14;
}
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_shared(x_22)) {
 lean::dec(x_22);
 x_29 = lean::box(0);
} else {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_29 = x_22;
}
x_30 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_10, x_1, x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_37; 
lean::dec(x_12);
lean::dec(x_25);
lean::dec(x_29);
x_34 = lean::cnstr_get(x_30, 0);
lean::inc(x_34);
lean::dec(x_30);
if (lean::is_scalar(x_24)) {
 x_37 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_37 = x_24;
 lean::cnstr_set_tag(x_24, 0);
}
lean::cnstr_set(x_37, 0, x_34);
return x_37;
}
else
{
obj* x_38; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; 
x_38 = lean::cnstr_get(x_30, 0);
lean::inc(x_38);
lean::dec(x_30);
x_41 = lean::cnstr_get(x_38, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 1);
lean::inc(x_43);
lean::dec(x_38);
if (lean::is_scalar(x_12)) {
 x_46 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_46 = x_12;
}
lean::cnstr_set(x_46, 0, x_25);
lean::cnstr_set(x_46, 1, x_41);
if (lean::is_scalar(x_29)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_29;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_43);
if (lean::is_scalar(x_24)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_24;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
obj* l_lean_elaborator_preresolve___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
case 1:
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_8 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 x_8 = x_0;
}
lean::inc(x_6);
x_10 = l_lean_elaborator_mangle__ident(x_6);
x_11 = l_lean_elaborator_resolve__context___main(x_10, x_1, x_2);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_16 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_16 = x_11;
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_18 = lean::cnstr_get(x_11, 0);
lean::inc(x_18);
if (lean::is_shared(x_11)) {
 lean::dec(x_11);
 x_20 = lean::box(0);
} else {
 lean::cnstr_release(x_11, 0);
 x_20 = x_11;
}
x_21 = lean::cnstr_get(x_18, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_18, 1);
lean::inc(x_23);
if (lean::is_shared(x_18)) {
 lean::dec(x_18);
 x_25 = lean::box(0);
} else {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 x_25 = x_18;
}
x_26 = lean::cnstr_get(x_6, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_6, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_6, 2);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_6, 3);
lean::inc(x_32);
x_34 = l_list_append___rarg(x_21, x_32);
x_35 = lean::cnstr_get(x_6, 4);
lean::inc(x_35);
lean::dec(x_6);
x_38 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_38, 0, x_26);
lean::cnstr_set(x_38, 1, x_28);
lean::cnstr_set(x_38, 2, x_30);
lean::cnstr_set(x_38, 3, x_34);
lean::cnstr_set(x_38, 4, x_35);
if (lean::is_scalar(x_8)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_8;
}
lean::cnstr_set(x_39, 0, x_38);
if (lean::is_scalar(x_25)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_25;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_23);
if (lean::is_scalar(x_20)) {
 x_41 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_41 = x_20;
}
lean::cnstr_set(x_41, 0, x_40);
return x_41;
}
}
case 2:
{
obj* x_42; obj* x_44; obj* x_45; obj* x_47; 
x_42 = lean::cnstr_get(x_0, 0);
lean::inc(x_42);
if (lean::is_shared(x_0)) {
 lean::dec(x_0);
 x_44 = lean::box(0);
} else {
 lean::cnstr_release(x_0, 0);
 x_44 = x_0;
}
x_45 = lean::cnstr_get(x_42, 1);
lean::inc(x_45);
x_47 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_45, x_1, x_2);
if (lean::obj_tag(x_47) == 0)
{
obj* x_50; obj* x_52; obj* x_53; 
lean::dec(x_44);
lean::dec(x_42);
x_50 = lean::cnstr_get(x_47, 0);
lean::inc(x_50);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_52 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 x_52 = x_47;
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
return x_53;
}
else
{
obj* x_54; obj* x_56; obj* x_57; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_54 = lean::cnstr_get(x_47, 0);
lean::inc(x_54);
if (lean::is_shared(x_47)) {
 lean::dec(x_47);
 x_56 = lean::box(0);
} else {
 lean::cnstr_release(x_47, 0);
 x_56 = x_47;
}
x_57 = lean::cnstr_get(x_54, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 1);
lean::inc(x_59);
if (lean::is_shared(x_54)) {
 lean::dec(x_54);
 x_61 = lean::box(0);
} else {
 lean::cnstr_release(x_54, 0);
 lean::cnstr_release(x_54, 1);
 x_61 = x_54;
}
x_62 = lean::cnstr_get(x_42, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_42, 2);
lean::inc(x_64);
lean::dec(x_42);
x_67 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_67, 0, x_62);
lean::cnstr_set(x_67, 1, x_57);
lean::cnstr_set(x_67, 2, x_64);
if (lean::is_scalar(x_44)) {
 x_68 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_68 = x_44;
}
lean::cnstr_set(x_68, 0, x_67);
if (lean::is_scalar(x_61)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_61;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_59);
if (lean::is_scalar(x_56)) {
 x_70 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_70 = x_56;
}
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
default:
{
obj* x_72; obj* x_73; 
lean::dec(x_1);
x_72 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_72, 0, x_0);
lean::cnstr_set(x_72, 1, x_2);
x_73 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_73, 0, x_72);
return x_73;
}
}
}
}
obj* l_lean_elaborator_preresolve(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_max__recursion() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(100u);
return x_0;
}
}
obj* _init_l_lean_elaborator_max__commands() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(10000u);
return x_0;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
lean::inc(x_0);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_0);
lean::cnstr_set(x_3, 2, x_1);
return x_3;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_2);
lean::dec(x_1);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l___private_init_lean_parser_rec_1__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_7 = lean::apply_2(x_6, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6), 6, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
lean::closure_set(x_6, 2, x_3);
x_7 = lean::apply_3(x_0, x_6, x_4, x_5);
return x_7;
}
}
obj* _init_l_lean_elaborator_run___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string("foo");
x_5 = 2;
x_6 = lean::mk_string("");
x_7 = lean::mk_string("elaborator.run: out of fuel");
x_8 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
lean::cnstr_set_scalar(x_8, sizeof(void*)*5, x_5);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_elaborator_run___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 5);
lean::inc(x_15);
x_17 = l_lean_elaborator_run___lambda__1___closed__1;
lean::inc(x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_15);
x_20 = lean::cnstr_get(x_2, 6);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 7);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 8);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 9);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 10);
lean::inc(x_28);
lean::dec(x_2);
x_31 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_31, 0, x_5);
lean::cnstr_set(x_31, 1, x_7);
lean::cnstr_set(x_31, 2, x_9);
lean::cnstr_set(x_31, 3, x_11);
lean::cnstr_set(x_31, 4, x_13);
lean::cnstr_set(x_31, 5, x_19);
lean::cnstr_set(x_31, 6, x_20);
lean::cnstr_set(x_31, 7, x_22);
lean::cnstr_set(x_31, 8, x_24);
lean::cnstr_set(x_31, 9, x_26);
lean::cnstr_set(x_31, 10, x_28);
x_32 = lean::box(0);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_31);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_35, 0, x_34);
return x_35;
}
}
obj* _init_l_lean_elaborator_run___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_11; obj* x_13; obj* x_14; obj* x_16; obj* x_18; 
lean::dec(x_5);
x_11 = l_lean_name_to__string___closed__1;
lean::inc(x_11);
x_13 = l_lean_name_to__string__with__sep___main(x_11, x_0);
x_14 = l_lean_elaborator_run___lambda__2___closed__1;
lean::inc(x_14);
x_16 = lean::string_append(x_14, x_13);
lean::dec(x_13);
x_18 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_1, x_16, x_2, x_3, x_7);
return x_18;
}
else
{
obj* x_21; obj* x_24; 
lean::dec(x_1);
lean::dec(x_0);
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_24 = lean::apply_3(x_21, x_2, x_3, x_7);
return x_24;
}
}
}
obj* l_lean_elaborator_run___lambda__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_4 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_4 = x_1;
}
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 5);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::cnstr_get(x_0, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 8);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 9);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_0, 10);
lean::inc(x_26);
lean::dec(x_0);
x_29 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_9);
lean::cnstr_set(x_29, 3, x_11);
lean::cnstr_set(x_29, 4, x_13);
lean::cnstr_set(x_29, 5, x_17);
lean::cnstr_set(x_29, 6, x_18);
lean::cnstr_set(x_29, 7, x_20);
lean::cnstr_set(x_29, 8, x_22);
lean::cnstr_set(x_29, 9, x_24);
lean::cnstr_set(x_29, 10, x_26);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
if (lean::is_scalar(x_4)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_4;
 lean::cnstr_set_tag(x_4, 1);
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_35; 
lean::dec(x_0);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_35, 0, x_1);
return x_35;
}
}
}
obj* _init_l_lean_elaborator_run___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not a command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
lean::dec(x_1);
lean::inc(x_0);
x_7 = l_lean_parser_syntax_to__format___main(x_0);
x_8 = lean::mk_nat_obj(80u);
x_9 = l_lean_format_pretty(x_7, x_8);
x_10 = l_lean_elaborator_run___lambda__4___closed__1;
lean::inc(x_10);
x_12 = lean::string_append(x_10, x_9);
lean::dec(x_9);
x_14 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_12, x_2, x_3, x_4);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_15 = lean::cnstr_get(x_1, 0);
lean::inc(x_15);
lean::dec(x_1);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_lean_elaborator_elaborators;
lean::inc(x_18);
lean::inc(x_21);
x_24 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_21, x_18);
lean::inc(x_4);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_4);
x_27 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_27, 0, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_28, 0, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__2), 5, 4);
lean::closure_set(x_29, 0, x_18);
lean::closure_set(x_29, 1, x_0);
lean::closure_set(x_29, 2, x_2);
lean::closure_set(x_29, 3, x_3);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_30, 0, x_29);
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_31, 0, x_28);
lean::closure_set(x_31, 1, x_30);
x_32 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__3), 2, 1);
lean::closure_set(x_32, 0, x_4);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_33, 0, x_31);
lean::closure_set(x_33, 1, x_32);
return x_33;
}
}
}
obj* l_lean_elaborator_run___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
lean::inc(x_0);
x_10 = l_lean_parser_syntax_as__node___main(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__4), 5, 1);
lean::closure_set(x_12, 0, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_14, 0, x_4);
lean::closure_set(x_14, 1, x_13);
lean::closure_set(x_14, 2, x_1);
lean::closure_set(x_14, 3, x_2);
lean::closure_set(x_14, 4, x_6);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_0);
lean::inc(x_3);
x_10 = l_lean_elaborator_preresolve___main(x_3, x_0, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__5), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__6), 3, 2);
lean::closure_set(x_6, 0, x_2);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_run___lambda__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; obj* x_6; obj* x_7; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_message__log_empty;
lean::inc(x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; obj* x_14; obj* x_17; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_11, 5);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_17, 0, x_14);
return x_17;
}
}
}
obj* _init_l_lean_elaborator_run___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; uint8 x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_17; 
x_0 = lean::box(0);
x_1 = lean::mk_string("trace");
lean::inc(x_0);
x_3 = lean_name_mk_string(x_0, x_1);
x_4 = lean::mk_string("as_messages");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = l_lean_options_mk;
x_7 = 1;
lean::inc(x_6);
x_9 = l_lean_kvmap_set__bool(x_6, x_5, x_7);
x_10 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
x_11 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_0);
lean::inc(x_0);
lean::inc(x_0);
x_17 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_10);
lean::cnstr_set(x_17, 2, x_11);
lean::cnstr_set(x_17, 3, x_0);
lean::cnstr_set(x_17, 4, x_0);
lean::cnstr_set(x_17, 5, x_0);
lean::cnstr_set(x_17, 6, x_9);
return x_17;
}
}
obj* _init_l_lean_elaborator_run___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_run___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint32 x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_ngen");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("fixme");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 0;
x_6 = lean::alloc_cnstr(0, 1, 4);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* _init_l_lean_elaborator_run___closed__4() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; obj* x_4; 
x_0 = 0;
x_1 = l_lean_elaborator_max__commands;
x_2 = lean::box(x_0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___boxed), 5, 2);
lean::closure_set(x_4, 0, x_2);
lean::closure_set(x_4, 1, x_1);
return x_4;
}
}
obj* _init_l_lean_elaborator_run___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__1), 3, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__7), 4, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__8), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_run(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_30; obj* x_31; obj* x_33; 
x_1 = lean::box(0);
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = l_lean_expander_builtin__transformers;
lean::inc(x_6);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::mk_nat_obj(0u);
x_10 = l_lean_elaborator_run___closed__1;
x_11 = l_lean_message__log_empty;
x_12 = l_lean_elaborator_run___closed__2;
x_13 = l_lean_elaborator_run___closed__3;
lean::inc(x_13);
lean::inc(x_12);
lean::inc(x_11);
lean::inc(x_10);
lean::inc(x_9);
lean::inc(x_1);
lean::inc(x_1);
x_21 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_1);
lean::cnstr_set(x_21, 2, x_9);
lean::cnstr_set(x_21, 3, x_1);
lean::cnstr_set(x_21, 4, x_10);
lean::cnstr_set(x_21, 5, x_11);
lean::cnstr_set(x_21, 6, x_2);
lean::cnstr_set(x_21, 7, x_8);
lean::cnstr_set(x_21, 8, x_12);
lean::cnstr_set(x_21, 9, x_13);
lean::cnstr_set(x_21, 10, x_9);
x_22 = l_lean_elaborator_run___closed__4;
x_23 = l_lean_elaborator_run___closed__5;
x_24 = l_lean_elaborator_run___closed__6;
x_25 = l_lean_elaborator_max__recursion;
lean::inc(x_25);
lean::inc(x_24);
lean::inc(x_23);
lean::inc(x_22);
x_30 = l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(x_22, x_23, x_24, x_25, x_0, x_21);
x_31 = l_lean_elaborator_run___closed__7;
lean::inc(x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_33, 0, x_30);
lean::closure_set(x_33, 1, x_31);
return x_33;
}
}
void initialize_init_lean_parser_module();
void initialize_init_lean_expander();
void initialize_init_lean_expr();
void initialize_init_lean_options();
static bool _G_initialized = false;
void initialize_init_lean_elaborator() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_module();
 initialize_init_lean_expander();
 initialize_init_lean_expr();
 initialize_init_lean_options();
 l_lean_elaborator_ordered__rbmap_empty___closed__1 = _init_l_lean_elaborator_ordered__rbmap_empty___closed__1();
 l_lean_elaborator_elaborator__t = _init_l_lean_elaborator_elaborator__t();
 l_lean_elaborator_elaborator__m = _init_l_lean_elaborator_elaborator__m();
 l_lean_elaborator_elaborator = _init_l_lean_elaborator_elaborator();
 l_lean_elaborator_coelaborator__m = _init_l_lean_elaborator_coelaborator__m();
 l_lean_elaborator_coelaborator = _init_l_lean_elaborator_coelaborator();
 l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2 = _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2();
 l_lean_elaborator_coelaborator__m_monad__coroutine = _init_l_lean_elaborator_coelaborator__m_monad__coroutine();
 l_lean_elaborator_current__command___rarg___closed__1 = _init_l_lean_elaborator_current__command___rarg___closed__1();
 l_lean_elaborator_level__get__app__args___main___closed__1 = _init_l_lean_elaborator_level__get__app__args___main___closed__1();
 l_lean_elaborator_to__level___main___closed__1 = _init_l_lean_elaborator_to__level___main___closed__1();
 l_lean_elaborator_to__level___main___closed__2 = _init_l_lean_elaborator_to__level___main___closed__2();
 l_lean_elaborator_to__level___main___closed__3 = _init_l_lean_elaborator_to__level___main___closed__3();
 l_lean_elaborator_to__level___main___closed__4 = _init_l_lean_elaborator_to__level___main___closed__4();
 l_lean_elaborator_expr_mk__annotation___closed__1 = _init_l_lean_elaborator_expr_mk__annotation___closed__1();
 l_lean_elaborator_dummy = _init_l_lean_elaborator_dummy();
 l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1 = _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1();
 l_lean_elaborator_mk__eqns___closed__1 = _init_l_lean_elaborator_mk__eqns___closed__1();
 l_lean_elaborator_mk__eqns___closed__2 = _init_l_lean_elaborator_mk__eqns___closed__2();
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1();
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1();
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2();
 l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1 = _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1();
 l_lean_elaborator_to__pexpr___main___closed__1 = _init_l_lean_elaborator_to__pexpr___main___closed__1();
 l_lean_elaborator_to__pexpr___main___closed__2 = _init_l_lean_elaborator_to__pexpr___main___closed__2();
 l_lean_elaborator_to__pexpr___main___closed__3 = _init_l_lean_elaborator_to__pexpr___main___closed__3();
 l_lean_elaborator_to__pexpr___main___closed__4 = _init_l_lean_elaborator_to__pexpr___main___closed__4();
 l_lean_elaborator_to__pexpr___main___closed__5 = _init_l_lean_elaborator_to__pexpr___main___closed__5();
 l_lean_elaborator_to__pexpr___main___closed__6 = _init_l_lean_elaborator_to__pexpr___main___closed__6();
 l_lean_elaborator_to__pexpr___main___closed__7 = _init_l_lean_elaborator_to__pexpr___main___closed__7();
 l_lean_elaborator_to__pexpr___main___closed__8 = _init_l_lean_elaborator_to__pexpr___main___closed__8();
 l_lean_elaborator_to__pexpr___main___closed__9 = _init_l_lean_elaborator_to__pexpr___main___closed__9();
 l_lean_elaborator_to__pexpr___main___closed__10 = _init_l_lean_elaborator_to__pexpr___main___closed__10();
 l_lean_elaborator_to__pexpr___main___closed__11 = _init_l_lean_elaborator_to__pexpr___main___closed__11();
 l_lean_elaborator_to__pexpr___main___closed__12 = _init_l_lean_elaborator_to__pexpr___main___closed__12();
 l_lean_elaborator_to__pexpr___main___closed__13 = _init_l_lean_elaborator_to__pexpr___main___closed__13();
 l_lean_elaborator_to__pexpr___main___closed__14 = _init_l_lean_elaborator_to__pexpr___main___closed__14();
 l_lean_elaborator_to__pexpr___main___closed__15 = _init_l_lean_elaborator_to__pexpr___main___closed__15();
 l_lean_elaborator_to__pexpr___main___closed__16 = _init_l_lean_elaborator_to__pexpr___main___closed__16();
 l_lean_elaborator_to__pexpr___main___closed__17 = _init_l_lean_elaborator_to__pexpr___main___closed__17();
 l_lean_elaborator_to__pexpr___main___closed__18 = _init_l_lean_elaborator_to__pexpr___main___closed__18();
 l_lean_elaborator_to__pexpr___main___closed__19 = _init_l_lean_elaborator_to__pexpr___main___closed__19();
 l_lean_elaborator_to__pexpr___main___closed__20 = _init_l_lean_elaborator_to__pexpr___main___closed__20();
 l_lean_elaborator_to__pexpr___main___closed__21 = _init_l_lean_elaborator_to__pexpr___main___closed__21();
 l_lean_elaborator_to__pexpr___main___closed__22 = _init_l_lean_elaborator_to__pexpr___main___closed__22();
 l_lean_elaborator_to__pexpr___main___closed__23 = _init_l_lean_elaborator_to__pexpr___main___closed__23();
 l_lean_elaborator_to__pexpr___main___closed__24 = _init_l_lean_elaborator_to__pexpr___main___closed__24();
 l_lean_elaborator_to__pexpr___main___closed__25 = _init_l_lean_elaborator_to__pexpr___main___closed__25();
 l_lean_elaborator_to__pexpr___main___closed__26 = _init_l_lean_elaborator_to__pexpr___main___closed__26();
 l_lean_elaborator_to__pexpr___main___closed__27 = _init_l_lean_elaborator_to__pexpr___main___closed__27();
 l_lean_elaborator_to__pexpr___main___closed__28 = _init_l_lean_elaborator_to__pexpr___main___closed__28();
 l_lean_elaborator_to__pexpr___main___closed__29 = _init_l_lean_elaborator_to__pexpr___main___closed__29();
 l_lean_elaborator_to__pexpr___main___closed__30 = _init_l_lean_elaborator_to__pexpr___main___closed__30();
 l_lean_elaborator_to__pexpr___main___closed__31 = _init_l_lean_elaborator_to__pexpr___main___closed__31();
 l_lean_elaborator_to__pexpr___main___closed__32 = _init_l_lean_elaborator_to__pexpr___main___closed__32();
 l_lean_elaborator_to__pexpr___main___closed__33 = _init_l_lean_elaborator_to__pexpr___main___closed__33();
 l_lean_elaborator_to__pexpr___main___closed__34 = _init_l_lean_elaborator_to__pexpr___main___closed__34();
 l_lean_elaborator_to__pexpr___main___closed__35 = _init_l_lean_elaborator_to__pexpr___main___closed__35();
 l_lean_elaborator_to__pexpr___main___closed__36 = _init_l_lean_elaborator_to__pexpr___main___closed__36();
 l_lean_elaborator_to__pexpr___main___closed__37 = _init_l_lean_elaborator_to__pexpr___main___closed__37();
 l_lean_elaborator_to__pexpr___main___closed__38 = _init_l_lean_elaborator_to__pexpr___main___closed__38();
 l_lean_elaborator_to__pexpr___main___closed__39 = _init_l_lean_elaborator_to__pexpr___main___closed__39();
 l_lean_elaborator_to__pexpr___main___closed__40 = _init_l_lean_elaborator_to__pexpr___main___closed__40();
 l_lean_elaborator_to__pexpr___main___closed__41 = _init_l_lean_elaborator_to__pexpr___main___closed__41();
 l_lean_elaborator_to__pexpr___main___closed__42 = _init_l_lean_elaborator_to__pexpr___main___closed__42();
 l_lean_elaborator_to__pexpr___main___closed__43 = _init_l_lean_elaborator_to__pexpr___main___closed__43();
 l_lean_elaborator_to__pexpr___main___closed__44 = _init_l_lean_elaborator_to__pexpr___main___closed__44();
 l_lean_elaborator_to__pexpr___main___closed__45 = _init_l_lean_elaborator_to__pexpr___main___closed__45();
 l_lean_elaborator_to__pexpr___main___closed__46 = _init_l_lean_elaborator_to__pexpr___main___closed__46();
 l_lean_elaborator_to__pexpr___main___closed__47 = _init_l_lean_elaborator_to__pexpr___main___closed__47();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6();
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13();
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__1 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__2 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__3 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__4 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__5 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__6 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6();
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__7 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7();
 l_lean_elaborator_locally___rarg___closed__1 = _init_l_lean_elaborator_locally___rarg___closed__1();
 l_lean_elaborator_elab__def__like___closed__1 = _init_l_lean_elaborator_elab__def__like___closed__1();
 l_lean_elaborator_elab__def__like___closed__2 = _init_l_lean_elaborator_elab__def__like___closed__2();
 l_lean_elaborator_infer__mod__to__pexpr___closed__1 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1();
 l_lean_elaborator_infer__mod__to__pexpr___closed__2 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2();
 l_lean_elaborator_infer__mod__to__pexpr___closed__3 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3();
 l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6();
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7();
 l_lean_elaborator_variables_elaborate___closed__1 = _init_l_lean_elaborator_variables_elaborate___closed__1();
 l_lean_elaborator_variables_elaborate___closed__2 = _init_l_lean_elaborator_variables_elaborate___closed__2();
 l_lean_elaborator_module_header_elaborate___closed__1 = _init_l_lean_elaborator_module_header_elaborate___closed__1();
 l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1 = _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4();
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5();
 l_lean_elaborator_command__parser__config_register__notation__parser___closed__1 = _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1();
 l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1();
 l_lean_elaborator_yield__to__outside___rarg___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___closed__1();
 l_lean_elaborator_postprocess__notation__spec___closed__1 = _init_l_lean_elaborator_postprocess__notation__spec___closed__1();
 l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1();
 l_lean_elaborator_match__spec___closed__1 = _init_l_lean_elaborator_match__spec___closed__1();
 l_lean_elaborator_notation_elaborate__aux___closed__1 = _init_l_lean_elaborator_notation_elaborate__aux___closed__1();
 l_lean_elaborator_mk__notation__kind___rarg___closed__1 = _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1();
 l_lean_elaborator_notation_elaborate___closed__1 = _init_l_lean_elaborator_notation_elaborate___closed__1();
 l_lean_elaborator_notation_elaborate___closed__2 = _init_l_lean_elaborator_notation_elaborate___closed__2();
 l_lean_elaborator_universe_elaborate___closed__1 = _init_l_lean_elaborator_universe_elaborate___closed__1();
 l_lean_elaborator_universe_elaborate___closed__2 = _init_l_lean_elaborator_universe_elaborate___closed__2();
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1();
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2();
 l_lean_elaborator_attribute_elaborate___closed__1 = _init_l_lean_elaborator_attribute_elaborate___closed__1();
 l_lean_elaborator_attribute_elaborate___closed__2 = _init_l_lean_elaborator_attribute_elaborate___closed__2();
 l_lean_elaborator_check_elaborate___closed__1 = _init_l_lean_elaborator_check_elaborate___closed__1();
 l_lean_elaborator_init__quot_elaborate___closed__1 = _init_l_lean_elaborator_init__quot_elaborate___closed__1();
 l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1 = _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1();
 l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4();
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5();
 l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1();
 l_lean_elaborator_end__scope___lambda__2___closed__1 = _init_l_lean_elaborator_end__scope___lambda__2___closed__1();
 l_lean_elaborator_end__scope___lambda__2___closed__2 = _init_l_lean_elaborator_end__scope___lambda__2___closed__2();
 l_lean_elaborator_end__scope___lambda__3___closed__1 = _init_l_lean_elaborator_end__scope___lambda__3___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1();
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2();
 l_lean_elaborator_section_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1();
 l_lean_elaborator_section_elaborate___closed__1 = _init_l_lean_elaborator_section_elaborate___closed__1();
 l_lean_elaborator_namespace_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1();
 l_lean_elaborator_namespace_elaborate___closed__1 = _init_l_lean_elaborator_namespace_elaborate___closed__1();
 l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1 = _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1();
 l_lean_elaborator_elaborators = _init_l_lean_elaborator_elaborators();
 l_lean_elaborator_resolve__context___main___closed__1 = _init_l_lean_elaborator_resolve__context___main___closed__1();
 l_lean_elaborator_max__recursion = _init_l_lean_elaborator_max__recursion();
 l_lean_elaborator_max__commands = _init_l_lean_elaborator_max__commands();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1();
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2();
 l_lean_elaborator_run___lambda__1___closed__1 = _init_l_lean_elaborator_run___lambda__1___closed__1();
 l_lean_elaborator_run___lambda__2___closed__1 = _init_l_lean_elaborator_run___lambda__2___closed__1();
 l_lean_elaborator_run___lambda__4___closed__1 = _init_l_lean_elaborator_run___lambda__4___closed__1();
 l_lean_elaborator_run___closed__1 = _init_l_lean_elaborator_run___closed__1();
 l_lean_elaborator_run___closed__2 = _init_l_lean_elaborator_run___closed__2();
 l_lean_elaborator_run___closed__3 = _init_l_lean_elaborator_run___closed__3();
 l_lean_elaborator_run___closed__4 = _init_l_lean_elaborator_run___closed__4();
 l_lean_elaborator_run___closed__5 = _init_l_lean_elaborator_run___closed__5();
 l_lean_elaborator_run___closed__6 = _init_l_lean_elaborator_run___closed__6();
 l_lean_elaborator_run___closed__7 = _init_l_lean_elaborator_run___closed__7();
}
