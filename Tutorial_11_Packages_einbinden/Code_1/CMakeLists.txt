cmake_minimum_required(VERSION 3.1)

project(cmake_tutorial_11
    LANGUAGES CXX
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 11 Code 1"
    )

find_package(Boost
    1.50 REQUIRED
    COMPONENTS filesystem
    )

message("Boost found: ${Boost_FOUND} \n" 
        "Boost Version: ${Boost_VERSION}")
         
message("Boost libs: ${Boost_LIBRARIES} \n"
        "Boost Includes: "
        "${Boost_INCLUDE_DIRS}")

add_executable(boost_test main.cpp)

target_link_libraries(boost_test 
    PRIVATE 
    Boost::filesystem
    )   
