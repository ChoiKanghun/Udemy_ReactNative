# include "span.hpp"

int main()
{
	Span sp = Span(5);
// try {
// 	std::cout << sp.shortestSpan() << std::endl;

	sp.addNumber(5);

// 	std::cout << sp.shortestSpan() << std::endl;

// } catch (std::exception &e) {
// 	std::cout << "error occured" << std::endl;
// }
	
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
}
