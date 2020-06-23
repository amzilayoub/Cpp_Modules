# include "Victim.hpp"

std::ostream &operator<<(std::ostream &out, Victim &other)
{
	out << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return (out);
}

Victim::Victim(std::string name)
	: name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim &other)
	: name(other.getName())
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(Victim &other)
{
	this->name = other.getName();
	return (*this);
}

std::string Victim::getName(void) const
{
	return (this->name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
