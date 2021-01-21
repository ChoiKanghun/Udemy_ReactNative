#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n\n\n\n";
	FragTrap t1("Terran Goliath");
	FragTrap t2("Protoss HighTempler");

	std::cout << "\n";
	t1.rangedAttack("Protoss HighTempler");
	t2.takeDamage(20);
	
	t2.meleeAttack("Terran Goliath");
	t1.takeDamage(30);
	t2.rangedAttack("Terran Goliath");
	t1.takeDamage(20);
	t2.rangedAttack("Terran Goliath");
	t1.takeDamage(20);
	t1.rangedAttack("Protoss HightTempler");
	t2.takeDamage(20);
	t2.rangedAttack("Terran Goliath");
	t1.takeDamage(20);
	t1.rangedAttack("Protoss HighTempler");
	t2.takeDamage(20);
	t2.rangedAttack("Terran Goliath");
	t1.takeDamage(20);

	std::cout << "\n\n(Loud noise)\n\n\n";
	std::cout << "Goliath: It's Zerg Troops! We need to stop fighting before we all die by them!\n";
	std::cout << "HighTempler: Agreed...\n\n";
	
	t1.beRepaired(50);
	t1.beRepaired(80);
	t2.beRepaired(100);

	std::cout << "\n\033[1;35mZerg Kerrigan: Kill them all!!(All zerg army cries out)\033[0m\n";

	t1.vaulthunter_dot_exe("a Zerg Creature");
	t1.vaulthunter_dot_exe("a Zerg Creature");
	t1.vaulthunter_dot_exe("a Zerg Creature");
	t1.vaulthunter_dot_exe("a Zerg Creature");
	t1.vaulthunter_dot_exe("a Zerg Creature");

	t2.vaulthunter_dot_exe("a Zerg Creature");
	t2.vaulthunter_dot_exe("a Zerg Creature");
	t2.vaulthunter_dot_exe("a Zerg Creature");
	t2.vaulthunter_dot_exe("a Zerg Creature");
	t2.vaulthunter_dot_exe("a Zerg Creature");

	std::cout << "\n\033[1;35mZerg Kerrigan: fallback!\033[0m\n\n";

	ScavTrap s1("Pharah");
	ScavTrap s2("ReinHardt");
	std::cout << "\n";
	s1.rangedAttack("ReinHardt");
	s2.takeDamage(20);
	s2.meleeAttack("Pharah");
	s1.takeDamage(30);
	s1.beRepaired(15);

	std::cout << "\n";
	s1.challengeNewcomer("Mercy");
	s2.challengeNewcomer("Soldier");

}
