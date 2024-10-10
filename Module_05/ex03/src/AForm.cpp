#include "AForm.h"

AForm::AForm(): _name("No name"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade):
_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
    if (this->_signGrade < MAX_GRADE || this->_execGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_signGrade > MIN_GRADE || this->_execGrade > MIN_GRADE)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &copy):
_name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{

}

AForm &AForm::operator=(const AForm &assign)
{
    if (this != &assign)
    {
        this->_isSigned = assign._isSigned;
    }
    return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
    return this->_name;
}

bool        AForm::getIsSigned() const
{
    return this->_isSigned;
}

int   AForm::getSignGrade() const
{
    return this->_signGrade;
}

int   AForm::getExecGrade() const
{
    return this->_execGrade;
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->getSignGrade())
        this->_isSigned = true;
    else
        throw GradeTooLowException();   
}

bool AForm::isExecutable(Bureaucrat const &executor, AForm const &form) const
{
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    else if (form.getIsSigned() == false)
        throw FormNotSignedException();
    else
        return true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return (PINK "¡Grade too high!" END);
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return (PINK "¡Grade too low!" END);
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return (PINK "¡Form is not signed!" END);
}


std::ostream &operator<<(std::ostream &o, AForm &b)
{
    o << GREEN << "AForm Info:" << std::endl << CYAN
    "Name: " << b.getName() << std::endl << 
    "Is Signed?: " << b.getIsSigned() << std::endl << 
    "Sign grade: " << b.getSignGrade() << std::endl << 
    "Exec grade: " << b.getExecGrade() << END << std::endl;
    return o;
}
