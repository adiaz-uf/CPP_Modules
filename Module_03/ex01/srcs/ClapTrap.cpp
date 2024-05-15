#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap() : 
name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    cout << "Default Constructor " << endl;
}

ClapTrap::ClapTrap(std::string _name) : 
name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    cout << "Name Constructor " << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    cout << "Copy Constructor " << endl;
}   

ClapTrap &ClapTrap::operator= (const ClapTrap &assign)
{
    cout << "Asiggnment Operator Constructor " << endl;
    this->name = assign.name;
    this->hitPoints = assign.hitPoints;
    this->energyPoints = assign.energyPoints;
    this->attackDamage = assign.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    cout << "Default Destructor " << endl;
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

/* Setters */
void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int amount)
{
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount)
{
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount)
{
    this->attackDamage = amount;
}

// Actions
void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        cout << RED "ClapTrap " << this->name << " can't attack " END << endl;
        return ;
    }
    this->energyPoints -= 1;

    cout << CYAN "ClapTrap " << this->name << " attacks " << target << 
    ", causing " << this->attackDamage << " points of damage!" END << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        cout << RED "ClapTrap " << this->name << " can't take damage " END << endl;
        return ;
    }
    this->hitPoints -= amount;

    cout << YELL "ClapTrap " << this->name << " takes " <<
    amount << " points of damage!" END << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        cout << RED "ClapTrap " << this->name << " can't repair " END << endl;
        return ;
    }
    this->hitPoints += amount;
    this->energyPoints -= 1;

    cout << PINK "ClapTrap " << this->name << " repairs itself " <<
    amount << " points of health!" END << endl;
}
