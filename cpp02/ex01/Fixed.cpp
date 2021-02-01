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
	// roundf는 소수점 이하 1번째 자리에서 반올림.
	// 1 << this->fractional_bits(8)은 256을 곱하는 것과 같다.
	// 부동소수점 표현이 고정소수점 표현보다 메모리 효율성 큼.
	// 왜냐하면 고정 소수점 표현은 소수점 이하를 위한 메모리 공간을 추가로 필요로 하지만
	// 부동 소수점 표현은 그저 소수점 이전의 메모리 공간만 있으면 되거든.
	this->value = (int)(roundf(floating_point * (1 << this->fractional_bits)));
	// std::cout << "first value : " << this->value << std::endl;
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

Fixed& Fixed::operator=(const Fixed& op)
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
	/*
    std::cout << (float)24123/(float)256;
    (float) / (float) 은 소수점 이하 4자리까지만 잘라서 나온다.
    실제로 위 예제는 94.23046875 이라는 값을 갖지만 
    소수점 이하 5번째에서 반올림하여
    94.2305 라는 값으로 출력된다.
	*/
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