#ifndef INFOBOOK_HPP
# define INFOBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Infobook
{
private:
	Contact contacts[8];
	int	amount;
public:
	Infobook();

	void show_startup();
	void add_contact();
	void search_contact();
	void show_search_header();
};

#endif
