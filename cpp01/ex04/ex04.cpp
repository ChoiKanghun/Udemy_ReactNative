#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *p_str = &str;
	// reference can't indicate NULL
	// reference put value into itself whilest pointer indicates the address of a vairable
	std::string &ref_str = str;

	std::cout << "Using Pointer: " << *p_str << "\n";
	std::cout << "Using Reference: " << ref_str << "\n";
}
