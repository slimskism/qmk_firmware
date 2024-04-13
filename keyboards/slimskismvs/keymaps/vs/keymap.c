// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_NO,      KC_ESC, KC_W,   KC_E,
        KC_NO,      KC_A,   KC_S,   KC_D,
        KC_LSFT,    KC_NO,  KC_NO,  LT(1, KC_C),
        KC_LCTL,    KC_NO,  KC_NO,  KC_SPC
    ),

    [1] = LAYOUT_ortho_4x4(
        KC_NO,      KC_Q,   KC_H,   KC_F,
        KC_NO,      KC_M,   _______,_______,
        _______,    KC_NO,  KC_NO,  _______,
        _______,    KC_NO,  KC_NO,  QK_BOOT
    ),
};
