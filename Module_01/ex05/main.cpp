#include "includes/Harl.hpp"

using std::cout;
using std::endl;
using std::cin;

int main(void)
{
    std::string input;
    Harl        h;

    cout << "Hi! Im Harl, select write one of this comments:" << endl;
    cout << CYAN "- Debug" END << endl;
    cout << PINK "- Info" END << endl;
    cout << YELL "- Warning" END << endl;
    cout << RED "- Error" END << endl;
    while (true)
    {
        cout << "> ";
        cin >> input;
        h.complain(input);
        if (input == "exit" || input == "EXIT")
            break;
    }
    return EXIT_SUCCESS;
}