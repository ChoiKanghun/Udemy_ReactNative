#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {}

ZombieHorde::ZombieHorde(int n) {
	int random;

	if (n <= 0)
	{
		std::cout << "Invalid number of zombies\n";
		std::cout << "Setting size to 1\n";
		n = 1;
	}
	this->_zombies = new Zombie[n];
	this->numOfZombies = n;
	srand(time(NULL));

	std::string name_list[10] = {"kchoi", "Sujilee", "Nakim", "PolarBear", "Joockim", "Olivia", 					"Stark", "Suntlee", "Yeonhlee", "Sunpark"};
	for (int i = 0; i < n; i++)
	{
		random = rand() % 10;
		this->_zombies[i]._name = name_list[random];
	}
}

void ZombieHorde::announce()
{
	int i = 0;
	while (i < this->numOfZombies)
		_zombies[i++].announce();
}
