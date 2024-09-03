# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << PINK "Dog Constructor" END <<  std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << PINK "Dog Copy Constructor" END <<  std::endl;

    *this = copy;
}

Dog &Dog::operator=(const Dog &assign)
{
    std::cout << PINK "Dog Assignment Constructor" END <<  std::endl;

    this->type = assign.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << PINK "Dog Destructor" END <<  std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << PINK "¡Guau Guau!" END <<  std::endl;
}
