#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string _name;
	std::string _type;
	
public:
	Zombie();
	Zombie(std::string type);
	
	void setName(std::string);
	void setType(std::string);
	std::string getName();
	std::string getType();

	void announce();
};

#endif
