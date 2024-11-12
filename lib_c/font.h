
#pragma once

#include <stdint.h>

struct font {
    uint8_t font_height;
    const uint8_t* char_values;
    const uint8_t** char_addr;
    const uint8_t* char_width;
};

typedef struct font font_t;

int find_char_index(const struct font_t* font, uint8_t c, const uint8_t** char_ptr, uint8_t* char_width);

