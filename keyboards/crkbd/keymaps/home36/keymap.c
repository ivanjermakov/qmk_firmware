/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

/*
 * Layer switchers
 */
#define L_NAV_L LT(_NAV, KC_A)
#define L_NAV_R LT(_NAV, KC_ENT)
#define L_DIGTS LT(_DGS, KC_D)
#define L_FUNKS LT(_FNS, KC_F)
#define L_BRACS LT(_BRS, KC_B)
#define L_SYMB1 LT(_SY1, KC_R)
#define L_SYMB2 LT(_SY2, KC_U)
#define L_SYSTM LT(_SYS, KC_APP)

#define SFT_SPC SFT_T(KC_SPC)
#define ALT_TAB LALT_T(KC_TAB)
#define CTL_ESC LCTL_T(KC_ESC)
#define SFT_A SFT_T(KC_A)
#define SFT_ENT KC_SFTENT

enum custom_keycodes {
		    BSPC_DEL = SAFE_RANGE,
};

enum work40_layers {
    _QWE = 0,
    _NAV = 1,
    _DGS = 2,
    _FNS = 3,
    _BRS = 4,
    _SY1 = 5,
    _SY2 = 6,
    _SYS = 7,
    _BLK = 8
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWE] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,-----------------------------------------------------.
         KC_Q,    KC_W,    KC_E, L_SYMB1,    KC_T,                         KC_Y, L_SYMB2,    KC_I,    KC_O,    KC_P,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      L_NAV_L,    KC_S, L_DIGTS, L_FUNKS,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, L_NAV_R,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_Z,    KC_X,    KC_C,    KC_V, L_BRACS,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, CTL_ESC, SFT_SPC,    SFT_SPC, ALT_TAB, L_SYSTM
                             //`--------------------------'  `--------------------------'

  ),

  [_NAV] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
       KC_ESC,  KC_ESC, KC_PGUP,  KC_INS, _______,                      _______, KC_BSPC,   KC_UP,  KC_DEL, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_TAB, KC_HOME, KC_PGDN,  KC_END, _______,                      _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_DGS] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, _______, _______, _______,                      _______,    KC_1,    KC_2,    KC_3, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______,    KC_4,    KC_5,    KC_6, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______,    KC_7,    KC_8,    KC_9, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______,    KC_0
  ),

  [_FNS] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, _______, _______, _______,                      _______,   KC_F1,   KC_F2,   KC_F3,  KC_F10,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______,   KC_F4,   KC_F5,   KC_F6,  KC_F11,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______,   KC_F7,   KC_F8,   KC_F9,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_BRS] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, _______, _______, _______,                      _______, KC_LBRC, KC_LCBR, KC_LPRN,   KC_LT, 
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______, KC_RBRC, KC_RCBR, KC_RPRN,   KC_GT,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_SY1] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, _______, _______, _______,                      _______, KC_UNDS, KC_SCLN, _______, KC_PERC,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      KC_MINS, KC_QUES, KC_ASTR, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      KC_HASH, KC_AMPR, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_SY2] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
       KC_DQT, _______,  KC_EQL, KC_CIRC, KC_TILD,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_AT, KC_SLSH,  KC_DLR, KC_QUOT,  KC_GRV,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, KC_EXLM, KC_COLN, KC_PIPE, KC_BSLS,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_SYS] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, KC_BRIU, KC_VOLU, RGB_TOG,                      _______, RGB_VAI, RGB_SAI, RGB_HUI, KC_PSCR,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, KC_BRIU, KC_VOLD, _______,                      _______, RGB_VAD, RGB_SAD, RGB_HUD, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, KC_MUTE, RGB_M_B,                      RGB_MOD, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  ),

  [_BLK] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    _______, _______, _______
                             //`--------------------------'  `--------------------------'
  )

};


#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_master) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }
    return rotation;
}

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case _QWE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case _NV1:
            oled_write_ln_P(PSTR("Navigation 1"), false);
            break;
        case _NV2:
            oled_write_ln_P(PSTR("Navigation 2"), false);
            break;
		default:
            oled_write_ln_P(PSTR("Other"), false);
            break;
    }
}

char keylog_str[24] = {};

const char code_to_name[60] = {' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\', '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        keycode = keycode & 0xFF;
    }
    if (keycode < 60) {
        name = code_to_name[keycode];
    }

    // update keylog
    snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c", record->event.key.row, record->event.key.col, keycode, name);
}

void oled_render_keylog(void) { oled_write(keylog_str, false); }

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */                                                    
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

#endif  // OLED_DRIVER_ENABLE


#define LSFT_MASK (get_mods() & MOD_BIT(KC_LSFT))
#define RSFT_MASK (get_mods() & MOD_BIT(KC_RSFT))
#define SFT_MASK  (LSFT_MASK || RSFT_MASK)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

#ifdef OLED_DRIVER_ENABLE
    if (record->event.pressed) {
        set_keylog(keycode, record);
	}
#endif

    static uint8_t saved_mods   = 0;

    switch (keycode) {
		case BSPC_DEL:
            if (record->event.pressed) {
                saved_mods = get_mods() & MOD_MASK_SHIFT;

                if (saved_mods == MOD_MASK_SHIFT) {
                    register_code(KC_DEL);
                } else if (saved_mods) {
                    del_mods(saved_mods);
                    register_code(KC_DEL);
                    add_mods(saved_mods);
                } else {
                    register_code(KC_BSPC);
                }
            } else {
                unregister_code(KC_DEL);
                unregister_code(KC_BSPC);
            }
            return false;
	}
	return true;
}


