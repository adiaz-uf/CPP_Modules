# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << YELL "WrongCat Constructor" END <<  std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << YELL "WrongCat Copy Constructor" END <<  std::endl;

    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    std::cout << YELL "WrongCat Assignment Constructor" END <<  std::endl;

    this->type = assign.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << YELL "WrongCat Destructor" END <<  std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << PINK "¡Wrong Miau Miau!" END <<  std::endl;
}
