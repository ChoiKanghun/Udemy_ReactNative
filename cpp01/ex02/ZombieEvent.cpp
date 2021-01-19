# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
	this->_name = name;
	this->setZombieType(type);
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie();
	z->_name = name;
	z->_type = this->_type;

	return (z);
}

Zombie *ZombieEvent::randomChump()
{
	int random;
	Zombie *z;

	std::string name_list[7] = {"Empty", "sujilee", "nakim", "joockim", "Polarbear", "Olivia", "Stark"};
	srand(time(NULL)); // set new seed
	random = rand() % 6 + 1;
	// line 34: get random int value by seed table,
	// line 34: random <- range from 1 to 6
	z = newZombie(name_list[random]);
	z->announce();
	return (z);
}
