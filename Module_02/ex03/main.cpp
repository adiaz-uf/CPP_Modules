#include "Point.hpp"

int main(void) 
{  
    if (bsp( Point(0, 0), Point(4, 0), Point(0, 4), Point(2, 2)))
        std::cout << "Point IN" << std::endl;
    else
        std::cout << "Point OUT" << std::endl;
    return 0;
}
