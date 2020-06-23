# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") { }

Ice::Ice(const Ice &other) : AMateria(other) { }

Ice::~Ice(void) { }

Ice &Ice::operator=(const Ice &other)
{
	this->setXP(other.getXP());
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *newClone = new Ice();
	newClone->setXP(this->getXP());
	return (newClone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
