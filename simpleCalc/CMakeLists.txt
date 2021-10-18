cmake_minimum_required(VERSION 3.12)

project(allocation_basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(simpleCalc src/main.cpp)
add_library(simpleCalcLib src/calc.cpp)

target_link_libraries(simpleCalc simpleCalcLib)

include_directories(include)