#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "AForm.h"

# define MIN_GRADE 150
# define MAX_GRADE 1

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

class AForm;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
    //Setter
    void setGrade(int grade);
public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator= (const Bureaucrat &assign);
    ~Bureaucrat();

    // Public Methods
    void        incrementGrade();
    void        decrementGrade();
    void        signForm(AForm &f);
    void        executeForm(AForm &form);

    // Getters
    std::string getName() const;
    int         getGrade() const;

    // Exceptions
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
// Overloads
std::ostream &operator<<(std::ostream &o, Bureaucrat b);

#endif