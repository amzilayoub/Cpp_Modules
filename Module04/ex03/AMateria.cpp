# include "AMateria.hpp"

AMateria &AMateria::operator=(const AMateria &other)
{
	this->xp = other.getXP();
	this->type = other.getType();
	return (*this);
}

AMateria::AMateria(std::string const &type) : xp(0), type(type) { }

AMateria::AMateria(const AMateria &other) : xp(other.getXP()), type(other.getType()) { }

AMateria::~AMateria(void) { }

std::string const	&AMateria::getType() const
{
	return (this->type);
}

unsigned int		AMateria::getXP() const
{
	return (this->xp);
}

void		AMateria::use(ICharacter& target)
{
	this->xp += 10;
}

void AMateria::setXP(unsigned int xp)
{
	this->xp = xp;
}

void AMateria::setType(const std::string type)
{
	this->type = type;
}
