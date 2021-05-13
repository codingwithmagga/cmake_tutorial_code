cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_06
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 06"
    LANGUAGES CXX
    )

set(LISTE1 main.cpp printer.cpp)
set(LISTE2 "main.cpp;printer.cpp")

message("Liste 1: ${LISTE1}")
message("Liste 2: " ${LISTE2})

add_executable(hello_world1 ${LISTE1})
add_executable(hello_world2 ${LISTE2})
