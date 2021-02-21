#pragma once

#define MASTER_LEFT

#define USE_SERIAL_PD2

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 200

#define IGNORE_MOD_TAP_INTERRUPT

#define USB_POLLING_INTERVAL_MS 1
#define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"