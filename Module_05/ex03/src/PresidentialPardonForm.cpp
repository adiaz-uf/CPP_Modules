#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm():
AForm("PresidentialPardonForm", 25, 5), _target("Default target")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
AForm(copy), _target(copy._target)
{
    
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
    (void)assign;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->isExecutable(executor, *this) == false)
        return ;
    std::cout << YELL << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << END << std::endl;
}
