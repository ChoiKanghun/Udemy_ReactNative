#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *p_str = &str;
	std::string &ref_str = str;

	std::cout << "Using Pointer: " << *p_str << "\n";
	std::cout << "Using Reference: " << ref_str << "\n";
}
