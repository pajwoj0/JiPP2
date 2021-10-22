cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)

project(matrixApp)

add_executable(matrixApp ${CMAKE_SOURCE_DIR}/matrixApp/src/matrixApp.cpp)
include_directories(${CMAKE_SOURCE_DIR}/matrixLib/include)

target_link_libraries(matrixApp matrixLib)