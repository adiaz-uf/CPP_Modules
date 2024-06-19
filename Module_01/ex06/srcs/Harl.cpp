#include "../includes/Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    cout << "[ DEBUG ]" << endl;
    cout << CYAN DEBUG_MSG END<< endl;
}
void Harl::info(void)
{
    cout << "[ INFO ]" << endl;
    cout <<PINK INFO_MSG END << endl;
}
void Harl::warning(void)
{
    cout << "[ WARNING ]" << endl;
    cout <<YELL WARNING_MSG END<< endl;
}
void Harl::error(void)
{
    cout << "[ ERROR ]" << endl;
    cout <<RED ERROR_MSG END<< endl;
}

void Harl::complain(std::string level)
{
    std::string levels_upper[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string levels_lower[4] = {"debug", "info", "warning", "error"};
    harl_functions memb_functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int value = -1;
    for (size_t i = 0; i < 4; i++)
    {
        if (level == levels_lower[i] || level == levels_upper[i])
        {
            value = i;
            break;
        }
    }
    switch (value)
    {
    case 0:
        (this->*memb_functions[value++])();
    case 1:
        (this->*memb_functions[value++])();
    case 2:
        (this->*memb_functions[value++])();
    case 3:
        (this->*memb_functions[value])();
        return ;
    default:
        cout << "[ Probably complaining about insignificant problems ]" << endl;
        break;
    }
}
    