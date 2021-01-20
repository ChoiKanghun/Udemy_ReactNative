#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
public: 
	Fixed(); // constructor
	Fixed(const Fixed& copy); // copy constructor
	Fixed &operator =(const Fixed& op); // Assignation operator overload
	virtual ~Fixed(); //destructor

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int	value;
	const static int fractionnal_bits = 8;
};

#endif
