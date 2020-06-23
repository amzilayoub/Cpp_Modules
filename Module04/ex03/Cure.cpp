# include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") { }

Cure::Cure(const Cure &other) : AMateria(other) { }

Cure::~Cure(void) { }

Cure &Cure::operator=(const Cure &other)
{
	this->setXP(other.getXP());
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *newClone = new Cure();
	newClone->setXP(this->getXP());
	return (newClone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
