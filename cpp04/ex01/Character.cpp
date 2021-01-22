
#include "Character.hpp"

Character::Character(std::string const & name)
:
    _name(name),
    _ap(40),
    _has_equiped_weapon(0)
{}

Character::Character(const Character& copy)
:
    _name(copy._name),
    _ap(copy._ap),
    _has_equiped_weapon(copy._has_equiped_weapon)
{
    if (copy._has_equiped_weapon)
        this->_equiped_weapon = copy._equiped_weapon;
}

Character::~Character() {}

Character & Character::operator=(const Character& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_ap = op.getAP();
    this->_has_equiped_weapon = op._has_equiped_weapon;
    if (op.hasEquipedWeapon())
        this->_equiped_weapon = op.getWeapon();
    return (*this);
}

int                 Character::hasEquipedWeapon(void) const 
{ return (this->_has_equiped_weapon); }

std::string const   &Character::getName(void) const 
{ return (this->_name); }
int                 Character::getAP(void) const 
{ return (this->_ap); }
AWeapon*            Character::getWeapon(void) const 
{ return (this->_equiped_weapon); }

void            Character::recoverAP(void)
{
    int     ap_recovered = 10;
    int     max_ap = 40;

    if (this->_ap + ap_recovered > max_ap)
        ap_recovered = max_ap - this->_ap;
    this->_ap += ap_recovered;
}

void            Character::equip(AWeapon* weapon)
{
    this->_has_equiped_weapon = 1;
    this->_equiped_weapon = weapon;
}

void            Character::attack(Enemy* enemy)
{
    int     ap_cost = this->_equiped_weapon->getApCost();

    if (this->_ap < ap_cost)
        std::cout << "Not enough AP." << std::endl;
    else if (!enemy)
        std::cout << "You tried to attack a dead." << std::endl;
    else if (this->_equiped_weapon)
    {
        std::cout << this->_name << " attack " << enemy->getType() << " with a ";
        std::cout << this->_equiped_weapon->getName() << std::endl;

        enemy->takeDamage(this->_equiped_weapon->getDamage());
        this->_equiped_weapon->attack();
        this->_ap -= ap_cost;

        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::ostream    &operator<<(std::ostream & out, const Character & charater)
{
    if (charater.hasEquipedWeapon())
        out << charater.getName() << " has " 
		<< charater.getAP() << " AP and wields a " 
		<< charater.getWeapon()->getName() << std::endl;
    else
        out << charater.getName() << " has " 
		<< charater.getAP() << " AP and is unarmed" << std::endl;
    return (out);
}
