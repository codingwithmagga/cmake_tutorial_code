cmake_minimum_required(VERSION 3.5...3.19)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_VERSION})
endif()

project(cmake_tutorial_03
    VERSION 1.0.0
    DESCRIPTION "Mein CMake Projekt"
    LANGUAGES CXX
    )

add_executable(cmake_tutorial_03 main.cpp)
