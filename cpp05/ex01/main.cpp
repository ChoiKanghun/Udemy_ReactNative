# include "Form.hpp"

int main()
{
    Form* upLoadedForm = new Form("UpLoadedForm", 10, 30);
    Form* tooHigh;
    Form* tooLow;
    
    try
    {
       tooHigh = new Form("TooHigh", 0, 20);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
       tooLow = new Form("TooLow", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat* kchoi = new Bureaucrat("kchoi", 5);
    
    std::cout << *kchoi;

    kchoi->signForm(*upLoadedForm);

    std::cout << *upLoadedForm;

    kchoi->signForm(*upLoadedForm);

    Form* form2 = new Form("UpLoadedForm2", 1, 1);
    Bureaucrat* bureaucrat2 = new Bureaucrat("Polarbear", 12);

    bureaucrat2->signForm(*form2);
    std::cout << *form2;    

    delete upLoadedForm;
    delete kchoi;
    delete form2;
    delete bureaucrat2;
}
