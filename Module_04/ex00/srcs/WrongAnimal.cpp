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
    if (this->type.compare("WrongCat") == 0)
        std::cout << PINK "¡Wrong Miau Miau!" END <<  std::endl;
    else
        std::cout << RED "WrongAnimal sound" END <<  std::endl;
}
