# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap Default Constructor " <<  std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap Name Constructor " <<  std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "FragTrap Copy Constructor " <<  std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
    this->setName(assign.getName());
    this->setHitPoints(assign.getHitPoints());
    this->setEnergyPoints(assign.getEnergyPoints());
    this->setAttackDamage(assign.getAttackDamage());
    std::cout << "FragTrap Assignment Constructor " <<  std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor " <<  std::endl;
}

// Actions
void FragTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << RED "FragTrap " << this->name << " can't attack " END <<  std::endl;
        return ;
    }
    this->energyPoints -= 1;

    std::cout << CYAN "FragTrap " << this->name << " attacks " << target << 
    ", causing " << this->attackDamage << " points of damage!" END <<  std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
    {
        std::cout << RED "FragTrap " << this->getName() << " can't high five!" END <<  std::endl;
        return ;
    }
    this->setEnergyPoints(this->getEnergyPoints() - 1);

    std::cout << GREEN "FragTrap " << this->getName() << " high five all guys! " END <<  std::endl;
}
