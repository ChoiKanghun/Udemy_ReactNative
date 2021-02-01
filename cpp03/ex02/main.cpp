#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
 	ScavTrap s1("Reaper");
	ScavTrap s2("Pharah");
	FragTrap f1("Goliath");
    
	std::cout << std::endl;
    	
	s1.rangedAttack("Pharah");
    s1.takeDamage(15);
   	s2.meleeAttack("Mercy");
   	s2.takeDamage(20);
   	s2.beRepaired(35);
   	s1.beRepaired(80);

	std::cout << std::endl;
	
	f1.takeDamage(120);
	f1.beRepaired(10);
	f1.beRepaired(150);
	
	std::cout << std::endl;
    
    s1.challengeNewcomer("Soldier");
    s2.challengeNewcomer("Tracer");
   	s2.challengeNewcomer("Ana");
  	f1.vaulthunter_dot_exe("Scout");
	
	std::cout << std::endl;
    	return (0);
}
