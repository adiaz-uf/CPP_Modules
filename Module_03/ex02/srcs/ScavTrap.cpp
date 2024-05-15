# include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    cout << "ScavTrap Default Constructor " << endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    cout << "ScavTrap Name Constructor " << endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    cout << "ScavTrap Copy Constructor " << endl;

    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
    this->setName(assign.getName());
    this->setHitPoints(assign.getHitPoints());
    this->setEnergyPoints(assign.getEnergyPoints());
    this->setAttackDamage(assign.getAttackDamage());
    cout << "ScavTrap Assignment Constructor " << endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    cout << "ScavTrap Destructor " << endl;
}

void ScavTrap::guardGate()
{
    cout << GREEN "ScavTrap " << this->getName() << " is now in Gate keeper mode." END << endl;
}

