// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐            ┬───┬───┬───┬         ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ Q │ W │ E │ R │ T │            │ 7 │ 8 │ 9 │         │ Y │ U │ I │ O │ P │BSP│
     * ├───┼───┼───┼───┼───┼───┤─────|      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───|
     * │SFT│ A │ S │ D │ F │ G │Pg UP|      │ 4 │ 5 │ 6 │     │ UP│ H │ J │ K │ L │ ; │ ' |
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │CTL│ Z │ X │ C │ V │ B │Pg Dn|      │ 1 │ 2 │ 3 │     │DWN│ N │ M │ , │ . │ / │ \ |
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │               │Tab│Spc│ALT  │      │ 0 │ . │ENT│     │GUI│ENT│ - │
     *                 ┴───┴───┴─────┘      ┴───┴───┴───┘     ┴───┴───┴───┘
     */
    [0] = LAYOUT(
        QK_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                              KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PGUP,           KC_UP,   KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PGDN,           KC_DOWN, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                                LT(1, KC_TAB), KC_SPC, KC_LALT,             KC_LGUI, KC_ENT, LT(2, KC_MINUS),

                                KC_7, KC_8, KC_9,
                                KC_4, KC_5, KC_6,
                                KC_1, KC_2, KC_3,
                                LT(1, KC_0), KC_DOT, KC_ENT
    ),


    /* Numbers
     * ┌───┬───┬───┬───┬───┬───┐            ┬───┬───┬───┬         ┌───┬───┬───┬───┬───┬───┐
     * │ ~ │ ! │ @ │ # │ $ │ % │            │DEL│ UP│BSP│         │ ^ │ & │ * │ ( │ ) │DEL│
     * ├───┼───┼───┼───┼───┼───┤─────|      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───|
     * │SFT│ 1 │ 2 │ 3 │ 4 │ 5 │Pg UP|      │LFT│DWN│RGT│     │ UP│ 6 │ 7 │ 8 │ 9 │ 0 │ ' |
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │CTL│ F1│ F2│ F3│ F4│ F5│Pg Dn|      │ 1 │ 2 │ 3 │     │DWN│ F6│ F7│ F8│ F9│F10│F11|
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │               │Alt│Spc│Spc  │      │   │ . │ENT│     │Alt│Spc│Spc│
     *                 ┴───┴───┴─────┘      ┴───┴───┴───┘     ┴───┴───┴───┘
     */
    [1] = LAYOUT(
        KC_TILDE, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                 KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
        KC_LSFT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_VOLU,           KC_UP,   KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOT,
        KC_LCTL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_VOLD,           KC_DOWN, KC_F6, KC_F7, KC_F8, KC_F9,  KC_F10, KC_F11,
                                    KC_TRNS, KC_SPC, KC_C,             KC_TRNS, KC_ENT, KC_TRNS,

                                    KC_DEL, KC_UP, KC_BSPC,
                                    KC_LEFT, KC_DOWN, KC_RIGHT,
                                    KC_1, KC_2, KC_3,
                                    KC_TRNS, KC_DOT, KC_ENT
    ),

    /* Symbols Navigation
     * ┌───┬───┬───┬───┬───┬───┐            ┬───┬───┬───┬         ┌───┬───┬───┬───┬───┬───┐
     * │ ~ │ ! │ @ │ = │ + │ - │            │DEL│ UP│BSP│         │ ^ │ & │UP │ ( │ ) │DEL│
     * ├───┼───┼───┼───┼───┼───┤─────|      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───|
     * │SFT│ 1 │ 2 │ [ │ ] │ 5 │Pg UP|      │LFT│DWN│RGT│     │ UP│HOM│LFT│DN │RGT│END│ ' |
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │CTL│ Z │ X │ C │ V │ B │Pg Dn|      │ 1 │ 2 │ 3 │     │DWN│ N │ M │ , │ . │ / │SFT|
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │               │XXX│GUI│XXX  │      │   │ . │BOT│     │LY3│ENT│XXX│
     *                 ┴───┴───┴─────┘      ┴───┴───┴───┘     ┴───┴───┴───┘
     */
    [2] = LAYOUT(
        KC_TILDE, KC_EXLM, KC_AT, KC_EQL, KC_PLUS, KC_MINUS,                 KC_CIRC, KC_AMPR, KC_UP, KC_LPRN, KC_RPRN, KC_DEL,
        KC_LSFT, KC_1, KC_2, KC_LBRC, KC_RBRC, KC_5, KC_PGUP,           KC_UP,   KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PGDN,                 KC_DOWN, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    KC_TRNS, KC_LGUI, KC_TRNS,             TG(3), KC_ENT, KC_TRNS,

                                    KC_DEL, KC_UP, KC_BSPC,
                                    KC_LEFT, KC_DOWN, KC_RIGHT,
                                    KC_1, KC_2, KC_3,
                                    KC_TRNS, KC_DOT, QK_BOOT
    ),

    /* Gaming Layer
     * ┌───┬───┬───┬───┬───┬───┐            ┬───┬───┬───┬         ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ESC│ Q │ W │ E │ R │            │DEL│ UP│BSP│         │ ^ │ & │UP │ ( │ ) │DEL│
     * ├───┼───┼───┼───┼───┼───┤─────|      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───|
     * │SFT│SFT│ A │ S │ D │ F │Pg UP|      │LFT│DWN│RGT│     │ UP│ 6 │LFT│DN │RGT│ 0 │ ' |
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │CTL│CTL│ X │ C │ H │ M │Pg Dn|      │ 1 │ 2 │ 3 │     │DWN│ N │ M │ , │ . │ / │SFT|
     * ├───┼───┼───┼───┼───┼───┤─────┤      ┼───┼───┼───┼     ├───┼───┼───┼───┼───┼───┤───┤
     * │               │TAB│Spc│     │      │   │ . │ENT│     │LY3│Ent│   │
     *                 ┴───┴───┴─────┘      ┴───┴───┴───┘     ┴───┴───┴───┘
     */
    [3] = LAYOUT(
        KC_ESC, KC_ESC, KC_Q, KC_W, KC_E, KC_R,                 KC_CIRC, KC_AMPR, KC_UP, KC_LPRN, KC_RPRN, KC_DEL,
        KC_LSFT, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_PGUP,           KC_UP,   KC_6, KC_LEFT, KC_DOWN, KC_RIGHT, KC_0, KC_QUOT,
        KC_LCTL, KC_LCTL, KC_X, KC_C, KC_H, KC_M, KC_PGDN,           KC_DOWN, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    KC_TAB, KC_SPC, KC_TRNS,             TG(3), KC_ENT, KC_TRNS,

                                    KC_DEL, KC_UP, KC_BSPC,
                                    KC_LEFT, KC_DOWN, KC_RIGHT,
                                    KC_1, KC_2, KC_3,
                                    KC_TRNS, KC_DOT, KC_ENT
    )

};
