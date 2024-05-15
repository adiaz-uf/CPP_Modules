#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
    std::cout <<GREEN "Zombie Constructor" END << std::endl;
}

Zombie::Zombie(std::string _name)
{
    name = _name;
    std::cout << GREEN "Zombie Constructor" END << std::endl;
}

Zombie::~Zombie()
{
    std::cout <<RED "Zombie Destructor, name: " END << name << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string _name)
{
    name = _name;
}
