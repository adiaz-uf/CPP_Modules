#include "AMateria.h"

AMateria::AMateria(): _type("AMateria default type")
{
}

AMateria::AMateria(std::string const type): _type(type)
{
}

AMateria::AMateria(const AMateria &copy): _type(copy._type)
{
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* AMateria materia use: " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
}