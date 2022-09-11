#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  aux_sym_load_statement_token1 = 2,
  aux_sym_load_opcode_token1 = 3,
  aux_sym_load_opcode_token2 = 4,
  aux_sym_load_opcode_token3 = 5,
  aux_sym_push_opcode_token1 = 6,
  aux_sym_push_opcode_token2 = 7,
  aux_sym_opcode_token1 = 8,
  aux_sym_opcode_token2 = 9,
  aux_sym_opcode_token3 = 10,
  aux_sym_opcode_token4 = 11,
  aux_sym_opcode_token5 = 12,
  aux_sym_opcode_token6 = 13,
  aux_sym_opcode_token7 = 14,
  aux_sym_opcode_token8 = 15,
  aux_sym_opcode_token9 = 16,
  aux_sym_opcode_token10 = 17,
  aux_sym_opcode_token11 = 18,
  aux_sym_opcode_token12 = 19,
  aux_sym_opcode_token13 = 20,
  aux_sym_opcode_token14 = 21,
  aux_sym_opcode_token15 = 22,
  aux_sym_opcode_token16 = 23,
  aux_sym_opcode_token17 = 24,
  aux_sym_opcode_token18 = 25,
  aux_sym_opcode_token19 = 26,
  aux_sym_opcode_token20 = 27,
  aux_sym_opcode_token21 = 28,
  aux_sym_opcode_token22 = 29,
  aux_sym_opcode_token23 = 30,
  aux_sym_branch_opcode_token1 = 31,
  aux_sym_branch_opcode_token2 = 32,
  aux_sym_branch_opcode_token3 = 33,
  aux_sym_branch_opcode_token4 = 34,
  aux_sym_branch_opcode_token5 = 35,
  aux_sym_branch_opcode_token6 = 36,
  aux_sym_branch_opcode_token7 = 37,
  aux_sym_branch_opcode_token8 = 38,
  aux_sym_branch_opcode_token9 = 39,
  sym_label = 40,
  aux_sym_register_token1 = 41,
  aux_sym_register_token2 = 42,
  aux_sym_register_token3 = 43,
  aux_sym_register_token4 = 44,
  sym_directive = 45,
  aux_sym_comment_token1 = 46,
  aux_sym_comment_token2 = 47,
  aux_sym_constant_token1 = 48,
  aux_sym_constant_token2 = 49,
  sym_identifier = 50,
  sym_source_file = 51,
  aux_sym__statement = 52,
  sym_function_definition = 53,
  sym_math_statement = 54,
  sym_load_statement = 55,
  sym_load_opcode = 56,
  sym_pool_statement = 57,
  sym_push_statement = 58,
  sym_push_opcode = 59,
  sym_simple_statement = 60,
  sym_opcode = 61,
  sym_return_statement = 62,
  sym_branch_statement = 63,
  sym_branch_opcode = 64,
  sym_register = 65,
  sym_comment = 66,
  sym_constant = 67,
  aux_sym_function_definition_repeat1 = 68,
  alias_sym_func_name = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [aux_sym_load_opcode_token1] = "load_opcode_token1",
  [aux_sym_load_opcode_token2] = "load_opcode_token2",
  [aux_sym_load_opcode_token3] = "load_opcode_token3",
  [aux_sym_push_opcode_token1] = "push_opcode_token1",
  [aux_sym_push_opcode_token2] = "push_opcode_token2",
  [aux_sym_opcode_token1] = "opcode_token1",
  [aux_sym_opcode_token2] = "opcode_token2",
  [aux_sym_opcode_token3] = "opcode_token3",
  [aux_sym_opcode_token4] = "opcode_token4",
  [aux_sym_opcode_token5] = "opcode_token5",
  [aux_sym_opcode_token6] = "opcode_token6",
  [aux_sym_opcode_token7] = "opcode_token7",
  [aux_sym_opcode_token8] = "opcode_token8",
  [aux_sym_opcode_token9] = "opcode_token9",
  [aux_sym_opcode_token10] = "opcode_token10",
  [aux_sym_opcode_token11] = "opcode_token11",
  [aux_sym_opcode_token12] = "opcode_token12",
  [aux_sym_opcode_token13] = "opcode_token13",
  [aux_sym_opcode_token14] = "opcode_token14",
  [aux_sym_opcode_token15] = "opcode_token15",
  [aux_sym_opcode_token16] = "opcode_token16",
  [aux_sym_opcode_token17] = "opcode_token17",
  [aux_sym_opcode_token18] = "opcode_token18",
  [aux_sym_opcode_token19] = "opcode_token19",
  [aux_sym_opcode_token20] = "opcode_token20",
  [aux_sym_opcode_token21] = "opcode_token21",
  [aux_sym_opcode_token22] = "opcode_token22",
  [aux_sym_opcode_token23] = "opcode_token23",
  [aux_sym_branch_opcode_token1] = "branch_opcode_token1",
  [aux_sym_branch_opcode_token2] = "branch_opcode_token2",
  [aux_sym_branch_opcode_token3] = "branch_opcode_token3",
  [aux_sym_branch_opcode_token4] = "branch_opcode_token4",
  [aux_sym_branch_opcode_token5] = "branch_opcode_token5",
  [aux_sym_branch_opcode_token6] = "branch_opcode_token6",
  [aux_sym_branch_opcode_token7] = "branch_opcode_token7",
  [aux_sym_branch_opcode_token8] = "branch_opcode_token8",
  [aux_sym_branch_opcode_token9] = "branch_opcode_token9",
  [sym_label] = "label",
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [sym_directive] = "directive",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [sym_identifier] = "label",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_math_statement] = "math_statement",
  [sym_load_statement] = "load_statement",
  [sym_load_opcode] = "load_opcode",
  [sym_pool_statement] = "pool_statement",
  [sym_push_statement] = "push_statement",
  [sym_push_opcode] = "push_opcode",
  [sym_simple_statement] = "simple_statement",
  [sym_opcode] = "opcode",
  [sym_return_statement] = "return_statement",
  [sym_branch_statement] = "branch_statement",
  [sym_branch_opcode] = "branch_opcode",
  [sym_register] = "register",
  [sym_comment] = "comment",
  [sym_constant] = "constant",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [alias_sym_func_name] = "func_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_load_statement_token1] = aux_sym_load_statement_token1,
  [aux_sym_load_opcode_token1] = aux_sym_load_opcode_token1,
  [aux_sym_load_opcode_token2] = aux_sym_load_opcode_token2,
  [aux_sym_load_opcode_token3] = aux_sym_load_opcode_token3,
  [aux_sym_push_opcode_token1] = aux_sym_push_opcode_token1,
  [aux_sym_push_opcode_token2] = aux_sym_push_opcode_token2,
  [aux_sym_opcode_token1] = aux_sym_opcode_token1,
  [aux_sym_opcode_token2] = aux_sym_opcode_token2,
  [aux_sym_opcode_token3] = aux_sym_opcode_token3,
  [aux_sym_opcode_token4] = aux_sym_opcode_token4,
  [aux_sym_opcode_token5] = aux_sym_opcode_token5,
  [aux_sym_opcode_token6] = aux_sym_opcode_token6,
  [aux_sym_opcode_token7] = aux_sym_opcode_token7,
  [aux_sym_opcode_token8] = aux_sym_opcode_token8,
  [aux_sym_opcode_token9] = aux_sym_opcode_token9,
  [aux_sym_opcode_token10] = aux_sym_opcode_token10,
  [aux_sym_opcode_token11] = aux_sym_opcode_token11,
  [aux_sym_opcode_token12] = aux_sym_opcode_token12,
  [aux_sym_opcode_token13] = aux_sym_opcode_token13,
  [aux_sym_opcode_token14] = aux_sym_opcode_token14,
  [aux_sym_opcode_token15] = aux_sym_opcode_token15,
  [aux_sym_opcode_token16] = aux_sym_opcode_token16,
  [aux_sym_opcode_token17] = aux_sym_opcode_token17,
  [aux_sym_opcode_token18] = aux_sym_opcode_token18,
  [aux_sym_opcode_token19] = aux_sym_opcode_token19,
  [aux_sym_opcode_token20] = aux_sym_opcode_token20,
  [aux_sym_opcode_token21] = aux_sym_opcode_token21,
  [aux_sym_opcode_token22] = aux_sym_opcode_token22,
  [aux_sym_opcode_token23] = aux_sym_opcode_token23,
  [aux_sym_branch_opcode_token1] = aux_sym_branch_opcode_token1,
  [aux_sym_branch_opcode_token2] = aux_sym_branch_opcode_token2,
  [aux_sym_branch_opcode_token3] = aux_sym_branch_opcode_token3,
  [aux_sym_branch_opcode_token4] = aux_sym_branch_opcode_token4,
  [aux_sym_branch_opcode_token5] = aux_sym_branch_opcode_token5,
  [aux_sym_branch_opcode_token6] = aux_sym_branch_opcode_token6,
  [aux_sym_branch_opcode_token7] = aux_sym_branch_opcode_token7,
  [aux_sym_branch_opcode_token8] = aux_sym_branch_opcode_token8,
  [aux_sym_branch_opcode_token9] = aux_sym_branch_opcode_token9,
  [sym_label] = sym_label,
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [sym_directive] = sym_directive,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [sym_identifier] = sym_label,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_math_statement] = sym_math_statement,
  [sym_load_statement] = sym_load_statement,
  [sym_load_opcode] = sym_load_opcode,
  [sym_pool_statement] = sym_pool_statement,
  [sym_push_statement] = sym_push_statement,
  [sym_push_opcode] = sym_push_opcode,
  [sym_simple_statement] = sym_simple_statement,
  [sym_opcode] = sym_opcode,
  [sym_return_statement] = sym_return_statement,
  [sym_branch_statement] = sym_branch_statement,
  [sym_branch_opcode] = sym_branch_opcode,
  [sym_register] = sym_register,
  [sym_comment] = sym_comment,
  [sym_constant] = sym_constant,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [alias_sym_func_name] = alias_sym_func_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_load_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_push_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_push_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_opcode_token9] = {
    .visible = false,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_register_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_math_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_load_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_load_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_pool_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_push_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_push_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_func_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_func_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 5,
  [36] = 36,
  [37] = 23,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '\r') SKIP(70)
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_load_opcode_token3);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_opcode_token18);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_opcode_token19);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_opcode_token20);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_opcode_token21);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_opcode_token22);
      if (lookahead == ':') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_opcode_token23);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 71},
  [26] = {.lex_state = 71},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 75},
  [39] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_load_opcode_token1] = ACTIONS(1),
    [aux_sym_load_opcode_token2] = ACTIONS(1),
    [aux_sym_load_opcode_token3] = ACTIONS(1),
    [aux_sym_push_opcode_token1] = ACTIONS(1),
    [aux_sym_push_opcode_token2] = ACTIONS(1),
    [aux_sym_opcode_token1] = ACTIONS(1),
    [aux_sym_opcode_token2] = ACTIONS(1),
    [aux_sym_opcode_token3] = ACTIONS(1),
    [aux_sym_opcode_token4] = ACTIONS(1),
    [aux_sym_opcode_token5] = ACTIONS(1),
    [aux_sym_opcode_token6] = ACTIONS(1),
    [aux_sym_opcode_token7] = ACTIONS(1),
    [aux_sym_opcode_token8] = ACTIONS(1),
    [aux_sym_opcode_token9] = ACTIONS(1),
    [aux_sym_opcode_token10] = ACTIONS(1),
    [aux_sym_opcode_token11] = ACTIONS(1),
    [aux_sym_opcode_token12] = ACTIONS(1),
    [aux_sym_opcode_token13] = ACTIONS(1),
    [aux_sym_opcode_token14] = ACTIONS(1),
    [aux_sym_opcode_token15] = ACTIONS(1),
    [aux_sym_opcode_token16] = ACTIONS(1),
    [aux_sym_opcode_token17] = ACTIONS(1),
    [aux_sym_opcode_token18] = ACTIONS(1),
    [aux_sym_opcode_token19] = ACTIONS(1),
    [aux_sym_opcode_token20] = ACTIONS(1),
    [aux_sym_opcode_token21] = ACTIONS(1),
    [aux_sym_opcode_token22] = ACTIONS(1),
    [aux_sym_opcode_token23] = ACTIONS(1),
    [aux_sym_branch_opcode_token1] = ACTIONS(1),
    [aux_sym_branch_opcode_token2] = ACTIONS(1),
    [aux_sym_branch_opcode_token3] = ACTIONS(1),
    [aux_sym_branch_opcode_token4] = ACTIONS(1),
    [aux_sym_branch_opcode_token5] = ACTIONS(1),
    [aux_sym_branch_opcode_token6] = ACTIONS(1),
    [aux_sym_branch_opcode_token7] = ACTIONS(1),
    [aux_sym_branch_opcode_token8] = ACTIONS(1),
    [aux_sym_branch_opcode_token9] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [aux_sym__statement] = STATE(24),
    [sym_function_definition] = STATE(28),
    [sym_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_directive] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [2] = {
    [sym_math_statement] = STATE(14),
    [sym_load_statement] = STATE(14),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(14),
    [sym_push_statement] = STATE(14),
    [sym_push_opcode] = STATE(36),
    [sym_simple_statement] = STATE(14),
    [sym_opcode] = STATE(22),
    [sym_return_statement] = STATE(29),
    [sym_branch_statement] = STATE(14),
    [sym_branch_opcode] = STATE(20),
    [sym_comment] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(3),
    [aux_sym_load_opcode_token1] = ACTIONS(13),
    [aux_sym_load_opcode_token2] = ACTIONS(13),
    [aux_sym_load_opcode_token3] = ACTIONS(13),
    [aux_sym_push_opcode_token1] = ACTIONS(15),
    [aux_sym_push_opcode_token2] = ACTIONS(15),
    [aux_sym_opcode_token1] = ACTIONS(17),
    [aux_sym_opcode_token2] = ACTIONS(17),
    [aux_sym_opcode_token3] = ACTIONS(17),
    [aux_sym_opcode_token4] = ACTIONS(17),
    [aux_sym_opcode_token5] = ACTIONS(17),
    [aux_sym_opcode_token6] = ACTIONS(17),
    [aux_sym_opcode_token7] = ACTIONS(17),
    [aux_sym_opcode_token8] = ACTIONS(17),
    [aux_sym_opcode_token9] = ACTIONS(17),
    [aux_sym_opcode_token10] = ACTIONS(17),
    [aux_sym_opcode_token11] = ACTIONS(17),
    [aux_sym_opcode_token12] = ACTIONS(17),
    [aux_sym_opcode_token13] = ACTIONS(17),
    [aux_sym_opcode_token14] = ACTIONS(17),
    [aux_sym_opcode_token15] = ACTIONS(17),
    [aux_sym_opcode_token16] = ACTIONS(17),
    [aux_sym_opcode_token17] = ACTIONS(17),
    [aux_sym_opcode_token18] = ACTIONS(17),
    [aux_sym_opcode_token19] = ACTIONS(17),
    [aux_sym_opcode_token20] = ACTIONS(17),
    [aux_sym_opcode_token21] = ACTIONS(17),
    [aux_sym_opcode_token22] = ACTIONS(17),
    [aux_sym_opcode_token23] = ACTIONS(17),
    [aux_sym_branch_opcode_token1] = ACTIONS(19),
    [aux_sym_branch_opcode_token2] = ACTIONS(19),
    [aux_sym_branch_opcode_token3] = ACTIONS(19),
    [aux_sym_branch_opcode_token4] = ACTIONS(19),
    [aux_sym_branch_opcode_token5] = ACTIONS(19),
    [aux_sym_branch_opcode_token6] = ACTIONS(19),
    [aux_sym_branch_opcode_token7] = ACTIONS(19),
    [aux_sym_branch_opcode_token8] = ACTIONS(19),
    [aux_sym_branch_opcode_token9] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [3] = {
    [sym_math_statement] = STATE(14),
    [sym_load_statement] = STATE(14),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(14),
    [sym_push_statement] = STATE(14),
    [sym_push_opcode] = STATE(36),
    [sym_simple_statement] = STATE(14),
    [sym_opcode] = STATE(22),
    [sym_return_statement] = STATE(31),
    [sym_branch_statement] = STATE(14),
    [sym_branch_opcode] = STATE(20),
    [sym_comment] = STATE(3),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [aux_sym_load_opcode_token1] = ACTIONS(13),
    [aux_sym_load_opcode_token2] = ACTIONS(13),
    [aux_sym_load_opcode_token3] = ACTIONS(13),
    [aux_sym_push_opcode_token1] = ACTIONS(15),
    [aux_sym_push_opcode_token2] = ACTIONS(15),
    [aux_sym_opcode_token1] = ACTIONS(17),
    [aux_sym_opcode_token2] = ACTIONS(17),
    [aux_sym_opcode_token3] = ACTIONS(17),
    [aux_sym_opcode_token4] = ACTIONS(17),
    [aux_sym_opcode_token5] = ACTIONS(17),
    [aux_sym_opcode_token6] = ACTIONS(17),
    [aux_sym_opcode_token7] = ACTIONS(17),
    [aux_sym_opcode_token8] = ACTIONS(17),
    [aux_sym_opcode_token9] = ACTIONS(17),
    [aux_sym_opcode_token10] = ACTIONS(17),
    [aux_sym_opcode_token11] = ACTIONS(17),
    [aux_sym_opcode_token12] = ACTIONS(17),
    [aux_sym_opcode_token13] = ACTIONS(17),
    [aux_sym_opcode_token14] = ACTIONS(17),
    [aux_sym_opcode_token15] = ACTIONS(17),
    [aux_sym_opcode_token16] = ACTIONS(17),
    [aux_sym_opcode_token17] = ACTIONS(17),
    [aux_sym_opcode_token18] = ACTIONS(17),
    [aux_sym_opcode_token19] = ACTIONS(17),
    [aux_sym_opcode_token20] = ACTIONS(17),
    [aux_sym_opcode_token21] = ACTIONS(17),
    [aux_sym_opcode_token22] = ACTIONS(17),
    [aux_sym_opcode_token23] = ACTIONS(17),
    [aux_sym_branch_opcode_token1] = ACTIONS(19),
    [aux_sym_branch_opcode_token2] = ACTIONS(19),
    [aux_sym_branch_opcode_token3] = ACTIONS(19),
    [aux_sym_branch_opcode_token4] = ACTIONS(19),
    [aux_sym_branch_opcode_token5] = ACTIONS(19),
    [aux_sym_branch_opcode_token6] = ACTIONS(19),
    [aux_sym_branch_opcode_token7] = ACTIONS(19),
    [aux_sym_branch_opcode_token8] = ACTIONS(19),
    [aux_sym_branch_opcode_token9] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [4] = {
    [sym_math_statement] = STATE(14),
    [sym_load_statement] = STATE(14),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(14),
    [sym_push_statement] = STATE(14),
    [sym_push_opcode] = STATE(36),
    [sym_simple_statement] = STATE(14),
    [sym_opcode] = STATE(22),
    [sym_branch_statement] = STATE(14),
    [sym_branch_opcode] = STATE(33),
    [sym_comment] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [aux_sym_load_opcode_token1] = ACTIONS(23),
    [aux_sym_load_opcode_token2] = ACTIONS(23),
    [aux_sym_load_opcode_token3] = ACTIONS(23),
    [aux_sym_push_opcode_token1] = ACTIONS(26),
    [aux_sym_push_opcode_token2] = ACTIONS(26),
    [aux_sym_opcode_token1] = ACTIONS(29),
    [aux_sym_opcode_token2] = ACTIONS(29),
    [aux_sym_opcode_token3] = ACTIONS(29),
    [aux_sym_opcode_token4] = ACTIONS(29),
    [aux_sym_opcode_token5] = ACTIONS(29),
    [aux_sym_opcode_token6] = ACTIONS(29),
    [aux_sym_opcode_token7] = ACTIONS(29),
    [aux_sym_opcode_token8] = ACTIONS(29),
    [aux_sym_opcode_token9] = ACTIONS(29),
    [aux_sym_opcode_token10] = ACTIONS(29),
    [aux_sym_opcode_token11] = ACTIONS(29),
    [aux_sym_opcode_token12] = ACTIONS(29),
    [aux_sym_opcode_token13] = ACTIONS(29),
    [aux_sym_opcode_token14] = ACTIONS(29),
    [aux_sym_opcode_token15] = ACTIONS(29),
    [aux_sym_opcode_token16] = ACTIONS(29),
    [aux_sym_opcode_token17] = ACTIONS(29),
    [aux_sym_opcode_token18] = ACTIONS(29),
    [aux_sym_opcode_token19] = ACTIONS(29),
    [aux_sym_opcode_token20] = ACTIONS(29),
    [aux_sym_opcode_token21] = ACTIONS(29),
    [aux_sym_opcode_token22] = ACTIONS(29),
    [aux_sym_opcode_token23] = ACTIONS(29),
    [aux_sym_branch_opcode_token1] = ACTIONS(32),
    [aux_sym_branch_opcode_token2] = ACTIONS(32),
    [aux_sym_branch_opcode_token3] = ACTIONS(32),
    [aux_sym_branch_opcode_token4] = ACTIONS(32),
    [aux_sym_branch_opcode_token5] = ACTIONS(32),
    [aux_sym_branch_opcode_token6] = ACTIONS(32),
    [aux_sym_branch_opcode_token7] = ACTIONS(32),
    [aux_sym_branch_opcode_token8] = ACTIONS(32),
    [aux_sym_branch_opcode_token9] = ACTIONS(32),
    [sym_label] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(40),
    [aux_sym_load_opcode_token1] = ACTIONS(40),
    [aux_sym_load_opcode_token2] = ACTIONS(40),
    [aux_sym_load_opcode_token3] = ACTIONS(40),
    [aux_sym_push_opcode_token1] = ACTIONS(40),
    [aux_sym_push_opcode_token2] = ACTIONS(40),
    [aux_sym_opcode_token1] = ACTIONS(40),
    [aux_sym_opcode_token2] = ACTIONS(40),
    [aux_sym_opcode_token3] = ACTIONS(40),
    [aux_sym_opcode_token4] = ACTIONS(40),
    [aux_sym_opcode_token5] = ACTIONS(40),
    [aux_sym_opcode_token6] = ACTIONS(40),
    [aux_sym_opcode_token7] = ACTIONS(40),
    [aux_sym_opcode_token8] = ACTIONS(40),
    [aux_sym_opcode_token9] = ACTIONS(40),
    [aux_sym_opcode_token10] = ACTIONS(40),
    [aux_sym_opcode_token11] = ACTIONS(40),
    [aux_sym_opcode_token12] = ACTIONS(40),
    [aux_sym_opcode_token13] = ACTIONS(40),
    [aux_sym_opcode_token14] = ACTIONS(40),
    [aux_sym_opcode_token15] = ACTIONS(40),
    [aux_sym_opcode_token16] = ACTIONS(40),
    [aux_sym_opcode_token17] = ACTIONS(40),
    [aux_sym_opcode_token18] = ACTIONS(40),
    [aux_sym_opcode_token19] = ACTIONS(40),
    [aux_sym_opcode_token20] = ACTIONS(40),
    [aux_sym_opcode_token21] = ACTIONS(40),
    [aux_sym_opcode_token22] = ACTIONS(40),
    [aux_sym_opcode_token23] = ACTIONS(40),
    [aux_sym_branch_opcode_token1] = ACTIONS(40),
    [aux_sym_branch_opcode_token2] = ACTIONS(40),
    [aux_sym_branch_opcode_token3] = ACTIONS(40),
    [aux_sym_branch_opcode_token4] = ACTIONS(40),
    [aux_sym_branch_opcode_token5] = ACTIONS(40),
    [aux_sym_branch_opcode_token6] = ACTIONS(40),
    [aux_sym_branch_opcode_token7] = ACTIONS(40),
    [aux_sym_branch_opcode_token8] = ACTIONS(40),
    [aux_sym_branch_opcode_token9] = ACTIONS(40),
    [sym_label] = ACTIONS(38),
    [aux_sym_register_token1] = ACTIONS(40),
    [aux_sym_register_token2] = ACTIONS(40),
    [aux_sym_register_token3] = ACTIONS(40),
    [aux_sym_register_token4] = ACTIONS(40),
    [sym_directive] = ACTIONS(40),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_constant_token1] = ACTIONS(40),
    [aux_sym_constant_token2] = ACTIONS(40),
  },
  [6] = {
    [sym_register] = STATE(11),
    [sym_comment] = STATE(6),
    [sym_constant] = STATE(11),
    [anon_sym_COMMA] = ACTIONS(42),
    [aux_sym_load_opcode_token1] = ACTIONS(44),
    [aux_sym_load_opcode_token2] = ACTIONS(44),
    [aux_sym_load_opcode_token3] = ACTIONS(44),
    [aux_sym_push_opcode_token1] = ACTIONS(44),
    [aux_sym_push_opcode_token2] = ACTIONS(44),
    [aux_sym_opcode_token1] = ACTIONS(44),
    [aux_sym_opcode_token2] = ACTIONS(44),
    [aux_sym_opcode_token3] = ACTIONS(44),
    [aux_sym_opcode_token4] = ACTIONS(44),
    [aux_sym_opcode_token5] = ACTIONS(44),
    [aux_sym_opcode_token6] = ACTIONS(44),
    [aux_sym_opcode_token7] = ACTIONS(44),
    [aux_sym_opcode_token8] = ACTIONS(44),
    [aux_sym_opcode_token9] = ACTIONS(44),
    [aux_sym_opcode_token10] = ACTIONS(44),
    [aux_sym_opcode_token11] = ACTIONS(44),
    [aux_sym_opcode_token12] = ACTIONS(44),
    [aux_sym_opcode_token13] = ACTIONS(44),
    [aux_sym_opcode_token14] = ACTIONS(44),
    [aux_sym_opcode_token15] = ACTIONS(44),
    [aux_sym_opcode_token16] = ACTIONS(44),
    [aux_sym_opcode_token17] = ACTIONS(44),
    [aux_sym_opcode_token18] = ACTIONS(44),
    [aux_sym_opcode_token19] = ACTIONS(44),
    [aux_sym_opcode_token20] = ACTIONS(44),
    [aux_sym_opcode_token21] = ACTIONS(44),
    [aux_sym_opcode_token22] = ACTIONS(44),
    [aux_sym_opcode_token23] = ACTIONS(44),
    [aux_sym_branch_opcode_token1] = ACTIONS(44),
    [aux_sym_branch_opcode_token2] = ACTIONS(44),
    [aux_sym_branch_opcode_token3] = ACTIONS(44),
    [aux_sym_branch_opcode_token4] = ACTIONS(44),
    [aux_sym_branch_opcode_token5] = ACTIONS(44),
    [aux_sym_branch_opcode_token6] = ACTIONS(44),
    [aux_sym_branch_opcode_token7] = ACTIONS(44),
    [aux_sym_branch_opcode_token8] = ACTIONS(44),
    [aux_sym_branch_opcode_token9] = ACTIONS(44),
    [sym_label] = ACTIONS(46),
    [aux_sym_register_token1] = ACTIONS(48),
    [aux_sym_register_token2] = ACTIONS(48),
    [aux_sym_register_token3] = ACTIONS(48),
    [aux_sym_register_token4] = ACTIONS(48),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_constant_token1] = ACTIONS(50),
    [aux_sym_constant_token2] = ACTIONS(50),
  },
  [7] = {
    [sym_register] = STATE(8),
    [sym_comment] = STATE(7),
    [sym_constant] = STATE(13),
    [aux_sym_load_opcode_token1] = ACTIONS(52),
    [aux_sym_load_opcode_token2] = ACTIONS(52),
    [aux_sym_load_opcode_token3] = ACTIONS(52),
    [aux_sym_push_opcode_token1] = ACTIONS(52),
    [aux_sym_push_opcode_token2] = ACTIONS(52),
    [aux_sym_opcode_token1] = ACTIONS(52),
    [aux_sym_opcode_token2] = ACTIONS(52),
    [aux_sym_opcode_token3] = ACTIONS(52),
    [aux_sym_opcode_token4] = ACTIONS(52),
    [aux_sym_opcode_token5] = ACTIONS(52),
    [aux_sym_opcode_token6] = ACTIONS(52),
    [aux_sym_opcode_token7] = ACTIONS(52),
    [aux_sym_opcode_token8] = ACTIONS(52),
    [aux_sym_opcode_token9] = ACTIONS(52),
    [aux_sym_opcode_token10] = ACTIONS(52),
    [aux_sym_opcode_token11] = ACTIONS(52),
    [aux_sym_opcode_token12] = ACTIONS(52),
    [aux_sym_opcode_token13] = ACTIONS(52),
    [aux_sym_opcode_token14] = ACTIONS(52),
    [aux_sym_opcode_token15] = ACTIONS(52),
    [aux_sym_opcode_token16] = ACTIONS(52),
    [aux_sym_opcode_token17] = ACTIONS(52),
    [aux_sym_opcode_token18] = ACTIONS(52),
    [aux_sym_opcode_token19] = ACTIONS(52),
    [aux_sym_opcode_token20] = ACTIONS(52),
    [aux_sym_opcode_token21] = ACTIONS(52),
    [aux_sym_opcode_token22] = ACTIONS(52),
    [aux_sym_opcode_token23] = ACTIONS(52),
    [aux_sym_branch_opcode_token1] = ACTIONS(52),
    [aux_sym_branch_opcode_token2] = ACTIONS(52),
    [aux_sym_branch_opcode_token3] = ACTIONS(52),
    [aux_sym_branch_opcode_token4] = ACTIONS(52),
    [aux_sym_branch_opcode_token5] = ACTIONS(52),
    [aux_sym_branch_opcode_token6] = ACTIONS(52),
    [aux_sym_branch_opcode_token7] = ACTIONS(52),
    [aux_sym_branch_opcode_token8] = ACTIONS(52),
    [aux_sym_branch_opcode_token9] = ACTIONS(52),
    [sym_label] = ACTIONS(54),
    [aux_sym_register_token1] = ACTIONS(48),
    [aux_sym_register_token2] = ACTIONS(48),
    [aux_sym_register_token3] = ACTIONS(48),
    [aux_sym_register_token4] = ACTIONS(48),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_constant_token1] = ACTIONS(50),
    [aux_sym_constant_token2] = ACTIONS(50),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [anon_sym_COMMA] = ACTIONS(56),
    [aux_sym_load_opcode_token1] = ACTIONS(58),
    [aux_sym_load_opcode_token2] = ACTIONS(58),
    [aux_sym_load_opcode_token3] = ACTIONS(58),
    [aux_sym_push_opcode_token1] = ACTIONS(58),
    [aux_sym_push_opcode_token2] = ACTIONS(58),
    [aux_sym_opcode_token1] = ACTIONS(58),
    [aux_sym_opcode_token2] = ACTIONS(58),
    [aux_sym_opcode_token3] = ACTIONS(58),
    [aux_sym_opcode_token4] = ACTIONS(58),
    [aux_sym_opcode_token5] = ACTIONS(58),
    [aux_sym_opcode_token6] = ACTIONS(58),
    [aux_sym_opcode_token7] = ACTIONS(58),
    [aux_sym_opcode_token8] = ACTIONS(58),
    [aux_sym_opcode_token9] = ACTIONS(58),
    [aux_sym_opcode_token10] = ACTIONS(58),
    [aux_sym_opcode_token11] = ACTIONS(58),
    [aux_sym_opcode_token12] = ACTIONS(58),
    [aux_sym_opcode_token13] = ACTIONS(58),
    [aux_sym_opcode_token14] = ACTIONS(58),
    [aux_sym_opcode_token15] = ACTIONS(58),
    [aux_sym_opcode_token16] = ACTIONS(58),
    [aux_sym_opcode_token17] = ACTIONS(58),
    [aux_sym_opcode_token18] = ACTIONS(58),
    [aux_sym_opcode_token19] = ACTIONS(58),
    [aux_sym_opcode_token20] = ACTIONS(58),
    [aux_sym_opcode_token21] = ACTIONS(58),
    [aux_sym_opcode_token22] = ACTIONS(58),
    [aux_sym_opcode_token23] = ACTIONS(58),
    [aux_sym_branch_opcode_token1] = ACTIONS(58),
    [aux_sym_branch_opcode_token2] = ACTIONS(58),
    [aux_sym_branch_opcode_token3] = ACTIONS(58),
    [aux_sym_branch_opcode_token4] = ACTIONS(58),
    [aux_sym_branch_opcode_token5] = ACTIONS(58),
    [aux_sym_branch_opcode_token6] = ACTIONS(58),
    [aux_sym_branch_opcode_token7] = ACTIONS(58),
    [aux_sym_branch_opcode_token8] = ACTIONS(58),
    [aux_sym_branch_opcode_token9] = ACTIONS(58),
    [sym_label] = ACTIONS(60),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [aux_sym_load_opcode_token1] = ACTIONS(62),
    [aux_sym_load_opcode_token2] = ACTIONS(62),
    [aux_sym_load_opcode_token3] = ACTIONS(62),
    [aux_sym_push_opcode_token1] = ACTIONS(62),
    [aux_sym_push_opcode_token2] = ACTIONS(62),
    [aux_sym_opcode_token1] = ACTIONS(62),
    [aux_sym_opcode_token2] = ACTIONS(62),
    [aux_sym_opcode_token3] = ACTIONS(62),
    [aux_sym_opcode_token4] = ACTIONS(62),
    [aux_sym_opcode_token5] = ACTIONS(62),
    [aux_sym_opcode_token6] = ACTIONS(62),
    [aux_sym_opcode_token7] = ACTIONS(62),
    [aux_sym_opcode_token8] = ACTIONS(62),
    [aux_sym_opcode_token9] = ACTIONS(62),
    [aux_sym_opcode_token10] = ACTIONS(62),
    [aux_sym_opcode_token11] = ACTIONS(62),
    [aux_sym_opcode_token12] = ACTIONS(62),
    [aux_sym_opcode_token13] = ACTIONS(62),
    [aux_sym_opcode_token14] = ACTIONS(62),
    [aux_sym_opcode_token15] = ACTIONS(62),
    [aux_sym_opcode_token16] = ACTIONS(62),
    [aux_sym_opcode_token17] = ACTIONS(62),
    [aux_sym_opcode_token18] = ACTIONS(62),
    [aux_sym_opcode_token19] = ACTIONS(62),
    [aux_sym_opcode_token20] = ACTIONS(62),
    [aux_sym_opcode_token21] = ACTIONS(62),
    [aux_sym_opcode_token22] = ACTIONS(62),
    [aux_sym_opcode_token23] = ACTIONS(62),
    [aux_sym_branch_opcode_token1] = ACTIONS(62),
    [aux_sym_branch_opcode_token2] = ACTIONS(62),
    [aux_sym_branch_opcode_token3] = ACTIONS(62),
    [aux_sym_branch_opcode_token4] = ACTIONS(62),
    [aux_sym_branch_opcode_token5] = ACTIONS(62),
    [aux_sym_branch_opcode_token6] = ACTIONS(62),
    [aux_sym_branch_opcode_token7] = ACTIONS(62),
    [aux_sym_branch_opcode_token8] = ACTIONS(62),
    [aux_sym_branch_opcode_token9] = ACTIONS(62),
    [sym_label] = ACTIONS(64),
    [sym_directive] = ACTIONS(66),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [aux_sym_load_opcode_token1] = ACTIONS(68),
    [aux_sym_load_opcode_token2] = ACTIONS(68),
    [aux_sym_load_opcode_token3] = ACTIONS(68),
    [aux_sym_push_opcode_token1] = ACTIONS(68),
    [aux_sym_push_opcode_token2] = ACTIONS(68),
    [aux_sym_opcode_token1] = ACTIONS(68),
    [aux_sym_opcode_token2] = ACTIONS(68),
    [aux_sym_opcode_token3] = ACTIONS(68),
    [aux_sym_opcode_token4] = ACTIONS(68),
    [aux_sym_opcode_token5] = ACTIONS(68),
    [aux_sym_opcode_token6] = ACTIONS(68),
    [aux_sym_opcode_token7] = ACTIONS(68),
    [aux_sym_opcode_token8] = ACTIONS(68),
    [aux_sym_opcode_token9] = ACTIONS(68),
    [aux_sym_opcode_token10] = ACTIONS(68),
    [aux_sym_opcode_token11] = ACTIONS(68),
    [aux_sym_opcode_token12] = ACTIONS(68),
    [aux_sym_opcode_token13] = ACTIONS(68),
    [aux_sym_opcode_token14] = ACTIONS(68),
    [aux_sym_opcode_token15] = ACTIONS(68),
    [aux_sym_opcode_token16] = ACTIONS(68),
    [aux_sym_opcode_token17] = ACTIONS(68),
    [aux_sym_opcode_token18] = ACTIONS(68),
    [aux_sym_opcode_token19] = ACTIONS(68),
    [aux_sym_opcode_token20] = ACTIONS(68),
    [aux_sym_opcode_token21] = ACTIONS(68),
    [aux_sym_opcode_token22] = ACTIONS(68),
    [aux_sym_opcode_token23] = ACTIONS(68),
    [aux_sym_branch_opcode_token1] = ACTIONS(68),
    [aux_sym_branch_opcode_token2] = ACTIONS(68),
    [aux_sym_branch_opcode_token3] = ACTIONS(68),
    [aux_sym_branch_opcode_token4] = ACTIONS(68),
    [aux_sym_branch_opcode_token5] = ACTIONS(68),
    [aux_sym_branch_opcode_token6] = ACTIONS(68),
    [aux_sym_branch_opcode_token7] = ACTIONS(68),
    [aux_sym_branch_opcode_token8] = ACTIONS(68),
    [aux_sym_branch_opcode_token9] = ACTIONS(68),
    [sym_label] = ACTIONS(70),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [aux_sym_load_opcode_token1] = ACTIONS(52),
    [aux_sym_load_opcode_token2] = ACTIONS(52),
    [aux_sym_load_opcode_token3] = ACTIONS(52),
    [aux_sym_push_opcode_token1] = ACTIONS(52),
    [aux_sym_push_opcode_token2] = ACTIONS(52),
    [aux_sym_opcode_token1] = ACTIONS(52),
    [aux_sym_opcode_token2] = ACTIONS(52),
    [aux_sym_opcode_token3] = ACTIONS(52),
    [aux_sym_opcode_token4] = ACTIONS(52),
    [aux_sym_opcode_token5] = ACTIONS(52),
    [aux_sym_opcode_token6] = ACTIONS(52),
    [aux_sym_opcode_token7] = ACTIONS(52),
    [aux_sym_opcode_token8] = ACTIONS(52),
    [aux_sym_opcode_token9] = ACTIONS(52),
    [aux_sym_opcode_token10] = ACTIONS(52),
    [aux_sym_opcode_token11] = ACTIONS(52),
    [aux_sym_opcode_token12] = ACTIONS(52),
    [aux_sym_opcode_token13] = ACTIONS(52),
    [aux_sym_opcode_token14] = ACTIONS(52),
    [aux_sym_opcode_token15] = ACTIONS(52),
    [aux_sym_opcode_token16] = ACTIONS(52),
    [aux_sym_opcode_token17] = ACTIONS(52),
    [aux_sym_opcode_token18] = ACTIONS(52),
    [aux_sym_opcode_token19] = ACTIONS(52),
    [aux_sym_opcode_token20] = ACTIONS(52),
    [aux_sym_opcode_token21] = ACTIONS(52),
    [aux_sym_opcode_token22] = ACTIONS(52),
    [aux_sym_opcode_token23] = ACTIONS(52),
    [aux_sym_branch_opcode_token1] = ACTIONS(52),
    [aux_sym_branch_opcode_token2] = ACTIONS(52),
    [aux_sym_branch_opcode_token3] = ACTIONS(52),
    [aux_sym_branch_opcode_token4] = ACTIONS(52),
    [aux_sym_branch_opcode_token5] = ACTIONS(52),
    [aux_sym_branch_opcode_token6] = ACTIONS(52),
    [aux_sym_branch_opcode_token7] = ACTIONS(52),
    [aux_sym_branch_opcode_token8] = ACTIONS(52),
    [aux_sym_branch_opcode_token9] = ACTIONS(52),
    [sym_label] = ACTIONS(54),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [aux_sym_load_opcode_token1] = ACTIONS(72),
    [aux_sym_load_opcode_token2] = ACTIONS(72),
    [aux_sym_load_opcode_token3] = ACTIONS(72),
    [aux_sym_push_opcode_token1] = ACTIONS(72),
    [aux_sym_push_opcode_token2] = ACTIONS(72),
    [aux_sym_opcode_token1] = ACTIONS(72),
    [aux_sym_opcode_token2] = ACTIONS(72),
    [aux_sym_opcode_token3] = ACTIONS(72),
    [aux_sym_opcode_token4] = ACTIONS(72),
    [aux_sym_opcode_token5] = ACTIONS(72),
    [aux_sym_opcode_token6] = ACTIONS(72),
    [aux_sym_opcode_token7] = ACTIONS(72),
    [aux_sym_opcode_token8] = ACTIONS(72),
    [aux_sym_opcode_token9] = ACTIONS(72),
    [aux_sym_opcode_token10] = ACTIONS(72),
    [aux_sym_opcode_token11] = ACTIONS(72),
    [aux_sym_opcode_token12] = ACTIONS(72),
    [aux_sym_opcode_token13] = ACTIONS(72),
    [aux_sym_opcode_token14] = ACTIONS(72),
    [aux_sym_opcode_token15] = ACTIONS(72),
    [aux_sym_opcode_token16] = ACTIONS(72),
    [aux_sym_opcode_token17] = ACTIONS(72),
    [aux_sym_opcode_token18] = ACTIONS(72),
    [aux_sym_opcode_token19] = ACTIONS(72),
    [aux_sym_opcode_token20] = ACTIONS(72),
    [aux_sym_opcode_token21] = ACTIONS(72),
    [aux_sym_opcode_token22] = ACTIONS(72),
    [aux_sym_opcode_token23] = ACTIONS(72),
    [aux_sym_branch_opcode_token1] = ACTIONS(72),
    [aux_sym_branch_opcode_token2] = ACTIONS(72),
    [aux_sym_branch_opcode_token3] = ACTIONS(72),
    [aux_sym_branch_opcode_token4] = ACTIONS(72),
    [aux_sym_branch_opcode_token5] = ACTIONS(72),
    [aux_sym_branch_opcode_token6] = ACTIONS(72),
    [aux_sym_branch_opcode_token7] = ACTIONS(72),
    [aux_sym_branch_opcode_token8] = ACTIONS(72),
    [aux_sym_branch_opcode_token9] = ACTIONS(72),
    [sym_label] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [aux_sym_load_opcode_token1] = ACTIONS(58),
    [aux_sym_load_opcode_token2] = ACTIONS(58),
    [aux_sym_load_opcode_token3] = ACTIONS(58),
    [aux_sym_push_opcode_token1] = ACTIONS(58),
    [aux_sym_push_opcode_token2] = ACTIONS(58),
    [aux_sym_opcode_token1] = ACTIONS(58),
    [aux_sym_opcode_token2] = ACTIONS(58),
    [aux_sym_opcode_token3] = ACTIONS(58),
    [aux_sym_opcode_token4] = ACTIONS(58),
    [aux_sym_opcode_token5] = ACTIONS(58),
    [aux_sym_opcode_token6] = ACTIONS(58),
    [aux_sym_opcode_token7] = ACTIONS(58),
    [aux_sym_opcode_token8] = ACTIONS(58),
    [aux_sym_opcode_token9] = ACTIONS(58),
    [aux_sym_opcode_token10] = ACTIONS(58),
    [aux_sym_opcode_token11] = ACTIONS(58),
    [aux_sym_opcode_token12] = ACTIONS(58),
    [aux_sym_opcode_token13] = ACTIONS(58),
    [aux_sym_opcode_token14] = ACTIONS(58),
    [aux_sym_opcode_token15] = ACTIONS(58),
    [aux_sym_opcode_token16] = ACTIONS(58),
    [aux_sym_opcode_token17] = ACTIONS(58),
    [aux_sym_opcode_token18] = ACTIONS(58),
    [aux_sym_opcode_token19] = ACTIONS(58),
    [aux_sym_opcode_token20] = ACTIONS(58),
    [aux_sym_opcode_token21] = ACTIONS(58),
    [aux_sym_opcode_token22] = ACTIONS(58),
    [aux_sym_opcode_token23] = ACTIONS(58),
    [aux_sym_branch_opcode_token1] = ACTIONS(58),
    [aux_sym_branch_opcode_token2] = ACTIONS(58),
    [aux_sym_branch_opcode_token3] = ACTIONS(58),
    [aux_sym_branch_opcode_token4] = ACTIONS(58),
    [aux_sym_branch_opcode_token5] = ACTIONS(58),
    [aux_sym_branch_opcode_token6] = ACTIONS(58),
    [aux_sym_branch_opcode_token7] = ACTIONS(58),
    [aux_sym_branch_opcode_token8] = ACTIONS(58),
    [aux_sym_branch_opcode_token9] = ACTIONS(58),
    [sym_label] = ACTIONS(60),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [aux_sym_load_opcode_token1] = ACTIONS(62),
    [aux_sym_load_opcode_token2] = ACTIONS(62),
    [aux_sym_load_opcode_token3] = ACTIONS(62),
    [aux_sym_push_opcode_token1] = ACTIONS(62),
    [aux_sym_push_opcode_token2] = ACTIONS(62),
    [aux_sym_opcode_token1] = ACTIONS(62),
    [aux_sym_opcode_token2] = ACTIONS(62),
    [aux_sym_opcode_token3] = ACTIONS(62),
    [aux_sym_opcode_token4] = ACTIONS(62),
    [aux_sym_opcode_token5] = ACTIONS(62),
    [aux_sym_opcode_token6] = ACTIONS(62),
    [aux_sym_opcode_token7] = ACTIONS(62),
    [aux_sym_opcode_token8] = ACTIONS(62),
    [aux_sym_opcode_token9] = ACTIONS(62),
    [aux_sym_opcode_token10] = ACTIONS(62),
    [aux_sym_opcode_token11] = ACTIONS(62),
    [aux_sym_opcode_token12] = ACTIONS(62),
    [aux_sym_opcode_token13] = ACTIONS(62),
    [aux_sym_opcode_token14] = ACTIONS(62),
    [aux_sym_opcode_token15] = ACTIONS(62),
    [aux_sym_opcode_token16] = ACTIONS(62),
    [aux_sym_opcode_token17] = ACTIONS(62),
    [aux_sym_opcode_token18] = ACTIONS(62),
    [aux_sym_opcode_token19] = ACTIONS(62),
    [aux_sym_opcode_token20] = ACTIONS(62),
    [aux_sym_opcode_token21] = ACTIONS(62),
    [aux_sym_opcode_token22] = ACTIONS(62),
    [aux_sym_opcode_token23] = ACTIONS(62),
    [aux_sym_branch_opcode_token1] = ACTIONS(62),
    [aux_sym_branch_opcode_token2] = ACTIONS(62),
    [aux_sym_branch_opcode_token3] = ACTIONS(62),
    [aux_sym_branch_opcode_token4] = ACTIONS(62),
    [aux_sym_branch_opcode_token5] = ACTIONS(62),
    [aux_sym_branch_opcode_token6] = ACTIONS(62),
    [aux_sym_branch_opcode_token7] = ACTIONS(62),
    [aux_sym_branch_opcode_token8] = ACTIONS(62),
    [aux_sym_branch_opcode_token9] = ACTIONS(62),
    [sym_label] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [aux_sym_load_opcode_token1] = ACTIONS(76),
    [aux_sym_load_opcode_token2] = ACTIONS(76),
    [aux_sym_load_opcode_token3] = ACTIONS(76),
    [aux_sym_push_opcode_token1] = ACTIONS(76),
    [aux_sym_push_opcode_token2] = ACTIONS(76),
    [aux_sym_opcode_token1] = ACTIONS(76),
    [aux_sym_opcode_token2] = ACTIONS(76),
    [aux_sym_opcode_token3] = ACTIONS(76),
    [aux_sym_opcode_token4] = ACTIONS(76),
    [aux_sym_opcode_token5] = ACTIONS(76),
    [aux_sym_opcode_token6] = ACTIONS(76),
    [aux_sym_opcode_token7] = ACTIONS(76),
    [aux_sym_opcode_token8] = ACTIONS(76),
    [aux_sym_opcode_token9] = ACTIONS(76),
    [aux_sym_opcode_token10] = ACTIONS(76),
    [aux_sym_opcode_token11] = ACTIONS(76),
    [aux_sym_opcode_token12] = ACTIONS(76),
    [aux_sym_opcode_token13] = ACTIONS(76),
    [aux_sym_opcode_token14] = ACTIONS(76),
    [aux_sym_opcode_token15] = ACTIONS(76),
    [aux_sym_opcode_token16] = ACTIONS(76),
    [aux_sym_opcode_token17] = ACTIONS(76),
    [aux_sym_opcode_token18] = ACTIONS(76),
    [aux_sym_opcode_token19] = ACTIONS(76),
    [aux_sym_opcode_token20] = ACTIONS(76),
    [aux_sym_opcode_token21] = ACTIONS(76),
    [aux_sym_opcode_token22] = ACTIONS(76),
    [aux_sym_opcode_token23] = ACTIONS(76),
    [aux_sym_branch_opcode_token1] = ACTIONS(76),
    [aux_sym_branch_opcode_token2] = ACTIONS(76),
    [aux_sym_branch_opcode_token3] = ACTIONS(76),
    [aux_sym_branch_opcode_token4] = ACTIONS(76),
    [aux_sym_branch_opcode_token5] = ACTIONS(76),
    [aux_sym_branch_opcode_token6] = ACTIONS(76),
    [aux_sym_branch_opcode_token7] = ACTIONS(76),
    [aux_sym_branch_opcode_token8] = ACTIONS(76),
    [aux_sym_branch_opcode_token9] = ACTIONS(76),
    [sym_label] = ACTIONS(78),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [aux_sym_load_opcode_token1] = ACTIONS(80),
    [aux_sym_load_opcode_token2] = ACTIONS(80),
    [aux_sym_load_opcode_token3] = ACTIONS(80),
    [aux_sym_push_opcode_token1] = ACTIONS(80),
    [aux_sym_push_opcode_token2] = ACTIONS(80),
    [aux_sym_opcode_token1] = ACTIONS(80),
    [aux_sym_opcode_token2] = ACTIONS(80),
    [aux_sym_opcode_token3] = ACTIONS(80),
    [aux_sym_opcode_token4] = ACTIONS(80),
    [aux_sym_opcode_token5] = ACTIONS(80),
    [aux_sym_opcode_token6] = ACTIONS(80),
    [aux_sym_opcode_token7] = ACTIONS(80),
    [aux_sym_opcode_token8] = ACTIONS(80),
    [aux_sym_opcode_token9] = ACTIONS(80),
    [aux_sym_opcode_token10] = ACTIONS(80),
    [aux_sym_opcode_token11] = ACTIONS(80),
    [aux_sym_opcode_token12] = ACTIONS(80),
    [aux_sym_opcode_token13] = ACTIONS(80),
    [aux_sym_opcode_token14] = ACTIONS(80),
    [aux_sym_opcode_token15] = ACTIONS(80),
    [aux_sym_opcode_token16] = ACTIONS(80),
    [aux_sym_opcode_token17] = ACTIONS(80),
    [aux_sym_opcode_token18] = ACTIONS(80),
    [aux_sym_opcode_token19] = ACTIONS(80),
    [aux_sym_opcode_token20] = ACTIONS(80),
    [aux_sym_opcode_token21] = ACTIONS(80),
    [aux_sym_opcode_token22] = ACTIONS(80),
    [aux_sym_opcode_token23] = ACTIONS(80),
    [aux_sym_branch_opcode_token1] = ACTIONS(80),
    [aux_sym_branch_opcode_token2] = ACTIONS(80),
    [aux_sym_branch_opcode_token3] = ACTIONS(80),
    [aux_sym_branch_opcode_token4] = ACTIONS(80),
    [aux_sym_branch_opcode_token5] = ACTIONS(80),
    [aux_sym_branch_opcode_token6] = ACTIONS(80),
    [aux_sym_branch_opcode_token7] = ACTIONS(80),
    [aux_sym_branch_opcode_token8] = ACTIONS(80),
    [aux_sym_branch_opcode_token9] = ACTIONS(80),
    [sym_label] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [aux_sym_load_opcode_token1] = ACTIONS(84),
    [aux_sym_load_opcode_token2] = ACTIONS(84),
    [aux_sym_load_opcode_token3] = ACTIONS(84),
    [aux_sym_push_opcode_token1] = ACTIONS(84),
    [aux_sym_push_opcode_token2] = ACTIONS(84),
    [aux_sym_opcode_token1] = ACTIONS(84),
    [aux_sym_opcode_token2] = ACTIONS(84),
    [aux_sym_opcode_token3] = ACTIONS(84),
    [aux_sym_opcode_token4] = ACTIONS(84),
    [aux_sym_opcode_token5] = ACTIONS(84),
    [aux_sym_opcode_token6] = ACTIONS(84),
    [aux_sym_opcode_token7] = ACTIONS(84),
    [aux_sym_opcode_token8] = ACTIONS(84),
    [aux_sym_opcode_token9] = ACTIONS(84),
    [aux_sym_opcode_token10] = ACTIONS(84),
    [aux_sym_opcode_token11] = ACTIONS(84),
    [aux_sym_opcode_token12] = ACTIONS(84),
    [aux_sym_opcode_token13] = ACTIONS(84),
    [aux_sym_opcode_token14] = ACTIONS(84),
    [aux_sym_opcode_token15] = ACTIONS(84),
    [aux_sym_opcode_token16] = ACTIONS(84),
    [aux_sym_opcode_token17] = ACTIONS(84),
    [aux_sym_opcode_token18] = ACTIONS(84),
    [aux_sym_opcode_token19] = ACTIONS(84),
    [aux_sym_opcode_token20] = ACTIONS(84),
    [aux_sym_opcode_token21] = ACTIONS(84),
    [aux_sym_opcode_token22] = ACTIONS(84),
    [aux_sym_opcode_token23] = ACTIONS(84),
    [aux_sym_branch_opcode_token1] = ACTIONS(84),
    [aux_sym_branch_opcode_token2] = ACTIONS(84),
    [aux_sym_branch_opcode_token3] = ACTIONS(84),
    [aux_sym_branch_opcode_token4] = ACTIONS(84),
    [aux_sym_branch_opcode_token5] = ACTIONS(84),
    [aux_sym_branch_opcode_token6] = ACTIONS(84),
    [aux_sym_branch_opcode_token7] = ACTIONS(84),
    [aux_sym_branch_opcode_token8] = ACTIONS(84),
    [aux_sym_branch_opcode_token9] = ACTIONS(84),
    [sym_label] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [aux_sym_load_opcode_token1] = ACTIONS(88),
    [aux_sym_load_opcode_token2] = ACTIONS(88),
    [aux_sym_load_opcode_token3] = ACTIONS(88),
    [aux_sym_push_opcode_token1] = ACTIONS(88),
    [aux_sym_push_opcode_token2] = ACTIONS(88),
    [aux_sym_opcode_token1] = ACTIONS(88),
    [aux_sym_opcode_token2] = ACTIONS(88),
    [aux_sym_opcode_token3] = ACTIONS(88),
    [aux_sym_opcode_token4] = ACTIONS(88),
    [aux_sym_opcode_token5] = ACTIONS(88),
    [aux_sym_opcode_token6] = ACTIONS(88),
    [aux_sym_opcode_token7] = ACTIONS(88),
    [aux_sym_opcode_token8] = ACTIONS(88),
    [aux_sym_opcode_token9] = ACTIONS(88),
    [aux_sym_opcode_token10] = ACTIONS(88),
    [aux_sym_opcode_token11] = ACTIONS(88),
    [aux_sym_opcode_token12] = ACTIONS(88),
    [aux_sym_opcode_token13] = ACTIONS(88),
    [aux_sym_opcode_token14] = ACTIONS(88),
    [aux_sym_opcode_token15] = ACTIONS(88),
    [aux_sym_opcode_token16] = ACTIONS(88),
    [aux_sym_opcode_token17] = ACTIONS(88),
    [aux_sym_opcode_token18] = ACTIONS(88),
    [aux_sym_opcode_token19] = ACTIONS(88),
    [aux_sym_opcode_token20] = ACTIONS(88),
    [aux_sym_opcode_token21] = ACTIONS(88),
    [aux_sym_opcode_token22] = ACTIONS(88),
    [aux_sym_opcode_token23] = ACTIONS(88),
    [aux_sym_branch_opcode_token1] = ACTIONS(88),
    [aux_sym_branch_opcode_token2] = ACTIONS(88),
    [aux_sym_branch_opcode_token3] = ACTIONS(88),
    [aux_sym_branch_opcode_token4] = ACTIONS(88),
    [aux_sym_branch_opcode_token5] = ACTIONS(88),
    [aux_sym_branch_opcode_token6] = ACTIONS(88),
    [aux_sym_branch_opcode_token7] = ACTIONS(88),
    [aux_sym_branch_opcode_token8] = ACTIONS(88),
    [aux_sym_branch_opcode_token9] = ACTIONS(88),
    [sym_label] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(50), 1,
      aux_sym_constant_token1,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      aux_sym_constant_token2,
    STATE(19), 1,
      sym_comment,
    STATE(12), 2,
      sym_register,
      sym_constant,
    ACTIONS(92), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [26] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(20), 1,
      sym_comment,
    STATE(30), 1,
      sym_register,
    ACTIONS(48), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [48] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_label,
    ACTIONS(105), 1,
      sym_directive,
    STATE(28), 1,
      sym_function_definition,
    STATE(21), 2,
      aux_sym__statement,
      sym_comment,
  [71] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_register,
    STATE(22), 1,
      sym_comment,
    ACTIONS(92), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [90] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(23), 1,
      sym_comment,
    ACTIONS(108), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [107] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_directive,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym__statement,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      sym_function_definition,
  [132] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_register,
    ACTIONS(112), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [151] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(114), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [167] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(116), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [183] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(120), 1,
      sym_directive,
    STATE(28), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_label,
  [200] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(124), 1,
      sym_directive,
    STATE(29), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_label,
  [217] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(128), 1,
      sym_directive,
    STATE(30), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_label,
  [234] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(132), 1,
      sym_directive,
    STATE(31), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_label,
  [251] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_comment,
  [264] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
  [277] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(138), 1,
      aux_sym_load_statement_token1,
    STATE(34), 1,
      sym_comment,
  [290] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(38), 1,
      aux_sym_load_statement_token1,
    STATE(35), 1,
      sym_comment,
  [303] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(140), 1,
      aux_sym_load_statement_token1,
    STATE(36), 1,
      sym_comment,
  [316] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
  [329] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(144), 1,
      aux_sym_load_statement_token1,
    STATE(38), 1,
      sym_comment,
  [342] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 26,
  [SMALL_STATE(21)] = 48,
  [SMALL_STATE(22)] = 71,
  [SMALL_STATE(23)] = 90,
  [SMALL_STATE(24)] = 107,
  [SMALL_STATE(25)] = 132,
  [SMALL_STATE(26)] = 151,
  [SMALL_STATE(27)] = 167,
  [SMALL_STATE(28)] = 183,
  [SMALL_STATE(29)] = 200,
  [SMALL_STATE(30)] = 217,
  [SMALL_STATE(31)] = 234,
  [SMALL_STATE(32)] = 251,
  [SMALL_STATE(33)] = 264,
  [SMALL_STATE(34)] = 277,
  [SMALL_STATE(35)] = 290,
  [SMALL_STATE(36)] = 303,
  [SMALL_STATE(37)] = 316,
  [SMALL_STATE(38)] = 329,
  [SMALL_STATE(39)] = 342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(34),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(28),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
