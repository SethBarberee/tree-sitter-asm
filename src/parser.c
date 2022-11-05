#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  aux_sym_load_statement_token1 = 3,
  aux_sym_ldm_opcode_token1 = 4,
  aux_sym_ldm_opcode_token2 = 5,
  aux_sym_load_opcode_token1 = 6,
  aux_sym_load_opcode_token2 = 7,
  sym_adr_opcode = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_DASH = 11,
  aux_sym_push_opcode_token1 = 12,
  aux_sym_push_opcode_token2 = 13,
  aux_sym_opcode_token1 = 14,
  aux_sym_opcode_token2 = 15,
  aux_sym_opcode_token3 = 16,
  aux_sym_opcode_token4 = 17,
  aux_sym_opcode_token5 = 18,
  aux_sym_opcode_token6 = 19,
  aux_sym_opcode_token7 = 20,
  aux_sym_opcode_token8 = 21,
  aux_sym_opcode_token9 = 22,
  aux_sym_opcode_token10 = 23,
  aux_sym_opcode_token11 = 24,
  aux_sym_opcode_token12 = 25,
  aux_sym_opcode_token13 = 26,
  aux_sym_opcode_token14 = 27,
  aux_sym_opcode_token15 = 28,
  aux_sym_opcode_token16 = 29,
  aux_sym_opcode_token17 = 30,
  aux_sym_opcode_token18 = 31,
  aux_sym_opcode_token19 = 32,
  aux_sym_opcode_token20 = 33,
  aux_sym_opcode_token21 = 34,
  aux_sym_opcode_token22 = 35,
  aux_sym_opcode_token23 = 36,
  aux_sym_opcode_token24 = 37,
  aux_sym_opcode_token25 = 38,
  aux_sym_branch_opcode_token1 = 39,
  aux_sym_branch_opcode_token2 = 40,
  aux_sym_branch_opcode_token3 = 41,
  aux_sym_branch_opcode_token4 = 42,
  aux_sym_branch_opcode_token5 = 43,
  aux_sym_branch_opcode_token6 = 44,
  aux_sym_branch_opcode_token7 = 45,
  aux_sym_branch_opcode_token8 = 46,
  aux_sym_branch_opcode_token9 = 47,
  anon_sym_COLON = 48,
  aux_sym_register_token1 = 49,
  aux_sym_register_token2 = 50,
  aux_sym_register_token3 = 51,
  aux_sym_register_token4 = 52,
  sym_directive = 53,
  sym_comment = 54,
  aux_sym_constant_token1 = 55,
  aux_sym_constant_token2 = 56,
  sym_source_file = 57,
  aux_sym__statement = 58,
  sym_function_definition = 59,
  sym_math_statement = 60,
  sym_load_statement = 61,
  sym_ldm_opcode = 62,
  sym_load_opcode = 63,
  sym_pool_statement = 64,
  sym_push_statement = 65,
  sym_reg_list = 66,
  sym_push_opcode = 67,
  sym_simple_statement = 68,
  sym_opcode = 69,
  sym_return_statement = 70,
  sym_branch_statement = 71,
  sym_branch_opcode = 72,
  sym_label = 73,
  sym_register = 74,
  sym_constant = 75,
  aux_sym_function_definition_repeat1 = 76,
  aux_sym_push_statement_repeat1 = 77,
  alias_sym_func_name = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [aux_sym_ldm_opcode_token1] = "ldm_opcode_token1",
  [aux_sym_ldm_opcode_token2] = "ldm_opcode_token2",
  [aux_sym_load_opcode_token1] = "load_opcode_token1",
  [aux_sym_load_opcode_token2] = "load_opcode_token2",
  [sym_adr_opcode] = "adr_opcode",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
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
  [aux_sym_opcode_token24] = "opcode_token24",
  [aux_sym_opcode_token25] = "opcode_token25",
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
  [sym_ldm_opcode] = "ldm_opcode",
  [sym_load_opcode] = "load_opcode",
  [sym_pool_statement] = "pool_statement",
  [sym_push_statement] = "push_statement",
  [sym_reg_list] = "reg_list",
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
  [aux_sym_push_statement_repeat1] = "push_statement_repeat1",
  [alias_sym_func_name] = "func_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_load_statement_token1] = aux_sym_load_statement_token1,
  [aux_sym_ldm_opcode_token1] = aux_sym_ldm_opcode_token1,
  [aux_sym_ldm_opcode_token2] = aux_sym_ldm_opcode_token2,
  [aux_sym_load_opcode_token1] = aux_sym_load_opcode_token1,
  [aux_sym_load_opcode_token2] = aux_sym_load_opcode_token2,
  [sym_adr_opcode] = sym_adr_opcode,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [aux_sym_opcode_token24] = aux_sym_opcode_token24,
  [aux_sym_opcode_token25] = aux_sym_opcode_token25,
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
  [sym_ldm_opcode] = sym_ldm_opcode,
  [sym_load_opcode] = sym_load_opcode,
  [sym_pool_statement] = sym_pool_statement,
  [sym_push_statement] = sym_push_statement,
  [sym_reg_list] = sym_reg_list,
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
  [aux_sym_push_statement_repeat1] = aux_sym_push_statement_repeat1,
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
  [aux_sym_ldm_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ldm_opcode_token2] = {
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
  [sym_adr_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
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
  [aux_sym_opcode_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token25] = {
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
  [sym_ldm_opcode] = {
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
  [sym_reg_list] = {
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
  [aux_sym_push_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_func_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_Rd = 1,
  field_Rm = 2,
  field_Rn = 3,
  field_Rt = 4,
  field_operand2 = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Rd] = "Rd",
  [field_Rm] = "Rm",
  [field_Rn] = "Rn",
  [field_Rt] = "Rt",
  [field_operand2] = "operand2",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_Rd, 1},
  [1] =
    {field_Rm, 1},
  [2] =
    {field_Rt, 1},
  [3] =
    {field_Rd, 1},
    {field_operand2, 2},
  [5] =
    {field_Rd, 1},
    {field_operand2, 3},
  [7] =
    {field_Rd, 1},
    {field_Rn, 3},
    {field_operand2, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_func_name,
  },
  [3] = {
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
  [8] = 5,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 5,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 5,
  [49] = 49,
  [50] = 50,
  [51] = 28,
  [52] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(43);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '`')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'q') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_adr_opcode);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_opcode_token19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_opcode_token20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_opcode_token25);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_opcode_token18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_opcode_token24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_opcode_token23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_opcode_token22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_opcode_token21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
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
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_ldm_opcode_token1] = ACTIONS(1),
    [aux_sym_ldm_opcode_token2] = ACTIONS(1),
    [aux_sym_load_opcode_token1] = ACTIONS(1),
    [aux_sym_load_opcode_token2] = ACTIONS(1),
    [sym_adr_opcode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [aux_sym_opcode_token24] = ACTIONS(1),
    [aux_sym_opcode_token25] = ACTIONS(1),
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
    [sym_source_file] = STATE(52),
    [aux_sym__statement] = STATE(25),
    [sym_function_definition] = STATE(25),
    [sym_label] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_math_statement] = STATE(3),
    [sym_load_statement] = STATE(3),
    [sym_ldm_opcode] = STATE(30),
    [sym_load_opcode] = STATE(30),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(49),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(29),
    [sym_return_statement] = STATE(40),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(24),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_ldm_opcode_token1] = ACTIONS(13),
    [aux_sym_ldm_opcode_token2] = ACTIONS(13),
    [aux_sym_load_opcode_token1] = ACTIONS(15),
    [aux_sym_load_opcode_token2] = ACTIONS(15),
    [sym_adr_opcode] = ACTIONS(17),
    [aux_sym_push_opcode_token1] = ACTIONS(19),
    [aux_sym_push_opcode_token2] = ACTIONS(19),
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
    [aux_sym_opcode_token16] = ACTIONS(21),
    [aux_sym_opcode_token17] = ACTIONS(21),
    [aux_sym_opcode_token18] = ACTIONS(21),
    [aux_sym_opcode_token19] = ACTIONS(21),
    [aux_sym_opcode_token20] = ACTIONS(21),
    [aux_sym_opcode_token21] = ACTIONS(21),
    [aux_sym_opcode_token22] = ACTIONS(21),
    [aux_sym_opcode_token23] = ACTIONS(21),
    [aux_sym_opcode_token24] = ACTIONS(21),
    [aux_sym_opcode_token25] = ACTIONS(21),
    [aux_sym_branch_opcode_token1] = ACTIONS(23),
    [aux_sym_branch_opcode_token2] = ACTIONS(23),
    [aux_sym_branch_opcode_token3] = ACTIONS(23),
    [aux_sym_branch_opcode_token4] = ACTIONS(23),
    [aux_sym_branch_opcode_token5] = ACTIONS(23),
    [aux_sym_branch_opcode_token6] = ACTIONS(23),
    [aux_sym_branch_opcode_token7] = ACTIONS(23),
    [aux_sym_branch_opcode_token8] = ACTIONS(23),
    [aux_sym_branch_opcode_token9] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(30),
    [sym_load_opcode] = STATE(30),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(49),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(29),
    [sym_return_statement] = STATE(35),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(24),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_ldm_opcode_token1] = ACTIONS(13),
    [aux_sym_ldm_opcode_token2] = ACTIONS(13),
    [aux_sym_load_opcode_token1] = ACTIONS(15),
    [aux_sym_load_opcode_token2] = ACTIONS(15),
    [sym_adr_opcode] = ACTIONS(17),
    [aux_sym_push_opcode_token1] = ACTIONS(19),
    [aux_sym_push_opcode_token2] = ACTIONS(19),
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
    [aux_sym_opcode_token16] = ACTIONS(21),
    [aux_sym_opcode_token17] = ACTIONS(21),
    [aux_sym_opcode_token18] = ACTIONS(21),
    [aux_sym_opcode_token19] = ACTIONS(21),
    [aux_sym_opcode_token20] = ACTIONS(21),
    [aux_sym_opcode_token21] = ACTIONS(21),
    [aux_sym_opcode_token22] = ACTIONS(21),
    [aux_sym_opcode_token23] = ACTIONS(21),
    [aux_sym_opcode_token24] = ACTIONS(21),
    [aux_sym_opcode_token25] = ACTIONS(21),
    [aux_sym_branch_opcode_token1] = ACTIONS(23),
    [aux_sym_branch_opcode_token2] = ACTIONS(23),
    [aux_sym_branch_opcode_token3] = ACTIONS(23),
    [aux_sym_branch_opcode_token4] = ACTIONS(23),
    [aux_sym_branch_opcode_token5] = ACTIONS(23),
    [aux_sym_branch_opcode_token6] = ACTIONS(23),
    [aux_sym_branch_opcode_token7] = ACTIONS(23),
    [aux_sym_branch_opcode_token8] = ACTIONS(23),
    [aux_sym_branch_opcode_token9] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(30),
    [sym_load_opcode] = STATE(30),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(49),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(29),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(45),
    [sym_label] = STATE(10),
    [aux_sym_function_definition_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(25),
    [aux_sym_ldm_opcode_token1] = ACTIONS(28),
    [aux_sym_ldm_opcode_token2] = ACTIONS(28),
    [aux_sym_load_opcode_token1] = ACTIONS(31),
    [aux_sym_load_opcode_token2] = ACTIONS(31),
    [sym_adr_opcode] = ACTIONS(34),
    [aux_sym_push_opcode_token1] = ACTIONS(37),
    [aux_sym_push_opcode_token2] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(40),
    [aux_sym_opcode_token2] = ACTIONS(40),
    [aux_sym_opcode_token3] = ACTIONS(40),
    [aux_sym_opcode_token4] = ACTIONS(40),
    [aux_sym_opcode_token5] = ACTIONS(40),
    [aux_sym_opcode_token6] = ACTIONS(40),
    [aux_sym_opcode_token7] = ACTIONS(40),
    [aux_sym_opcode_token8] = ACTIONS(40),
    [aux_sym_opcode_token9] = ACTIONS(40),
    [aux_sym_opcode_token10] = ACTIONS(40),
    [aux_sym_opcode_token11] = ACTIONS(40),
    [aux_sym_opcode_token12] = ACTIONS(40),
    [aux_sym_opcode_token13] = ACTIONS(40),
    [aux_sym_opcode_token14] = ACTIONS(40),
    [aux_sym_opcode_token15] = ACTIONS(40),
    [aux_sym_opcode_token16] = ACTIONS(40),
    [aux_sym_opcode_token17] = ACTIONS(40),
    [aux_sym_opcode_token18] = ACTIONS(40),
    [aux_sym_opcode_token19] = ACTIONS(40),
    [aux_sym_opcode_token20] = ACTIONS(40),
    [aux_sym_opcode_token21] = ACTIONS(40),
    [aux_sym_opcode_token22] = ACTIONS(40),
    [aux_sym_opcode_token23] = ACTIONS(40),
    [aux_sym_opcode_token24] = ACTIONS(40),
    [aux_sym_opcode_token25] = ACTIONS(40),
    [aux_sym_branch_opcode_token1] = ACTIONS(43),
    [aux_sym_branch_opcode_token2] = ACTIONS(43),
    [aux_sym_branch_opcode_token3] = ACTIONS(43),
    [aux_sym_branch_opcode_token4] = ACTIONS(43),
    [aux_sym_branch_opcode_token5] = ACTIONS(43),
    [aux_sym_branch_opcode_token6] = ACTIONS(43),
    [aux_sym_branch_opcode_token7] = ACTIONS(43),
    [aux_sym_branch_opcode_token8] = ACTIONS(43),
    [aux_sym_branch_opcode_token9] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_identifier] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(48),
    [aux_sym_ldm_opcode_token1] = ACTIONS(46),
    [aux_sym_ldm_opcode_token2] = ACTIONS(46),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [sym_adr_opcode] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
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
    [aux_sym_opcode_token24] = ACTIONS(46),
    [aux_sym_opcode_token25] = ACTIONS(46),
    [aux_sym_branch_opcode_token1] = ACTIONS(48),
    [aux_sym_branch_opcode_token2] = ACTIONS(48),
    [aux_sym_branch_opcode_token3] = ACTIONS(48),
    [aux_sym_branch_opcode_token4] = ACTIONS(48),
    [aux_sym_branch_opcode_token5] = ACTIONS(48),
    [aux_sym_branch_opcode_token6] = ACTIONS(48),
    [aux_sym_branch_opcode_token7] = ACTIONS(48),
    [aux_sym_branch_opcode_token8] = ACTIONS(48),
    [aux_sym_branch_opcode_token9] = ACTIONS(48),
    [aux_sym_register_token1] = ACTIONS(46),
    [aux_sym_register_token2] = ACTIONS(46),
    [aux_sym_register_token3] = ACTIONS(46),
    [aux_sym_register_token4] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(46),
    [aux_sym_constant_token2] = ACTIONS(46),
  },
  [6] = {
    [sym_register] = STATE(18),
    [sym_constant] = STATE(18),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(52),
    [aux_sym_ldm_opcode_token1] = ACTIONS(50),
    [aux_sym_ldm_opcode_token2] = ACTIONS(50),
    [aux_sym_load_opcode_token1] = ACTIONS(50),
    [aux_sym_load_opcode_token2] = ACTIONS(50),
    [sym_adr_opcode] = ACTIONS(50),
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
    [aux_sym_opcode_token24] = ACTIONS(50),
    [aux_sym_opcode_token25] = ACTIONS(50),
    [aux_sym_branch_opcode_token1] = ACTIONS(54),
    [aux_sym_branch_opcode_token2] = ACTIONS(54),
    [aux_sym_branch_opcode_token3] = ACTIONS(54),
    [aux_sym_branch_opcode_token4] = ACTIONS(54),
    [aux_sym_branch_opcode_token5] = ACTIONS(54),
    [aux_sym_branch_opcode_token6] = ACTIONS(54),
    [aux_sym_branch_opcode_token7] = ACTIONS(54),
    [aux_sym_branch_opcode_token8] = ACTIONS(54),
    [aux_sym_branch_opcode_token9] = ACTIONS(54),
    [aux_sym_register_token1] = ACTIONS(56),
    [aux_sym_register_token2] = ACTIONS(56),
    [aux_sym_register_token3] = ACTIONS(56),
    [aux_sym_register_token4] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(58),
    [aux_sym_constant_token2] = ACTIONS(58),
  },
  [7] = {
    [sym_register] = STATE(11),
    [sym_constant] = STATE(14),
    [sym_identifier] = ACTIONS(60),
    [aux_sym_ldm_opcode_token1] = ACTIONS(60),
    [aux_sym_ldm_opcode_token2] = ACTIONS(60),
    [aux_sym_load_opcode_token1] = ACTIONS(60),
    [aux_sym_load_opcode_token2] = ACTIONS(60),
    [sym_adr_opcode] = ACTIONS(60),
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
    [aux_sym_opcode_token24] = ACTIONS(60),
    [aux_sym_opcode_token25] = ACTIONS(60),
    [aux_sym_branch_opcode_token1] = ACTIONS(62),
    [aux_sym_branch_opcode_token2] = ACTIONS(62),
    [aux_sym_branch_opcode_token3] = ACTIONS(62),
    [aux_sym_branch_opcode_token4] = ACTIONS(62),
    [aux_sym_branch_opcode_token5] = ACTIONS(62),
    [aux_sym_branch_opcode_token6] = ACTIONS(62),
    [aux_sym_branch_opcode_token7] = ACTIONS(62),
    [aux_sym_branch_opcode_token8] = ACTIONS(62),
    [aux_sym_branch_opcode_token9] = ACTIONS(62),
    [aux_sym_register_token1] = ACTIONS(56),
    [aux_sym_register_token2] = ACTIONS(56),
    [aux_sym_register_token3] = ACTIONS(56),
    [aux_sym_register_token4] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(58),
    [aux_sym_constant_token2] = ACTIONS(58),
  },
  [8] = {
    [sym_identifier] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(48),
    [aux_sym_ldm_opcode_token1] = ACTIONS(46),
    [aux_sym_ldm_opcode_token2] = ACTIONS(46),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [sym_adr_opcode] = ACTIONS(46),
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
    [aux_sym_opcode_token24] = ACTIONS(46),
    [aux_sym_opcode_token25] = ACTIONS(46),
    [aux_sym_branch_opcode_token1] = ACTIONS(48),
    [aux_sym_branch_opcode_token2] = ACTIONS(48),
    [aux_sym_branch_opcode_token3] = ACTIONS(48),
    [aux_sym_branch_opcode_token4] = ACTIONS(48),
    [aux_sym_branch_opcode_token5] = ACTIONS(48),
    [aux_sym_branch_opcode_token6] = ACTIONS(48),
    [aux_sym_branch_opcode_token7] = ACTIONS(48),
    [aux_sym_branch_opcode_token8] = ACTIONS(48),
    [aux_sym_branch_opcode_token9] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_identifier] = ACTIONS(64),
    [aux_sym_ldm_opcode_token1] = ACTIONS(64),
    [aux_sym_ldm_opcode_token2] = ACTIONS(64),
    [aux_sym_load_opcode_token1] = ACTIONS(64),
    [aux_sym_load_opcode_token2] = ACTIONS(64),
    [sym_adr_opcode] = ACTIONS(64),
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
    [aux_sym_opcode_token24] = ACTIONS(64),
    [aux_sym_opcode_token25] = ACTIONS(64),
    [aux_sym_branch_opcode_token1] = ACTIONS(66),
    [aux_sym_branch_opcode_token2] = ACTIONS(66),
    [aux_sym_branch_opcode_token3] = ACTIONS(66),
    [aux_sym_branch_opcode_token4] = ACTIONS(66),
    [aux_sym_branch_opcode_token5] = ACTIONS(66),
    [aux_sym_branch_opcode_token6] = ACTIONS(66),
    [aux_sym_branch_opcode_token7] = ACTIONS(66),
    [aux_sym_branch_opcode_token8] = ACTIONS(66),
    [aux_sym_branch_opcode_token9] = ACTIONS(66),
    [sym_directive] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_identifier] = ACTIONS(68),
    [aux_sym_ldm_opcode_token1] = ACTIONS(68),
    [aux_sym_ldm_opcode_token2] = ACTIONS(68),
    [aux_sym_load_opcode_token1] = ACTIONS(68),
    [aux_sym_load_opcode_token2] = ACTIONS(68),
    [sym_adr_opcode] = ACTIONS(68),
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
    [aux_sym_opcode_token24] = ACTIONS(68),
    [aux_sym_opcode_token25] = ACTIONS(68),
    [aux_sym_branch_opcode_token1] = ACTIONS(70),
    [aux_sym_branch_opcode_token2] = ACTIONS(70),
    [aux_sym_branch_opcode_token3] = ACTIONS(70),
    [aux_sym_branch_opcode_token4] = ACTIONS(70),
    [aux_sym_branch_opcode_token5] = ACTIONS(70),
    [aux_sym_branch_opcode_token6] = ACTIONS(70),
    [aux_sym_branch_opcode_token7] = ACTIONS(70),
    [aux_sym_branch_opcode_token8] = ACTIONS(70),
    [aux_sym_branch_opcode_token9] = ACTIONS(70),
    [sym_directive] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_identifier] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(76),
    [aux_sym_ldm_opcode_token1] = ACTIONS(74),
    [aux_sym_ldm_opcode_token2] = ACTIONS(74),
    [aux_sym_load_opcode_token1] = ACTIONS(74),
    [aux_sym_load_opcode_token2] = ACTIONS(74),
    [sym_adr_opcode] = ACTIONS(74),
    [aux_sym_push_opcode_token1] = ACTIONS(74),
    [aux_sym_push_opcode_token2] = ACTIONS(74),
    [aux_sym_opcode_token1] = ACTIONS(74),
    [aux_sym_opcode_token2] = ACTIONS(74),
    [aux_sym_opcode_token3] = ACTIONS(74),
    [aux_sym_opcode_token4] = ACTIONS(74),
    [aux_sym_opcode_token5] = ACTIONS(74),
    [aux_sym_opcode_token6] = ACTIONS(74),
    [aux_sym_opcode_token7] = ACTIONS(74),
    [aux_sym_opcode_token8] = ACTIONS(74),
    [aux_sym_opcode_token9] = ACTIONS(74),
    [aux_sym_opcode_token10] = ACTIONS(74),
    [aux_sym_opcode_token11] = ACTIONS(74),
    [aux_sym_opcode_token12] = ACTIONS(74),
    [aux_sym_opcode_token13] = ACTIONS(74),
    [aux_sym_opcode_token14] = ACTIONS(74),
    [aux_sym_opcode_token15] = ACTIONS(74),
    [aux_sym_opcode_token16] = ACTIONS(74),
    [aux_sym_opcode_token17] = ACTIONS(74),
    [aux_sym_opcode_token18] = ACTIONS(74),
    [aux_sym_opcode_token19] = ACTIONS(74),
    [aux_sym_opcode_token20] = ACTIONS(74),
    [aux_sym_opcode_token21] = ACTIONS(74),
    [aux_sym_opcode_token22] = ACTIONS(74),
    [aux_sym_opcode_token23] = ACTIONS(74),
    [aux_sym_opcode_token24] = ACTIONS(74),
    [aux_sym_opcode_token25] = ACTIONS(74),
    [aux_sym_branch_opcode_token1] = ACTIONS(78),
    [aux_sym_branch_opcode_token2] = ACTIONS(78),
    [aux_sym_branch_opcode_token3] = ACTIONS(78),
    [aux_sym_branch_opcode_token4] = ACTIONS(78),
    [aux_sym_branch_opcode_token5] = ACTIONS(78),
    [aux_sym_branch_opcode_token6] = ACTIONS(78),
    [aux_sym_branch_opcode_token7] = ACTIONS(78),
    [aux_sym_branch_opcode_token8] = ACTIONS(78),
    [aux_sym_branch_opcode_token9] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_identifier] = ACTIONS(80),
    [aux_sym_ldm_opcode_token1] = ACTIONS(80),
    [aux_sym_ldm_opcode_token2] = ACTIONS(80),
    [aux_sym_load_opcode_token1] = ACTIONS(80),
    [aux_sym_load_opcode_token2] = ACTIONS(80),
    [sym_adr_opcode] = ACTIONS(80),
    [aux_sym_push_opcode_token1] = ACTIONS(80),
    [aux_sym_push_opcode_token2] = ACTIONS(80),
    [aux_sym_opcode_token1] = ACTIONS(80),
    [aux_sym_opcode_token2] = ACTIONS(80),
    [aux_sym_opcode_token3] = ACTIONS(80),
    [aux_sym_opcode_token4] = ACTIONS(80),
    [aux_sym_opcode_token5] = ACTIONS(80),
    [aux_sym_opcode_token6] = ACTIONS(80),
    [aux_sym_opcode_token7] = ACTIONS(80),
    [aux_sym_opcode_token8] = ACTIONS(80),
    [aux_sym_opcode_token9] = ACTIONS(80),
    [aux_sym_opcode_token10] = ACTIONS(80),
    [aux_sym_opcode_token11] = ACTIONS(80),
    [aux_sym_opcode_token12] = ACTIONS(80),
    [aux_sym_opcode_token13] = ACTIONS(80),
    [aux_sym_opcode_token14] = ACTIONS(80),
    [aux_sym_opcode_token15] = ACTIONS(80),
    [aux_sym_opcode_token16] = ACTIONS(80),
    [aux_sym_opcode_token17] = ACTIONS(80),
    [aux_sym_opcode_token18] = ACTIONS(80),
    [aux_sym_opcode_token19] = ACTIONS(80),
    [aux_sym_opcode_token20] = ACTIONS(80),
    [aux_sym_opcode_token21] = ACTIONS(80),
    [aux_sym_opcode_token22] = ACTIONS(80),
    [aux_sym_opcode_token23] = ACTIONS(80),
    [aux_sym_opcode_token24] = ACTIONS(80),
    [aux_sym_opcode_token25] = ACTIONS(80),
    [aux_sym_branch_opcode_token1] = ACTIONS(82),
    [aux_sym_branch_opcode_token2] = ACTIONS(82),
    [aux_sym_branch_opcode_token3] = ACTIONS(82),
    [aux_sym_branch_opcode_token4] = ACTIONS(82),
    [aux_sym_branch_opcode_token5] = ACTIONS(82),
    [aux_sym_branch_opcode_token6] = ACTIONS(82),
    [aux_sym_branch_opcode_token7] = ACTIONS(82),
    [aux_sym_branch_opcode_token8] = ACTIONS(82),
    [aux_sym_branch_opcode_token9] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_identifier] = ACTIONS(84),
    [aux_sym_ldm_opcode_token1] = ACTIONS(84),
    [aux_sym_ldm_opcode_token2] = ACTIONS(84),
    [aux_sym_load_opcode_token1] = ACTIONS(84),
    [aux_sym_load_opcode_token2] = ACTIONS(84),
    [sym_adr_opcode] = ACTIONS(84),
    [aux_sym_push_opcode_token1] = ACTIONS(84),
    [aux_sym_push_opcode_token2] = ACTIONS(84),
    [aux_sym_opcode_token1] = ACTIONS(84),
    [aux_sym_opcode_token2] = ACTIONS(84),
    [aux_sym_opcode_token3] = ACTIONS(84),
    [aux_sym_opcode_token4] = ACTIONS(84),
    [aux_sym_opcode_token5] = ACTIONS(84),
    [aux_sym_opcode_token6] = ACTIONS(84),
    [aux_sym_opcode_token7] = ACTIONS(84),
    [aux_sym_opcode_token8] = ACTIONS(84),
    [aux_sym_opcode_token9] = ACTIONS(84),
    [aux_sym_opcode_token10] = ACTIONS(84),
    [aux_sym_opcode_token11] = ACTIONS(84),
    [aux_sym_opcode_token12] = ACTIONS(84),
    [aux_sym_opcode_token13] = ACTIONS(84),
    [aux_sym_opcode_token14] = ACTIONS(84),
    [aux_sym_opcode_token15] = ACTIONS(84),
    [aux_sym_opcode_token16] = ACTIONS(84),
    [aux_sym_opcode_token17] = ACTIONS(84),
    [aux_sym_opcode_token18] = ACTIONS(84),
    [aux_sym_opcode_token19] = ACTIONS(84),
    [aux_sym_opcode_token20] = ACTIONS(84),
    [aux_sym_opcode_token21] = ACTIONS(84),
    [aux_sym_opcode_token22] = ACTIONS(84),
    [aux_sym_opcode_token23] = ACTIONS(84),
    [aux_sym_opcode_token24] = ACTIONS(84),
    [aux_sym_opcode_token25] = ACTIONS(84),
    [aux_sym_branch_opcode_token1] = ACTIONS(86),
    [aux_sym_branch_opcode_token2] = ACTIONS(86),
    [aux_sym_branch_opcode_token3] = ACTIONS(86),
    [aux_sym_branch_opcode_token4] = ACTIONS(86),
    [aux_sym_branch_opcode_token5] = ACTIONS(86),
    [aux_sym_branch_opcode_token6] = ACTIONS(86),
    [aux_sym_branch_opcode_token7] = ACTIONS(86),
    [aux_sym_branch_opcode_token8] = ACTIONS(86),
    [aux_sym_branch_opcode_token9] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(74),
    [aux_sym_ldm_opcode_token1] = ACTIONS(74),
    [aux_sym_ldm_opcode_token2] = ACTIONS(74),
    [aux_sym_load_opcode_token1] = ACTIONS(74),
    [aux_sym_load_opcode_token2] = ACTIONS(74),
    [sym_adr_opcode] = ACTIONS(74),
    [aux_sym_push_opcode_token1] = ACTIONS(74),
    [aux_sym_push_opcode_token2] = ACTIONS(74),
    [aux_sym_opcode_token1] = ACTIONS(74),
    [aux_sym_opcode_token2] = ACTIONS(74),
    [aux_sym_opcode_token3] = ACTIONS(74),
    [aux_sym_opcode_token4] = ACTIONS(74),
    [aux_sym_opcode_token5] = ACTIONS(74),
    [aux_sym_opcode_token6] = ACTIONS(74),
    [aux_sym_opcode_token7] = ACTIONS(74),
    [aux_sym_opcode_token8] = ACTIONS(74),
    [aux_sym_opcode_token9] = ACTIONS(74),
    [aux_sym_opcode_token10] = ACTIONS(74),
    [aux_sym_opcode_token11] = ACTIONS(74),
    [aux_sym_opcode_token12] = ACTIONS(74),
    [aux_sym_opcode_token13] = ACTIONS(74),
    [aux_sym_opcode_token14] = ACTIONS(74),
    [aux_sym_opcode_token15] = ACTIONS(74),
    [aux_sym_opcode_token16] = ACTIONS(74),
    [aux_sym_opcode_token17] = ACTIONS(74),
    [aux_sym_opcode_token18] = ACTIONS(74),
    [aux_sym_opcode_token19] = ACTIONS(74),
    [aux_sym_opcode_token20] = ACTIONS(74),
    [aux_sym_opcode_token21] = ACTIONS(74),
    [aux_sym_opcode_token22] = ACTIONS(74),
    [aux_sym_opcode_token23] = ACTIONS(74),
    [aux_sym_opcode_token24] = ACTIONS(74),
    [aux_sym_opcode_token25] = ACTIONS(74),
    [aux_sym_branch_opcode_token1] = ACTIONS(78),
    [aux_sym_branch_opcode_token2] = ACTIONS(78),
    [aux_sym_branch_opcode_token3] = ACTIONS(78),
    [aux_sym_branch_opcode_token4] = ACTIONS(78),
    [aux_sym_branch_opcode_token5] = ACTIONS(78),
    [aux_sym_branch_opcode_token6] = ACTIONS(78),
    [aux_sym_branch_opcode_token7] = ACTIONS(78),
    [aux_sym_branch_opcode_token8] = ACTIONS(78),
    [aux_sym_branch_opcode_token9] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_identifier] = ACTIONS(88),
    [aux_sym_ldm_opcode_token1] = ACTIONS(88),
    [aux_sym_ldm_opcode_token2] = ACTIONS(88),
    [aux_sym_load_opcode_token1] = ACTIONS(88),
    [aux_sym_load_opcode_token2] = ACTIONS(88),
    [sym_adr_opcode] = ACTIONS(88),
    [aux_sym_push_opcode_token1] = ACTIONS(88),
    [aux_sym_push_opcode_token2] = ACTIONS(88),
    [aux_sym_opcode_token1] = ACTIONS(88),
    [aux_sym_opcode_token2] = ACTIONS(88),
    [aux_sym_opcode_token3] = ACTIONS(88),
    [aux_sym_opcode_token4] = ACTIONS(88),
    [aux_sym_opcode_token5] = ACTIONS(88),
    [aux_sym_opcode_token6] = ACTIONS(88),
    [aux_sym_opcode_token7] = ACTIONS(88),
    [aux_sym_opcode_token8] = ACTIONS(88),
    [aux_sym_opcode_token9] = ACTIONS(88),
    [aux_sym_opcode_token10] = ACTIONS(88),
    [aux_sym_opcode_token11] = ACTIONS(88),
    [aux_sym_opcode_token12] = ACTIONS(88),
    [aux_sym_opcode_token13] = ACTIONS(88),
    [aux_sym_opcode_token14] = ACTIONS(88),
    [aux_sym_opcode_token15] = ACTIONS(88),
    [aux_sym_opcode_token16] = ACTIONS(88),
    [aux_sym_opcode_token17] = ACTIONS(88),
    [aux_sym_opcode_token18] = ACTIONS(88),
    [aux_sym_opcode_token19] = ACTIONS(88),
    [aux_sym_opcode_token20] = ACTIONS(88),
    [aux_sym_opcode_token21] = ACTIONS(88),
    [aux_sym_opcode_token22] = ACTIONS(88),
    [aux_sym_opcode_token23] = ACTIONS(88),
    [aux_sym_opcode_token24] = ACTIONS(88),
    [aux_sym_opcode_token25] = ACTIONS(88),
    [aux_sym_branch_opcode_token1] = ACTIONS(90),
    [aux_sym_branch_opcode_token2] = ACTIONS(90),
    [aux_sym_branch_opcode_token3] = ACTIONS(90),
    [aux_sym_branch_opcode_token4] = ACTIONS(90),
    [aux_sym_branch_opcode_token5] = ACTIONS(90),
    [aux_sym_branch_opcode_token6] = ACTIONS(90),
    [aux_sym_branch_opcode_token7] = ACTIONS(90),
    [aux_sym_branch_opcode_token8] = ACTIONS(90),
    [aux_sym_branch_opcode_token9] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_identifier] = ACTIONS(92),
    [aux_sym_ldm_opcode_token1] = ACTIONS(92),
    [aux_sym_ldm_opcode_token2] = ACTIONS(92),
    [aux_sym_load_opcode_token1] = ACTIONS(92),
    [aux_sym_load_opcode_token2] = ACTIONS(92),
    [sym_adr_opcode] = ACTIONS(92),
    [aux_sym_push_opcode_token1] = ACTIONS(92),
    [aux_sym_push_opcode_token2] = ACTIONS(92),
    [aux_sym_opcode_token1] = ACTIONS(92),
    [aux_sym_opcode_token2] = ACTIONS(92),
    [aux_sym_opcode_token3] = ACTIONS(92),
    [aux_sym_opcode_token4] = ACTIONS(92),
    [aux_sym_opcode_token5] = ACTIONS(92),
    [aux_sym_opcode_token6] = ACTIONS(92),
    [aux_sym_opcode_token7] = ACTIONS(92),
    [aux_sym_opcode_token8] = ACTIONS(92),
    [aux_sym_opcode_token9] = ACTIONS(92),
    [aux_sym_opcode_token10] = ACTIONS(92),
    [aux_sym_opcode_token11] = ACTIONS(92),
    [aux_sym_opcode_token12] = ACTIONS(92),
    [aux_sym_opcode_token13] = ACTIONS(92),
    [aux_sym_opcode_token14] = ACTIONS(92),
    [aux_sym_opcode_token15] = ACTIONS(92),
    [aux_sym_opcode_token16] = ACTIONS(92),
    [aux_sym_opcode_token17] = ACTIONS(92),
    [aux_sym_opcode_token18] = ACTIONS(92),
    [aux_sym_opcode_token19] = ACTIONS(92),
    [aux_sym_opcode_token20] = ACTIONS(92),
    [aux_sym_opcode_token21] = ACTIONS(92),
    [aux_sym_opcode_token22] = ACTIONS(92),
    [aux_sym_opcode_token23] = ACTIONS(92),
    [aux_sym_opcode_token24] = ACTIONS(92),
    [aux_sym_opcode_token25] = ACTIONS(92),
    [aux_sym_branch_opcode_token1] = ACTIONS(94),
    [aux_sym_branch_opcode_token2] = ACTIONS(94),
    [aux_sym_branch_opcode_token3] = ACTIONS(94),
    [aux_sym_branch_opcode_token4] = ACTIONS(94),
    [aux_sym_branch_opcode_token5] = ACTIONS(94),
    [aux_sym_branch_opcode_token6] = ACTIONS(94),
    [aux_sym_branch_opcode_token7] = ACTIONS(94),
    [aux_sym_branch_opcode_token8] = ACTIONS(94),
    [aux_sym_branch_opcode_token9] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_identifier] = ACTIONS(96),
    [aux_sym_ldm_opcode_token1] = ACTIONS(96),
    [aux_sym_ldm_opcode_token2] = ACTIONS(96),
    [aux_sym_load_opcode_token1] = ACTIONS(96),
    [aux_sym_load_opcode_token2] = ACTIONS(96),
    [sym_adr_opcode] = ACTIONS(96),
    [aux_sym_push_opcode_token1] = ACTIONS(96),
    [aux_sym_push_opcode_token2] = ACTIONS(96),
    [aux_sym_opcode_token1] = ACTIONS(96),
    [aux_sym_opcode_token2] = ACTIONS(96),
    [aux_sym_opcode_token3] = ACTIONS(96),
    [aux_sym_opcode_token4] = ACTIONS(96),
    [aux_sym_opcode_token5] = ACTIONS(96),
    [aux_sym_opcode_token6] = ACTIONS(96),
    [aux_sym_opcode_token7] = ACTIONS(96),
    [aux_sym_opcode_token8] = ACTIONS(96),
    [aux_sym_opcode_token9] = ACTIONS(96),
    [aux_sym_opcode_token10] = ACTIONS(96),
    [aux_sym_opcode_token11] = ACTIONS(96),
    [aux_sym_opcode_token12] = ACTIONS(96),
    [aux_sym_opcode_token13] = ACTIONS(96),
    [aux_sym_opcode_token14] = ACTIONS(96),
    [aux_sym_opcode_token15] = ACTIONS(96),
    [aux_sym_opcode_token16] = ACTIONS(96),
    [aux_sym_opcode_token17] = ACTIONS(96),
    [aux_sym_opcode_token18] = ACTIONS(96),
    [aux_sym_opcode_token19] = ACTIONS(96),
    [aux_sym_opcode_token20] = ACTIONS(96),
    [aux_sym_opcode_token21] = ACTIONS(96),
    [aux_sym_opcode_token22] = ACTIONS(96),
    [aux_sym_opcode_token23] = ACTIONS(96),
    [aux_sym_opcode_token24] = ACTIONS(96),
    [aux_sym_opcode_token25] = ACTIONS(96),
    [aux_sym_branch_opcode_token1] = ACTIONS(98),
    [aux_sym_branch_opcode_token2] = ACTIONS(98),
    [aux_sym_branch_opcode_token3] = ACTIONS(98),
    [aux_sym_branch_opcode_token4] = ACTIONS(98),
    [aux_sym_branch_opcode_token5] = ACTIONS(98),
    [aux_sym_branch_opcode_token6] = ACTIONS(98),
    [aux_sym_branch_opcode_token7] = ACTIONS(98),
    [aux_sym_branch_opcode_token8] = ACTIONS(98),
    [aux_sym_branch_opcode_token9] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_identifier] = ACTIONS(100),
    [aux_sym_ldm_opcode_token1] = ACTIONS(100),
    [aux_sym_ldm_opcode_token2] = ACTIONS(100),
    [aux_sym_load_opcode_token1] = ACTIONS(100),
    [aux_sym_load_opcode_token2] = ACTIONS(100),
    [sym_adr_opcode] = ACTIONS(100),
    [aux_sym_push_opcode_token1] = ACTIONS(100),
    [aux_sym_push_opcode_token2] = ACTIONS(100),
    [aux_sym_opcode_token1] = ACTIONS(100),
    [aux_sym_opcode_token2] = ACTIONS(100),
    [aux_sym_opcode_token3] = ACTIONS(100),
    [aux_sym_opcode_token4] = ACTIONS(100),
    [aux_sym_opcode_token5] = ACTIONS(100),
    [aux_sym_opcode_token6] = ACTIONS(100),
    [aux_sym_opcode_token7] = ACTIONS(100),
    [aux_sym_opcode_token8] = ACTIONS(100),
    [aux_sym_opcode_token9] = ACTIONS(100),
    [aux_sym_opcode_token10] = ACTIONS(100),
    [aux_sym_opcode_token11] = ACTIONS(100),
    [aux_sym_opcode_token12] = ACTIONS(100),
    [aux_sym_opcode_token13] = ACTIONS(100),
    [aux_sym_opcode_token14] = ACTIONS(100),
    [aux_sym_opcode_token15] = ACTIONS(100),
    [aux_sym_opcode_token16] = ACTIONS(100),
    [aux_sym_opcode_token17] = ACTIONS(100),
    [aux_sym_opcode_token18] = ACTIONS(100),
    [aux_sym_opcode_token19] = ACTIONS(100),
    [aux_sym_opcode_token20] = ACTIONS(100),
    [aux_sym_opcode_token21] = ACTIONS(100),
    [aux_sym_opcode_token22] = ACTIONS(100),
    [aux_sym_opcode_token23] = ACTIONS(100),
    [aux_sym_opcode_token24] = ACTIONS(100),
    [aux_sym_opcode_token25] = ACTIONS(100),
    [aux_sym_branch_opcode_token1] = ACTIONS(102),
    [aux_sym_branch_opcode_token2] = ACTIONS(102),
    [aux_sym_branch_opcode_token3] = ACTIONS(102),
    [aux_sym_branch_opcode_token4] = ACTIONS(102),
    [aux_sym_branch_opcode_token5] = ACTIONS(102),
    [aux_sym_branch_opcode_token6] = ACTIONS(102),
    [aux_sym_branch_opcode_token7] = ACTIONS(102),
    [aux_sym_branch_opcode_token8] = ACTIONS(102),
    [aux_sym_branch_opcode_token9] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = ACTIONS(104),
    [aux_sym_ldm_opcode_token1] = ACTIONS(104),
    [aux_sym_ldm_opcode_token2] = ACTIONS(104),
    [aux_sym_load_opcode_token1] = ACTIONS(104),
    [aux_sym_load_opcode_token2] = ACTIONS(104),
    [sym_adr_opcode] = ACTIONS(104),
    [aux_sym_push_opcode_token1] = ACTIONS(104),
    [aux_sym_push_opcode_token2] = ACTIONS(104),
    [aux_sym_opcode_token1] = ACTIONS(104),
    [aux_sym_opcode_token2] = ACTIONS(104),
    [aux_sym_opcode_token3] = ACTIONS(104),
    [aux_sym_opcode_token4] = ACTIONS(104),
    [aux_sym_opcode_token5] = ACTIONS(104),
    [aux_sym_opcode_token6] = ACTIONS(104),
    [aux_sym_opcode_token7] = ACTIONS(104),
    [aux_sym_opcode_token8] = ACTIONS(104),
    [aux_sym_opcode_token9] = ACTIONS(104),
    [aux_sym_opcode_token10] = ACTIONS(104),
    [aux_sym_opcode_token11] = ACTIONS(104),
    [aux_sym_opcode_token12] = ACTIONS(104),
    [aux_sym_opcode_token13] = ACTIONS(104),
    [aux_sym_opcode_token14] = ACTIONS(104),
    [aux_sym_opcode_token15] = ACTIONS(104),
    [aux_sym_opcode_token16] = ACTIONS(104),
    [aux_sym_opcode_token17] = ACTIONS(104),
    [aux_sym_opcode_token18] = ACTIONS(104),
    [aux_sym_opcode_token19] = ACTIONS(104),
    [aux_sym_opcode_token20] = ACTIONS(104),
    [aux_sym_opcode_token21] = ACTIONS(104),
    [aux_sym_opcode_token22] = ACTIONS(104),
    [aux_sym_opcode_token23] = ACTIONS(104),
    [aux_sym_opcode_token24] = ACTIONS(104),
    [aux_sym_opcode_token25] = ACTIONS(104),
    [aux_sym_branch_opcode_token1] = ACTIONS(106),
    [aux_sym_branch_opcode_token2] = ACTIONS(106),
    [aux_sym_branch_opcode_token3] = ACTIONS(106),
    [aux_sym_branch_opcode_token4] = ACTIONS(106),
    [aux_sym_branch_opcode_token5] = ACTIONS(106),
    [aux_sym_branch_opcode_token6] = ACTIONS(106),
    [aux_sym_branch_opcode_token7] = ACTIONS(106),
    [aux_sym_branch_opcode_token8] = ACTIONS(106),
    [aux_sym_branch_opcode_token9] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_identifier] = ACTIONS(108),
    [aux_sym_ldm_opcode_token1] = ACTIONS(108),
    [aux_sym_ldm_opcode_token2] = ACTIONS(108),
    [aux_sym_load_opcode_token1] = ACTIONS(108),
    [aux_sym_load_opcode_token2] = ACTIONS(108),
    [sym_adr_opcode] = ACTIONS(108),
    [aux_sym_push_opcode_token1] = ACTIONS(108),
    [aux_sym_push_opcode_token2] = ACTIONS(108),
    [aux_sym_opcode_token1] = ACTIONS(108),
    [aux_sym_opcode_token2] = ACTIONS(108),
    [aux_sym_opcode_token3] = ACTIONS(108),
    [aux_sym_opcode_token4] = ACTIONS(108),
    [aux_sym_opcode_token5] = ACTIONS(108),
    [aux_sym_opcode_token6] = ACTIONS(108),
    [aux_sym_opcode_token7] = ACTIONS(108),
    [aux_sym_opcode_token8] = ACTIONS(108),
    [aux_sym_opcode_token9] = ACTIONS(108),
    [aux_sym_opcode_token10] = ACTIONS(108),
    [aux_sym_opcode_token11] = ACTIONS(108),
    [aux_sym_opcode_token12] = ACTIONS(108),
    [aux_sym_opcode_token13] = ACTIONS(108),
    [aux_sym_opcode_token14] = ACTIONS(108),
    [aux_sym_opcode_token15] = ACTIONS(108),
    [aux_sym_opcode_token16] = ACTIONS(108),
    [aux_sym_opcode_token17] = ACTIONS(108),
    [aux_sym_opcode_token18] = ACTIONS(108),
    [aux_sym_opcode_token19] = ACTIONS(108),
    [aux_sym_opcode_token20] = ACTIONS(108),
    [aux_sym_opcode_token21] = ACTIONS(108),
    [aux_sym_opcode_token22] = ACTIONS(108),
    [aux_sym_opcode_token23] = ACTIONS(108),
    [aux_sym_opcode_token24] = ACTIONS(108),
    [aux_sym_opcode_token25] = ACTIONS(108),
    [aux_sym_branch_opcode_token1] = ACTIONS(110),
    [aux_sym_branch_opcode_token2] = ACTIONS(110),
    [aux_sym_branch_opcode_token3] = ACTIONS(110),
    [aux_sym_branch_opcode_token4] = ACTIONS(110),
    [aux_sym_branch_opcode_token5] = ACTIONS(110),
    [aux_sym_branch_opcode_token6] = ACTIONS(110),
    [aux_sym_branch_opcode_token7] = ACTIONS(110),
    [aux_sym_branch_opcode_token8] = ACTIONS(110),
    [aux_sym_branch_opcode_token9] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_identifier] = ACTIONS(112),
    [aux_sym_ldm_opcode_token1] = ACTIONS(112),
    [aux_sym_ldm_opcode_token2] = ACTIONS(112),
    [aux_sym_load_opcode_token1] = ACTIONS(112),
    [aux_sym_load_opcode_token2] = ACTIONS(112),
    [sym_adr_opcode] = ACTIONS(112),
    [aux_sym_push_opcode_token1] = ACTIONS(112),
    [aux_sym_push_opcode_token2] = ACTIONS(112),
    [aux_sym_opcode_token1] = ACTIONS(112),
    [aux_sym_opcode_token2] = ACTIONS(112),
    [aux_sym_opcode_token3] = ACTIONS(112),
    [aux_sym_opcode_token4] = ACTIONS(112),
    [aux_sym_opcode_token5] = ACTIONS(112),
    [aux_sym_opcode_token6] = ACTIONS(112),
    [aux_sym_opcode_token7] = ACTIONS(112),
    [aux_sym_opcode_token8] = ACTIONS(112),
    [aux_sym_opcode_token9] = ACTIONS(112),
    [aux_sym_opcode_token10] = ACTIONS(112),
    [aux_sym_opcode_token11] = ACTIONS(112),
    [aux_sym_opcode_token12] = ACTIONS(112),
    [aux_sym_opcode_token13] = ACTIONS(112),
    [aux_sym_opcode_token14] = ACTIONS(112),
    [aux_sym_opcode_token15] = ACTIONS(112),
    [aux_sym_opcode_token16] = ACTIONS(112),
    [aux_sym_opcode_token17] = ACTIONS(112),
    [aux_sym_opcode_token18] = ACTIONS(112),
    [aux_sym_opcode_token19] = ACTIONS(112),
    [aux_sym_opcode_token20] = ACTIONS(112),
    [aux_sym_opcode_token21] = ACTIONS(112),
    [aux_sym_opcode_token22] = ACTIONS(112),
    [aux_sym_opcode_token23] = ACTIONS(112),
    [aux_sym_opcode_token24] = ACTIONS(112),
    [aux_sym_opcode_token25] = ACTIONS(112),
    [aux_sym_branch_opcode_token1] = ACTIONS(114),
    [aux_sym_branch_opcode_token2] = ACTIONS(114),
    [aux_sym_branch_opcode_token3] = ACTIONS(114),
    [aux_sym_branch_opcode_token4] = ACTIONS(114),
    [aux_sym_branch_opcode_token5] = ACTIONS(114),
    [aux_sym_branch_opcode_token6] = ACTIONS(114),
    [aux_sym_branch_opcode_token7] = ACTIONS(114),
    [aux_sym_branch_opcode_token8] = ACTIONS(114),
    [aux_sym_branch_opcode_token9] = ACTIONS(114),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_constant_token1,
    ACTIONS(118), 1,
      aux_sym_constant_token2,
    STATE(12), 2,
      sym_register,
      sym_constant,
    ACTIONS(116), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [20] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_reg_list,
    STATE(37), 1,
      sym_register,
    ACTIONS(122), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [39] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(38), 1,
      sym_register,
    ACTIONS(126), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [55] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(27), 2,
      aux_sym__statement,
      sym_function_definition,
  [75] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym_register,
    STATE(43), 1,
      sym_reg_list,
    ACTIONS(122), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [91] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(27), 2,
      aux_sym__statement,
      sym_function_definition,
  [111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_register,
    ACTIONS(122), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_register,
    ACTIONS(142), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 1,
      sym_register,
    ACTIONS(122), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_push_statement_repeat1,
  [213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_DASH,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_push_statement_repeat1,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_push_statement_repeat1,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
  [300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
  [307] = 2,
    ACTIONS(177), 1,
      aux_sym_load_statement_token1,
    ACTIONS(179), 1,
      sym_comment,
  [314] = 2,
    ACTIONS(46), 1,
      aux_sym_load_statement_token1,
    ACTIONS(179), 1,
      sym_comment,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 20,
  [SMALL_STATE(24)] = 39,
  [SMALL_STATE(25)] = 55,
  [SMALL_STATE(26)] = 75,
  [SMALL_STATE(27)] = 91,
  [SMALL_STATE(28)] = 111,
  [SMALL_STATE(29)] = 122,
  [SMALL_STATE(30)] = 135,
  [SMALL_STATE(31)] = 148,
  [SMALL_STATE(32)] = 161,
  [SMALL_STATE(33)] = 171,
  [SMALL_STATE(34)] = 181,
  [SMALL_STATE(35)] = 191,
  [SMALL_STATE(36)] = 200,
  [SMALL_STATE(37)] = 213,
  [SMALL_STATE(38)] = 224,
  [SMALL_STATE(39)] = 233,
  [SMALL_STATE(40)] = 246,
  [SMALL_STATE(41)] = 255,
  [SMALL_STATE(42)] = 268,
  [SMALL_STATE(43)] = 277,
  [SMALL_STATE(44)] = 285,
  [SMALL_STATE(45)] = 293,
  [SMALL_STATE(46)] = 300,
  [SMALL_STATE(47)] = 307,
  [SMALL_STATE(48)] = 314,
  [SMALL_STATE(49)] = 321,
  [SMALL_STATE(50)] = 328,
  [SMALL_STATE(51)] = 335,
  [SMALL_STATE(52)] = 342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(46),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(50),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6, .production_id = 8),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(46),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(27),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_opcode, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_push_statement_repeat1, 2), SHIFT_REPEAT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_push_statement_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
