# include "Animal.hpp"

using std::cout;
using std::endl;

Animal::Animal() : type("None")
{
    cout << CYAN "Animal No Type Constructor" END << endl;
}

Animal::Animal(std::string name) : type(name)
{
    cout << CYAN "Animal Type Constructor" END << endl;
}

Animal::Animal(const Animal &copy)
{
    cout << CYAN "Animal Copy Constructor" END<< endl;

    *this = copy;
}

Animal &Animal::operator=(const Animal &assign)
{
    cout << CYAN "Animal Assignment Constructor" END<< endl;

    this->type = assign.type;
    return *this;
}

Animal::~Animal()
{
    cout << CYAN "Animal Destructor" END << endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    if (this->type.compare("Dog") == 0)
        cout << PINK "¡Guau Guau!" END << endl;
    else if (this->type.compare("Cat") == 0)
        cout << PINK "¡Miau Miau!" END << endl;
    else
        cout << RED "Wrong animal sound" END << endl;
}
