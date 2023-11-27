// Custom Macros
#define QUICK_GAME_TYPE_ENABLED
#define TEMP_TYPE_LAYER _TEMPRTY
#define DIABLO_PLAYERS_CHANGE_ENABLED
#define LED_LOGO_ENABLED
#define REPEAT_ENABLED
#define REPEAT_DELAY 150
#define REPEAT_TERM 5
#define FAST_REPEAT_KEYS    KC_SPC, \
                            KC_A
#define FAST_REPEAT_KEY_COUNT 2

#define FAST_REPEAT_LAYERS _SC2
#define FAST_REPEAT_LAYER_COUNT 1

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   L_SYMB,
   L_NAV,
   L_SC2,
   L_DIABLO,
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
#define L_DIA TO(_DIABLO)
#define L_PLAY OSL(_PLAYERS)

#include "custom_user_scripting.c"
#include "led_shifter.c"