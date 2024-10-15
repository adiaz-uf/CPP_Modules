#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        this->_materias[i] = 0;
    }  
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (size_t i = 0; i < 4; i++)
    {
        if ((copy._materias)[i])
            (this->_materias)[i] = (copy._materias[i])->clone(); //Deep copy
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        if (assign._materias[i])
            this->_materias[i] = (assign._materias[i])->clone(); //Deep copy
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
    {
        std::cerr << RED << "Not a valid Materia" << END << std::endl;
        return ;
    }
    int idx = 0;
    while (this->_materias[idx] != 0 && idx < 4)
        idx++;
    if (idx > 3)
    {
        std::cerr << RED << "¡There are already 4 Materias!" << END << std::endl;
        return;
    }
    this->_materias[idx] = m;
    std::cout << GREEN << "Learned materia " << m->getType() << END << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int idx = 0;
    while (this->_materias[idx] != 0 && idx < 4 && this->_materias[idx]->getType() != type)
        idx++;
    if (idx > 3)
    {
        std::cerr << RED << "¡There are already 4 Materias!" << END << std::endl;
        return (NULL);
    }
    if (!this->_materias[idx])
    {
        std::cerr << RED << "¡Materia doesn't exist!" << END << std::endl;
        return (NULL);
    }
    std::cout << GREEN << "Created materia " << type << END << std::endl;
    return ((this->_materias)[idx])->clone();
}
