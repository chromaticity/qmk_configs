#include QMK_KEYBOARD_H

#define MEDIA_KEY_DELAY 10

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_MUTE, KC_PWR, KC_CALC,
        KC_MPRV, KC_MPLY, KC_MNXT,
        BL_TOGG, KC_STOP, KC_F24
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        /* Top-left encoder (volume) */
        case 0:
            if (clockwise) {
                tap_code(KC_PGUP);
            } else {
                tap_code(KC_PGDN);
            }
            break;
    }
}
