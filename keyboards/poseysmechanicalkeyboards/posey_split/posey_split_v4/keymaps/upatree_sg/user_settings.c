// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

// Custom Macros
#define REPEAT_ENABLED
#define REPEAT_ALL_KEYS_ENABLED
#define REPEAT_DELAY 135
#define REPEAT_TERM 4

#define BOOSTED_REPEAT_ENABLED
#define BOOSTED_REPEAT_DELAY 350
#define BOOSTED_REPEAT_KEYS KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7
#define BOOSTED_REPEAT_KEY_COUNT 3

#define FAST_REPEAT_LAYERS _SC2, _STORMGATE
#define FAST_REPEAT_LAYER_COUNT 2
#define MOD_SPOOF_ENABLED

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
   PL_8,
   #endif
   #ifdef MOD_SPOOF_ENABLED
   ,
   SG_1,
   SG_2,
   SG_3,
   SG_4,
   SG_5,
   SG_6,
   SG_7,
   SG_8,
   SG_9,
   SL_1,
   SL_2,
   SL_3,
   SL_4,
   SL_5,
   SL_6,
   SL_7,
   SL_10,
   SLS_1,
   SLS_2,
   SLS_3,
   SLS_4,
   SLS_5,
   SLS_6,
   SLS_7,
   SGS_1,
   SGS_2,
   SGS_3,
   SGS_4,
   SGS_5,
   SGS_6,
   SGS_7,
   SGS_8,
   SGS_9,
   SGS_UP,
   SGS_TR,
   SG_SFT,
   SG_CTL
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

#ifdef MOD_SPOOF_ENABLED
#define L_SG TO(_STORMGATE)
#define SGS_1 KC_1
#define SGS_2 KC_2
#define SGS_3 KC_3
#define SGS_4 KC_4
#define SGS_5 KC_5
#define SGS_6 KC_6
#define SGS_7 KC_7
#define SGS_8 KC_CAPS
#define SGS_9 KC_GRV
#define SLS_1 KC_F1
#define SLS_2 KC_F2
#define SLS_3 KC_F3
#define SLS_4 KC_F4
#define SLS_5 KC_F5
#define SLS_6 KC_F6
#define SLS_7 KC_F7
#include "mod_spoofer.c"
#endif

#include "custom_user_scripting.c"
#include "led_shifter.c"