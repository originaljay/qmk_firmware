// Copyright 2022 Álvaro Cortés (@ACortesDev)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define MASTER_LEFT
#define DYNAMIC_KEYMAP_LAYER_COUNT 7
// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 200

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 5
    #define RGB_MATRIX_SPD_STEP 10

    // Effects
    /* Enable the animations you want/need.  You may need to enable only a small number of these because       *
    * they take up a lot of space.  Enable and confirm that you can still successfully compile your firmware. */
    // RGB Matrix Animation modes. Explicitly enabled
    // For full list of effects, see:
    // https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
    #define ENABLE_RGB_MATRIX_ALPHAS_MODS
    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_BAND_SAT
    #define ENABLE_RGB_MATRIX_BAND_VAL
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    //#define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    //#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    //#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    //#define ENABLE_RGB_MATRIX_DUAL_BEACON
    //#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    //#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    //#define ENABLE_RGB_MATRIX_RAINDROPS
    //#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    #define ENABLE_RGB_MATRIX_HUE_BREATHING
    //#define ENABLE_RGB_MATRIX_HUE_PENDULUM
    //#define ENABLE_RGB_MATRIX_HUE_WAVE
    #define ENABLE_RGB_MATRIX_PIXEL_RAIN
    #define ENABLE_RGB_MATRIX_PIXEL_FLOW
    #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
    // enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
    // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    //#define ENABLE_RGB_MATRIX_SPLASH
    //#define ENABLE_RGB_MATRIX_MULTISPLASH
    //#define ENABLE_RGB_MATRIX_SOLID_SPLASH
    //#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#ifdef OLED_ENABLE
    #define SPLIT_LAYER_STATE_ENABLE
    #define SPLIT_LED_STATE_ENABLE
    #define SPLIT_WPM_ENABLE
    #define SPLIT_MODS_ENABLE
    #define SPLIT_OLED_ENABLE
    #define OLED_TIMEOUT 60000
    #define OLED_FONT_H "keyboards/crkbd/keymaps/colemak-dh_seniply/glcdfont.c"
#endif
