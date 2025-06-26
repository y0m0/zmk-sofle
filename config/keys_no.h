#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define NO_OE_ALT_CODE \
    &macro_press &kp LALT \
        &kp KP_0 &kp KP_2 &kp KP_1 &kp KP_6 \
    &macro_release &kp LALT

#define NO_AE_ALT_CODE \
    &macro_press &kp LALT \
        &kp KP_0 &kp KP_1 &kp KP_9 &kp KP_8 \
    &macro_release &kp LALT

#define NO_AA_ALT_CODE \
    &macro_press &kp LALT \
        &kp KP_0 &kp KP_1 &kp KP_9 &kp KP_7 \
    &macro_release &kp LALT
