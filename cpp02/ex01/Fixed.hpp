#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
	int	value;
	const static int fractional_bits = 8;

public: 
	Fixed();
	Fixed(const int integer);
	Fixed(const float floating_point);
	Fixed(const Fixed& copy);
	virtual ~Fixed();
	Fixed &operator=(const Fixed& op);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
	// with following const keyword,
	// the func can't change value of member variable of the class
};

std::ostream& operator <<(std::ostream &outstream, const Fixed &fixed);

#endif
