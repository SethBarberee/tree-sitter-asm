#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
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
  aux_sym_opcode_token15 = 21,
  aux_sym_opcode_token16 = 22,
  aux_sym_opcode_token17 = 23,
  aux_sym_branch_opcode_token1 = 24,
  aux_sym_branch_opcode_token2 = 25,
  aux_sym_branch_opcode_token3 = 26,
  aux_sym_branch_opcode_token4 = 27,
  aux_sym_branch_opcode_token5 = 28,
  aux_sym_branch_opcode_token6 = 29,
  aux_sym_branch_opcode_token7 = 30,
  aux_sym_branch_opcode_token8 = 31,
  aux_sym_branch_opcode_token9 = 32,
  sym_label = 33,
  aux_sym_register_token1 = 34,
  aux_sym_register_token2 = 35,
  aux_sym_register_token3 = 36,
  aux_sym_register_token4 = 37,
  sym_directive = 38,
  aux_sym_comment_token1 = 39,
  aux_sym_comment_token2 = 40,
  aux_sym_constant_token1 = 41,
  aux_sym_constant_token2 = 42,
  sym_identifier = 43,
  sym_source_file = 44,
  aux_sym__statement = 45,
  sym_function_definition = 46,
  sym_math_statement = 47,
  sym_load_statement = 48,
  sym_load_opcode = 49,
  sym_pool_statement = 50,
  sym_push_statement = 51,
  sym_push_opcode = 52,
  sym_simple_statement = 53,
  sym_opcode = 54,
  sym_return_statement = 55,
  sym_branch_statement = 56,
  sym_branch_opcode = 57,
  sym_register = 58,
  sym_comment = 59,
  sym_constant = 60,
  aux_sym_function_definition_repeat1 = 61,
  alias_sym_func_name = 62,
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
  [aux_sym_opcode_token15] = "opcode_token15",
  [aux_sym_opcode_token16] = "opcode_token16",
  [aux_sym_opcode_token17] = "opcode_token17",
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
  [31] = 4,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 26,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'q') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
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
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 0},
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
    [aux_sym_opcode_token15] = ACTIONS(1),
    [aux_sym_opcode_token16] = ACTIONS(1),
    [aux_sym_opcode_token17] = ACTIONS(1),
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
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
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
    [sym_load_opcode] = STATE(28),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(35),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(27),
    [sym_return_statement] = STATE(23),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(21),
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
    [aux_sym_opcode_token15] = ACTIONS(15),
    [aux_sym_opcode_token16] = ACTIONS(15),
    [aux_sym_opcode_token17] = ACTIONS(15),
    [aux_sym_branch_opcode_token1] = ACTIONS(17),
    [aux_sym_branch_opcode_token2] = ACTIONS(17),
    [aux_sym_branch_opcode_token3] = ACTIONS(17),
    [aux_sym_branch_opcode_token4] = ACTIONS(17),
    [aux_sym_branch_opcode_token5] = ACTIONS(17),
    [aux_sym_branch_opcode_token6] = ACTIONS(17),
    [aux_sym_branch_opcode_token7] = ACTIONS(17),
    [aux_sym_branch_opcode_token8] = ACTIONS(17),
    [aux_sym_branch_opcode_token9] = ACTIONS(17),
    [sym_label] = ACTIONS(19),
  },
  [3] = {
    [sym_math_statement] = STATE(5),
    [sym_load_statement] = STATE(5),
    [sym_load_opcode] = STATE(28),
    [sym_pool_statement] = STATE(5),
    [sym_push_statement] = STATE(5),
    [sym_push_opcode] = STATE(35),
    [sym_simple_statement] = STATE(5),
    [sym_opcode] = STATE(27),
    [sym_return_statement] = STATE(25),
    [sym_branch_statement] = STATE(5),
    [sym_branch_opcode] = STATE(21),
    [aux_sym_function_definition_repeat1] = STATE(5),
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
    [aux_sym_opcode_token15] = ACTIONS(15),
    [aux_sym_opcode_token16] = ACTIONS(15),
    [aux_sym_opcode_token17] = ACTIONS(15),
    [aux_sym_branch_opcode_token1] = ACTIONS(17),
    [aux_sym_branch_opcode_token2] = ACTIONS(17),
    [aux_sym_branch_opcode_token3] = ACTIONS(17),
    [aux_sym_branch_opcode_token4] = ACTIONS(17),
    [aux_sym_branch_opcode_token5] = ACTIONS(17),
    [aux_sym_branch_opcode_token6] = ACTIONS(17),
    [aux_sym_branch_opcode_token7] = ACTIONS(17),
    [aux_sym_branch_opcode_token8] = ACTIONS(17),
    [aux_sym_branch_opcode_token9] = ACTIONS(17),
    [sym_label] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [aux_sym_load_opcode_token1] = ACTIONS(23),
    [aux_sym_load_opcode_token2] = ACTIONS(23),
    [aux_sym_push_opcode_token1] = ACTIONS(23),
    [aux_sym_push_opcode_token2] = ACTIONS(23),
    [aux_sym_opcode_token1] = ACTIONS(23),
    [aux_sym_opcode_token2] = ACTIONS(23),
    [aux_sym_opcode_token3] = ACTIONS(23),
    [aux_sym_opcode_token4] = ACTIONS(23),
    [aux_sym_opcode_token5] = ACTIONS(23),
    [aux_sym_opcode_token6] = ACTIONS(23),
    [aux_sym_opcode_token7] = ACTIONS(23),
    [aux_sym_opcode_token8] = ACTIONS(23),
    [aux_sym_opcode_token9] = ACTIONS(23),
    [aux_sym_opcode_token10] = ACTIONS(23),
    [aux_sym_opcode_token11] = ACTIONS(23),
    [aux_sym_opcode_token12] = ACTIONS(23),
    [aux_sym_opcode_token13] = ACTIONS(23),
    [aux_sym_opcode_token14] = ACTIONS(23),
    [aux_sym_opcode_token15] = ACTIONS(23),
    [aux_sym_opcode_token16] = ACTIONS(23),
    [aux_sym_opcode_token17] = ACTIONS(23),
    [aux_sym_branch_opcode_token1] = ACTIONS(23),
    [aux_sym_branch_opcode_token2] = ACTIONS(23),
    [aux_sym_branch_opcode_token3] = ACTIONS(23),
    [aux_sym_branch_opcode_token4] = ACTIONS(23),
    [aux_sym_branch_opcode_token5] = ACTIONS(23),
    [aux_sym_branch_opcode_token6] = ACTIONS(23),
    [aux_sym_branch_opcode_token7] = ACTIONS(23),
    [aux_sym_branch_opcode_token8] = ACTIONS(23),
    [aux_sym_branch_opcode_token9] = ACTIONS(23),
    [sym_label] = ACTIONS(21),
    [aux_sym_register_token1] = ACTIONS(23),
    [aux_sym_register_token2] = ACTIONS(23),
    [aux_sym_register_token3] = ACTIONS(23),
    [aux_sym_register_token4] = ACTIONS(23),
    [sym_directive] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(23),
    [aux_sym_comment_token2] = ACTIONS(23),
    [aux_sym_constant_token1] = ACTIONS(23),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [5] = {
    [sym_math_statement] = STATE(5),
    [sym_load_statement] = STATE(5),
    [sym_load_opcode] = STATE(28),
    [sym_pool_statement] = STATE(5),
    [sym_push_statement] = STATE(5),
    [sym_push_opcode] = STATE(35),
    [sym_simple_statement] = STATE(5),
    [sym_opcode] = STATE(27),
    [sym_branch_statement] = STATE(5),
    [sym_branch_opcode] = STATE(34),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [aux_sym_load_opcode_token1] = ACTIONS(25),
    [aux_sym_load_opcode_token2] = ACTIONS(25),
    [aux_sym_push_opcode_token1] = ACTIONS(28),
    [aux_sym_push_opcode_token2] = ACTIONS(28),
    [aux_sym_opcode_token1] = ACTIONS(31),
    [aux_sym_opcode_token2] = ACTIONS(31),
    [aux_sym_opcode_token3] = ACTIONS(31),
    [aux_sym_opcode_token4] = ACTIONS(31),
    [aux_sym_opcode_token5] = ACTIONS(31),
    [aux_sym_opcode_token6] = ACTIONS(31),
    [aux_sym_opcode_token7] = ACTIONS(31),
    [aux_sym_opcode_token8] = ACTIONS(31),
    [aux_sym_opcode_token9] = ACTIONS(31),
    [aux_sym_opcode_token10] = ACTIONS(31),
    [aux_sym_opcode_token11] = ACTIONS(31),
    [aux_sym_opcode_token12] = ACTIONS(31),
    [aux_sym_opcode_token13] = ACTIONS(31),
    [aux_sym_opcode_token14] = ACTIONS(31),
    [aux_sym_opcode_token15] = ACTIONS(31),
    [aux_sym_opcode_token16] = ACTIONS(31),
    [aux_sym_opcode_token17] = ACTIONS(31),
    [aux_sym_branch_opcode_token1] = ACTIONS(34),
    [aux_sym_branch_opcode_token2] = ACTIONS(34),
    [aux_sym_branch_opcode_token3] = ACTIONS(34),
    [aux_sym_branch_opcode_token4] = ACTIONS(34),
    [aux_sym_branch_opcode_token5] = ACTIONS(34),
    [aux_sym_branch_opcode_token6] = ACTIONS(34),
    [aux_sym_branch_opcode_token7] = ACTIONS(34),
    [aux_sym_branch_opcode_token8] = ACTIONS(34),
    [aux_sym_branch_opcode_token9] = ACTIONS(34),
    [sym_label] = ACTIONS(37),
  },
  [6] = {
    [sym_register] = STATE(14),
    [sym_constant] = STATE(14),
    [anon_sym_COMMA] = ACTIONS(40),
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
    [aux_sym_opcode_token15] = ACTIONS(42),
    [aux_sym_opcode_token16] = ACTIONS(42),
    [aux_sym_opcode_token17] = ACTIONS(42),
    [aux_sym_branch_opcode_token1] = ACTIONS(42),
    [aux_sym_branch_opcode_token2] = ACTIONS(42),
    [aux_sym_branch_opcode_token3] = ACTIONS(42),
    [aux_sym_branch_opcode_token4] = ACTIONS(42),
    [aux_sym_branch_opcode_token5] = ACTIONS(42),
    [aux_sym_branch_opcode_token6] = ACTIONS(42),
    [aux_sym_branch_opcode_token7] = ACTIONS(42),
    [aux_sym_branch_opcode_token8] = ACTIONS(42),
    [aux_sym_branch_opcode_token9] = ACTIONS(42),
    [sym_label] = ACTIONS(44),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(48),
    [aux_sym_constant_token2] = ACTIONS(48),
  },
  [7] = {
    [sym_register] = STATE(9),
    [sym_constant] = STATE(13),
    [aux_sym_load_opcode_token1] = ACTIONS(50),
    [aux_sym_load_opcode_token2] = ACTIONS(50),
    [aux_sym_push_opcode_token1] = ACTIONS(50),
    [aux_sym_push_opcode_token2] = ACTIONS(50),
    [aux_sym_opcode_token1] = ACTIONS(50),
    [aux_sym_opcode_token2] = ACTIONS(50),
    [aux_sym_opcode_token3] = ACTIONS(50),
    [aux_sym_opcode_token4] = ACTIONS(50),
    [aux_sym_opcode_token5] = ACTIONS(50),
    [aux_sym_opcode_token6] = ACTIONS(50),
    [aux_sym_opcode_token7] = ACTIONS(50),
    [aux_sym_opcode_token8] = ACTIONS(50),
    [aux_sym_opcode_token9] = ACTIONS(50),
    [aux_sym_opcode_token10] = ACTIONS(50),
    [aux_sym_opcode_token11] = ACTIONS(50),
    [aux_sym_opcode_token12] = ACTIONS(50),
    [aux_sym_opcode_token13] = ACTIONS(50),
    [aux_sym_opcode_token14] = ACTIONS(50),
    [aux_sym_opcode_token15] = ACTIONS(50),
    [aux_sym_opcode_token16] = ACTIONS(50),
    [aux_sym_opcode_token17] = ACTIONS(50),
    [aux_sym_branch_opcode_token1] = ACTIONS(50),
    [aux_sym_branch_opcode_token2] = ACTIONS(50),
    [aux_sym_branch_opcode_token3] = ACTIONS(50),
    [aux_sym_branch_opcode_token4] = ACTIONS(50),
    [aux_sym_branch_opcode_token5] = ACTIONS(50),
    [aux_sym_branch_opcode_token6] = ACTIONS(50),
    [aux_sym_branch_opcode_token7] = ACTIONS(50),
    [aux_sym_branch_opcode_token8] = ACTIONS(50),
    [aux_sym_branch_opcode_token9] = ACTIONS(50),
    [sym_label] = ACTIONS(52),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(48),
    [aux_sym_constant_token2] = ACTIONS(48),
  },
  [8] = {
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
    [aux_sym_opcode_token15] = ACTIONS(54),
    [aux_sym_opcode_token16] = ACTIONS(54),
    [aux_sym_opcode_token17] = ACTIONS(54),
    [aux_sym_branch_opcode_token1] = ACTIONS(54),
    [aux_sym_branch_opcode_token2] = ACTIONS(54),
    [aux_sym_branch_opcode_token3] = ACTIONS(54),
    [aux_sym_branch_opcode_token4] = ACTIONS(54),
    [aux_sym_branch_opcode_token5] = ACTIONS(54),
    [aux_sym_branch_opcode_token6] = ACTIONS(54),
    [aux_sym_branch_opcode_token7] = ACTIONS(54),
    [aux_sym_branch_opcode_token8] = ACTIONS(54),
    [aux_sym_branch_opcode_token9] = ACTIONS(54),
    [sym_label] = ACTIONS(56),
    [sym_directive] = ACTIONS(58),
  },
  [9] = {
    [anon_sym_COMMA] = ACTIONS(60),
    [aux_sym_load_opcode_token1] = ACTIONS(62),
    [aux_sym_load_opcode_token2] = ACTIONS(62),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(68), 1,
      sym_label,
    ACTIONS(66), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [36] = 2,
    ACTIONS(72), 1,
      sym_label,
    ACTIONS(70), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [72] = 2,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(74), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [108] = 2,
    ACTIONS(64), 1,
      sym_label,
    ACTIONS(62), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [144] = 2,
    ACTIONS(52), 1,
      sym_label,
    ACTIONS(50), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [180] = 2,
    ACTIONS(80), 1,
      sym_label,
    ACTIONS(78), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [216] = 2,
    ACTIONS(84), 1,
      sym_label,
    ACTIONS(82), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [252] = 2,
    ACTIONS(88), 1,
      sym_label,
    ACTIONS(86), 30,
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
      aux_sym_opcode_token15,
      aux_sym_opcode_token16,
      aux_sym_opcode_token17,
      aux_sym_branch_opcode_token1,
      aux_sym_branch_opcode_token2,
      aux_sym_branch_opcode_token3,
      aux_sym_branch_opcode_token4,
      aux_sym_branch_opcode_token5,
      aux_sym_branch_opcode_token6,
      aux_sym_branch_opcode_token7,
      aux_sym_branch_opcode_token8,
      aux_sym_branch_opcode_token9,
  [288] = 5,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_label,
    ACTIONS(95), 1,
      sym_directive,
    ACTIONS(98), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(18), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [307] = 5,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym_directive,
    ACTIONS(9), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(18), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [326] = 4,
    ACTIONS(48), 1,
      aux_sym_constant_token1,
    ACTIONS(107), 1,
      aux_sym_constant_token2,
    STATE(12), 2,
      sym_register,
      sym_constant,
    ACTIONS(105), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [343] = 3,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(24), 1,
      sym_register,
    ACTIONS(46), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [356] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(113), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [366] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(117), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [376] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(121), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [386] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(125), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [396] = 1,
    ACTIONS(127), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [404] = 2,
    STATE(6), 1,
      sym_register,
    ACTIONS(105), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [414] = 2,
    STATE(32), 1,
      sym_register,
    ACTIONS(129), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [424] = 1,
    ACTIONS(131), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [431] = 1,
    ACTIONS(133), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [438] = 1,
    ACTIONS(21), 1,
      aux_sym_load_statement_token1,
  [442] = 1,
    ACTIONS(135), 1,
      aux_sym_load_statement_token1,
  [446] = 1,
    ACTIONS(137), 1,
      aux_sym_load_statement_token1,
  [450] = 1,
    ACTIONS(139), 1,
      sym_identifier,
  [454] = 1,
    ACTIONS(141), 1,
      aux_sym_load_statement_token1,
  [458] = 1,
    ACTIONS(143), 1,
      sym_identifier,
  [462] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 36,
  [SMALL_STATE(12)] = 72,
  [SMALL_STATE(13)] = 108,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 252,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 343,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 386,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 431,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 442,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 450,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 458,
  [SMALL_STATE(37)] = 462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
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
