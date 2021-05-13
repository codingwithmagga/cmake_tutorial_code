cmake_minimum_required(VERSION 3.5)

project(cmake_tutorial_06
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 06"
    LANGUAGES CXX
    )

add_executable(hello_world main.cpp)

set(LISTE a c d e k m o x)
list(LENGTH LISTE LAENGE)
message("Anzahl Elemente = ${LAENGE}")

list(GET LISTE 1 5 0 4 3 WORT)
message("Gesuchtes Wort = " ${WORT})

list(APPEND LISTE e f)
message("Append e und f: ${LISTE}")

list(REMOVE_ITEM LISTE o x)
message("Remove o und x: ${LISTE}")

list(SORT LISTE)
message("Sortierte Liste: ${LISTE}")
