#include "Sed.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "error: Invalid number of arguments.\n";
		std::cout << "put args like: filename search replace\n";
	}
	else
	{
		try
		{
			Sed::replace(argv[1], argv[2], argv[3]);
		}
		catch(char const *e)
		{
			std::cerr << "replace: error: " << e << std::endl;
		}
	}
	return (0);
}

