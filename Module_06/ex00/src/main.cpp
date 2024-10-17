# include "ScalarConverter.h"
# include <stdlib.h>
# include <iostream>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << RED << "Corect usage: './convert value' " << END << std::endl;
        return EXIT_FAILURE;
    }
    ScalarConverter::convert(argv[1]);
    return EXIT_SUCCESS;
}

