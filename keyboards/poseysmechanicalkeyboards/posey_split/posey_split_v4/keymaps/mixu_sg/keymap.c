#include QMK_KEYBOARD_H


//System Layers
#define _QWERTY 0
#define _TEMPRTY 1
#define _NAV 8
#define _SYMB 9
//Game Layers
#define _SC2 2
#define _STORMGATE 3
#define _SGMODS 4
#define _SGMODS2 5

//Colors
#define C_QWERTY HSV_CYAN
#define C_SYMB HSV_RED
#define C_NAV HSV_RED
#define C_SC2 HSV_ORANGE
#define C_SG HSV_GREEN

#include "user_settings.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┐      ┌───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│LED│F1 │F2 │F3 │F4 │F5 │F6 │      │L1 │F7 │F8 │F9 │F10│F11│PAS│Del│ 16
     * ├───┼───┼───┼───┼───┼───┼───┴───┤      ├───┴───┼───┼───┼───┼───┼───┴───┤
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │      │7  │8  │ 9 │ 0 │ - │ = │ Backsp│ 15
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘    ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ 
     * │ Tab │ Q │ W │ E │ R │ T │ Y │      │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ 15
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐     └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │      │ H │J  │ K │ L │ ; │ ' │  Enter │ 14
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐  ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │  │ B │ N │ M │ , │ . │ / │    Shift │ 14
     * ├────┬───┴┬──┴┬──┴───┴┬──┴───┴───┤  └┬──┴───┴─┬─┴──┬┴───┴───┴┬─────────┤
     * │Ctrl│GUI │L2 │Alt    │          │   │        | L3 │ Alt│ GUI│Menu│Ctrl│ 11
     * └────┴────┴───┴───────┴──────────┘   └────────┴────┴────┴────┴────┴────┘
     */
    [_QWERTY] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_ESC,  FR_LED,  FR_F1,   FR_F2,   FR_F3,   FR_F4,   FR_F5,    FR_F6,   L_SYMB,  FR_F7,   FR_F8,   FR_F9,   FR_F10,  FR_F11,  FR_F12,   FR_F13,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BACKSPACE,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      KC_ENT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────────────┤
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_LCTL,   KC_LGUI, L_NAV,    KC_LALT,                  KC_SPC,                    KC_SPC,          L_NAV,   KC_RGUI, KC_RALT, KC_APP,  KC_RCTL
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    [_TEMPRTY] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        TTC,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    [_SC2] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        CTT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,                 KC_TRNS,                   KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    #ifdef MOD_SPOOF_ENABLED
    [_STORMGATE] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        TTC,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────────────┤
        SG_SFT,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        SG_CTL,   KC_TRNS, KC_TRNS,   KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    [_SGMODS] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS, SL_1    , SL_2   , SL_3   , SL_4   , SL_5   , SL_6   , SL_7  ,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_O   , KC_TRNS, KC_TRNS, KC_L   , KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        TTC,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    [_SGMODS2] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        SG_9   , SG_1   , SG_2   , SG_3   , SG_4   , SG_5   , SG_6   , SG_7   ,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_W   , KC_TRNS, KC_TRNS, KC_T   , KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        SG_8,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        TTC,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    #endif
    [_NAV] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        L_QWRT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, L_SC2,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_ENT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_UP,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    ),
    [_SYMB] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_ESC,  KC_TRNS, KC_TRNS, KC_F12,  KC_F13,  L_SC2,   KC_TRNS, L_QWRT,  KC_TRNS, L_SC2,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  L_SG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, QK_CLEAR_EEPROM,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      DT_UP,
     //├──────────┬──────┴─┬───────┼───────┴────────┼────────┴────────┴───────┤ ├────────┴────────┴────────┼────────┼────────┼────────┼────────────────┤
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,                 KC_TRNS,                   KC_TRNS,         KC_TRNS, KC_TRNS, DT_PRNT, DT_DOWN, KC_SLEP
     //└──────────┴────────┴───────┴────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴────────┴───────┴────────┘
    )
};

// Light adjustments
#ifdef RGBLIGHT_ENABLE
#include "color_user_layer_settings.c"
#endif