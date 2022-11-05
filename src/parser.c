#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  aux_sym_load_statement_token1 = 3,
  anon_sym_BANG = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym_ldm_opcode_token1 = 7,
  aux_sym_ldm_opcode_token2 = 8,
  aux_sym_load_opcode_token1 = 9,
  aux_sym_load_opcode_token2 = 10,
  sym_adr_opcode = 11,
  anon_sym_DASH = 12,
  aux_sym_push_opcode_token1 = 13,
  aux_sym_push_opcode_token2 = 14,
  aux_sym_opcode_token1 = 15,
  aux_sym_opcode_token2 = 16,
  aux_sym_opcode_token3 = 17,
  aux_sym_opcode_token4 = 18,
  aux_sym_opcode_token5 = 19,
  aux_sym_opcode_token6 = 20,
  aux_sym_opcode_token7 = 21,
  aux_sym_opcode_token8 = 22,
  aux_sym_opcode_token9 = 23,
  aux_sym_opcode_token10 = 24,
  aux_sym_opcode_token11 = 25,
  aux_sym_opcode_token12 = 26,
  aux_sym_opcode_token13 = 27,
  aux_sym_opcode_token14 = 28,
  aux_sym_opcode_token15 = 29,
  aux_sym_opcode_token16 = 30,
  aux_sym_opcode_token17 = 31,
  aux_sym_opcode_token18 = 32,
  aux_sym_opcode_token19 = 33,
  aux_sym_opcode_token20 = 34,
  aux_sym_opcode_token21 = 35,
  aux_sym_opcode_token22 = 36,
  aux_sym_opcode_token23 = 37,
  aux_sym_opcode_token24 = 38,
  aux_sym_opcode_token25 = 39,
  aux_sym_branch_opcode_token1 = 40,
  aux_sym_branch_opcode_token2 = 41,
  aux_sym_branch_opcode_token3 = 42,
  aux_sym_branch_opcode_token4 = 43,
  aux_sym_branch_opcode_token5 = 44,
  aux_sym_branch_opcode_token6 = 45,
  aux_sym_branch_opcode_token7 = 46,
  aux_sym_branch_opcode_token8 = 47,
  aux_sym_branch_opcode_token9 = 48,
  anon_sym_COLON = 49,
  aux_sym_register_token1 = 50,
  aux_sym_register_token2 = 51,
  aux_sym_register_token3 = 52,
  aux_sym_register_token4 = 53,
  sym_directive = 54,
  sym_comment = 55,
  aux_sym_constant_token1 = 56,
  aux_sym_constant_token2 = 57,
  sym_source_file = 58,
  aux_sym__statement = 59,
  sym_function_definition = 60,
  sym_math_statement = 61,
  sym_load_statement = 62,
  sym_ldm_statement = 63,
  sym_ldm_opcode = 64,
  sym_load_opcode = 65,
  sym_pool_statement = 66,
  sym_push_statement = 67,
  sym_reg_list = 68,
  sym_push_opcode = 69,
  sym_simple_statement = 70,
  sym_opcode = 71,
  sym_return_statement = 72,
  sym_branch_statement = 73,
  sym_branch_opcode = 74,
  sym_label = 75,
  sym_register = 76,
  sym_constant = 77,
  aux_sym_function_definition_repeat1 = 78,
  aux_sym_ldm_statement_repeat1 = 79,
  alias_sym_func_name = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [aux_sym_load_statement_token1] = "load_statement_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_ldm_opcode_token1] = "ldm_opcode_token1",
  [aux_sym_ldm_opcode_token2] = "ldm_opcode_token2",
  [aux_sym_load_opcode_token1] = "load_opcode_token1",
  [aux_sym_load_opcode_token2] = "load_opcode_token2",
  [sym_adr_opcode] = "adr_opcode",
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
  [sym_ldm_statement] = "ldm_statement",
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
  [aux_sym_ldm_statement_repeat1] = "ldm_statement_repeat1",
  [alias_sym_func_name] = "func_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_load_statement_token1] = aux_sym_load_statement_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_ldm_opcode_token1] = aux_sym_ldm_opcode_token1,
  [aux_sym_ldm_opcode_token2] = aux_sym_ldm_opcode_token2,
  [aux_sym_load_opcode_token1] = aux_sym_load_opcode_token1,
  [aux_sym_load_opcode_token2] = aux_sym_load_opcode_token2,
  [sym_adr_opcode] = sym_adr_opcode,
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
  [sym_ldm_statement] = sym_ldm_statement,
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
  [aux_sym_ldm_statement_repeat1] = aux_sym_ldm_statement_repeat1,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [sym_ldm_statement] = {
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
  [aux_sym_ldm_statement_repeat1] = {
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
  field_registers = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Rd] = "Rd",
  [field_Rm] = "Rm",
  [field_Rn] = "Rn",
  [field_Rt] = "Rt",
  [field_operand2] = "operand2",
  [field_registers] = "registers",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
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
    {field_Rn, 1},
  [8] =
    {field_Rn, 1},
    {field_registers, 4},
  [10] =
    {field_Rd, 1},
    {field_Rn, 3},
    {field_operand2, 5},
  [13] =
    {field_Rn, 1},
    {field_registers, 4},
    {field_registers, 5},
  [16] =
    {field_Rn, 1},
    {field_registers, 5},
  [18] =
    {field_Rn, 1},
    {field_registers, 5},
    {field_registers, 6},
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 5,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 5,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 39,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(43);
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
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '@') ADVANCE(43);
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
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_load_statement_token1);
      if (lookahead == '\n') ADVANCE(43);
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
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH);
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
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_ldm_opcode_token1] = ACTIONS(1),
    [aux_sym_ldm_opcode_token2] = ACTIONS(1),
    [aux_sym_load_opcode_token1] = ACTIONS(1),
    [aux_sym_load_opcode_token2] = ACTIONS(1),
    [sym_adr_opcode] = ACTIONS(1),
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
    [sym_source_file] = STATE(69),
    [aux_sym__statement] = STATE(32),
    [sym_function_definition] = STATE(32),
    [sym_label] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_math_statement] = STATE(4),
    [sym_load_statement] = STATE(4),
    [sym_ldm_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(38),
    [sym_load_opcode] = STATE(36),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(65),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(37),
    [sym_return_statement] = STATE(55),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(33),
    [sym_label] = STATE(11),
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
  [3] = {
    [sym_math_statement] = STATE(2),
    [sym_load_statement] = STATE(2),
    [sym_ldm_statement] = STATE(2),
    [sym_ldm_opcode] = STATE(38),
    [sym_load_opcode] = STATE(36),
    [sym_pool_statement] = STATE(2),
    [sym_push_statement] = STATE(2),
    [sym_push_opcode] = STATE(65),
    [sym_simple_statement] = STATE(2),
    [sym_opcode] = STATE(37),
    [sym_return_statement] = STATE(45),
    [sym_branch_statement] = STATE(2),
    [sym_branch_opcode] = STATE(33),
    [sym_label] = STATE(11),
    [aux_sym_function_definition_repeat1] = STATE(2),
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
    [sym_ldm_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(38),
    [sym_load_opcode] = STATE(36),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(65),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(37),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(64),
    [sym_label] = STATE(11),
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
    [anon_sym_BANG] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [aux_sym_ldm_opcode_token1] = ACTIONS(46),
    [aux_sym_ldm_opcode_token2] = ACTIONS(46),
    [aux_sym_load_opcode_token1] = ACTIONS(46),
    [aux_sym_load_opcode_token2] = ACTIONS(46),
    [sym_adr_opcode] = ACTIONS(46),
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
    [sym_register] = STATE(15),
    [sym_constant] = STATE(15),
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
    [sym_register] = STATE(9),
    [sym_constant] = STATE(22),
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
    [anon_sym_COMMA] = ACTIONS(66),
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
  [10] = {
    [sym_identifier] = ACTIONS(70),
    [aux_sym_ldm_opcode_token1] = ACTIONS(70),
    [aux_sym_ldm_opcode_token2] = ACTIONS(70),
    [aux_sym_load_opcode_token1] = ACTIONS(70),
    [aux_sym_load_opcode_token2] = ACTIONS(70),
    [sym_adr_opcode] = ACTIONS(70),
    [aux_sym_push_opcode_token1] = ACTIONS(70),
    [aux_sym_push_opcode_token2] = ACTIONS(70),
    [aux_sym_opcode_token1] = ACTIONS(70),
    [aux_sym_opcode_token2] = ACTIONS(70),
    [aux_sym_opcode_token3] = ACTIONS(70),
    [aux_sym_opcode_token4] = ACTIONS(70),
    [aux_sym_opcode_token5] = ACTIONS(70),
    [aux_sym_opcode_token6] = ACTIONS(70),
    [aux_sym_opcode_token7] = ACTIONS(70),
    [aux_sym_opcode_token8] = ACTIONS(70),
    [aux_sym_opcode_token9] = ACTIONS(70),
    [aux_sym_opcode_token10] = ACTIONS(70),
    [aux_sym_opcode_token11] = ACTIONS(70),
    [aux_sym_opcode_token12] = ACTIONS(70),
    [aux_sym_opcode_token13] = ACTIONS(70),
    [aux_sym_opcode_token14] = ACTIONS(70),
    [aux_sym_opcode_token15] = ACTIONS(70),
    [aux_sym_opcode_token16] = ACTIONS(70),
    [aux_sym_opcode_token17] = ACTIONS(70),
    [aux_sym_opcode_token18] = ACTIONS(70),
    [aux_sym_opcode_token19] = ACTIONS(70),
    [aux_sym_opcode_token20] = ACTIONS(70),
    [aux_sym_opcode_token21] = ACTIONS(70),
    [aux_sym_opcode_token22] = ACTIONS(70),
    [aux_sym_opcode_token23] = ACTIONS(70),
    [aux_sym_opcode_token24] = ACTIONS(70),
    [aux_sym_opcode_token25] = ACTIONS(70),
    [aux_sym_branch_opcode_token1] = ACTIONS(72),
    [aux_sym_branch_opcode_token2] = ACTIONS(72),
    [aux_sym_branch_opcode_token3] = ACTIONS(72),
    [aux_sym_branch_opcode_token4] = ACTIONS(72),
    [aux_sym_branch_opcode_token5] = ACTIONS(72),
    [aux_sym_branch_opcode_token6] = ACTIONS(72),
    [aux_sym_branch_opcode_token7] = ACTIONS(72),
    [aux_sym_branch_opcode_token8] = ACTIONS(72),
    [aux_sym_branch_opcode_token9] = ACTIONS(72),
    [sym_directive] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
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
    [aux_sym_branch_opcode_token1] = ACTIONS(76),
    [aux_sym_branch_opcode_token2] = ACTIONS(76),
    [aux_sym_branch_opcode_token3] = ACTIONS(76),
    [aux_sym_branch_opcode_token4] = ACTIONS(76),
    [aux_sym_branch_opcode_token5] = ACTIONS(76),
    [aux_sym_branch_opcode_token6] = ACTIONS(76),
    [aux_sym_branch_opcode_token7] = ACTIONS(76),
    [aux_sym_branch_opcode_token8] = ACTIONS(76),
    [aux_sym_branch_opcode_token9] = ACTIONS(76),
    [sym_directive] = ACTIONS(78),
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
  [15] = {
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
  [16] = {
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
  [17] = {
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
  [18] = {
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
  [19] = {
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
  [20] = {
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
  [21] = {
    [sym_identifier] = ACTIONS(116),
    [aux_sym_ldm_opcode_token1] = ACTIONS(116),
    [aux_sym_ldm_opcode_token2] = ACTIONS(116),
    [aux_sym_load_opcode_token1] = ACTIONS(116),
    [aux_sym_load_opcode_token2] = ACTIONS(116),
    [sym_adr_opcode] = ACTIONS(116),
    [aux_sym_push_opcode_token1] = ACTIONS(116),
    [aux_sym_push_opcode_token2] = ACTIONS(116),
    [aux_sym_opcode_token1] = ACTIONS(116),
    [aux_sym_opcode_token2] = ACTIONS(116),
    [aux_sym_opcode_token3] = ACTIONS(116),
    [aux_sym_opcode_token4] = ACTIONS(116),
    [aux_sym_opcode_token5] = ACTIONS(116),
    [aux_sym_opcode_token6] = ACTIONS(116),
    [aux_sym_opcode_token7] = ACTIONS(116),
    [aux_sym_opcode_token8] = ACTIONS(116),
    [aux_sym_opcode_token9] = ACTIONS(116),
    [aux_sym_opcode_token10] = ACTIONS(116),
    [aux_sym_opcode_token11] = ACTIONS(116),
    [aux_sym_opcode_token12] = ACTIONS(116),
    [aux_sym_opcode_token13] = ACTIONS(116),
    [aux_sym_opcode_token14] = ACTIONS(116),
    [aux_sym_opcode_token15] = ACTIONS(116),
    [aux_sym_opcode_token16] = ACTIONS(116),
    [aux_sym_opcode_token17] = ACTIONS(116),
    [aux_sym_opcode_token18] = ACTIONS(116),
    [aux_sym_opcode_token19] = ACTIONS(116),
    [aux_sym_opcode_token20] = ACTIONS(116),
    [aux_sym_opcode_token21] = ACTIONS(116),
    [aux_sym_opcode_token22] = ACTIONS(116),
    [aux_sym_opcode_token23] = ACTIONS(116),
    [aux_sym_opcode_token24] = ACTIONS(116),
    [aux_sym_opcode_token25] = ACTIONS(116),
    [aux_sym_branch_opcode_token1] = ACTIONS(118),
    [aux_sym_branch_opcode_token2] = ACTIONS(118),
    [aux_sym_branch_opcode_token3] = ACTIONS(118),
    [aux_sym_branch_opcode_token4] = ACTIONS(118),
    [aux_sym_branch_opcode_token5] = ACTIONS(118),
    [aux_sym_branch_opcode_token6] = ACTIONS(118),
    [aux_sym_branch_opcode_token7] = ACTIONS(118),
    [aux_sym_branch_opcode_token8] = ACTIONS(118),
    [aux_sym_branch_opcode_token9] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
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
  [23] = {
    [sym_identifier] = ACTIONS(120),
    [aux_sym_ldm_opcode_token1] = ACTIONS(120),
    [aux_sym_ldm_opcode_token2] = ACTIONS(120),
    [aux_sym_load_opcode_token1] = ACTIONS(120),
    [aux_sym_load_opcode_token2] = ACTIONS(120),
    [sym_adr_opcode] = ACTIONS(120),
    [aux_sym_push_opcode_token1] = ACTIONS(120),
    [aux_sym_push_opcode_token2] = ACTIONS(120),
    [aux_sym_opcode_token1] = ACTIONS(120),
    [aux_sym_opcode_token2] = ACTIONS(120),
    [aux_sym_opcode_token3] = ACTIONS(120),
    [aux_sym_opcode_token4] = ACTIONS(120),
    [aux_sym_opcode_token5] = ACTIONS(120),
    [aux_sym_opcode_token6] = ACTIONS(120),
    [aux_sym_opcode_token7] = ACTIONS(120),
    [aux_sym_opcode_token8] = ACTIONS(120),
    [aux_sym_opcode_token9] = ACTIONS(120),
    [aux_sym_opcode_token10] = ACTIONS(120),
    [aux_sym_opcode_token11] = ACTIONS(120),
    [aux_sym_opcode_token12] = ACTIONS(120),
    [aux_sym_opcode_token13] = ACTIONS(120),
    [aux_sym_opcode_token14] = ACTIONS(120),
    [aux_sym_opcode_token15] = ACTIONS(120),
    [aux_sym_opcode_token16] = ACTIONS(120),
    [aux_sym_opcode_token17] = ACTIONS(120),
    [aux_sym_opcode_token18] = ACTIONS(120),
    [aux_sym_opcode_token19] = ACTIONS(120),
    [aux_sym_opcode_token20] = ACTIONS(120),
    [aux_sym_opcode_token21] = ACTIONS(120),
    [aux_sym_opcode_token22] = ACTIONS(120),
    [aux_sym_opcode_token23] = ACTIONS(120),
    [aux_sym_opcode_token24] = ACTIONS(120),
    [aux_sym_opcode_token25] = ACTIONS(120),
    [aux_sym_branch_opcode_token1] = ACTIONS(122),
    [aux_sym_branch_opcode_token2] = ACTIONS(122),
    [aux_sym_branch_opcode_token3] = ACTIONS(122),
    [aux_sym_branch_opcode_token4] = ACTIONS(122),
    [aux_sym_branch_opcode_token5] = ACTIONS(122),
    [aux_sym_branch_opcode_token6] = ACTIONS(122),
    [aux_sym_branch_opcode_token7] = ACTIONS(122),
    [aux_sym_branch_opcode_token8] = ACTIONS(122),
    [aux_sym_branch_opcode_token9] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_identifier] = ACTIONS(124),
    [aux_sym_ldm_opcode_token1] = ACTIONS(124),
    [aux_sym_ldm_opcode_token2] = ACTIONS(124),
    [aux_sym_load_opcode_token1] = ACTIONS(124),
    [aux_sym_load_opcode_token2] = ACTIONS(124),
    [sym_adr_opcode] = ACTIONS(124),
    [aux_sym_push_opcode_token1] = ACTIONS(124),
    [aux_sym_push_opcode_token2] = ACTIONS(124),
    [aux_sym_opcode_token1] = ACTIONS(124),
    [aux_sym_opcode_token2] = ACTIONS(124),
    [aux_sym_opcode_token3] = ACTIONS(124),
    [aux_sym_opcode_token4] = ACTIONS(124),
    [aux_sym_opcode_token5] = ACTIONS(124),
    [aux_sym_opcode_token6] = ACTIONS(124),
    [aux_sym_opcode_token7] = ACTIONS(124),
    [aux_sym_opcode_token8] = ACTIONS(124),
    [aux_sym_opcode_token9] = ACTIONS(124),
    [aux_sym_opcode_token10] = ACTIONS(124),
    [aux_sym_opcode_token11] = ACTIONS(124),
    [aux_sym_opcode_token12] = ACTIONS(124),
    [aux_sym_opcode_token13] = ACTIONS(124),
    [aux_sym_opcode_token14] = ACTIONS(124),
    [aux_sym_opcode_token15] = ACTIONS(124),
    [aux_sym_opcode_token16] = ACTIONS(124),
    [aux_sym_opcode_token17] = ACTIONS(124),
    [aux_sym_opcode_token18] = ACTIONS(124),
    [aux_sym_opcode_token19] = ACTIONS(124),
    [aux_sym_opcode_token20] = ACTIONS(124),
    [aux_sym_opcode_token21] = ACTIONS(124),
    [aux_sym_opcode_token22] = ACTIONS(124),
    [aux_sym_opcode_token23] = ACTIONS(124),
    [aux_sym_opcode_token24] = ACTIONS(124),
    [aux_sym_opcode_token25] = ACTIONS(124),
    [aux_sym_branch_opcode_token1] = ACTIONS(126),
    [aux_sym_branch_opcode_token2] = ACTIONS(126),
    [aux_sym_branch_opcode_token3] = ACTIONS(126),
    [aux_sym_branch_opcode_token4] = ACTIONS(126),
    [aux_sym_branch_opcode_token5] = ACTIONS(126),
    [aux_sym_branch_opcode_token6] = ACTIONS(126),
    [aux_sym_branch_opcode_token7] = ACTIONS(126),
    [aux_sym_branch_opcode_token8] = ACTIONS(126),
    [aux_sym_branch_opcode_token9] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_identifier] = ACTIONS(128),
    [aux_sym_ldm_opcode_token1] = ACTIONS(128),
    [aux_sym_ldm_opcode_token2] = ACTIONS(128),
    [aux_sym_load_opcode_token1] = ACTIONS(128),
    [aux_sym_load_opcode_token2] = ACTIONS(128),
    [sym_adr_opcode] = ACTIONS(128),
    [aux_sym_push_opcode_token1] = ACTIONS(128),
    [aux_sym_push_opcode_token2] = ACTIONS(128),
    [aux_sym_opcode_token1] = ACTIONS(128),
    [aux_sym_opcode_token2] = ACTIONS(128),
    [aux_sym_opcode_token3] = ACTIONS(128),
    [aux_sym_opcode_token4] = ACTIONS(128),
    [aux_sym_opcode_token5] = ACTIONS(128),
    [aux_sym_opcode_token6] = ACTIONS(128),
    [aux_sym_opcode_token7] = ACTIONS(128),
    [aux_sym_opcode_token8] = ACTIONS(128),
    [aux_sym_opcode_token9] = ACTIONS(128),
    [aux_sym_opcode_token10] = ACTIONS(128),
    [aux_sym_opcode_token11] = ACTIONS(128),
    [aux_sym_opcode_token12] = ACTIONS(128),
    [aux_sym_opcode_token13] = ACTIONS(128),
    [aux_sym_opcode_token14] = ACTIONS(128),
    [aux_sym_opcode_token15] = ACTIONS(128),
    [aux_sym_opcode_token16] = ACTIONS(128),
    [aux_sym_opcode_token17] = ACTIONS(128),
    [aux_sym_opcode_token18] = ACTIONS(128),
    [aux_sym_opcode_token19] = ACTIONS(128),
    [aux_sym_opcode_token20] = ACTIONS(128),
    [aux_sym_opcode_token21] = ACTIONS(128),
    [aux_sym_opcode_token22] = ACTIONS(128),
    [aux_sym_opcode_token23] = ACTIONS(128),
    [aux_sym_opcode_token24] = ACTIONS(128),
    [aux_sym_opcode_token25] = ACTIONS(128),
    [aux_sym_branch_opcode_token1] = ACTIONS(130),
    [aux_sym_branch_opcode_token2] = ACTIONS(130),
    [aux_sym_branch_opcode_token3] = ACTIONS(130),
    [aux_sym_branch_opcode_token4] = ACTIONS(130),
    [aux_sym_branch_opcode_token5] = ACTIONS(130),
    [aux_sym_branch_opcode_token6] = ACTIONS(130),
    [aux_sym_branch_opcode_token7] = ACTIONS(130),
    [aux_sym_branch_opcode_token8] = ACTIONS(130),
    [aux_sym_branch_opcode_token9] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_identifier] = ACTIONS(132),
    [aux_sym_ldm_opcode_token1] = ACTIONS(132),
    [aux_sym_ldm_opcode_token2] = ACTIONS(132),
    [aux_sym_load_opcode_token1] = ACTIONS(132),
    [aux_sym_load_opcode_token2] = ACTIONS(132),
    [sym_adr_opcode] = ACTIONS(132),
    [aux_sym_push_opcode_token1] = ACTIONS(132),
    [aux_sym_push_opcode_token2] = ACTIONS(132),
    [aux_sym_opcode_token1] = ACTIONS(132),
    [aux_sym_opcode_token2] = ACTIONS(132),
    [aux_sym_opcode_token3] = ACTIONS(132),
    [aux_sym_opcode_token4] = ACTIONS(132),
    [aux_sym_opcode_token5] = ACTIONS(132),
    [aux_sym_opcode_token6] = ACTIONS(132),
    [aux_sym_opcode_token7] = ACTIONS(132),
    [aux_sym_opcode_token8] = ACTIONS(132),
    [aux_sym_opcode_token9] = ACTIONS(132),
    [aux_sym_opcode_token10] = ACTIONS(132),
    [aux_sym_opcode_token11] = ACTIONS(132),
    [aux_sym_opcode_token12] = ACTIONS(132),
    [aux_sym_opcode_token13] = ACTIONS(132),
    [aux_sym_opcode_token14] = ACTIONS(132),
    [aux_sym_opcode_token15] = ACTIONS(132),
    [aux_sym_opcode_token16] = ACTIONS(132),
    [aux_sym_opcode_token17] = ACTIONS(132),
    [aux_sym_opcode_token18] = ACTIONS(132),
    [aux_sym_opcode_token19] = ACTIONS(132),
    [aux_sym_opcode_token20] = ACTIONS(132),
    [aux_sym_opcode_token21] = ACTIONS(132),
    [aux_sym_opcode_token22] = ACTIONS(132),
    [aux_sym_opcode_token23] = ACTIONS(132),
    [aux_sym_opcode_token24] = ACTIONS(132),
    [aux_sym_opcode_token25] = ACTIONS(132),
    [aux_sym_branch_opcode_token1] = ACTIONS(134),
    [aux_sym_branch_opcode_token2] = ACTIONS(134),
    [aux_sym_branch_opcode_token3] = ACTIONS(134),
    [aux_sym_branch_opcode_token4] = ACTIONS(134),
    [aux_sym_branch_opcode_token5] = ACTIONS(134),
    [aux_sym_branch_opcode_token6] = ACTIONS(134),
    [aux_sym_branch_opcode_token7] = ACTIONS(134),
    [aux_sym_branch_opcode_token8] = ACTIONS(134),
    [aux_sym_branch_opcode_token9] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_identifier] = ACTIONS(136),
    [aux_sym_ldm_opcode_token1] = ACTIONS(136),
    [aux_sym_ldm_opcode_token2] = ACTIONS(136),
    [aux_sym_load_opcode_token1] = ACTIONS(136),
    [aux_sym_load_opcode_token2] = ACTIONS(136),
    [sym_adr_opcode] = ACTIONS(136),
    [aux_sym_push_opcode_token1] = ACTIONS(136),
    [aux_sym_push_opcode_token2] = ACTIONS(136),
    [aux_sym_opcode_token1] = ACTIONS(136),
    [aux_sym_opcode_token2] = ACTIONS(136),
    [aux_sym_opcode_token3] = ACTIONS(136),
    [aux_sym_opcode_token4] = ACTIONS(136),
    [aux_sym_opcode_token5] = ACTIONS(136),
    [aux_sym_opcode_token6] = ACTIONS(136),
    [aux_sym_opcode_token7] = ACTIONS(136),
    [aux_sym_opcode_token8] = ACTIONS(136),
    [aux_sym_opcode_token9] = ACTIONS(136),
    [aux_sym_opcode_token10] = ACTIONS(136),
    [aux_sym_opcode_token11] = ACTIONS(136),
    [aux_sym_opcode_token12] = ACTIONS(136),
    [aux_sym_opcode_token13] = ACTIONS(136),
    [aux_sym_opcode_token14] = ACTIONS(136),
    [aux_sym_opcode_token15] = ACTIONS(136),
    [aux_sym_opcode_token16] = ACTIONS(136),
    [aux_sym_opcode_token17] = ACTIONS(136),
    [aux_sym_opcode_token18] = ACTIONS(136),
    [aux_sym_opcode_token19] = ACTIONS(136),
    [aux_sym_opcode_token20] = ACTIONS(136),
    [aux_sym_opcode_token21] = ACTIONS(136),
    [aux_sym_opcode_token22] = ACTIONS(136),
    [aux_sym_opcode_token23] = ACTIONS(136),
    [aux_sym_opcode_token24] = ACTIONS(136),
    [aux_sym_opcode_token25] = ACTIONS(136),
    [aux_sym_branch_opcode_token1] = ACTIONS(138),
    [aux_sym_branch_opcode_token2] = ACTIONS(138),
    [aux_sym_branch_opcode_token3] = ACTIONS(138),
    [aux_sym_branch_opcode_token4] = ACTIONS(138),
    [aux_sym_branch_opcode_token5] = ACTIONS(138),
    [aux_sym_branch_opcode_token6] = ACTIONS(138),
    [aux_sym_branch_opcode_token7] = ACTIONS(138),
    [aux_sym_branch_opcode_token8] = ACTIONS(138),
    [aux_sym_branch_opcode_token9] = ACTIONS(138),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_constant_token1,
    ACTIONS(142), 1,
      aux_sym_constant_token2,
    STATE(21), 2,
      sym_register,
      sym_constant,
    ACTIONS(140), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [20] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_register,
    STATE(51), 1,
      sym_reg_list,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [39] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_reg_list,
    STATE(48), 1,
      sym_register,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [58] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_register,
    STATE(50), 1,
      sym_reg_list,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [77] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym_directive,
    STATE(3), 1,
      sym_label,
    STATE(35), 2,
      aux_sym__statement,
      sym_function_definition,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(53), 1,
      sym_register,
    ACTIONS(158), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 1,
      sym_register,
    STATE(57), 1,
      sym_reg_list,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [129] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_directive,
    STATE(3), 1,
      sym_label,
    STATE(35), 2,
      aux_sym__statement,
      sym_function_definition,
  [149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_register,
    ACTIONS(168), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_register,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_register,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym_register,
    ACTIONS(146), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_ldm_statement_repeat1,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ldm_statement_repeat1,
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ldm_statement_repeat1,
  [310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_ldm_statement_repeat1,
  [323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_ldm_statement_repeat1,
  [336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ldm_statement_repeat1,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ldm_statement_repeat1,
  [371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_BANG,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COMMA,
  [420] = 2,
    ACTIONS(217), 1,
      aux_sym_load_statement_token1,
    ACTIONS(219), 1,
      sym_comment,
  [427] = 2,
    ACTIONS(46), 1,
      aux_sym_load_statement_token1,
    ACTIONS(219), 1,
      sym_comment,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
  [448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_identifier,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
  [476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 20,
  [SMALL_STATE(30)] = 39,
  [SMALL_STATE(31)] = 58,
  [SMALL_STATE(32)] = 77,
  [SMALL_STATE(33)] = 97,
  [SMALL_STATE(34)] = 113,
  [SMALL_STATE(35)] = 129,
  [SMALL_STATE(36)] = 149,
  [SMALL_STATE(37)] = 162,
  [SMALL_STATE(38)] = 175,
  [SMALL_STATE(39)] = 188,
  [SMALL_STATE(40)] = 199,
  [SMALL_STATE(41)] = 212,
  [SMALL_STATE(42)] = 222,
  [SMALL_STATE(43)] = 232,
  [SMALL_STATE(44)] = 242,
  [SMALL_STATE(45)] = 255,
  [SMALL_STATE(46)] = 264,
  [SMALL_STATE(47)] = 273,
  [SMALL_STATE(48)] = 286,
  [SMALL_STATE(49)] = 297,
  [SMALL_STATE(50)] = 310,
  [SMALL_STATE(51)] = 323,
  [SMALL_STATE(52)] = 336,
  [SMALL_STATE(53)] = 349,
  [SMALL_STATE(54)] = 358,
  [SMALL_STATE(55)] = 371,
  [SMALL_STATE(56)] = 380,
  [SMALL_STATE(57)] = 388,
  [SMALL_STATE(58)] = 396,
  [SMALL_STATE(59)] = 406,
  [SMALL_STATE(60)] = 413,
  [SMALL_STATE(61)] = 420,
  [SMALL_STATE(62)] = 427,
  [SMALL_STATE(63)] = 434,
  [SMALL_STATE(64)] = 441,
  [SMALL_STATE(65)] = 448,
  [SMALL_STATE(66)] = 455,
  [SMALL_STATE(67)] = 462,
  [SMALL_STATE(68)] = 469,
  [SMALL_STATE(69)] = 476,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(63),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(43),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(67),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(41),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(66),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 6),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 12),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 11),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 11),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6, .production_id = 10),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6, .production_id = 10),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 9),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 3, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 3, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 8, .production_id = 13),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 8, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(63),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(35),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_opcode, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 4),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2), SHIFT_REPEAT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_opcode, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
