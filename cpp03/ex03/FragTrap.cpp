# include "FragTrap.hpp"

FragTrap::FragTrap()
:	ClapTrap(100,100,100,100,1,"",30,20,5)
{
	srand(time(NULL));
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
:	ClapTrap(
	100,
	100,
	100,
	100,
	1,
	name,
	30,
	20,
	5
	)
{
	srand(time(NULL));
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& op)
:
	ClapTrap(op)
{
	srand(time(NULL));
	std::cout << "copy of FragTrap called, name : " << op._name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void (FragTrap::*cmd[5])(std::string const &target);
	
	cmd[0] = &FragTrap::cub3dAttack;
	cmd[1] = &FragTrap::miniRTAttack;
	cmd[2] = &FragTrap::minishellAttack;
	cmd[3] = &FragTrap::printfAttack;
	cmd[4] = &FragTrap::libasmAttack;
	
	if (getEnergyPoints() < 25)
	{
		showNameHp(this->_name, this->_hit_points);
		std::cout << "Not enough energy" << std::endl;
		return;
	}
	(this->*cmd[rand() % 5])(target);
	setEnergyPoints(this->_energy_points - 25);
}

void FragTrap::cub3dAttack(std::string const & target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "\033]34m Hey, " << target << "! explain the principle of ray-casting!\n";
}

void FragTrap::miniRTAttack(std::string const & target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "\033]34m Hey, " << target << "! explain the principle of ray-Tracing!\n";
}

void FragTrap::minishellAttack(std::string const &target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "\033]34m Hey, " << target << "! make a shell that works as if it is a bash shell\n";
}

void FragTrap::printfAttack(std::string const &target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "\033]34m Hey, " << target << "! explain what does '-.sdixXf' flags and width and precision mean in printf!\n";
}

void FragTrap::libasmAttack(std::string const &target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "\033]34m Hey, " << target << "! explain how cmp in asm works!\n";
}

