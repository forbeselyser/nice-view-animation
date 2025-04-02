/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <lvgl.h>

LV_IMG_DECLARE(slime_00);
LV_IMG_DECLARE(slime_01);
LV_IMG_DECLARE(slime_02);
LV_IMG_DECLARE(slime_03);
LV_IMG_DECLARE(slime_04);
LV_IMG_DECLARE(slime_05);
LV_IMG_DECLARE(slime_06);
LV_IMG_DECLARE(slime_07);
LV_IMG_DECLARE(slime_08);
LV_IMG_DECLARE(slime_09);
LV_IMG_DECLARE(slime_10);

// Expose the array of image pointers
extern const lv_img_dsc_t *slime_imgs[];

// Define the frame count
#define SLIME_FRAME_COUNT 11
