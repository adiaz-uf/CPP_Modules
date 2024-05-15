#include "ClapTrap.hpp"

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