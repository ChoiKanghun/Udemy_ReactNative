# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat* bureaucrat, Form* form)
{
    std::cout << "\nSign & Execute \033[33m" 
            << form->getName() << "\033[0m : " << std::endl;
    bureaucrat->signForm(*form);
    bureaucrat->executeForm(*form);
}

int main()
{
    // sign 145, exec 137
    ShrubberyCreationForm* shrub = new ShrubberyCreationForm("shrub");
    // sign 72, 45
    RobotomyRequestForm* robot = new RobotomyRequestForm("robot");
    // sign 25, 5
    PresidentialPardonForm* pardon = new PresidentialPardonForm("pardon");

    Bureaucrat* kchoi = new Bureaucrat("Kchoi", 120);
    Bureaucrat* polarbear = new Bureaucrat("Polarbear", 33);
    Bureaucrat* hightempler = new Bureaucrat("HighTempler", 1);

    std::cout << "\n\033[31mNormal\033[0m tests : " << std::endl;

    testForm(kchoi, shrub);
    testForm(polarbear, robot);
    testForm(hightempler, pardon);

    std::cout << "\n\033[31mAlreadySigned & TooLow\033[0m tests : " << std::endl;

    testForm(kchoi, pardon);

    delete shrub;
    delete robot;
    delete pardon;

    delete kchoi;
    delete polarbear;
    delete hightempler;

    return (0);
}

