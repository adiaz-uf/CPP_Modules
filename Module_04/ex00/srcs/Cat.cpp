# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << YELL "Cat Constructor" END <<  std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << YELL "Cat Copy Constructor" END <<  std::endl;

    *this = copy;
}

Cat &Cat::operator=(const Cat &assign)
{
    std::cout << YELL "Cat Assignment Constructor" END <<  std::endl;

    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << YELL "Cat Destructor" END <<  std::endl;
}
