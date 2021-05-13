#include <iostream>

int main()
{
    int position[2] = {1,2};
 
    auto [x,y] = position;
    
    std::cout << x << " " << y << std::endl;
        
    return 0;
}
