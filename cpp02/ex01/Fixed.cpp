#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	this->value = integer << this->fractional_bits;
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called\n";
	this->value = (int)(roundf(floating_point * (1 << this->fractional_bits)));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->value = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator =(const Fixed& op)
{
	std::cout << "Assignation operator called\n";
	if (this == &op)
		return (*this);
	this->value = op.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
	return ((int)(this->value >> this->fractional_bits));
}

std::ostream& operator <<(std::ostream &outstream, const Fixed &fixed)
{
	outstream << fixed.toFloat();
	return (outstream);
}
