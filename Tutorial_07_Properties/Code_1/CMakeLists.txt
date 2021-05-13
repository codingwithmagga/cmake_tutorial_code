cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_07
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 07"
    LANGUAGES CXX
    )

add_executable(cmake_tutorial_07 main.cpp)

get_property(
    TUTORIAL_SOURCES
    TARGET cmake_tutorial_07
    PROPERTY SOURCES
)

message("${TUTORIAL_SOURCES}")
