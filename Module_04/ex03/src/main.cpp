#include "Ice.h"
#include "Cure.h"
#include "MateriaSource.h"
#include "Character.h"

int main()
{
    IMateriaSource	*src = new MateriaSource();
    AMateria *icemateria = new Ice();
    AMateria *curemateria = new Cure();
	src->learnMateria(icemateria);
	src->learnMateria(curemateria);

	ICharacter		*me = new Character("me");

	AMateria		*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
    
	me->equip(tmp);

	ICharacter		*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
    me->use(-1, *bob);
    AMateria *tmp2 = me->getMateria(0); // Must save before unequip for deleting
    me->unequip(0);
    me->unequip(-1);

    delete tmp2; // Must delete manually to avoid leaks
    delete(icemateria);
    delete(curemateria);
	delete (bob);
	delete (me);
	delete (src);
	return (0);
}