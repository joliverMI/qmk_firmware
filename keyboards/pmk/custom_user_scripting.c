// Copyright 2024 Javier Oliver (@joliverMI)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   #ifdef DIABLO_PLAYERS_CHANGE_ENABLED
   if (!process_diablo_player_change(keycode, record)) {
      return false;
   }
   #endif

   #ifdef QUICK_GAME_TYPE_ENABLED
   if (!process_quick_game_type(keycode, record)) {
      return false;
   }
   #endif

   #ifdef REPEAT_ENABLED
   if (!process_repeat_key(keycode, record)) {
      return false;
   }
   #endif

   #ifdef MOD_SPOOF_ENABLED
   if (!process_mod_spoof(keycode, record)) {
      return false;
   }
   #endif

   return true;
};