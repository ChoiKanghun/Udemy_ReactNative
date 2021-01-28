#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::cout << std::endl;

    SuperTrap super("Super");
    ScavTrap scav("Scav");
    NinjaTrap ninja("Ninja");

    super.ninjaShoebox(scav);
    super.ninjaShoebox(ninja);
    super.vaulthunter_dot_exe(ninja.getName());

	std::cout << std::endl;
    return (0);
}