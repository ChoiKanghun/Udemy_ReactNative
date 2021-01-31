# include "HumanB.hpp"

//constructor initializing
HumanB::HumanB(const std::string name):
_name(name),
_weapon()
{}

void HumanB::setWeapon(Weapon &weapon)
{
	// 아래의 &는 주소를 가리킬 때 쓰는 &
	this->_weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}
