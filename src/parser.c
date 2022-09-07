#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  sym_function_label = 16,
  aux_sym_return_statement_token1 = 17,
  sym_branch_statement = 18,
  aux_sym_register_token1 = 19,
  aux_sym_register_token2 = 20,
  aux_sym_register_token3 = 21,
  aux_sym_register_token4 = 22,
  sym_directive = 23,
  sym_comment = 24,
  aux_sym_constant_token1 = 25,
  aux_sym_constant_token2 = 26,
  sym_source_file = 27,
  aux_sym__statement = 28,
  sym_function_definition = 29,
  sym_function_statement = 30,
  sym_math_statement = 31,
  sym_simple_statement = 32,
  sym_opcode = 33,
  sym_return_statement = 34,
  sym_register = 35,
  sym_constant = 36,
  aux_sym_function_definition_repeat1 = 37,
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
  [sym_function_label] = "function_label",
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [sym_branch_statement] = "branch_statement",
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_function_statement] = "function_statement",
  [sym_math_statement] = "math_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_opcode] = "opcode",
  [sym_return_statement] = "return_statement",
  [sym_register] = "register",
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
  [sym_function_label] = sym_function_label,
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [sym_branch_statement] = sym_branch_statement,
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_function_statement] = sym_function_statement,
  [sym_math_statement] = sym_math_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_opcode] = sym_opcode,
  [sym_return_statement] = sym_return_statement,
  [sym_register] = sym_register,
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
  [sym_function_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_return_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_branch_statement] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
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
  [sym_function_statement] = {
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
  [sym_register] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 's') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 's') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 32:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'v') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_function_label);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_branch_statement);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_directive);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
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
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 0},
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
    [sym_function_label] = ACTIONS(1),
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [sym_branch_statement] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [aux_sym__statement] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_return_statement] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_function_label] = ACTIONS(5),
    [aux_sym_return_statement_token1] = ACTIONS(7),
    [sym_branch_statement] = ACTIONS(9),
    [sym_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_register] = STATE(11),
    [sym_constant] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(13),
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
    [sym_function_label] = ACTIONS(11),
    [aux_sym_return_statement_token1] = ACTIONS(11),
    [sym_branch_statement] = ACTIONS(11),
    [aux_sym_register_token1] = ACTIONS(17),
    [aux_sym_register_token2] = ACTIONS(19),
    [aux_sym_register_token3] = ACTIONS(19),
    [aux_sym_register_token4] = ACTIONS(19),
    [sym_directive] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [aux_sym_constant_token1] = ACTIONS(21),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [3] = {
    [sym_register] = STATE(8),
    [sym_constant] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_opcode_token1] = ACTIONS(27),
    [aux_sym_opcode_token2] = ACTIONS(27),
    [aux_sym_opcode_token3] = ACTIONS(27),
    [aux_sym_opcode_token4] = ACTIONS(27),
    [aux_sym_opcode_token5] = ACTIONS(27),
    [aux_sym_opcode_token6] = ACTIONS(27),
    [aux_sym_opcode_token7] = ACTIONS(27),
    [aux_sym_opcode_token8] = ACTIONS(27),
    [aux_sym_opcode_token9] = ACTIONS(27),
    [aux_sym_opcode_token10] = ACTIONS(27),
    [aux_sym_opcode_token11] = ACTIONS(27),
    [aux_sym_opcode_token12] = ACTIONS(27),
    [aux_sym_opcode_token13] = ACTIONS(27),
    [aux_sym_opcode_token14] = ACTIONS(27),
    [sym_function_label] = ACTIONS(25),
    [aux_sym_return_statement_token1] = ACTIONS(25),
    [sym_branch_statement] = ACTIONS(25),
    [aux_sym_register_token1] = ACTIONS(17),
    [aux_sym_register_token2] = ACTIONS(19),
    [aux_sym_register_token3] = ACTIONS(19),
    [aux_sym_register_token4] = ACTIONS(19),
    [sym_directive] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [aux_sym_constant_token1] = ACTIONS(21),
    [aux_sym_constant_token2] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
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
    [sym_function_label] = ACTIONS(29),
    [aux_sym_return_statement_token1] = ACTIONS(29),
    [sym_branch_statement] = ACTIONS(29),
    [aux_sym_register_token1] = ACTIONS(29),
    [aux_sym_register_token2] = ACTIONS(31),
    [aux_sym_register_token3] = ACTIONS(31),
    [aux_sym_register_token4] = ACTIONS(31),
    [sym_directive] = ACTIONS(29),
    [sym_comment] = ACTIONS(29),
    [aux_sym_constant_token1] = ACTIONS(31),
    [aux_sym_constant_token2] = ACTIONS(29),
  },
  [5] = {
    [sym_function_statement] = STATE(7),
    [sym_math_statement] = STATE(9),
    [sym_simple_statement] = STATE(9),
    [sym_opcode] = STATE(17),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_opcode_token1] = ACTIONS(35),
    [aux_sym_opcode_token2] = ACTIONS(35),
    [aux_sym_opcode_token3] = ACTIONS(35),
    [aux_sym_opcode_token4] = ACTIONS(35),
    [aux_sym_opcode_token5] = ACTIONS(35),
    [aux_sym_opcode_token6] = ACTIONS(35),
    [aux_sym_opcode_token7] = ACTIONS(35),
    [aux_sym_opcode_token8] = ACTIONS(35),
    [aux_sym_opcode_token9] = ACTIONS(35),
    [aux_sym_opcode_token10] = ACTIONS(35),
    [aux_sym_opcode_token11] = ACTIONS(35),
    [aux_sym_opcode_token12] = ACTIONS(35),
    [aux_sym_opcode_token13] = ACTIONS(35),
    [aux_sym_opcode_token14] = ACTIONS(35),
    [sym_function_label] = ACTIONS(33),
    [aux_sym_return_statement_token1] = ACTIONS(33),
    [sym_branch_statement] = ACTIONS(33),
    [sym_directive] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [sym_function_statement] = STATE(5),
    [sym_math_statement] = STATE(9),
    [sym_simple_statement] = STATE(9),
    [sym_opcode] = STATE(17),
    [aux_sym_function_definition_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(35),
    [aux_sym_opcode_token2] = ACTIONS(35),
    [aux_sym_opcode_token3] = ACTIONS(35),
    [aux_sym_opcode_token4] = ACTIONS(35),
    [aux_sym_opcode_token5] = ACTIONS(35),
    [aux_sym_opcode_token6] = ACTIONS(35),
    [aux_sym_opcode_token7] = ACTIONS(35),
    [aux_sym_opcode_token8] = ACTIONS(35),
    [aux_sym_opcode_token9] = ACTIONS(35),
    [aux_sym_opcode_token10] = ACTIONS(35),
    [aux_sym_opcode_token11] = ACTIONS(35),
    [aux_sym_opcode_token12] = ACTIONS(35),
    [aux_sym_opcode_token13] = ACTIONS(35),
    [aux_sym_opcode_token14] = ACTIONS(35),
    [sym_function_label] = ACTIONS(37),
    [aux_sym_return_statement_token1] = ACTIONS(37),
    [sym_branch_statement] = ACTIONS(37),
    [sym_directive] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym_function_statement] = STATE(7),
    [sym_math_statement] = STATE(9),
    [sym_simple_statement] = STATE(9),
    [sym_opcode] = STATE(17),
    [aux_sym_function_definition_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_opcode_token1] = ACTIONS(41),
    [aux_sym_opcode_token2] = ACTIONS(41),
    [aux_sym_opcode_token3] = ACTIONS(41),
    [aux_sym_opcode_token4] = ACTIONS(41),
    [aux_sym_opcode_token5] = ACTIONS(41),
    [aux_sym_opcode_token6] = ACTIONS(41),
    [aux_sym_opcode_token7] = ACTIONS(41),
    [aux_sym_opcode_token8] = ACTIONS(41),
    [aux_sym_opcode_token9] = ACTIONS(41),
    [aux_sym_opcode_token10] = ACTIONS(41),
    [aux_sym_opcode_token11] = ACTIONS(41),
    [aux_sym_opcode_token12] = ACTIONS(41),
    [aux_sym_opcode_token13] = ACTIONS(41),
    [aux_sym_opcode_token14] = ACTIONS(41),
    [sym_function_label] = ACTIONS(39),
    [aux_sym_return_statement_token1] = ACTIONS(39),
    [sym_branch_statement] = ACTIONS(39),
    [sym_directive] = ACTIONS(39),
    [sym_comment] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(46),
    [aux_sym_opcode_token1] = ACTIONS(48),
    [aux_sym_opcode_token2] = ACTIONS(48),
    [aux_sym_opcode_token3] = ACTIONS(48),
    [aux_sym_opcode_token4] = ACTIONS(48),
    [aux_sym_opcode_token5] = ACTIONS(48),
    [aux_sym_opcode_token6] = ACTIONS(48),
    [aux_sym_opcode_token7] = ACTIONS(48),
    [aux_sym_opcode_token8] = ACTIONS(48),
    [aux_sym_opcode_token9] = ACTIONS(48),
    [aux_sym_opcode_token10] = ACTIONS(48),
    [aux_sym_opcode_token11] = ACTIONS(48),
    [aux_sym_opcode_token12] = ACTIONS(48),
    [aux_sym_opcode_token13] = ACTIONS(48),
    [aux_sym_opcode_token14] = ACTIONS(48),
    [sym_function_label] = ACTIONS(44),
    [aux_sym_return_statement_token1] = ACTIONS(44),
    [sym_branch_statement] = ACTIONS(44),
    [sym_directive] = ACTIONS(44),
    [sym_comment] = ACTIONS(44),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(50),
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
    [sym_function_label] = ACTIONS(50),
    [aux_sym_return_statement_token1] = ACTIONS(50),
    [sym_branch_statement] = ACTIONS(50),
    [sym_directive] = ACTIONS(50),
    [sym_comment] = ACTIONS(50),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_opcode_token1] = ACTIONS(56),
    [aux_sym_opcode_token2] = ACTIONS(56),
    [aux_sym_opcode_token3] = ACTIONS(56),
    [aux_sym_opcode_token4] = ACTIONS(56),
    [aux_sym_opcode_token5] = ACTIONS(56),
    [aux_sym_opcode_token6] = ACTIONS(56),
    [aux_sym_opcode_token7] = ACTIONS(56),
    [aux_sym_opcode_token8] = ACTIONS(56),
    [aux_sym_opcode_token9] = ACTIONS(56),
    [aux_sym_opcode_token10] = ACTIONS(56),
    [aux_sym_opcode_token11] = ACTIONS(56),
    [aux_sym_opcode_token12] = ACTIONS(56),
    [aux_sym_opcode_token13] = ACTIONS(56),
    [aux_sym_opcode_token14] = ACTIONS(56),
    [sym_function_label] = ACTIONS(54),
    [aux_sym_return_statement_token1] = ACTIONS(54),
    [sym_branch_statement] = ACTIONS(54),
    [sym_directive] = ACTIONS(54),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_opcode_token1] = ACTIONS(27),
    [aux_sym_opcode_token2] = ACTIONS(27),
    [aux_sym_opcode_token3] = ACTIONS(27),
    [aux_sym_opcode_token4] = ACTIONS(27),
    [aux_sym_opcode_token5] = ACTIONS(27),
    [aux_sym_opcode_token6] = ACTIONS(27),
    [aux_sym_opcode_token7] = ACTIONS(27),
    [aux_sym_opcode_token8] = ACTIONS(27),
    [aux_sym_opcode_token9] = ACTIONS(27),
    [aux_sym_opcode_token10] = ACTIONS(27),
    [aux_sym_opcode_token11] = ACTIONS(27),
    [aux_sym_opcode_token12] = ACTIONS(27),
    [aux_sym_opcode_token13] = ACTIONS(27),
    [aux_sym_opcode_token14] = ACTIONS(27),
    [sym_function_label] = ACTIONS(25),
    [aux_sym_return_statement_token1] = ACTIONS(25),
    [sym_branch_statement] = ACTIONS(25),
    [sym_directive] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_opcode_token1] = ACTIONS(48),
    [aux_sym_opcode_token2] = ACTIONS(48),
    [aux_sym_opcode_token3] = ACTIONS(48),
    [aux_sym_opcode_token4] = ACTIONS(48),
    [aux_sym_opcode_token5] = ACTIONS(48),
    [aux_sym_opcode_token6] = ACTIONS(48),
    [aux_sym_opcode_token7] = ACTIONS(48),
    [aux_sym_opcode_token8] = ACTIONS(48),
    [aux_sym_opcode_token9] = ACTIONS(48),
    [aux_sym_opcode_token10] = ACTIONS(48),
    [aux_sym_opcode_token11] = ACTIONS(48),
    [aux_sym_opcode_token12] = ACTIONS(48),
    [aux_sym_opcode_token13] = ACTIONS(48),
    [aux_sym_opcode_token14] = ACTIONS(48),
    [sym_function_label] = ACTIONS(44),
    [aux_sym_return_statement_token1] = ACTIONS(44),
    [sym_branch_statement] = ACTIONS(44),
    [sym_directive] = ACTIONS(44),
    [sym_comment] = ACTIONS(44),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(58),
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
    [sym_function_label] = ACTIONS(58),
    [aux_sym_return_statement_token1] = ACTIONS(58),
    [sym_branch_statement] = ACTIONS(58),
    [sym_directive] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_function_label,
    ACTIONS(7), 1,
      aux_sym_return_statement_token1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      sym_branch_statement,
      sym_directive,
      sym_comment,
    STATE(15), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_return_statement,
  [20] = 5,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_function_label,
    ACTIONS(71), 1,
      aux_sym_return_statement_token1,
    ACTIONS(74), 3,
      sym_branch_statement,
      sym_directive,
      sym_comment,
    STATE(15), 3,
      aux_sym__statement,
      sym_function_definition,
      sym_return_statement,
  [40] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
      sym_directive,
      sym_comment,
  [49] = 2,
    STATE(2), 1,
      sym_register,
    ACTIONS(17), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [59] = 2,
    STATE(16), 1,
      sym_register,
    ACTIONS(17), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [69] = 2,
    STATE(13), 1,
      sym_register,
    ACTIONS(17), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [79] = 1,
    ACTIONS(79), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [86] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 20,
  [SMALL_STATE(16)] = 40,
  [SMALL_STATE(17)] = 49,
  [SMALL_STATE(18)] = 59,
  [SMALL_STATE(19)] = 69,
  [SMALL_STATE(20)] = 79,
  [SMALL_STATE(21)] = 86,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
