cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)

project(classTest)

add_executable(classTest ${CMAKE_SOURCE_DIR}/classTest/src/main.cpp ${CMAKE_SOURCE_DIR}/classTest/src/myFirstClass.cpp)
include_directories(${CMAKE_SOURCE_DIR}/classTest/include)