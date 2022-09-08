#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  aux_sym_load_statement_token1 = 2,
  aux_sym_load_statement_token2 = 3,
  aux_sym_load_statement_token3 = 4,
  aux_sym_push_statement_token1 = 5,
  aux_sym_push_statement_token2 = 6,
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
  aux_sym_return_statement_token1 = 17,
  aux_sym_branch_statement_token1 = 18,
  aux_sym_branch_statement_token2 = 19,
  aux_sym_branch_statement_token3 = 20,
  aux_sym_branch_statement_token4 = 21,
  aux_sym_branch_statement_token5 = 22,
  aux_sym_branch_statement_token6 = 23,
  sym_label = 24,
  aux_sym_register_token1 = 25,
  aux_sym_register_token2 = 26,
  aux_sym_register_token3 = 27,
  aux_sym_register_token4 = 28,
  sym_directive = 29,
  aux_sym_comment_token1 = 30,
  aux_sym_comment_token2 = 31,
  aux_sym_constant_token1 = 32,
  aux_sym_constant_token2 = 33,
  sym_identifier = 34,
  sym_source_file = 35,
  aux_sym__statement = 36,
  sym_function_definition = 37,
  sym_math_statement = 38,
  sym_load_statement = 39,
  sym_pool_statement = 40,
  sym_push_statement = 41,
  sym_simple_statement = 42,
  sym_opcode = 43,
  sym_return_statement = 44,
  sym_branch_statement = 45,
  sym_register = 46,
  sym_comment = 47,
  sym_constant = 48,
  aux_sym_function_definition_repeat1 = 49,
  alias_sym_func_name = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [aux_sym_load_statement_token2] = "load_statement_token2",
  [aux_sym_load_statement_token3] = "load_statement_token3",
  [aux_sym_push_statement_token1] = "push_statement_token1",
  [aux_sym_push_statement_token2] = "push_statement_token2",
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
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [aux_sym_branch_statement_token1] = "branch_statement_token1",
  [aux_sym_branch_statement_token2] = "branch_statement_token2",
  [aux_sym_branch_statement_token3] = "branch_statement_token3",
  [aux_sym_branch_statement_token4] = "branch_statement_token4",
  [aux_sym_branch_statement_token5] = "branch_statement_token5",
  [aux_sym_branch_statement_token6] = "branch_statement_token6",
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
  [sym_pool_statement] = "pool_statement",
  [sym_push_statement] = "push_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_opcode] = "opcode",
  [sym_return_statement] = "return_statement",
  [sym_branch_statement] = "branch_statement",
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
  [aux_sym_load_statement_token2] = aux_sym_load_statement_token2,
  [aux_sym_load_statement_token3] = aux_sym_load_statement_token3,
  [aux_sym_push_statement_token1] = aux_sym_push_statement_token1,
  [aux_sym_push_statement_token2] = aux_sym_push_statement_token2,
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
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [aux_sym_branch_statement_token1] = aux_sym_branch_statement_token1,
  [aux_sym_branch_statement_token2] = aux_sym_branch_statement_token2,
  [aux_sym_branch_statement_token3] = aux_sym_branch_statement_token3,
  [aux_sym_branch_statement_token4] = aux_sym_branch_statement_token4,
  [aux_sym_branch_statement_token5] = aux_sym_branch_statement_token5,
  [aux_sym_branch_statement_token6] = aux_sym_branch_statement_token6,
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
  [sym_pool_statement] = sym_pool_statement,
  [sym_push_statement] = sym_push_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_opcode] = sym_opcode,
  [sym_return_statement] = sym_return_statement,
  [sym_branch_statement] = sym_branch_statement,
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
  [aux_sym_load_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_push_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_push_statement_token2] = {
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
  [aux_sym_return_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_statement_token6] = {
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
  [sym_pool_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_push_statement] = {
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
  [31] = 2,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'g') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'q') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'v') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_load_statement_token2);
      if (lookahead == ':') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_load_statement_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_load_statement_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_push_statement_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_push_statement_token2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_branch_statement_token4);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_branch_statement_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_branch_statement_token5);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_branch_statement_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_branch_statement_token6);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_branch_statement_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
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
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_load_statement_token1] = ACTIONS(1),
    [aux_sym_load_statement_token2] = ACTIONS(1),
    [aux_sym_push_statement_token1] = ACTIONS(1),
    [aux_sym_push_statement_token2] = ACTIONS(1),
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
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token2] = ACTIONS(1),
    [aux_sym_branch_statement_token3] = ACTIONS(1),
    [aux_sym_branch_statement_token4] = ACTIONS(1),
    [aux_sym_branch_statement_token5] = ACTIONS(1),
    [aux_sym_branch_statement_token6] = ACTIONS(1),
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
    [sym_source_file] = STATE(32),
    [aux_sym__statement] = STATE(20),
    [sym_function_definition] = STATE(20),
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label] = ACTIONS(5),
    [sym_directive] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [aux_sym_comment_token2] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(13),
    [aux_sym_load_statement_token1] = ACTIONS(13),
    [aux_sym_load_statement_token2] = ACTIONS(13),
    [aux_sym_push_statement_token1] = ACTIONS(13),
    [aux_sym_push_statement_token2] = ACTIONS(13),
    [aux_sym_opcode_token1] = ACTIONS(13),
    [aux_sym_opcode_token2] = ACTIONS(13),
    [aux_sym_opcode_token3] = ACTIONS(13),
    [aux_sym_opcode_token4] = ACTIONS(13),
    [aux_sym_opcode_token5] = ACTIONS(13),
    [aux_sym_opcode_token6] = ACTIONS(13),
    [aux_sym_opcode_token7] = ACTIONS(13),
    [aux_sym_opcode_token8] = ACTIONS(13),
    [aux_sym_opcode_token9] = ACTIONS(13),
    [aux_sym_opcode_token10] = ACTIONS(13),
    [aux_sym_return_statement_token1] = ACTIONS(13),
    [aux_sym_branch_statement_token1] = ACTIONS(13),
    [aux_sym_branch_statement_token2] = ACTIONS(13),
    [aux_sym_branch_statement_token3] = ACTIONS(13),
    [aux_sym_branch_statement_token4] = ACTIONS(13),
    [aux_sym_branch_statement_token5] = ACTIONS(13),
    [aux_sym_branch_statement_token6] = ACTIONS(13),
    [sym_label] = ACTIONS(11),
    [aux_sym_register_token1] = ACTIONS(13),
    [aux_sym_register_token2] = ACTIONS(13),
    [aux_sym_register_token3] = ACTIONS(13),
    [aux_sym_register_token4] = ACTIONS(13),
    [sym_directive] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [aux_sym_constant_token1] = ACTIONS(13),
    [aux_sym_constant_token2] = ACTIONS(13),
  },
  [3] = {
    [sym_register] = STATE(16),
    [sym_constant] = STATE(16),
    [anon_sym_COMMA] = ACTIONS(15),
    [aux_sym_load_statement_token1] = ACTIONS(17),
    [aux_sym_load_statement_token2] = ACTIONS(17),
    [aux_sym_push_statement_token1] = ACTIONS(17),
    [aux_sym_push_statement_token2] = ACTIONS(17),
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
    [aux_sym_return_statement_token1] = ACTIONS(17),
    [aux_sym_branch_statement_token1] = ACTIONS(17),
    [aux_sym_branch_statement_token2] = ACTIONS(17),
    [aux_sym_branch_statement_token3] = ACTIONS(17),
    [aux_sym_branch_statement_token4] = ACTIONS(17),
    [aux_sym_branch_statement_token5] = ACTIONS(17),
    [aux_sym_branch_statement_token6] = ACTIONS(17),
    [sym_label] = ACTIONS(19),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [4] = {
    [sym_math_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_pool_statement] = STATE(6),
    [sym_push_statement] = STATE(6),
    [sym_simple_statement] = STATE(6),
    [sym_opcode] = STATE(26),
    [sym_return_statement] = STATE(21),
    [sym_branch_statement] = STATE(6),
    [aux_sym_function_definition_repeat1] = STATE(6),
    [aux_sym_load_statement_token1] = ACTIONS(25),
    [aux_sym_load_statement_token2] = ACTIONS(25),
    [aux_sym_push_statement_token1] = ACTIONS(27),
    [aux_sym_push_statement_token2] = ACTIONS(27),
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
    [aux_sym_return_statement_token1] = ACTIONS(31),
    [aux_sym_branch_statement_token1] = ACTIONS(33),
    [aux_sym_branch_statement_token2] = ACTIONS(33),
    [aux_sym_branch_statement_token3] = ACTIONS(33),
    [aux_sym_branch_statement_token4] = ACTIONS(33),
    [aux_sym_branch_statement_token5] = ACTIONS(33),
    [aux_sym_branch_statement_token6] = ACTIONS(33),
    [sym_label] = ACTIONS(35),
  },
  [5] = {
    [sym_register] = STATE(9),
    [sym_constant] = STATE(13),
    [aux_sym_load_statement_token1] = ACTIONS(37),
    [aux_sym_load_statement_token2] = ACTIONS(37),
    [aux_sym_push_statement_token1] = ACTIONS(37),
    [aux_sym_push_statement_token2] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(37),
    [aux_sym_opcode_token2] = ACTIONS(37),
    [aux_sym_opcode_token3] = ACTIONS(37),
    [aux_sym_opcode_token4] = ACTIONS(37),
    [aux_sym_opcode_token5] = ACTIONS(37),
    [aux_sym_opcode_token6] = ACTIONS(37),
    [aux_sym_opcode_token7] = ACTIONS(37),
    [aux_sym_opcode_token8] = ACTIONS(37),
    [aux_sym_opcode_token9] = ACTIONS(37),
    [aux_sym_opcode_token10] = ACTIONS(37),
    [aux_sym_return_statement_token1] = ACTIONS(37),
    [aux_sym_branch_statement_token1] = ACTIONS(37),
    [aux_sym_branch_statement_token2] = ACTIONS(37),
    [aux_sym_branch_statement_token3] = ACTIONS(37),
    [aux_sym_branch_statement_token4] = ACTIONS(37),
    [aux_sym_branch_statement_token5] = ACTIONS(37),
    [aux_sym_branch_statement_token6] = ACTIONS(37),
    [sym_label] = ACTIONS(39),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [6] = {
    [sym_math_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_pool_statement] = STATE(6),
    [sym_push_statement] = STATE(6),
    [sym_simple_statement] = STATE(6),
    [sym_opcode] = STATE(26),
    [sym_branch_statement] = STATE(6),
    [aux_sym_function_definition_repeat1] = STATE(6),
    [aux_sym_load_statement_token1] = ACTIONS(41),
    [aux_sym_load_statement_token2] = ACTIONS(41),
    [aux_sym_push_statement_token1] = ACTIONS(44),
    [aux_sym_push_statement_token2] = ACTIONS(44),
    [aux_sym_opcode_token1] = ACTIONS(47),
    [aux_sym_opcode_token2] = ACTIONS(47),
    [aux_sym_opcode_token3] = ACTIONS(47),
    [aux_sym_opcode_token4] = ACTIONS(47),
    [aux_sym_opcode_token5] = ACTIONS(47),
    [aux_sym_opcode_token6] = ACTIONS(47),
    [aux_sym_opcode_token7] = ACTIONS(47),
    [aux_sym_opcode_token8] = ACTIONS(47),
    [aux_sym_opcode_token9] = ACTIONS(47),
    [aux_sym_opcode_token10] = ACTIONS(47),
    [aux_sym_return_statement_token1] = ACTIONS(50),
    [aux_sym_branch_statement_token1] = ACTIONS(52),
    [aux_sym_branch_statement_token2] = ACTIONS(52),
    [aux_sym_branch_statement_token3] = ACTIONS(52),
    [aux_sym_branch_statement_token4] = ACTIONS(52),
    [aux_sym_branch_statement_token5] = ACTIONS(52),
    [aux_sym_branch_statement_token6] = ACTIONS(52),
    [sym_label] = ACTIONS(55),
  },
  [7] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(26),
    [sym_branch_statement] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [aux_sym_load_statement_token1] = ACTIONS(25),
    [aux_sym_load_statement_token2] = ACTIONS(25),
    [aux_sym_push_statement_token1] = ACTIONS(27),
    [aux_sym_push_statement_token2] = ACTIONS(27),
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
    [aux_sym_branch_statement_token1] = ACTIONS(33),
    [aux_sym_branch_statement_token2] = ACTIONS(33),
    [aux_sym_branch_statement_token3] = ACTIONS(33),
    [aux_sym_branch_statement_token4] = ACTIONS(33),
    [aux_sym_branch_statement_token5] = ACTIONS(33),
    [aux_sym_branch_statement_token6] = ACTIONS(33),
    [sym_label] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(60), 1,
      sym_label,
    ACTIONS(62), 1,
      sym_directive,
    ACTIONS(58), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [30] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      sym_label,
    ACTIONS(66), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [60] = 2,
    ACTIONS(72), 1,
      sym_label,
    ACTIONS(70), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [87] = 2,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(74), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [114] = 2,
    ACTIONS(80), 1,
      sym_label,
    ACTIONS(78), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [141] = 2,
    ACTIONS(68), 1,
      sym_label,
    ACTIONS(66), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [168] = 2,
    ACTIONS(84), 1,
      sym_label,
    ACTIONS(82), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [195] = 2,
    ACTIONS(88), 1,
      sym_label,
    ACTIONS(86), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [222] = 2,
    ACTIONS(39), 1,
      sym_label,
    ACTIONS(37), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [249] = 2,
    ACTIONS(92), 1,
      sym_label,
    ACTIONS(90), 21,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_push_statement_token1,
      aux_sym_push_statement_token2,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
      aux_sym_branch_statement_token5,
      aux_sym_branch_statement_token6,
  [276] = 4,
    ACTIONS(23), 1,
      aux_sym_constant_token1,
    ACTIONS(96), 1,
      aux_sym_constant_token2,
    STATE(12), 2,
      sym_register,
      sym_constant,
    ACTIONS(94), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [293] = 5,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym_label,
    ACTIONS(103), 1,
      sym_directive,
    ACTIONS(106), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(19), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [312] = 5,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym_directive,
    ACTIONS(9), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(19), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [331] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(115), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [341] = 2,
    STATE(30), 1,
      sym_register,
    ACTIONS(117), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [351] = 2,
    STATE(24), 1,
      sym_register,
    ACTIONS(94), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [361] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(121), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [371] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(125), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [381] = 2,
    STATE(3), 1,
      sym_register,
    ACTIONS(94), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [391] = 1,
    ACTIONS(127), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [398] = 1,
    ACTIONS(129), 1,
      aux_sym_load_statement_token3,
  [402] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [406] = 1,
    ACTIONS(133), 1,
      aux_sym_load_statement_token3,
  [410] = 1,
    ACTIONS(11), 1,
      aux_sym_load_statement_token3,
  [414] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 30,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 312,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 391,
  [SMALL_STATE(28)] = 398,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(22),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(28),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(27),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(29),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(7),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
