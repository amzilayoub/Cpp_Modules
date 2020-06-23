# include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) { }

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other) { }

PowerFist::~PowerFist(void) { }

PowerFist &PowerFist::operator=(const PowerFist &other)
{
	(*this) = other;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
