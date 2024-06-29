#include QMK_KEYBOARD_H

#define LED_LEFT D5
#define LED_RIGHT B0

enum my_keycodes { MFROM = SAFE_RANGE, MEMAIL, MID_
};


#define _COL_L 1
#define _SYM_L 2
#define _NUM_L 3
#define _MOV_L 4

#define SC_RCPC KC_RCPC

#include "mrh_keymap.h"



//static uint16_t mm_timer, sym_timer, num_timer, mov_timer;
//static uint16_t osm_shift = 0;
bool num_lock, scr_lock;

// Setup LED Pins
//void keyboard_pre_init_user(void) {
    // Call the keyboard pre init code.

    // Set our LED pins as output
 //   setPinOutput(LED_LEFT);
 //   setPinOutput(LED_RIGHT);
//};


// https://docs.qmk.fm/#/feature_tap_dance?id=example-4-39quad-function-tap-dance39

#define TapHOLD(KCX) if(!record->tap.count&&record->event.pressed){tap_code16(KCX);return false;}
#define _send(KCY)   if(record->event.pressed){tap_code16(KCY);}return false

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    //case LT(5, KC_F21):
    //    if (record->tap.count > 0) {
    //        if (record->event.pressed) {
    //            //register_code16(KC_LPRN);
    //            set_oneshot_mods(MOD_LSFT);
    //        }
    //        else {
    //            //unregister_code16(KC_LPRN);
    //        }
    //        return false;
    //    }
    //    return true;
    //case LT(0, KC_Q): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_Q));return false;} return true;
    //case LT(0, KC_W): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_W));return false;} return true;
    //case LT(0, KC_E): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_E));return false;} return true;
    //case LT(0, KC_R): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_R));return false;} return true;
    //case LT(0, KC_T): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_T));return false;} return true;
    //case LT(0, KC_Y): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_Y));return false;} return true;
    //case LT(0, KC_U): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_U));return false;} return true;
    //case LT(0, KC_I): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_I));return false;} return true;
    //case LT(0, KC_O): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_O));return false;} return true;
    //case LT(0, KC_P): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_P));return false;} return true;

    //case LT(0, KC_A): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_A));return false;} return true;
    //case LT(0, KC_S): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_S));return false;} return true;
    //case LT(0, KC_D): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_D));return false;} return true;
    //case LT(0, KC_F): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_F));return false;} return true;
    //case LT(0, KC_G): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_G));return false;} return true;
    //case LT(0, KC_H): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_H));return false;} return true;
    //case LT(0, KC_J): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_J));return false;} return true;
    //case LT(0, KC_K): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_K));return false;} return true;
    //case LT(0, KC_L): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_L));return false;} return true;
    case LT(0, KC_SCLN): if(!record->tap.count&&record->event.pressed){tap_code16(S(KC_SCLN));return false;} return true;  // Semi -> Colon on HOLD

    //case LT(0, KC_Z): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_Z));return false;} return true;
    case LT(0, KC_X): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_X));return false;} return true;
    case LT(0, KC_C): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_C));return false;} return true;
    case LT(0, KC_V): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_V));return false;} return true;
    case LT(0, KC_B): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_B));return false;} return true;
    //case LT(0, KC_N): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_N));return false;} return true;
    //case LT(0, KC_M): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_M));return false;} return true;
    //case LT(0, KC_COMM): if(!record->tap.count&&record->event.pressed){tap_code16(KC_LGUI);return false;} return true;  // Comma to Win

    case LT(0, KC_BSPC): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_BSPC));return false;} return true;

    // Layer 2

    case LT(0, KC_LCBR): if(!record->tap.count&&record->event.pressed){tap_code16(KC_ESC);return false;} else if(record->event.pressed){tap_code16(S(KC_LCBR));}return false;  // Q - HOLD - Esc, tap {
    case LT(0, KC_PIPE): if(!record->tap.count&&record->event.pressed){tap_code16(KC_CAPS);return false;} else if(record->event.pressed){tap_code16(S(KC_BSLS));}return false; // Caps lock Sym+Shift
    case LT(0, KC_DEL):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_DEL));return false;} return true;

    // Layer 3

    //case LT(0, KC_PSCR): if(!record->tap.count&&record->event.pressed){tap_code16(KC_PSCR);return false;} else if(record->event.pressed){tap_code16(A(KC_PSCR));}return false;

    //case LT(0, KC_F1):  TapHOLD(C(KC_F1)) return true;
    //case LT(0, KC_F2):  TapHOLD(C(KC_F2)) return true;
    //case LT(0, KC_F3):  TapHOLD(C(KC_F3)) return true;
    //case LT(0, KC_F4):  TapHOLD(C(KC_F4)) return true;
    //case LT(0, KC_F5):  TapHOLD(C(KC_F5)) return true;
    //case LT(0, KC_F6):  TapHOLD(C(KC_F6)) return true;
    //case LT(0, KC_F7):  TapHOLD(C(KC_F7)) return true;
    //case LT(0, KC_F8):  TapHOLD(C(KC_F8)) return true;
    //case LT(0, KC_F9):  TapHOLD(C(KC_F9)) return true;
    //case LT(0, KC_F10): TapHOLD(C(KC_F10)) return true;
    //case LT(0, KC_F11): TapHOLD(C(KC_F11)) return true;
    //case LT(0, KC_F12): TapHOLD(C(KC_F12)) return true;

    //case LT(0, KC_1):  TapHOLD(C(KC_1)) return true;
    //case LT(0, KC_2):  TapHOLD(C(KC_2)) return true;
    //case LT(0, KC_3):  TapHOLD(C(KC_3)) return true;
    //case LT(0, KC_4):  TapHOLD(C(KC_4)) return true;
    //case LT(0, KC_5):  TapHOLD(C(KC_5)) return true;
    //case LT(0, KC_6):  TapHOLD(C(KC_6)) return true;
    //case LT(0, KC_7):  TapHOLD(C(KC_7)) return true;
    //case LT(0, KC_8):  TapHOLD(C(KC_8)) return true;
    //case LT(0, KC_9):  TapHOLD(C(KC_9)) return true;
    //case LT(0, KC_0):  TapHOLD(C(KC_0)) return true;


    case LT(0, KC_LT):    if(!record->tap.count&&record->event.pressed){tap_code16(S(KC_GT));return false;}    else if(record->event.pressed){tap_code16(S(KC_LT));}return false;
    case LT(0, KC_EQL):   if(!record->tap.count&&record->event.pressed){tap_code16(S(KC_SCLN));return false;}  return true;
    case LT(0, KC_PAST):  if(!record->tap.count&&record->event.pressed){tap_code16(KC_PSLS);return false;}     return true;
    case LT(0, KC_0):     if(!record->tap.count&&record->event.pressed){tap_code16(KC_DOT);return false;}      return true;
    case LT(0, KC_PPLS):  if(!record->tap.count&&record->event.pressed){tap_code16(KC_PMNS);return false;}     return true;
    case LT(0, KC_PENT):  if(!record->tap.count&&record->event.pressed){tap_code16(KC_TAB);return false;}      return true;

    // Layer 4

    //case LT(0, KC_UP):    if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_UP));return false;} return true;
    //case LT(0, KC_DOWN):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_DOWN));return false;} return true;
    //case LT(0, KC_LEFT):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_LEFT));return false;} return true;
    //case LT(0, KC_RIGHT): if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_RIGHT));return false;} return true;
    //case LT(0, KC_HOME):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_HOME));return false;} return true;
    //case LT(0, KC_END):   if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_END));return false;} return true;
    //case LT(0, KC_PGUP):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_PGUP));return false;} return true;
    //case LT(0, KC_PGDN):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_PGDN));return false;} return true;

    case LT(0, KC_VOLD):  if(!record->tap.count&&record->event.pressed){tap_code16(C(KC_MUTE));return false;} return true;
    case LT(0, KC_APP):   if(!record->tap.count&&record->event.pressed){tap_code16(KC_LGUI);return false;} return true;
    case LT(0, KC_PAUS):  if(!record->tap.count&&record->event.pressed){tap_code16(KC_PAUS);return false;} else if(record->event.pressed){tap_code16(S(KC_TAB));}return false;

    // Layer 5

    // Vol - and MUTE
    case LT(0, KC_NUM):   if(!record->tap.count&&record->event.pressed){tap_code16(KC_NUM);return false;} else if(record->event.pressed){tap_code16(KC_SCRL);}return false; // A - Intercept hold function to send ScrollLock
    case MID_: if (record->event.pressed) { SEND_STRING("43782395"); } return false;
    case MFROM: if (record->event.pressed) { SEND_STRING("from: "); } return false;
    case MEMAIL: if (record->event.pressed) { send_string("mr_mrhearn\"hotmail.com"); } return false;

    default:
        return true;  // Process all other keycodes normally
    }
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case SFT_T(KC_SPC):
        return TAPPING_TERM + 1250;
    case LT(0, KC_BSPC):
        return 150;
    case LT(0, KC_PAST):
    case LT(0, KC_PPLS):
        return 150;
    default:
        return TAPPING_TERM;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    //    fn's     or   Numpad     and numlock
    //     numpad
    writePin(LED_LEFT, !(((state & 1 << _NUM_L) && !(state & 1 << _MOV_L)) || ((state & 1 << _MOV_L) && (num_lock))));
    writePin(LED_RIGHT, !(state & 1 << _MOV_L));

    // LED Layer lights

    return state;
}


//void keyboard_post_init_user(void) {
    // Enable the LED layers
    //mm_timer = timer_read();
    //sym_timer = mm_timer;
//};
