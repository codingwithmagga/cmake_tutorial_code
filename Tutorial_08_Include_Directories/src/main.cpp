#include "mathe.h"
#include <iostream>

int main()
{
    int a = 4;
    int b = 5;

    std::cout << "Rechtecksfläche: " << rechteck_flaeche(a,b) << std::endl;
    std::cout << "Rechtecksumfang: " << rechteck_umfang(a,b) << std::endl;
    
    return 0;
}
