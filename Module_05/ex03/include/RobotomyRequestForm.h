#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.h"

class RobotomyRequestForm : public AForm
{
private:
    const std::string   _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
    ~RobotomyRequestForm();

    std::string getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif