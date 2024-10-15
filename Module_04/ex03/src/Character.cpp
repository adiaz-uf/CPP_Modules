#include "Character.h"

Character::Character() : _name("Default Character name")
{
    for (size_t i = 0; i < 4; i++)
    {
        this->_slots[i] = 0;
    }  
}

Character::Character(std::string const name): _name(name)
{
    for (size_t i = 0; i < 4; i++)
    {
        this->_slots[i] = 0;
    }
}

Character::Character(Character const &copy)
{
    for (size_t i = 0; i < 4; i++)
    {
        if ((copy._slots)[i])
            (this->_slots)[i] = (copy._slots[i])->clone(); //Deep copy
    }
}

Character &Character::operator=(const Character &assign)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_slots[i])
            delete this->_slots[i];
        if (assign._slots[i])
            this->_slots[i] = (assign._slots[i])->clone(); //Deep copy
    }
    return *this;
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_slots[i])
            delete this->_slots[i];
    }
}

std::string const &Character::getName() const
{
    return this->_name;
}

AMateria *Character::getMateria(int idx) // Function to avoid leaks when unequip Materias.
{
    return this->_slots[idx];
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cerr << RED << "Not a valid Materia" << END << std::endl;
        return ;
    }
    int idx = 0;
    while (this->_slots[idx] != 0 && idx < 4)
        idx++;
    if (idx > 3)
    {
        std::cerr << RED << "¡There are already 4 Materias!" << END << std::endl;
        return;
    }
    this->_slots[idx] = m;
    std::cout << GREEN << this->getName() << " equiped materia " << m->getType() << END << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 4)
    {
        std::cerr << RED << "NOT a valid slot" << END << std::endl;
        return ;
    }
    else if (!this->_slots[idx])
    {
        std::cerr << RED << "¡This slot is empty!" << END << std::endl;
        return;
    }
    std::cout << GREEN << this->getName() << " unequiped materia at slot " << idx << END << std::endl;
    this->_slots[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 4)
    {
        std::cerr << RED << "NOT a valid slot" << END << std::endl;
        return ;
    }
    else if (!this->_slots[idx])
    {
        std::cerr << RED << "¡This slot is empty!" << END << std::endl;
        return;
    }
    std::cout << GREEN << this->getName() << END;
    this->_slots[idx]->use(target);
}
