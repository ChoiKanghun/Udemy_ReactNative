#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->value = copy.getRawBits();
	// 'this' here is a obj that will be assigned.
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator =(const Fixed& op)
{
	std::cout << "Assignation operator called\n";
	// in case of obj1 = obj1;
	if (this == &op)
		return (*this);
	this->value = op.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
