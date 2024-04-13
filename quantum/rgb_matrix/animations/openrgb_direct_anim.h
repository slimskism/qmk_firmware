#ifdef OPENRGB_ENABLE

RGB_MATRIX_EFFECT(OPENRGB_DIRECT)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

#if !defined(OPENRGB_DIRECT_MODE_STARTUP_RED)
#    define OPENRGB_DIRECT_MODE_STARTUP_RED 0
#endif

#if !defined(OPENRGB_DIRECT_MODE_STARTUP_GREEN)
#    define OPENRGB_DIRECT_MODE_STARTUP_GREEN 0
#endif

#if !defined(OPENRGB_DIRECT_MODE_STARTUP_BLUE)
#    define OPENRGB_DIRECT_MODE_STARTUP_BLUE 255
#endif

RGB                  g_openrgb_direct_mode_colors[DRIVER_LED_TOTAL] = {[0 ... DRIVER_LED_TOTAL - 1] = {OPENRGB_DIRECT_MODE_STARTUP_GREEN, OPENRGB_DIRECT_MODE_STARTUP_RED, OPENRGB_DIRECT_MODE_STARTUP_BLUE}};


bool OPENRGB_DIRECT(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        #ifdef OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
        float brightness = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color(
            i,
            brightness * g_openrgb_direct_mode_colors[i].r,
            brightness * g_openrgb_direct_mode_colors[i].g,
            brightness * g_openrgb_direct_mode_colors[i].b
        );
        #else
        rgb_matrix_set_color(
            i,
            g_openrgb_direct_mode_colors[i].r,
            g_openrgb_direct_mode_colors[i].g,
            g_openrgb_direct_mode_colors[i].b
        );
        #endif
    }
    return led_max < DRIVER_LED_TOTAL;
}
#    endif
#endif
