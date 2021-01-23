#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern&);
        virtual ~Intern();
        Intern &operator=(const Intern& op);

        Form*	makeForm(std::string const & form_name, std::string const & target);

};
#endif

