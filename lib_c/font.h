
#pragma once

#include <stdint.h>

struct font_t {
    uint8_t font_height;
    const char* char_values;
    const char** char_addr;
    const char* char_width;
};

int find_char_index(const struct font_t* font, char c, const char** char_ptr, char* char_width);

