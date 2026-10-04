#include <iostream>
#include "fbdev.h"

int main()
{
    std::cout << "My FB-Dev app!\n";

    Color blue(20,30,40,255);

    blue.print_color_as_rgb();

    return 0;
}
