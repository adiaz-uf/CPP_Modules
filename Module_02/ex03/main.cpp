#include "Point.hpp"

int main(void) 
{  
    if (bsp( Point(-3, 0), Point(3, 0), Point(0, 5), Point(1.67, 2) ))
        std::cout << "Point IN" << std::endl;
    else
        std::cout << "Point OUT" << std::endl;
    return 0;
}
