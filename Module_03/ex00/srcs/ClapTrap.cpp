#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default Constructor " <<  std::endl;
}

ClapTrap::ClapTrap(std::string _name) : 
name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Name Constructor " <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy Constructor " <<  std::endl;
}   

ClapTrap &ClapTrap::operator= (const ClapTrap &assign)
{
    std::cout << "Asiggnment Operator Constructor " <<  std::endl;
    this->name = assign.name;
    this->hitPoints = assign.hitPoints;
    this->energyPoints = assign.energyPoints;
    this->attackDamage = assign.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor " <<  std::endl;
}

/* Getters */
std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getHitPoints() const
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return  this->energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return  this->attackDamage;
}

// Actions
void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->name << " can't attack " END <<  std::endl;
        return ;
    }
    this->energyPoints -= 1;

    std::cout << CYAN "ClapTrap " << this->name << " attacks " << target << 
    ", causing " << this->attackDamage << " points of damage!" END <<  std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->name << " can't take damage " END <<  std::endl;
        return ;
    }
    this->hitPoints -= amount;

    std::cout << YELL "ClapTrap " << this->name << " takes " <<
    amount << " points of damage!" END <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->name << " can't repair " END <<  std::endl;
        return ;
    }
    this->hitPoints += amount;
    this->energyPoints -= 1;

    std::cout << PINK "ClapTrap " << this->name << " repairs itself " <<
    amount << " points of health!" END <<  std::endl;
}
