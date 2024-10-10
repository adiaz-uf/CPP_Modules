#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.h"

class PresidentialPardonForm : public AForm
{
private:
    const std::string   _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
    ~PresidentialPardonForm();

    std::string getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif