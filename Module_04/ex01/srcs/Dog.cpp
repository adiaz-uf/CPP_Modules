# include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain;

    cout << PINK "Dog Constructor" END << endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    cout << PINK "Dog Copy Constructor" END << endl;

    *this = copy;
}

Dog &Dog::operator=(const Dog &assign)
{
    cout << PINK "Dog Assignment Constructor" END << endl;

    this->brain = assign.brain;
    this->type = assign.type;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    
    cout << PINK "Dog Destructor" END << endl;
}
