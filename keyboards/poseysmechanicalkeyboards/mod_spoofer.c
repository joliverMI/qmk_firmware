// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include QMK_KEYBOARD_H


bool process_mod_spoof(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
      case SG_SFT:
         if (record->event.pressed) {
            layer_on(_SGMODS);
            register_code(KC_RSFT);
         } else {
            layer_off(_SGMODS);
            unregister_code(KC_RSFT);
         }
         return false;
         break;
      case SG_CTL:
         if (record->event.pressed) {
            layer_on(_SGMODS2);
            register_code(KC_RCTL);
         } else {
            layer_off(_SGMODS2);
            unregister_code(KC_RCTL);
         }
         return false;
         break;
      case SG_1:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_1);
         } else {
            unregister_code(SGS_1);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_2:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_2);
         } else {
            unregister_code(SGS_2);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_3:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_3);
         } else {
            unregister_code(SGS_3);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_4:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_4);
         } else {
            unregister_code(SGS_4);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_5:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_5);
         } else {
            unregister_code(SGS_5);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_6:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_6);
         } else {
            unregister_code(SGS_6);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_7:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_7);
         } else {
            unregister_code(SGS_7);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_8:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_8);
         } else {
            unregister_code(SGS_8);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SG_9:
         if (record->event.pressed) {
            unregister_code(KC_RCTL);
            register_code(KC_RALT);
            register_code(SGS_9);
         } else {
            unregister_code(SGS_9);
            unregister_code(KC_RALT);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_1:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_1);
         } else {
            unregister_code(SLS_1);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_2:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_2);
         } else {
            unregister_code(SLS_2);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_3:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_3);
         } else {
            unregister_code(SLS_3);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_4:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_4);
         } else {
            unregister_code(SLS_4);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_5:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_5);
         } else {
            unregister_code(SLS_5);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_6:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_6);
         } else {
            unregister_code(SLS_6);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
      case SL_7:
         if (record->event.pressed) {
            unregister_code(KC_RSFT);
            register_code(KC_RCTL);
            register_code(SLS_7);
         } else {
            unregister_code(SLS_7);
            unregister_code(KC_RCTL);
            // register_code(KC_RSFT);
         }
         return false;
         break;
   }
   return true;
}