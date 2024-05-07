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
    std::cout <<RED "Zombie Destructor" END<< std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
