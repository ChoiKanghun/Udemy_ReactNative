#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:	ClapTrap(100,100,100,100,1,"",20,10,5)
{
	srand(time(NULL));
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
:	ClapTrap(
	100,
	100,
	50,
	50,
	1,
	name,
	20,
	15,
	5
	)
{
	srand(time(NULL));
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& op)
:
	ClapTrap(op)
{
	srand(time(NULL));
	std::cout << "Copy of ScavTrap constructor called, name : " << op._name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;	
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge_string_list[5]
	= {
		"justice rain from above!",
		"Hammer down!",
		"Ryu-yo, Wagatekio curae!",
		"Die, Die, Die!!!",
		"I've got you in my sight"
	};

	if (this->_energy_points < 25)
	{
		showNameHp(getName(), getHitPoints());
		std::cout << "your skill hasn't been readied\n";
		return ;
	}

	std::cout << getName() << " loves when " << "\033[1;31m" << target 
		<< " says " << "\033[0m"
		<< challenge_string_list[rand() % 5] << std::endl;
	this->_energy_points -= 25;
}

