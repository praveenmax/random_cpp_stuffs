#pragma once

#include <cstdint>

struct Color {
    uint32_t value = 0;

    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    {
        value = (r << 0) | (g << 8) | (b << 16) | (a << 24);
    }
    
    void print_color_as_rgb() const;
};



