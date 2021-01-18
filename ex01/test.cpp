# include <iostream>
# include <iomanip>
# include <string>

int main()
{
	std::string hello;
	std::cin >> hello;
	// "test1" 입력
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin >> hello;
	// "test2" 입력
	std::cout << hello << "\n";
}
