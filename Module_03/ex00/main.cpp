#include "ClapTrap.hpp"

void show_info(ClapTrap &c)
{
    std::cout << "\nName: " << c.getName() <<  std::endl;
    std::cout << "HitPoints: " << c.getHitPoints();
    std::cout << " | EnergyPoints: " << c.getEnergyPoints();
    std::cout << " | AttackDamage: " << c.getAttackDamage() <<  std::endl;
    std::cout << "--------------------------------------------------" <<  std::endl;
}

int main(void)
{
    ClapTrap    firstClap("Clap1");
    ClapTrap    secondClap("Clap2");
    ClapTrap    thirdClap("Clap3");
    
    show_info(firstClap);
    show_info(secondClap);
    show_info(thirdClap);

    firstClap.attack("Clap2");
    secondClap.takeDamage(3);
    show_info(secondClap);
    thirdClap.takeDamage(11);
    show_info(thirdClap);
    thirdClap.beRepaired(100);
    secondClap.beRepaired(3);
    show_info(secondClap);

    return 0;
}