# include "Pony.hpp"

Pony::Pony(std::string message)
{
	setMessage(message);
}

void Pony::speech()
{
	std::cout << "I am " << getMessage() << "\n";
}

std::string Pony::getMessage()
{
	return (this->_message);
}

void Pony::setMessage(std::string message)
{
	this->_message = message;
}