#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <cstdlib>
# include "Form.hpp"
# include <time.h>

class RobotomyRequestForm : public Form
{
    private:
        void        beExecuted() const;

    public:
        // Coplien
        RobotomyRequestForm(std::string const & target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& op);

};

#endif

