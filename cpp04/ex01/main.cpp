# include "Character.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "PlasmaRifle.hpp"
# include "SuperMutant.hpp"
# include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	// me->equip(pr);
	// std::cout << *me;
	// me->equip(pf);
	// me->attack(b);
	// std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;

	Enemy* superMutant = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	me->equip(pr);
	me->attack(superMutant);
	me->attack(superMutant);

	
	std::cout << *me;
	return 0;
}
