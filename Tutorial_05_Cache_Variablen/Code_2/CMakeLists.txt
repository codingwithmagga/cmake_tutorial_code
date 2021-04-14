cmake_minimum_required(VERSION 3.13)

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

if ($CACHE{BUILD_EXE})
    add_executable(
        cmake_tutorial_05_02 main.cpp
        )
endif()

set(CACHE_FILEPATH ""
    CACHE FILEPATH
    "Beispiel Cache Variable Filepath"
    )
set(CACHE_PATH ""
    CACHE PATH
    "Beispiel Cache Variable PATH"
    )
set(CACHE_STRING ""
    CACHE STRING
    "Beispiel Cache Variable STRING"
    )
set(CACHE_INTERNAL ""
    CACHE INTERNAL
    "Beispiel Cache Variable INTERNAL"
    FORCE
    )

set_property(CACHE CACHE_STRING
    PROPERTY STRINGS
    string1 string2 string3
    )
