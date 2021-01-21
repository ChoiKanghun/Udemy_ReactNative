#include "ScavTrap.hpp"

static void overwatchHero(std::string &name, unsigned int hp)
{
	std::cout << "\033[1;34m" << name << "\033[1;32m" << "(HP: "
		<< hp << ")\033[0m : \n";
}

ScavTrap::ScavTrap()
:	_hit_points(100),
	_max_hit_points(100),
	_energy_points(100),
	_max_energy_points(100),
	_level(1),
	_name("no name"),
	_melee_attack_damage(30),
	_ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	srand(time(NULL));
	overwatchHero(this->_name, this->_hit_points);
	std::cout << "Heroes never die\n";	
}

ScavTrap::ScavTrap(std::string name)
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
	overwatchHero(this->_name, this->_hit_points);
	std::cout << "Heroes never die\n";
}

ScavTrap::ScavTrap(const ScavTrap &op)
:	_hit_points(op._hit_points),
	_max_hit_points(op._max_hit_points),
	_energy_points(op._energy_points),
	_max_energy_points(op._max_energy_points),
	_level(op._level),
	_name(op._name),
	_melee_attack_damage(op._melee_attack_damage),
	_ranged_attack_damage(op._ranged_attack_damage),
	_armor_damage_reduction(op._armor_damage_reduction)
{
}

ScavTrap::~ScavTrap()
{
	overwatchHero(this->_name, this->_hit_points);
	std::cout << "Play of the game by " << this->_name << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_max_hit_points = op._max_hit_points;
	this->_energy_points = op._energy_points;
	this->_max_energy_points = op._max_energy_points;
	this->_level = op._level;
	this->_name = op._name;
	this->_melee_attack_damage = op._melee_attack_damage;
	this->_ranged_attack_damage = op._ranged_attack_damage;
	this->_armor_damage_reduction = op._armor_damage_reduction;
	return (*this);
}

void ScavTrap::meleeAttack(std::string const &target)
{
	overwatchHero(this->_name, this->_hit_points);
	std::cout << this->_name << " attacks "
		<< target << " at melee, causing \033[31m"
		<< this->_melee_attack_damage 
		<< "\033[0m points of damage!\n";
}

void ScavTrap::rangedAttack(std::string const &target)
{
	overwatchHero(this->_name, this->_hit_points);
	std::cout << this->_name << " attacks " 
		<< target << " at range, causing \033[31m" 
		<< this->_ranged_attack_damage 
		<< "\033[0m points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((amount + this->_hit_points) > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	this->_hit_points += amount;
	overwatchHero(this->_name, this->_hit_points);
	std::cout << "Being repaired!\033[1;32m(hp +" << amount << ")\033[0m" << std::endl;
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
		overwatchHero(this->_name, this->_hit_points);
		std::cout << "your skill hasn't been readied\n";
		return ;
	}

	std::cout << this->_name << " loves when " << "\033[1;31m" << target 
		<< " says " << "\033[0m"
		<< challenge_string_list[rand() % 5] << std::endl;
	this->_energy_points -= 25;
}
