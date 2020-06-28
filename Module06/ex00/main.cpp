# include <iostream>
# include "Convert.hpp"

int	main(int argc, char **argv)
{
	double	nb;
	if (argc == 1)
		return (0);
	nb = atof(argv[1]);
	Convert cnv(argv[1]);

	cnv.toChar(nb);
	cnv.toInt(nb);
	cnv.toFloat(nb);
	cnv.toDouble(nb);
	//std::cout << nb << std::endl;
	return (0);
}
