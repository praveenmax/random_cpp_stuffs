cmake_minimum_required(VERSION 3.20)

project(Calculator
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Static library
add_library(calculator_lib STATIC
    src/calculator.cpp
)

# Executable
add_executable(calculator_app
    src/main.cpp
)

# Link library to executable
target_link_libraries(calculator_app PRIVATE calculator_lib)

# Header locations
target_include_directories(calculator_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#For Ctests
enable_testing()

add_executable(test_calculator
    tests/test_calculator.cpp
)

target_link_libraries(test_calculator PRIVATE calculator_lib)

add_test(
    NAME CalculatorTests
    COMMAND test_calculator
)