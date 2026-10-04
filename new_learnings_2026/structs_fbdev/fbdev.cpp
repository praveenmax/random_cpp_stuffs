#include "fbdev.h"
#include <iostream>

void Color::print_color_as_rgb() const{
    std::cout << "Color Value (RGB) ["<< value << "]"
              << " | A: " << ( value >> 24 ) 
              << " | R: " << ( value & 0xFF )
              << " | G: " << (( value >> 8) & 0xFF)
              << " | B: " << (( value >> 16) & 0xFF);              
}

