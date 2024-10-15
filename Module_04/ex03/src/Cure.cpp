#include "Cure.h"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(std::string const type): AMateria(type)
{
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
}

Cure  &Cure::operator=(const Cure &assign)
{
    (void)assign;
    return *this;
}

std::string const &Cure::getType() const
{
    return this->_type;
}

void Cure::use(ICharacter &target)
{
    std::cout << " * heals " <<  target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
    return new Cure("Cure");
}

Cure::~Cure()
{
}