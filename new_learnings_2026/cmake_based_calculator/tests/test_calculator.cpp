#include <cassert>
#include "calculator/calculator.hpp"

int main()
{
    Calculator c;
    assert(c.add(2, 3) == 5);
    assert(c.sub(10, 4) == 6);
    assert(c.mul(2, 4) == 8);
    assert(c.div(20, 4) == 15);

    return 0;
}