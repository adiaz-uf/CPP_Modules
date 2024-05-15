#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
    weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (!weapon)
        std::cout << name << " attacks with no weapon " << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}