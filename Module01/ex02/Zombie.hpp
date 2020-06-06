#pragma once

# include <iostream>

class Zombie
{
	public:
		std::string name;
		std::string type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);

	public:
		void announce();
};
