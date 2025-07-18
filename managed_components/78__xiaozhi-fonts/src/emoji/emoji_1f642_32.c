
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_EMOJI_1F642_32
#define LV_ATTRIBUTE_EMOJI_1F642_32
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_EMOJI_1F642_32
uint8_t emoji_1f642_32_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xf7,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x96,0xf7,0x76,0xff,0x76,0xff,0xd4,0xf6,0x00,0x00,0xef,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x96,0xf7,0xd7,0xff,0x37,0xff,0x55,0xff,0xd6,0xff,0x14,0xff,0x72,0xee,0xf3,0xdd,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf7,0xfd,0xff,0xff,0x35,0xf7,0xf8,0xff,0xd3,0xf6,0xf4,0xf6,0xb3,0xfe,0xd3,0xfe,0x12,0xe6,0xff,0xff,0xef,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x4f,0xf6,0xd2,0xfe,0x71,0xf6,0xf0,0xe5,0xd0,0xe5,0x4e,0xe5,0xf7,0xbd,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xdf,0xff,0xff,0xff,0x18,0xf7,0xf7,0xf6,0x9d,0xf7,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xf7,0xff,0xff,0xff,0xff,0xbf,0xf7,0xbf,0xf7,0x9f,0xef,0x00,0x00,0x00,0x00,0xff,0x7b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xf7,0xdf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0xbf,0xf7,0xff,0xff,0xbf,0xf7,0xbf,0xef,0x3c,0xc6,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0x7f,0xef,0x7f,0xef,0x7f,0xef,0xff,0xff,0x9f,0xef,0x3f,0xdf,0x00,0x00,0xff,0x7b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0x9f,0xf7,0x7f,0xef,0x7f,0xef,0x5f,0xef,0x5f,0xe7,0xdf,0xf7,0x5f,0xe7,0xff,0xe7,0x5f,0xad,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xdf,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xbf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0x9f,0xf7,0x7f,0xef,0x7e,0xef,0x5e,0xef,0x5e,0xe7,0x3e,0xe7,0xdf,0xf7,0x3f,0xdf,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xf7,0xbf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0x9f,0xf7,0x7f,0xef,0x7e,0xef,0x7e,0xef,0x5e,0xef,0x5e,0xe7,0x3e,0xe7,0x3f,0xe7,0x7f,0xef,0x5f,0xdf,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xf7,0xdf,0xff,0xbf,0xf7,0xbf,0xf7,0x9f,0xf7,0x9f,0xf7,0x7f,0xf7,0x7e,0xef,0x7f,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xe7,0x3e,0xe7,0x1e,0xdf,0x9f,0xef,0x3f,0xdf,0x00,0x00,0x5f,0xad,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xdf,0xff,0xff,0xff,0x5e,0xef,0xbf,0xf7,0x9f,0xf7,0x7e,0xef,0x7e,0xef,0x7e,0xef,0x9f,0xf7,0x3e,0xe7,0x9f,0xf7,0x3e,0xef,0x3e,0xe7,0x3e,0xe7,0x1e,0xdf,0x1e,0xdf,0x3f,0xe7,0x7f,0xe7,0x00,0x00,0xff,0x7b,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0xdf,0xf7,0xff,0xff,0x55,0xa5,0x4d,0x6b,0x18,0xc6,0xff,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0xb3,0x94,0x0d,0x63,0xb7,0xb5,0x9f,0xf7,0x3e,0xe7,0x3e,0xe7,0x3e,0xe7,0xfe,0xde,0x9f,0xef,0x5f,0xe7,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xdf,0xff,0x7e,0xff,0xbc,0xf6,0xdd,0xf6,0x9f,0xff,0x9b,0xd6,0x9e,0xf7,0x9e,0xf7,0x76,0xad,0x76,0xad,0x35,0xa5,0xd8,0xbd,0x1c,0xe7,0x1d,0xe7,0x9b,0xd6,0x1d,0xef,0x1b,0xe6,0x1b,0xe6,0xdd,0xe6,0x1e,0xdf,0x7f,0xef,0x3f,0xdf,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xbf,0xff,0x7c,0xf6,0x3b,0xf6,0x3b,0xf6,0x9c,0xf6,0xff,0xff,0xbf,0xf7,0xff,0xff,0xf4,0x9c,0xee,0x92,0x0e,0x93,0xb7,0xb5,0xdf,0xff,0x5e,0xef,0x5e,0xef,0xda,0xe5,0x9a,0xed,0x9a,0xe5,0xda,0xe5,0xfd,0xde,0x1e,0xdf,0x7f,0xe7,0xfe,0xde,0x00,0x00,0xff,0xaf,0x00,0x00,
    0xff,0x7f,0xff,0xff,0xff,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,0x7e,0xff,0x3b,0xf6,0x5c,0xf6,0x5b,0xf6,0x5b,0xf6,0x7e,0xf7,0x9f,0xf7,0x9e,0xf7,0xdf,0xff,0x7e,0xff,0x7f,0xff,0x9f,0xf7,0x5e,0xef,0x5e,0xef,0xdd,0xe6,0xba,0xed,0xba,0xe5,0xba,0xe5,0x9a,0xe5,0xbd,0xde,0x1e,0xdf,0xfe,0xde,0xfe,0xde,0x7f,0xe7,0x00,0x00,0xff,0xff,
    0xff,0xff,0x00,0x00,0xdf,0xff,0xff,0xff,0xbf,0xf7,0xdf,0xff,0xbf,0xf7,0x9c,0xf6,0x3b,0xf6,0x1b,0xf6,0xbc,0xf6,0xbf,0xf7,0x9f,0xf7,0x9e,0xf7,0x7e,0xef,0x7e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x3e,0xef,0x1d,0xe7,0xfa,0xe5,0x99,0xe5,0x79,0xe5,0xda,0xe5,0xdd,0xde,0x1e,0xdf,0xbc,0xd6,0x5f,0xe7,0x1e,0xdf,0x00,0x00,0xff,0xff,
    0xff,0xff,0x00,0x00,0xdf,0xff,0xff,0xff,0xbf,0xf7,0xdf,0xff,0xdf,0xf7,0x9f,0xf7,0xfd,0xf6,0xfd,0xf6,0x9f,0xf7,0x9f,0xf7,0x9e,0xf7,0x7e,0xf7,0x7e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x3d,0xef,0x3d,0xef,0x3d,0xe7,0xfd,0xe6,0x5b,0xe6,0x3b,0xe6,0xbd,0xde,0xdd,0xde,0xfe,0xde,0x9c,0xce,0x1e,0xdf,0x1e,0xdf,0x00,0x00,0x5f,0xad,
    0xff,0xff,0x00,0x00,0xbf,0xf7,0xff,0xff,0x7e,0xf7,0xbf,0xf7,0xbf,0xf7,0xbf,0xf7,0xbf,0xf7,0xbf,0xf7,0x9e,0xf7,0x7e,0xf7,0x7e,0xf7,0x7e,0xef,0x5e,0xef,0x5e,0xef,0x3d,0xef,0x3d,0xef,0x3d,0xe7,0x1d,0xe7,0x1d,0xe7,0xfd,0xe6,0xfd,0xde,0xfd,0xde,0xdd,0xd6,0xdd,0xde,0xdd,0xd6,0x5b,0xce,0x3f,0xe7,0xfe,0xde,0x00,0x00,0xff,0xbf,
    0xff,0xff,0x00,0x00,0x9e,0xf7,0xff,0xff,0x9e,0xf7,0x9f,0xf7,0xdf,0xff,0x9e,0xf7,0x9e,0xf7,0x7e,0xf7,0x7e,0xf7,0x7e,0xf7,0x5e,0xef,0x5e,0xef,0x5d,0xef,0x3d,0xef,0x3d,0xe7,0x1d,0xe7,0x1d,0xe7,0xfd,0xe6,0xfc,0xe6,0xdc,0xde,0xdc,0xde,0xbc,0xde,0xbc,0xd6,0x3e,0xe7,0xdd,0xde,0xbc,0xde,0x1e,0xdf,0xfd,0xde,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x00,0x00,0x3c,0xef,0x5d,0xf7,0xbb,0xde,0x7e,0xef,0xff,0xff,0x7e,0xef,0x5e,0xef,0x5e,0xef,0x5d,0xef,0x5d,0xef,0x3d,0xef,0x3d,0xef,0x1d,0xe7,0xfc,0xe6,0xfc,0xe6,0xfc,0xe6,0xdc,0xde,0xdc,0xde,0xbc,0xde,0xbc,0xd6,0xbc,0xd6,0x3e,0xe7,0xdc,0xde,0x7a,0xd6,0xdc,0xde,0x9b,0xd6,0x00,0x00,0xff,0x7b,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x9e,0xf7,0x7e,0xf7,0xdf,0xff,0x5d,0xef,0x3d,0xef,0x3d,0xef,0x1d,0xe7,0x1c,0xe7,0xfc,0xe6,0xfc,0xe6,0xdc,0xe6,0xdc,0xde,0xdc,0xde,0xbb,0xde,0xbb,0xde,0x9b,0xd6,0xdc,0xde,0x5e,0xef,0xfd,0xde,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xd3,0xcc,0x5d,0xef,0x3d,0xef,0x1d,0xe7,0xfc,0xe6,0xfc,0xe6,0xfc,0xe6,0xdc,0xe6,0xdb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xdc,0xde,0xfc,0xde,0xfd,0xde,0x00,0x00,0xff,0xff,0xff,0x7b,0xff,0xff,0x5f,0xad,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x1d,0xef,0x7e,0xf7,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0xbb,0xde,0x9b,0xde,0x9b,0xde,0x9b,0xd6,0x7a,0xd6,0xfd,0xe6,0x9b,0xd6,0x00,0x00,0xff,0xbd,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x9e,0xf7,0xdf,0xff,0xfc,0xe6,0x9b,0xde,0x39,0xce,0x7b,0xde,0x19,0xce,0x39,0xce,0x9b,0xde,0x5a,0xd6,0x3a,0xce,0x5a,0xce,0xfe,0xe6,0xdd,0xd6,0xff,0xff,0xff,0xbf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x9f,0xf7,0xff,0xff,0x5d,0xf7,0x1c,0xe7,0x9b,0xde,0xdc,0xe6,0xf8,0xc5,0x5a,0xd6,0x5d,0xf7,0xdc,0xe6,0xdc,0xde,0xbb,0xde,0x3e,0xe7,0xdd,0xde,0x00,0x00,0xff,0xbf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x9e,0xf7,0xff,0xff,0x7d,0xf7,0x3d,0xef,0xdc,0xe6,0x3e,0xef,0xf9,0xc5,0xdb,0xe6,0xdf,0xff,0x3d,0xef,0x1c,0xe7,0xbc,0xde,0x7f,0xef,0xdd,0xde,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x7d,0xef,0x9e,0xf7,0xdf,0xff,0x7e,0xf7,0x3d,0xef,0x9b,0xd6,0xd8,0xbd,0xfb,0xe6,0x5d,0xf7,0xdf,0xff,0x7e,0xf7,0x3d,0xef,0xdc,0xde,0xfd,0xd6,0xff,0xff,0xff,0x7b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0xba,0xd6,0x3d,0xef,0xdc,0xe6,0x9b,0xd6,0xf7,0xbd,0x00,0x00,0x00,0x00,0x9a,0xde,0x3c,0xef,0xfc,0xe6,0xdc,0xde,0xd9,0xcd,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x04,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x9a,0xbb,0x4c,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x22,0x63,0x0b,0xb1,0xff,0xff,0xf0,0x08,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x01,0x5a,0xff,0xcd,0xf7,0xff,0xff,0xb2,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x03,0x00,0x00,0x5e,0xfd,0xfc,0xcf,0x77,0x09,0x04,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x00,0x00,0x0c,0x33,0x41,0xcf,0xe7,0x59,0x25,0x0c,0x00,0x00,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x33,0x9c,0xe3,0xff,0xff,0xff,0xfe,0xff,0xff,0xe7,0xa1,0x37,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x09,0x91,0xfc,0xff,0xff,0xff,0xfc,0xff,0xff,0xfd,0xfe,0xff,0xff,0xfe,0x94,0x09,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x17,0xc7,0xff,0xfe,0xfb,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfb,0xfd,0xff,0xc5,0x14,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x0f,0xd0,0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xc8,0x09,0x03,0x01,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x03,0x00,0xab,0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xff,0x98,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x51,0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0x39,0x00,0x03,0x00,0x00,0x00,
    0x00,0x00,0x00,0x01,0x03,0xd2,0xfe,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xb3,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x3d,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xf7,0x1e,0x00,0x02,0x00,0x00,
    0x00,0x00,0x04,0x01,0x83,0xfe,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0x54,0x01,0x04,0x00,0x00,0x00,0x00,0x03,0x00,0xb9,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0x9d,0x00,0x04,0x00,0x00,
    0x00,0x03,0x00,0x5b,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0x64,0x00,0x03,0x00,0x02,0x01,0x17,0xef,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xf5,0x1f,0x00,0x02,
    0x04,0x00,0x7a,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0x85,0x00,0x04,0x03,0x00,0xb4,0xfe,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xfe,0xb7,0x00,0x03,
    0x04,0x00,0xa0,0xfe,0xf9,0xfc,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfc,0xf8,0xff,0xa2,0x00,0x04,0x03,0x00,0x3f,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0x3b,0x00,0x03,
    0x00,0x02,0x00,0x61,0xd3,0xc0,0xd1,0xff,0xfa,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfb,0xff,0xc2,0xc3,0xcb,0x51,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x12,0xc1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xab,0x05,0x00,0x00,0x00,0x01,0x00,0x00,
    0x00,0x00,0x00,0x03,0x00,0x02,0x00,0x05,0x7f,0xea,0xfd,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfd,0xe6,0x6f,0x00,0x01,0x02,0x01,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x00,0x7a,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0x73,0x00,0x04,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x03,0x8f,0xff,0xfb,0xff,0xfc,0xff,0x80,0x8b,0xff,0xfb,0xff,0xfb,0xff,0x84,0x03,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x99,0xfe,0xfb,0xff,0xfb,0xfd,0x61,0x6d,0xfe,0xfb,0xff,0xfb,0xfd,0x90,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x8b,0xff,0xf8,0xfb,0xf8,0xff,0x5c,0x6e,0xff,0xf7,0xfb,0xf8,0xff,0x83,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x2c,0xe6,0xff,0xff,0xff,0xdf,0x16,0x28,0xf0,0xff,0xff,0xff,0xe0,0x25,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x13,0x53,0x6b,0x54,0x10,0x00,0x00,0x1d,0x5d,0x6c,0x50,0x0f,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t emoji_1f642_32 = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 32,
  .header.h = 32,
  .header.stride = 64,
  .data_size = sizeof(emoji_1f642_32_map),
  .data = emoji_1f642_32_map,
};

