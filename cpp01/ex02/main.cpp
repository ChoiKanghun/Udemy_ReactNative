#include "ZombieEvent.hpp"

int main()
{
	Zombie	*zombie;
	ZombieEvent zombie_event;

	std::cout << "\n###zombie new Zombie(); test ###\n\n";

	zombie = new Zombie();
	zombie->setName("FirstZombie:Normal Zombie");
	zombie->setType("zombie type");
	zombie->announce();
	delete zombie;

	std::cout << "\n###zombie_event newZombie test ###\n\n";
	
	zombie = zombie_event.newZombie("SecondZombie:Zombie made by newZombie Func");
	zombie->announce();
	delete zombie;

	std::cout << "\n###zombie_event setZombieTypeTest ###\n\n";
	
	zombie_event.setZombieType("Zombie_type by setZombieType");
	zombie = zombie_event.newZombie("Third Zombie");
	zombie->announce();
	delete zombie;


	std::cout << "\n###zombie_event randomChump ###\n\n";
	
	zombie_event.setZombieType("Chump Type");
	zombie = zombie_event.randomChump();
	delete zombie;

	return (0);
}
