#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 19

enum {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_BANG = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  aux_sym_ldm_opcode_token1 = 8,
  aux_sym_ldm_opcode_token2 = 9,
  aux_sym_load_opcode_token1 = 10,
  aux_sym_load_opcode_token2 = 11,
  sym_adr_opcode = 12,
  anon_sym_DASH = 13,
  aux_sym_push_opcode_token1 = 14,
  aux_sym_push_opcode_token2 = 15,
  aux_sym_opcode_token1 = 16,
  aux_sym_opcode_token2 = 17,
  aux_sym_opcode_token3 = 18,
  aux_sym_opcode_token4 = 19,
  aux_sym_opcode_token5 = 20,
  aux_sym_opcode_token6 = 21,
  aux_sym_opcode_token7 = 22,
  aux_sym_opcode_token8 = 23,
  aux_sym_opcode_token9 = 24,
  aux_sym_opcode_token10 = 25,
  aux_sym_opcode_token11 = 26,
  aux_sym_opcode_token12 = 27,
  aux_sym_opcode_token13 = 28,
  aux_sym_opcode_token14 = 29,
  aux_sym_opcode_token15 = 30,
  aux_sym_opcode_token16 = 31,
  aux_sym_opcode_token17 = 32,
  aux_sym_opcode_token18 = 33,
  aux_sym_opcode_token19 = 34,
  aux_sym_opcode_token20 = 35,
  aux_sym_opcode_token21 = 36,
  aux_sym_opcode_token22 = 37,
  aux_sym_opcode_token23 = 38,
  aux_sym_opcode_token24 = 39,
  aux_sym_opcode_token25 = 40,
  aux_sym_branch_opcode_token1 = 41,
  aux_sym_branch_opcode_token2 = 42,
  aux_sym_branch_opcode_token3 = 43,
  aux_sym_branch_opcode_token4 = 44,
  aux_sym_branch_opcode_token5 = 45,
  aux_sym_branch_opcode_token6 = 46,
  aux_sym_branch_opcode_token7 = 47,
  aux_sym_branch_opcode_token8 = 48,
  aux_sym_branch_opcode_token9 = 49,
  anon_sym_COLON = 50,
  sym_register = 51,
  sym_directive = 52,
  sym_comment = 53,
  sym_constant = 54,
  sym_source_file = 55,
  aux_sym__statement = 56,
  sym_function_definition = 57,
  sym_math_statement = 58,
  sym_load_statement = 59,
  sym_ldm_statement = 60,
  sym_ldm_opcode = 61,
  sym_load_opcode = 62,
  sym_pool_statement = 63,
  sym_push_statement = 64,
  sym_reg_list = 65,
  sym_push_opcode = 66,
  sym_simple_statement = 67,
  sym_opcode = 68,
  sym_return_statement = 69,
  sym_branch_statement = 70,
  sym_branch_opcode = 71,
  sym_label = 72,
  aux_sym_function_definition_repeat1 = 73,
  aux_sym_ldm_statement_repeat1 = 74,
  alias_sym_func_name = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_register] = "register",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [sym_constant] = "constant",
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
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_ldm_statement_repeat1] = "ldm_statement_repeat1",
  [alias_sym_func_name] = "func_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_register] = sym_register,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [sym_constant] = sym_constant,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_register] = {
    .visible = true,
    .named = true,
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
  field_label = 5,
  field_offset = 6,
  field_operand2 = 7,
  field_registers = 8,
  field_regoffset = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Rd] = "Rd",
  [field_Rm] = "Rm",
  [field_Rn] = "Rn",
  [field_Rt] = "Rt",
  [field_label] = "label",
  [field_offset] = "offset",
  [field_operand2] = "operand2",
  [field_registers] = "registers",
  [field_regoffset] = "regoffset",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_Rd, 1},
  [1] =
    {field_Rm, 1},
  [2] =
    {field_Rd, 1},
    {field_operand2, 2},
  [4] =
    {field_Rt, 1},
    {field_label, 3},
  [6] =
    {field_Rd, 1},
    {field_operand2, 3},
  [8] =
    {field_Rn, 1},
  [9] =
    {field_Rn, 4},
    {field_Rt, 1},
  [11] =
    {field_Rn, 1},
    {field_registers, 4},
  [13] =
    {field_Rd, 1},
    {field_Rn, 3},
    {field_operand2, 5},
  [16] =
    {field_Rn, 4},
    {field_Rt, 1},
    {field_regoffset, 5},
  [19] =
    {field_Rn, 4},
    {field_Rt, 1},
    {field_offset, 5},
  [22] =
    {field_Rn, 1},
    {field_registers, 4},
    {field_registers, 5},
  [25] =
    {field_Rn, 1},
    {field_registers, 5},
  [27] =
    {field_Rn, 4},
    {field_Rt, 1},
    {field_regoffset, 6},
  [30] =
    {field_Rn, 4},
    {field_Rt, 1},
    {field_offset, 6},
  [33] =
    {field_Rn, 1},
    {field_registers, 5},
    {field_registers, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_func_name,
  },
  [4] = {
    [1] = sym_label,
  },
  [6] = {
    [3] = sym_label,
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
  [46] = 46,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(26);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_branch_opcode_token9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
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
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'q') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_adr_opcode);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_opcode_token19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_opcode_token25);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_opcode_token18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_opcode_token24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_opcode_token23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_opcode_token22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_opcode_token21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_register] = ACTIONS(1),
    [sym_directive] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_constant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [aux_sym__statement] = STATE(31),
    [sym_function_definition] = STATE(31),
    [sym_label] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_directive] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_math_statement] = STATE(3),
    [sym_load_statement] = STATE(3),
    [sym_ldm_statement] = STATE(3),
    [sym_ldm_opcode] = STATE(67),
    [sym_load_opcode] = STATE(73),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(66),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(57),
    [sym_return_statement] = STATE(42),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(56),
    [sym_label] = STATE(9),
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
    [sym_ldm_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(67),
    [sym_load_opcode] = STATE(73),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(66),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(57),
    [sym_return_statement] = STATE(48),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(56),
    [sym_label] = STATE(9),
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
    [sym_ldm_statement] = STATE(4),
    [sym_ldm_opcode] = STATE(67),
    [sym_load_opcode] = STATE(73),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(66),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(57),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(58),
    [sym_label] = STATE(9),
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
    [aux_sym_branch_opcode_token1] = ACTIONS(50),
    [aux_sym_branch_opcode_token2] = ACTIONS(50),
    [aux_sym_branch_opcode_token3] = ACTIONS(50),
    [aux_sym_branch_opcode_token4] = ACTIONS(50),
    [aux_sym_branch_opcode_token5] = ACTIONS(50),
    [aux_sym_branch_opcode_token6] = ACTIONS(50),
    [aux_sym_branch_opcode_token7] = ACTIONS(50),
    [aux_sym_branch_opcode_token8] = ACTIONS(50),
    [aux_sym_branch_opcode_token9] = ACTIONS(50),
    [sym_register] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [sym_constant] = ACTIONS(54),
  },
  [6] = {
    [sym_identifier] = ACTIONS(56),
    [aux_sym_ldm_opcode_token1] = ACTIONS(56),
    [aux_sym_ldm_opcode_token2] = ACTIONS(56),
    [aux_sym_load_opcode_token1] = ACTIONS(56),
    [aux_sym_load_opcode_token2] = ACTIONS(56),
    [sym_adr_opcode] = ACTIONS(56),
    [aux_sym_push_opcode_token1] = ACTIONS(56),
    [aux_sym_push_opcode_token2] = ACTIONS(56),
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
    [aux_sym_opcode_token15] = ACTIONS(56),
    [aux_sym_opcode_token16] = ACTIONS(56),
    [aux_sym_opcode_token17] = ACTIONS(56),
    [aux_sym_opcode_token18] = ACTIONS(56),
    [aux_sym_opcode_token19] = ACTIONS(56),
    [aux_sym_opcode_token20] = ACTIONS(56),
    [aux_sym_opcode_token21] = ACTIONS(56),
    [aux_sym_opcode_token22] = ACTIONS(56),
    [aux_sym_opcode_token23] = ACTIONS(56),
    [aux_sym_opcode_token24] = ACTIONS(56),
    [aux_sym_opcode_token25] = ACTIONS(56),
    [aux_sym_branch_opcode_token1] = ACTIONS(58),
    [aux_sym_branch_opcode_token2] = ACTIONS(58),
    [aux_sym_branch_opcode_token3] = ACTIONS(58),
    [aux_sym_branch_opcode_token4] = ACTIONS(58),
    [aux_sym_branch_opcode_token5] = ACTIONS(58),
    [aux_sym_branch_opcode_token6] = ACTIONS(58),
    [aux_sym_branch_opcode_token7] = ACTIONS(58),
    [aux_sym_branch_opcode_token8] = ACTIONS(58),
    [aux_sym_branch_opcode_token9] = ACTIONS(58),
    [sym_register] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
    [sym_constant] = ACTIONS(62),
  },
  [7] = {
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
  [8] = {
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
  [9] = {
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
  [10] = {
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
  [11] = {
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
  [12] = {
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
  [13] = {
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
  [14] = {
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
  [15] = {
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
  [16] = {
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
  [17] = {
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
  [18] = {
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
  [19] = {
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
  [20] = {
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
  [21] = {
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
  [22] = {
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
  [23] = {
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
  [24] = {
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
  [25] = {
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
  [26] = {
    [sym_identifier] = ACTIONS(140),
    [aux_sym_ldm_opcode_token1] = ACTIONS(140),
    [aux_sym_ldm_opcode_token2] = ACTIONS(140),
    [aux_sym_load_opcode_token1] = ACTIONS(140),
    [aux_sym_load_opcode_token2] = ACTIONS(140),
    [sym_adr_opcode] = ACTIONS(140),
    [aux_sym_push_opcode_token1] = ACTIONS(140),
    [aux_sym_push_opcode_token2] = ACTIONS(140),
    [aux_sym_opcode_token1] = ACTIONS(140),
    [aux_sym_opcode_token2] = ACTIONS(140),
    [aux_sym_opcode_token3] = ACTIONS(140),
    [aux_sym_opcode_token4] = ACTIONS(140),
    [aux_sym_opcode_token5] = ACTIONS(140),
    [aux_sym_opcode_token6] = ACTIONS(140),
    [aux_sym_opcode_token7] = ACTIONS(140),
    [aux_sym_opcode_token8] = ACTIONS(140),
    [aux_sym_opcode_token9] = ACTIONS(140),
    [aux_sym_opcode_token10] = ACTIONS(140),
    [aux_sym_opcode_token11] = ACTIONS(140),
    [aux_sym_opcode_token12] = ACTIONS(140),
    [aux_sym_opcode_token13] = ACTIONS(140),
    [aux_sym_opcode_token14] = ACTIONS(140),
    [aux_sym_opcode_token15] = ACTIONS(140),
    [aux_sym_opcode_token16] = ACTIONS(140),
    [aux_sym_opcode_token17] = ACTIONS(140),
    [aux_sym_opcode_token18] = ACTIONS(140),
    [aux_sym_opcode_token19] = ACTIONS(140),
    [aux_sym_opcode_token20] = ACTIONS(140),
    [aux_sym_opcode_token21] = ACTIONS(140),
    [aux_sym_opcode_token22] = ACTIONS(140),
    [aux_sym_opcode_token23] = ACTIONS(140),
    [aux_sym_opcode_token24] = ACTIONS(140),
    [aux_sym_opcode_token25] = ACTIONS(140),
    [aux_sym_branch_opcode_token1] = ACTIONS(142),
    [aux_sym_branch_opcode_token2] = ACTIONS(142),
    [aux_sym_branch_opcode_token3] = ACTIONS(142),
    [aux_sym_branch_opcode_token4] = ACTIONS(142),
    [aux_sym_branch_opcode_token5] = ACTIONS(142),
    [aux_sym_branch_opcode_token6] = ACTIONS(142),
    [aux_sym_branch_opcode_token7] = ACTIONS(142),
    [aux_sym_branch_opcode_token8] = ACTIONS(142),
    [aux_sym_branch_opcode_token9] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_identifier] = ACTIONS(144),
    [aux_sym_ldm_opcode_token1] = ACTIONS(144),
    [aux_sym_ldm_opcode_token2] = ACTIONS(144),
    [aux_sym_load_opcode_token1] = ACTIONS(144),
    [aux_sym_load_opcode_token2] = ACTIONS(144),
    [sym_adr_opcode] = ACTIONS(144),
    [aux_sym_push_opcode_token1] = ACTIONS(144),
    [aux_sym_push_opcode_token2] = ACTIONS(144),
    [aux_sym_opcode_token1] = ACTIONS(144),
    [aux_sym_opcode_token2] = ACTIONS(144),
    [aux_sym_opcode_token3] = ACTIONS(144),
    [aux_sym_opcode_token4] = ACTIONS(144),
    [aux_sym_opcode_token5] = ACTIONS(144),
    [aux_sym_opcode_token6] = ACTIONS(144),
    [aux_sym_opcode_token7] = ACTIONS(144),
    [aux_sym_opcode_token8] = ACTIONS(144),
    [aux_sym_opcode_token9] = ACTIONS(144),
    [aux_sym_opcode_token10] = ACTIONS(144),
    [aux_sym_opcode_token11] = ACTIONS(144),
    [aux_sym_opcode_token12] = ACTIONS(144),
    [aux_sym_opcode_token13] = ACTIONS(144),
    [aux_sym_opcode_token14] = ACTIONS(144),
    [aux_sym_opcode_token15] = ACTIONS(144),
    [aux_sym_opcode_token16] = ACTIONS(144),
    [aux_sym_opcode_token17] = ACTIONS(144),
    [aux_sym_opcode_token18] = ACTIONS(144),
    [aux_sym_opcode_token19] = ACTIONS(144),
    [aux_sym_opcode_token20] = ACTIONS(144),
    [aux_sym_opcode_token21] = ACTIONS(144),
    [aux_sym_opcode_token22] = ACTIONS(144),
    [aux_sym_opcode_token23] = ACTIONS(144),
    [aux_sym_opcode_token24] = ACTIONS(144),
    [aux_sym_opcode_token25] = ACTIONS(144),
    [aux_sym_branch_opcode_token1] = ACTIONS(146),
    [aux_sym_branch_opcode_token2] = ACTIONS(146),
    [aux_sym_branch_opcode_token3] = ACTIONS(146),
    [aux_sym_branch_opcode_token4] = ACTIONS(146),
    [aux_sym_branch_opcode_token5] = ACTIONS(146),
    [aux_sym_branch_opcode_token6] = ACTIONS(146),
    [aux_sym_branch_opcode_token7] = ACTIONS(146),
    [aux_sym_branch_opcode_token8] = ACTIONS(146),
    [aux_sym_branch_opcode_token9] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_identifier] = ACTIONS(148),
    [aux_sym_ldm_opcode_token1] = ACTIONS(148),
    [aux_sym_ldm_opcode_token2] = ACTIONS(148),
    [aux_sym_load_opcode_token1] = ACTIONS(148),
    [aux_sym_load_opcode_token2] = ACTIONS(148),
    [sym_adr_opcode] = ACTIONS(148),
    [aux_sym_push_opcode_token1] = ACTIONS(148),
    [aux_sym_push_opcode_token2] = ACTIONS(148),
    [aux_sym_opcode_token1] = ACTIONS(148),
    [aux_sym_opcode_token2] = ACTIONS(148),
    [aux_sym_opcode_token3] = ACTIONS(148),
    [aux_sym_opcode_token4] = ACTIONS(148),
    [aux_sym_opcode_token5] = ACTIONS(148),
    [aux_sym_opcode_token6] = ACTIONS(148),
    [aux_sym_opcode_token7] = ACTIONS(148),
    [aux_sym_opcode_token8] = ACTIONS(148),
    [aux_sym_opcode_token9] = ACTIONS(148),
    [aux_sym_opcode_token10] = ACTIONS(148),
    [aux_sym_opcode_token11] = ACTIONS(148),
    [aux_sym_opcode_token12] = ACTIONS(148),
    [aux_sym_opcode_token13] = ACTIONS(148),
    [aux_sym_opcode_token14] = ACTIONS(148),
    [aux_sym_opcode_token15] = ACTIONS(148),
    [aux_sym_opcode_token16] = ACTIONS(148),
    [aux_sym_opcode_token17] = ACTIONS(148),
    [aux_sym_opcode_token18] = ACTIONS(148),
    [aux_sym_opcode_token19] = ACTIONS(148),
    [aux_sym_opcode_token20] = ACTIONS(148),
    [aux_sym_opcode_token21] = ACTIONS(148),
    [aux_sym_opcode_token22] = ACTIONS(148),
    [aux_sym_opcode_token23] = ACTIONS(148),
    [aux_sym_opcode_token24] = ACTIONS(148),
    [aux_sym_opcode_token25] = ACTIONS(148),
    [aux_sym_branch_opcode_token1] = ACTIONS(150),
    [aux_sym_branch_opcode_token2] = ACTIONS(150),
    [aux_sym_branch_opcode_token3] = ACTIONS(150),
    [aux_sym_branch_opcode_token4] = ACTIONS(150),
    [aux_sym_branch_opcode_token5] = ACTIONS(150),
    [aux_sym_branch_opcode_token6] = ACTIONS(150),
    [aux_sym_branch_opcode_token7] = ACTIONS(150),
    [aux_sym_branch_opcode_token8] = ACTIONS(150),
    [aux_sym_branch_opcode_token9] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_identifier] = ACTIONS(152),
    [aux_sym_ldm_opcode_token1] = ACTIONS(152),
    [aux_sym_ldm_opcode_token2] = ACTIONS(152),
    [aux_sym_load_opcode_token1] = ACTIONS(152),
    [aux_sym_load_opcode_token2] = ACTIONS(152),
    [sym_adr_opcode] = ACTIONS(152),
    [aux_sym_push_opcode_token1] = ACTIONS(152),
    [aux_sym_push_opcode_token2] = ACTIONS(152),
    [aux_sym_opcode_token1] = ACTIONS(152),
    [aux_sym_opcode_token2] = ACTIONS(152),
    [aux_sym_opcode_token3] = ACTIONS(152),
    [aux_sym_opcode_token4] = ACTIONS(152),
    [aux_sym_opcode_token5] = ACTIONS(152),
    [aux_sym_opcode_token6] = ACTIONS(152),
    [aux_sym_opcode_token7] = ACTIONS(152),
    [aux_sym_opcode_token8] = ACTIONS(152),
    [aux_sym_opcode_token9] = ACTIONS(152),
    [aux_sym_opcode_token10] = ACTIONS(152),
    [aux_sym_opcode_token11] = ACTIONS(152),
    [aux_sym_opcode_token12] = ACTIONS(152),
    [aux_sym_opcode_token13] = ACTIONS(152),
    [aux_sym_opcode_token14] = ACTIONS(152),
    [aux_sym_opcode_token15] = ACTIONS(152),
    [aux_sym_opcode_token16] = ACTIONS(152),
    [aux_sym_opcode_token17] = ACTIONS(152),
    [aux_sym_opcode_token18] = ACTIONS(152),
    [aux_sym_opcode_token19] = ACTIONS(152),
    [aux_sym_opcode_token20] = ACTIONS(152),
    [aux_sym_opcode_token21] = ACTIONS(152),
    [aux_sym_opcode_token22] = ACTIONS(152),
    [aux_sym_opcode_token23] = ACTIONS(152),
    [aux_sym_opcode_token24] = ACTIONS(152),
    [aux_sym_opcode_token25] = ACTIONS(152),
    [aux_sym_branch_opcode_token1] = ACTIONS(154),
    [aux_sym_branch_opcode_token2] = ACTIONS(154),
    [aux_sym_branch_opcode_token3] = ACTIONS(154),
    [aux_sym_branch_opcode_token4] = ACTIONS(154),
    [aux_sym_branch_opcode_token5] = ACTIONS(154),
    [aux_sym_branch_opcode_token6] = ACTIONS(154),
    [aux_sym_branch_opcode_token7] = ACTIONS(154),
    [aux_sym_branch_opcode_token8] = ACTIONS(154),
    [aux_sym_branch_opcode_token9] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_identifier] = ACTIONS(156),
    [aux_sym_ldm_opcode_token1] = ACTIONS(156),
    [aux_sym_ldm_opcode_token2] = ACTIONS(156),
    [aux_sym_load_opcode_token1] = ACTIONS(156),
    [aux_sym_load_opcode_token2] = ACTIONS(156),
    [sym_adr_opcode] = ACTIONS(156),
    [aux_sym_push_opcode_token1] = ACTIONS(156),
    [aux_sym_push_opcode_token2] = ACTIONS(156),
    [aux_sym_opcode_token1] = ACTIONS(156),
    [aux_sym_opcode_token2] = ACTIONS(156),
    [aux_sym_opcode_token3] = ACTIONS(156),
    [aux_sym_opcode_token4] = ACTIONS(156),
    [aux_sym_opcode_token5] = ACTIONS(156),
    [aux_sym_opcode_token6] = ACTIONS(156),
    [aux_sym_opcode_token7] = ACTIONS(156),
    [aux_sym_opcode_token8] = ACTIONS(156),
    [aux_sym_opcode_token9] = ACTIONS(156),
    [aux_sym_opcode_token10] = ACTIONS(156),
    [aux_sym_opcode_token11] = ACTIONS(156),
    [aux_sym_opcode_token12] = ACTIONS(156),
    [aux_sym_opcode_token13] = ACTIONS(156),
    [aux_sym_opcode_token14] = ACTIONS(156),
    [aux_sym_opcode_token15] = ACTIONS(156),
    [aux_sym_opcode_token16] = ACTIONS(156),
    [aux_sym_opcode_token17] = ACTIONS(156),
    [aux_sym_opcode_token18] = ACTIONS(156),
    [aux_sym_opcode_token19] = ACTIONS(156),
    [aux_sym_opcode_token20] = ACTIONS(156),
    [aux_sym_opcode_token21] = ACTIONS(156),
    [aux_sym_opcode_token22] = ACTIONS(156),
    [aux_sym_opcode_token23] = ACTIONS(156),
    [aux_sym_opcode_token24] = ACTIONS(156),
    [aux_sym_opcode_token25] = ACTIONS(156),
    [aux_sym_branch_opcode_token1] = ACTIONS(158),
    [aux_sym_branch_opcode_token2] = ACTIONS(158),
    [aux_sym_branch_opcode_token3] = ACTIONS(158),
    [aux_sym_branch_opcode_token4] = ACTIONS(158),
    [aux_sym_branch_opcode_token5] = ACTIONS(158),
    [aux_sym_branch_opcode_token6] = ACTIONS(158),
    [aux_sym_branch_opcode_token7] = ACTIONS(158),
    [aux_sym_branch_opcode_token8] = ACTIONS(158),
    [aux_sym_branch_opcode_token9] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(32), 2,
      aux_sym__statement,
      sym_function_definition,
  [20] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(169), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(32), 2,
      aux_sym__statement,
      sym_function_definition,
  [40] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    ACTIONS(176), 1,
      sym_register,
    ACTIONS(178), 1,
      sym_constant,
  [56] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(182), 1,
      sym_register,
    ACTIONS(184), 1,
      sym_constant,
  [69] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [89] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_ldm_statement_repeat1,
  [102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_ldm_statement_repeat1,
  [115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_ldm_statement_repeat1,
  [128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_ldm_statement_repeat1,
  [141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 1,
      sym_register,
    STATE(45), 1,
      sym_reg_list,
  [154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_ldm_statement_repeat1,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_register,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_reg_list,
  [189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_ldm_statement_repeat1,
  [202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_ldm_statement_repeat1,
  [215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_register,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_reg_list,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_BANG,
  [247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_register,
      sym_constant,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym_register,
      sym_identifier,
  [263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_register,
    STATE(54), 1,
      sym_reg_list,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      sym_register,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_register,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_identifier,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
  [337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_register,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
  [358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COLON,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
  [379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_register,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_register,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_register,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_register,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_register,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_register,
  [449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 20,
  [SMALL_STATE(33)] = 40,
  [SMALL_STATE(34)] = 56,
  [SMALL_STATE(35)] = 69,
  [SMALL_STATE(36)] = 78,
  [SMALL_STATE(37)] = 89,
  [SMALL_STATE(38)] = 102,
  [SMALL_STATE(39)] = 115,
  [SMALL_STATE(40)] = 128,
  [SMALL_STATE(41)] = 141,
  [SMALL_STATE(42)] = 154,
  [SMALL_STATE(43)] = 163,
  [SMALL_STATE(44)] = 176,
  [SMALL_STATE(45)] = 189,
  [SMALL_STATE(46)] = 202,
  [SMALL_STATE(47)] = 215,
  [SMALL_STATE(48)] = 228,
  [SMALL_STATE(49)] = 237,
  [SMALL_STATE(50)] = 247,
  [SMALL_STATE(51)] = 255,
  [SMALL_STATE(52)] = 263,
  [SMALL_STATE(53)] = 273,
  [SMALL_STATE(54)] = 281,
  [SMALL_STATE(55)] = 289,
  [SMALL_STATE(56)] = 299,
  [SMALL_STATE(57)] = 309,
  [SMALL_STATE(58)] = 316,
  [SMALL_STATE(59)] = 323,
  [SMALL_STATE(60)] = 330,
  [SMALL_STATE(61)] = 337,
  [SMALL_STATE(62)] = 344,
  [SMALL_STATE(63)] = 351,
  [SMALL_STATE(64)] = 358,
  [SMALL_STATE(65)] = 365,
  [SMALL_STATE(66)] = 372,
  [SMALL_STATE(67)] = 379,
  [SMALL_STATE(68)] = 386,
  [SMALL_STATE(69)] = 393,
  [SMALL_STATE(70)] = 400,
  [SMALL_STATE(71)] = 407,
  [SMALL_STATE(72)] = 414,
  [SMALL_STATE(73)] = 421,
  [SMALL_STATE(74)] = 428,
  [SMALL_STATE(75)] = 435,
  [SMALL_STATE(76)] = 442,
  [SMALL_STATE(77)] = 449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(65),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(76),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(75),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(73),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(72),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(71),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 8, .production_id = 16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 8, .production_id = 16),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 12),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 12),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6, .production_id = 11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6, .production_id = 11),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 10),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 6, .production_id = 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 6, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 8, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 8, .production_id = 18),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 14),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 13),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 13),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 4, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 4, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 8, .production_id = 17),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 8, .production_id = 17),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(65),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2), SHIFT_REPEAT(55),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_opcode, 1),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
