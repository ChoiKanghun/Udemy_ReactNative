#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
public:
	Brain();
	
//getter, setter
	void setCapacity(unsigned long long capacity);
	unsigned long long getCapacity();
	std::string identify();

private:
	unsigned long long _capacity;
};

#endif
