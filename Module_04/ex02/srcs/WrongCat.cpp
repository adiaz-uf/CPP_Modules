# include "WrongCat.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    cout << YELL "WrongCat Constructor" END << endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    cout << YELL "WrongCat Copy Constructor" END << endl;

    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    cout << YELL "WrongCat Assignment Constructor" END << endl;

    this->type = assign.type;
    return *this;
}

WrongCat::~WrongCat()
{
    cout << YELL "WrongCat Destructor" END << endl;
}
