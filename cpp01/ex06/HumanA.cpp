# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon)
{} //constructor initialize

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << "\n";
}
