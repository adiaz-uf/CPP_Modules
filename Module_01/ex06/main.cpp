#include "includes/Harl.hpp"

int main(int argc, char *argv[])
{
    std::string input;

    if (argc != 2)
    {
        std::cerr << "Invalid number of arguments, the usage is: ./harlFilter \"level\"" << std::endl;
        return EXIT_FAILURE;
    }
    Harl    h;

    h.complain(argv[1]);
    return EXIT_SUCCESS;
}