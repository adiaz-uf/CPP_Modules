#include "FindType.h"

int FindType::whichType(std::string value)
{
    size_t      i = 0;
    int         nDot = 0;
    int         nNeg = 0;
    int         nFloat = 0;

    if (value == "nanf" || value == "nan")
        return NAN;
    if (value == "-inff" || value == "-inf")
        return MIN_INF;
    if (value == "+inff" || value == "+inf")
        return MAX_INF;
    if (value.size() == 1 && !isdigit(value[0])) // is Char
        return CHAR;
    if (value[i] == '-')
    {
        nNeg++;
        i++;
    }
    while (value[i])
    {
        if (value[i] == '-' || value[i] == '+')
            break;
        if (value[i] == '.' && ((i != 0 && nNeg == 0) || (i > 1 && nNeg == 1)) && i != value.size() - 1)
            nDot++;
        else if (value[i] == 'f' && i == value.size() - 1)
            nFloat++;
        else if (!isdigit(value[i]))
            break;
        i++;
    }
    if (i == value.size() && nDot == 0 && nFloat == 0) // is Int
        return INT;
    else if (i == value.size() && nDot == 1 && nFloat == 1) // is Float
        return FLOAT;
    else if (i == value.size() && nDot == 1 && nFloat == 0) // is Double
        return DOUBLE;
    return INVALID;
}