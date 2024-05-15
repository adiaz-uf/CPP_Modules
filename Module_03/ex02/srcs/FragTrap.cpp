# include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    cout << "FragTrap Default Constructor " << endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    cout << "FragTrap Name Constructor " << endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    cout << "FragTrap Copy Constructor " << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
    this->setName(assign.getName());
    this->setHitPoints(assign.getHitPoints());
    this->setEnergyPoints(assign.getEnergyPoints());
    this->setAttackDamage(assign.getAttackDamage());
    cout << "FragTrap Assignment Constructor " << endl;
    return *this;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap Destructor " << endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->getEnergyPoints() <= 0 || this->getHitPoints() <= 0)
    {
        cout << RED "FragTrap " << this->getName() << " can't high five!" END << endl;
        return ;
    }
    this->setEnergyPoints(this->getEnergyPoints() - 1);

    cout << GREEN "FragTrap " << this->getName() << " high five all guys! " END << endl;
}
