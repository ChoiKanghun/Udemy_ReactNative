
#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{
	srand(time(NULL));
    showNameHp(getName(), getHitPoints());
	std::cout << "Ninja's ready." << std::endl;
}


NinjaTrap::NinjaTrap(std::string name)
:	ClapTrap(
	60,
	60,
	120,
	120,
	1,
	name,
	60,
	5,
	0
	)
{
	srand(time(NULL));
    showNameHp(getName(), getHitPoints());
	std::cout << "Ninja's ready." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& op)
:
	ClapTrap(op)
{
	srand(time(NULL));
	showNameHp(this->_name, this->_hit_points);
	std::cout << "Ninja " << op._name << " copied" << std::endl;
}


NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called" << std::endl;	
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void		NinjaTrap::ninjaShoebox(ClapTrap & )
{
	showNameHp(getName(), getHitPoints());
	std::cout << "Ninja shoebox with clapTrap" << std::endl;
}


void		NinjaTrap::ninjaShoebox(NinjaTrap & )
{
	showNameHp(getName(), getHitPoints());
	std::cout << "Ninja shoebox with NinjaTrap" << std::endl;
}


void		NinjaTrap::ninjaShoebox(FragTrap & )
{
	showNameHp(getName(), getHitPoints());
	std::cout << "Ninja shoebox with fragtrap" << std::endl;
}


void		NinjaTrap::ninjaShoebox(ScavTrap & )
{
	showNameHp(getName(), getHitPoints());
	std::cout << "Ninja shoebox with scavtrap" << std::endl;
}
