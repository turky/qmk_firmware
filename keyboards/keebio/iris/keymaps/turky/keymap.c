#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

extern keymap_config_t keymap_config;

enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define ____ KC_TRNS
#define xxxx KC_NO

#define KC_QWE QWERTY
// #define KC_LOWR LOWER
// #define KC_RASE RAISE
#define KC_RST RESET
//#define KC_BL_S BL_STEP

#define EXLM   JP_EXLM
#define DQT    JP_DQUO
#define HASH   JP_HASH
#define DLR    JP_DLR
#define PERC   JP_PERC
#define AMPR   JP_AMPR
#define QUOT   JP_QUOT
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
// #define COPY   LCTL(KC_C)
// #define PASTE  LCTL(KC_V)
#define DEL    KC_DEL
#define WH_D   KC_WH_D
#define MS_U   KC_MS_U
#define WH_U   KC_WH_U
#define PGDN   KC_PGDN
#define PGUP   KC_PGUP
#define MS_U   MS_UP
#define MS_L   MS_LEFT
#define MS_D   MS_DOWN
#define MS_R   MS_RGHT
#define KLEFT  KC_LEFT
#define KUP    KC_UP
#define KDOWN  KC_DOWN
#define KRIGHT KC_RIGHT
#define MUTE   KC_MUTE
#define VOLD   KC_VOLD
#define VOLU   KC_VOLU
#define BTN1   MS_BTN1
#define BTN2   MS_BTN2
#define CTGUI  LCTL(KC_LGUI)
// #define LWR    LT(KC_LOWR, HOME)
// #define RSE    LT(KC_RASE, END)


enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [_QWERTY] = LAYOUT(
  //,------+-----+-----+-----+-----+-----.                  ,-----+-----+-----+-----+-----+-----.
      ESC,  KC_1, KC_2, KC_3, KC_4, KC_5,                    KC_6, KC_7, KC_8, KC_9, KC_0, MINS,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
      TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                     KC_Y, KC_U, KC_I, KC_O, KC_P, AT,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
      CTL,  KC_A, KC_S, KC_D, KC_F, KC_G,                    KC_H, KC_J, KC_K, KC_L, SCLN, COLN,
  //|------+-----+-----+-----+-----+-----+----.       ,-----|-----+-----+-----+-----+-----+----|
      ALT,  KC_Z, KC_X, KC_C, KC_V, KC_B, HENK,         GUI, KC_N, KC_M, COMM, DOT,  SLSH, BSLS,
  //`------+-----+-----+-----+-----+-----+----/        \----+-----+-----+-----+-----+-----+----'
                          SFT,  CTL,  SPC,             KC_ENT,LOWER,RAISE
  //                    `------+-----+----'              `---+-----+----'
  ),

  [_LOWER] = LAYOUT(
  //,------+-----+-----+-----+-----+-----.                  ,-----+-----+-----+-----+-----+-----.
      GRV,  EXLM,  DQT, HASH,  DLR, PERC,                    AMPR, QUOT, LPRN, RPRN, TILD, CIRC,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
      ____, KC_1, KC_2, KC_3, KC_4, KC_5,                     KC_6, KC_7, KC_8, KC_9, KC_0,QUOT,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
      CTGUI,____, LCBR, RCBR, LBRC, RBRC,                    KLEFT,KDOWN, KUP ,KRIGHT,PLUS,PIPE,
  //|------+-----+-----+-----+-----+-----+----.       ,-----|-----+-----+-----+-----+-----+----|
      ____, EXLM,  DQT, HASH,  DLR, PERC,HOME,         END, AMPR, QUOT, LPRN, RPRN, MINS, ____,
  //`------+-----+-----+-----+-----+-----+----/        \----+-----+-----+-----+-----+-----+----'
                          BSPC,  DEL, DEL,               ____,____, ADJUST
  //                    `------+-----+----'              `---+-----+----'
  ),

  [_RAISE] = LAYOUT(
  //,------+-----+-----+-----+-----+-----.                  ,-----+-----+-----+-----+-----+-----.
     KC_F12,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5 ,                  KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
      ESC , EXLM,  DQT, HASH,  DLR, PERC,                    AMPR, QUOT, LPRN, RPRN, TILD, CIRC,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
    QK_BOOT,KC_MPRV,KC_MNXT,VOLU,PGUP,UNDS,                   MS_L, MS_D, MS_U, MS_R, EQL, BSLS,
  //|------+-----+-----+-----+-----+-----+----.       ,-----|-----+-----+-----+-----+-----+----|
      ____, MUTE, ____, VOLD, PGDN, MINS,____,         ____, HOME, END, BTN1, BTN2, PLUS, ____,
  //`------+-----+-----+-----+-----+-----+----/       \----+-----+-----+-----+-----+-----+----'
                           HENK,MHEN,____,              ____,ADJUST,____
  //                    `------+-----+----'              `---+-----+----'
  ),

  [_ADJUST] = LAYOUT(
  //,------+-----+-----+-----+-----+-----.                  ,-----+-----+-----+-----+-----+-----.
     ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
     ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
     ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____,
  //|------+-----+-----+-----+-----+-----+----.       ,-----|-----+-----+-----+-----+-----+----|
     ____, ____, ____, ____, ____, ____, ____,         ____, ____, ____, ____, ____, ____, ____,
  //`------+-----+-----+-----+-----+-----+----/       \----+-----+-----+-----+-----+-----+----'
                         ____, ____, ____,              ____, ____, ____
 //                    `------+-----+----'              `---+-----+----'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
