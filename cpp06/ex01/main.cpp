#include "Data.hpp"

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << ": " << std::endl;
		void *raw = serialize();
		Data *data = deserialize(raw);

		std::cout << "str1: " << data->s1 << std::endl;
		std::cout << "n:    " << data->n << std::endl;
		std::cout << "str2: " << data->s2 << std::endl;

		// int size = sizeof(data->s1) + sizeof(data->n) + sizeof(data->s2);
		// std::cout << "total size is : " << size << std::endl;
		// std::cout << "sizeof(string) is : " << sizeof(std::string) << std::endl;
		delete static_cast<char*>(raw);
		delete data;
	}

	return (0);
}
