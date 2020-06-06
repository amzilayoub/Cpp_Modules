#pragma once

# include "Zombie.hpp"
# include <iostream>

class ZombieEvent
{
	public:
		std::string type;

	public:
		ZombieEvent(std::string type);
		~ZombieEvent(void);

	public:
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump(void);
};
