# include "WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal() : type("None")
{
    cout << CYAN "WrongAnimal No Type Constructor" END << endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
    cout << CYAN "WrongAnimal Type Constructor" END << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    cout << CYAN "WrongAnimal Copy Constructor" END<< endl;

    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    cout << CYAN "WrongAnimal Assignment Constructor" END<< endl;

    this->type = assign.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    cout << CYAN "WrongAnimal Destructor" END << endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    if (this->type.compare("WrongCat") == 0)
        cout << PINK "¡Wrong Miau Miau!" END << endl;
    else
        cout << RED "WrongAnimal sound" END << endl;
}
