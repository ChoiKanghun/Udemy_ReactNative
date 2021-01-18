#include "Infobook.hpp"

Infobook::Infobook()
{
	this->amount = 0;
}

void Infobook::show_startup()
{
	std::cout << "# INFOBOOK" << std::endl;
	std::cout << "# Enter one of the commands; ADD, SEARCH, EXIT" << std::endl;
}

void Infobook::add_contact()
{
	if (this->amount == 8)
		std::cout << "** Directory is full. **\n";
	else if (this->contacts[this->amount].set_informations(this->amount + 1))
		this->amount++;
}

void Infobook::show_search_header()
{
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|   Index  |FIRST NAME| LAST NAME| NICKNAME |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|\n";
}

/*
** cin.ignore(arg1, arg2) - clear the cin buffer
** arg1 - numeric_limits<std::streamsize>::max() == max size of the stream
** arg2 - delimter. i.e. all the characters before '\n'
*/

void Infobook::search_contact()
{
	int index;

	if (this->amount == 0)
		std::cout << "Please add a contact before search\n";
	else
	{
		this->show_search_header();
		std::cout << "### Which index do you want to search?(zero to cancel) ###\n";
		if ((std::cin >> index) == 0 || index < 0 || index > this->amount)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "### INVALID INDEX ###\n";
			return ;
		}
		if (index > 0)
			this->contacts[index - 1].display();
	}
}
