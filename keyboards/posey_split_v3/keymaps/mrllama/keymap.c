#include QMK_KEYBOARD_H


//Layers
#define _QWERTY 0
#define _SYMB 2
#define _NAV 3
// //Custom Layers
#define _TEMPRTY 1
#define _SC2 7
#define _DIABLO 8
#define _PLAYERS 9

#include "user_settings.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐   ┌───┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │F5 │F6 │   │F6 │F7 │F8 │F9 │F10│F11│F12│F13│
     * ├───┼───┼───┼───┼───┼───┼───┴───┤   ├───┴───┼───┼───┼───┼───┼───┴───┤
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │   │7  │8  │ 9 │ 0 │ - │ = │ Backsp│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘ ┌─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───────┤ 
     * │ Tab │ Q │ W │ E │ R │ T │ Y │   │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Caps │ A │ S │ D │ F │ G │ H │   │ H │J  │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐ └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │   │ N │ M │ , │ . │ / │    Shift │
     * ├────┬───┴┬──┴───┴───┼───┴───┴───┤   ├───┴───┴──┬┴───┴───┴┬─────────┤
     * │Ctrl│GUI │Alt       │           │   │          │ Alt│ GUI│Menu│Ctrl│
     * └────┴────┴──────────┴───────────┘   └──────────┴────┴────┴────┴────┘
     */
    [_QWERTY] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   SYM_L,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   QK_CLEAR_EEPROM,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      KC_ENT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,         KC_RSFT,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_LCTL,    KC_LGUI,      KC_LALT,                     KC_SPC,                    KC_SPC,          KC_RALT, KC_RGUI,  KC_APP,      KC_RCTL
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_TEMPRTY] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        TTC,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_SYMB] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        SYM_Q  ,          KC_TRNS, KC_TRNS, KC_TRNS, SYM_SC2, SYM_DIA, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_SC2] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        SYM_NAV,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        CTT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_DIABLO] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        SYM_NAV,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       CTT,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_PLAYERS] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        PL_8    ,PL_1    ,PL_2    ,PL_3    ,PL_4    ,PL_5    ,PL_6    ,PL_7,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    ),
    [_NAV] = LAYOUT_posey_split(
    // ┌────────┐        ┌────────┬────────┬────────┬────────┬────────┬───────┐ ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬───────┐
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SYM_Q,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,
     //├────────┴────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┬───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┼────────┴───────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,
     //├─────────────────┼────────┼────────┼────────┼────────┼────────┼───────┤ ├────────┼────────┼────────┼────────┼────────┼────────┴────────────────┤
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,
     //├────────────┬────┴────────┼────────┴────────┼────────┼────────┼───────┤ ├────────┴────────┴────────┴────────┴────────┴─────────────────────────┤
        KC_TRNS,    KC_TRNS,          KC_TRNS,                 KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS
     //└────────────┴─────────────┴─────────────────┴─────────────────────────┘ └──────────────────────────┴────────┴────────┴───────────┴─────────────┘
    )
};

// Light adjustments
#ifdef RGBLIGHT_ENABLE

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_CYAN);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
}

layer_state_t layer_state_set_user(layer_state_t state) {
   uint8_t layer = biton32(state);
   switch (layer) {
      case _QWERTY:
         rgblight_sethsv(HSV_CYAN);
         break;
      case _SC2:
         rgblight_sethsv(HSV_YELLOW);
         break;
      case _DIABLO:
         rgblight_sethsv(HSV_ORANGE);
         break;
      case _TEMPRTY:         
         rgblight_sethsv(HSV_GREEN);
         break;
   }
   return state;
}
#endif