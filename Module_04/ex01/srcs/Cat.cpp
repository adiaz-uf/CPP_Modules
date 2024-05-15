# include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat() : Animal("Cat")
{
    cout << YELL "Cat Constructor" END << endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    cout << YELL "Cat Copy Constructor" END << endl;

    *this = copy;
}

Cat &Cat::operator=(const Cat &assign)
{
    cout << YELL "Cat Assignment Constructor" END << endl;

    this->type = assign.type;
    return *this;
}

Cat::~Cat()
{
    cout << YELL "Cat Destructor" END << endl;
}
