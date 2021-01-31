# include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
	panther = 0;
}

/*
** remove comments to check the func
** valgrind --leak-check=full ./a.out
*/

//int main()
//{ memoryLeak(); }

