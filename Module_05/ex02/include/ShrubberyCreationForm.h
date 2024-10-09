#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    const std::string   _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif