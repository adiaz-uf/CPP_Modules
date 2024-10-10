#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern &Intern::operator=(const Intern &assign)
{
    (void)assign;
    return *this;
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"}; 
    int         n = -1;
    do
        n++;
    while (n < 3 && name != types[n]);  
    switch (n)
    {
    case 0:
        std::cout << YELL << "Intern creates shrubbery creation form." << END << std::endl;
        return new ShrubberyCreationForm(target);
    case 1:
        std::cout << YELL << "Intern creates robotomy request form." << END << std::endl;
        return new RobotomyRequestForm(target);
    case 2:
        std::cout << YELL << "Intern creates presidential pardon form." << END << std::endl;
        return new PresidentialPardonForm(target);
    default:
        std::cerr << RED << "¡Form name doesn't exist!" << END << std::endl;
        return NULL;
    }
}
