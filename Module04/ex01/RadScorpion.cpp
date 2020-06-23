# include "RadScorpion.hpp"

RadScorpion &RadScorpion::operator=(const RadScorpion &other)
{
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
	damage -= 3;
	if (damage <= 0)
		return ;

	if (damage > this->hp)
		this->hp = 0;
	else
		this->hp -= damage;
}
