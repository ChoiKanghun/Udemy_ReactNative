# include "Human.hpp"

int main()
{
	Human bob;

	std::cout << bob.identify() << "\n";
	std::cout << bob.getBrain().identify() << "\n";
}
