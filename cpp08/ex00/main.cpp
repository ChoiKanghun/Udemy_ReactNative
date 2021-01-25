# include <iostream>
# include <vector>
# include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	try
	{
		easyfind(v, 1);
		easyfind(v, 4);
		easyfind(v, 2);
		easyfind(v, 3);
		easyfind(v, 14);
	} catch (std::string &s)
	{
		std::cout << s << std::endl;
	}
}
