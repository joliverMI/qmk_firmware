// Custom Macros
#define REPEAT_ENABLED
#define REPEAT_ALL_KEYS_ENABLED
#define REPEAT_DELAY 135
#define REPEAT_TERM 4

#define BOOSTED_REPEAT_ENABLED
#define BOOSTED_REPEAT_DELAY 350
#define BOOSTED_REPEAT_KEYS KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7
#define BOOSTED_REPEAT_KEY_COUNT 3

#define FAST_REPEAT_LAYERS _SC2, _SGT
#define FAST_REPEAT_LAYER_COUNT 2

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   L_SYMB,
   L_NAV,
   L_SC2,
   //quick type
   CTT,
   TTC
   #ifdef DIABLO_PLAYERS_CHANGE_ENABLED
   ,
   //players
   L_PLAY,
   PL_1,
   PL_2,
   PL_3,
   PL_4,
   PL_5,
   PL_6,
   PL_7,
   PL_8
   #endif
};

#ifdef REPEAT_ENABLED
   #ifndef REPEAT_DELAY
      #define REPEAT_DELAY 100
   #endif
   #ifndef REPEAT_TERM
      #define REPEAT_TERM 5
   #endif
   #include "hardware_repeat_flip.c"
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

// System Layers
#define L_SYMB   MO(_SYMB)
#define L_NAV    MO(_NAV)


// Layer Switch Shortcuts
#define L_SC2 TO(_SC2)
#define L_QWRT TO(_QWERTY)

#include "custom_user_scripting.c"
#include "led_shifter.c"