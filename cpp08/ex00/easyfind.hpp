# include <iostream>
# include <algorithm>

template<typename T>
void easyfind(T &haystack, int needle)
{
	typename T::iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::string("Element is not exist !");
	else
		std::cout << "Element is exist. element is : " << *it << std::endl;
}

