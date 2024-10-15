#ifndef CHARACTER_H
# define CHARACTER_H

#include "AMateria.h"
#include "ICharacter.h"

class Character : public ICharacter
{
private:
    std::string const   _name;
    AMateria            *_slots[4];
public:
    Character();
    Character(std::string const type);
    Character(const Character &copy);
    Character &operator=(const Character &assign);
    ~Character();
    std::string const   &getName() const;
    AMateria *getMateria(int idx);
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif