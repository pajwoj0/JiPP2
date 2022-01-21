cmake_minimum_required(VERSION 3.20)
project(finalProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(finalProject src/main.cpp)
include_directories(../library/include)
target_link_libraries(finalProject finalLib)