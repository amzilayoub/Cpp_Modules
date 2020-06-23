# include "MateriaSource.hpp"

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	this->ch = other.ch;
	return (*this);
	/*
	int	i;

	i = -1;
	while (++i < other.index && i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i];
	}
	this->index = other.index;
	return (*this);
	*/
}

MateriaSource::MateriaSource(void) : ch("AMateriaSource") { }

MateriaSource::MateriaSource(const MateriaSource &other) : ch("AMateriaSource")
{
	(*this) = other;
}

MateriaSource::~MateriaSource(void)
{
	this->ch.freeInventory();
}

void MateriaSource::learnMateria(AMateria *src)
{
	this->ch.equip(src);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}
