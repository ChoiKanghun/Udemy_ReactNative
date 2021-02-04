# include "Array.hpp"

int main()
{
	Array<int> r(1);
	Array<int> r2(2);
	// Array<int> r3(0);

	try
	{
		// std::cout << "Array<int> r3(0)" << std::endl;
		// std::cout << r3.len << std::endl;
        std::cout << "Array<int> r(1)" << std::endl;
        std::cout << "Array<int> r2(2)" << std::endl;
		r[0] = 2;
        std::cout << "r[0] = 2" << std::endl;
		r2[0] = 6;
        std::cout << "r2[0]= 6" << std::endl;
		r2[1] = 12;
        std::cout << "r2[1] = 12" << std::endl;
		r = r2;
        std::cout << "r = r2" << std::endl;
		std::cout << "r[1]: " << r[1] << std::endl;
        r[1] = 99;
        std::cout << "r[1] = 99" << std::endl;
		std::cout << "r[1]: " << r[1] << std::endl;
		std::cout << "r2[1]: " << r2[1] << std::endl;
        std::cout << "r2[2] = " << std::endl;
        std::cout << r2[2] << std::endl;

	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

