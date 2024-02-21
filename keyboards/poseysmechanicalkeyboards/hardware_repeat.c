// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include QMK_KEYBOARD_H

#ifndef REPEAT_DELAY
    #define REPEAT_DELAY 150
#endif
#ifndef REPEAT_TERM
    #define REPEAT_TERM 6
#endif
#ifdef REPEAT_ALL_KEYS_ENABLED
    #define REPEAT_ALPHAS_ENABLED
    #define REPEAT_NUMBERS_ENABLED
    #define REPEAT_MODS_ENABLED
    #define REPEAT_FROW_ENABLED
#endif

static uint16_t key_timer = 0;
static bool key_pressed = false;
static bool key_repeating = false;
static uint16_t repeat_delay = REPEAT_DELAY;
static uint8_t repeat_term = REPEAT_TERM;
static uint16_t key_repeat = 0;
static bool key_last_send_press = false;

#ifdef BOOSTED_REPEAT_ENABLED
    #ifndef BOOSTED_REPEAT_DELAY
    #define BOOSTED_REPEAT_DELAY REPEAT_DELAY
    #endif
    #ifndef BOOSTED_REPEAT_TERM
    #define BOOSTED_REPEAT_TERM REPEAT_TERM
    #endif
static uint16_t keys_to_boost[] = { BOOSTED_REPEAT_KEYS };
#ifdef BOOSTED2_REPEAT_ENABLED
    #ifndef BOOSTED2_REPEAT_DELAY
    #define BOOSTED2_REPEAT_DELAY BOOSTED_REPEAT_DELAY
    #endif
    #ifndef BOOSTED2_REPEAT_TERM
    #define BOOSTED2_REPEAT_TERM BOOSTED_REPEAT_TERM
    #endif
static uint16_t keys_to_boost2[] = { BOOSTED2_REPEAT_KEYS };
#endif
#endif

static uint16_t layers_to_check[] = { FAST_REPEAT_LAYERS };

bool check_large_layer(void){
    for (int i = 0; i < FAST_REPEAT_LAYER_COUNT; i++){
        if (IS_LAYER_ON(layers_to_check[i])){
            return true;
        }
    }
    return false;
}

#ifdef BOOSTED_REPEAT_ENABLED
bool check_if_boosted_key(uint8_t keycode){
    for (int i = 0; i < BOOSTED_REPEAT_KEY_COUNT; i++){
        if (keys_to_boost[i] == keycode){
            return true;
        }
    }
    return false;
}
#ifdef BOOSTED2_REPEAT_ENABLED
bool check_if_boosted2_key(uint8_t keycode){
    for (int i = 0; i < BOOSTED2_REPEAT_KEY_COUNT; i++){
        if (keys_to_boost2[i] == keycode){
            return true;
        }
    }
    return false;
}
#endif
#endif

bool process_repeat_key(uint16_t keycode, keyrecord_t *record) {
    if (check_large_layer()){
        switch (keycode) {
            #ifdef REPEAT_ALL_KEYS_ENABLED
            case KC_A ... KC_F24:
            #else
            #ifdef REPEAT_ALPHAS_ENABLED
            case KC_A ... KC_Z:
            #endif
            #ifdef REPEAT_NUMBERS_ENABLED
            case KC_1 ... KC_0:
            #endif
            #ifdef REPEAT_MODS_ENABLED
            case KC_ENTER ... KC_CAPS_LOCK:
            #endif
            #ifdef REPEAT_FROW_ENABLED
            case KC_F1 ... KC_F12:
            case KC_F13 ... KC_F24:
            #endif
            #endif
                if (record->event.pressed){
                            if (keycode!=key_repeat) {
                                key_repeating = false;
                            }
                            register_code(keycode);
                            #ifdef BOOSTED_REPEAT_ENABLED
                            if (check_if_boosted_key(keycode)) {
                                repeat_delay = BOOSTED_REPEAT_DELAY;
                                repeat_term = BOOSTED_REPEAT_TERM;
                            } 
                            #ifdef BOOSTED2_REPEAT_ENABLED
                            else if(check_if_boosted2_key(keycode)) {
                                repeat_delay = BOOSTED2_REPEAT_DELAY;
                                repeat_term = BOOSTED2_REPEAT_TERM;
                            } 
                            #endif
                            else {
                                repeat_delay = REPEAT_DELAY;
                                repeat_term = REPEAT_TERM;
                            }
                            #endif
                            key_repeat = keycode;
                            key_pressed = true;
                            key_timer = timer_read();
                } else {
                    unregister_code(keycode);
                    if (keycode==key_repeat) {
                        key_pressed = false;
                        key_repeating = false;
                        key_last_send_press = false;
                        repeat_delay = REPEAT_DELAY;
                        repeat_term = REPEAT_TERM;
                    }
                }
                return false;
        }
    } else if (key_pressed) {
        key_pressed = false;
        key_repeating = false;
    }
    return true;
}

void matrix_scan_user(void) { 
    if (key_pressed) {
        if (!key_repeating && timer_elapsed(key_timer) > repeat_delay) {
            key_repeating = true;
            key_last_send_press = true;
            key_timer = timer_read();
        }
        if (key_repeating) {
            if (!key_last_send_press) {
                register_code(key_repeat);
                key_last_send_press = true;
            } else if (timer_elapsed(key_timer) > repeat_term) {
                key_timer = timer_read();
                unregister_code(key_repeat);
                key_last_send_press = false;
            }
        }
    }
}