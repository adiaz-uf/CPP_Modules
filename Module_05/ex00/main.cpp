#include <iostream>
#include "./include/Bureaucrat.h"

int main ()
{
    Bureaucrat b1("Number1", 0);
    std::cout << b1;
    b1.incrementGrade();
    std::cout << b1 << std::endl;

    Bureaucrat b2("Number2", 151);
    std::cout << b2;
    b2.decrementGrade();
    std::cout << b2 << std::endl;
    
    Bureaucrat b3("Number3", 10);
    std::cout << b3;
    b3.incrementGrade();
    std::cout << b3 << std::endl;
    
    Bureaucrat *b4 = new Bureaucrat("Number4", 40);
    std::cout << *b4;
    b4->decrementGrade();
    std::cout << *b4 << std::endl;
    delete b4;
}