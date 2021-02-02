#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string & name, const std::string & title)
:
    _name(name),
    _title(title)
{
    std::cout << this->_name << ", " << this->_title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& copy)
:
    _name(copy._name),
    _title(copy._name)
{}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer& op)
{
    if (this == &op)
        return (*this);
    this->_name = op.getName();
    this->_title = op.getTitle();
    return (*this);
}

std::string     Sorcerer::getName(void) const { return (this->_name); }
std::string     Sorcerer::getTitle(void) const { return (this->_title); }

void            Sorcerer::polymorph(Victim const & victim)
{
    victim.getPolymorphed();
}

std::ostream    &operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle();
    out << ", and I like ponies!" << std::endl;
    return (out);
}
