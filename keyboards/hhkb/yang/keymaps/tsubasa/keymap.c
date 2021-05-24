/*  -*-  eval: (turn-on-orgtbl); -*-
 * kanru's HHKB Layout
 *
 * Copyright 2021 Kan-Ru Chen <kanru@kanru.info>
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
#include QMK_KEYBOARD_H
#include <stdio.h>

#define BASE 0
#define HHKB 1
#define MT_SS MT(MOD_LSFT, KC_SPACE)
#define MT_CE MT(MOD_ESC, KC_LCTL)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_60_hhkb( //  default layer
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        MT_CE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        MO(HHKB), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(HHKB), KC_RSFT,
        KC_LGUI, KC_LALT, /*        */ MT_SS, KC_RALT, KC_RGUI),

    /* BASE Level: Default Layer
     |-----+---+---+---+---+---+---+---+---+---+---+-----+-------+-------+---|
     | Esc | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -   | =     | \     | ` |
     |-------+---+---+---+---+---+---+---+---+---+---+---+-------+-------+---|
     | Tab | Q | W | E | R | T | Y | U | I | O | P | [   | ]     | Backs |   |
     |-------+---+---+---+---+---+---+---+---+---+---+---+-------+-------+---|
     | Cont| A | S | D | F | G | H | J | K | L | ; | '   | Ent   |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+---+-------+-------+---|
     | Fn0 | Z | X | C | V | B | N | M | , | . | / | Fn0 | Shift |       |   |
     |-----+---+---+---+---+---+---+---+---+---+---+-----+-------+-------+---|

            |------+------+-----------------------+------+------|
            | LGUI | LAlt | ** Shift and Space ** | RAlt | RGUI |
            |------+------+-----------------------+------+------|
    */

    [HHKB] = LAYOUT_60_hhkb(
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_DEL,
        KC_TRNS, KC_WH_U, KC_MS_U, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_BSPC, KC_TRNS, KC_TRNS, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    /* Layer HHKB: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+--------|
      |      | F1   | F2   | F3   | F4    | F5 | F6 | F7  | F8  | F9  | F10 | F11 | F12 |       | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+--------|
      |      | WH_U | MS_U | WH_D |       |    |    |     | Hom | Up  | End |     |     | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+--------|
      |      | MS_L | MS_D | MS_R | Backs |    |    | Del | Lef | Dow | Rig |     | Ent |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+--------|
      |      | BTN1 | BTN2 | BTN3 |       |    |    |     |     |     |     |     |     |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+--------|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | **** |
                 |------+------+----------------------+------+------+
     */
    
};
// clang-format on
