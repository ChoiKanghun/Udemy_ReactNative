#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
private:
	std::string	_name;
	int           	_grade;

public:
	// Coplien
	Bureaucrat(const std::string & name, int grade);
	Bureaucrat(const Bureaucrat&);
	virtual ~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat& op);
	const	std::string & getName() const;
	int	getGrade() const;
	
	void	incrementGrade();
	void	decrementGrade();

	// added
	void	signForm(Form & form);
	
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException () throw();
		GradeTooHighException (const GradeTooHighException&) throw();
		GradeTooHighException& operator= (const GradeTooHighException&) throw();
		virtual ~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException () throw();
		GradeTooLowException (const GradeTooLowException&) throw();
		GradeTooLowException& operator= (const GradeTooLowException&) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};
};

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif
