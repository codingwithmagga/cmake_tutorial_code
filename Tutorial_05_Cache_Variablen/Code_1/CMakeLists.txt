cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_05
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 05"
    LANGUAGES CXX
    )

add_executable(cmake_tutorial_05 main.cpp)

set(BUILD_EXE FALSE
    CACHE BOOL
    "Erzeugt eine zweite ausführbare Datei"
    )

if (${BUILD_EXE})
    add_executable(
        cmake_tutorial_05_2 main.cpp
        )
endif()
