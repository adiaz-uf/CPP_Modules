#include "ScavTrap.hpp"

using std::cout;
using std::endl;

void show_info(ClapTrap &c)
{
    cout << "\nName: " << c.getName() << endl;
    cout << "HitPoints: " << c.getHitPoints();
    cout << " | EnergyPoints: " << c.getEnergyPoints();
    cout << " | AttackDamage: " << c.getAttackDamage() << endl;
    cout << "--------------------------------------------------" << endl;
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