# include "AAnimal.hpp"

using std::cout;
using std::endl;

AAnimal::AAnimal() : type("None")
{
    cout << CYAN "AAnimal No Type Constructor" END << endl;
}

AAnimal::AAnimal(std::string name) : type(name)
{
    cout << CYAN "AAnimal Type Constructor" END << endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    cout << CYAN "AAnimal Copy Constructor" END<< endl;

    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &assign)
{
    cout << CYAN "AAnimal Assignment Constructor" END<< endl;

    this->type = assign.type;
    return *this;
}

AAnimal::~AAnimal()
{
    cout << CYAN "AAnimal Destructor" END << endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::makeSound() const
{
    if (this->type.compare("Dog") == 0)
        cout << PINK "¡Guau Guau!" END << endl;
    else if (this->type.compare("Cat") == 0)
        cout << PINK "¡Miau Miau!" END << endl;
    else
        cout << RED "Wrong AAnimal sound" END << endl;
}
