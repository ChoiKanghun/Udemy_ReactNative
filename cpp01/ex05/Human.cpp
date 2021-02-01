# include "Human.hpp"

Human::Human()
{
}

void Human::setBrain(Brain & brain)
{
	this->_brain = &brain;
}

Brain Human::getBrain() const
{
		return (*this->_brain);
}

std::string Human::identify()
{
	return (this->getBrain().identify());
}
