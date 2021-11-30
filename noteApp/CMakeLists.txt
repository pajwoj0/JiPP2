cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 11)

project(noteApp)

add_executable(noteApp ${CMAKE_SOURCE_DIR}/noteApp/src/noteApp.cpp)
include_directories(${CMAKE_SOURCE_DIR}/noteLib/include)

target_link_libraries(noteApp noteLib)