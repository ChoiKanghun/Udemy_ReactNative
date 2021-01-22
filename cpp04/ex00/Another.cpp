#include "Another.hpp"

Another::Another()
:
    Victim()
{
    std::cout << "Another Constructor has been called" << std::endl;
}

Another::Another(const std::string & name)
:
    Victim(
        name
    )
{
    std::cout << "Another Constructor has been called" << std::endl;
}

Another::Another(const Another & copy)
:
    Victim (
        copy
    )
{}

Another::~Another()
{
    std::cout << "Another Object has been destructed" << std::endl;
}

Another & Another::operator=(const Another& op)
{
    if (this == &op)
        return (*this);
    Victim::operator=(op);
    return (*this);
}

void    Another::getPolymorphed(void) const
{
    std::cout << getName() << " was just polymorphed" << std::endl;

}
