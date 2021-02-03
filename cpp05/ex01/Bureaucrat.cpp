
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	if (copy.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = copy.getName();
	this->_grade = copy.getGrade();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	this->_grade = op.getGrade();
	return (*this);
}
const	std::string & Bureaucrat::getName(void) const 
{ return (this->_name); }
int	Bureaucrat::getGrade(void) const 
{ return (this->_grade); }

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void	Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << this->_name << " can't sign " 
				<< form.getName() << " because that is already signed." << std::endl;
	else
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << this->_name << " can't sign " 
				<< form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
}
/* Exceptions */

// grade too high

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{ return ("Grade is too high."); }

// grade too low

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{ return ("Grade is too low."); }

// ostream
std::ostream	&operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

