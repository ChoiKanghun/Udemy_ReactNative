# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

static void testForm(Bureaucrat& bureau, Form* form)
{
    std::cout  << "Sign & Execute \033[33m" << form->getName()
		<< "\033[0m : " << std::endl;
    bureau.signForm(*form);
    bureau.executeForm(*form);
}

static void testIntern(Intern& intern, const std::string &form_name, const std::string &target_name)
{
    Bureaucrat bureau("kchoi", 1);
    Form *totest = NULL;

    std::cout << std::endl;
    totest = intern.makeForm(form_name, target_name);

    if (totest)
    {
        testForm(bureau, totest);
        delete totest;
    }
}

int main()
{
    Intern someRandomIntern;

    std::cout << std::endl << "\033[31mNormal\033[0m tests : " << std::endl;
    testIntern(someRandomIntern, "presidential pardon", "kchoi");
    testIntern(someRandomIntern, "robotomy request", "Polarbear");
    testIntern(someRandomIntern, "shrubbery creation", "Ministry");

    std::cout << std::endl << "\033[33mDoesn't exist\033[0m tests : " << std::endl;
    testIntern(someRandomIntern, "doesn't exist", "NOP");

    return (0);
}

