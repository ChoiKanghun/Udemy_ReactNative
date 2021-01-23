# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* bureaucrat = new Bureaucrat("Polarbear", 2);
    Bureaucrat* minister = new Bureaucrat("kchoi", 149);
    
    // Test increment
    try
    {
        std::cout << *bureaucrat;
        bureaucrat->incrementGrade();
        std::cout << bureaucrat->getName() << " increment executed " << std::endl;
        std::cout << *bureaucrat;
        bureaucrat->incrementGrade();
        std::cerr << "It shoudn't be printed1 " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[1] Exception : " << e.what() << std::endl;
    }

    // Test ++
    try
    {
        std::cout << *minister;
        minister->decrementGrade();
        std::cout << minister->getName() << " decrement executed " << std::endl;
        std::cout << *minister;
        minister->decrementGrade();
        std::cerr << "It shouldn't be printed2" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[2] Exception : " << e.what() << std::endl;
    }

    Bureaucrat* toHigh;
    Bureaucrat* toLow;

    // Test ToHigh
    try
    {
        toHigh = new Bureaucrat("ToHigh", 0);
        std::cerr << "It shouldn't be printed3 " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[3] Exception : " << e.what() << std::endl;
    }
    
    try
    {
        toLow = new Bureaucrat("ToLow", 420);
        std::cerr << " It shouldn't be printed out4 " << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "[4] Exception : " << e.what() << std::endl;
    }
    
    delete bureaucrat;
    delete minister;
}

