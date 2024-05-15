#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();

    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    std::cout << "---------------------------------------" << std::endl; 
    const WrongAnimal* x = new WrongCat();
    const WrongAnimal* meta2 = new WrongAnimal();

    std::cout << x->getType() << " " << std::endl;

    x->makeSound(); //will output the Wrongcat sound!
    meta2->makeSound();

    delete x;
    delete meta2;

    return 0;
}