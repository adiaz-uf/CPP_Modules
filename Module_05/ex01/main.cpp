#include <iostream>
#include "./include/Bureaucrat.h"

int main ()
{
    Bureaucrat b1("Number1", 0);
    Bureaucrat b2("Number2", 151);
    Bureaucrat b3("Number3", 10);
    std::cout << b2;
    std::cout << b3;
    b3.incrementGrade();
    std::cout << b3;
    Bureaucrat *b4 = new Bureaucrat("Number4", 40);
    b4->decrementGrade();
    std::cout << *b4;
    delete b4;
}