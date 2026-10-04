#include <iostream>
#include "calculator/calculator.hpp"

int main()
{
    std::cout << "My Calculator App \n";

    Calculator c;

    std::cout << "ADD : " << c.add(2,4) << std::endl;
    std::cout << "SUB : " << c.sub(20,4) << std::endl;
    std::cout << "MUL : " << c.mul(2,4) << std::endl;
    std::cout << "DIV : " << c.div(20,4) << std::endl;    

    return 0;
}