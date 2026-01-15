#ifndef INCLUDE_INCLUDE_PARSER_H_
#define INCLUDE_INCLUDE_PARSER_H_

#include "lexer.h"
#include "tree.h"
#include <stddef.h>

tree_t *parse(token_list_t *tokenstokens);

/* Literals */
tree_t *parse_literal(token_list_t *tokens, size_t index);
tree_t *parse_literal_array(token_list_t *tokens, size_t index);
tree_t *parse_literal_map(token_list_t *tokens, size_t index);

/* Types */
tree_t *parse_type(token_list_t *tokens, size_t index);
tree_t *parse_type_array(token_list_t *tokens, size_t index);
tree_t *parse_type_map(token_list_t *tokens, size_t index);
tree_t *parse_type_function(token_list_t *tokens, size_t index);

/* Declarations */
tree_t *parse_declaration(token_list_t *tokens, size_t index);
tree_t *parse_decl_variable(token_list_t *tokens, size_t index);
tree_t *parse_decl_function(token_list_t *tokens, size_t index);
tree_t *parse_decl_struct(token_list_t *tokens, size_t index);
tree_t *parse_decl_enum(token_list_t *tokens, size_t index);

/* Statements */
tree_t *parse_statement(token_list_t *tokens, size_t index);
tree_t *parse_stmt_if(token_list_t *tokens, size_t index);

/* Utilities */
int tok_txt_is(token_t *token, token_type_t type);
int tok_type_is(token_t *token, const char *txt);

#endif // INCLUDE_INCLUDE_PARSER_H_
