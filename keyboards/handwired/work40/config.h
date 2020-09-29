#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xEEE8
#define PRODUCT_ID 0x0000
#define DEVICE_VER 0x0001
#define MANUFACTURER ivanjermakov
#define PRODUCT Work40
#define DESCRIPTION A handwired 40% ortholinear keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS \
	{ F4, F5, D0, D1 }
#define MATRIX_COL_PINS \
    { F6, F7, B1, B3, B2, B6, B5, B4, E6, D7, C6, D4 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 1
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 200

#define IGNORE_MOD_TAP_INTERRUPT

#define USB_POLLING_INTERVAL_MS 1
#define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD

#define NKRO_ENABLE
#define FORCE_NKRO
