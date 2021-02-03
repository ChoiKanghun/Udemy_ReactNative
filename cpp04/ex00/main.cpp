# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"
# include "Another.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");

    Victim      jim("Jimmy");
    Peon        joe("Joe");
//    Another	kchoi("kchoi");

    std::cout << robert << jim << joe;
	//<< kchoi;

    robert.polymorph(jim);
    robert.polymorph(joe);
   // robert.polymorph(kchoi);
    
    return (0);
}
