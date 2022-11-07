#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 59
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
  aux_sym_register_token1 = 51,
  aux_sym_register_token2 = 52,
  aux_sym_register_token3 = 53,
  aux_sym_register_token4 = 54,
  sym_directive = 55,
  sym_comment = 56,
  aux_sym_constant_token1 = 57,
  aux_sym_constant_token2 = 58,
  sym_source_file = 59,
  aux_sym__statement = 60,
  sym_function_definition = 61,
  sym_math_statement = 62,
  sym_load_statement = 63,
  sym_ldm_statement = 64,
  sym_ldm_opcode = 65,
  sym_load_opcode = 66,
  sym_pool_statement = 67,
  sym_push_statement = 68,
  sym_reg_list = 69,
  sym_push_opcode = 70,
  sym_simple_statement = 71,
  sym_opcode = 72,
  sym_return_statement = 73,
  sym_branch_statement = 74,
  sym_branch_opcode = 75,
  sym_label = 76,
  sym_register = 77,
  sym_constant = 78,
  aux_sym_function_definition_repeat1 = 79,
  aux_sym_ldm_statement_repeat1 = 80,
  alias_sym_func_name = 81,
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
  [4] = {.index = 1, .length = 1},
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
  [3] = {
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
  [54] = 5,
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
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
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_constant_token2);
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
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'n' ||
          lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'b' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'q') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_adr_opcode);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_opcode_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_opcode_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_opcode_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_opcode_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_opcode_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_opcode_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_load_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_opcode_token19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_opcode_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_opcode_token20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_opcode_token14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_opcode_token13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_opcode_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_opcode_token12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_opcode_token11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_opcode_token25);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_opcode_token10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_push_opcode_token2);
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_opcode_token16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_ldm_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_load_opcode_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_opcode_token18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_opcode_token17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_push_opcode_token1);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_opcode_token24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_opcode_token23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_opcode_token22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_opcode_token21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
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
    [sym_source_file] = STATE(79),
    [aux_sym__statement] = STATE(39),
    [sym_function_definition] = STATE(39),
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
    [sym_ldm_opcode] = STATE(46),
    [sym_load_opcode] = STATE(43),
    [sym_pool_statement] = STATE(3),
    [sym_push_statement] = STATE(3),
    [sym_push_opcode] = STATE(68),
    [sym_simple_statement] = STATE(3),
    [sym_opcode] = STATE(47),
    [sym_return_statement] = STATE(60),
    [sym_branch_statement] = STATE(3),
    [sym_branch_opcode] = STATE(42),
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
    [sym_ldm_opcode] = STATE(46),
    [sym_load_opcode] = STATE(43),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(68),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(47),
    [sym_return_statement] = STATE(52),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(42),
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
    [sym_ldm_opcode] = STATE(46),
    [sym_load_opcode] = STATE(43),
    [sym_pool_statement] = STATE(4),
    [sym_push_statement] = STATE(4),
    [sym_push_opcode] = STATE(68),
    [sym_simple_statement] = STATE(4),
    [sym_opcode] = STATE(47),
    [sym_branch_statement] = STATE(4),
    [sym_branch_opcode] = STATE(76),
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
    [anon_sym_RBRACK] = ACTIONS(48),
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
    [aux_sym_constant_token2] = ACTIONS(48),
  },
  [6] = {
    [sym_register] = STATE(32),
    [sym_constant] = STATE(32),
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
    [aux_sym_constant_token2] = ACTIONS(60),
  },
  [7] = {
    [sym_register] = STATE(8),
    [sym_constant] = STATE(13),
    [sym_identifier] = ACTIONS(62),
    [aux_sym_ldm_opcode_token1] = ACTIONS(62),
    [aux_sym_ldm_opcode_token2] = ACTIONS(62),
    [aux_sym_load_opcode_token1] = ACTIONS(62),
    [aux_sym_load_opcode_token2] = ACTIONS(62),
    [sym_adr_opcode] = ACTIONS(62),
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
    [aux_sym_opcode_token24] = ACTIONS(62),
    [aux_sym_opcode_token25] = ACTIONS(62),
    [aux_sym_branch_opcode_token1] = ACTIONS(64),
    [aux_sym_branch_opcode_token2] = ACTIONS(64),
    [aux_sym_branch_opcode_token3] = ACTIONS(64),
    [aux_sym_branch_opcode_token4] = ACTIONS(64),
    [aux_sym_branch_opcode_token5] = ACTIONS(64),
    [aux_sym_branch_opcode_token6] = ACTIONS(64),
    [aux_sym_branch_opcode_token7] = ACTIONS(64),
    [aux_sym_branch_opcode_token8] = ACTIONS(64),
    [aux_sym_branch_opcode_token9] = ACTIONS(64),
    [aux_sym_register_token1] = ACTIONS(56),
    [aux_sym_register_token2] = ACTIONS(56),
    [aux_sym_register_token3] = ACTIONS(56),
    [aux_sym_register_token4] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
    [aux_sym_constant_token1] = ACTIONS(58),
    [aux_sym_constant_token2] = ACTIONS(60),
  },
  [8] = {
    [sym_identifier] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(68),
    [aux_sym_ldm_opcode_token1] = ACTIONS(66),
    [aux_sym_ldm_opcode_token2] = ACTIONS(66),
    [aux_sym_load_opcode_token1] = ACTIONS(66),
    [aux_sym_load_opcode_token2] = ACTIONS(66),
    [sym_adr_opcode] = ACTIONS(66),
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
    [aux_sym_opcode_token24] = ACTIONS(66),
    [aux_sym_opcode_token25] = ACTIONS(66),
    [aux_sym_branch_opcode_token1] = ACTIONS(70),
    [aux_sym_branch_opcode_token2] = ACTIONS(70),
    [aux_sym_branch_opcode_token3] = ACTIONS(70),
    [aux_sym_branch_opcode_token4] = ACTIONS(70),
    [aux_sym_branch_opcode_token5] = ACTIONS(70),
    [aux_sym_branch_opcode_token6] = ACTIONS(70),
    [aux_sym_branch_opcode_token7] = ACTIONS(70),
    [aux_sym_branch_opcode_token8] = ACTIONS(70),
    [aux_sym_branch_opcode_token9] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_identifier] = ACTIONS(72),
    [aux_sym_ldm_opcode_token1] = ACTIONS(72),
    [aux_sym_ldm_opcode_token2] = ACTIONS(72),
    [aux_sym_load_opcode_token1] = ACTIONS(72),
    [aux_sym_load_opcode_token2] = ACTIONS(72),
    [sym_adr_opcode] = ACTIONS(72),
    [aux_sym_push_opcode_token1] = ACTIONS(72),
    [aux_sym_push_opcode_token2] = ACTIONS(72),
    [aux_sym_opcode_token1] = ACTIONS(72),
    [aux_sym_opcode_token2] = ACTIONS(72),
    [aux_sym_opcode_token3] = ACTIONS(72),
    [aux_sym_opcode_token4] = ACTIONS(72),
    [aux_sym_opcode_token5] = ACTIONS(72),
    [aux_sym_opcode_token6] = ACTIONS(72),
    [aux_sym_opcode_token7] = ACTIONS(72),
    [aux_sym_opcode_token8] = ACTIONS(72),
    [aux_sym_opcode_token9] = ACTIONS(72),
    [aux_sym_opcode_token10] = ACTIONS(72),
    [aux_sym_opcode_token11] = ACTIONS(72),
    [aux_sym_opcode_token12] = ACTIONS(72),
    [aux_sym_opcode_token13] = ACTIONS(72),
    [aux_sym_opcode_token14] = ACTIONS(72),
    [aux_sym_opcode_token15] = ACTIONS(72),
    [aux_sym_opcode_token16] = ACTIONS(72),
    [aux_sym_opcode_token17] = ACTIONS(72),
    [aux_sym_opcode_token18] = ACTIONS(72),
    [aux_sym_opcode_token19] = ACTIONS(72),
    [aux_sym_opcode_token20] = ACTIONS(72),
    [aux_sym_opcode_token21] = ACTIONS(72),
    [aux_sym_opcode_token22] = ACTIONS(72),
    [aux_sym_opcode_token23] = ACTIONS(72),
    [aux_sym_opcode_token24] = ACTIONS(72),
    [aux_sym_opcode_token25] = ACTIONS(72),
    [aux_sym_branch_opcode_token1] = ACTIONS(74),
    [aux_sym_branch_opcode_token2] = ACTIONS(74),
    [aux_sym_branch_opcode_token3] = ACTIONS(74),
    [aux_sym_branch_opcode_token4] = ACTIONS(74),
    [aux_sym_branch_opcode_token5] = ACTIONS(74),
    [aux_sym_branch_opcode_token6] = ACTIONS(74),
    [aux_sym_branch_opcode_token7] = ACTIONS(74),
    [aux_sym_branch_opcode_token8] = ACTIONS(74),
    [aux_sym_branch_opcode_token9] = ACTIONS(74),
    [sym_directive] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_identifier] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(80),
    [aux_sym_ldm_opcode_token1] = ACTIONS(78),
    [aux_sym_ldm_opcode_token2] = ACTIONS(78),
    [aux_sym_load_opcode_token1] = ACTIONS(78),
    [aux_sym_load_opcode_token2] = ACTIONS(78),
    [sym_adr_opcode] = ACTIONS(78),
    [aux_sym_push_opcode_token1] = ACTIONS(78),
    [aux_sym_push_opcode_token2] = ACTIONS(78),
    [aux_sym_opcode_token1] = ACTIONS(78),
    [aux_sym_opcode_token2] = ACTIONS(78),
    [aux_sym_opcode_token3] = ACTIONS(78),
    [aux_sym_opcode_token4] = ACTIONS(78),
    [aux_sym_opcode_token5] = ACTIONS(78),
    [aux_sym_opcode_token6] = ACTIONS(78),
    [aux_sym_opcode_token7] = ACTIONS(78),
    [aux_sym_opcode_token8] = ACTIONS(78),
    [aux_sym_opcode_token9] = ACTIONS(78),
    [aux_sym_opcode_token10] = ACTIONS(78),
    [aux_sym_opcode_token11] = ACTIONS(78),
    [aux_sym_opcode_token12] = ACTIONS(78),
    [aux_sym_opcode_token13] = ACTIONS(78),
    [aux_sym_opcode_token14] = ACTIONS(78),
    [aux_sym_opcode_token15] = ACTIONS(78),
    [aux_sym_opcode_token16] = ACTIONS(78),
    [aux_sym_opcode_token17] = ACTIONS(78),
    [aux_sym_opcode_token18] = ACTIONS(78),
    [aux_sym_opcode_token19] = ACTIONS(78),
    [aux_sym_opcode_token20] = ACTIONS(78),
    [aux_sym_opcode_token21] = ACTIONS(78),
    [aux_sym_opcode_token22] = ACTIONS(78),
    [aux_sym_opcode_token23] = ACTIONS(78),
    [aux_sym_opcode_token24] = ACTIONS(78),
    [aux_sym_opcode_token25] = ACTIONS(78),
    [aux_sym_branch_opcode_token1] = ACTIONS(80),
    [aux_sym_branch_opcode_token2] = ACTIONS(80),
    [aux_sym_branch_opcode_token3] = ACTIONS(80),
    [aux_sym_branch_opcode_token4] = ACTIONS(80),
    [aux_sym_branch_opcode_token5] = ACTIONS(80),
    [aux_sym_branch_opcode_token6] = ACTIONS(80),
    [aux_sym_branch_opcode_token7] = ACTIONS(80),
    [aux_sym_branch_opcode_token8] = ACTIONS(80),
    [aux_sym_branch_opcode_token9] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_identifier] = ACTIONS(82),
    [aux_sym_ldm_opcode_token1] = ACTIONS(82),
    [aux_sym_ldm_opcode_token2] = ACTIONS(82),
    [aux_sym_load_opcode_token1] = ACTIONS(82),
    [aux_sym_load_opcode_token2] = ACTIONS(82),
    [sym_adr_opcode] = ACTIONS(82),
    [aux_sym_push_opcode_token1] = ACTIONS(82),
    [aux_sym_push_opcode_token2] = ACTIONS(82),
    [aux_sym_opcode_token1] = ACTIONS(82),
    [aux_sym_opcode_token2] = ACTIONS(82),
    [aux_sym_opcode_token3] = ACTIONS(82),
    [aux_sym_opcode_token4] = ACTIONS(82),
    [aux_sym_opcode_token5] = ACTIONS(82),
    [aux_sym_opcode_token6] = ACTIONS(82),
    [aux_sym_opcode_token7] = ACTIONS(82),
    [aux_sym_opcode_token8] = ACTIONS(82),
    [aux_sym_opcode_token9] = ACTIONS(82),
    [aux_sym_opcode_token10] = ACTIONS(82),
    [aux_sym_opcode_token11] = ACTIONS(82),
    [aux_sym_opcode_token12] = ACTIONS(82),
    [aux_sym_opcode_token13] = ACTIONS(82),
    [aux_sym_opcode_token14] = ACTIONS(82),
    [aux_sym_opcode_token15] = ACTIONS(82),
    [aux_sym_opcode_token16] = ACTIONS(82),
    [aux_sym_opcode_token17] = ACTIONS(82),
    [aux_sym_opcode_token18] = ACTIONS(82),
    [aux_sym_opcode_token19] = ACTIONS(82),
    [aux_sym_opcode_token20] = ACTIONS(82),
    [aux_sym_opcode_token21] = ACTIONS(82),
    [aux_sym_opcode_token22] = ACTIONS(82),
    [aux_sym_opcode_token23] = ACTIONS(82),
    [aux_sym_opcode_token24] = ACTIONS(82),
    [aux_sym_opcode_token25] = ACTIONS(82),
    [aux_sym_branch_opcode_token1] = ACTIONS(84),
    [aux_sym_branch_opcode_token2] = ACTIONS(84),
    [aux_sym_branch_opcode_token3] = ACTIONS(84),
    [aux_sym_branch_opcode_token4] = ACTIONS(84),
    [aux_sym_branch_opcode_token5] = ACTIONS(84),
    [aux_sym_branch_opcode_token6] = ACTIONS(84),
    [aux_sym_branch_opcode_token7] = ACTIONS(84),
    [aux_sym_branch_opcode_token8] = ACTIONS(84),
    [aux_sym_branch_opcode_token9] = ACTIONS(84),
    [sym_directive] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_identifier] = ACTIONS(86),
    [aux_sym_ldm_opcode_token1] = ACTIONS(86),
    [aux_sym_ldm_opcode_token2] = ACTIONS(86),
    [aux_sym_load_opcode_token1] = ACTIONS(86),
    [aux_sym_load_opcode_token2] = ACTIONS(86),
    [sym_adr_opcode] = ACTIONS(86),
    [aux_sym_push_opcode_token1] = ACTIONS(86),
    [aux_sym_push_opcode_token2] = ACTIONS(86),
    [aux_sym_opcode_token1] = ACTIONS(86),
    [aux_sym_opcode_token2] = ACTIONS(86),
    [aux_sym_opcode_token3] = ACTIONS(86),
    [aux_sym_opcode_token4] = ACTIONS(86),
    [aux_sym_opcode_token5] = ACTIONS(86),
    [aux_sym_opcode_token6] = ACTIONS(86),
    [aux_sym_opcode_token7] = ACTIONS(86),
    [aux_sym_opcode_token8] = ACTIONS(86),
    [aux_sym_opcode_token9] = ACTIONS(86),
    [aux_sym_opcode_token10] = ACTIONS(86),
    [aux_sym_opcode_token11] = ACTIONS(86),
    [aux_sym_opcode_token12] = ACTIONS(86),
    [aux_sym_opcode_token13] = ACTIONS(86),
    [aux_sym_opcode_token14] = ACTIONS(86),
    [aux_sym_opcode_token15] = ACTIONS(86),
    [aux_sym_opcode_token16] = ACTIONS(86),
    [aux_sym_opcode_token17] = ACTIONS(86),
    [aux_sym_opcode_token18] = ACTIONS(86),
    [aux_sym_opcode_token19] = ACTIONS(86),
    [aux_sym_opcode_token20] = ACTIONS(86),
    [aux_sym_opcode_token21] = ACTIONS(86),
    [aux_sym_opcode_token22] = ACTIONS(86),
    [aux_sym_opcode_token23] = ACTIONS(86),
    [aux_sym_opcode_token24] = ACTIONS(86),
    [aux_sym_opcode_token25] = ACTIONS(86),
    [aux_sym_branch_opcode_token1] = ACTIONS(88),
    [aux_sym_branch_opcode_token2] = ACTIONS(88),
    [aux_sym_branch_opcode_token3] = ACTIONS(88),
    [aux_sym_branch_opcode_token4] = ACTIONS(88),
    [aux_sym_branch_opcode_token5] = ACTIONS(88),
    [aux_sym_branch_opcode_token6] = ACTIONS(88),
    [aux_sym_branch_opcode_token7] = ACTIONS(88),
    [aux_sym_branch_opcode_token8] = ACTIONS(88),
    [aux_sym_branch_opcode_token9] = ACTIONS(88),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_identifier] = ACTIONS(66),
    [aux_sym_ldm_opcode_token1] = ACTIONS(66),
    [aux_sym_ldm_opcode_token2] = ACTIONS(66),
    [aux_sym_load_opcode_token1] = ACTIONS(66),
    [aux_sym_load_opcode_token2] = ACTIONS(66),
    [sym_adr_opcode] = ACTIONS(66),
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
    [aux_sym_opcode_token24] = ACTIONS(66),
    [aux_sym_opcode_token25] = ACTIONS(66),
    [aux_sym_branch_opcode_token1] = ACTIONS(70),
    [aux_sym_branch_opcode_token2] = ACTIONS(70),
    [aux_sym_branch_opcode_token3] = ACTIONS(70),
    [aux_sym_branch_opcode_token4] = ACTIONS(70),
    [aux_sym_branch_opcode_token5] = ACTIONS(70),
    [aux_sym_branch_opcode_token6] = ACTIONS(70),
    [aux_sym_branch_opcode_token7] = ACTIONS(70),
    [aux_sym_branch_opcode_token8] = ACTIONS(70),
    [aux_sym_branch_opcode_token9] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(90),
    [aux_sym_ldm_opcode_token1] = ACTIONS(90),
    [aux_sym_ldm_opcode_token2] = ACTIONS(90),
    [aux_sym_load_opcode_token1] = ACTIONS(90),
    [aux_sym_load_opcode_token2] = ACTIONS(90),
    [sym_adr_opcode] = ACTIONS(90),
    [aux_sym_push_opcode_token1] = ACTIONS(90),
    [aux_sym_push_opcode_token2] = ACTIONS(90),
    [aux_sym_opcode_token1] = ACTIONS(90),
    [aux_sym_opcode_token2] = ACTIONS(90),
    [aux_sym_opcode_token3] = ACTIONS(90),
    [aux_sym_opcode_token4] = ACTIONS(90),
    [aux_sym_opcode_token5] = ACTIONS(90),
    [aux_sym_opcode_token6] = ACTIONS(90),
    [aux_sym_opcode_token7] = ACTIONS(90),
    [aux_sym_opcode_token8] = ACTIONS(90),
    [aux_sym_opcode_token9] = ACTIONS(90),
    [aux_sym_opcode_token10] = ACTIONS(90),
    [aux_sym_opcode_token11] = ACTIONS(90),
    [aux_sym_opcode_token12] = ACTIONS(90),
    [aux_sym_opcode_token13] = ACTIONS(90),
    [aux_sym_opcode_token14] = ACTIONS(90),
    [aux_sym_opcode_token15] = ACTIONS(90),
    [aux_sym_opcode_token16] = ACTIONS(90),
    [aux_sym_opcode_token17] = ACTIONS(90),
    [aux_sym_opcode_token18] = ACTIONS(90),
    [aux_sym_opcode_token19] = ACTIONS(90),
    [aux_sym_opcode_token20] = ACTIONS(90),
    [aux_sym_opcode_token21] = ACTIONS(90),
    [aux_sym_opcode_token22] = ACTIONS(90),
    [aux_sym_opcode_token23] = ACTIONS(90),
    [aux_sym_opcode_token24] = ACTIONS(90),
    [aux_sym_opcode_token25] = ACTIONS(90),
    [aux_sym_branch_opcode_token1] = ACTIONS(92),
    [aux_sym_branch_opcode_token2] = ACTIONS(92),
    [aux_sym_branch_opcode_token3] = ACTIONS(92),
    [aux_sym_branch_opcode_token4] = ACTIONS(92),
    [aux_sym_branch_opcode_token5] = ACTIONS(92),
    [aux_sym_branch_opcode_token6] = ACTIONS(92),
    [aux_sym_branch_opcode_token7] = ACTIONS(92),
    [aux_sym_branch_opcode_token8] = ACTIONS(92),
    [aux_sym_branch_opcode_token9] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_identifier] = ACTIONS(94),
    [aux_sym_ldm_opcode_token1] = ACTIONS(94),
    [aux_sym_ldm_opcode_token2] = ACTIONS(94),
    [aux_sym_load_opcode_token1] = ACTIONS(94),
    [aux_sym_load_opcode_token2] = ACTIONS(94),
    [sym_adr_opcode] = ACTIONS(94),
    [aux_sym_push_opcode_token1] = ACTIONS(94),
    [aux_sym_push_opcode_token2] = ACTIONS(94),
    [aux_sym_opcode_token1] = ACTIONS(94),
    [aux_sym_opcode_token2] = ACTIONS(94),
    [aux_sym_opcode_token3] = ACTIONS(94),
    [aux_sym_opcode_token4] = ACTIONS(94),
    [aux_sym_opcode_token5] = ACTIONS(94),
    [aux_sym_opcode_token6] = ACTIONS(94),
    [aux_sym_opcode_token7] = ACTIONS(94),
    [aux_sym_opcode_token8] = ACTIONS(94),
    [aux_sym_opcode_token9] = ACTIONS(94),
    [aux_sym_opcode_token10] = ACTIONS(94),
    [aux_sym_opcode_token11] = ACTIONS(94),
    [aux_sym_opcode_token12] = ACTIONS(94),
    [aux_sym_opcode_token13] = ACTIONS(94),
    [aux_sym_opcode_token14] = ACTIONS(94),
    [aux_sym_opcode_token15] = ACTIONS(94),
    [aux_sym_opcode_token16] = ACTIONS(94),
    [aux_sym_opcode_token17] = ACTIONS(94),
    [aux_sym_opcode_token18] = ACTIONS(94),
    [aux_sym_opcode_token19] = ACTIONS(94),
    [aux_sym_opcode_token20] = ACTIONS(94),
    [aux_sym_opcode_token21] = ACTIONS(94),
    [aux_sym_opcode_token22] = ACTIONS(94),
    [aux_sym_opcode_token23] = ACTIONS(94),
    [aux_sym_opcode_token24] = ACTIONS(94),
    [aux_sym_opcode_token25] = ACTIONS(94),
    [aux_sym_branch_opcode_token1] = ACTIONS(96),
    [aux_sym_branch_opcode_token2] = ACTIONS(96),
    [aux_sym_branch_opcode_token3] = ACTIONS(96),
    [aux_sym_branch_opcode_token4] = ACTIONS(96),
    [aux_sym_branch_opcode_token5] = ACTIONS(96),
    [aux_sym_branch_opcode_token6] = ACTIONS(96),
    [aux_sym_branch_opcode_token7] = ACTIONS(96),
    [aux_sym_branch_opcode_token8] = ACTIONS(96),
    [aux_sym_branch_opcode_token9] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_identifier] = ACTIONS(98),
    [aux_sym_ldm_opcode_token1] = ACTIONS(98),
    [aux_sym_ldm_opcode_token2] = ACTIONS(98),
    [aux_sym_load_opcode_token1] = ACTIONS(98),
    [aux_sym_load_opcode_token2] = ACTIONS(98),
    [sym_adr_opcode] = ACTIONS(98),
    [aux_sym_push_opcode_token1] = ACTIONS(98),
    [aux_sym_push_opcode_token2] = ACTIONS(98),
    [aux_sym_opcode_token1] = ACTIONS(98),
    [aux_sym_opcode_token2] = ACTIONS(98),
    [aux_sym_opcode_token3] = ACTIONS(98),
    [aux_sym_opcode_token4] = ACTIONS(98),
    [aux_sym_opcode_token5] = ACTIONS(98),
    [aux_sym_opcode_token6] = ACTIONS(98),
    [aux_sym_opcode_token7] = ACTIONS(98),
    [aux_sym_opcode_token8] = ACTIONS(98),
    [aux_sym_opcode_token9] = ACTIONS(98),
    [aux_sym_opcode_token10] = ACTIONS(98),
    [aux_sym_opcode_token11] = ACTIONS(98),
    [aux_sym_opcode_token12] = ACTIONS(98),
    [aux_sym_opcode_token13] = ACTIONS(98),
    [aux_sym_opcode_token14] = ACTIONS(98),
    [aux_sym_opcode_token15] = ACTIONS(98),
    [aux_sym_opcode_token16] = ACTIONS(98),
    [aux_sym_opcode_token17] = ACTIONS(98),
    [aux_sym_opcode_token18] = ACTIONS(98),
    [aux_sym_opcode_token19] = ACTIONS(98),
    [aux_sym_opcode_token20] = ACTIONS(98),
    [aux_sym_opcode_token21] = ACTIONS(98),
    [aux_sym_opcode_token22] = ACTIONS(98),
    [aux_sym_opcode_token23] = ACTIONS(98),
    [aux_sym_opcode_token24] = ACTIONS(98),
    [aux_sym_opcode_token25] = ACTIONS(98),
    [aux_sym_branch_opcode_token1] = ACTIONS(100),
    [aux_sym_branch_opcode_token2] = ACTIONS(100),
    [aux_sym_branch_opcode_token3] = ACTIONS(100),
    [aux_sym_branch_opcode_token4] = ACTIONS(100),
    [aux_sym_branch_opcode_token5] = ACTIONS(100),
    [aux_sym_branch_opcode_token6] = ACTIONS(100),
    [aux_sym_branch_opcode_token7] = ACTIONS(100),
    [aux_sym_branch_opcode_token8] = ACTIONS(100),
    [aux_sym_branch_opcode_token9] = ACTIONS(100),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_identifier] = ACTIONS(102),
    [aux_sym_ldm_opcode_token1] = ACTIONS(102),
    [aux_sym_ldm_opcode_token2] = ACTIONS(102),
    [aux_sym_load_opcode_token1] = ACTIONS(102),
    [aux_sym_load_opcode_token2] = ACTIONS(102),
    [sym_adr_opcode] = ACTIONS(102),
    [aux_sym_push_opcode_token1] = ACTIONS(102),
    [aux_sym_push_opcode_token2] = ACTIONS(102),
    [aux_sym_opcode_token1] = ACTIONS(102),
    [aux_sym_opcode_token2] = ACTIONS(102),
    [aux_sym_opcode_token3] = ACTIONS(102),
    [aux_sym_opcode_token4] = ACTIONS(102),
    [aux_sym_opcode_token5] = ACTIONS(102),
    [aux_sym_opcode_token6] = ACTIONS(102),
    [aux_sym_opcode_token7] = ACTIONS(102),
    [aux_sym_opcode_token8] = ACTIONS(102),
    [aux_sym_opcode_token9] = ACTIONS(102),
    [aux_sym_opcode_token10] = ACTIONS(102),
    [aux_sym_opcode_token11] = ACTIONS(102),
    [aux_sym_opcode_token12] = ACTIONS(102),
    [aux_sym_opcode_token13] = ACTIONS(102),
    [aux_sym_opcode_token14] = ACTIONS(102),
    [aux_sym_opcode_token15] = ACTIONS(102),
    [aux_sym_opcode_token16] = ACTIONS(102),
    [aux_sym_opcode_token17] = ACTIONS(102),
    [aux_sym_opcode_token18] = ACTIONS(102),
    [aux_sym_opcode_token19] = ACTIONS(102),
    [aux_sym_opcode_token20] = ACTIONS(102),
    [aux_sym_opcode_token21] = ACTIONS(102),
    [aux_sym_opcode_token22] = ACTIONS(102),
    [aux_sym_opcode_token23] = ACTIONS(102),
    [aux_sym_opcode_token24] = ACTIONS(102),
    [aux_sym_opcode_token25] = ACTIONS(102),
    [aux_sym_branch_opcode_token1] = ACTIONS(104),
    [aux_sym_branch_opcode_token2] = ACTIONS(104),
    [aux_sym_branch_opcode_token3] = ACTIONS(104),
    [aux_sym_branch_opcode_token4] = ACTIONS(104),
    [aux_sym_branch_opcode_token5] = ACTIONS(104),
    [aux_sym_branch_opcode_token6] = ACTIONS(104),
    [aux_sym_branch_opcode_token7] = ACTIONS(104),
    [aux_sym_branch_opcode_token8] = ACTIONS(104),
    [aux_sym_branch_opcode_token9] = ACTIONS(104),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_identifier] = ACTIONS(106),
    [aux_sym_ldm_opcode_token1] = ACTIONS(106),
    [aux_sym_ldm_opcode_token2] = ACTIONS(106),
    [aux_sym_load_opcode_token1] = ACTIONS(106),
    [aux_sym_load_opcode_token2] = ACTIONS(106),
    [sym_adr_opcode] = ACTIONS(106),
    [aux_sym_push_opcode_token1] = ACTIONS(106),
    [aux_sym_push_opcode_token2] = ACTIONS(106),
    [aux_sym_opcode_token1] = ACTIONS(106),
    [aux_sym_opcode_token2] = ACTIONS(106),
    [aux_sym_opcode_token3] = ACTIONS(106),
    [aux_sym_opcode_token4] = ACTIONS(106),
    [aux_sym_opcode_token5] = ACTIONS(106),
    [aux_sym_opcode_token6] = ACTIONS(106),
    [aux_sym_opcode_token7] = ACTIONS(106),
    [aux_sym_opcode_token8] = ACTIONS(106),
    [aux_sym_opcode_token9] = ACTIONS(106),
    [aux_sym_opcode_token10] = ACTIONS(106),
    [aux_sym_opcode_token11] = ACTIONS(106),
    [aux_sym_opcode_token12] = ACTIONS(106),
    [aux_sym_opcode_token13] = ACTIONS(106),
    [aux_sym_opcode_token14] = ACTIONS(106),
    [aux_sym_opcode_token15] = ACTIONS(106),
    [aux_sym_opcode_token16] = ACTIONS(106),
    [aux_sym_opcode_token17] = ACTIONS(106),
    [aux_sym_opcode_token18] = ACTIONS(106),
    [aux_sym_opcode_token19] = ACTIONS(106),
    [aux_sym_opcode_token20] = ACTIONS(106),
    [aux_sym_opcode_token21] = ACTIONS(106),
    [aux_sym_opcode_token22] = ACTIONS(106),
    [aux_sym_opcode_token23] = ACTIONS(106),
    [aux_sym_opcode_token24] = ACTIONS(106),
    [aux_sym_opcode_token25] = ACTIONS(106),
    [aux_sym_branch_opcode_token1] = ACTIONS(108),
    [aux_sym_branch_opcode_token2] = ACTIONS(108),
    [aux_sym_branch_opcode_token3] = ACTIONS(108),
    [aux_sym_branch_opcode_token4] = ACTIONS(108),
    [aux_sym_branch_opcode_token5] = ACTIONS(108),
    [aux_sym_branch_opcode_token6] = ACTIONS(108),
    [aux_sym_branch_opcode_token7] = ACTIONS(108),
    [aux_sym_branch_opcode_token8] = ACTIONS(108),
    [aux_sym_branch_opcode_token9] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = ACTIONS(110),
    [aux_sym_ldm_opcode_token1] = ACTIONS(110),
    [aux_sym_ldm_opcode_token2] = ACTIONS(110),
    [aux_sym_load_opcode_token1] = ACTIONS(110),
    [aux_sym_load_opcode_token2] = ACTIONS(110),
    [sym_adr_opcode] = ACTIONS(110),
    [aux_sym_push_opcode_token1] = ACTIONS(110),
    [aux_sym_push_opcode_token2] = ACTIONS(110),
    [aux_sym_opcode_token1] = ACTIONS(110),
    [aux_sym_opcode_token2] = ACTIONS(110),
    [aux_sym_opcode_token3] = ACTIONS(110),
    [aux_sym_opcode_token4] = ACTIONS(110),
    [aux_sym_opcode_token5] = ACTIONS(110),
    [aux_sym_opcode_token6] = ACTIONS(110),
    [aux_sym_opcode_token7] = ACTIONS(110),
    [aux_sym_opcode_token8] = ACTIONS(110),
    [aux_sym_opcode_token9] = ACTIONS(110),
    [aux_sym_opcode_token10] = ACTIONS(110),
    [aux_sym_opcode_token11] = ACTIONS(110),
    [aux_sym_opcode_token12] = ACTIONS(110),
    [aux_sym_opcode_token13] = ACTIONS(110),
    [aux_sym_opcode_token14] = ACTIONS(110),
    [aux_sym_opcode_token15] = ACTIONS(110),
    [aux_sym_opcode_token16] = ACTIONS(110),
    [aux_sym_opcode_token17] = ACTIONS(110),
    [aux_sym_opcode_token18] = ACTIONS(110),
    [aux_sym_opcode_token19] = ACTIONS(110),
    [aux_sym_opcode_token20] = ACTIONS(110),
    [aux_sym_opcode_token21] = ACTIONS(110),
    [aux_sym_opcode_token22] = ACTIONS(110),
    [aux_sym_opcode_token23] = ACTIONS(110),
    [aux_sym_opcode_token24] = ACTIONS(110),
    [aux_sym_opcode_token25] = ACTIONS(110),
    [aux_sym_branch_opcode_token1] = ACTIONS(112),
    [aux_sym_branch_opcode_token2] = ACTIONS(112),
    [aux_sym_branch_opcode_token3] = ACTIONS(112),
    [aux_sym_branch_opcode_token4] = ACTIONS(112),
    [aux_sym_branch_opcode_token5] = ACTIONS(112),
    [aux_sym_branch_opcode_token6] = ACTIONS(112),
    [aux_sym_branch_opcode_token7] = ACTIONS(112),
    [aux_sym_branch_opcode_token8] = ACTIONS(112),
    [aux_sym_branch_opcode_token9] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_identifier] = ACTIONS(114),
    [aux_sym_ldm_opcode_token1] = ACTIONS(114),
    [aux_sym_ldm_opcode_token2] = ACTIONS(114),
    [aux_sym_load_opcode_token1] = ACTIONS(114),
    [aux_sym_load_opcode_token2] = ACTIONS(114),
    [sym_adr_opcode] = ACTIONS(114),
    [aux_sym_push_opcode_token1] = ACTIONS(114),
    [aux_sym_push_opcode_token2] = ACTIONS(114),
    [aux_sym_opcode_token1] = ACTIONS(114),
    [aux_sym_opcode_token2] = ACTIONS(114),
    [aux_sym_opcode_token3] = ACTIONS(114),
    [aux_sym_opcode_token4] = ACTIONS(114),
    [aux_sym_opcode_token5] = ACTIONS(114),
    [aux_sym_opcode_token6] = ACTIONS(114),
    [aux_sym_opcode_token7] = ACTIONS(114),
    [aux_sym_opcode_token8] = ACTIONS(114),
    [aux_sym_opcode_token9] = ACTIONS(114),
    [aux_sym_opcode_token10] = ACTIONS(114),
    [aux_sym_opcode_token11] = ACTIONS(114),
    [aux_sym_opcode_token12] = ACTIONS(114),
    [aux_sym_opcode_token13] = ACTIONS(114),
    [aux_sym_opcode_token14] = ACTIONS(114),
    [aux_sym_opcode_token15] = ACTIONS(114),
    [aux_sym_opcode_token16] = ACTIONS(114),
    [aux_sym_opcode_token17] = ACTIONS(114),
    [aux_sym_opcode_token18] = ACTIONS(114),
    [aux_sym_opcode_token19] = ACTIONS(114),
    [aux_sym_opcode_token20] = ACTIONS(114),
    [aux_sym_opcode_token21] = ACTIONS(114),
    [aux_sym_opcode_token22] = ACTIONS(114),
    [aux_sym_opcode_token23] = ACTIONS(114),
    [aux_sym_opcode_token24] = ACTIONS(114),
    [aux_sym_opcode_token25] = ACTIONS(114),
    [aux_sym_branch_opcode_token1] = ACTIONS(116),
    [aux_sym_branch_opcode_token2] = ACTIONS(116),
    [aux_sym_branch_opcode_token3] = ACTIONS(116),
    [aux_sym_branch_opcode_token4] = ACTIONS(116),
    [aux_sym_branch_opcode_token5] = ACTIONS(116),
    [aux_sym_branch_opcode_token6] = ACTIONS(116),
    [aux_sym_branch_opcode_token7] = ACTIONS(116),
    [aux_sym_branch_opcode_token8] = ACTIONS(116),
    [aux_sym_branch_opcode_token9] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_identifier] = ACTIONS(118),
    [aux_sym_ldm_opcode_token1] = ACTIONS(118),
    [aux_sym_ldm_opcode_token2] = ACTIONS(118),
    [aux_sym_load_opcode_token1] = ACTIONS(118),
    [aux_sym_load_opcode_token2] = ACTIONS(118),
    [sym_adr_opcode] = ACTIONS(118),
    [aux_sym_push_opcode_token1] = ACTIONS(118),
    [aux_sym_push_opcode_token2] = ACTIONS(118),
    [aux_sym_opcode_token1] = ACTIONS(118),
    [aux_sym_opcode_token2] = ACTIONS(118),
    [aux_sym_opcode_token3] = ACTIONS(118),
    [aux_sym_opcode_token4] = ACTIONS(118),
    [aux_sym_opcode_token5] = ACTIONS(118),
    [aux_sym_opcode_token6] = ACTIONS(118),
    [aux_sym_opcode_token7] = ACTIONS(118),
    [aux_sym_opcode_token8] = ACTIONS(118),
    [aux_sym_opcode_token9] = ACTIONS(118),
    [aux_sym_opcode_token10] = ACTIONS(118),
    [aux_sym_opcode_token11] = ACTIONS(118),
    [aux_sym_opcode_token12] = ACTIONS(118),
    [aux_sym_opcode_token13] = ACTIONS(118),
    [aux_sym_opcode_token14] = ACTIONS(118),
    [aux_sym_opcode_token15] = ACTIONS(118),
    [aux_sym_opcode_token16] = ACTIONS(118),
    [aux_sym_opcode_token17] = ACTIONS(118),
    [aux_sym_opcode_token18] = ACTIONS(118),
    [aux_sym_opcode_token19] = ACTIONS(118),
    [aux_sym_opcode_token20] = ACTIONS(118),
    [aux_sym_opcode_token21] = ACTIONS(118),
    [aux_sym_opcode_token22] = ACTIONS(118),
    [aux_sym_opcode_token23] = ACTIONS(118),
    [aux_sym_opcode_token24] = ACTIONS(118),
    [aux_sym_opcode_token25] = ACTIONS(118),
    [aux_sym_branch_opcode_token1] = ACTIONS(120),
    [aux_sym_branch_opcode_token2] = ACTIONS(120),
    [aux_sym_branch_opcode_token3] = ACTIONS(120),
    [aux_sym_branch_opcode_token4] = ACTIONS(120),
    [aux_sym_branch_opcode_token5] = ACTIONS(120),
    [aux_sym_branch_opcode_token6] = ACTIONS(120),
    [aux_sym_branch_opcode_token7] = ACTIONS(120),
    [aux_sym_branch_opcode_token8] = ACTIONS(120),
    [aux_sym_branch_opcode_token9] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_identifier] = ACTIONS(122),
    [aux_sym_ldm_opcode_token1] = ACTIONS(122),
    [aux_sym_ldm_opcode_token2] = ACTIONS(122),
    [aux_sym_load_opcode_token1] = ACTIONS(122),
    [aux_sym_load_opcode_token2] = ACTIONS(122),
    [sym_adr_opcode] = ACTIONS(122),
    [aux_sym_push_opcode_token1] = ACTIONS(122),
    [aux_sym_push_opcode_token2] = ACTIONS(122),
    [aux_sym_opcode_token1] = ACTIONS(122),
    [aux_sym_opcode_token2] = ACTIONS(122),
    [aux_sym_opcode_token3] = ACTIONS(122),
    [aux_sym_opcode_token4] = ACTIONS(122),
    [aux_sym_opcode_token5] = ACTIONS(122),
    [aux_sym_opcode_token6] = ACTIONS(122),
    [aux_sym_opcode_token7] = ACTIONS(122),
    [aux_sym_opcode_token8] = ACTIONS(122),
    [aux_sym_opcode_token9] = ACTIONS(122),
    [aux_sym_opcode_token10] = ACTIONS(122),
    [aux_sym_opcode_token11] = ACTIONS(122),
    [aux_sym_opcode_token12] = ACTIONS(122),
    [aux_sym_opcode_token13] = ACTIONS(122),
    [aux_sym_opcode_token14] = ACTIONS(122),
    [aux_sym_opcode_token15] = ACTIONS(122),
    [aux_sym_opcode_token16] = ACTIONS(122),
    [aux_sym_opcode_token17] = ACTIONS(122),
    [aux_sym_opcode_token18] = ACTIONS(122),
    [aux_sym_opcode_token19] = ACTIONS(122),
    [aux_sym_opcode_token20] = ACTIONS(122),
    [aux_sym_opcode_token21] = ACTIONS(122),
    [aux_sym_opcode_token22] = ACTIONS(122),
    [aux_sym_opcode_token23] = ACTIONS(122),
    [aux_sym_opcode_token24] = ACTIONS(122),
    [aux_sym_opcode_token25] = ACTIONS(122),
    [aux_sym_branch_opcode_token1] = ACTIONS(124),
    [aux_sym_branch_opcode_token2] = ACTIONS(124),
    [aux_sym_branch_opcode_token3] = ACTIONS(124),
    [aux_sym_branch_opcode_token4] = ACTIONS(124),
    [aux_sym_branch_opcode_token5] = ACTIONS(124),
    [aux_sym_branch_opcode_token6] = ACTIONS(124),
    [aux_sym_branch_opcode_token7] = ACTIONS(124),
    [aux_sym_branch_opcode_token8] = ACTIONS(124),
    [aux_sym_branch_opcode_token9] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_identifier] = ACTIONS(126),
    [aux_sym_ldm_opcode_token1] = ACTIONS(126),
    [aux_sym_ldm_opcode_token2] = ACTIONS(126),
    [aux_sym_load_opcode_token1] = ACTIONS(126),
    [aux_sym_load_opcode_token2] = ACTIONS(126),
    [sym_adr_opcode] = ACTIONS(126),
    [aux_sym_push_opcode_token1] = ACTIONS(126),
    [aux_sym_push_opcode_token2] = ACTIONS(126),
    [aux_sym_opcode_token1] = ACTIONS(126),
    [aux_sym_opcode_token2] = ACTIONS(126),
    [aux_sym_opcode_token3] = ACTIONS(126),
    [aux_sym_opcode_token4] = ACTIONS(126),
    [aux_sym_opcode_token5] = ACTIONS(126),
    [aux_sym_opcode_token6] = ACTIONS(126),
    [aux_sym_opcode_token7] = ACTIONS(126),
    [aux_sym_opcode_token8] = ACTIONS(126),
    [aux_sym_opcode_token9] = ACTIONS(126),
    [aux_sym_opcode_token10] = ACTIONS(126),
    [aux_sym_opcode_token11] = ACTIONS(126),
    [aux_sym_opcode_token12] = ACTIONS(126),
    [aux_sym_opcode_token13] = ACTIONS(126),
    [aux_sym_opcode_token14] = ACTIONS(126),
    [aux_sym_opcode_token15] = ACTIONS(126),
    [aux_sym_opcode_token16] = ACTIONS(126),
    [aux_sym_opcode_token17] = ACTIONS(126),
    [aux_sym_opcode_token18] = ACTIONS(126),
    [aux_sym_opcode_token19] = ACTIONS(126),
    [aux_sym_opcode_token20] = ACTIONS(126),
    [aux_sym_opcode_token21] = ACTIONS(126),
    [aux_sym_opcode_token22] = ACTIONS(126),
    [aux_sym_opcode_token23] = ACTIONS(126),
    [aux_sym_opcode_token24] = ACTIONS(126),
    [aux_sym_opcode_token25] = ACTIONS(126),
    [aux_sym_branch_opcode_token1] = ACTIONS(128),
    [aux_sym_branch_opcode_token2] = ACTIONS(128),
    [aux_sym_branch_opcode_token3] = ACTIONS(128),
    [aux_sym_branch_opcode_token4] = ACTIONS(128),
    [aux_sym_branch_opcode_token5] = ACTIONS(128),
    [aux_sym_branch_opcode_token6] = ACTIONS(128),
    [aux_sym_branch_opcode_token7] = ACTIONS(128),
    [aux_sym_branch_opcode_token8] = ACTIONS(128),
    [aux_sym_branch_opcode_token9] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_identifier] = ACTIONS(130),
    [aux_sym_ldm_opcode_token1] = ACTIONS(130),
    [aux_sym_ldm_opcode_token2] = ACTIONS(130),
    [aux_sym_load_opcode_token1] = ACTIONS(130),
    [aux_sym_load_opcode_token2] = ACTIONS(130),
    [sym_adr_opcode] = ACTIONS(130),
    [aux_sym_push_opcode_token1] = ACTIONS(130),
    [aux_sym_push_opcode_token2] = ACTIONS(130),
    [aux_sym_opcode_token1] = ACTIONS(130),
    [aux_sym_opcode_token2] = ACTIONS(130),
    [aux_sym_opcode_token3] = ACTIONS(130),
    [aux_sym_opcode_token4] = ACTIONS(130),
    [aux_sym_opcode_token5] = ACTIONS(130),
    [aux_sym_opcode_token6] = ACTIONS(130),
    [aux_sym_opcode_token7] = ACTIONS(130),
    [aux_sym_opcode_token8] = ACTIONS(130),
    [aux_sym_opcode_token9] = ACTIONS(130),
    [aux_sym_opcode_token10] = ACTIONS(130),
    [aux_sym_opcode_token11] = ACTIONS(130),
    [aux_sym_opcode_token12] = ACTIONS(130),
    [aux_sym_opcode_token13] = ACTIONS(130),
    [aux_sym_opcode_token14] = ACTIONS(130),
    [aux_sym_opcode_token15] = ACTIONS(130),
    [aux_sym_opcode_token16] = ACTIONS(130),
    [aux_sym_opcode_token17] = ACTIONS(130),
    [aux_sym_opcode_token18] = ACTIONS(130),
    [aux_sym_opcode_token19] = ACTIONS(130),
    [aux_sym_opcode_token20] = ACTIONS(130),
    [aux_sym_opcode_token21] = ACTIONS(130),
    [aux_sym_opcode_token22] = ACTIONS(130),
    [aux_sym_opcode_token23] = ACTIONS(130),
    [aux_sym_opcode_token24] = ACTIONS(130),
    [aux_sym_opcode_token25] = ACTIONS(130),
    [aux_sym_branch_opcode_token1] = ACTIONS(132),
    [aux_sym_branch_opcode_token2] = ACTIONS(132),
    [aux_sym_branch_opcode_token3] = ACTIONS(132),
    [aux_sym_branch_opcode_token4] = ACTIONS(132),
    [aux_sym_branch_opcode_token5] = ACTIONS(132),
    [aux_sym_branch_opcode_token6] = ACTIONS(132),
    [aux_sym_branch_opcode_token7] = ACTIONS(132),
    [aux_sym_branch_opcode_token8] = ACTIONS(132),
    [aux_sym_branch_opcode_token9] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_identifier] = ACTIONS(134),
    [aux_sym_ldm_opcode_token1] = ACTIONS(134),
    [aux_sym_ldm_opcode_token2] = ACTIONS(134),
    [aux_sym_load_opcode_token1] = ACTIONS(134),
    [aux_sym_load_opcode_token2] = ACTIONS(134),
    [sym_adr_opcode] = ACTIONS(134),
    [aux_sym_push_opcode_token1] = ACTIONS(134),
    [aux_sym_push_opcode_token2] = ACTIONS(134),
    [aux_sym_opcode_token1] = ACTIONS(134),
    [aux_sym_opcode_token2] = ACTIONS(134),
    [aux_sym_opcode_token3] = ACTIONS(134),
    [aux_sym_opcode_token4] = ACTIONS(134),
    [aux_sym_opcode_token5] = ACTIONS(134),
    [aux_sym_opcode_token6] = ACTIONS(134),
    [aux_sym_opcode_token7] = ACTIONS(134),
    [aux_sym_opcode_token8] = ACTIONS(134),
    [aux_sym_opcode_token9] = ACTIONS(134),
    [aux_sym_opcode_token10] = ACTIONS(134),
    [aux_sym_opcode_token11] = ACTIONS(134),
    [aux_sym_opcode_token12] = ACTIONS(134),
    [aux_sym_opcode_token13] = ACTIONS(134),
    [aux_sym_opcode_token14] = ACTIONS(134),
    [aux_sym_opcode_token15] = ACTIONS(134),
    [aux_sym_opcode_token16] = ACTIONS(134),
    [aux_sym_opcode_token17] = ACTIONS(134),
    [aux_sym_opcode_token18] = ACTIONS(134),
    [aux_sym_opcode_token19] = ACTIONS(134),
    [aux_sym_opcode_token20] = ACTIONS(134),
    [aux_sym_opcode_token21] = ACTIONS(134),
    [aux_sym_opcode_token22] = ACTIONS(134),
    [aux_sym_opcode_token23] = ACTIONS(134),
    [aux_sym_opcode_token24] = ACTIONS(134),
    [aux_sym_opcode_token25] = ACTIONS(134),
    [aux_sym_branch_opcode_token1] = ACTIONS(136),
    [aux_sym_branch_opcode_token2] = ACTIONS(136),
    [aux_sym_branch_opcode_token3] = ACTIONS(136),
    [aux_sym_branch_opcode_token4] = ACTIONS(136),
    [aux_sym_branch_opcode_token5] = ACTIONS(136),
    [aux_sym_branch_opcode_token6] = ACTIONS(136),
    [aux_sym_branch_opcode_token7] = ACTIONS(136),
    [aux_sym_branch_opcode_token8] = ACTIONS(136),
    [aux_sym_branch_opcode_token9] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_identifier] = ACTIONS(138),
    [aux_sym_ldm_opcode_token1] = ACTIONS(138),
    [aux_sym_ldm_opcode_token2] = ACTIONS(138),
    [aux_sym_load_opcode_token1] = ACTIONS(138),
    [aux_sym_load_opcode_token2] = ACTIONS(138),
    [sym_adr_opcode] = ACTIONS(138),
    [aux_sym_push_opcode_token1] = ACTIONS(138),
    [aux_sym_push_opcode_token2] = ACTIONS(138),
    [aux_sym_opcode_token1] = ACTIONS(138),
    [aux_sym_opcode_token2] = ACTIONS(138),
    [aux_sym_opcode_token3] = ACTIONS(138),
    [aux_sym_opcode_token4] = ACTIONS(138),
    [aux_sym_opcode_token5] = ACTIONS(138),
    [aux_sym_opcode_token6] = ACTIONS(138),
    [aux_sym_opcode_token7] = ACTIONS(138),
    [aux_sym_opcode_token8] = ACTIONS(138),
    [aux_sym_opcode_token9] = ACTIONS(138),
    [aux_sym_opcode_token10] = ACTIONS(138),
    [aux_sym_opcode_token11] = ACTIONS(138),
    [aux_sym_opcode_token12] = ACTIONS(138),
    [aux_sym_opcode_token13] = ACTIONS(138),
    [aux_sym_opcode_token14] = ACTIONS(138),
    [aux_sym_opcode_token15] = ACTIONS(138),
    [aux_sym_opcode_token16] = ACTIONS(138),
    [aux_sym_opcode_token17] = ACTIONS(138),
    [aux_sym_opcode_token18] = ACTIONS(138),
    [aux_sym_opcode_token19] = ACTIONS(138),
    [aux_sym_opcode_token20] = ACTIONS(138),
    [aux_sym_opcode_token21] = ACTIONS(138),
    [aux_sym_opcode_token22] = ACTIONS(138),
    [aux_sym_opcode_token23] = ACTIONS(138),
    [aux_sym_opcode_token24] = ACTIONS(138),
    [aux_sym_opcode_token25] = ACTIONS(138),
    [aux_sym_branch_opcode_token1] = ACTIONS(140),
    [aux_sym_branch_opcode_token2] = ACTIONS(140),
    [aux_sym_branch_opcode_token3] = ACTIONS(140),
    [aux_sym_branch_opcode_token4] = ACTIONS(140),
    [aux_sym_branch_opcode_token5] = ACTIONS(140),
    [aux_sym_branch_opcode_token6] = ACTIONS(140),
    [aux_sym_branch_opcode_token7] = ACTIONS(140),
    [aux_sym_branch_opcode_token8] = ACTIONS(140),
    [aux_sym_branch_opcode_token9] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_identifier] = ACTIONS(142),
    [aux_sym_ldm_opcode_token1] = ACTIONS(142),
    [aux_sym_ldm_opcode_token2] = ACTIONS(142),
    [aux_sym_load_opcode_token1] = ACTIONS(142),
    [aux_sym_load_opcode_token2] = ACTIONS(142),
    [sym_adr_opcode] = ACTIONS(142),
    [aux_sym_push_opcode_token1] = ACTIONS(142),
    [aux_sym_push_opcode_token2] = ACTIONS(142),
    [aux_sym_opcode_token1] = ACTIONS(142),
    [aux_sym_opcode_token2] = ACTIONS(142),
    [aux_sym_opcode_token3] = ACTIONS(142),
    [aux_sym_opcode_token4] = ACTIONS(142),
    [aux_sym_opcode_token5] = ACTIONS(142),
    [aux_sym_opcode_token6] = ACTIONS(142),
    [aux_sym_opcode_token7] = ACTIONS(142),
    [aux_sym_opcode_token8] = ACTIONS(142),
    [aux_sym_opcode_token9] = ACTIONS(142),
    [aux_sym_opcode_token10] = ACTIONS(142),
    [aux_sym_opcode_token11] = ACTIONS(142),
    [aux_sym_opcode_token12] = ACTIONS(142),
    [aux_sym_opcode_token13] = ACTIONS(142),
    [aux_sym_opcode_token14] = ACTIONS(142),
    [aux_sym_opcode_token15] = ACTIONS(142),
    [aux_sym_opcode_token16] = ACTIONS(142),
    [aux_sym_opcode_token17] = ACTIONS(142),
    [aux_sym_opcode_token18] = ACTIONS(142),
    [aux_sym_opcode_token19] = ACTIONS(142),
    [aux_sym_opcode_token20] = ACTIONS(142),
    [aux_sym_opcode_token21] = ACTIONS(142),
    [aux_sym_opcode_token22] = ACTIONS(142),
    [aux_sym_opcode_token23] = ACTIONS(142),
    [aux_sym_opcode_token24] = ACTIONS(142),
    [aux_sym_opcode_token25] = ACTIONS(142),
    [aux_sym_branch_opcode_token1] = ACTIONS(144),
    [aux_sym_branch_opcode_token2] = ACTIONS(144),
    [aux_sym_branch_opcode_token3] = ACTIONS(144),
    [aux_sym_branch_opcode_token4] = ACTIONS(144),
    [aux_sym_branch_opcode_token5] = ACTIONS(144),
    [aux_sym_branch_opcode_token6] = ACTIONS(144),
    [aux_sym_branch_opcode_token7] = ACTIONS(144),
    [aux_sym_branch_opcode_token8] = ACTIONS(144),
    [aux_sym_branch_opcode_token9] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_identifier] = ACTIONS(146),
    [aux_sym_ldm_opcode_token1] = ACTIONS(146),
    [aux_sym_ldm_opcode_token2] = ACTIONS(146),
    [aux_sym_load_opcode_token1] = ACTIONS(146),
    [aux_sym_load_opcode_token2] = ACTIONS(146),
    [sym_adr_opcode] = ACTIONS(146),
    [aux_sym_push_opcode_token1] = ACTIONS(146),
    [aux_sym_push_opcode_token2] = ACTIONS(146),
    [aux_sym_opcode_token1] = ACTIONS(146),
    [aux_sym_opcode_token2] = ACTIONS(146),
    [aux_sym_opcode_token3] = ACTIONS(146),
    [aux_sym_opcode_token4] = ACTIONS(146),
    [aux_sym_opcode_token5] = ACTIONS(146),
    [aux_sym_opcode_token6] = ACTIONS(146),
    [aux_sym_opcode_token7] = ACTIONS(146),
    [aux_sym_opcode_token8] = ACTIONS(146),
    [aux_sym_opcode_token9] = ACTIONS(146),
    [aux_sym_opcode_token10] = ACTIONS(146),
    [aux_sym_opcode_token11] = ACTIONS(146),
    [aux_sym_opcode_token12] = ACTIONS(146),
    [aux_sym_opcode_token13] = ACTIONS(146),
    [aux_sym_opcode_token14] = ACTIONS(146),
    [aux_sym_opcode_token15] = ACTIONS(146),
    [aux_sym_opcode_token16] = ACTIONS(146),
    [aux_sym_opcode_token17] = ACTIONS(146),
    [aux_sym_opcode_token18] = ACTIONS(146),
    [aux_sym_opcode_token19] = ACTIONS(146),
    [aux_sym_opcode_token20] = ACTIONS(146),
    [aux_sym_opcode_token21] = ACTIONS(146),
    [aux_sym_opcode_token22] = ACTIONS(146),
    [aux_sym_opcode_token23] = ACTIONS(146),
    [aux_sym_opcode_token24] = ACTIONS(146),
    [aux_sym_opcode_token25] = ACTIONS(146),
    [aux_sym_branch_opcode_token1] = ACTIONS(148),
    [aux_sym_branch_opcode_token2] = ACTIONS(148),
    [aux_sym_branch_opcode_token3] = ACTIONS(148),
    [aux_sym_branch_opcode_token4] = ACTIONS(148),
    [aux_sym_branch_opcode_token5] = ACTIONS(148),
    [aux_sym_branch_opcode_token6] = ACTIONS(148),
    [aux_sym_branch_opcode_token7] = ACTIONS(148),
    [aux_sym_branch_opcode_token8] = ACTIONS(148),
    [aux_sym_branch_opcode_token9] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_identifier] = ACTIONS(150),
    [aux_sym_ldm_opcode_token1] = ACTIONS(150),
    [aux_sym_ldm_opcode_token2] = ACTIONS(150),
    [aux_sym_load_opcode_token1] = ACTIONS(150),
    [aux_sym_load_opcode_token2] = ACTIONS(150),
    [sym_adr_opcode] = ACTIONS(150),
    [aux_sym_push_opcode_token1] = ACTIONS(150),
    [aux_sym_push_opcode_token2] = ACTIONS(150),
    [aux_sym_opcode_token1] = ACTIONS(150),
    [aux_sym_opcode_token2] = ACTIONS(150),
    [aux_sym_opcode_token3] = ACTIONS(150),
    [aux_sym_opcode_token4] = ACTIONS(150),
    [aux_sym_opcode_token5] = ACTIONS(150),
    [aux_sym_opcode_token6] = ACTIONS(150),
    [aux_sym_opcode_token7] = ACTIONS(150),
    [aux_sym_opcode_token8] = ACTIONS(150),
    [aux_sym_opcode_token9] = ACTIONS(150),
    [aux_sym_opcode_token10] = ACTIONS(150),
    [aux_sym_opcode_token11] = ACTIONS(150),
    [aux_sym_opcode_token12] = ACTIONS(150),
    [aux_sym_opcode_token13] = ACTIONS(150),
    [aux_sym_opcode_token14] = ACTIONS(150),
    [aux_sym_opcode_token15] = ACTIONS(150),
    [aux_sym_opcode_token16] = ACTIONS(150),
    [aux_sym_opcode_token17] = ACTIONS(150),
    [aux_sym_opcode_token18] = ACTIONS(150),
    [aux_sym_opcode_token19] = ACTIONS(150),
    [aux_sym_opcode_token20] = ACTIONS(150),
    [aux_sym_opcode_token21] = ACTIONS(150),
    [aux_sym_opcode_token22] = ACTIONS(150),
    [aux_sym_opcode_token23] = ACTIONS(150),
    [aux_sym_opcode_token24] = ACTIONS(150),
    [aux_sym_opcode_token25] = ACTIONS(150),
    [aux_sym_branch_opcode_token1] = ACTIONS(152),
    [aux_sym_branch_opcode_token2] = ACTIONS(152),
    [aux_sym_branch_opcode_token3] = ACTIONS(152),
    [aux_sym_branch_opcode_token4] = ACTIONS(152),
    [aux_sym_branch_opcode_token5] = ACTIONS(152),
    [aux_sym_branch_opcode_token6] = ACTIONS(152),
    [aux_sym_branch_opcode_token7] = ACTIONS(152),
    [aux_sym_branch_opcode_token8] = ACTIONS(152),
    [aux_sym_branch_opcode_token9] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_identifier] = ACTIONS(154),
    [aux_sym_ldm_opcode_token1] = ACTIONS(154),
    [aux_sym_ldm_opcode_token2] = ACTIONS(154),
    [aux_sym_load_opcode_token1] = ACTIONS(154),
    [aux_sym_load_opcode_token2] = ACTIONS(154),
    [sym_adr_opcode] = ACTIONS(154),
    [aux_sym_push_opcode_token1] = ACTIONS(154),
    [aux_sym_push_opcode_token2] = ACTIONS(154),
    [aux_sym_opcode_token1] = ACTIONS(154),
    [aux_sym_opcode_token2] = ACTIONS(154),
    [aux_sym_opcode_token3] = ACTIONS(154),
    [aux_sym_opcode_token4] = ACTIONS(154),
    [aux_sym_opcode_token5] = ACTIONS(154),
    [aux_sym_opcode_token6] = ACTIONS(154),
    [aux_sym_opcode_token7] = ACTIONS(154),
    [aux_sym_opcode_token8] = ACTIONS(154),
    [aux_sym_opcode_token9] = ACTIONS(154),
    [aux_sym_opcode_token10] = ACTIONS(154),
    [aux_sym_opcode_token11] = ACTIONS(154),
    [aux_sym_opcode_token12] = ACTIONS(154),
    [aux_sym_opcode_token13] = ACTIONS(154),
    [aux_sym_opcode_token14] = ACTIONS(154),
    [aux_sym_opcode_token15] = ACTIONS(154),
    [aux_sym_opcode_token16] = ACTIONS(154),
    [aux_sym_opcode_token17] = ACTIONS(154),
    [aux_sym_opcode_token18] = ACTIONS(154),
    [aux_sym_opcode_token19] = ACTIONS(154),
    [aux_sym_opcode_token20] = ACTIONS(154),
    [aux_sym_opcode_token21] = ACTIONS(154),
    [aux_sym_opcode_token22] = ACTIONS(154),
    [aux_sym_opcode_token23] = ACTIONS(154),
    [aux_sym_opcode_token24] = ACTIONS(154),
    [aux_sym_opcode_token25] = ACTIONS(154),
    [aux_sym_branch_opcode_token1] = ACTIONS(156),
    [aux_sym_branch_opcode_token2] = ACTIONS(156),
    [aux_sym_branch_opcode_token3] = ACTIONS(156),
    [aux_sym_branch_opcode_token4] = ACTIONS(156),
    [aux_sym_branch_opcode_token5] = ACTIONS(156),
    [aux_sym_branch_opcode_token6] = ACTIONS(156),
    [aux_sym_branch_opcode_token7] = ACTIONS(156),
    [aux_sym_branch_opcode_token8] = ACTIONS(156),
    [aux_sym_branch_opcode_token9] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_identifier] = ACTIONS(158),
    [aux_sym_ldm_opcode_token1] = ACTIONS(158),
    [aux_sym_ldm_opcode_token2] = ACTIONS(158),
    [aux_sym_load_opcode_token1] = ACTIONS(158),
    [aux_sym_load_opcode_token2] = ACTIONS(158),
    [sym_adr_opcode] = ACTIONS(158),
    [aux_sym_push_opcode_token1] = ACTIONS(158),
    [aux_sym_push_opcode_token2] = ACTIONS(158),
    [aux_sym_opcode_token1] = ACTIONS(158),
    [aux_sym_opcode_token2] = ACTIONS(158),
    [aux_sym_opcode_token3] = ACTIONS(158),
    [aux_sym_opcode_token4] = ACTIONS(158),
    [aux_sym_opcode_token5] = ACTIONS(158),
    [aux_sym_opcode_token6] = ACTIONS(158),
    [aux_sym_opcode_token7] = ACTIONS(158),
    [aux_sym_opcode_token8] = ACTIONS(158),
    [aux_sym_opcode_token9] = ACTIONS(158),
    [aux_sym_opcode_token10] = ACTIONS(158),
    [aux_sym_opcode_token11] = ACTIONS(158),
    [aux_sym_opcode_token12] = ACTIONS(158),
    [aux_sym_opcode_token13] = ACTIONS(158),
    [aux_sym_opcode_token14] = ACTIONS(158),
    [aux_sym_opcode_token15] = ACTIONS(158),
    [aux_sym_opcode_token16] = ACTIONS(158),
    [aux_sym_opcode_token17] = ACTIONS(158),
    [aux_sym_opcode_token18] = ACTIONS(158),
    [aux_sym_opcode_token19] = ACTIONS(158),
    [aux_sym_opcode_token20] = ACTIONS(158),
    [aux_sym_opcode_token21] = ACTIONS(158),
    [aux_sym_opcode_token22] = ACTIONS(158),
    [aux_sym_opcode_token23] = ACTIONS(158),
    [aux_sym_opcode_token24] = ACTIONS(158),
    [aux_sym_opcode_token25] = ACTIONS(158),
    [aux_sym_branch_opcode_token1] = ACTIONS(160),
    [aux_sym_branch_opcode_token2] = ACTIONS(160),
    [aux_sym_branch_opcode_token3] = ACTIONS(160),
    [aux_sym_branch_opcode_token4] = ACTIONS(160),
    [aux_sym_branch_opcode_token5] = ACTIONS(160),
    [aux_sym_branch_opcode_token6] = ACTIONS(160),
    [aux_sym_branch_opcode_token7] = ACTIONS(160),
    [aux_sym_branch_opcode_token8] = ACTIONS(160),
    [aux_sym_branch_opcode_token9] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_identifier] = ACTIONS(162),
    [aux_sym_ldm_opcode_token1] = ACTIONS(162),
    [aux_sym_ldm_opcode_token2] = ACTIONS(162),
    [aux_sym_load_opcode_token1] = ACTIONS(162),
    [aux_sym_load_opcode_token2] = ACTIONS(162),
    [sym_adr_opcode] = ACTIONS(162),
    [aux_sym_push_opcode_token1] = ACTIONS(162),
    [aux_sym_push_opcode_token2] = ACTIONS(162),
    [aux_sym_opcode_token1] = ACTIONS(162),
    [aux_sym_opcode_token2] = ACTIONS(162),
    [aux_sym_opcode_token3] = ACTIONS(162),
    [aux_sym_opcode_token4] = ACTIONS(162),
    [aux_sym_opcode_token5] = ACTIONS(162),
    [aux_sym_opcode_token6] = ACTIONS(162),
    [aux_sym_opcode_token7] = ACTIONS(162),
    [aux_sym_opcode_token8] = ACTIONS(162),
    [aux_sym_opcode_token9] = ACTIONS(162),
    [aux_sym_opcode_token10] = ACTIONS(162),
    [aux_sym_opcode_token11] = ACTIONS(162),
    [aux_sym_opcode_token12] = ACTIONS(162),
    [aux_sym_opcode_token13] = ACTIONS(162),
    [aux_sym_opcode_token14] = ACTIONS(162),
    [aux_sym_opcode_token15] = ACTIONS(162),
    [aux_sym_opcode_token16] = ACTIONS(162),
    [aux_sym_opcode_token17] = ACTIONS(162),
    [aux_sym_opcode_token18] = ACTIONS(162),
    [aux_sym_opcode_token19] = ACTIONS(162),
    [aux_sym_opcode_token20] = ACTIONS(162),
    [aux_sym_opcode_token21] = ACTIONS(162),
    [aux_sym_opcode_token22] = ACTIONS(162),
    [aux_sym_opcode_token23] = ACTIONS(162),
    [aux_sym_opcode_token24] = ACTIONS(162),
    [aux_sym_opcode_token25] = ACTIONS(162),
    [aux_sym_branch_opcode_token1] = ACTIONS(164),
    [aux_sym_branch_opcode_token2] = ACTIONS(164),
    [aux_sym_branch_opcode_token3] = ACTIONS(164),
    [aux_sym_branch_opcode_token4] = ACTIONS(164),
    [aux_sym_branch_opcode_token5] = ACTIONS(164),
    [aux_sym_branch_opcode_token6] = ACTIONS(164),
    [aux_sym_branch_opcode_token7] = ACTIONS(164),
    [aux_sym_branch_opcode_token8] = ACTIONS(164),
    [aux_sym_branch_opcode_token9] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_constant_token1,
    ACTIONS(60), 1,
      aux_sym_constant_token2,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym_constant,
    STATE(70), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [28] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_constant_token1,
    ACTIONS(60), 1,
      aux_sym_constant_token2,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_register,
    STATE(73), 1,
      sym_constant,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [53] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_constant_token1,
    ACTIONS(60), 1,
      aux_sym_constant_token2,
    STATE(14), 2,
      sym_register,
      sym_constant,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [73] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_reg_list,
    STATE(59), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [92] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_reg_list,
    STATE(59), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_reg_list,
    STATE(59), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(40), 2,
      aux_sym__statement,
      sym_function_definition,
  [150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_directive,
    STATE(2), 1,
      sym_label,
    STATE(40), 2,
      aux_sym__statement,
      sym_function_definition,
  [170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym_register,
    STATE(67), 1,
      sym_reg_list,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(61), 1,
      sym_register,
    ACTIONS(194), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(33), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      sym_identifier,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(64), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym_register,
    ACTIONS(170), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_ldm_statement_repeat1,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_ldm_statement_repeat1,
  [352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_ldm_statement_repeat1,
  [365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_ldm_statement_repeat1,
  [378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_ldm_statement_repeat1,
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      sym_directive,
      sym_identifier,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_ldm_statement_repeat1,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_ldm_statement_repeat1,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_BANG,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COLON,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_identifier,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 28,
  [SMALL_STATE(35)] = 53,
  [SMALL_STATE(36)] = 73,
  [SMALL_STATE(37)] = 92,
  [SMALL_STATE(38)] = 111,
  [SMALL_STATE(39)] = 130,
  [SMALL_STATE(40)] = 150,
  [SMALL_STATE(41)] = 170,
  [SMALL_STATE(42)] = 186,
  [SMALL_STATE(43)] = 202,
  [SMALL_STATE(44)] = 215,
  [SMALL_STATE(45)] = 228,
  [SMALL_STATE(46)] = 239,
  [SMALL_STATE(47)] = 252,
  [SMALL_STATE(48)] = 265,
  [SMALL_STATE(49)] = 278,
  [SMALL_STATE(50)] = 288,
  [SMALL_STATE(51)] = 298,
  [SMALL_STATE(52)] = 308,
  [SMALL_STATE(53)] = 317,
  [SMALL_STATE(54)] = 330,
  [SMALL_STATE(55)] = 339,
  [SMALL_STATE(56)] = 352,
  [SMALL_STATE(57)] = 365,
  [SMALL_STATE(58)] = 378,
  [SMALL_STATE(59)] = 391,
  [SMALL_STATE(60)] = 402,
  [SMALL_STATE(61)] = 411,
  [SMALL_STATE(62)] = 420,
  [SMALL_STATE(63)] = 433,
  [SMALL_STATE(64)] = 446,
  [SMALL_STATE(65)] = 456,
  [SMALL_STATE(66)] = 466,
  [SMALL_STATE(67)] = 474,
  [SMALL_STATE(68)] = 482,
  [SMALL_STATE(69)] = 489,
  [SMALL_STATE(70)] = 496,
  [SMALL_STATE(71)] = 503,
  [SMALL_STATE(72)] = 510,
  [SMALL_STATE(73)] = 517,
  [SMALL_STATE(74)] = 524,
  [SMALL_STATE(75)] = 531,
  [SMALL_STATE(76)] = 538,
  [SMALL_STATE(77)] = 545,
  [SMALL_STATE(78)] = 552,
  [SMALL_STATE(79)] = 559,
  [SMALL_STATE(80)] = 566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(75),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(49),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(50),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(43),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(74),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(51),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(45),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 2, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 4, .production_id = 7),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 15),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 15),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_statement, 6, .production_id = 11),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_statement, 6, .production_id = 11),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 8),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 6, .production_id = 10),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 6, .production_id = 10),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 6, .production_id = 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 6, .production_id = 9),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 5, .production_id = 8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 8, .production_id = 18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 8, .production_id = 18),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldm_statement, 7, .production_id = 14),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_statement, 7, .production_id = 14),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 8, .production_id = 17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 8, .production_id = 17),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 9),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 13),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_statement, 2, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_statement, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_statement, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pool_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pool_statement, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 4, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 4, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 8, .production_id = 16),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 8, .production_id = 16),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load_statement, 7, .production_id = 12),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_statement, 7, .production_id = 12),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_statement, 3, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 3, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(75),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(40),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_opcode, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldm_opcode, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load_opcode, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2), SHIFT_REPEAT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ldm_statement_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_opcode, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
