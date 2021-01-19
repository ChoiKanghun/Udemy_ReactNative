# ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <time.h>
# include <cstdlib>

class ZombieEvent {
public:
	ZombieEvent();
	ZombieEvent(std::string name, std::string type);
	
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
	std::string _name;
private:
	std::string _type;
};


#endif
