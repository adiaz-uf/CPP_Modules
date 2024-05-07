#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define END	"\x1b[0m"

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string _name);
        ~Zombie();
        void    announce(void); 
        void    set_name(std::string _name);

};

Zombie* zombieHorde(int N, std::string name);

#endif