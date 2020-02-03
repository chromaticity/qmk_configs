#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_MPLY, KC_F22, KC_CALC,
        KC_F12, MO(1), KC_F23,
        KC_F22, KC_STOP, KC_F24
    ),

    [1] = LAYOUT(
        _______, KC_CAPS, KC_CALC,
        KC_MPRV, _______, KC_MYCM,
        BL_TOGG, KC_STOP, KC_F24
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        /* Top-left encoder, for prev/next song */
        case 0:
            if (clockwise) {
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_MPRV);
            }
            break;
    }
}
