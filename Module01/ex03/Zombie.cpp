# include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void)
{
	std::cout << "Good Bye Zombie-Chan" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << " " << this->type << " > Braiiiiiiinnnssss..." << std::endl;
}
