#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type_str)
{
    setType(type_str);
}

Weapon::~Weapon(){}

std::string &Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string _type)
{
    type = _type;
}