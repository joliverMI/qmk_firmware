// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//Layers
#define _QWERTY 0
#define _SYMB 2
#define _NAV 3
#define _ADJUST 4
// //Custom Layers
#define _TEMPRTY 1
#define _RECORE 5
#define _DIABLO 6
#define _PLAYERS 7
#define _STORMGATE 8
#define _SGMODS 9
#define _SGMODS2 10
//Layer Colors
#define C_QWERTY HSV_YELLOW
#define C_RECORE HSV_CYAN
#define C_DIABLO HSV_RED
#define C_TEMPRTY HSV_GREEN
#define C_SYMB HSV_PINK
#define C_NAV HSV_GREEN
#define C_SG HSV_ORANGE
#define C_SG2 HSV_GREEN

#include "user_settings.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,SYM_L   ,SYM_REC , SYM_Q   ,SYM_L   ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LBRC ,L_SG ,    KC_PAUS ,KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_EQL  ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_ADPU ,KC_PGDN , KC_HOME ,KC_ADEN ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LGUI ,KC_PMNS ,SYM_NAV ,KC_ALAS ,KC_CTPL ,KC_BSPC ,KC_DEL  ,                   KC_ENT  ,KC_SPC  ,SYM_NAV ,KC_LALT ,KC_LCTL ,KC_MPLY ,KC_RGHT 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_TEMPRTY] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                      KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   TTC     ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_SYMB] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,KC_TRNS ,SYM_DIA , KC_TRNS ,KC_TRNS ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,KC_TRNS ,KC_LCBR , KC_TRNS ,KC_RCBR ,KC_PSLS ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PMNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_HASH ,KC_DLR  ,KC_LBRC ,KC_RBRC ,KC_GRV  ,                                      KC_PAST ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PPLS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_PERC ,KC_CIRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_P0   ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PENT ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   KC_ENT  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_PDOT ,KC_PENT ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_NAV] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_NO   ,KC_NO   ,KC_UP   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   , KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_UP   ,KC_NO   ,KC_NO   ,QK_BOOT ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_NO   ,KC_NO   ,KC_UP   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   , KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_UP   ,KC_NO   ,KC_NO   ,KC_NO   ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_LEFT ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_RIGHT,                                     KC_LEFT ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_RIGHT,KC_NO   ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_NO   ,KC_NO   ,KC_DOWN ,KC_NO   ,KC_NO   ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_NO   ,KC_NO   ,KC_DOWN ,KC_NO   ,KC_NO   ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_NO   ,KC_NO   ,KC_TRNS ,KC_TRNS ,KC_NO   ,KC_NO   ,                   KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_TRNS ,KC_TRNS ,QK_CLEAR_EEPROM   
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_ADJUST] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                      KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_RECORE] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_EQL  ,KC_BSPC , SYM_Q   ,SYM_L   ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_9    ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LBRC ,KC_BSLS , KC_PAUS ,KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_EQL  ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_8    ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_6    ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_PGUP ,KC_LALT , KC_F10  ,KC_ADEN ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_7    ,KC_BSLS ,KC_PMNS ,KC_PAST ,KC_SLSH ,KC_LSFT ,KC_LCTL ,                   CTT     ,KC_SPC  ,SYM_NAV ,KC_RALT ,KC_RCTL ,KC_MPLY ,KC_RGHT 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
    [_DIABLO] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_EQL  ,KC_BSPC , SYM_Q   ,SYM_L   ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_RBRC ,KC_BSLS , KC_PAUS ,KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_EQL  ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                      KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_COMM ,KC_LALT , KC_HOME ,KC_ADEN ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   PL_C    ,KC_PMNS ,KC_PLUS ,KC_DOT  ,KC_ALAS ,KC_LSFT ,KC_LCTL ,                   CTT     ,KC_SPC  ,KC_RALT ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    )
   ,
   #ifdef DIABLO_PLAYERS_CHANGE_ENABLED
    [_PLAYERS] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   PL_8    ,PL_1    ,PL_2    ,PL_3    ,PL_4    ,PL_5    ,PL_6    ,PL_7    , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                                      KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   XXXXXXX ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
   #endif
    [_STORMGATE] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_Y    ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_EQL   ,KC_GRV  , SYM_Q   ,SYM_L   ,KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_I    ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LBRC ,KC_H    , KC_PAUS ,KC_RBRC ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_EQL  ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_M    ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                     KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_N    ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_COMM ,KC_MINS , KC_HOME ,KC_ADEN ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_P    ,KC_PMNS ,KC_SPC  ,KC_J    ,KC_BSLS ,SG_SFT  ,SG_CTL  ,                   KC_ENT  ,KC_SPC  ,SYM_NAV ,KC_RALT ,KC_RCTL ,KC_MPLY ,KC_RGHT 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
// Replace keycodes for camera locations with SL_1 through SL_7 here. 
    [_SGMODS] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_TRNS ,KC_TRNS ,SL_7    ,SL_6    ,SL_5    ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,SL_4    ,SL_3    ,SL_2    ,SL_1    ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_K    ,KC_TRNS ,KC_TRNS ,                                     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_DOT  ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    ),
// Replace keycodes for control groups with SG_1 through SG_9 here.
    [_SGMODS2] = LAYOUT_recore(
//┌────────┬────────┬────────┬────────┬────────┬────────┬── L1 ──┬── X1 ──┐┌── X1 ──┬── L1 ──┬────────┬────────┬────────┬────────┬────────┬────────┐
   KC_TRNS ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼── X2 ──┼── X3 ──┤├── X3 ──┼── X2 ──┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_TRNS ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤├────────┼────────┼────────┼────────┼────────┼────────┴────────┴────────┤
   SG_6    ,SG_1    ,SG_8    ,KC_O    ,KC_TRNS ,KC_TRNS ,                                      KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┬────────┬────────┤├────────┬────────┬────────┼────────┼────────┼────────┼────────┼────────┤
   SG_7    ,SG_4    ,SG_3    ,SG_2    ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS , KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
//├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┘└────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
   KC_DOT  ,SG_5    ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,                   KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS 
//└────────┴────────┴── T1 ──┴── T2 ──┴── T3 ──┴── T4 ──┴── T5 ──┘                  └── T5 ──┴── T4 ──┴── T3 ──┴── T2 ──┴── T1 ──┴────────┴────────┘
    )
};

// Light adjustments
#ifdef RGBLIGHT_ENABLE
#include "color_user_layer_settings.c"
#endif