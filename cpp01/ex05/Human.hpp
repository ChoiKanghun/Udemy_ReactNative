#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {

public:
	Human();
	Brain getBrain() const;
	std::string identify();
	void setBrain(Brain&);

private:
	Brain *_brain;
};

#endif
