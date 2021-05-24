cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_08
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 08"
    LANGUAGES CXX
    )

add_executable(cmake_tutorial_08 
    src/main.cpp
    )

target_include_directories(
    cmake_tutorial_08
    PRIVATE include
    )
