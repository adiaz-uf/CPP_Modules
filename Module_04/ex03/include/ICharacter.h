#ifndef ICHARACTER_H
# define ICHARACTER_H

#include "AMateria.h"

class AMateria;

class ICharacter
{
protected:
    std::string const   _name;
public:
    virtual ~ICharacter() {};
    virtual std::string const &getName() const = 0;
    virtual AMateria *getMateria(int idx) = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif