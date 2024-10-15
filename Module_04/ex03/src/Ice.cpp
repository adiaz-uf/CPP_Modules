#include "Ice.h"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(std::string const type): AMateria(type)
{
}

Ice::Ice(const Ice &copy): AMateria(copy)
{
}

Ice &Ice::operator=(const Ice &assign)
{
    (void)assign;
    return *this;
}

std::string const &Ice::getType() const
{
    return this->_type;
}

void Ice::use(ICharacter &target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const
{
    return new Ice("ice");
}

Ice::~Ice()
{
}