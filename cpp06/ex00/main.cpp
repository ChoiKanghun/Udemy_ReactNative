# include "Convert.hpp"

int	main(int argc, char **argv)
{
	double	nb;
	if (argc != 2)
	{
		std::cout << "arguments should be 2\n";
		return (0);
	}
	// atof converts string to double
	nb = atof(argv[1]);
	Convert convert(argv[1]);

	convert.toChar(nb);
	convert.toInt(nb);
	convert.toFloat(nb);
	convert.toDouble(nb);
/* test - inf, -inf, nan	
	convert.toChar(-1.0/0.0);
	convert.toInt(-1.0/0.0);
	convert.toFloat(1.0/0.0);
	convert.toDouble(-1.0/0.0);
	convert.toFloat(0.0/0.0);
*/
	
	return (0);
}

