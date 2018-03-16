#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"
#include "keymap_jp.h"

extern keymap_config_t keymap_config;

#define QWERTY 0
#define LOWER 1
#define RAISE 2

#define ____ KC_TRNS
#define xxxx KC_NO

#define KC_QWE QWERTY
#define KC_LOWR LOWER
#define KC_RASE RAISE
#define KC_RST RESET
#define KC_BL_S BL_STEP

#define EXLM   JP_EXLM
#define DQT    JP_DQT
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
// #define COPY   LCTL(KC_C)
// #define PASTE  LCTL(KC_V)
#define WH_D   KC_WH_D
#define MS_U   KC_MS_U
#define WH_U   KC_WH_U
#define PGDN   KC_PGDN
#define PGUP   KC_PGUP
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = KEYMAP(
  //,------+-----+-----+-----+-----+-----.                  ,-----+-----+-----+-----+-----+-----.
       ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                    KC_6, KC_7, KC_8, KC_9, KC_0,MINS,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                    KC_Y, KC_U, KC_I, KC_O, KC_P,LBRC,
  //|------+-----+-----+-----+-----+-----|                  |-----+-----+-----+-----+-----+----|
     KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,              KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
  //|------+-----+-----+-----+-----+-----+----.       ,-----|-----+-----+-----+-----+-----+----|
     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_HENK,   KC_RGUI, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RO,
  //`------+-----+-----+---+--+-----+-----+----/       \----+-----+-----+-----+-----+-----+----'
                     KC_BSPC,KC_DEL,KC_SPC,            KC_ENT,LT(KC_LOWR,KC_HOME),LT(KC_RASE,KC_END)
  //                    `------+-----+----'              `---+-----+----'
  ),

  [LOWER] = KEYMAP(
  //,----+-----+-----+-----+-----+-----.              ,----+-----+-----+-----+-----+----.
     TILD, EXLM,   AT, HASH,  DLR, PERC,               CIRC, AMPR, ASTR, LPRN, RPRN,KC_BSPC,
  //|----+-----+-----+-----+-----+-----|              |----+-----+-----+-----+-----+----|
     KC_TAB, KC_1,KC_2,KC_3,KC_4,KC_5,                 KC_6,KC_7,KC_8,KC_9,KC_0,____,
  //|----+-----+-----+-----+-----+-----|              |----+-----+-----+-----+-----+----|
     CTGUI,____,KLEFT,KRIGHT,KUP,LBRC,                 RBRC,KC_P4,KC_P5 ,KC_P6,PLUS,PIPE,
  //|----+-----+-----+-----+-----+-----+----.    ,----|----+-----+-----+-----+-----+----|
   KC_BL_S,____,____,____,  KDOWN,LCBR,KC_MHEN,     RPRN, RCBR, KC_P1,KC_P2,KC_P3,MINS,____,
  //`----+-----+-----+--+-+-----+-----+----/    \----+-----+-----+-----+-----+-----+----'
                       KC_LALT,____, KC_DEL,     KC_DEL,____, TO(QWERTY)
  //                  `----+-----+----'        `----+-----+----'
  ),

  [RAISE] = KEYMAP(
  //,----+-----+-----+-----+-----+----.              ,----+-----+-----+-----+-----+----.
     KC_F12,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5 ,      KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11 ,
  //|----+-----+-----+-----+-----+----|              |----+-----+-----+-----+-----+----|
     KC_RST ,EXLM, AT ,HASH,DLR ,PERC,               CIRC,AMPR,ASTR,LPRN,RPRN,____,
  //|----+-----+-----+-----+-----+----|              |----+-----+-----+-----+-----+----|
     ____,KC_MPRV,KC_MNXT,VOLU,PGUP,UNDS,         EQL ,KC_HOME,____,____,____,BSLS,
  //|----+-----+-----+-----+-----+-----+----.    ,----|----+-----+-----+-----+-----+----|
     MUTE,____,____,VOLD,PGDN,MINS,____,     ____,PLUS,END ,____,____,____,____,
  //`----+-----+-----+--+-+-----+-----+----/    \----+-----+-----+-----+-----+-----+----'
                       ____,____,____,         ____,____,TO(QWERTY)
  //                  `----+-----+----'        `----+-----+----'
  )

};

/*
#ifdef AUDIO_ENABLE
flxoat tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif
*/

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
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
*/

