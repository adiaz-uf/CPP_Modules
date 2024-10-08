#include <iostream>
#include "./include/Bureaucrat.h"
#include "./include/Form.h"

int main ()
{
    // Instance Bureaucrat
    Bureaucrat b1("number1", 1);
    std::cout << b1 << std::endl;
    
    // Instance Form
    Form F2("Form 2", 1, 1);
    std::cout << F2 << std::endl;

    b1.signForm(F2);
    std::cout << F2 << std::endl;
    
}