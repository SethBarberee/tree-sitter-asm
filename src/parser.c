#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  sym_comment = 16,
  sym_constant = 17,
  sym_source_file = 18,
  sym_function_definition = 19,
  sym__statement = 20,
  sym_math_statement = 21,
  sym_mov_statement = 22,
  sym_opcode = 23,
  sym_return_statement = 24,
  sym_register = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_source_file_repeat2 = 27,
  aux_sym_source_file_repeat3 = 28,
  aux_sym_function_definition_repeat1 = 29,
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
  [sym_comment] = "comment",
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
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
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
  [sym_comment] = sym_comment,
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
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
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
  [sym_comment] = {
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
  [aux_sym_source_file_repeat3] = {
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
      if (lookahead == '@') ADVANCE(53);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
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
      if (lookahead == '@') ADVANCE(53);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_function_definition] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(20),
    [aux_sym_source_file_repeat3] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_function_label] = ACTIONS(5),
    [sym_directive] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_mov_statement] = STATE(4),
    [sym_opcode] = STATE(12),
    [sym_return_statement] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_opcode_token1] = ACTIONS(13),
    [aux_sym_opcode_token2] = ACTIONS(13),
    [aux_sym_opcode_token3] = ACTIONS(13),
    [aux_sym_opcode_token4] = ACTIONS(13),
    [aux_sym_opcode_token5] = ACTIONS(13),
    [aux_sym_opcode_token6] = ACTIONS(13),
    [sym_function_label] = ACTIONS(11),
    [aux_sym_return_statement_token1] = ACTIONS(15),
    [sym_branch_statement] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_math_statement] = STATE(2),
    [sym_mov_statement] = STATE(2),
    [sym_opcode] = STATE(12),
    [sym_return_statement] = STATE(2),
    [aux_sym_function_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_opcode_token1] = ACTIONS(13),
    [aux_sym_opcode_token2] = ACTIONS(13),
    [aux_sym_opcode_token3] = ACTIONS(13),
    [aux_sym_opcode_token4] = ACTIONS(13),
    [aux_sym_opcode_token5] = ACTIONS(13),
    [aux_sym_opcode_token6] = ACTIONS(13),
    [sym_function_label] = ACTIONS(19),
    [aux_sym_return_statement_token1] = ACTIONS(15),
    [sym_branch_statement] = ACTIONS(21),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_mov_statement] = STATE(4),
    [sym_opcode] = STATE(12),
    [sym_return_statement] = STATE(4),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_opcode_token1] = ACTIONS(25),
    [aux_sym_opcode_token2] = ACTIONS(25),
    [aux_sym_opcode_token3] = ACTIONS(25),
    [aux_sym_opcode_token4] = ACTIONS(25),
    [aux_sym_opcode_token5] = ACTIONS(25),
    [aux_sym_opcode_token6] = ACTIONS(25),
    [sym_function_label] = ACTIONS(23),
    [aux_sym_return_statement_token1] = ACTIONS(28),
    [sym_branch_statement] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(38), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [18] = 2,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(42), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [34] = 2,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(46), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [49] = 2,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(38), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [64] = 2,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      sym_function_label,
      aux_sym_return_statement_token1,
      sym_branch_statement,
    ACTIONS(50), 6,
      aux_sym_opcode_token1,
      aux_sym_opcode_token2,
      aux_sym_opcode_token3,
      aux_sym_opcode_token4,
      aux_sym_opcode_token5,
      aux_sym_opcode_token6,
  [79] = 3,
    ACTIONS(54), 1,
      sym_constant,
    STATE(5), 1,
      sym_register,
    ACTIONS(52), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [92] = 2,
    STATE(7), 1,
      sym_register,
    ACTIONS(52), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [102] = 2,
    STATE(22), 1,
      sym_register,
    ACTIONS(52), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [112] = 2,
    STATE(9), 1,
      sym_register,
    ACTIONS(52), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [122] = 1,
    ACTIONS(56), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [129] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_function_label,
    STATE(15), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [140] = 3,
    ACTIONS(5), 1,
      sym_function_label,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [151] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_directive,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
  [161] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat3,
  [171] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat3,
  [181] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_directive,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
  [191] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [195] = 1,
    ACTIONS(81), 1,
      anon_sym_COMMA,
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
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 181,
  [SMALL_STATE(21)] = 191,
  [SMALL_STATE(22)] = 195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(11),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_statement, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
