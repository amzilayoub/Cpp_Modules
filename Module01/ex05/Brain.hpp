# pragma once
# include <iostream>
# include <sstream>

class Brain
{
	public:
		int numberOfCells;
		std::string sex;

	public:
		Brain(void);
		Brain(int numberOfCells, std::string sex);

	public:
		std::string identify(void) const;
};
