# include "SuperMutant.hpp"

SuperMutant &SuperMutant::operator=(const SuperMutant &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage <= 0)
		return ;

	if (damage > this->hp)
		this->hp = 0;
	else
		this->hp -= damage;
}
