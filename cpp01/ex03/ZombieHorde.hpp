#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <time.h>

class ZombieHorde {
public:
	Zombie *_zombies;
	int	numOfZombies;
	
	ZombieHorde();
	ZombieHorde(int n);
	void announce();
};

#endif
