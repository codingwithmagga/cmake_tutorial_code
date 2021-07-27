cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_10
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 10"
    LANGUAGES CXX
    )

add_library(math
    STATIC
    src/math/mathe.cpp
    )

target_include_directories(
    math
    PUBLIC include/math
    )
    
add_executable(mathe_test src/main.cpp)

target_link_libraries(
    mathe_test
    PRIVATE math
    )
