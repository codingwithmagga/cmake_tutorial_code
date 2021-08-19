#include <iostream>
#include <boost/filesystem.hpp>

using boost::filesystem::file_size;

int main()
{
    std::cout << "Dateigröße main.cpp: " 
              << file_size("../main.cpp")
              << " bytes" << std::endl;

    return 0;
}
