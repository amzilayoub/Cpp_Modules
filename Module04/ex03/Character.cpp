# include "Character.hpp"

Character &Character::operator=(const Character &other)
{
	int i;

	i = -1;
	this->freeInventory();
	this->name = other.name;
	this->index = other.index;
	while (++i < other.index && i < 4)
		this->inventory[i] = other.inventory[i];
	return (*this);
}

Character::Character(std::string const &name) : name(name)
{
	int i;

	i = -1;
	while (++i < 4)
		this->inventory[i] = NULL;
	this->index = 0;
}

Character::Character(const Character &other)
{
	(*this) = other;
}

Character::~Character(void)
{
	this->freeInventory();
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->index >= 4)
		return ;
	this->inventory[this->index] = m;
	this->index++;
}

void Character::unequip(int idx)
{
	int i;
	AMateria *tmp;

	if (!(idx >= 0 && idx < this->index))
		return ;
	i = idx - 1;
	delete this->inventory[idx];
	while (++i < 3)
		this->inventory[i] = this->inventory[i + 1];
	delete this->inventory[i];
	this->inventory[i] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx < this->index))
		return ;
	this->inventory[idx]->use(target);
}

void Character::freeInventory(void)
{
	int i;

	i = -1;
	while (++i < this->index)
		delete this->inventory[i];
	this->index = 0;
}
