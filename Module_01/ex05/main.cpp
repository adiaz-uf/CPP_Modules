#include "includes/Harl.hpp"

int main(void)
{
    std::string input;
    Harl        h;

    std::cout << "Hi! Im Harl, select write one of this comments:" << std::endl;
    std::cout << CYAN "- Debug" END << std::endl;
    std::cout << PINK "- Info" END << std::endl;
    std::cout << YELL "- Warning" END << std::endl;
    std::cout << RED "- Error" END << std::endl;
    while (true)
    {
        std::cout << "> ";
        getline(std::cin, input);
        if (std::cin.eof())
            return EXIT_FAILURE;
        else if (input == "")
            std::cout << std::endl;
        h.complain(input);
        if (input == "exit" || input == "EXIT")
            break;
    }
    return EXIT_SUCCESS;
}