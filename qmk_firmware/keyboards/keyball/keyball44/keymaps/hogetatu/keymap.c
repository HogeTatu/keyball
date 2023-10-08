/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include "quantum.h"

enum user_keycodes {
    MOUSE_END = QK_USER_0,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_universal(
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPC  ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_INT1  ,
                 KC_LWIN,KC_LALT,LT(3,KC_GRAVE)       ,LT(4,KC_SPC),KC_RCTL,                   LT(2,KC_ENT),LT(1,KC_SPC), _______      , _______  , KC_PSCR
  ),

  [1] = LAYOUT_universal(
    KC_ESC   , KC_PSLS   , KC_PAST  , KC_PMNS  , KC_PPLS  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , KC_DEL  ,
    _______  , KC_1      , KC_2     , KC_3     , KC_4     , KC_5     ,                                        _______  , KC_MINS  , KC_EQL   , KC_INT3  , _______  , _______  ,
    _______  , KC_6      , KC_7     , KC_8     , KC_9     , KC_0     ,                                        _______  , KC_RBRC  , KC_BSLS  , KC_LBRC  , _______  , _______  ,
                  _______  , _______ , _______  ,         MO(5)    , _______  ,                    _______  , _______  , _______       , _______  , KC_PAUS
  ),

  [2] = LAYOUT_universal(
    _______  ,  _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , S(KC_1)   , S(KC_2)  , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                                        _______  ,S(KC_MINS),S(KC_EQL) ,S(KC_INT3), _______  , _______  ,
    _______  , S(KC_6)   , S(KC_7)  , S(KC_8)  , S(KC_9)  , S(KC_0)  ,                                        _______  ,S(KC_RBRC),S(KC_BSLS),S(KC_LBRC), _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                    _______  , _______  , _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , _______  , _______  , _______  , _______  , _______  ,                                        RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , SCRL_DVI ,                                        RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , SCRL_DVD ,                                        CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , _______  , KBC_SAVE ,
                  QK_BOOT    , KBC_RST  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , KBC_RST  , QK_BOOT
  ),

  [4] = LAYOUT_universal(
    KC_ESC   ,  _______   , KC_F1    , KC_F2   , KC_F3    , KC_F4    ,                                         _______  , _______  , _______  , _______  , KC_INS   , KC_DEL  ,
    _______  ,  _______   , KC_F5    , KC_F6   , KC_F7    , KC_F8    ,                                         KC_PGUP  , KC_HOME  , KC_UP    , KC_END   , _______  , _______  ,
    _______  ,  _______   , KC_F9    , KC_F10  , KC_F11   , KC_F12   ,                                         KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   KC_RSFT  , MO(5)    , _______       , _______  , KC_PAUS
  ),

  [5] = LAYOUT_universal(
    _______  ,  _______  , _______  , _______  , _______  , _______  ,                                      _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  ,  _______  , _______  , _______  , _______  , _______  ,                                      _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  ,  _______  , _______  , _______  , _______  , _______  ,                                      _______  , _______  , _______  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                    _______  , _______  , _______       , _______  , _______
  ),

  [6] = LAYOUT_universal(
    _______  ,  _______   , KC_F1    , KC_F2   , KC_F3    , KC_F4    ,                                     _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  ,  _______   , KC_F5    , KC_F6   , KC_F7    , KC_F8    ,                                     _______  , _______  , _______  , KC_BTN2  , KC_BTN3  , _______  ,
    _______  ,  _______   , KC_F9    , KC_F10  , KC_F11   , KC_F12   ,                                     _______  , _______  , KC_BTN1  , _______  , _______  , _______  ,
                  _______  , _______ , _______  ,         SCRL_TO  , _______  ,                   _______  , MOUSE_END , _______       , _______  , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    if (get_highest_layer(remove_auto_mouse_layer(state, true)) == 3) {
      state = remove_auto_mouse_layer(state, false);
      set_auto_mouse_enable(false);
      keyball_set_scroll_mode(true);
    }
    else if (get_highest_layer(state) == 4 && keyball_get_scroll_mode()) {
      state = remove_auto_mouse_layer(state, false);
      set_auto_mouse_enable(false);
    }
    else {
      set_auto_mouse_enable(true);
      keyball_set_scroll_mode(false);
    }
    return state;
}

void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
    if (keycode == SCRL_TO || keycode == SCRL_MO) {
      return true;
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case MOUSE_END: {
          auto_mouse_layer_off();
        }
        return false;
      case KC_LEFT_CTRL ... KC_RIGHT_GUI: {
          auto_mouse_layer_off();
        }
        break;
      default:
        break;
    }
    return true;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
