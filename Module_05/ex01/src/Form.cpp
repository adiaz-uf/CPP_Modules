#include "Form.h"

Form::Form(): _name("No name"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(const std::string name, const int signGrade, const int execGrade):
_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
    if (this->_signGrade < MAX_GRADE || this->_execGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_signGrade > MIN_GRADE || this->_execGrade > MIN_GRADE)
        throw GradeTooLowException();
}

Form::Form(const Form &copy):
_name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{

}

Form &Form::operator=(const Form &assign)
{
    if (this != &assign)
    {
        this->_isSigned = assign._isSigned;
    }
    return *this;
}

Form::~Form()
{
}

std::string Form::getName()
{
    return this->_name;
}

bool        Form::getIsSigned()
{
    return this->_isSigned;
}

int   Form::getSignGrade()
{
    return this->_signGrade;
}

int   Form::getExecGrade()
{
    return this->_execGrade;
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->getSignGrade())
        this->_isSigned = true;
    else
        throw GradeTooLowException();   
}

const char *Form::GradeTooHighException::what() const throw()
{
    return (PINK "¡Grade too high!" END);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return (PINK "¡Grade too low!" END);
}

std::ostream &operator<<(std::ostream &o, Form b)
{
    o << GREEN << "Form Info:" << std::endl << CYAN
    "Name: " << b.getName() << std::endl << 
    "Is Signed?: " << b.getIsSigned() << std::endl << 
    "Sign grade: " << b.getSignGrade() << std::endl << 
    "Exec grade: " << b.getExecGrade() << END << std::endl;
    return o;
}
