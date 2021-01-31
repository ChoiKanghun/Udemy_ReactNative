# include "Zombie.hpp"

Zombie::Zombie()
{}

void Zombie::announce() {
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss ...\n";
}

void Zombie::setName(std::string name) 
{
	this->_name = name;
}

void Zombie::setType(std::string type)
{
	this->_type = type;
}
std::string Zombie::getName()
{
	return this->_name;
}

std::string Zombie::getType()
{
	return this->_type;
}
