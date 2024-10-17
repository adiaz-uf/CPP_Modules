#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <cstdlib>
# include "FindType.h"
# include "OutputConverter.h"

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\033[0m"

# define ERROR_RELATIVE 1.14441e-05

enum Type
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    NAN,
    MIN_INF,
    MAX_INF,
    INVALID
};

class ScalarConverter
{
    public:
        static void convert(std::string value);
};

#endif