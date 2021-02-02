#include "Victim.hpp"

Victim::Victim()
:
    _name()
{
    std::cout << "Some random victim called " << this->_name << " just appeared! " << std::endl;
}

Victim::Victim(const std::string & name)
:
    _name(name)
{
    std::cout << "Some random victim called " << name << " just appeared! " << std::endl;
}

Victim::Victim(const Victim& copy)
:
    _name(copy._name)
{}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=(const Victim& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    return (*this);
}

std::string     Victim::getName(void) const
{ return (this->_name); }

void            Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been tunred into a cute little sheep!" << std::endl;
}

std::ostream    &operator<<(std::ostream & out, Victim & victim)
{
    std::cout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return (out);
}
