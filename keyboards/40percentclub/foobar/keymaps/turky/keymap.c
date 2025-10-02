/* Copyright 2018
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
#include "keymap_japanese.h"

enum foobar_layers {
  QWERTY,
  FN1,
  FN2,
  FN3,
  FN4,
  FN5
};

enum {
  TD_Q_ESC,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};

#define FN1_ENT  LT(FN1, KC_ENT)
#define FN2_B    LT(FN2, KC_B)
#define FN3_N    LT(FN3, KC_N)
#define FN4_M    LT(FN4, KC_M)
#define FN5_COMM LT(FN5, KC_COMM)
#define LSFT_Z   LSFT_T(KC_Z)
#define RSFT_L   RSFT_T(KC_L)
#define LALT_X   LALT_T(KC_X)
#define LCTL_C   LCTL_T(KC_Cq)

#define RCTL_P   RCTL_T(KC_P)

#define EXLM   JP_EXLM
#define HASH   JP_HASH
#define DLR    JP_DLR
#define PERC   JP_PERC
#define AMPR   JP_AMPR
#define QUOT   JP_QUOT
#define DQT    JP_DQUO
#define GRV    JP_GRV
#define PIPE   JP_PIPE
#define YEN    JP_YEN
#define AT     JP_AT
#define LCBR   JP_LCBR
#define RCBR   JP_RCBR
#define UNDS   JP_UNDS
#define TILD   JP_TILD
#define EQL    JP_EQL
#define COLN   JP_COLN
#define SLSH   JP_SLSH
#define ASTR   JP_ASTR
#define LPRN   JP_LPRN
#define RPRN   JP_RPRN
#define BSLS   JP_BSLS
#define CIRC   JP_CIRC
#define MINS   JP_MINS
#define SCLN   JP_SCLN
#define COMM   JP_COMM
#define DOT    JP_DOT
#define PLUS   JP_PLUS
#define LBRC   JP_LBRC
#define RBRC   JP_RBRC
#define GUI    KC_LGUI
#define ZHTG   JP_ZHTG
#define ALT    KC_LALT
#define CTL    KC_LCTL
#define SFT    KC_LSFT
#define ESC    KC_ESC
#define TAB    KC_TAB
#define SPC    KC_SPC
#define BSPC   KC_BSPC
#define HENK   JP_HENK
#define MHEN   JP_MHEN
#define HOME   KC_HOME
#define END    KC_END
#define DEL    KC_DEL
#define WH_D   KC_WH_D
#define MS_U   KC_MS_U
#define WH_U   KC_WH_U
#define PGDN   KC_PGDN
#define PGUP   KC_PGUP
#define MS_U   KC_MS_U
#define MS_L   KC_MS_L
#define MS_D   KC_MS_D
#define MS_R   KC_MS_R
#define KLEFT  KC_LEFT
#define KUP    KC_UP
#define KDOWN  KC_DOWN
#define KRIGHT KC_RIGHT
#define MUTE   KC_MUTE
#define VOLD   KC_VOLD
#define VOLU   KC_VOLU
#define BTN2   KC_BTN2
#define BTN1   KC_BTN1
#define CTGUI  LCTL(KC_LGUI)
#define CUT    LCTL(KC_X)
#define PASTE  LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT_split(
  TD(TD_Q_ESC),   KC_W,   KC_E, KC_R, KC_T,      KC_Y,  KC_U,  KC_I,  KC_O,   RCTL_P,
          KC_A,   KC_S,   KC_D, KC_F, KC_G,       GUI,  KC_H,  KC_J,  KC_K,   RSFT_L,
        LSFT_Z, LALT_X, LCTL_C, KC_V, SPC,    FN1_ENT, FN2_B, FN3_N, FN4_M, FN5_COMM
  ),
  
  [FN1] = LAYOUT_split(
    KC_1,    KC_2, KC_3, KC_4,   KC_5,   KC_6, KC_7, KC_8, KC_9,   KC_0,
    EXLM,     DQT, HASH,  DLR,    PERC,  AMPR, QUOT, LPRN, RPRN,   TILD,
     SFT, _______, BSPC,  DEL, _______, _______,  MINS,  EQL, LBRC, RBRC
  ),

  [FN2] = LAYOUT_split(
     KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_F7, KC_F8,   KC_F9, KC_F10,
    KC_F11,   KC_F12, _______, _______, _______,   KLEFT,  KDOWN,   KUP,  KRIGHT,    GRV,
     CTGUI, _______,    HENK,    MHEN, _______, _______, _______, _______, _______, _______
  ),

  [FN3] = LAYOUT_split(
       ESC, _______, _______, _______, _______,    MINS,   EQL,  LBRC,  RBRC,   TILD,
    KC_TAB, _______,    COMM,     DOT,    SLSH,    BSLS,  SLSH,  QUOT,  SCLN,   COLN,
     CTGUI, _______, _______, _______, _______, _______,  _______, _______, _______, _______  
  ),

  [FN4] = LAYOUT_split(
    _______, UNDS, PLUS, LCBR, RCBR, PIPE, _______, _______, _______, _______,
    TAB , _______, UNDS, YEN, COLN, DQT, _______, _______, _______, _______,
       CTL,     CUT, _______,   PASTE, _______, _______, _______, _______, _______, _______
  ),

  [FN5] = LAYOUT_split(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, QK_BOOT,   _______, _______, _______, _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
