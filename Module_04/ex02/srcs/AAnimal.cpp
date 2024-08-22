# include "AAnimal.hpp"

AAnimal::AAnimal() : type("None")
{
    std::cout << CYAN "AAnimal No Type Constructor" END <<  std::endl;
}

AAnimal::AAnimal(std::string name) : type(name)
{
    std::cout << CYAN "AAnimal Type Constructor" END <<  std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << CYAN "AAnimal Copy Constructor" END<<  std::endl;

    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &assign)
{
    std::cout << CYAN "AAnimal Assignment Constructor" END<<  std::endl;

    this->type = assign.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << CYAN "AAnimal Destructor" END <<  std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::makeSound() const
{
    if (this->type.compare("Dog") == 0)
        std::cout << PINK "¡Guau Guau!" END <<  std::endl;
    else if (this->type.compare("Cat") == 0)
        std::cout << PINK "¡Miau Miau!" END <<  std::endl;
    else
        std::cout << RED "Wrong AAnimal sound" END <<  std::endl;
}
