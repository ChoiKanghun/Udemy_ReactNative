#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
:
	Form(
		"ShrubberyCreationForm",
		145,
		137,
		target
	)	
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
:
	Form(
		copy
	)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}

void	ShrubberyCreationForm::beExecuted() const
{
	std::ofstream file;

	// open(arg1, arg2) needs arg1 as char *, not string)
	// string.c_str() converts string to char *
	// ios::out -> open file. if there's no file, create one.
	// ios::app -> abbreviation of append. append string to the end of the file.
	file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
		std::ios::out | std::ios::app);
	
	// ASCII Tree is just tree shape that consists of ascii code
	if(file.is_open())
	{
		file << "         v" << std::endl;
		file << "        >X<" << std::endl;
		file << "         A" << std::endl;
		file << "        d$b" << std::endl;
		file << "      .d$$$b." << std::endl;
		file << "        ###" << std::endl;
		file << "         # " << std::endl;
		file.close();
	}
	std::cout << "Ascii tree appended to " + this->getTarget() + "_shrubbery file\n";
}
