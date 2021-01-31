# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::ZombieEvent(std::string name, std::string type)
{
	this->setName(name);
	this->setZombieType(type);
}

void ZombieEvent::setZombieType(std::string type)
{
	this->setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie();
	z->setName(name);
	z->setType(this->getType());

	return (z);
}

Zombie *ZombieEvent::randomChump()
{
	int random;
	Zombie *z;

	std::string name_list[7] = {"kchoi", "sujilee", "nakim", "joockim", "Polarbear", "Olivia", "Stark"};
	srand(time(NULL)); // set new seed
	random = rand() % 6;
	// line 34: get random int value by seed table,
	// line 34: random <- range from 0 to 6
	z = newZombie(name_list[random]);
	z->announce();
	return (z);
}

std::string ZombieEvent::getName()
{
	return this->_name;
}

std::string ZombieEvent::getType()
{
	return this->_type;
}

void ZombieEvent::setName(std::string name)
{
	this->_name = name;
} 
