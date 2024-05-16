#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    //const AAnimal d;

    AAnimal **zoo = new AAnimal *[6];

    zoo[0] = new Dog();
    zoo[1] = new Dog();
    zoo[2] = new Dog();
    zoo[3] = new Cat();
    zoo[4] = new Cat();
    zoo[5] = new Cat();

    zoo[0]->makeSound();
    zoo[3]->makeSound();

    for (size_t i = 0; i < 6; i++)
        delete zoo[i]; 
    delete[] zoo;

    return 0;
}
