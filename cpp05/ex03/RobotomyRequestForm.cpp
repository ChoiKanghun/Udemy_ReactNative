#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
:
	Form(
		"RobotomyRequestForm",
		72,
		45,
		target
	)	
{ srand(time(NULL)); }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
:
	Form(
		copy.getName(),
		copy.getSignGrade(),
		copy.getExecGrade(),
		copy.getTarget()
	)
{srand(time(NULL)); }

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}

void	RobotomyRequestForm::beExecuted() const
{
	if((1 + (rand() % 2)) == 2)
		std::cout << this->getTarget() << " was robotomized!" << std::endl;
	else
		std::cout << "The robotization failed..." << std::endl;
}

