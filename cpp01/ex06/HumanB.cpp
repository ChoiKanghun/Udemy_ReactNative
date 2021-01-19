# include "HumanB.hpp"

//constructor initializing
HumanB::HumanB(const std::string name):
_name(name),
_weapon()
{}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << "\n";
}
