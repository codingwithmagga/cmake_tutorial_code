cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_04
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 04"
    LANGUAGES CXX
    )
    
set(SOURCE main.cpp)
set(NAME_EXE cmake_tutorial_04)

add_executable(${NAME_EXE} ${SOURCE})

unset(SOURCE)
set(NAME_EXE)
