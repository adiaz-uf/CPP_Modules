#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm():
AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
AForm(copy), _target(copy._target)
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
    (void)assign;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

static int timesRobotomized = 0;

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->isExecutable(executor, *this) == false)
        return ;
    
    if (timesRobotomized++ % 2)
    {
        std::cout << PINK << "brrr brrr" << END << std::endl;
    }
    else
        std::cout << PINK << this->getTarget() << " has been robotomized successfully" << END << std::endl;
}
