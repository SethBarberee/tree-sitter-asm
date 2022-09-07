#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  aux_sym_opcode_token1 = 2,
  aux_sym_opcode_token2 = 3,
  aux_sym_opcode_token3 = 4,
  aux_sym_opcode_token4 = 5,
  aux_sym_opcode_token5 = 6,
  aux_sym_opcode_token6 = 7,
  aux_sym_opcode_token7 = 8,
  aux_sym_opcode_token8 = 9,
  aux_sym_opcode_token9 = 10,
  aux_sym_opcode_token10 = 11,
  aux_sym_opcode_token11 = 12,
  aux_sym_opcode_token12 = 13,
  aux_sym_opcode_token13 = 14,
  aux_sym_opcode_token14 = 15,
  aux_sym_opcode_token15 = 16,
  aux_sym_return_statement_token1 = 17,
  aux_sym_branch_statement_token1 = 18,
  aux_sym_branch_statement_token2 = 19,
  aux_sym_branch_statement_token3 = 20,
  sym_label = 21,
  aux_sym_register_token1 = 22,
  aux_sym_register_token2 = 23,
  aux_sym_register_token3 = 24,
  aux_sym_register_token4 = 25,
  sym_directive = 26,
  aux_sym_comment_token1 = 27,
  aux_sym_comment_token2 = 28,
  aux_sym_constant_token1 = 29,
  aux_sym_constant_token2 = 30,
  sym_identifier = 31,
  sym_source_file = 32,
  aux_sym__statement = 33,
  sym_function_definition = 34,
  sym_math_statement = 35,
  sym_simple_statement = 36,
  sym_opcode = 37,
  sym_return_statement = 38,
  sym_branch_statement = 39,
  sym_register = 40,
  sym_comment = 41,
  sym_constant = 42,
  aux_sym_function_definition_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
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
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [aux_sym_branch_statement_token1] = "branch_statement_token1",
  [aux_sym_branch_statement_token2] = "branch_statement_token2",
  [aux_sym_branch_statement_token3] = "branch_statement_token3",
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
  [sym_simple_statement] = "simple_statement",
  [sym_opcode] = "opcode",
  [sym_return_statement] = "return_statement",
  [sym_branch_statement] = "branch_statement",
  [sym_register] = "register",
  [sym_comment] = "comment",
  [sym_constant] = "constant",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [aux_sym_branch_statement_token1] = aux_sym_branch_statement_token1,
  [aux_sym_branch_statement_token2] = aux_sym_branch_statement_token2,
  [aux_sym_branch_statement_token3] = aux_sym_branch_statement_token3,
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
  [sym_simple_statement] = sym_simple_statement,
  [sym_opcode] = sym_opcode,
  [sym_return_statement] = sym_return_statement,
  [sym_branch_statement] = sym_branch_statement,
  [sym_register] = sym_register,
  [sym_comment] = sym_comment,
  [sym_constant] = sym_constant,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'q') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'v') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_branch_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_branch_statement_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_branch_statement_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
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
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token1] = ACTIONS(1),
    [aux_sym_branch_statement_token2] = ACTIONS(1),
    [aux_sym_branch_statement_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(23),
    [aux_sym__statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_math_statement] = STATE(7),
    [sym_simple_statement] = STATE(7),
    [sym_opcode] = STATE(19),
    [sym_branch_statement] = STATE(7),
    [sym_comment] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_opcode_token1] = ACTIONS(5),
    [aux_sym_opcode_token2] = ACTIONS(5),
    [aux_sym_opcode_token3] = ACTIONS(5),
    [aux_sym_opcode_token4] = ACTIONS(5),
    [aux_sym_opcode_token5] = ACTIONS(5),
    [aux_sym_opcode_token6] = ACTIONS(5),
    [aux_sym_opcode_token7] = ACTIONS(5),
    [aux_sym_opcode_token8] = ACTIONS(5),
    [aux_sym_opcode_token9] = ACTIONS(5),
    [aux_sym_opcode_token10] = ACTIONS(5),
    [aux_sym_opcode_token11] = ACTIONS(5),
    [aux_sym_opcode_token12] = ACTIONS(5),
    [aux_sym_opcode_token13] = ACTIONS(5),
    [aux_sym_opcode_token14] = ACTIONS(5),
    [aux_sym_opcode_token15] = ACTIONS(5),
    [aux_sym_branch_statement_token1] = ACTIONS(7),
    [aux_sym_branch_statement_token2] = ACTIONS(7),
    [aux_sym_branch_statement_token3] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_directive] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
  },
  [2] = {
    [aux_sym__statement] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_math_statement] = STATE(7),
    [sym_simple_statement] = STATE(7),
    [sym_opcode] = STATE(19),
    [sym_branch_statement] = STATE(7),
    [sym_comment] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_opcode_token1] = ACTIONS(5),
    [aux_sym_opcode_token2] = ACTIONS(5),
    [aux_sym_opcode_token3] = ACTIONS(5),
    [aux_sym_opcode_token4] = ACTIONS(5),
    [aux_sym_opcode_token5] = ACTIONS(5),
    [aux_sym_opcode_token6] = ACTIONS(5),
    [aux_sym_opcode_token7] = ACTIONS(5),
    [aux_sym_opcode_token8] = ACTIONS(5),
    [aux_sym_opcode_token9] = ACTIONS(5),
    [aux_sym_opcode_token10] = ACTIONS(5),
    [aux_sym_opcode_token11] = ACTIONS(5),
    [aux_sym_opcode_token12] = ACTIONS(5),
    [aux_sym_opcode_token13] = ACTIONS(5),
    [aux_sym_opcode_token14] = ACTIONS(5),
    [aux_sym_opcode_token15] = ACTIONS(5),
    [aux_sym_branch_statement_token1] = ACTIONS(7),
    [aux_sym_branch_statement_token2] = ACTIONS(7),
    [aux_sym_branch_statement_token3] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_directive] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(21),
    [aux_sym_opcode_token1] = ACTIONS(21),
    [aux_sym_opcode_token2] = ACTIONS(21),
    [aux_sym_opcode_token3] = ACTIONS(21),
    [aux_sym_opcode_token4] = ACTIONS(21),
    [aux_sym_opcode_token5] = ACTIONS(21),
    [aux_sym_opcode_token6] = ACTIONS(21),
    [aux_sym_opcode_token7] = ACTIONS(21),
    [aux_sym_opcode_token8] = ACTIONS(21),
    [aux_sym_opcode_token9] = ACTIONS(21),
    [aux_sym_opcode_token10] = ACTIONS(21),
    [aux_sym_opcode_token11] = ACTIONS(21),
    [aux_sym_opcode_token12] = ACTIONS(21),
    [aux_sym_opcode_token13] = ACTIONS(21),
    [aux_sym_opcode_token14] = ACTIONS(21),
    [aux_sym_opcode_token15] = ACTIONS(21),
    [aux_sym_return_statement_token1] = ACTIONS(21),
    [aux_sym_branch_statement_token1] = ACTIONS(21),
    [aux_sym_branch_statement_token2] = ACTIONS(21),
    [aux_sym_branch_statement_token3] = ACTIONS(21),
    [sym_label] = ACTIONS(19),
    [aux_sym_register_token1] = ACTIONS(21),
    [aux_sym_register_token2] = ACTIONS(21),
    [aux_sym_register_token3] = ACTIONS(21),
    [aux_sym_register_token4] = ACTIONS(21),
    [sym_directive] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(21),
    [aux_sym_comment_token2] = ACTIONS(21),
    [aux_sym_constant_token1] = ACTIONS(21),
    [aux_sym_constant_token2] = ACTIONS(21),
  },
  [4] = {
    [aux_sym__statement] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_math_statement] = STATE(7),
    [sym_simple_statement] = STATE(7),
    [sym_opcode] = STATE(19),
    [sym_branch_statement] = STATE(7),
    [sym_comment] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [aux_sym_opcode_token13] = ACTIONS(25),
    [aux_sym_opcode_token14] = ACTIONS(25),
    [aux_sym_opcode_token15] = ACTIONS(25),
    [aux_sym_branch_statement_token1] = ACTIONS(28),
    [aux_sym_branch_statement_token2] = ACTIONS(28),
    [aux_sym_branch_statement_token3] = ACTIONS(28),
    [sym_label] = ACTIONS(31),
    [sym_directive] = ACTIONS(34),
    [aux_sym_comment_token1] = ACTIONS(37),
    [aux_sym_comment_token2] = ACTIONS(37),
  },
  [5] = {
    [sym_register] = STATE(15),
    [sym_constant] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(40),
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
    [aux_sym_return_statement_token1] = ACTIONS(42),
    [aux_sym_branch_statement_token1] = ACTIONS(42),
    [aux_sym_branch_statement_token2] = ACTIONS(42),
    [aux_sym_branch_statement_token3] = ACTIONS(42),
    [sym_label] = ACTIONS(44),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(48),
    [aux_sym_constant_token2] = ACTIONS(48),
  },
  [6] = {
    [sym_register] = STATE(12),
    [sym_constant] = STATE(16),
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
    [aux_sym_return_statement_token1] = ACTIONS(50),
    [aux_sym_branch_statement_token1] = ACTIONS(50),
    [aux_sym_branch_statement_token2] = ACTIONS(50),
    [aux_sym_branch_statement_token3] = ACTIONS(50),
    [sym_label] = ACTIONS(52),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(48),
    [aux_sym_constant_token2] = ACTIONS(48),
  },
  [7] = {
    [sym_math_statement] = STATE(8),
    [sym_simple_statement] = STATE(8),
    [sym_opcode] = STATE(19),
    [sym_return_statement] = STATE(10),
    [sym_branch_statement] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(8),
    [aux_sym_opcode_token1] = ACTIONS(5),
    [aux_sym_opcode_token2] = ACTIONS(5),
    [aux_sym_opcode_token3] = ACTIONS(5),
    [aux_sym_opcode_token4] = ACTIONS(5),
    [aux_sym_opcode_token5] = ACTIONS(5),
    [aux_sym_opcode_token6] = ACTIONS(5),
    [aux_sym_opcode_token7] = ACTIONS(5),
    [aux_sym_opcode_token8] = ACTIONS(5),
    [aux_sym_opcode_token9] = ACTIONS(5),
    [aux_sym_opcode_token10] = ACTIONS(5),
    [aux_sym_opcode_token11] = ACTIONS(5),
    [aux_sym_opcode_token12] = ACTIONS(5),
    [aux_sym_opcode_token13] = ACTIONS(5),
    [aux_sym_opcode_token14] = ACTIONS(5),
    [aux_sym_opcode_token15] = ACTIONS(5),
    [aux_sym_return_statement_token1] = ACTIONS(54),
    [aux_sym_branch_statement_token1] = ACTIONS(7),
    [aux_sym_branch_statement_token2] = ACTIONS(7),
    [aux_sym_branch_statement_token3] = ACTIONS(7),
    [sym_label] = ACTIONS(56),
  },
  [8] = {
    [sym_math_statement] = STATE(8),
    [sym_simple_statement] = STATE(8),
    [sym_opcode] = STATE(19),
    [sym_branch_statement] = STATE(8),
    [aux_sym_function_definition_repeat1] = STATE(8),
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
    [aux_sym_return_statement_token1] = ACTIONS(61),
    [aux_sym_branch_statement_token1] = ACTIONS(63),
    [aux_sym_branch_statement_token2] = ACTIONS(63),
    [aux_sym_branch_statement_token3] = ACTIONS(63),
    [sym_label] = ACTIONS(66),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_opcode_token1] = ACTIONS(71),
    [aux_sym_opcode_token2] = ACTIONS(71),
    [aux_sym_opcode_token3] = ACTIONS(71),
    [aux_sym_opcode_token4] = ACTIONS(71),
    [aux_sym_opcode_token5] = ACTIONS(71),
    [aux_sym_opcode_token6] = ACTIONS(71),
    [aux_sym_opcode_token7] = ACTIONS(71),
    [aux_sym_opcode_token8] = ACTIONS(71),
    [aux_sym_opcode_token9] = ACTIONS(71),
    [aux_sym_opcode_token10] = ACTIONS(71),
    [aux_sym_opcode_token11] = ACTIONS(71),
    [aux_sym_opcode_token12] = ACTIONS(71),
    [aux_sym_opcode_token13] = ACTIONS(71),
    [aux_sym_opcode_token14] = ACTIONS(71),
    [aux_sym_opcode_token15] = ACTIONS(71),
    [aux_sym_branch_statement_token1] = ACTIONS(71),
    [aux_sym_branch_statement_token2] = ACTIONS(71),
    [aux_sym_branch_statement_token3] = ACTIONS(71),
    [sym_label] = ACTIONS(69),
    [sym_directive] = ACTIONS(71),
    [aux_sym_comment_token1] = ACTIONS(71),
    [aux_sym_comment_token2] = ACTIONS(71),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_opcode_token1] = ACTIONS(75),
    [aux_sym_opcode_token2] = ACTIONS(75),
    [aux_sym_opcode_token3] = ACTIONS(75),
    [aux_sym_opcode_token4] = ACTIONS(75),
    [aux_sym_opcode_token5] = ACTIONS(75),
    [aux_sym_opcode_token6] = ACTIONS(75),
    [aux_sym_opcode_token7] = ACTIONS(75),
    [aux_sym_opcode_token8] = ACTIONS(75),
    [aux_sym_opcode_token9] = ACTIONS(75),
    [aux_sym_opcode_token10] = ACTIONS(75),
    [aux_sym_opcode_token11] = ACTIONS(75),
    [aux_sym_opcode_token12] = ACTIONS(75),
    [aux_sym_opcode_token13] = ACTIONS(75),
    [aux_sym_opcode_token14] = ACTIONS(75),
    [aux_sym_opcode_token15] = ACTIONS(75),
    [aux_sym_branch_statement_token1] = ACTIONS(75),
    [aux_sym_branch_statement_token2] = ACTIONS(75),
    [aux_sym_branch_statement_token3] = ACTIONS(75),
    [sym_label] = ACTIONS(73),
    [sym_directive] = ACTIONS(75),
    [aux_sym_comment_token1] = ACTIONS(75),
    [aux_sym_comment_token2] = ACTIONS(75),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_opcode_token1] = ACTIONS(79),
    [aux_sym_opcode_token2] = ACTIONS(79),
    [aux_sym_opcode_token3] = ACTIONS(79),
    [aux_sym_opcode_token4] = ACTIONS(79),
    [aux_sym_opcode_token5] = ACTIONS(79),
    [aux_sym_opcode_token6] = ACTIONS(79),
    [aux_sym_opcode_token7] = ACTIONS(79),
    [aux_sym_opcode_token8] = ACTIONS(79),
    [aux_sym_opcode_token9] = ACTIONS(79),
    [aux_sym_opcode_token10] = ACTIONS(79),
    [aux_sym_opcode_token11] = ACTIONS(79),
    [aux_sym_opcode_token12] = ACTIONS(79),
    [aux_sym_opcode_token13] = ACTIONS(79),
    [aux_sym_opcode_token14] = ACTIONS(79),
    [aux_sym_opcode_token15] = ACTIONS(79),
    [aux_sym_branch_statement_token1] = ACTIONS(79),
    [aux_sym_branch_statement_token2] = ACTIONS(79),
    [aux_sym_branch_statement_token3] = ACTIONS(79),
    [sym_label] = ACTIONS(77),
    [sym_directive] = ACTIONS(79),
    [aux_sym_comment_token1] = ACTIONS(79),
    [aux_sym_comment_token2] = ACTIONS(79),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      sym_label,
    ACTIONS(83), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [28] = 2,
    ACTIONS(89), 1,
      sym_label,
    ACTIONS(87), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [53] = 2,
    ACTIONS(93), 1,
      sym_label,
    ACTIONS(91), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [78] = 2,
    ACTIONS(52), 1,
      sym_label,
    ACTIONS(50), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [103] = 2,
    ACTIONS(85), 1,
      sym_label,
    ACTIONS(83), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [128] = 2,
    ACTIONS(97), 1,
      sym_label,
    ACTIONS(95), 19,
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
      aux_sym_return_statement_token1,
      aux_sym_branch_statement_token1,
      aux_sym_branch_statement_token2,
      aux_sym_branch_statement_token3,
  [153] = 4,
    ACTIONS(48), 1,
      aux_sym_constant_token1,
    ACTIONS(101), 1,
      aux_sym_constant_token2,
    STATE(17), 2,
      sym_register,
      sym_constant,
    ACTIONS(99), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [170] = 2,
    STATE(5), 1,
      sym_register,
    ACTIONS(99), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [180] = 2,
    STATE(11), 1,
      sym_register,
    ACTIONS(99), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [190] = 1,
    ACTIONS(103), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [197] = 2,
    ACTIONS(105), 1,
      sym_label,
    ACTIONS(107), 1,
      sym_identifier,
  [204] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 28,
  [SMALL_STATE(14)] = 53,
  [SMALL_STATE(15)] = 78,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 128,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 190,
  [SMALL_STATE(22)] = 197,
  [SMALL_STATE(23)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(22),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
