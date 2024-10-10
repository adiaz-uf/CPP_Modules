#ifndef INTERN_H
# define INTERN_H

#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern
{
public:
    Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &assign);
    ~Intern();

    AForm *makeForm(std::string name, std::string target);
};

#endif