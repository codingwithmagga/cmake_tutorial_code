cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_09
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 09"
    LANGUAGES CXX
    )

add_library(math
    STATIC
    src/mathe.cpp
    )

target_include_directories(
    math
    PRIVATE include
    )
