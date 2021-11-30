cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 11)

project(noteApp)

add_library(noteLib ${CMAKE_SOURCE_DIR}/noteLib/src/Note.cpp ${CMAKE_SOURCE_DIR}/noteLib/src/ListNote.cpp ${CMAKE_SOURCE_DIR}/noteLib/src/TextNote.cpp ${CMAKE_SOURCE_DIR}/noteLib/src/NoteDirector.cpp)
include_directories(${CMAKE_SOURCE_DIR}/noteLib/include)