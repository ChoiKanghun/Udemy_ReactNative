#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string type);
	std::string _name;
	std::string _type;

	void announce();
};

#endif
