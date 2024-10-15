#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
    ScalarConverter &operator=(const ScalarConverter &assign);
    ~ScalarConverter();

    virtual static void convert(std::string value) = 0;
};

#endif