#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym__text_token1 = 2,
  aux_sym__not_token1 = 3,
  aux_sym__not_token2 = 4,
  aux_sym__not_token3 = 5,
  aux_sym__not_token4 = 6,
  anon_sym_LBRACE_PERCENT = 7,
  anon_sym_PERCENT_RBRACE = 8,
  sym_expression_begin = 9,
  sym_expression_end = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LBRACE_POUND = 13,
  aux_sym_comment_token1 = 14,
  anon_sym_POUND_RBRACE = 15,
  anon_sym_for = 16,
  anon_sym_in = 17,
  anon_sym_endfor = 18,
  anon_sym_if = 19,
  anon_sym_and = 20,
  anon_sym_or = 21,
  anon_sym_endif = 22,
  anon_sym_else = 23,
  anon_sym_elif = 24,
  anon_sym_raw = 25,
  anon_sym_endraw = 26,
  anon_sym_macro = 27,
  anon_sym_endmacro = 28,
  anon_sym_extends = 29,
  anon_sym_block = 30,
  anon_sym_endblock = 31,
  anon_sym_call = 32,
  anon_sym_endcall = 33,
  anon_sym_filter = 34,
  anon_sym_endfilter = 35,
  anon_sym_set = 36,
  anon_sym_endset = 37,
  anon_sym_include = 38,
  anon_sym_import = 39,
  anon_sym_from = 40,
  anon_sym_autoescape = 41,
  anon_sym_endautoescape = 42,
  anon_sym_trans = 43,
  anon_sym_endtrans = 44,
  anon_sym_pluralize = 45,
  anon_sym_with = 46,
  anon_sym_endwith = 47,
  anon_sym_debug = 48,
  anon_sym_do = 49,
  sym_white_space_control = 50,
  sym__white_space = 51,
  sym_operator = 52,
  sym_string = 53,
  sym_source_file = 54,
  sym__text = 55,
  sym__not = 56,
  sym__node = 57,
  sym_statement = 58,
  sym_statement_begin = 59,
  sym_statement_end = 60,
  sym_expression = 61,
  sym_object = 62,
  sym__object_begin = 63,
  sym__object_end = 64,
  sym_comment = 65,
  sym_keyword = 66,
  aux_sym__inner_text = 67,
  aux_sym__inner_text2 = 68,
  aux_sym_source_file_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__text_token1] = "_text_token1",
  [aux_sym__not_token1] = "_not_token1",
  [aux_sym__not_token2] = "_not_token2",
  [aux_sym__not_token3] = "_not_token3",
  [aux_sym__not_token4] = "_not_token4",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [sym_expression_begin] = "expression_begin",
  [sym_expression_end] = "expression_end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_if] = "if",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_endif] = "endif",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_extends] = "extends",
  [anon_sym_block] = "block",
  [anon_sym_endblock] = "endblock",
  [anon_sym_call] = "call",
  [anon_sym_endcall] = "endcall",
  [anon_sym_filter] = "filter",
  [anon_sym_endfilter] = "endfilter",
  [anon_sym_set] = "set",
  [anon_sym_endset] = "endset",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_autoescape] = "autoescape",
  [anon_sym_endautoescape] = "endautoescape",
  [anon_sym_trans] = "trans",
  [anon_sym_endtrans] = "endtrans",
  [anon_sym_pluralize] = "pluralize",
  [anon_sym_with] = "with",
  [anon_sym_endwith] = "endwith",
  [anon_sym_debug] = "debug",
  [anon_sym_do] = "do",
  [sym_white_space_control] = "white_space_control",
  [sym__white_space] = "_white_space",
  [sym_operator] = "operator",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__text] = "_text",
  [sym__not] = "_not",
  [sym__node] = "_node",
  [sym_statement] = "statement",
  [sym_statement_begin] = "statement_begin",
  [sym_statement_end] = "statement_end",
  [sym_expression] = "expression",
  [sym_object] = "object",
  [sym__object_begin] = "_object_begin",
  [sym__object_end] = "_object_end",
  [sym_comment] = "comment",
  [sym_keyword] = "keyword",
  [aux_sym__inner_text] = "_inner_text",
  [aux_sym__inner_text2] = "_inner_text2",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [aux_sym__not_token1] = aux_sym__not_token1,
  [aux_sym__not_token2] = aux_sym__not_token2,
  [aux_sym__not_token3] = aux_sym__not_token3,
  [aux_sym__not_token4] = aux_sym__not_token4,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [sym_expression_begin] = sym_expression_begin,
  [sym_expression_end] = sym_expression_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_endcall] = anon_sym_endcall,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_endfilter] = anon_sym_endfilter,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_endset] = anon_sym_endset,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_autoescape] = anon_sym_autoescape,
  [anon_sym_endautoescape] = anon_sym_endautoescape,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_endtrans] = anon_sym_endtrans,
  [anon_sym_pluralize] = anon_sym_pluralize,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_endwith] = anon_sym_endwith,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_do] = anon_sym_do,
  [sym_white_space_control] = sym_white_space_control,
  [sym__white_space] = sym__white_space,
  [sym_operator] = sym_operator,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__text] = sym__text,
  [sym__not] = sym__not,
  [sym__node] = sym__node,
  [sym_statement] = sym_statement,
  [sym_statement_begin] = sym_statement_begin,
  [sym_statement_end] = sym_statement_end,
  [sym_expression] = sym_expression,
  [sym_object] = sym_object,
  [sym__object_begin] = sym__object_begin,
  [sym__object_end] = sym__object_end,
  [sym_comment] = sym_comment,
  [sym_keyword] = sym_keyword,
  [aux_sym__inner_text] = aux_sym__inner_text,
  [aux_sym__inner_text2] = aux_sym__inner_text2,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__not_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_end] = {
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
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endautoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluralize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_white_space_control] = {
    .visible = true,
    .named = true,
  },
  [sym__white_space] = {
    .visible = false,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__not] = {
    .visible = false,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__object_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inner_text] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inner_text2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_identifier = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_identifier] = "identifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_identifier, 1, .inherited = true},
  [2] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [4] =
    {field_identifier, 2, .inherited = true},
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
  [15] = 14,
  [16] = 16,
  [17] = 14,
  [18] = 16,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 5,
  [32] = 6,
  [33] = 33,
  [34] = 6,
  [35] = 5,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static TSCharacterRange sym_operator_character_set_1[] = {
  {0, '!'}, {'$', '$'}, {'&', '&'}, {'(', '/'}, {':', '@'}, {'[', '^'}, {'`', '`'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '}') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(48);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__not_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__not_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__not_token2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__not_token2);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__not_token3);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__not_token4);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__not_token4);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__not_token4);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_expression_begin);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_expression_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '%') ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_white_space_control);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_white_space_control);
      if ((!eof && set_contains(sym_operator_character_set_1, 9, lookahead))) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__white_space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_operator);
      if ((!eof && set_contains(sym_operator_character_set_1, 9, lookahead))) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
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
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'm', 8,
        'o', 9,
        'p', 10,
        'r', 11,
        's', 12,
        't', 13,
        'w', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        'a', 63,
        'b', 64,
        'c', 65,
        'f', 66,
        'i', 67,
        'm', 68,
        'r', 69,
        's', 70,
        't', 71,
        'w', 72,
      );
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_endtrans);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_endautoescape);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__not_token3] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_endset] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_autoescape] = ACTIONS(1),
    [anon_sym_endautoescape] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_endtrans] = ACTIONS(1),
    [anon_sym_pluralize] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [sym_white_space_control] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym__text] = STATE(12),
    [sym__not] = STATE(12),
    [sym__node] = STATE(12),
    [sym_statement] = STATE(12),
    [sym_statement_begin] = STATE(10),
    [sym_expression] = STATE(12),
    [sym_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__text_token1] = ACTIONS(5),
    [aux_sym__not_token1] = ACTIONS(5),
    [aux_sym__not_token2] = ACTIONS(5),
    [aux_sym__not_token3] = ACTIONS(5),
    [aux_sym__not_token4] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [sym_expression_begin] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
  [2] = {
    [sym_statement_end] = STATE(24),
    [sym_object] = STATE(3),
    [sym__object_begin] = STATE(14),
    [sym_keyword] = STATE(3),
    [aux_sym__inner_text] = STATE(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_raw] = ACTIONS(19),
    [anon_sym_endraw] = ACTIONS(19),
    [anon_sym_macro] = ACTIONS(19),
    [anon_sym_endmacro] = ACTIONS(19),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(19),
    [anon_sym_endblock] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_endcall] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_endfilter] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_endset] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_autoescape] = ACTIONS(19),
    [anon_sym_endautoescape] = ACTIONS(19),
    [anon_sym_trans] = ACTIONS(19),
    [anon_sym_endtrans] = ACTIONS(19),
    [anon_sym_pluralize] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(19),
    [anon_sym_endwith] = ACTIONS(19),
    [anon_sym_debug] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [sym_white_space_control] = ACTIONS(21),
    [sym__white_space] = ACTIONS(23),
    [sym_operator] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [3] = {
    [sym_statement_end] = STATE(27),
    [sym_object] = STATE(4),
    [sym__object_begin] = STATE(14),
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_raw] = ACTIONS(19),
    [anon_sym_endraw] = ACTIONS(19),
    [anon_sym_macro] = ACTIONS(19),
    [anon_sym_endmacro] = ACTIONS(19),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(19),
    [anon_sym_endblock] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_endcall] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_endfilter] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_endset] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_autoescape] = ACTIONS(19),
    [anon_sym_endautoescape] = ACTIONS(19),
    [anon_sym_trans] = ACTIONS(19),
    [anon_sym_endtrans] = ACTIONS(19),
    [anon_sym_pluralize] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(19),
    [anon_sym_endwith] = ACTIONS(19),
    [anon_sym_debug] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [sym_white_space_control] = ACTIONS(21),
    [sym__white_space] = ACTIONS(25),
    [sym_operator] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [4] = {
    [sym_object] = STATE(4),
    [sym__object_begin] = STATE(14),
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(35),
    [anon_sym_endfor] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_endif] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_elif] = ACTIONS(35),
    [anon_sym_raw] = ACTIONS(35),
    [anon_sym_endraw] = ACTIONS(35),
    [anon_sym_macro] = ACTIONS(35),
    [anon_sym_endmacro] = ACTIONS(35),
    [anon_sym_extends] = ACTIONS(35),
    [anon_sym_block] = ACTIONS(35),
    [anon_sym_endblock] = ACTIONS(35),
    [anon_sym_call] = ACTIONS(35),
    [anon_sym_endcall] = ACTIONS(35),
    [anon_sym_filter] = ACTIONS(35),
    [anon_sym_endfilter] = ACTIONS(35),
    [anon_sym_set] = ACTIONS(35),
    [anon_sym_endset] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(35),
    [anon_sym_import] = ACTIONS(35),
    [anon_sym_from] = ACTIONS(35),
    [anon_sym_autoescape] = ACTIONS(35),
    [anon_sym_endautoescape] = ACTIONS(35),
    [anon_sym_trans] = ACTIONS(35),
    [anon_sym_endtrans] = ACTIONS(35),
    [anon_sym_pluralize] = ACTIONS(35),
    [anon_sym_with] = ACTIONS(35),
    [anon_sym_endwith] = ACTIONS(35),
    [anon_sym_debug] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(35),
    [sym_white_space_control] = ACTIONS(30),
    [sym__white_space] = ACTIONS(38),
    [sym_operator] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
  },
  [5] = {
    [sym_identifier] = ACTIONS(41),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_endfor] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_endif] = ACTIONS(41),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_elif] = ACTIONS(41),
    [anon_sym_raw] = ACTIONS(41),
    [anon_sym_endraw] = ACTIONS(41),
    [anon_sym_macro] = ACTIONS(41),
    [anon_sym_endmacro] = ACTIONS(41),
    [anon_sym_extends] = ACTIONS(41),
    [anon_sym_block] = ACTIONS(41),
    [anon_sym_endblock] = ACTIONS(41),
    [anon_sym_call] = ACTIONS(41),
    [anon_sym_endcall] = ACTIONS(41),
    [anon_sym_filter] = ACTIONS(41),
    [anon_sym_endfilter] = ACTIONS(41),
    [anon_sym_set] = ACTIONS(41),
    [anon_sym_endset] = ACTIONS(41),
    [anon_sym_include] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(41),
    [anon_sym_from] = ACTIONS(41),
    [anon_sym_autoescape] = ACTIONS(41),
    [anon_sym_endautoescape] = ACTIONS(41),
    [anon_sym_trans] = ACTIONS(41),
    [anon_sym_endtrans] = ACTIONS(41),
    [anon_sym_pluralize] = ACTIONS(41),
    [anon_sym_with] = ACTIONS(41),
    [anon_sym_endwith] = ACTIONS(41),
    [anon_sym_debug] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(41),
    [sym_white_space_control] = ACTIONS(41),
    [sym__white_space] = ACTIONS(41),
    [sym_operator] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [6] = {
    [sym_identifier] = ACTIONS(43),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_endfor] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_endif] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_elif] = ACTIONS(43),
    [anon_sym_raw] = ACTIONS(43),
    [anon_sym_endraw] = ACTIONS(43),
    [anon_sym_macro] = ACTIONS(43),
    [anon_sym_endmacro] = ACTIONS(43),
    [anon_sym_extends] = ACTIONS(43),
    [anon_sym_block] = ACTIONS(43),
    [anon_sym_endblock] = ACTIONS(43),
    [anon_sym_call] = ACTIONS(43),
    [anon_sym_endcall] = ACTIONS(43),
    [anon_sym_filter] = ACTIONS(43),
    [anon_sym_endfilter] = ACTIONS(43),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_endset] = ACTIONS(43),
    [anon_sym_include] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(43),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_autoescape] = ACTIONS(43),
    [anon_sym_endautoescape] = ACTIONS(43),
    [anon_sym_trans] = ACTIONS(43),
    [anon_sym_endtrans] = ACTIONS(43),
    [anon_sym_pluralize] = ACTIONS(43),
    [anon_sym_with] = ACTIONS(43),
    [anon_sym_endwith] = ACTIONS(43),
    [anon_sym_debug] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(43),
    [sym_white_space_control] = ACTIONS(43),
    [sym__white_space] = ACTIONS(43),
    [sym_operator] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
  },
  [7] = {
    [sym_identifier] = ACTIONS(45),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_for] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_endfor] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_endif] = ACTIONS(45),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_elif] = ACTIONS(45),
    [anon_sym_raw] = ACTIONS(45),
    [anon_sym_endraw] = ACTIONS(45),
    [anon_sym_macro] = ACTIONS(45),
    [anon_sym_endmacro] = ACTIONS(45),
    [anon_sym_extends] = ACTIONS(45),
    [anon_sym_block] = ACTIONS(45),
    [anon_sym_endblock] = ACTIONS(45),
    [anon_sym_call] = ACTIONS(45),
    [anon_sym_endcall] = ACTIONS(45),
    [anon_sym_filter] = ACTIONS(45),
    [anon_sym_endfilter] = ACTIONS(45),
    [anon_sym_set] = ACTIONS(45),
    [anon_sym_endset] = ACTIONS(45),
    [anon_sym_include] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(45),
    [anon_sym_from] = ACTIONS(45),
    [anon_sym_autoescape] = ACTIONS(45),
    [anon_sym_endautoescape] = ACTIONS(45),
    [anon_sym_trans] = ACTIONS(45),
    [anon_sym_endtrans] = ACTIONS(45),
    [anon_sym_pluralize] = ACTIONS(45),
    [anon_sym_with] = ACTIONS(45),
    [anon_sym_endwith] = ACTIONS(45),
    [anon_sym_debug] = ACTIONS(45),
    [anon_sym_do] = ACTIONS(45),
    [sym_white_space_control] = ACTIONS(45),
    [sym__white_space] = ACTIONS(45),
    [sym_operator] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
  },
  [8] = {
    [sym_identifier] = ACTIONS(47),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_endfor] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_endif] = ACTIONS(47),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_elif] = ACTIONS(47),
    [anon_sym_raw] = ACTIONS(47),
    [anon_sym_endraw] = ACTIONS(47),
    [anon_sym_macro] = ACTIONS(47),
    [anon_sym_endmacro] = ACTIONS(47),
    [anon_sym_extends] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_endblock] = ACTIONS(47),
    [anon_sym_call] = ACTIONS(47),
    [anon_sym_endcall] = ACTIONS(47),
    [anon_sym_filter] = ACTIONS(47),
    [anon_sym_endfilter] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_endset] = ACTIONS(47),
    [anon_sym_include] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_autoescape] = ACTIONS(47),
    [anon_sym_endautoescape] = ACTIONS(47),
    [anon_sym_trans] = ACTIONS(47),
    [anon_sym_endtrans] = ACTIONS(47),
    [anon_sym_pluralize] = ACTIONS(47),
    [anon_sym_with] = ACTIONS(47),
    [anon_sym_endwith] = ACTIONS(47),
    [anon_sym_debug] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [sym_white_space_control] = ACTIONS(47),
    [sym__white_space] = ACTIONS(47),
    [sym_operator] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(51), 1,
      anon_sym_in,
    ACTIONS(53), 1,
      sym_white_space_control,
    ACTIONS(49), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [42] = 3,
    ACTIONS(19), 1,
      anon_sym_in,
    STATE(2), 1,
      sym_keyword,
    ACTIONS(55), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [84] = 2,
    ACTIONS(59), 1,
      anon_sym_in,
    ACTIONS(57), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [123] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      sym_expression_begin,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_statement_begin,
    ACTIONS(63), 5,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
    STATE(13), 7,
      sym__text,
      sym__not,
      sym__node,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [155] = 7,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(73), 1,
      sym_expression_begin,
    ACTIONS(76), 1,
      anon_sym_LBRACE_POUND,
    STATE(10), 1,
      sym_statement_begin,
    ACTIONS(67), 5,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
    STATE(13), 7,
      sym__text,
      sym__not,
      sym__node,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [187] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__object_end,
    STATE(15), 1,
      sym__object_begin,
    STATE(16), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(85), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [212] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__object_begin,
    STATE(34), 1,
      sym__object_end,
    STATE(18), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(89), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [237] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__object_end,
    STATE(15), 1,
      sym__object_begin,
    STATE(28), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(93), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [262] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__object_begin,
    STATE(32), 1,
      sym__object_end,
    STATE(19), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(97), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [287] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__object_begin,
    STATE(35), 1,
      sym__object_end,
    STATE(28), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(93), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [312] = 7,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__object_begin,
    STATE(31), 1,
      sym__object_end,
    STATE(28), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(93), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [337] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_expression_end,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym__object_begin,
    STATE(20), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(111), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [359] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [373] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [387] = 6,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_expression_end,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym__object_begin,
    STATE(29), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(128), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [409] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [423] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [437] = 2,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [451] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [465] = 6,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym__object_begin,
    STATE(28), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(152), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [487] = 6,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_expression_end,
    STATE(17), 1,
      sym__object_begin,
    STATE(20), 2,
      sym_object,
      aux_sym__inner_text2,
    ACTIONS(157), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [509] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 8,
      aux_sym__text_token1,
      aux_sym__not_token1,
      aux_sym__not_token2,
      aux_sym__not_token3,
      aux_sym__not_token4,
      anon_sym_LBRACE_PERCENT,
      sym_expression_begin,
      anon_sym_LBRACE_POUND,
  [523] = 1,
    ACTIONS(41), 6,
      sym_expression_end,
      anon_sym_LBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [532] = 1,
    ACTIONS(43), 6,
      sym_expression_end,
      anon_sym_LBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [541] = 1,
    ACTIONS(163), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [550] = 1,
    ACTIONS(43), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [559] = 1,
    ACTIONS(41), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [568] = 1,
    ACTIONS(163), 6,
      sym_expression_end,
      anon_sym_LBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [577] = 1,
    ACTIONS(165), 1,
      anon_sym_PERCENT_RBRACE,
  [581] = 1,
    ACTIONS(167), 1,
      anon_sym_POUND_RBRACE,
  [585] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [589] = 1,
    ACTIONS(171), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 409,
  [SMALL_STATE(25)] = 423,
  [SMALL_STATE(26)] = 437,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 465,
  [SMALL_STATE(29)] = 487,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 523,
  [SMALL_STATE(32)] = 532,
  [SMALL_STATE(33)] = 541,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 559,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 581,
  [SMALL_STATE(39)] = 585,
  [SMALL_STATE(40)] = 589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, 0, 3), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, 0, 3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, 0, 3), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, 0, 3), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, 0, 3), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 1, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(17),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, 0, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, 0, 4),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(33),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(15),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, 0, 3), SHIFT_REPEAT(28),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 1, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja2(void) {
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
