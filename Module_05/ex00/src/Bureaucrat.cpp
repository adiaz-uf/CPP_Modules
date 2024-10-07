#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): _name("No name"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    try
    {
        this->setGrade(grade);
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "Default Exception" << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{

}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &assign)
{
    if (this != &assign)
    {
        this->_grade = assign._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade()
{
    return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < MAX_GRADE) 
        throw GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

void Bureaucrat::decrementGrade()
{
    try
    {
        this->setGrade(++this->_grade);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << RED"Decrement grade failed :("END << std::endl;
    }
}

void Bureaucrat::incrementGrade()
{
    try
    {
        this->setGrade(--this->_grade);
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << RED"Increment grade failed :("END << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return (RED"¡Grade higher than 1!"END);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return (RED"¡Grade lower than 150!"END);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat b)
{
    o << CYAN << b.getName() << " Bureaucrat grade: " << b.getGrade() << END << std::endl;
    return o;
}
