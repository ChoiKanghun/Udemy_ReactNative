# include "Zombie.hpp"

Zombie::Zombie()
{}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ...\n";
}
