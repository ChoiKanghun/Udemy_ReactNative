#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
private:
	std::string _message;
public:
	Pony(std::string message);
	std::string getMessage();
	void setMessage(std::string message);
	void speech();
};

#endif
