# include <iostream>
# include <algorithm>

template<typename T>
void easyfind(T &haystack, int needle)
{
	typename T::iterator it;

	// it는 haystack의 처음부터 끝까지 중에 needle과 일치하는 곳을 가리킴.
	// find는 인자로 받아들인 (시작점, 끝점, 찾을 숫자) 에서
	// 시작점~끝점 사이에 있는 숫자를 찾아내고 그 위치를 반환
	// 없다면 haystack.end()를 반환.
	// 여기서 haystack.end()는 haystack의 마지막 요소가 아님.
	// 또한 iterator는 iterator이지 포인터가 아님.
	// 역참조는 가능하나 그것 자체를 출력하려고 하면 에러남.
	// 대신 그것 또한 무언가를 가리키는 것이기 때문에 그것의 주소는 출력이 가능.
	it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::string("Element is not exist !");
	else
	{
		std::cout << "Element is exist. element is : ";
		std::cout << *it << std::endl;
	}
}

