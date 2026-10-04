## Explanation : 
### This is how compilation happens on `cmake --build build`: 

````
Notice the sequence:
1. calculator.cpp → calculator.cpp.o
2. calculator.cpp.o → libcalculator_lib.a
3. main.cpp → main.cpp.o
4. main.cpp.o + libcalculator_lib.a → calculator_app
5. Run : ./build/calculator_app
````