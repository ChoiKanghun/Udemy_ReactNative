#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {

public:
	Human();
	Brain getBrain();
	std::string identify();

private:
	Brain *_brain;
};

#endif
