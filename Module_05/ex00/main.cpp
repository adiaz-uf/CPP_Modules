#include <iostream>
#include "./include/Bureaucrat.h"

int main ()
{
    Bureaucrat b1("Number1", 0);
    Bureaucrat b3("Number3", 10);
    Bureaucrat b2(b3);
    std::cout << b2;
    std::cout << b3;
    b3.incrementGrade();
    std::cout << b3;
    Bureaucrat *b4 = new Bureaucrat("Number4", 40);
    std::cout << *b4;
    delete b4;
}