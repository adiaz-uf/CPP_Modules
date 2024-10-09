#include "Bureaucrat.h"
//#include "AForm.h"
#include "ShrubberyCreationForm.h"

int main ()
{
    // Instance Bureaucrat
    Bureaucrat b1("number1", 137);
    std::cout << b1 << std::endl;
    
    ShrubberyCreationForm sh1("sh_1");
    b1.signForm(sh1);
    b1.executeForm(sh1);
    // Instance Form
/*     AForm F2("Form 2", 1, 1);
    std::cout << F2 << std::endl;

    b1.signForm(F2);
    std::cout << F2 << std::endl; */
    
}