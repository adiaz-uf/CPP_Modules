#include "ScalarConverter.h"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy): ScalarConverter(copy)
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign)
{
    (void)assign;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}

static void ScalarConverter::convert(std::string value)
{
    
}
