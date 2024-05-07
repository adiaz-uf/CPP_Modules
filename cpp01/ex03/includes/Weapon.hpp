#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type_str);
        ~Weapon();
        std::string &getType();
        void        setType(std::string _type);
};

#endif