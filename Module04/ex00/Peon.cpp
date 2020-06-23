# include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon &other): Victim(other)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon &other)
{
	(*this) = other;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << Victim::getName() << " has been turned into a pink pony!" << std::endl;
}
