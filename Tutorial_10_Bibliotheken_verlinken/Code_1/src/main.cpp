#include "mathe.h"

#include <iostream>

int main()
{
    Mathe mathe;

    std::cout << "Addieren(2,3): "
          << mathe.addieren(2, 3)
          << std::endl;

    std::cout << "Fläche(2,3): "
          << mathe.rechteck_flaeche(2, 3)
          << std::endl;

    std::cout << "Umfang(2,3): "
          << mathe.rechteck_umfang(2, 3)
          << std::endl;

    return 0;
}
