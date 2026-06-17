cmake_minimum_required(VERSION 3.10.0)
project(Water_Tune VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Water_Tune 
    main.cpp
    src/calcium_magnesium_calculator.cpp
    src/ph_down_calculator.cpp
)

target_include_directories(Water_Tune PRIVATE include)