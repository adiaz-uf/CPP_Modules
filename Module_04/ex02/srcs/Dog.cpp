# include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    this->brain = new Brain;

    std::cout << PINK "Dog Constructor" END <<  std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
    std::cout << PINK "Dog Copy Constructor" END <<  std::endl;

    *this = copy;
}

Dog &Dog::operator=(const Dog &assign)
{
    std::cout << PINK "Dog Assignment Constructor" END <<  std::endl;

    this->brain = assign.brain;
    this->type = assign.type;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    
    std::cout << PINK "Dog Destructor" END <<  std::endl;
}

void Dog::makeSound() const
{
    std::cout << PINK "¡Guau Guau!" END <<  std::endl;
}

