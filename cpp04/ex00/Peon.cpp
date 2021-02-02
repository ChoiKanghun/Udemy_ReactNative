#include "Peon.hpp"

Peon::Peon()
:
    Victim()
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon & copy)
:
    Victim (
        copy
    )
{}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon& op)
{
    if (this == &op)
        return (*this);
    Victim::operator=(op);
    return (*this);
}

void    Peon::getPolymorphed(void) const 
{
    std::cout << getName() << " has been tunrned into a pink Pony!" << std::endl;
}
