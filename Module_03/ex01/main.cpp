#include "ScavTrap.hpp"

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
    ScavTrap firstScav("Scav1");
    ScavTrap secondScav = firstScav;
    ScavTrap thirdScav("Scav3");

    show_info(firstScav);
    show_info(secondScav);
    show_info(thirdScav);

    firstScav.attack("Scav3");
    show_info(firstScav);
    thirdScav.takeDamage(20);
    show_info(thirdScav);
    thirdScav.beRepaired(200);
    show_info(thirdScav);
    secondScav.guardGate();

    return 0;
}