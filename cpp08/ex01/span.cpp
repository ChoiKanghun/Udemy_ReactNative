# include "span.hpp"

Span &Span::operator=(const Span &other)
{
	this->array = other.getArray();
	this->len = other.getLen();
	return (*this);
}

Span::Span(void) : len(0)
{
	this->array.reserve(0);
}

Span::Span(unsigned int n) : len(n)
{
    // reserve는 vector의 공간을 확보.
	this->array.reserve(n);
}
Span::Span(const Span &other)
{
	(*this) = other;
}

Span::~Span(void) { }


std::vector<int> Span::getArray(void) const
{
	return (this->array);
}

unsigned int Span::getLen(void) const
{
	return (this->len);
}

void Span::addNumber(int number)
{
	if (this->len == 0)
		throw (std::exception());
	else
		this->array.push_back(number);
	this->len--;
}

long long Span::shortestSpan(void)
{
	long long minDiff;
	long long curDiff;
	std::vector<int>::iterator last;
	std::vector<int>::iterator it;

	if (this->array.size() <= 1)
	{
		std::cout << "container's size must be more than 1" << std::endl;
		throw (std::exception());
	}

	minDiff = LLONG_MAX;
	std::sort(this->array.begin(), this->array.end());
	it = this->array.begin();
	last = this->array.begin();
	while (++it != this->array.end())
	{
		curDiff = static_cast<long long>(*it) - static_cast<long long>(*last);
		if (curDiff < minDiff)
			minDiff = curDiff;
		last = it;
	}
	return (minDiff);
}


long long Span::longestSpan(void)
{
	long long max;
	long long min;

	if (this->array.size() <= 1)
	{
		std::cout << "container's size must be more than 1" << std::endl;
		throw (std::exception());
	}

	max = static_cast<long long>(*std::max_element(this->array.begin(), this->array.end()));
	min = static_cast<long long>(*std::min_element(this->array.begin(), this->array.end()));
	return (max - min);
}
