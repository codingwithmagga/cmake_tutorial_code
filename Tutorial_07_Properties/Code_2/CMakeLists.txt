cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_07
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 07"
    LANGUAGES CXX
    )
    
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cmake_tutorial_07 main.cpp)

get_property(
    CXX_STD
    TARGET cmake_tutorial_07
    PROPERTY CXX_STANDARD
)

message("${CXX_STD}")
