#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	Pony(std::string message);
	std::string _message;

	void speech();
};

#endif
