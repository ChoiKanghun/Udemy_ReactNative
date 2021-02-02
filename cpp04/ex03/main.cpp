#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* icharacter = new Character("icharacter");
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    icharacter->equip(tmp);
    std::cout << "[+] ICE = " << tmp->getType() << std::endl;
    
    tmp2 = src->createMateria("cure");
    icharacter->equip(tmp2);
    std::cout << "[+] CURE = " << tmp2->getType() << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    icharacter->use(0, *bob);
    icharacter->use(1, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    
    icharacter->use(0, *bob);
    std::cout << "[+] " << tmp->getType() << " xp = " << tmp->getXP() << std::endl;
    std::cout << "[+] " << tmp2->getType() << " xp = " << tmp2->getXP() << std::endl;

    delete bob;
    delete icharacter;
    delete src;
    
    return 0;
}