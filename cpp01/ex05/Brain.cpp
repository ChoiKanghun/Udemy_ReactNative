# include "Brain.hpp"

Brain::Brain() {}

unsigned long long Brain::getCapacity()
{
	return (this->_capacity);
}

void Brain::setCapacity(unsigned long long capacity) 
{
	this->_capacity = capacity;
}

std::string Brain::identify()
{
	std::stringstream address;
	address << this;
	return (address.str());
}
