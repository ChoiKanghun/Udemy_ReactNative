#include "Contact.hpp"

std::string Contact::fields_name[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= Secret; i++)
		this->informations[i] = std::string();
}

bool Contact::set_informations(int index)
{
	this->index = index;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "Add to " << Contact::fields_name[i] << "\n:";
		std::cin >> this->informations[i];
	}
	std::cout << "### CONTACT ADDED ###\n";
	return (true);
}

void Contact::display_header()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << "\n";
}

void Contact::display()
{
	std::cout << "### Contact [" << this->index << "]" << "\n";
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->informations[i] << "\n";
	}
}
