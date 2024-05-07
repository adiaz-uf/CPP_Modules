#include "includes/Harl.hpp"

using std::cerr;
using std::endl;

int main(int argc, char *argv[])
{
    std::string input;

    if (argc != 2)
    {
        cerr << "Invalid number of arguments, the usage is: ./harlFilter \"level\"" << endl;
        return EXIT_FAILURE;
    }
    Harl        h;

    h.complain(argv[1]);
    return EXIT_SUCCESS;
}