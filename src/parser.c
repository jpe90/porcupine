#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DQUOTE = 1,
  anon_sym_DQUOTE2 = 2,
  sym_string_fragment = 3,
  sym_any_char = 4,
  sym_escape_sequence = 5,
  sym_porcupine = 6,
  aux_sym_porcupine_repeat1 = 7,
  aux_sym_porcupine_repeat2 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym_string_fragment] = "string_fragment",
  [sym_any_char] = "any_char",
  [sym_escape_sequence] = "escape_sequence",
  [sym_porcupine] = "porcupine",
  [aux_sym_porcupine_repeat1] = "porcupine_repeat1",
  [aux_sym_porcupine_repeat2] = "porcupine_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_string_fragment] = sym_string_fragment,
  [sym_any_char] = sym_any_char,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_porcupine] = sym_porcupine,
  [aux_sym_porcupine_repeat1] = aux_sym_porcupine_repeat1,
  [aux_sym_porcupine_repeat2] = aux_sym_porcupine_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_any_char] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_porcupine] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_porcupine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_porcupine_repeat2] = {
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
      if (eof) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_any_char);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_string_fragment] = ACTIONS(1),
    [sym_any_char] = ACTIONS(1),
  },
  [1] = {
    [sym_porcupine] = STATE(9),
    [aux_sym_porcupine_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_any_char] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_DQUOTE2,
    STATE(4), 1,
      aux_sym_porcupine_repeat1,
    ACTIONS(11), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [11] = 4,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_any_char,
    STATE(5), 1,
      aux_sym_porcupine_repeat2,
  [24] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE2,
    STATE(6), 1,
      aux_sym_porcupine_repeat1,
    ACTIONS(19), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [35] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      sym_any_char,
    STATE(5), 1,
      aux_sym_porcupine_repeat2,
  [48] = 3,
    ACTIONS(29), 1,
      anon_sym_DQUOTE2,
    STATE(6), 1,
      aux_sym_porcupine_repeat1,
    ACTIONS(31), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [59] = 2,
    ACTIONS(34), 1,
      sym_any_char,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [67] = 2,
    ACTIONS(38), 1,
      sym_any_char,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [75] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porcupine, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_porcupine, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_porcupine_repeat2, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_porcupine_repeat2, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_porcupine_repeat2, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_porcupine_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_porcupine_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_porcupine_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_porcupine_repeat2, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_porcupine_repeat2, 3),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_porcupine(void) {
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
