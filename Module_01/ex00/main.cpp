#include "includes/Zombie.hpp"

int main(void)
{
    Zombie* zombie1 = newZombie("Foo");
    zombie1->announce();
    delete (zombie1);

    randomChump("Foo2");
    return 0;
}