#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  anon_sym_mov = 2,
  anon_sym_sub = 3,
  anon_sym_add = 4,
  anon_sym_muls = 5,
  sym_function_label = 6,
  sym_return_statement = 7,
  sym_register = 8,
  sym_constant = 9,
  sym_source_file = 10,
  sym_function_definition = 11,
  sym__statement = 12,
  sym_math_statement = 13,
  sym_mov_statement = 14,
  sym_math_operation = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_function_definition_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_mov] = "mov",
  [anon_sym_sub] = "sub",
  [anon_sym_add] = "add",
  [anon_sym_muls] = "muls",
  [sym_function_label] = "function_label",
  [sym_return_statement] = "return_statement",
  [sym_register] = "register",
  [sym_constant] = "constant",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym__statement] = "_statement",
  [sym_math_statement] = "math_statement",
  [sym_mov_statement] = "mov_statement",
  [sym_math_operation] = "math_operation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_muls] = anon_sym_muls,
  [sym_function_label] = sym_function_label,
  [sym_return_statement] = sym_return_statement,
  [sym_register] = sym_register,
  [sym_constant] = sym_constant,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym__statement] = sym__statement,
  [sym_math_statement] = sym_math_statement,
  [sym_mov_statement] = sym_mov_statement,
  [sym_math_operation] = sym_math_operation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_muls] = {
    .visible = true,
    .named = false,
  },
  [sym_function_label] = {
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
  [sym_math_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 's') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == ':') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == ':') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == ':') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_muls);
      if (lookahead == ':') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_function_label);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_return_statement);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_muls] = ACTIONS(1),
    [sym_function_label] = ACTIONS(1),
    [sym_return_statement] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_function_definition] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_function_label] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_math_statement] = STATE(3),
    [sym_mov_statement] = STATE(3),
    [sym_math_operation] = STATE(13),
    [aux_sym_function_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_mov] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_muls] = ACTIONS(11),
    [sym_function_label] = ACTIONS(7),
    [sym_return_statement] = ACTIONS(13),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_mov_statement] = STATE(4),
    [sym_math_operation] = STATE(13),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_muls] = ACTIONS(11),
    [sym_function_label] = ACTIONS(15),
    [sym_return_statement] = ACTIONS(17),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_math_statement] = STATE(4),
    [sym_mov_statement] = STATE(4),
    [sym_math_operation] = STATE(13),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_mov] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(24),
    [anon_sym_add] = ACTIONS(24),
    [anon_sym_muls] = ACTIONS(24),
    [sym_function_label] = ACTIONS(19),
    [sym_return_statement] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      sym_function_label,
      sym_return_statement,
    ACTIONS(32), 4,
      anon_sym_mov,
      anon_sym_sub,
      anon_sym_add,
      anon_sym_muls,
  [12] = 2,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      sym_function_label,
      sym_return_statement,
    ACTIONS(36), 4,
      anon_sym_mov,
      anon_sym_sub,
      anon_sym_add,
      anon_sym_muls,
  [24] = 3,
    ACTIONS(5), 1,
      sym_function_label,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [35] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_function_label,
    STATE(8), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [46] = 1,
    ACTIONS(45), 2,
      sym_register,
      sym_constant,
  [51] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(49), 1,
      sym_register,
  [59] = 1,
    ACTIONS(51), 1,
      sym_register,
  [63] = 1,
    ACTIONS(53), 1,
      sym_register,
  [67] = 1,
    ACTIONS(55), 1,
      anon_sym_COMMA,
  [71] = 1,
    ACTIONS(57), 1,
      anon_sym_COMMA,
  [75] = 1,
    ACTIONS(59), 1,
      sym_register,
  [79] = 1,
    ACTIONS(61), 1,
      anon_sym_COMMA,
  [83] = 1,
    ACTIONS(63), 1,
      sym_register,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 35,
  [SMALL_STATE(9)] = 46,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 55,
  [SMALL_STATE(12)] = 59,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 71,
  [SMALL_STATE(16)] = 75,
  [SMALL_STATE(17)] = 79,
  [SMALL_STATE(18)] = 83,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(12),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_statement, 4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_statement, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operation, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
