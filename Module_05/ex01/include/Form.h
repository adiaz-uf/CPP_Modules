#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.h"

# define MIN_GRADE 150
# define MAX_GRADE 1

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _execGrade;
public:
    Form();
    Form(const std::string name, const int signGrade, const int execGrade);
    Form(const Form &copy);
    Form &operator=(const Form &assign);
    ~Form();

    //Getters
    std::string getName();
    bool        getIsSigned();
    int   getSignGrade();
    int   getExecGrade();

    void    beSigned(Bureaucrat &b);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, Form b);

#endif