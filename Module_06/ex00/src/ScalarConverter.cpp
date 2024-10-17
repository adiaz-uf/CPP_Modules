#include "ScalarConverter.h"

void ScalarConverter::convert(std::string value)
{
    int varType = FindType::whichType(value);
    switch (varType)
    {
        case CHAR:
            OutputConverter::printChar(value);
            break;
        case INT:
            OutputConverter::printInt(value);
            break;
        case FLOAT:
            OutputConverter::printFloat(value);
            break;
        case DOUBLE:
            OutputConverter::printDouble(value);
            break;
        case NAN:
            OutputConverter::printNan();
            break;
        case MIN_INF:
            OutputConverter::printMinINf();
            break;
        case MAX_INF:
            OutputConverter::printMaxInf();
            break;
        default:
            std::cout << RED << "Invalid input" << END << std::endl;
            break;
    }
}
