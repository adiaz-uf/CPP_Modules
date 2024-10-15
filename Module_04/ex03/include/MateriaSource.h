#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.h"
#include "IMateriaSource.h"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *_materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &assign);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const &type);
};

#endif