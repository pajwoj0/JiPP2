cmake_minimum_required(VERSION 3.20)
project(finalProject)

set(CMAKE_CXX_STANDARD 17)

add_library(finalLib src/ListNote.cpp src/Note.cpp src/TextNote.cpp src/mainFunctions.cpp)
include_directories(include)