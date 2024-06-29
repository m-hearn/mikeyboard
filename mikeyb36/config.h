/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define MASTER_LEFT

#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
//#define DEBOUNCE 0

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
//
#define TAPPING_TERM 250
//#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT  //requires holding Shift + X for the full tapping term - so we shorten it from 250 to 150
//#define PERMISSIVE_HOLD
#define ONESHOT_TIMEOUT 400

#define TAPPING_TOGGLE 1

#define FORCE_NKRO

#define LSPO_KEYS KC_LSFT, KC_LSFT, KC_1

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDLE_TIMEOUT 3000  // 3 seconds.

