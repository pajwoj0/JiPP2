cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)

project(matrixApp)

add_library(matrixLib ${CMAKE_SOURCE_DIR}/matrixLib/src/matrixLib.cpp)
include_directories(${CMAKE_SOURCE_DIR}/matrixLib/include)