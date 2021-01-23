
#include "Form.hpp"

Form::Form(const std::string & name, int least_sign_grade, int least_exec_grade)
{
	if (least_sign_grade <= 0 || least_exec_grade <= 0)
		throw Form::GradeTooHighException();
	else if (least_sign_grade > 150 || least_exec_grade > 150)
		throw Form::GradeTooLowException();
	this->_name = name;
	this->_signed = false;
	this->_least_sign_grade = least_sign_grade;
	this->_least_exec_grade = least_exec_grade;
}

Form::Form(const Form& copy)
{
	if (copy.getSignGrade() <= 0 || copy.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (copy.getSignGrade() > 150 || copy.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->_name = copy.getName();
	this->_signed = copy.getSigned();
	this->_least_sign_grade = copy.getSignGrade();
	this->_least_exec_grade = copy.getExecGrade();
}

Form::~Form() {}

Form & Form::operator=(const Form& op)
{
	if (this == &op)
		return (*this);
	if (op.getSignGrade() <= 0 || op.getExecGrade() <= 0)
		throw Form::GradeTooHighException();
	else if (op.getSignGrade() > 150 || op.getExecGrade() > 150)
		throw Form::GradeTooLowException();
	this->_name = op.getName();
	this->_signed = op.getSigned();
	this->_least_sign_grade = op.getSignGrade();
	this->_least_exec_grade = op.getExecGrade();
	return (*this);
}

// get, set

const std::string &	Form::getName(void) const { return (this->_name); }

bool			Form::getSigned(void) const { return (this->_signed); }

int			Form::getSignGrade(void) const { return (this->_least_sign_grade); }

int			Form::getExecGrade(void) const { return (this->_least_exec_grade); }

// general

void			Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_least_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

/* Exception */

// too high

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException&) throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw() 
{ return ("Grade is too high for Form."); }


// too low

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException&) throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{ return ("Grade is too low for Form."); }

// operator

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << form.getName() << " ";

	if (form.getSigned() == false)
		out << "cannot be signed ! ";
	else
		out << "has been signed.  ";
	
	out << "required sign grade : " << form.getSignGrade();
	out << " required execute grade : " << form.getExecGrade() << "." << std::endl;

	return (out);
}
