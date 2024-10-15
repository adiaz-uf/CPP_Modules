#ifndef ICE_H
# define ICE_H

#include "AMateria.h"
#include "ICharacter.h"

class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string const type);
    Ice(const Ice &copy);
    Ice &operator=(const Ice &assign);
    ~Ice();

    std::string const &getType() const;

    Ice *clone() const;
    void use(ICharacter &target);
};

#endif