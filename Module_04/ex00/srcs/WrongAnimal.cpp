# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None")
{
    std::cout << CYAN "WrongAnimal No Type Constructor" END <<  std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
    std::cout << CYAN "WrongAnimal Type Constructor" END <<  std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << CYAN "WrongAnimal Copy Constructor" END<<  std::endl;

    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    std::cout << CYAN "WrongAnimal Assignment Constructor" END<<  std::endl;

    this->type = assign.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << CYAN "WrongAnimal Destructor" END <<  std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << RED "WrongAnimal Default sound" END <<  std::endl;
}
