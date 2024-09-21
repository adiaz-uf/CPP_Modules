#include <iostream>
#include "./include/Bureaucrat.h"

int main ()
{
    Bureaucrat b1("Number1", 0);
    Bureaucrat b2("Number2", 200);
    Bureaucrat b3("Number3", 10);
    b3.incrementGrade();
    std::cout << b3;
    Bureaucrat *b4 = new Bureaucrat("4", 40);
    std::cout << *b4;
}