#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main ()
{
    // Instance Bureaucrat
    Bureaucrat b1("number1", 20);
    std::cout << b1 << std::endl;
    
    ShrubberyCreationForm sh1("sh_1");
    b1.signForm(sh1);
    b1.executeForm(sh1);

    RobotomyRequestForm rb1("rb_1");
    b1.signForm(rb1);
    b1.executeForm(rb1);
    b1.executeForm(rb1);
    b1.executeForm(rb1);
    b1.executeForm(rb1);

    PresidentialPardonForm pr1("pr_1");
    b1.signForm(pr1);
    b1.executeForm(pr1);

    Intern someRandomIntern;
    AForm* rrf;

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender"); // shrubbery creation, robotomy request, presidential pardon
    if (rrf == NULL)
        return 0;
    b1.signForm(*rrf);
    b1.executeForm(*rrf);
    delete rrf;
}