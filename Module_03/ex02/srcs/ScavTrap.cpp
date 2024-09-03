# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap Default Constructor " <<  std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap Name Constructor " <<  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy Constructor " <<  std::endl;

    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
    this->setName(assign.getName());
    this->setHitPoints(assign.getHitPoints());
    this->setEnergyPoints(assign.getEnergyPoints());
    this->setAttackDamage(assign.getAttackDamage());
    std::cout << "ScavTrap Assignment Constructor " <<  std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor " <<  std::endl;
}

// Actions
void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << RED "ScavTrap " << this->name << " can't attack " END <<  std::endl;
        return ;
    }
    this->energyPoints -= 1;

    std::cout << CYAN "ScavTrap " << this->name << " attacks " << target << 
    ", causing " << this->attackDamage << " points of damage!" END <<  std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << GREEN "ScavTrap " << this->getName() << " is now in Gate keeper mode." END <<  std::endl;
}

