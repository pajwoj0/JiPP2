cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)

project(Note)

add_executable(Note ${CMAKE_SOURCE_DIR}/Lab8/src/Note.cpp ${CMAKE_SOURCE_DIR}/Lab8/src/TextNote.cpp ${CMAKE_SOURCE_DIR}/Lab8/src/ListNote.cpp ${CMAKE_SOURCE_DIR}/Lab8/src/NoteDirector.cpp ${CMAKE_SOURCE_DIR}/Lab8/src/main.cpp)
include_directories(${CMAKE_SOURCE_DIR}/Lab8/include)