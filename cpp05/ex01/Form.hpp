
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
 private:
 	std::string     _name;
	bool            _signed;
 	int             _least_sign_grade;
	int             _least_exec_grade;

public:
	Form(const std::string & name, int least_sign_grade, int _least_exec_grade);
	Form(const Form&);
	virtual ~Form();
	Form &operator=(const Form& op);

        const	std::string & getName() const;
        bool	getSigned() const;
        int	getSignGrade() const;
        int	getExecGrade() const;

        void	beSigned(Bureaucrat const & bureaucrat);

        // Exceptions
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

std::ostream    &operator<<(std::ostream & out, const Form & form);

#endif
