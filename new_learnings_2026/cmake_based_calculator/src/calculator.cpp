#include <iostream>
#include <stdexcept>

#include "calculator/calculator.hpp"

int Calculator::add(int a, int b){
    std::cout << "\n Adding : ";
    return a+b;
}

int Calculator::sub(int a, int b){
    return a-b;
}

int Calculator::mul(int a, int b){
    return a*b;
}

double Calculator::div(double a, double b){
    if(b==0.0)
        throw std::runtime_error("Division by zero");

    return a/b;
}