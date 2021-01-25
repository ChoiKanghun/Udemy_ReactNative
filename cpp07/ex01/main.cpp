# include <iostream>
# include "iter.hpp"

template<typename T>
void iter(T *array, int length, void (*func)(T const &))
{
	int i;

	i = -1;
	while (++i < length)
		(func)(array[i]);
}

template<typename T>
void print_out(T arg)
{
	std::cout << arg << std::endl;
}

int main()
{
	//Print(3);
	int t[3] = {1, 2, 3};
	iter(t, 3, &print_out);
	return (0);
}