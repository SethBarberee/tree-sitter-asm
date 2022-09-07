#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  aux_sym_load_statement_token1 = 2,
  aux_sym_load_statement_token2 = 3,
  aux_sym_load_statement_token3 = 4,
  aux_sym_load_statement_token4 = 5,
  aux_sym_load_statement_token5 = 6,
  aux_sym_load_statement_token6 = 7,
  aux_sym_load_statement_token7 = 8,
  aux_sym_push_statement_token1 = 9,
  aux_sym_push_statement_token2 = 10,
  aux_sym_opcode_token1 = 11,
  aux_sym_opcode_token2 = 12,
  aux_sym_opcode_token3 = 13,
  aux_sym_opcode_token4 = 14,
  aux_sym_opcode_token5 = 15,
  aux_sym_opcode_token6 = 16,
  aux_sym_opcode_token7 = 17,
  aux_sym_opcode_token8 = 18,
  aux_sym_opcode_token9 = 19,
  aux_sym_opcode_token10 = 20,
  aux_sym_opcode_token11 = 21,
  aux_sym_opcode_token12 = 22,
  aux_sym_return_statement_token1 = 23,
  aux_sym_branch_statement_token1 = 24,
  aux_sym_branch_statement_token2 = 25,
  aux_sym_branch_statement_token3 = 26,
  aux_sym_branch_statement_token4 = 27,
  sym_label = 28,
  aux_sym_register_token1 = 29,
  aux_sym_register_token2 = 30,
  aux_sym_register_token3 = 31,
  aux_sym_register_token4 = 32,
  sym_directive = 33,
  aux_sym_comment_token1 = 34,
  aux_sym_comment_token2 = 35,
  aux_sym_constant_token1 = 36,
  aux_sym_constant_token2 = 37,
  sym_identifier = 38,
  sym_source_file = 39,
  aux_sym__statement = 40,
  sym_function_definition = 41,
  sym_math_statement = 42,
  sym_load_statement = 43,
  sym_push_statement = 44,
  sym_simple_statement = 45,
  sym_opcode = 46,
  sym_return_statement = 47,
  sym_branch_statement = 48,
  sym_register = 49,
  sym_comment = 50,
  sym_constant = 51,
  aux_sym_function_definition_repeat1 = 52,
  alias_sym_func_name = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [aux_sym_load_statement_token2] = "load_statement_token2",
  [aux_sym_load_statement_token3] = "load_statement_token3",
  [aux_sym_load_statement_token4] = "load_statement_token4",
  [aux_sym_load_statement_token5] = "load_statement_token5",
  [aux_sym_load_statement_token6] = "load_statement_token6",
  [aux_sym_load_statement_token7] = "load_statement_token7",
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
  [aux_sym_opcode_token11] = "opcode_token11",
  [aux_sym_opcode_token12] = "opcode_token12",
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [aux_sym_branch_statement_token1] = "branch_statement_token1",
  [aux_sym_branch_statement_token2] = "branch_statement_token2",
  [aux_sym_branch_statement_token3] = "branch_statement_token3",
  [aux_sym_branch_statement_token4] = "branch_statement_token4",
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
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_math_statement] = "math_statement",
  [sym_load_statement] = "load_statement",
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
  [aux_sym_load_statement_token4] = aux_sym_load_statement_token4,
  [aux_sym_load_statement_token5] = aux_sym_load_statement_token5,
  [aux_sym_load_statement_token6] = aux_sym_load_statement_token6,
  [aux_sym_load_statement_token7] = aux_sym_load_statement_token7,
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
  [aux_sym_opcode_token11] = aux_sym_opcode_token11,
  [aux_sym_opcode_token12] = aux_sym_opcode_token12,
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [aux_sym_branch_statement_token1] = aux_sym_branch_statement_token1,
  [aux_sym_branch_statement_token2] = aux_sym_branch_statement_token2,
  [aux_sym_branch_statement_token3] = aux_sym_branch_statement_token3,
  [aux_sym_branch_statement_token4] = aux_sym_branch_statement_token4,
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
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_math_statement] = sym_math_statement,
  [sym_load_statement] = sym_load_statement,
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
  [aux_sym_load_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_statement_token7] = {
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
  [aux_sym_opcode_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token12] = {
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
  [30] = 2,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'q') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_load_statement_token2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_load_statement_token3);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_load_statement_token4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_load_statement_token4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_load_statement_token5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_load_statement_token6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_load_statement_token7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_load_statement_token7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_push_statement_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_push_statement_token2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_branch_statement_token4);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_branch_statement_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
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
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 51},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_load_statement_token1] = ACTIONS(1),
    [aux_sym_load_statement_token2] = ACTIONS(1),
    [aux_sym_load_statement_token3] = ACTIONS(1),
    [aux_sym_load_statement_token4] = ACTIONS(1),
    [aux_sym_load_statement_token5] = ACTIONS(1),
    [aux_sym_load_statement_token6] = ACTIONS(1),
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
    [aux_sym_opcode_token11] = ACTIONS(1),
    [aux_sym_opcode_token12] = ACTIONS(1),
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token2] = ACTIONS(1),
    [aux_sym_branch_statement_token3] = ACTIONS(1),
    [aux_sym_branch_statement_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(28),
    [aux_sym__statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_comment] = STATE(16),
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
    [aux_sym_load_statement_token3] = ACTIONS(13),
    [aux_sym_load_statement_token4] = ACTIONS(13),
    [aux_sym_load_statement_token5] = ACTIONS(13),
    [aux_sym_load_statement_token6] = ACTIONS(13),
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
    [aux_sym_opcode_token11] = ACTIONS(13),
    [aux_sym_opcode_token12] = ACTIONS(13),
    [aux_sym_return_statement_token1] = ACTIONS(13),
    [aux_sym_branch_statement_token1] = ACTIONS(13),
    [aux_sym_branch_statement_token2] = ACTIONS(13),
    [aux_sym_branch_statement_token3] = ACTIONS(13),
    [aux_sym_branch_statement_token4] = ACTIONS(13),
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
    [sym_register] = STATE(11),
    [sym_constant] = STATE(11),
    [anon_sym_COMMA] = ACTIONS(15),
    [aux_sym_load_statement_token1] = ACTIONS(17),
    [aux_sym_load_statement_token2] = ACTIONS(17),
    [aux_sym_load_statement_token3] = ACTIONS(17),
    [aux_sym_load_statement_token4] = ACTIONS(17),
    [aux_sym_load_statement_token5] = ACTIONS(17),
    [aux_sym_load_statement_token6] = ACTIONS(17),
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
    [aux_sym_opcode_token11] = ACTIONS(17),
    [aux_sym_opcode_token12] = ACTIONS(17),
    [aux_sym_return_statement_token1] = ACTIONS(17),
    [aux_sym_branch_statement_token1] = ACTIONS(17),
    [aux_sym_branch_statement_token2] = ACTIONS(17),
    [aux_sym_branch_statement_token3] = ACTIONS(17),
    [aux_sym_branch_statement_token4] = ACTIONS(17),
    [sym_label] = ACTIONS(19),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [4] = {
    [sym_register] = STATE(8),
    [sym_constant] = STATE(10),
    [aux_sym_load_statement_token1] = ACTIONS(25),
    [aux_sym_load_statement_token2] = ACTIONS(25),
    [aux_sym_load_statement_token3] = ACTIONS(25),
    [aux_sym_load_statement_token4] = ACTIONS(25),
    [aux_sym_load_statement_token5] = ACTIONS(25),
    [aux_sym_load_statement_token6] = ACTIONS(25),
    [aux_sym_push_statement_token1] = ACTIONS(25),
    [aux_sym_push_statement_token2] = ACTIONS(25),
    [aux_sym_opcode_token1] = ACTIONS(25),
    [aux_sym_opcode_token2] = ACTIONS(25),
    [aux_sym_opcode_token3] = ACTIONS(25),
    [aux_sym_opcode_token4] = ACTIONS(25),
    [aux_sym_opcode_token5] = ACTIONS(25),
    [aux_sym_opcode_token6] = ACTIONS(25),
    [aux_sym_opcode_token7] = ACTIONS(25),
    [aux_sym_opcode_token8] = ACTIONS(25),
    [aux_sym_opcode_token9] = ACTIONS(25),
    [aux_sym_opcode_token10] = ACTIONS(25),
    [aux_sym_opcode_token11] = ACTIONS(25),
    [aux_sym_opcode_token12] = ACTIONS(25),
    [aux_sym_return_statement_token1] = ACTIONS(25),
    [aux_sym_branch_statement_token1] = ACTIONS(25),
    [aux_sym_branch_statement_token2] = ACTIONS(25),
    [aux_sym_branch_statement_token3] = ACTIONS(25),
    [aux_sym_branch_statement_token4] = ACTIONS(25),
    [sym_label] = ACTIONS(27),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(23),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [5] = {
    [sym_math_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_push_statement] = STATE(6),
    [sym_simple_statement] = STATE(6),
    [sym_opcode] = STATE(23),
    [sym_return_statement] = STATE(21),
    [sym_branch_statement] = STATE(6),
    [aux_sym_function_definition_repeat1] = STATE(6),
    [aux_sym_load_statement_token1] = ACTIONS(29),
    [aux_sym_load_statement_token2] = ACTIONS(29),
    [aux_sym_load_statement_token3] = ACTIONS(29),
    [aux_sym_load_statement_token4] = ACTIONS(29),
    [aux_sym_load_statement_token5] = ACTIONS(29),
    [aux_sym_load_statement_token6] = ACTIONS(29),
    [aux_sym_push_statement_token1] = ACTIONS(31),
    [aux_sym_push_statement_token2] = ACTIONS(31),
    [aux_sym_opcode_token1] = ACTIONS(33),
    [aux_sym_opcode_token2] = ACTIONS(33),
    [aux_sym_opcode_token3] = ACTIONS(33),
    [aux_sym_opcode_token4] = ACTIONS(33),
    [aux_sym_opcode_token5] = ACTIONS(33),
    [aux_sym_opcode_token6] = ACTIONS(33),
    [aux_sym_opcode_token7] = ACTIONS(33),
    [aux_sym_opcode_token8] = ACTIONS(33),
    [aux_sym_opcode_token9] = ACTIONS(33),
    [aux_sym_opcode_token10] = ACTIONS(33),
    [aux_sym_opcode_token11] = ACTIONS(33),
    [aux_sym_opcode_token12] = ACTIONS(33),
    [aux_sym_return_statement_token1] = ACTIONS(35),
    [aux_sym_branch_statement_token1] = ACTIONS(37),
    [aux_sym_branch_statement_token2] = ACTIONS(37),
    [aux_sym_branch_statement_token3] = ACTIONS(37),
    [aux_sym_branch_statement_token4] = ACTIONS(37),
    [sym_label] = ACTIONS(39),
  },
  [6] = {
    [sym_math_statement] = STATE(6),
    [sym_load_statement] = STATE(6),
    [sym_push_statement] = STATE(6),
    [sym_simple_statement] = STATE(6),
    [sym_opcode] = STATE(23),
    [sym_branch_statement] = STATE(6),
    [aux_sym_function_definition_repeat1] = STATE(6),
    [aux_sym_load_statement_token1] = ACTIONS(41),
    [aux_sym_load_statement_token2] = ACTIONS(41),
    [aux_sym_load_statement_token3] = ACTIONS(41),
    [aux_sym_load_statement_token4] = ACTIONS(41),
    [aux_sym_load_statement_token5] = ACTIONS(41),
    [aux_sym_load_statement_token6] = ACTIONS(41),
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
    [aux_sym_opcode_token11] = ACTIONS(47),
    [aux_sym_opcode_token12] = ACTIONS(47),
    [aux_sym_return_statement_token1] = ACTIONS(50),
    [aux_sym_branch_statement_token1] = ACTIONS(52),
    [aux_sym_branch_statement_token2] = ACTIONS(52),
    [aux_sym_branch_statement_token3] = ACTIONS(52),
    [aux_sym_branch_statement_token4] = ACTIONS(52),
    [sym_label] = ACTIONS(55),
  },
  [7] = {
    [sym_math_statement] = STATE(5),
    [sym_load_statement] = STATE(5),
    [sym_push_statement] = STATE(5),
    [sym_simple_statement] = STATE(5),
    [sym_opcode] = STATE(23),
    [sym_branch_statement] = STATE(5),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [aux_sym_load_statement_token1] = ACTIONS(29),
    [aux_sym_load_statement_token2] = ACTIONS(29),
    [aux_sym_load_statement_token3] = ACTIONS(29),
    [aux_sym_load_statement_token4] = ACTIONS(29),
    [aux_sym_load_statement_token5] = ACTIONS(29),
    [aux_sym_load_statement_token6] = ACTIONS(29),
    [aux_sym_push_statement_token1] = ACTIONS(31),
    [aux_sym_push_statement_token2] = ACTIONS(31),
    [aux_sym_opcode_token1] = ACTIONS(33),
    [aux_sym_opcode_token2] = ACTIONS(33),
    [aux_sym_opcode_token3] = ACTIONS(33),
    [aux_sym_opcode_token4] = ACTIONS(33),
    [aux_sym_opcode_token5] = ACTIONS(33),
    [aux_sym_opcode_token6] = ACTIONS(33),
    [aux_sym_opcode_token7] = ACTIONS(33),
    [aux_sym_opcode_token8] = ACTIONS(33),
    [aux_sym_opcode_token9] = ACTIONS(33),
    [aux_sym_opcode_token10] = ACTIONS(33),
    [aux_sym_opcode_token11] = ACTIONS(33),
    [aux_sym_opcode_token12] = ACTIONS(33),
    [aux_sym_branch_statement_token1] = ACTIONS(37),
    [aux_sym_branch_statement_token2] = ACTIONS(37),
    [aux_sym_branch_statement_token3] = ACTIONS(37),
    [aux_sym_branch_statement_token4] = ACTIONS(37),
    [sym_label] = ACTIONS(58),
  },
  [8] = {
    [anon_sym_COMMA] = ACTIONS(60),
    [aux_sym_load_statement_token1] = ACTIONS(62),
    [aux_sym_load_statement_token2] = ACTIONS(62),
    [aux_sym_load_statement_token3] = ACTIONS(62),
    [aux_sym_load_statement_token4] = ACTIONS(62),
    [aux_sym_load_statement_token5] = ACTIONS(62),
    [aux_sym_load_statement_token6] = ACTIONS(62),
    [aux_sym_push_statement_token1] = ACTIONS(62),
    [aux_sym_push_statement_token2] = ACTIONS(62),
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
    [aux_sym_return_statement_token1] = ACTIONS(62),
    [aux_sym_branch_statement_token1] = ACTIONS(62),
    [aux_sym_branch_statement_token2] = ACTIONS(62),
    [aux_sym_branch_statement_token3] = ACTIONS(62),
    [aux_sym_branch_statement_token4] = ACTIONS(62),
    [sym_label] = ACTIONS(64),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(68), 1,
      sym_label,
    ACTIONS(66), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [31] = 2,
    ACTIONS(64), 1,
      sym_label,
    ACTIONS(62), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [62] = 2,
    ACTIONS(27), 1,
      sym_label,
    ACTIONS(25), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [93] = 2,
    ACTIONS(72), 1,
      sym_label,
    ACTIONS(70), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [124] = 2,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(74), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [155] = 2,
    ACTIONS(80), 1,
      sym_label,
    ACTIONS(78), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [186] = 2,
    ACTIONS(84), 1,
      sym_label,
    ACTIONS(82), 25,
      aux_sym_load_statement_token1,
      aux_sym_load_statement_token2,
      aux_sym_load_statement_token3,
      aux_sym_load_statement_token4,
      aux_sym_load_statement_token5,
      aux_sym_load_statement_token6,
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
      aux_sym_opcode_token11,
      aux_sym_opcode_token12,
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
      aux_sym_branch_statement_token4,
  [217] = 5,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_directive,
    ACTIONS(9), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(17), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [236] = 5,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_label,
    ACTIONS(95), 1,
      sym_directive,
    ACTIONS(98), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(17), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_comment,
  [255] = 4,
    ACTIONS(23), 1,
      aux_sym_constant_token1,
    ACTIONS(103), 1,
      aux_sym_constant_token2,
    STATE(13), 2,
      sym_register,
      sym_constant,
    ACTIONS(101), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [272] = 2,
    STATE(29), 1,
      sym_register,
    ACTIONS(105), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [282] = 2,
    STATE(24), 1,
      sym_register,
    ACTIONS(101), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [292] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(109), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [302] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(113), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [312] = 2,
    STATE(3), 1,
      sym_register,
    ACTIONS(101), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [322] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_label,
    ACTIONS(117), 3,
      sym_directive,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [332] = 1,
    ACTIONS(119), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [339] = 2,
    ACTIONS(121), 1,
      sym_label,
    ACTIONS(123), 1,
      sym_identifier,
  [346] = 1,
    ACTIONS(125), 1,
      aux_sym_load_statement_token7,
  [350] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [354] = 1,
    ACTIONS(129), 1,
      aux_sym_load_statement_token7,
  [358] = 1,
    ACTIONS(11), 1,
      aux_sym_load_statement_token7,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 31,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 292,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 322,
  [SMALL_STATE(25)] = 332,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 346,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 354,
  [SMALL_STATE(30)] = 358,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(27),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(26),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(7),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(17),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
