#include "FragTrap.hpp"

static void showNameHp(std::string &name, unsigned int hp)
{
	std::cout << "FR4G-TP \033[1;34m" << name << "(HP: " << hp << ")\033[1;31m : \033[0m"; 
}

FragTrap::FragTrap()
{
	srand(time(NULL));
	showNameHp(this->_name, this->_hit_points);
	std::cout << "Killing Machine readied\n";	
}

FragTrap::FragTrap(std::string name)
:	_hit_points(100),
	_max_hit_points(100),
	_energy_points(100),
	_max_energy_points(100),
	_level(1),
	_name(name),
	_melee_attack_damage(30),
	_ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	srand(time(NULL));
	showNameHp(this->_name, this->_hit_points);
	std::cout << "Killing Machine readied\n";
}

FragTrap::~FragTrap()
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "Mission Complete! Returning to base..\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "FR4g-TP " << this->_name << " attacks "
		<< target << " at melee, causing \033[31m"
		<< this->_melee_attack_damage 
		<< "\033[0m points of damage!\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	showNameHp(this->_name, this->_hit_points);
	std::cout << "FR4G-TP " << this->_name << " attacks " 
		<< target << " at range, causing \033[31m" 
		<< this->_ranged_attack_damage 
		<< "\033[0m points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int deal = amount - this->_armor_damage_reduction;
	this->_hit_points -= deal;
	if (this->_hit_points < 0)
	{
		deal += this->_hit_points;
		this->_hit_points = 0;
	}
	std::cout << this->_name << " took \033[1;31m " << deal << " \033[0m point of damage!\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->_hit_points) > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	this->_hit_points += amount;
	showNameHp(this->_name, this->_hit_points);
	std::cout << "Being repaired!\033[1;32m(hp +" << amount << ")\033[0m" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	void (FragTrap::*cmd[5])(std::string const &target);
	
	cmd[0] = &FragTrap::cub3dAttack;
	cmd[1] = &FragTrap::miniRTAttack;
	cmd[2] = &FragTrap::minishellAttack;
	cmd[3] = &FragTrap::printfAttack;
	cmd[4] = &FragTrap::libasmAttack;

	if (this->_energy_points < 25)
	{
		showNameHp(this->_name, this->_hit_points);
		std::cout << " not enough energy points\n";
		return ;
	}
	(this->*(cmd[rand() % 5]))(target);
	this->_energy_points -= 25;
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
	std::cout << "\033]34m Hey, " << target << "! make a shell that works as if it is a bash shell";
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
