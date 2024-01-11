// Custom Macros
#define REPEAT_ENABLED
#define REPEAT_ALL_KEYS_ENABLED
#define REPEAT_DELAY 135
#define REPEAT_TERM 10

#define BOOSTED_REPEAT_ENABLED
#define BOOSTED_REPEAT_DELAY 350
#define BOOSTED_REPEAT_KEYS KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7
#define BOOSTED_REPEAT_KEY_COUNT 7

#define FAST_REPEAT_LAYERS _SC2
#define FAST_REPEAT_LAYER_COUNT 1

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   SYMB,
   NAV,
   ADJUST,
   SC2,
   //quick type
   CTT,
   TTC
};

#ifdef REPEAT_ENABLED
   #ifndef REPEAT_DELAY
      #define REPEAT_DELAY 100
   #endif
   #ifndef REPEAT_TERM
      #define REPEAT_TERM 5
   #endif
   #include "hardware_repeat.c"
#endif

#ifdef QUICK_GAME_TYPE_ENABLED
   #include "quick_game_type.c"
#endif
#ifndef QUICK_GAME_TYPE_ENABLED
   #define TTC KC_ENTER
   #define CTT KC_ENTER
#endif

#ifdef DIABLO_PLAYERS_CHANGE_ENABLED
   #include "diablo_player_change.c"
#endif

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_NAGR LT(_NAV, KC_GRV)
#define KC_NAMI LT(_NAV, KC_MINS)
#define SYM_NAV LT(_NAV, KC_CAPS)
#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

// Layer Switch Shortcuts
#define SYM_SC2 TO(_SC2)
#define SYM_Q TO(_QWERTY)
#define SYM_DIA TO(_DIABLO)
#define PL_C OSL(_PLAYERS)

#include "custom_user_scripting.c"