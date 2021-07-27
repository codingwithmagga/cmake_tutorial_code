cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_10
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 10"
    LANGUAGES CXX
    )

add_library(main_bib 
    STATIC src/main_bib/main_bib.cpp)
add_library(public_bib 
    STATIC src/public_bib/public_bib.cpp)
add_library(private_bib 
    STATIC src/private_bib/private_bib.cpp)

target_include_directories(main_bib 
    PUBLIC include/main_bib)
target_include_directories(public_bib 
    PUBLIC include/public_bib)
target_include_directories(private_bib 
    PUBLIC include/private_bib)

target_link_libraries(main_bib
    PUBLIC public_bib
    PRIVATE private_bib
    )

add_executable(main_exe src/main.cpp)

target_link_libraries(main_exe
    PRIVATE main_bib
    )
