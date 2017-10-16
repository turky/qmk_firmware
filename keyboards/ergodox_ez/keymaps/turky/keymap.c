// modified following file.
// https://github.com/msc654/qmk_firmware/blob/master/keyboard%2Fergodox_ez%2Fkeymaps%2Fdefault%2Fkeymap.c

#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define WINDOWS 0  // default layer (for Windows)
#define SYMB    1  // symbols
#define OSX     2  // default layer (for Mac)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Windows layer(JIS)
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |   1  |   2  |   3  |   4  |   5  |  ^~  |           |  \|  |   6  |   7  |   8  |   9  |   0  |   -=   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  F7  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   @`   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;+ |   :*   |
 * |--------+------+------+------+------+------| F10  |           |  L2  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LGui | Copy |Paste | Left | Right|                                       | Down |  Up  |   [{ |   ]} |   \_   |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |ZenHan|PtrScr|       | Alt  | CTRL |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 |Backsp|Delete|------|       |------| Enter  |Space |
 *                                 |ace   |      | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[WINDOWS] = KEYMAP(  // layer 0 : default
        // left hand
        KC_ESC,       KC_1,       KC_2,    KC_3,    KC_4,   KC_5,    KC_EQL,
        KC_TAB,       KC_Q,       KC_W,    KC_E,    KC_R,   KC_T,     KC_F7,
       KC_LCTL,       KC_A,       KC_S,    KC_D,    KC_F,   KC_G,
       KC_LSFT,       KC_Z,       KC_X,    KC_C,    KC_V,   KC_B,    KC_F10,
       KC_LGUI, LCTL(KC_C), LCTL(KC_V), KC_LEFT, KC_RGHT,
                                                         KC_GRV, KC_PSCR,
                                                                 KC_HOME,
                                                KC_BSPC, KC_DELT, KC_END,
        // right hand
             KC_JYEN,    KC_6,   KC_7,  KC_8,    KC_9,    KC_0,     KC_MINS,
             TO(SYMB), KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,     KC_LBRC,
                         KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
             TO(OSX),  KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                              KC_DOWN,  KC_UP,   KC_RBRC, KC_BSLS,    KC_RO,
             KC_RALT, KC_RCTL,
             KC_PGUP,
             KC_PGDN, KC_ENT, KC_SPC
    ),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           | F7   |  F8  |  F9  | F10  |  F11 |  F12 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | TAB    |   Q  |   W  |   E  |   R  |   T  |      |           |      |RClick|   7  |   8  |   9  |   *  |        |
 * |--------+------+------+------+------+------|  P   |           | L0   |------+------+------+------+------+--------|
 * | CTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|LClick|   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |  M   |           | L2   |      |   1  |   2  |   3  |   \  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |  Alt | Space| Left | Right|                                       | Down |  Up  |   0  |   =  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| Vol- | Vol+ |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = KEYMAP(
       KC_TRNS,        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
       KC_TAB,         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_P,
       KC_LCTL,        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
       KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_M,
       KC_TRNS,        KC_RALT,KC_SPC, KC_LEFT,KC_RGHT,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_TRNS,
       // right hand
         KC_F7,     KC_F8, KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_TRNS,
 TO(WINDOWS),   KC_BTN2,  KC_7,    KC_8,    KC_9, KC_ASTR, KC_TRNS,
                  KC_BTN1,  KC_4,    KC_5,    KC_6, KC_PLUS, KC_TRNS,
     TO(OSX),   KC_TRNS,  KC_1,    KC_2,    KC_3, KC_BSLS, KC_TRNS,
                      KC_TRNS,   KC_TRNS, KC_0,    KC_EQL,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: OS X layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |   1  |   2  |   3  |   4  |   5  |      |           |  \|  |   6  |   7  |   8  |   9  |   0  |   -=   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  F7  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   @`   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;+ |   :*   |
 * |--------+------+------+------+------+------| F10  |           |  L2  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |  ,<  |  .>  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LGui | Copy |Paste | Left | Right|                                       | Down |  Up  |   [{ |   ]} |  \_  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |ZenHan| Alt  |       | Alt  | CTRL |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 |      |      |------|       |------| Enter  |Space |
 *                                 |      |      | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[OSX] = KEYMAP(  // layer 2 
       // left hand
        KC_ESC,       KC_1,       KC_2,    KC_3,    KC_4,   KC_5,     KC_EQL,
        KC_TAB,       KC_Q,       KC_W,    KC_E,    KC_R,   KC_T,     KC_F7,
       KC_LCTL,       KC_A,       KC_S,    KC_D,    KC_F,   KC_G,
       KC_LSFT,       KC_Z,       KC_X,    KC_C,    KC_V,   KC_B,    KC_F10,
       KC_LGUI, LGUI(KC_C), LGUI(KC_V), KC_LEFT, KC_RGHT,
                                                         KC_GRV, KC_LALT,
                                                                 KC_HOME,
                                                KC_BSPC, KC_DELT, KC_END,
        // right hand
             KC_JYEN,    KC_6,   KC_7,  KC_8,    KC_9,    KC_0,     KC_MINS,
             TO(WINDOWS), KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,  KC_LBRC,
                         KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
             TO(SYMB),  KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                              KC_DOWN,  KC_UP,   KC_RBRC, KC_BSLS,    KC_RO,
             KC_RALT, KC_RCTL,
             KC_PGUP,
             KC_PGDN, KC_ENT, KC_SPC

    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();    
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case WINDOWS:
            ergodox_right_led_1_on();
            break;
        case SYMB:
            ergodox_right_led_2_on();
            break;
        case OSX:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

};
