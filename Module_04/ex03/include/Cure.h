#ifndef CURE_H
# define CURE_H

#include "AMateria.h"
#include "ICharacter.h"

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string const type);
    Cure(const Cure &copy);
    Cure &operator=(const Cure &assign);
    ~Cure();

    std::string const &getType() const;

    Cure *clone() const;
    void use(ICharacter &target);
};

#endif