# Bootloader selection
# BOOTLOADER = rp2040

# COMBO_ENABLE = yes
RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no
MOUSEKEY_ENABLE = no
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
# VIA_ENABLE = yes    # Enable VIA
WPM_ENABLE = yes

# Link Time Optimization (Reduces compiled size)
LTO_ENABLE = yes

ifeq ($(OLED_ENABLE),yes)
	SRC += ./oled.c
endif
