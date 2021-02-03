#include "PlasmaRifle.hpp"

// name, ap_cost, damage
PlasmaRifle::PlasmaRifle()
:
    AWeapon(
        "Plasma Rifle",
        5,
        100
    )
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy)
:
    AWeapon(
        copy
    )
{}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle & PlasmaRifle::operator=( const PlasmaRifle& op)
{
    if (this == &op)
        return (*this);
    AWeapon::operator=(op);
    return (*this);
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

