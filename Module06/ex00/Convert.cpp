# include "Convert.hpp"

Convert::Convert() : precision(0) { }

Convert::Convert(char *arg)
{
	int i;
	int j;

	i = 0;
	while (arg[i] && arg[i] != '.')
		i++;
	if (!arg[i])
		precision = 1;
	else
	{
		j = 1;
		while (arg[j + i] && isdigit(arg[j + i]))
			j++;
		precision = j - 1;
	}
}
Convert::~Convert() { }

void Convert::toChar(double nb) const
{
	std::cout << "char : ";
	if (std::isnan(nb))
		std::cout << "impossible" << std::endl;
	else
	{
		char c;

		c = static_cast<char>(nb);
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void Convert::toInt(double nb) const
{
	std::cout << "int : ";
	if (std::isnan(nb) || std::isinf(nb))
		std::cout << "impossible" << std::endl;
	else
	{
		if (nb > static_cast<double>(INT_MAX) || nb < static_cast<double>(INT_MIN))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(nb) << std::endl;
	}
}

void Convert::toFloat(double nb) const
{
	std::cout << "float : " << std::setprecision(this->precision) << std::fixed << static_cast<float>(nb) << 'f' << std::endl;
}

void Convert::toDouble(double nb) const
{
	std::cout << "double : " << std::setprecision(this->precision) << std::fixed << nb << std::endl;
}
