# include "Pony.hpp"

Pony::Pony(std::string message)
{
	_message = message;
}

void Pony::speech()
{
	std::cout << "I am " << _message << "\n";
}


