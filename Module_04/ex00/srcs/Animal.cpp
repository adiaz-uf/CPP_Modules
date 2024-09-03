# include "Animal.hpp"

Animal::Animal() : type("None")
{
    std::cout << CYAN "Animal No Type Constructor" END <<  std::endl;
}

Animal::Animal(std::string name) : type(name)
{
    std::cout << CYAN "Animal Type Constructor" END <<  std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << CYAN "Animal Copy Constructor" END<<  std::endl;

    *this = copy;
}

Animal &Animal::operator=(const Animal &assign)
{
    std::cout << CYAN "Animal Assignment Constructor" END<<  std::endl;

    this->type = assign.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << CYAN "Animal Destructor" END <<  std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << RED "Default animal sound" END <<  std::endl;
}
