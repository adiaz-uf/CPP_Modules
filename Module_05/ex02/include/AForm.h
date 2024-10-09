#ifndef AFORM_H
# define AFORM_H

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

class AForm
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _execGrade;
public:
    AForm();
    AForm(const std::string name, const int signGrade, const int execGrade);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &assign);
    ~AForm();

    //Getters
    std::string     getName() const;
    bool            getIsSigned() const;
    int             getSignGrade() const;
    int             getExecGrade() const;

    void            beSigned(Bureaucrat &b);
    virtual void    execute(Bureaucrat const &executor) const = 0; // Pure virtual Method
    bool            isExecutable(Bureaucrat const &executor, AForm const &form) const;

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

    class FormNotSignedException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, AForm &b);

#endif