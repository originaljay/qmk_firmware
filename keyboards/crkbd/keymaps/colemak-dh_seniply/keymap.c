#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_LCTL, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, MO(4), MO(1), KC_LSFT, KC_SPC, MO(2), MO(3)),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_WBAK, KC_FIND, KC_WFWD, KC_INS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PAUS, KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_RALT, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_NO, KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), KC_LGUI, LCTL(KC_V), KC_ENT, KC_BSPC, KC_TAB, KC_APP, KC_PSCR, KC_NO, KC_NO, MO(1), KC_SPC, KC_ENT, KC_NO, TO(5)),
	[2] = LAYOUT_split_3x6_3(KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_EQL, KC_GRV, KC_COLN, KC_SCLN, KC_PLUS, KC_BSPC, KC_LCTL, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CIRC, KC_ASTR, KC_LPRN, KC_LCBR, KC_LBRC, KC_MINS, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_BSLS, KC_PIPE, KC_AMPR, KC_TILD, KC_RPRN, KC_RCBR, KC_RBRC, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_SPC, MO(2), KC_NO),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRIU, KC_F12, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_PAUS, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_BRID, KC_F11, KC_F4, KC_F5, KC_F6, KC_VOLU, KC_NO, KC_NO, KC_MUTE, KC_VOLD, RCS(KC_C), KC_VOLU, RCS(KC_V), KC_F10, KC_F1, KC_F2, KC_F3, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_ENT, KC_NO, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(RGB_HUD, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, KC_NUM, KC_PEQL, KC_7, KC_8, KC_9, KC_PPLS, QK_BOOT, RGB_HUI, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_RALT, KC_PAST, KC_4, KC_5, KC_6, KC_PMNS, KC_NO, RGB_TOG, RGB_RMOD, RGB_MOD, KC_TAB, KC_BSPC, KC_ENT, KC_0, KC_1, KC_2, KC_3, KC_PSLS, KC_NO, KC_TRNS, KC_NO, KC_LSFT, KC_SPC, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_NO, MO(6), KC_SPC, KC_RSFT, KC_RALT, KC_TRNS),
	[6] = LAYOUT_split_3x6_3(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_HOME, KC_UP, KC_END, KC_ASTR, KC_EQL, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_MINS, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MUTE, KC_BSPC, KC_TAB, KC_PGUP, KC_PSCR, KC_PGDN, KC_NO, KC_TRNS, KC_NO, KC_ENT, KC_RSFT, TO(0))
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




