# ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <time.h>
# include <cstdlib>

class ZombieEvent {
public:
	ZombieEvent();
	ZombieEvent(std::string name, std::string type);
	
	std::string getName();
	std::string getType();
	void setName(std::string);

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
	
private:
	std::string _name;
	std::string _type;
};


#endif
