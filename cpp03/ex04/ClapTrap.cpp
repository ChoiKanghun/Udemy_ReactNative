# include "ClapTrap.hpp"

void ClapTrap::showNameHp(const std::string &name, unsigned int hp)
{
	std::cout << "\033[1;34m" << name << "(HP: " << hp << ")\033[1;31m : \033[0m\n";
}

ClapTrap::ClapTrap()
:
	_hit_points(100),
	_max_hit_points(100),
	_energy_points(100),
	_max_energy_points(100),
	_level(100),
	_name(""),
	_melee_attack_damage(30),
	_ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	srand(time(NULL));
	std::cout << "ClapTrap Constructor has been called\n";
}

ClapTrap::ClapTrap(
        unsigned int	hit_points,
        unsigned int	max_hit_points,
        unsigned int	energy_points,
        unsigned int	max_energy_points,
        unsigned int	level,
        std::string	name,
        unsigned int	melee_attack_damage,
        unsigned int	ranged_attack_damage,
        unsigned int	armor_damage_reduction
    ) 
:
        _hit_points(hit_points),
        _max_hit_points(max_hit_points),
        _energy_points(energy_points),
        _max_energy_points(max_energy_points),
        _level(level),
        _name(name),
        _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage),
        _armor_damage_reduction(armor_damage_reduction)
{
    srand(time(NULL));
    std::cout << "ClapTrap Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& op)
:
	_hit_points(op._hit_points),
	_max_hit_points(op._max_hit_points),
	_energy_points(op._energy_points),
	_max_energy_points(op._max_energy_points),
	_level(op._level),
	_name(op._name),
	_melee_attack_damage(op._melee_attack_damage),
	_ranged_attack_damage(op._ranged_attack_damage),
	_armor_damage_reduction(op._armor_damage_reduction)
{
    srand(time(NULL));
    std::cout << "copy constructor of ClapTrap called. name: " << op._name << "\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called\n";
}

ClapTrap & ClapTrap::operator=(const ClapTrap& op)
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


unsigned int	ClapTrap::getHitPoints(void)                
{ return (this->_hit_points); }
unsigned int	ClapTrap::getMaxHitPoints(void)             
{ return (this->_max_hit_points); }
unsigned int	ClapTrap::getEnergyPoints(void)             
{ return (this->_energy_points); }
unsigned int	ClapTrap::getMaxEnergyPoints(void)          
{ return (this->_max_energy_points); }
unsigned int	ClapTrap::getLevel(void)                    
{ return (this->_level); }
std::string	ClapTrap::getName(void)                     
{ return (this->_name); }
unsigned int	ClapTrap::getMeleeAttackDamage(void)        
{ return (this->_melee_attack_damage); }
unsigned int	ClapTrap::getRangedAttackDamage(void)       
{ return (this->_ranged_attack_damage); }
unsigned int	ClapTrap::getArmorDamageReduction(void)     
{ return (this->_armor_damage_reduction); }

void  	ClapTrap::setHitPoints(unsigned int hit_points) 
{ this->_hit_points = hit_points; }
void	ClapTrap::setMaxHitPoints(unsigned int max_hit_points)
{ this->_max_hit_points = max_hit_points; }
void    ClapTrap::setEnergyPoints(unsigned int energy_points)
{ this->_energy_points = energy_points; }
void	ClapTrap::setMaxEnergyPoints(unsigned int max_energy_points)
{ this->_max_energy_points = max_energy_points; }
void	ClapTrap::setLevel(unsigned int level)
{ this->_level = level; }
void	ClapTrap::setName(std::string name)                                     
{ this->_name = name; }
void	ClapTrap::setMeleeAttackDamage(unsigned int melee_attack_damage)
{ this->_melee_attack_damage = melee_attack_damage; }
void	ClapTrap::setRangedAttackDamage(unsigned int ranged_attack_damage)
{ this->_ranged_attack_damage = ranged_attack_damage; }
void	ClapTrap::setArmorDamageReduction(unsigned int armor_damage_reduction)
{ this->_armor_damage_reduction = armor_damage_reduction; }

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " 
		<< this->_ranged_attack_damage << " points of damage!\n";
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << " at melee, causing " 
		<< this->_melee_attack_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor_damage_reduction;
	if (this->_hit_points < amount)
	{
		amount = this->_hit_points;
		this->_hit_points = 0;
	}
	else
		this->_hit_points -= amount;

	std::cout << this->_name << " took \033[31m" << amount << "\033[0m damage points " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	showNameHp(this->_name, this->_hit_points + amount);
	std::cout << "I've got medical emergency treat \033[32m(+"
		<< amount << ")\033[0m\n";
	this->_hit_points += amount;
}
