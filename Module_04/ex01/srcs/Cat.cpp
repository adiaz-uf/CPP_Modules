# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain;
    std::cout << GREEN "Cat Constructor" END <<  std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << GREEN "Cat Copy Constructor" END <<  std::endl;

    *this = copy;
}

Cat &Cat::operator=(const Cat &assign)
{
    std::cout << GREEN "Cat Assignment Constructor" END <<  std::endl;

    this->brain = new Brain(*assign.brain);
    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    delete this->brain;

    std::cout << GREEN "Cat Destructor" END <<  std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::makeSound() const
{
    std::cout << PINK "¡Miau Miau!" END <<  std::endl;
}
