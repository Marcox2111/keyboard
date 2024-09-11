/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_KYRIALOGO
#define LV_ATTRIBUTE_IMG_KYRIALOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_KYRIALOGO
    uint8_t kyrialogo_map[] = {

        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/

        0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00,
        0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xfc, 0x07, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff,
        0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x7f,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xf0,
        0x00, 0x3f, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xe0, 0xff, 0x80, 0x00, 0x07, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xfe, 0x00, 0x00, 0x01, 0xfe, 0x0f,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf8, 0x0f,
        0x03, 0xc0, 0x7f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0x87, 0xf0, 0x3f, 0x03, 0xf0, 0x3f, 0x87, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xe0, 0xfe, 0x49, 0xfc, 0x1f, 0xc3,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xc3, 0xfe,
        0x49, 0xff, 0x0f, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xfe, 0x3f, 0x87, 0xfc, 0xcc, 0xff, 0x87, 0xf1, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0x0f, 0xfc, 0xcc, 0xff, 0xc3, 0xf0,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7e, 0x1f, 0xf9,
        0xce, 0x7f, 0xe1, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf8, 0x7c, 0x3f, 0xf9, 0xce, 0x7f, 0xf0, 0xf8, 0x7f, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xf8, 0xfc, 0x7f, 0xf3, 0xcf, 0x3f, 0xf8, 0xfc,
        0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf8, 0x00, 0x03,
        0xcf, 0x00, 0x00, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf1, 0xf8, 0x00, 0x03, 0xcf, 0x00, 0x00, 0x7e, 0x3f, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0x1f, 0xf3, 0xcf, 0x3f, 0xe0, 0x3e,
        0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0x07, 0xf9,
        0xce, 0x7f, 0x80, 0x3e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xe3, 0xf0, 0x61, 0xf9, 0xce, 0x7e, 0x18, 0x3f, 0x1e, 0x7f, 0xff, 0xff,
        0xff, 0xe7, 0xff, 0xff, 0xe3, 0xe3, 0x38, 0x7c, 0xcc, 0xf8, 0x73, 0x1f,
        0x1e, 0x7f, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xe3, 0xe3, 0x3e, 0x1c,
        0xcc, 0xe1, 0xf3, 0x1f, 0x1e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xe3, 0xe3, 0x9f, 0x86, 0x49, 0x87, 0xe7, 0x1f, 0x1e, 0x7f, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0x9f, 0xe0, 0x48, 0x1f, 0xe7, 0x1f,
        0x1e, 0x79, 0x9f, 0x99, 0x87, 0x87, 0xe0, 0x7f, 0xe3, 0xe3, 0xcf, 0xf8,
        0x00, 0x7f, 0xcf, 0x1f, 0x1e, 0x79, 0x9f, 0x99, 0x87, 0x87, 0xe0, 0x7f,
        0xe3, 0xe3, 0xcf, 0xfe, 0x01, 0xff, 0xcf, 0x1f, 0x1e, 0x67, 0x9f, 0x98,
        0x79, 0xe7, 0xff, 0x9f, 0xe3, 0xe3, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0x1f,
        0x1e, 0x67, 0x9f, 0x98, 0x79, 0xe7, 0xff, 0x9f, 0xe3, 0xe3, 0xe0, 0x00,
        0x00, 0x00, 0x1f, 0x1f, 0x1e, 0x1f, 0xe0, 0x19, 0xff, 0xe7, 0xe0, 0x1f,
        0xe3, 0xe3, 0xcf, 0xfe, 0x01, 0xff, 0xcf, 0x1f, 0x1e, 0x1f, 0xe0, 0x19,
        0xff, 0xe7, 0xe0, 0x1f, 0xe3, 0xe3, 0xcf, 0xf8, 0x00, 0x7f, 0xcf, 0x1f,
        0x1e, 0x67, 0xff, 0x99, 0xff, 0xe7, 0x9f, 0x9f, 0xe3, 0xe3, 0x9f, 0xe0,
        0x48, 0x1f, 0xe7, 0x1f, 0x1e, 0x67, 0xff, 0x99, 0xff, 0xe7, 0x9f, 0x9f,
        0xe3, 0xe3, 0x9f, 0x86, 0x49, 0x87, 0xe7, 0x1f, 0x1e, 0x79, 0xe0, 0x79,
        0xff, 0x81, 0xe0, 0x1f, 0xe3, 0xe3, 0x3e, 0x1c, 0xcc, 0xe1, 0xf3, 0x1f,
        0x1e, 0x79, 0xe0, 0x79, 0xff, 0x81, 0xe0, 0x1f, 0xe3, 0xe3, 0x38, 0x7c,
        0xcc, 0xf8, 0x73, 0x1f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xe3, 0xf0, 0x61, 0xf9, 0xce, 0x7e, 0x18, 0x3f, 0x1f, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0x07, 0xf9, 0xce, 0x7f, 0x80, 0x3e,
        0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0x1f, 0xf3,
        0xcf, 0x3f, 0xe0, 0x3e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf1, 0xf8, 0x00, 0x03, 0xcf, 0x00, 0x00, 0x7e, 0x3f, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xf0, 0xf8, 0x00, 0x03, 0xcf, 0x00, 0x00, 0x7c,
        0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xfc, 0x7f, 0xf3,
        0xcf, 0x3f, 0xf8, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xf8, 0x7c, 0x3f, 0xf9, 0xce, 0x7f, 0xf0, 0xf8, 0x7f, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xfc, 0x7e, 0x1f, 0xf9, 0xce, 0x7f, 0xe1, 0xf8,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0x0f, 0xfc,
        0xcc, 0xff, 0xc3, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xfe, 0x3f, 0x87, 0xfc, 0xcc, 0xff, 0x87, 0xf1, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xc3, 0xfe, 0x49, 0xff, 0x0f, 0xe1,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xe0, 0xfe,
        0x49, 0xfc, 0x1f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0x87, 0xf0, 0x3f, 0x03, 0xf0, 0x3f, 0x87, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf8, 0x0f, 0x03, 0xc0, 0x7f, 0x0f,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xfe, 0x00,
        0x00, 0x01, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xe0, 0xff, 0x80, 0x00, 0x07, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0xf0, 0x00, 0x3f, 0xf8, 0x3f,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff,
        0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x03, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff,
        0xff, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00,
        0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff,
};

const lv_img_dsc_t kyrialogo = {
    .header.always_zero = 0,
    .header.w = 128,
    .header.h = 64,
    .data_size = 1032,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = kyrialogo_map,
};