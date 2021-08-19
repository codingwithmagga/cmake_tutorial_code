#include <iostream>
#include <boost/filesystem.hpp>

using boost::filesystem::file_size;

int main()
{
    std::cout << "Dateigröße main.cpp: " 
              << file_size("../main.cpp")
              << " bytes" << std::endl;
              
    #ifdef FOUND_OPENCV
        std::cout << "OpenCV found."
                  << std::endl;
    #else
        std::cout << "OpenCV not found."
                  << std::endl;
    #endif
    	
    return 0;
}
