#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
:
    ClapTrap(),
    FragTrap(),
    NinjaTrap()
{}

SuperTrap::SuperTrap(std::string name)
:
    ClapTrap(
        60,
        60,
        120,
        120,
        1,
        name,
        60,
        20,
        5
    ),
    FragTrap(name),
    NinjaTrap(name)
{
     showNameHp(getName(), getHitPoints());
     std::cout << "SuperTrap created " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &op)
:
    ClapTrap(op)
{
     showNameHp(getName(), getHitPoints());
     std::cout << "Super Trap Copied" << std::endl;
}

SuperTrap::~SuperTrap()
{
    showNameHp(getName(), getHitPoints());
    std::cout << "SuperTrap destroyed" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}

