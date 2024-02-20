// Custom Macros
#define QUICK_GAME_TYPE_ENABLED
#define TEMP_TYPE_LAYER _TEMPRTY
// #define DIABLO_PLAYERS_CHANGE_ENABLED
#define REPEAT_ENABLED
#define REPEAT_ALPHAS_ENABLED
#define REPEAT_MODS_ENABLED
#define REPEAT_FROW_ENABLED
#define REPEAT_DELAY 130
#define REPEAT_TERM 3
// #define BOOSTED_REPEAT_ENABLED
// #define BOOSTED_REPEAT_DELAY 130
// #define BOOSTED_REPEAT_TERM 0
// #define BOOSTED_REPEAT_KEYS KC_BSPC, KC_EQL, KC_F
// #define BOOSTED_REPEAT_KEY_COUNT 3
// #define BOOSTED2_REPEAT_ENABLED
// #define BOOSTED2_REPEAT_DELAY 130
// #define BOOSTED2_REPEAT_TERM 0
// #define BOOSTED2_REPEAT_KEYS KC_A, KC_S, KC_D, KC_Z, KC_C, KC_6, KC_7, KC_8, KC_9, KC_BSLS
// #define BOOSTED2_REPEAT_KEY_COUNT 8
#define FAST_REPEAT_LAYERS _RECORE, _STORMGATE
#define FAST_REPEAT_LAYER_COUNT 2
#define MOD_SPOOF_ENABLED

enum custom_keycodes {
   QWERTY = SAFE_RANGE,
   SYMB,
   NAV,
   ADJUST,
   RECORE,
   DIABLO,
   //quick type
   CTT,
   TTC,
   //players
   #ifdef DIABLO_PLAYERS_CHANGE_ENABLED
   PL_C,
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

#ifdef DIABLO_PLAYERS_CHANGE_ENABLED
   #include "diablo_player_change.c"
#endif

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_NAGR LT(_NAV, KC_GRV)
#define SYM_NAV LT(_NAV, KC_MINS)

#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

// Layer Switch Shortcuts
#define SYM_REC TO(_RECORE)
#define SYM_Q TO(_QWERTY)
#define SYM_DIA TO(_DIABLO)
#define PL_C OSL(_PLAYERS)
#define L_SG TO(_STORMGATE)


/* Mod spoofing definitions
The mod spoofing script will catch keycodes SG_1 through SG_9 for control group stealing with CTL and
it will catch keycodes SL_1 through SL_7 for camera location adding with SHIFT. SGS_1 through SGS_9
reference back to the intended keycode for the given control group. SLS_1 through SLS_7 reference back
to the intended keycode for the given camera location. 
*/
#ifdef MOD_SPOOF_ENABLED
#define SGS_1 KC_A
#define SGS_2 KC_C
#define SGS_3 KC_X
#define SGS_4 KC_Z
#define SGS_5 KC_PMNS
#define SGS_6 KC_M
#define SGS_7 KC_N
#define SGS_8 KC_S
#define SGS_9 KC_I
#define SLS_1 KC_R
#define SLS_2 KC_E
#define SLS_3 KC_W
#define SLS_4 KC_Q
#define SLS_5 KC_5
#define SLS_6 KC_4
#define SLS_7 KC_3
#include "mod_spoofer.c"
#endif

#include "custom_user_scripting.c"