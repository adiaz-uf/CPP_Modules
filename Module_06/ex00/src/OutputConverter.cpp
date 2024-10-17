#include "OutputConverter.h"

void OutputConverter::printChar(std::string value)
{
    std::string toChar = "";
    toChar = value[0];
    if (isprint(toChar[0]))
        std::cout << "char: " << toChar << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
}

void OutputConverter::printInt(std::string value)
{
    int toInt = std::atoi(value.c_str());
    if (isprint(toInt))
        std::cout << "char: " << static_cast<char>(toInt) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << toInt << std::endl;
    std::cout << "float: " << static_cast<float>(toInt) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(toInt) << ".0" << std::endl;
}

void OutputConverter::printFloat(std::string value)
{
    float toFloat = std::atof(value.c_str());
    float decimalPart = toFloat - static_cast<int>(toFloat);
    if (isprint(toFloat))
        std::cout << "char: " << static_cast<char>(toFloat) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(toFloat) << std::endl;
    std::cout << "float: " << toFloat << ((decimalPart >= ERROR_RELATIVE) ? "f" : ".0f") << std::endl;
    std::cout << "double: " << static_cast<double>(toFloat) << ((decimalPart >= ERROR_RELATIVE) ? "" : ".0") << std::endl;
}

void OutputConverter::printDouble(std::string value)
{
    double toDouble = std::atof(value.c_str());
    double decimalPart = toDouble - static_cast<int>(toDouble);
    if (isprint(toDouble))
        std::cout << "char: " << static_cast<char>(toDouble) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(toDouble) << std::endl;
    std::cout << "float " << static_cast<float>(toDouble) << ((decimalPart >= ERROR_RELATIVE) ? "f" : ".0f") << std::endl;
    std::cout << "double " << toDouble << ((decimalPart >= ERROR_RELATIVE) ? "" : ".0") << std::endl;
}

void OutputConverter::printNan()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void OutputConverter::printMaxInf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}

void OutputConverter::printMinINf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" <<  std::endl;
    std::cout << "double: -inf" << std::endl;
}

