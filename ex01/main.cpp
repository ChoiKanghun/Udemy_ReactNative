# include "Infobook.hpp"

int main()
{
	Infobook infobook;
	std::string command;

	infobook.show_startup();
	while (true)
	{
		std::cout << "input command: ";
		std::cin >> command;
		if (command == "ADD")
			infobook.add_contact();
		else if (command == "SEARCH")
			infobook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "\nBYE\n\n";
			break;
		}
	}
	return (0);
}
