#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
	int index;
	static std::string fields_name[11];
	std::string informations[11];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		Secret
	};
public:
	Contact();

	bool set_informations(int index);
	void display_header();
	void display();
};

#endif
