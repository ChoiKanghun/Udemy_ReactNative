
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	srand(time(NULL));

	ScavTrap *scav = new ScavTrap("SCAVTRAP");
	
	std::cout << "---" << std::endl;

	NinjaTrap *ninja = new NinjaTrap("NINJ4");
	ninja->ninjaShoebox(*ninja);
	ninja->meleeAttack("SCAVTRAP");
	ninja->rangedAttack("SCAVTRAP");
	ninja->takeDamage(65);
	ninja->beRepaired(50);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(125);

	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*scav);

	std::cout << "---" << std::endl;

	delete scav;
	delete ninja;

	return (0);
}
