#ifndef FORM_H
# define FORM_H

#include <iostream>

# define MIN_GRADE 150
# define MAX_GRADE 1

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

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
    ~Form();

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


#endif