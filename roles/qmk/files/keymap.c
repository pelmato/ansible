#include QMK_KEYBOARD_H

// Cmd -> S et I
#define MODL_S LGUI_T(KC_S)
#define MODR_L RGUI_T(KC_L)

// Crtl -> E et T
#define MODL_D LCTL_T(KC_D)
#define MODR_K RCTL_T(KC_K)

// Alt -> N et R
#define MODL_F LALT_T(KC_F)
#define MODR_J LALT_T(KC_J)

// Touches speciales
#define MOD_1 KC_BSPC
#define MOD_2 LT(_NAV,KC_SPC)
#define MOD_3 MO(_FUN)
#define MOD_4 MO(_FUN)
#define MOD_5 LT(_NAV,KC_SPC)
#define MOD_6 RALT_T(KC_ENT)

#define CTRL_Z LCTL(KC_Z)
#define CTRL_A LCTL(KC_A)
#define CTRL_X LCTL(KC_X)
#define CTRL_C LCTL(KC_C)
#define CTRL_V LCTL(KC_V)
#define CTRL_Y LCTL(KC_Y)

enum layers {
    _BASE,
    _NAV,
    _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,  MODL_S,  MODL_D,  MODL_F,    KC_G,                         KC_H,  MODR_J,  MODR_K,  MODR_L, KC_SCLN, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MOD_1,   MOD_2,   MOD_3,      MOD_4,   MOD_5,   MOD_6
                                      //`--------------------------'  `--------------------------'

  ),

    [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,  KC_TAB, KC_HOME,   KC_UP,  KC_END, KC_PGUP,                      KC_PSLS,    KC_7,    KC_8,    KC_9,   KC_NO, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,  CTRL_A, KC_LEFT, KC_DOWN,KC_RIGHT, KC_PGDN,                      KC_PMNS,    KC_4,    KC_5,    KC_6,    KC_0,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  CTRL_Z,  CTRL_X,  CTRL_C,  CTRL_V,  CTRL_Y,                      KC_PCMM,    KC_1,    KC_2,    KC_3,  KC_DOT, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_DEL, _______, _______,    _______, _______,  KC_ESC
                                      //`--------------------------'  `--------------------------'
  ),

    [_FUN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,                        KC_NO,  MODR_J,  MODR_K,  MODR_L,   KC_NO,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_F9,  KC_F10,  KC_F11,  KC_F12,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_DEL, _______, _______,    _______, _______,  KC_ESC
                                      //`--------------------------'  `--------------------------'
  )

};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
