#ifndef OUTPUTCONVERTER_H
# define OUTPUTCONVERTER_H

# include "ScalarConverter.h"

class OutputConverter
{
public:
    static void printChar(std::string value);
    static void printInt(std::string value);
    static void printFloat(std::string value);
    static void printDouble(std::string value);
    static void printNan();
    static void printMaxInf();
    static void printMinINf();
};


#endif
