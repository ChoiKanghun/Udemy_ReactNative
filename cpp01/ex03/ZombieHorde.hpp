#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <time.h>

class ZombieHorde {
private:
	int	numOfZombies;
	Zombie *_zombies;

public:
	void setNumOfZombies(int num);
	int getNumOfZombies();

	ZombieHorde();
	ZombieHorde(int n);
	void announce();
};

#endif
