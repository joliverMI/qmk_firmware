// Custom Macros
#define LED_LOGO_ENABLED
#define REPEAT_ENABLED
#define REPEAT_ALL_KEYS_ENABLED
#define REPEAT_DELAY 133
#define REPEAT_TERM 5
// #define BOOSTED_REPEAT_ENABLED
// #define BOOSTED2_REPEAT_ENABLED
// #define BOOSTED_REPEAT_TERM 1
// #define BOOSTED_REPEAT_KEYS KC_Z, KC_E
// #define BOOSTED_REPEAT_KEY_COUNT 2
// #define BOOSTED2_REPEAT_DELAY 200
// #define BOOSTED2_REPEAT_TERM 1
// #define BOOSTED2_REPEAT_KEYS KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_Q, KC_W
// #define BOOSTED2_REPEAT_KEY_COUNT 9
#define FAST_REPEAT_LAYERS _SC2
#define FAST_REPEAT_LAYER_COUNT 1

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
   #include "hardware_repeat.c"
#endif

#ifdef QUICK_GAME_TYPE_ENABLED
   #include "quick_game_type.c"
#else
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