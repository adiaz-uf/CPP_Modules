#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

# define RED	"\033[1;31m"
# define GREEN  "\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELL	"\e[1;93m"
# define PINK	"\e[1;38;5;199m"
# define END	"\x1b[0m"

class ICharacter;

class AMateria
{
protected:
    std::string const _type;
public:
    AMateria();
    AMateria(std::string const type);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &assign);
    virtual ~AMateria();

    virtual std::string const &getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif