// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include QMK_KEYBOARD_H

#ifdef LED_LOGO_ENABLED
#define FR_F1 KC_F1
#define FR_F2 KC_F2
#define FR_F3 KC_F3
#define FR_F4 KC_F4
#define FR_F5 KC_F5
#define FR_F6 KC_F6
#define FR_F7 LT(_SYMB, KC_F7)
#define FR_LED KC_NO
#else
#define FR_F1 KC_F2
#define FR_F2 KC_F3
#define FR_F3 KC_F4
#define FR_F4 KC_F5
#define FR_F5 KC_F6
#define FR_F6 KC_F7
#define FR_F7 MO(_SYMB)
#define FR_LED KC_F1
#endif
#define FR_F8 KC_F8
#define FR_F9 KC_F9
#define FR_F10 KC_F10
#define FR_F11 KC_F11
#define FR_F12 KC_F12
#define FR_F13 KC_PAUSE
#define FR_F14 KC_DEL