#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym_function_label = 8,
  aux_sym_return_statement_token1 = 9,
  sym_branch_statement = 10,
  aux_sym_register_token1 = 11,
  aux_sym_register_token2 = 12,
  aux_sym_register_token3 = 13,
  aux_sym_register_token4 = 14,
  sym_directive = 15,
  sym_constant = 16,
  sym_source_file = 17,
  sym_function_definition = 18,
  sym__statement = 19,
  sym_math_statement = 20,
  sym_mov_statement = 21,
  sym_opcode = 22,
  sym_return_statement = 23,
  sym_register = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_source_file_repeat2 = 26,
  aux_sym_function_definition_repeat1 = 27,
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
  [sym_function_label] = "function_label",
  [aux_sym_return_statement_token1] = "return_statement_token1",
  [sym_branch_statement] = "branch_statement",
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [sym_directive] = "directive",
  [sym_constant] = "constant",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym__statement] = "_statement",
  [sym_math_statement] = "math_statement",
  [sym_mov_statement] = "mov_statement",
  [sym_opcode] = "opcode",
  [sym_return_statement] = "return_statement",
  [sym_register] = "register",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [sym_function_label] = sym_function_label,
  [aux_sym_return_statement_token1] = aux_sym_return_statement_token1,
  [sym_branch_statement] = sym_branch_statement,
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [sym_directive] = sym_directive,
  [sym_constant] = sym_constant,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym__statement] = sym__statement,
  [sym_math_statement] = sym_math_statement,
  [sym_mov_statement] = sym_mov_statement,
  [sym_opcode] = sym_opcode,
  [sym_return_statement] = sym_return_statement,
  [sym_register] = sym_register,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_math_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_statement] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 28:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_function_label);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_return_statement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_branch_statement);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_directive);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
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
    [aux_sym_return_statement_token1] = ACTIONS(1),
    [sym_branch_statement] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_function_definition] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_function_label] = ACTIONS(5),
    [sym_directive] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_math_statement] = STATE(2),
    [sym_mov_statement] = STATE(2),
    [sym_opcode] = STATE(13),
    [sym_return_statement] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_opcode_token1] = ACTIONS(11),
    [aux_sym_opcode_token2] = ACTIONS(11),
    [aux_sym_opcode_token3] = ACTIONS(11),
    [aux_sym_opcode_token4] = ACTIONS(11),
    [aux_sym_opcode_token5] = ACTIONS(11),
    [aux_sym_opcode_token6] = ACTIONS(11),
    [sym_function_label] = ACTIONS(9),
    [aux_sym_return_statement_token1] = ACTIONS(14),
    [sym_branch_statement] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_mov_statement] = STATE(4),
    [sym_opcode] = STATE(13),
    [sym_return_statement] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(20),
    [aux_sym_opcode_token1] = ACTIONS(22),
    [aux_sym_opcode_token2] = ACTIONS(22),
    [aux_sym_opcode_token3] = ACTIONS(22),
    [aux_sym_opcode_token4] = ACTIONS(22),
    [aux_sym_opcode_token5] = ACTIONS(22),
    [aux_sym_opcode_token6] = ACTIONS(22),
    [sym_function_label] = ACTIONS(20),
    [aux_sym_return_statement_token1] = ACTIONS(24),
    [sym_branch_statement] = ACTIONS(26),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym_math_statement] = STATE(2),
    [sym_mov_statement] = STATE(2),
    [sym_opcode] = STATE(13),
    [sym_return_statement] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(28),
    [aux_sym_opcode_token1] = ACTIONS(22),
    [aux_sym_opcode_token2] = ACTIONS(22),
    [aux_sym_opcode_token3] = ACTIONS(22),
    [aux_sym_opcode_token4] = ACTIONS(22),
    [aux_sym_opcode_token5] = ACTIONS(22),
    [aux_sym_opcode_token6] = ACTIONS(22),
    [sym_function_label] = ACTIONS(28),
    [aux_sym_return_statement_token1] = ACTIONS(24),
    [sym_branch_statement] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(36), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [18] = 2,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(40), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [34] = 2,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(44), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [49] = 2,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(36), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [64] = 2,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(48), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [79] = 3,
    ACTIONS(52), 1,
      sym_constant,
    STATE(5), 1,
      sym_register,
    ACTIONS(50), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [92] = 2,
    STATE(7), 1,
      sym_register,
    ACTIONS(50), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [102] = 2,
    STATE(9), 1,
      sym_register,
    ACTIONS(50), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [112] = 2,
    STATE(19), 1,
      sym_register,
    ACTIONS(50), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [122] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_function_label,
    STATE(14), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [133] = 1,
    ACTIONS(59), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [140] = 3,
    ACTIONS(5), 1,
      sym_function_label,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [151] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_directive,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
  [161] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_directive,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
  [171] = 1,
    ACTIONS(70), 1,
      anon_sym_COMMA,
  [175] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 49,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 102,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(15),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_statement, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
