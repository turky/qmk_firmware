#include QMK_KEYBOARD_H

#include "../../../../quantum/keymap_extras/keymap_jp.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

#define ____ KC_TRNS
#define xxxx KC_NO

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define KC_RST RESET
//#define KC_BL_S BL_STEP

#define EXLM   JP_EXLM
#define DQT    JP_DQT
#define HASH   JP_HASH
#define DLR    JP_DLR
#define PERC   JP_PERC
#define AMPR   JP_AMPR
#define QUOT   JP_QUOT
#define DQT    JP_DQT
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
#define HENK   KC_HENK
#define MHEN   KC_MHEN
#define HOME   KC_HOME
#define END    KC_END
#define COPY   LCTL(KC_C)
#define PASTE  LCTL(KC_V)
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
#define PTSC KC_PSCREEN

#define SFTZ   LSFT_T(KC_Z)
#define GUIX   LGUI_T(KC_X)

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  | Shift | Ctrl|      |    |      |Lower |Raise |
 *                  `-------------| Space|    |Enter |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */

[_QWERTY] = LAYOUT( \
      KC_Q,  KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P,
      KC_A,  KC_S, KC_D, KC_F, KC_G,         KC_H, KC_J, KC_K, KC_L, SCLN,
      SFTZ,  GUIX, KC_C, KC_V, KC_B,         KC_N, KC_M, COMM, DOT,  SLSH,
                    SFT,  CTL,  SPC,         KC_ENT,RAISE,LOWER
),

/* Raise
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   1  |   2  |   3  |   4  |   5  |           |   6  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  Tab |   {  |   }  |   [  |   ]  |           | Left | Down |  Up  |Right |   :  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   !  |   "  |   #  |   $  |   %  |           |   &  |   '  |   (  |   )  |   -  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  | Del |   BS  |      |    |      |      |      |
 *                  `-------------| Gui  |    | Alt  |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_RAISE] = LAYOUT( \
      KC_1, KC_2, KC_3, KC_4, KC_5,     KC_6, KC_7, KC_8, KC_9, KC_0,
      TAB , LCBR, RCBR, LBRC, RBRC,     KLEFT,KDOWN, KUP ,KRIGHT,COLN,
      EXLM,  DQT, HASH,  DLR, PERC,     AMPR, QUOT, LPRN, RPRN, MINS,
                     DEL, BSPC, GUI,    ALT  ,____, ____
),

/* Lower
 *
 * ,----------------------------------.           ,----------------------------------.
 * |  Esc |      | VolU | PgUp | Copy |           | PtSc |   _  |   +  |   ~  |   ^  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  Caps|      | VolD | PgDn |Paste |           |      |   @  |   *  |   |  |   \  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   F1 |  F2  |  F3  |  F4  |  F5  |           |  F6  |  F7  |  F8  |  F9  |  F10 |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  | HENK | MHEN |      |    |      |      |      |
 *                  `-------------|      |    | Alt  |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_LOWER] = LAYOUT( \
    ESC, ____, VOLU, PGUP, COPY,      PTSC, UNDS, PLUS, TILD, CIRC,
JP_CAPS, ____, VOLD, PGDN,PASTE,      ____,  AT , ASTR, PIPE, BSLS,
  KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,      KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,
               HENK, MHEN, ____,       ALT, ____, ____ \
),

/* Adjust (Lower + Raise)
 *
 * ,----------------------------------.           ,----------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |           |   F6 |  F7  |  F8  |  F9  |  F10 |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |  F11 |  F12 |      |      |      |           |      |      |      |Taskmg|caltde|
 * |------+------+------+------+------|           |------+------+------+------+------|
 * | Reset|      |      |      |      |           |      |      |      |      |      |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  |      |      |      |    |      |      |      |
 *                  `-------------|      |    |      |------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */
[_ADJUST] =  LAYOUT( \
  KC_F1,  KC_F2, KC_F3, KC_F4, KC_F5,     KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10, \
  KC_F11, KC_F12, ____,  ____,  ____,      ____,  ____,  ____, TSKMGR, CALTDEL, \
   RESET,   ____, ____,  ____,  ____,      ____,  ____,  ____,   ____,    ____, \
                    ____, ____, ____,      ____,  ____,  ____                    \
)
};

void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistant_default_layer_set(1UL<<_QWERTY);
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
