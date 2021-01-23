#include "Intern.hpp"

static Form*	createPresidentialPardonForm(std::string const & target) 
{ return (new PresidentialPardonForm(target)); }
static Form*	createRobotomyRequestForm(std::string const & target) 
{ return (new RobotomyRequestForm(target)); }
static Form*	createShrubberyCreationForm(std::string const & target) 
{ return (new ShrubberyCreationForm(target)); }

Intern::Intern() {}

Intern::Intern(const Intern& copy) { (void)copy; }

Intern::~Intern() {}

Intern & Intern::operator=(const Intern& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}

/*

typedef int (*FP)(int, int);    // FP를 함수 포인터 별칭으로 정의

FP getAdd()    
{
    return add;
}

*/

Form*	Intern::makeForm(std::string const & form_name, std::string const & target)
{
	Form* rtn;
	typedef Form* (*func)(std::string const & target);
	typedef struct { 
		std::string	form_name;
		func 		func; 
		// first func is defined 'func'
		// second func is a 'function pointer'
	} FormTypes;
	
	rtn = NULL;
	FormTypes	forms[] = 
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
		if (forms[i].form_name == form_name)
		{
			rtn = forms[i].func(target);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	std::cout << "Intern is not able to create the form asked." << std::endl;
	return (rtn);
}
