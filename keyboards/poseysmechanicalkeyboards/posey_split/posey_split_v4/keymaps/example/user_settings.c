// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keymap_german.h"

// Custom Macros
#define TEMP_TYPE_LAYER _TEMPRTY
#define LED_LOGO_ENABLED

#define REPEAT_ENABLED
#define REPEAT_ALL_KEYS_ENABLED
#define FAST_REPEAT_LAYERS _SC2
#define FAST_REPEAT_LAYER_COUNT 1
#define REPEAT_DELAY 108
#define REPEAT_TERM 5

#define BOOSTED_REPEAT_ENABLED
#define BOOSTED_REPEAT_TERM 11
#define BOOSTED_REPEAT_KEYS KC_Y
#define BOOSTED_REPEAT_KEY_COUNT 1

#define BOOSTED2_REPEAT_ENABLED
#define BOOSTED2_REPEAT_TERM 1
#define BOOSTED2_REPEAT_KEYS KC_E
#define BOOSTED2_REPEAT_KEY_COUNT 1

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   L_SYMB,
   L_NAV,
   L_SC2,
   //quick type
   CTT,
   TTC
};

#ifdef REPEAT_ENABLED
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
// System Layers
#define L_SYMB   MO(_SYMB)
#define L_NAV    MO(_NAV)


// Layer Switch Shortcuts
#define L_SC2 TO(_SC2)
#define L_QWRT TO(_QWERTY)

#include "custom_user_scripting.c"
#include "led_shifter.c"