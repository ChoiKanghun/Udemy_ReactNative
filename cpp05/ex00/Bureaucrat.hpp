#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
private:
	std::string	_name;
	int           	_grade; 
	// 1~150
	// 1~150 까지의 범위 <= 0 or 150 <
	// error
	//  

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
