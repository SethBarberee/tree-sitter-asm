#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 1
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  aux_sym_load_statement_token1 = 2,
  aux_sym_load_opcode_token1 = 3,
  aux_sym_load_opcode_token2 = 4,
  aux_sym_push_opcode_token1 = 5,
  aux_sym_push_opcode_token2 = 6,
  aux_sym_opcode_token1 = 7,
  aux_sym_opcode_token2 = 8,
  aux_sym_opcode_token3 = 9,
  aux_sym_opcode_token4 = 10,
  aux_sym_opcode_token5 = 11,
  aux_sym_opcode_token6 = 12,
  aux_sym_opcode_token7 = 13,
  aux_sym_opcode_token8 = 14,
  aux_sym_opcode_token9 = 15,
  aux_sym_opcode_token10 = 16,
  aux_sym_opcode_token11 = 17,
  aux_sym_opcode_token12 = 18,
  aux_sym_opcode_token13 = 19,
  aux_sym_opcode_token14 = 20,
  aux_sym_return_statement_token1 = 21,
  aux_sym_branch_opcode_token1 = 22,
  aux_sym_branch_opcode_token2 = 23,
  aux_sym_branch_opcode_token3 = 24,
  aux_sym_branch_opcode_token4 = 25,
  aux_sym_branch_opcode_token5 = 26,
  aux_sym_branch_opcode_token6 = 27,
  aux_sym_branch_opcode_token7 = 28,
  aux_sym_branch_opcode_token8 = 29,
  aux_sym_branch_opcode_token9 = 30,
  aux_sym_branch_opcode_token10 = 31,
  sym_label = 32,
  aux_sym_register_token1 = 33,
  aux_sym_register_token2 = 34,
  aux_sym_register_token3 = 35,
  aux_sym_register_token4 = 36,
  sym_directive = 37,
  aux_sym_comment_token1 = 38,
  aux_sym_comment_token2 = 39,
  aux_sym_constant_token1 = 40,
  aux_sym_constant_token2 = 41,
  sym_identifier = 42,
  sym_source_file = 43,
  aux_sym__statement = 44,
  sym_function_definition = 45,
  sym_math_statement = 46,
  sym_load_statement = 47,
  sym_load_opcode = 48,
  sym_pool_statement = 49,
  sym_push_statement = 50,
  sym_push_opcode = 51,
  sym_simple_statement = 52,
  sym_opcode = 53,
  sym_return_statement = 54,
  sym_branch_statement = 55,
  sym_branch_opcode = 56,
  sym_register = 57,
  sym_comment = 58,
  sym_constant = 59,
  aux_sym_function_definition_repeat1 = 60,
  alias_sym_func_name = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [aux_sym_load_opcode_token1] = "load_opcode_token1",
  [aux_sym_load_opcode_token2] = "load_opcode_token2",
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
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [aux_sym_branch_opcode_token1] = "branch_opcode_token1",
  [aux_sym_branch_opcode_token2] = "branch_opcode_token2",
  [aux_sym_branch_opcode_token3] = "branch_opcode_token3",
  [aux_sym_branch_opcode_token4] = "branch_opcode_token4",
  [aux_sym_branch_opcode_token5] = "branch_opcode_token5",
  [aux_sym_branch_opcode_token6] = "branch_opcode_token6",
  [aux_sym_branch_opcode_token7] = "branch_opcode_token7",
  [aux_sym_branch_opcode_token8] = "branch_opcode_token8",
  [aux_sym_branch_opcode_token9] = "branch_opcode_token9",
  [aux_sym_branch_opcode_token10] = "branch_opcode_token10",
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
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [aux_sym_branch_opcode_token1] = aux_sym_branch_opcode_token1,
  [aux_sym_branch_opcode_token2] = aux_sym_branch_opcode_token2,
  [aux_sym_branch_opcode_token3] = aux_sym_branch_opcode_token3,
  [aux_sym_branch_opcode_token4] = aux_sym_branch_opcode_token4,
  [aux_sym_branch_opcode_token5] = aux_sym_branch_opcode_token5,
  [aux_sym_branch_opcode_token6] = aux_sym_branch_opcode_token6,
  [aux_sym_branch_opcode_token7] = aux_sym_branch_opcode_token7,
  [aux_sym_branch_opcode_token8] = aux_sym_branch_opcode_token8,
  [aux_sym_branch_opcode_token9] = aux_sym_branch_opcode_token9,
  [aux_sym_branch_opcode_token10] = aux_sym_branch_opcode_token10,
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
  [aux_sym_return_statement_token1] = {
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
  [aux_sym_branch_opcode_token10] = {
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
  [35] = 35,
  [36] = 5,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '@') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '@') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'v') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (lookahead == ':') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token10);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 57},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_load_opcode_token1] = ACTIONS(1),
    [aux_sym_load_opcode_token2] = ACTIONS(1),
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
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [aux_sym_branch_opcode_token1] = ACTIONS(1),
    [aux_sym_branch_opcode_token2] = ACTIONS(1),
    [aux_sym_branch_opcode_token3] = ACTIONS(1),
    [aux_sym_branch_opcode_token4] = ACTIONS(1),
    [aux_sym_branch_opcode_token5] = ACTIONS(1),
    [aux_sym_branch_opcode_token6] = ACTIONS(1),
    [aux_sym_branch_opcode_token7] = ACTIONS(1),
    [aux_sym_branch_opcode_token8] = ACTIONS(1),
    [aux_sym_branch_opcode_token9] = ACTIONS(1),
    [aux_sym_branch_opcode_token10] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [aux_sym__statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label] = ACTIONS(5),
    [sym_directive] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(9),
  },
  [2] = {
    [sym_math_statement] = STATE(3),
    [sym_load_statement] = STATE(3),
    [sym_load_opcode] = STATE(26),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(32),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(24),
    [sym_return_statement] = STATE(23),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(30),
    [aux_sym_function_definition_repeat1] = STATE(3),
    [aux_sym_load_opcode_token1] = ACTIONS(11),
    [aux_sym_load_opcode_token2] = ACTIONS(11),
    [aux_sym_push_opcode_token1] = ACTIONS(13),
    [aux_sym_push_opcode_token2] = ACTIONS(13),
    [aux_sym_opcode_token1] = ACTIONS(15),
    [aux_sym_opcode_token2] = ACTIONS(15),
    [aux_sym_opcode_token3] = ACTIONS(15),
    [aux_sym_opcode_token4] = ACTIONS(15),
    [aux_sym_opcode_token5] = ACTIONS(15),
    [aux_sym_opcode_token6] = ACTIONS(15),
    [aux_sym_opcode_token7] = ACTIONS(15),
    [aux_sym_opcode_token8] = ACTIONS(15),
    [aux_sym_opcode_token9] = ACTIONS(15),
    [aux_sym_opcode_token10] = ACTIONS(15),
    [aux_sym_opcode_token11] = ACTIONS(15),
    [aux_sym_opcode_token12] = ACTIONS(15),
    [aux_sym_opcode_token13] = ACTIONS(15),
    [aux_sym_opcode_token14] = ACTIONS(15),
    [aux_sym_return_statement_token1] = ACTIONS(17),
    [aux_sym_branch_opcode_token1] = ACTIONS(19),
    [aux_sym_branch_opcode_token2] = ACTIONS(19),
    [aux_sym_branch_opcode_token3] = ACTIONS(19),
    [aux_sym_branch_opcode_token4] = ACTIONS(19),
    [aux_sym_branch_opcode_token5] = ACTIONS(19),
    [aux_sym_branch_opcode_token6] = ACTIONS(19),
    [aux_sym_branch_opcode_token7] = ACTIONS(19),
    [aux_sym_branch_opcode_token8] = ACTIONS(19),
    [aux_sym_branch_opcode_token9] = ACTIONS(19),
    [aux_sym_branch_opcode_token10] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
  },
  [3] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_load_opcode] = STATE(26),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(32),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(24),
    [sym_return_statement] = STATE(25),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(30),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [aux_sym_load_opcode_token1] = ACTIONS(11),
    [aux_sym_load_opcode_token2] = ACTIONS(11),
    [aux_sym_push_opcode_token1] = ACTIONS(13),
    [aux_sym_push_opcode_token2] = ACTIONS(13),
    [aux_sym_opcode_token1] = ACTIONS(15),
    [aux_sym_opcode_token2] = ACTIONS(15),
    [aux_sym_opcode_token3] = ACTIONS(15),
    [aux_sym_opcode_token4] = ACTIONS(15),
    [aux_sym_opcode_token5] = ACTIONS(15),
    [aux_sym_opcode_token6] = ACTIONS(15),
    [aux_sym_opcode_token7] = ACTIONS(15),
    [aux_sym_opcode_token8] = ACTIONS(15),
    [aux_sym_opcode_token9] = ACTIONS(15),
    [aux_sym_opcode_token10] = ACTIONS(15),
    [aux_sym_opcode_token11] = ACTIONS(15),
    [aux_sym_opcode_token12] = ACTIONS(15),
    [aux_sym_opcode_token13] = ACTIONS(15),
    [aux_sym_opcode_token14] = ACTIONS(15),
    [aux_sym_return_statement_token1] = ACTIONS(17),
    [aux_sym_branch_opcode_token1] = ACTIONS(19),
    [aux_sym_branch_opcode_token2] = ACTIONS(19),
    [aux_sym_branch_opcode_token3] = ACTIONS(19),
    [aux_sym_branch_opcode_token4] = ACTIONS(19),
    [aux_sym_branch_opcode_token5] = ACTIONS(19),
    [aux_sym_branch_opcode_token6] = ACTIONS(19),
    [aux_sym_branch_opcode_token7] = ACTIONS(19),
    [aux_sym_branch_opcode_token8] = ACTIONS(19),
    [aux_sym_branch_opcode_token9] = ACTIONS(19),
    [aux_sym_branch_opcode_token10] = ACTIONS(19),
    [sym_label] = ACTIONS(21),
  },
  [4] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_load_opcode] = STATE(26),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(32),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(24),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(30),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [aux_sym_load_opcode_token1] = ACTIONS(23),
    [aux_sym_load_opcode_token2] = ACTIONS(23),
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
    [aux_sym_return_statement_token1] = ACTIONS(32),
    [aux_sym_branch_opcode_token1] = ACTIONS(34),
    [aux_sym_branch_opcode_token2] = ACTIONS(34),
    [aux_sym_branch_opcode_token3] = ACTIONS(34),
    [aux_sym_branch_opcode_token4] = ACTIONS(34),
    [aux_sym_branch_opcode_token5] = ACTIONS(34),
    [aux_sym_branch_opcode_token6] = ACTIONS(34),
    [aux_sym_branch_opcode_token7] = ACTIONS(34),
    [aux_sym_branch_opcode_token8] = ACTIONS(34),
    [aux_sym_branch_opcode_token9] = ACTIONS(34),
    [aux_sym_branch_opcode_token10] = ACTIONS(34),
    [sym_label] = ACTIONS(37),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(42),
    [aux_sym_load_opcode_token1] = ACTIONS(42),
    [aux_sym_load_opcode_token2] = ACTIONS(42),
    [aux_sym_push_opcode_token1] = ACTIONS(42),
    [aux_sym_push_opcode_token2] = ACTIONS(42),
    [aux_sym_opcode_token1] = ACTIONS(42),
    [aux_sym_opcode_token2] = ACTIONS(42),
    [aux_sym_opcode_token3] = ACTIONS(42),
    [aux_sym_opcode_token4] = ACTIONS(42),
    [aux_sym_opcode_token5] = ACTIONS(42),
    [aux_sym_opcode_token6] = ACTIONS(42),
    [aux_sym_opcode_token7] = ACTIONS(42),
    [aux_sym_opcode_token8] = ACTIONS(42),
    [aux_sym_opcode_token9] = ACTIONS(42),
    [aux_sym_opcode_token10] = ACTIONS(42),
    [aux_sym_opcode_token11] = ACTIONS(42),
    [aux_sym_opcode_token12] = ACTIONS(42),
    [aux_sym_opcode_token13] = ACTIONS(42),
    [aux_sym_opcode_token14] = ACTIONS(42),
    [aux_sym_return_statement_token1] = ACTIONS(42),
    [aux_sym_branch_opcode_token1] = ACTIONS(42),
    [aux_sym_branch_opcode_token2] = ACTIONS(42),
    [aux_sym_branch_opcode_token3] = ACTIONS(42),
    [aux_sym_branch_opcode_token4] = ACTIONS(42),
    [aux_sym_branch_opcode_token5] = ACTIONS(42),
    [aux_sym_branch_opcode_token6] = ACTIONS(42),
    [aux_sym_branch_opcode_token7] = ACTIONS(42),
    [aux_sym_branch_opcode_token8] = ACTIONS(42),
    [aux_sym_branch_opcode_token9] = ACTIONS(42),
    [aux_sym_branch_opcode_token10] = ACTIONS(42),
    [sym_label] = ACTIONS(40),
    [aux_sym_register_token1] = ACTIONS(42),
    [aux_sym_register_token2] = ACTIONS(42),
    [aux_sym_register_token3] = ACTIONS(42),
    [aux_sym_register_token4] = ACTIONS(42),
    [sym_directive] = ACTIONS(42),
    [aux_sym_comment_token1] = ACTIONS(42),
    [aux_sym_comment_token2] = ACTIONS(42),
    [aux_sym_constant_token1] = ACTIONS(42),
    [aux_sym_constant_token2] = ACTIONS(42),
  },
  [6] = {
    [sym_register] = STATE(12),
    [sym_constant] = STATE(12),
    [anon_sym_COMMA] = ACTIONS(44),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [aux_sym_push_opcode_token1] = ACTIONS(46),
    [aux_sym_push_opcode_token2] = ACTIONS(46),
    [aux_sym_opcode_token1] = ACTIONS(46),
    [aux_sym_opcode_token2] = ACTIONS(46),
    [aux_sym_opcode_token3] = ACTIONS(46),
    [aux_sym_opcode_token4] = ACTIONS(46),
    [aux_sym_opcode_token5] = ACTIONS(46),
    [aux_sym_opcode_token6] = ACTIONS(46),
    [aux_sym_opcode_token7] = ACTIONS(46),
    [aux_sym_opcode_token8] = ACTIONS(46),
    [aux_sym_opcode_token9] = ACTIONS(46),
    [aux_sym_opcode_token10] = ACTIONS(46),
    [aux_sym_opcode_token11] = ACTIONS(46),
    [aux_sym_opcode_token12] = ACTIONS(46),
    [aux_sym_opcode_token13] = ACTIONS(46),
    [aux_sym_opcode_token14] = ACTIONS(46),
    [aux_sym_return_statement_token1] = ACTIONS(46),
    [aux_sym_branch_opcode_token1] = ACTIONS(46),
    [aux_sym_branch_opcode_token2] = ACTIONS(46),
    [aux_sym_branch_opcode_token3] = ACTIONS(46),
    [aux_sym_branch_opcode_token4] = ACTIONS(46),
    [aux_sym_branch_opcode_token5] = ACTIONS(46),
    [aux_sym_branch_opcode_token6] = ACTIONS(46),
    [aux_sym_branch_opcode_token7] = ACTIONS(46),
    [aux_sym_branch_opcode_token8] = ACTIONS(46),
    [aux_sym_branch_opcode_token9] = ACTIONS(46),
    [aux_sym_branch_opcode_token10] = ACTIONS(46),
    [sym_label] = ACTIONS(48),
    [aux_sym_register_token1] = ACTIONS(50),
    [aux_sym_register_token2] = ACTIONS(50),
    [aux_sym_register_token3] = ACTIONS(50),
    [aux_sym_register_token4] = ACTIONS(50),
    [aux_sym_constant_token1] = ACTIONS(52),
    [aux_sym_constant_token2] = ACTIONS(52),
  },
  [7] = {
    [sym_register] = STATE(8),
    [sym_constant] = STATE(11),
    [aux_sym_load_opcode_token1] = ACTIONS(54),
    [aux_sym_load_opcode_token2] = ACTIONS(54),
    [aux_sym_push_opcode_token1] = ACTIONS(54),
    [aux_sym_push_opcode_token2] = ACTIONS(54),
    [aux_sym_opcode_token1] = ACTIONS(54),
    [aux_sym_opcode_token2] = ACTIONS(54),
    [aux_sym_opcode_token3] = ACTIONS(54),
    [aux_sym_opcode_token4] = ACTIONS(54),
    [aux_sym_opcode_token5] = ACTIONS(54),
    [aux_sym_opcode_token6] = ACTIONS(54),
    [aux_sym_opcode_token7] = ACTIONS(54),
    [aux_sym_opcode_token8] = ACTIONS(54),
    [aux_sym_opcode_token9] = ACTIONS(54),
    [aux_sym_opcode_token10] = ACTIONS(54),
    [aux_sym_opcode_token11] = ACTIONS(54),
    [aux_sym_opcode_token12] = ACTIONS(54),
    [aux_sym_opcode_token13] = ACTIONS(54),
    [aux_sym_opcode_token14] = ACTIONS(54),
    [aux_sym_return_statement_token1] = ACTIONS(54),
    [aux_sym_branch_opcode_token1] = ACTIONS(54),
    [aux_sym_branch_opcode_token2] = ACTIONS(54),
    [aux_sym_branch_opcode_token3] = ACTIONS(54),
    [aux_sym_branch_opcode_token4] = ACTIONS(54),
    [aux_sym_branch_opcode_token5] = ACTIONS(54),
    [aux_sym_branch_opcode_token6] = ACTIONS(54),
    [aux_sym_branch_opcode_token7] = ACTIONS(54),
    [aux_sym_branch_opcode_token8] = ACTIONS(54),
    [aux_sym_branch_opcode_token9] = ACTIONS(54),
    [aux_sym_branch_opcode_token10] = ACTIONS(54),
    [sym_label] = ACTIONS(56),
    [aux_sym_register_token1] = ACTIONS(50),
    [aux_sym_register_token2] = ACTIONS(50),
    [aux_sym_register_token3] = ACTIONS(50),
    [aux_sym_register_token4] = ACTIONS(50),
    [aux_sym_constant_token1] = ACTIONS(52),
    [aux_sym_constant_token2] = ACTIONS(52),
  },
  [8] = {
    [anon_sym_COMMA] = ACTIONS(58),
    [aux_sym_load_opcode_token1] = ACTIONS(60),
    [aux_sym_load_opcode_token2] = ACTIONS(60),
    [aux_sym_push_opcode_token1] = ACTIONS(60),
    [aux_sym_push_opcode_token2] = ACTIONS(60),
    [aux_sym_opcode_token1] = ACTIONS(60),
    [aux_sym_opcode_token2] = ACTIONS(60),
    [aux_sym_opcode_token3] = ACTIONS(60),
    [aux_sym_opcode_token4] = ACTIONS(60),
    [aux_sym_opcode_token5] = ACTIONS(60),
    [aux_sym_opcode_token6] = ACTIONS(60),
    [aux_sym_opcode_token7] = ACTIONS(60),
    [aux_sym_opcode_token8] = ACTIONS(60),
    [aux_sym_opcode_token9] = ACTIONS(60),
    [aux_sym_opcode_token10] = ACTIONS(60),
    [aux_sym_opcode_token11] = ACTIONS(60),
    [aux_sym_opcode_token12] = ACTIONS(60),
    [aux_sym_opcode_token13] = ACTIONS(60),
    [aux_sym_opcode_token14] = ACTIONS(60),
    [aux_sym_return_statement_token1] = ACTIONS(60),
    [aux_sym_branch_opcode_token1] = ACTIONS(60),
    [aux_sym_branch_opcode_token2] = ACTIONS(60),
    [aux_sym_branch_opcode_token3] = ACTIONS(60),
    [aux_sym_branch_opcode_token4] = ACTIONS(60),
    [aux_sym_branch_opcode_token5] = ACTIONS(60),
    [aux_sym_branch_opcode_token6] = ACTIONS(60),
    [aux_sym_branch_opcode_token7] = ACTIONS(60),
    [aux_sym_branch_opcode_token8] = ACTIONS(60),
    [aux_sym_branch_opcode_token9] = ACTIONS(60),
    [aux_sym_branch_opcode_token10] = ACTIONS(60),
    [sym_label] = ACTIONS(62),
  },
  [9] = {
    [aux_sym_load_opcode_token1] = ACTIONS(64),
    [aux_sym_load_opcode_token2] = ACTIONS(64),
    [aux_sym_push_opcode_token1] = ACTIONS(64),
    [aux_sym_push_opcode_token2] = ACTIONS(64),
    [aux_sym_opcode_token1] = ACTIONS(64),
    [aux_sym_opcode_token2] = ACTIONS(64),
    [aux_sym_opcode_token3] = ACTIONS(64),
    [aux_sym_opcode_token4] = ACTIONS(64),
    [aux_sym_opcode_token5] = ACTIONS(64),
    [aux_sym_opcode_token6] = ACTIONS(64),
    [aux_sym_opcode_token7] = ACTIONS(64),
    [aux_sym_opcode_token8] = ACTIONS(64),
    [aux_sym_opcode_token9] = ACTIONS(64),
    [aux_sym_opcode_token10] = ACTIONS(64),
    [aux_sym_opcode_token11] = ACTIONS(64),
    [aux_sym_opcode_token12] = ACTIONS(64),
    [aux_sym_opcode_token13] = ACTIONS(64),
    [aux_sym_opcode_token14] = ACTIONS(64),
    [aux_sym_return_statement_token1] = ACTIONS(64),
    [aux_sym_branch_opcode_token1] = ACTIONS(64),
    [aux_sym_branch_opcode_token2] = ACTIONS(64),
    [aux_sym_branch_opcode_token3] = ACTIONS(64),
    [aux_sym_branch_opcode_token4] = ACTIONS(64),
    [aux_sym_branch_opcode_token5] = ACTIONS(64),
    [aux_sym_branch_opcode_token6] = ACTIONS(64),
    [aux_sym_branch_opcode_token7] = ACTIONS(64),
    [aux_sym_branch_opcode_token8] = ACTIONS(64),
    [aux_sym_branch_opcode_token9] = ACTIONS(64),
    [aux_sym_branch_opcode_token10] = ACTIONS(64),
    [sym_label] = ACTIONS(66),
    [sym_directive] = ACTIONS(68),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(72), 1,
      sym_label,
    ACTIONS(70), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [35] = 2,
    ACTIONS(62), 1,
      sym_label,
    ACTIONS(60), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [70] = 2,
    ACTIONS(56), 1,
      sym_label,
    ACTIONS(54), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [105] = 2,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(74), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [140] = 2,
    ACTIONS(80), 1,
      sym_label,
    ACTIONS(78), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [175] = 2,
    ACTIONS(84), 1,
      sym_label,
    ACTIONS(82), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [210] = 2,
    ACTIONS(88), 1,
      sym_label,
    ACTIONS(86), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [245] = 2,
    ACTIONS(92), 1,
      sym_label,
    ACTIONS(90), 29,
      aux_sym_load_opcode_token1,
      aux_sym_load_opcode_token2,
      aux_sym_push_opcode_token1,
      aux_sym_push_opcode_token2,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
      aux_sym_opcode_token7,
      aux_sym_opcode_token8,
      aux_sym_opcode_token9,
      aux_sym_opcode_token10,
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_opcode_token13,
      aux_sym_opcode_token14,
      aux_sym_return_statement_token1,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
      aux_sym_branch_opcode_token10,
  [280] = 5,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_label,
    ACTIONS(99), 1,
      sym_directive,
    ACTIONS(102), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(18), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [299] = 5,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_directive,
    ACTIONS(9), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(18), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [318] = 4,
    ACTIONS(52), 1,
      aux_sym_constant_token1,
    ACTIONS(111), 1,
      aux_sym_constant_token2,
    STATE(10), 2,
      sym_register,
      sym_constant,
    ACTIONS(109), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [335] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(115), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [345] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(119), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [355] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(123), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [365] = 2,
    STATE(6), 1,
      sym_register,
    ACTIONS(109), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [375] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(127), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [385] = 2,
    STATE(31), 1,
      sym_register,
    ACTIONS(129), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [395] = 2,
    STATE(22), 1,
      sym_register,
    ACTIONS(109), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [405] = 1,
    ACTIONS(131), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [412] = 1,
    ACTIONS(133), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [419] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [423] = 1,
    ACTIONS(137), 1,
      aux_sym_load_statement_token1,
  [427] = 1,
    ACTIONS(139), 1,
      aux_sym_load_statement_token1,
  [431] = 1,
    ACTIONS(141), 1,
      sym_identifier,
  [435] = 1,
    ACTIONS(143), 1,
      aux_sym_load_statement_token1,
  [439] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [443] = 1,
    ACTIONS(40), 1,
      aux_sym_load_statement_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 35,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 318,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 419,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 427,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 435,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 443,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(34),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(33),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(18),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
