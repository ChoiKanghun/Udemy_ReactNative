# include <iostream>
# include <vector>
# include "easyfind.hpp"

#include <deque>

// c언어에서는 deque, vector 등을
// standard container로 규정하고 있음.
// 이들은 iterator로 멤버들에 접근이 가능하다는 특징을 가짐.
int main()
{
	std::vector<int> v;
	// std::deque<int> v;
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
