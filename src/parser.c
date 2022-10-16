#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  aux_sym_load_statement_token1 = 3,
  aux_sym_load_opcode_token1 = 4,
  aux_sym_load_opcode_token2 = 5,
  aux_sym_load_opcode_token3 = 6,
  aux_sym_push_opcode_token1 = 7,
  aux_sym_push_opcode_token2 = 8,
  aux_sym_opcode_token1 = 9,
  aux_sym_opcode_token2 = 10,
  aux_sym_opcode_token3 = 11,
  aux_sym_opcode_token4 = 12,
  aux_sym_opcode_token5 = 13,
  aux_sym_opcode_token6 = 14,
  aux_sym_opcode_token7 = 15,
  aux_sym_opcode_token8 = 16,
  aux_sym_opcode_token9 = 17,
  aux_sym_opcode_token10 = 18,
  aux_sym_opcode_token11 = 19,
  aux_sym_opcode_token12 = 20,
  aux_sym_opcode_token13 = 21,
  aux_sym_opcode_token14 = 22,
  aux_sym_opcode_token15 = 23,
  aux_sym_opcode_token16 = 24,
  aux_sym_opcode_token17 = 25,
  aux_sym_opcode_token18 = 26,
  aux_sym_opcode_token19 = 27,
  aux_sym_opcode_token20 = 28,
  aux_sym_opcode_token21 = 29,
  aux_sym_opcode_token22 = 30,
  aux_sym_opcode_token23 = 31,
  aux_sym_branch_opcode_token1 = 32,
  aux_sym_branch_opcode_token2 = 33,
  aux_sym_branch_opcode_token3 = 34,
  aux_sym_branch_opcode_token4 = 35,
  aux_sym_branch_opcode_token5 = 36,
  aux_sym_branch_opcode_token6 = 37,
  aux_sym_branch_opcode_token7 = 38,
  aux_sym_branch_opcode_token8 = 39,
  aux_sym_branch_opcode_token9 = 40,
  anon_sym_COLON = 41,
  aux_sym_register_token1 = 42,
  aux_sym_register_token2 = 43,
  aux_sym_register_token3 = 44,
  aux_sym_register_token4 = 45,
  sym_directive = 46,
  sym_comment = 47,
  aux_sym_constant_token1 = 48,
  aux_sym_constant_token2 = 49,
  sym_source_file = 50,
  aux_sym__statement = 51,
  sym_function_definition = 52,
  sym_math_statement = 53,
  sym_load_statement = 54,
  sym_load_opcode = 55,
  sym_pool_statement = 56,
  sym_push_statement = 57,
  sym_push_opcode = 58,
  sym_simple_statement = 59,
  sym_opcode = 60,
  sym_return_statement = 61,
  sym_branch_statement = 62,
  sym_branch_opcode = 63,
  sym_label = 64,
  sym_register = 65,
  sym_constant = 66,
  aux_sym_function_definition_repeat1 = 67,
  alias_sym_func_name = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [anon_sym_COLON] = ":",
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
  [sym_label] = "label",
  [sym_register] = "register",
  [sym_constant] = "constant",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [alias_sym_func_name] = "func_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_label] = sym_label,
  [sym_register] = sym_register,
  [sym_constant] = sym_constant,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [alias_sym_func_name] = alias_sym_func_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_label] = {
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
  [2] = {
    [1] = sym_label,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_label, 2,
    sym_label,
    alias_sym_func_name,
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
  [11] = 7,
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
  [32] = 7,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 7,
  [37] = 37,
  [38] = 38,
  [39] = 24,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(44);
      END_STATE();
    case 11:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_load_opcode_token3);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_opcode_token18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token23);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_opcode_token22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_opcode_token21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_opcode_token20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_opcode_token19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [aux_sym__statement] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_label] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_math_statement] = STATE(3),
    [sym_load_statement] = STATE(3),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(37),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(26),
    [sym_return_statement] = STATE(31),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(21),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
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
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(37),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(26),
    [sym_return_statement] = STATE(29),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(21),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
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
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_load_opcode] = STATE(25),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(37),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(26),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(35),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(21),
    [aux_sym_load_opcode_token1] = ACTIONS(24),
    [aux_sym_load_opcode_token2] = ACTIONS(24),
    [aux_sym_load_opcode_token3] = ACTIONS(24),
    [aux_sym_push_opcode_token1] = ACTIONS(27),
    [aux_sym_push_opcode_token2] = ACTIONS(27),
    [aux_sym_opcode_token1] = ACTIONS(30),
    [aux_sym_opcode_token2] = ACTIONS(30),
    [aux_sym_opcode_token3] = ACTIONS(30),
    [aux_sym_opcode_token4] = ACTIONS(30),
    [aux_sym_opcode_token5] = ACTIONS(30),
    [aux_sym_opcode_token6] = ACTIONS(30),
    [aux_sym_opcode_token7] = ACTIONS(30),
    [aux_sym_opcode_token8] = ACTIONS(30),
    [aux_sym_opcode_token9] = ACTIONS(30),
    [aux_sym_opcode_token10] = ACTIONS(30),
    [aux_sym_opcode_token11] = ACTIONS(30),
    [aux_sym_opcode_token12] = ACTIONS(30),
    [aux_sym_opcode_token13] = ACTIONS(30),
    [aux_sym_opcode_token14] = ACTIONS(30),
    [aux_sym_opcode_token15] = ACTIONS(30),
    [aux_sym_opcode_token16] = ACTIONS(30),
    [aux_sym_opcode_token17] = ACTIONS(30),
    [aux_sym_opcode_token18] = ACTIONS(30),
    [aux_sym_opcode_token19] = ACTIONS(30),
    [aux_sym_opcode_token20] = ACTIONS(30),
    [aux_sym_opcode_token21] = ACTIONS(30),
    [aux_sym_opcode_token22] = ACTIONS(30),
    [aux_sym_opcode_token23] = ACTIONS(30),
    [aux_sym_branch_opcode_token1] = ACTIONS(33),
    [aux_sym_branch_opcode_token2] = ACTIONS(33),
    [aux_sym_branch_opcode_token3] = ACTIONS(33),
    [aux_sym_branch_opcode_token4] = ACTIONS(33),
    [aux_sym_branch_opcode_token5] = ACTIONS(33),
    [aux_sym_branch_opcode_token6] = ACTIONS(33),
    [aux_sym_branch_opcode_token7] = ACTIONS(33),
    [aux_sym_branch_opcode_token8] = ACTIONS(33),
    [aux_sym_branch_opcode_token9] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_register] = STATE(14),
    [sym_constant] = STATE(14),
    [sym_identifier] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(38),
    [aux_sym_load_opcode_token1] = ACTIONS(36),
    [aux_sym_load_opcode_token2] = ACTIONS(36),
    [aux_sym_load_opcode_token3] = ACTIONS(36),
    [aux_sym_push_opcode_token1] = ACTIONS(36),
    [aux_sym_push_opcode_token2] = ACTIONS(36),
    [aux_sym_opcode_token1] = ACTIONS(36),
    [aux_sym_opcode_token2] = ACTIONS(36),
    [aux_sym_opcode_token3] = ACTIONS(36),
    [aux_sym_opcode_token4] = ACTIONS(36),
    [aux_sym_opcode_token5] = ACTIONS(36),
    [aux_sym_opcode_token6] = ACTIONS(36),
    [aux_sym_opcode_token7] = ACTIONS(36),
    [aux_sym_opcode_token8] = ACTIONS(36),
    [aux_sym_opcode_token9] = ACTIONS(36),
    [aux_sym_opcode_token10] = ACTIONS(36),
    [aux_sym_opcode_token11] = ACTIONS(36),
    [aux_sym_opcode_token12] = ACTIONS(36),
    [aux_sym_opcode_token13] = ACTIONS(36),
    [aux_sym_opcode_token14] = ACTIONS(36),
    [aux_sym_opcode_token15] = ACTIONS(36),
    [aux_sym_opcode_token16] = ACTIONS(36),
    [aux_sym_opcode_token17] = ACTIONS(36),
    [aux_sym_opcode_token18] = ACTIONS(36),
    [aux_sym_opcode_token19] = ACTIONS(36),
    [aux_sym_opcode_token20] = ACTIONS(36),
    [aux_sym_opcode_token21] = ACTIONS(36),
    [aux_sym_opcode_token22] = ACTIONS(36),
    [aux_sym_opcode_token23] = ACTIONS(36),
    [aux_sym_branch_opcode_token1] = ACTIONS(36),
    [aux_sym_branch_opcode_token2] = ACTIONS(36),
    [aux_sym_branch_opcode_token3] = ACTIONS(36),
    [aux_sym_branch_opcode_token4] = ACTIONS(36),
    [aux_sym_branch_opcode_token5] = ACTIONS(36),
    [aux_sym_branch_opcode_token6] = ACTIONS(36),
    [aux_sym_branch_opcode_token7] = ACTIONS(36),
    [aux_sym_branch_opcode_token8] = ACTIONS(36),
    [aux_sym_branch_opcode_token9] = ACTIONS(36),
    [aux_sym_register_token1] = ACTIONS(40),
    [aux_sym_register_token2] = ACTIONS(40),
    [aux_sym_register_token3] = ACTIONS(40),
    [aux_sym_register_token4] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(42),
    [aux_sym_constant_token2] = ACTIONS(42),
  },
  [6] = {
    [sym_register] = STATE(9),
    [sym_constant] = STATE(13),
    [sym_identifier] = ACTIONS(44),
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
    [aux_sym_register_token1] = ACTIONS(40),
    [aux_sym_register_token2] = ACTIONS(40),
    [aux_sym_register_token3] = ACTIONS(40),
    [aux_sym_register_token4] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(42),
    [aux_sym_constant_token2] = ACTIONS(42),
  },
  [7] = {
    [sym_identifier] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [aux_sym_load_opcode_token3] = ACTIONS(46),
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
    [aux_sym_opcode_token15] = ACTIONS(46),
    [aux_sym_opcode_token16] = ACTIONS(46),
    [aux_sym_opcode_token17] = ACTIONS(46),
    [aux_sym_opcode_token18] = ACTIONS(46),
    [aux_sym_opcode_token19] = ACTIONS(46),
    [aux_sym_opcode_token20] = ACTIONS(46),
    [aux_sym_opcode_token21] = ACTIONS(46),
    [aux_sym_opcode_token22] = ACTIONS(46),
    [aux_sym_opcode_token23] = ACTIONS(46),
    [aux_sym_branch_opcode_token1] = ACTIONS(46),
    [aux_sym_branch_opcode_token2] = ACTIONS(46),
    [aux_sym_branch_opcode_token3] = ACTIONS(46),
    [aux_sym_branch_opcode_token4] = ACTIONS(46),
    [aux_sym_branch_opcode_token5] = ACTIONS(46),
    [aux_sym_branch_opcode_token6] = ACTIONS(46),
    [aux_sym_branch_opcode_token7] = ACTIONS(46),
    [aux_sym_branch_opcode_token8] = ACTIONS(46),
    [aux_sym_branch_opcode_token9] = ACTIONS(46),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(46),
    [aux_sym_constant_token2] = ACTIONS(46),
  },
  [8] = {
    [sym_identifier] = ACTIONS(48),
    [aux_sym_load_opcode_token1] = ACTIONS(48),
    [aux_sym_load_opcode_token2] = ACTIONS(48),
    [aux_sym_load_opcode_token3] = ACTIONS(48),
    [aux_sym_push_opcode_token1] = ACTIONS(48),
    [aux_sym_push_opcode_token2] = ACTIONS(48),
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
    [aux_sym_opcode_token15] = ACTIONS(48),
    [aux_sym_opcode_token16] = ACTIONS(48),
    [aux_sym_opcode_token17] = ACTIONS(48),
    [aux_sym_opcode_token18] = ACTIONS(48),
    [aux_sym_opcode_token19] = ACTIONS(48),
    [aux_sym_opcode_token20] = ACTIONS(48),
    [aux_sym_opcode_token21] = ACTIONS(48),
    [aux_sym_opcode_token22] = ACTIONS(48),
    [aux_sym_opcode_token23] = ACTIONS(48),
    [aux_sym_branch_opcode_token1] = ACTIONS(48),
    [aux_sym_branch_opcode_token2] = ACTIONS(48),
    [aux_sym_branch_opcode_token3] = ACTIONS(48),
    [aux_sym_branch_opcode_token4] = ACTIONS(48),
    [aux_sym_branch_opcode_token5] = ACTIONS(48),
    [aux_sym_branch_opcode_token6] = ACTIONS(48),
    [aux_sym_branch_opcode_token7] = ACTIONS(48),
    [aux_sym_branch_opcode_token8] = ACTIONS(48),
    [aux_sym_branch_opcode_token9] = ACTIONS(48),
    [sym_directive] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(52),
    [aux_sym_load_opcode_token1] = ACTIONS(50),
    [aux_sym_load_opcode_token2] = ACTIONS(50),
    [aux_sym_load_opcode_token3] = ACTIONS(50),
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
    [aux_sym_opcode_token18] = ACTIONS(50),
    [aux_sym_opcode_token19] = ACTIONS(50),
    [aux_sym_opcode_token20] = ACTIONS(50),
    [aux_sym_opcode_token21] = ACTIONS(50),
    [aux_sym_opcode_token22] = ACTIONS(50),
    [aux_sym_opcode_token23] = ACTIONS(50),
    [aux_sym_branch_opcode_token1] = ACTIONS(50),
    [aux_sym_branch_opcode_token2] = ACTIONS(50),
    [aux_sym_branch_opcode_token3] = ACTIONS(50),
    [aux_sym_branch_opcode_token4] = ACTIONS(50),
    [aux_sym_branch_opcode_token5] = ACTIONS(50),
    [aux_sym_branch_opcode_token6] = ACTIONS(50),
    [aux_sym_branch_opcode_token7] = ACTIONS(50),
    [aux_sym_branch_opcode_token8] = ACTIONS(50),
    [aux_sym_branch_opcode_token9] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_identifier] = ACTIONS(54),
    [aux_sym_load_opcode_token1] = ACTIONS(54),
    [aux_sym_load_opcode_token2] = ACTIONS(54),
    [aux_sym_load_opcode_token3] = ACTIONS(54),
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
    [aux_sym_opcode_token18] = ACTIONS(54),
    [aux_sym_opcode_token19] = ACTIONS(54),
    [aux_sym_opcode_token20] = ACTIONS(54),
    [aux_sym_opcode_token21] = ACTIONS(54),
    [aux_sym_opcode_token22] = ACTIONS(54),
    [aux_sym_opcode_token23] = ACTIONS(54),
    [aux_sym_branch_opcode_token1] = ACTIONS(54),
    [aux_sym_branch_opcode_token2] = ACTIONS(54),
    [aux_sym_branch_opcode_token3] = ACTIONS(54),
    [aux_sym_branch_opcode_token4] = ACTIONS(54),
    [aux_sym_branch_opcode_token5] = ACTIONS(54),
    [aux_sym_branch_opcode_token6] = ACTIONS(54),
    [aux_sym_branch_opcode_token7] = ACTIONS(54),
    [aux_sym_branch_opcode_token8] = ACTIONS(54),
    [aux_sym_branch_opcode_token9] = ACTIONS(54),
    [sym_directive] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_identifier] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [aux_sym_load_opcode_token3] = ACTIONS(46),
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
    [aux_sym_opcode_token15] = ACTIONS(46),
    [aux_sym_opcode_token16] = ACTIONS(46),
    [aux_sym_opcode_token17] = ACTIONS(46),
    [aux_sym_opcode_token18] = ACTIONS(46),
    [aux_sym_opcode_token19] = ACTIONS(46),
    [aux_sym_opcode_token20] = ACTIONS(46),
    [aux_sym_opcode_token21] = ACTIONS(46),
    [aux_sym_opcode_token22] = ACTIONS(46),
    [aux_sym_opcode_token23] = ACTIONS(46),
    [aux_sym_branch_opcode_token1] = ACTIONS(46),
    [aux_sym_branch_opcode_token2] = ACTIONS(46),
    [aux_sym_branch_opcode_token3] = ACTIONS(46),
    [aux_sym_branch_opcode_token4] = ACTIONS(46),
    [aux_sym_branch_opcode_token5] = ACTIONS(46),
    [aux_sym_branch_opcode_token6] = ACTIONS(46),
    [aux_sym_branch_opcode_token7] = ACTIONS(46),
    [aux_sym_branch_opcode_token8] = ACTIONS(46),
    [aux_sym_branch_opcode_token9] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_identifier] = ACTIONS(58),
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
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_identifier] = ACTIONS(50),
    [aux_sym_load_opcode_token1] = ACTIONS(50),
    [aux_sym_load_opcode_token2] = ACTIONS(50),
    [aux_sym_load_opcode_token3] = ACTIONS(50),
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
    [aux_sym_opcode_token18] = ACTIONS(50),
    [aux_sym_opcode_token19] = ACTIONS(50),
    [aux_sym_opcode_token20] = ACTIONS(50),
    [aux_sym_opcode_token21] = ACTIONS(50),
    [aux_sym_opcode_token22] = ACTIONS(50),
    [aux_sym_opcode_token23] = ACTIONS(50),
    [aux_sym_branch_opcode_token1] = ACTIONS(50),
    [aux_sym_branch_opcode_token2] = ACTIONS(50),
    [aux_sym_branch_opcode_token3] = ACTIONS(50),
    [aux_sym_branch_opcode_token4] = ACTIONS(50),
    [aux_sym_branch_opcode_token5] = ACTIONS(50),
    [aux_sym_branch_opcode_token6] = ACTIONS(50),
    [aux_sym_branch_opcode_token7] = ACTIONS(50),
    [aux_sym_branch_opcode_token8] = ACTIONS(50),
    [aux_sym_branch_opcode_token9] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(44),
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
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_identifier] = ACTIONS(60),
    [aux_sym_load_opcode_token1] = ACTIONS(60),
    [aux_sym_load_opcode_token2] = ACTIONS(60),
    [aux_sym_load_opcode_token3] = ACTIONS(60),
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
    [aux_sym_opcode_token15] = ACTIONS(60),
    [aux_sym_opcode_token16] = ACTIONS(60),
    [aux_sym_opcode_token17] = ACTIONS(60),
    [aux_sym_opcode_token18] = ACTIONS(60),
    [aux_sym_opcode_token19] = ACTIONS(60),
    [aux_sym_opcode_token20] = ACTIONS(60),
    [aux_sym_opcode_token21] = ACTIONS(60),
    [aux_sym_opcode_token22] = ACTIONS(60),
    [aux_sym_opcode_token23] = ACTIONS(60),
    [aux_sym_branch_opcode_token1] = ACTIONS(60),
    [aux_sym_branch_opcode_token2] = ACTIONS(60),
    [aux_sym_branch_opcode_token3] = ACTIONS(60),
    [aux_sym_branch_opcode_token4] = ACTIONS(60),
    [aux_sym_branch_opcode_token5] = ACTIONS(60),
    [aux_sym_branch_opcode_token6] = ACTIONS(60),
    [aux_sym_branch_opcode_token7] = ACTIONS(60),
    [aux_sym_branch_opcode_token8] = ACTIONS(60),
    [aux_sym_branch_opcode_token9] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_identifier] = ACTIONS(62),
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
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_identifier] = ACTIONS(64),
    [aux_sym_load_opcode_token1] = ACTIONS(64),
    [aux_sym_load_opcode_token2] = ACTIONS(64),
    [aux_sym_load_opcode_token3] = ACTIONS(64),
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
    [aux_sym_opcode_token15] = ACTIONS(64),
    [aux_sym_opcode_token16] = ACTIONS(64),
    [aux_sym_opcode_token17] = ACTIONS(64),
    [aux_sym_opcode_token18] = ACTIONS(64),
    [aux_sym_opcode_token19] = ACTIONS(64),
    [aux_sym_opcode_token20] = ACTIONS(64),
    [aux_sym_opcode_token21] = ACTIONS(64),
    [aux_sym_opcode_token22] = ACTIONS(64),
    [aux_sym_opcode_token23] = ACTIONS(64),
    [aux_sym_branch_opcode_token1] = ACTIONS(64),
    [aux_sym_branch_opcode_token2] = ACTIONS(64),
    [aux_sym_branch_opcode_token3] = ACTIONS(64),
    [aux_sym_branch_opcode_token4] = ACTIONS(64),
    [aux_sym_branch_opcode_token5] = ACTIONS(64),
    [aux_sym_branch_opcode_token6] = ACTIONS(64),
    [aux_sym_branch_opcode_token7] = ACTIONS(64),
    [aux_sym_branch_opcode_token8] = ACTIONS(64),
    [aux_sym_branch_opcode_token9] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_identifier] = ACTIONS(66),
    [aux_sym_load_opcode_token1] = ACTIONS(66),
    [aux_sym_load_opcode_token2] = ACTIONS(66),
    [aux_sym_load_opcode_token3] = ACTIONS(66),
    [aux_sym_push_opcode_token1] = ACTIONS(66),
    [aux_sym_push_opcode_token2] = ACTIONS(66),
    [aux_sym_opcode_token1] = ACTIONS(66),
    [aux_sym_opcode_token2] = ACTIONS(66),
    [aux_sym_opcode_token3] = ACTIONS(66),
    [aux_sym_opcode_token4] = ACTIONS(66),
    [aux_sym_opcode_token5] = ACTIONS(66),
    [aux_sym_opcode_token6] = ACTIONS(66),
    [aux_sym_opcode_token7] = ACTIONS(66),
    [aux_sym_opcode_token8] = ACTIONS(66),
    [aux_sym_opcode_token9] = ACTIONS(66),
    [aux_sym_opcode_token10] = ACTIONS(66),
    [aux_sym_opcode_token11] = ACTIONS(66),
    [aux_sym_opcode_token12] = ACTIONS(66),
    [aux_sym_opcode_token13] = ACTIONS(66),
    [aux_sym_opcode_token14] = ACTIONS(66),
    [aux_sym_opcode_token15] = ACTIONS(66),
    [aux_sym_opcode_token16] = ACTIONS(66),
    [aux_sym_opcode_token17] = ACTIONS(66),
    [aux_sym_opcode_token18] = ACTIONS(66),
    [aux_sym_opcode_token19] = ACTIONS(66),
    [aux_sym_opcode_token20] = ACTIONS(66),
    [aux_sym_opcode_token21] = ACTIONS(66),
    [aux_sym_opcode_token22] = ACTIONS(66),
    [aux_sym_opcode_token23] = ACTIONS(66),
    [aux_sym_branch_opcode_token1] = ACTIONS(66),
    [aux_sym_branch_opcode_token2] = ACTIONS(66),
    [aux_sym_branch_opcode_token3] = ACTIONS(66),
    [aux_sym_branch_opcode_token4] = ACTIONS(66),
    [aux_sym_branch_opcode_token5] = ACTIONS(66),
    [aux_sym_branch_opcode_token6] = ACTIONS(66),
    [aux_sym_branch_opcode_token7] = ACTIONS(66),
    [aux_sym_branch_opcode_token8] = ACTIONS(66),
    [aux_sym_branch_opcode_token9] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = ACTIONS(68),
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
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(42), 1,
      aux_sym_constant_token1,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_constant_token2,
    STATE(12), 2,
      sym_register,
      sym_constant,
    ACTIONS(70), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [20] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(30), 1,
      sym_register,
    ACTIONS(78), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [36] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(22), 2,
      aux_sym__statement,
      sym_function_definition,
  [56] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(22), 2,
      aux_sym__statement,
      sym_function_definition,
  [76] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [87] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(34), 1,
      sym_register,
    ACTIONS(94), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [100] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(5), 1,
      sym_register,
    ACTIONS(96), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [113] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(98), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [123] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(100), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_directive,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_directive,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_directive,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_directive,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [177] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_load_statement_token1,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym_load_statement_token1,
  [205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_load_statement_token1,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_load_statement_token1,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
  [226] = 2,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 20,
  [SMALL_STATE(22)] = 36,
  [SMALL_STATE(23)] = 56,
  [SMALL_STATE(24)] = 76,
  [SMALL_STATE(25)] = 87,
  [SMALL_STATE(26)] = 100,
  [SMALL_STATE(27)] = 113,
  [SMALL_STATE(28)] = 123,
  [SMALL_STATE(29)] = 133,
  [SMALL_STATE(30)] = 144,
  [SMALL_STATE(31)] = 155,
  [SMALL_STATE(32)] = 166,
  [SMALL_STATE(33)] = 177,
  [SMALL_STATE(34)] = 184,
  [SMALL_STATE(35)] = 191,
  [SMALL_STATE(36)] = 198,
  [SMALL_STATE(37)] = 205,
  [SMALL_STATE(38)] = 212,
  [SMALL_STATE(39)] = 219,
  [SMALL_STATE(40)] = 226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(33),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(28),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(38),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(33),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_opcode, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
