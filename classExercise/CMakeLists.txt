cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)

project(classExercise)

add_executable(classExercise ${CMAKE_SOURCE_DIR}/classExercise/src/classExercise.cpp ${CMAKE_SOURCE_DIR}/classExercise/src/main.cpp)
include_directories(${CMAKE_SOURCE_DIR}/classExercise/include)