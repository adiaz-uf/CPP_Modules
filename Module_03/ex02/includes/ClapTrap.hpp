#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\x1b[0m"

class ClapTrap
{
    protected:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);        
        ClapTrap &operator= (const ClapTrap &assign);
        ~ClapTrap();

        /* Getters */
        std::string getName() const;
        int         getHitPoints() const;
        int         getEnergyPoints() const;
        int         getAttackDamage() const;

        /* Setters */
        void        setName(std::string name);
        void        setHitPoints(int amount);
        void        setEnergyPoints(int amount);
        void        setAttackDamage(int amount);
        
        /* Actions */
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

# endif