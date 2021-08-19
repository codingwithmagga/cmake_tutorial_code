cmake_minimum_required(VERSION 3.1)

project(cmake_tutorial_11
    LANGUAGES CXX
    VERSION 1.0.0
    DESCRIPTION "CMake Tutorial 11 Code 2"
    )

find_package(Boost 
    1.50 REQUIRED 
    COMPONENTS filesystem
    )
find_package(OpenCV 
    COMPONENTS core dnn
    )

message("OpenCV found: ${OpenCV_FOUND} \n" 
        "OpenCV Version: ${OpenCV_VERSION}"
        )
         
message("OpenCV libs: ${OpenCV_LIBS} \n"
        "OpenCV Includes: "
        "${OpenCV_INCLUDE_DIRS}")

add_executable(opencv_test main.cpp)

target_link_libraries(opencv_test 
    PRIVATE 
    Boost::filesystem
    )
    
if(${OpenCV_FOUND})
   target_link_libraries(opencv_test 
        PRIVATE 
        ${OpenCV_LIBS}
        )

    target_compile_definitions(
        opencv_test
        PRIVATE FOUND_OPENCV
        )

endif()











