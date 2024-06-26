# include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain;
    cout << GREEN "Cat Constructor" END << endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    cout << GREEN "Cat Copy Constructor" END << endl;

    *this = copy;
}

Cat &Cat::operator=(const Cat &assign)
{
    cout << GREEN "Cat Assignment Constructor" END << endl;

    this->brain =new Brain(*assign.brain);
    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    delete this->brain;

    cout << GREEN "Cat Destructor" END << endl;
}
