#include "includes/Zombie.hpp"

int main(void)
{
    int num;
    std::string name;
    std::cout << "Welcome to ex01, choose the zombies number:\n> ";
    std::cin >> num;
    std::cout << "choose the name:\n>";
    std::cin >>  name;
    
    Zombie* zombie_horde = zombieHorde(num, name);
    for (int i = 0; i < num; i++)
    {
        zombie_horde[i].announce();
    }
    delete [] zombie_horde;
    return 0;
}