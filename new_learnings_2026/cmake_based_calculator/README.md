## A CMake based C++ code execution with CTest for Unit Testing 

### 1. How to run the code :

#### Manual way (w/o CMakePresets.json) : 
- Generate build configuration using `cmake` once :
  - For Debug   : `cmake -S . -B build/debug   -DCMAKE_BUILD_TYPE=Debug`
  - For Release : `cmake -S . -B build/release -DCMAKE_BUILD_TYPE=Release`

- Build the project : 
  - For Debug   : `cmake --build build/debug`
  - For Release : `cmake --build build/release`

#### With CMakePresets.json : 
- `cmake --preset debug  && cmake --build --preset debug`  
- `cmake --preset release  && cmake --build --preset release`  

#### Run the code : 
  - `./build/debug/calculator_app` or `./build/release/calculator_app`

#### Run CTest for Unit-Testing :
  - For Debug   : `cmake --build --preset debug && ctest --preset debug`
  - For Release : `cmake --build --preset release && ctest --preset release`

### 2. This is how compilation happens on `cmake --build build`: 

````
Notice the sequence:
1. calculator.cpp → calculator.cpp.o
2. calculator.cpp.o → libcalculator_lib.a
3. main.cpp → main.cpp.o
4. main.cpp.o + libcalculator_lib.a → calculator_app
5. Run : ./build/calculator_app
````

### 3. Interesting commands : 

* To compare the filesize of `debug` and `release` build executables,
  - `$ find ./build -name calculator_app -type f -exec ls -hal {} +`
  - **Output :** 
    - 
    ````
    -rwxrwxr-x 1 doomguy doomguy 44K Oct  4 17:12 ./build/debug/calculator_app
    -rwxrwxr-x 1 doomguy doomguy 18K Oct  4 17:12 ./build/release/calculator_app
    ````
