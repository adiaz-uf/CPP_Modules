#include "FragTrap.hpp"

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
    FragTrap firstFrag("Frag1");
    FragTrap secondFrag("Frag2");
    FragTrap thirdFrag("Frag3");

    show_info(firstFrag);
    show_info(secondFrag);
    show_info(thirdFrag);

    firstFrag.attack("Frag3");
    show_info(firstFrag);
    thirdFrag.takeDamage(30);
    show_info(thirdFrag);
    thirdFrag.beRepaired(200);
    show_info(thirdFrag);
    secondFrag.highFivesGuys();
    secondFrag.takeDamage(100);
    show_info(secondFrag);
    secondFrag.highFivesGuys();
    
    return 0;
}