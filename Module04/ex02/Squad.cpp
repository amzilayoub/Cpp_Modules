# include "Squad.hpp"
# include <iostream>

Squad &Squad::operator=(const Squad &other)
{
	int i;

	this->destroyUnits();
	this->nbUnits = other.getCount();
	i = -1;
	while (++i < this->nbUnits)
		this->push(other.getUnit(i));
	return (*this);
}

Squad::Squad(void)
{
	this->nbUnits = 0;
	this->squad = NULL;
}

Squad::Squad(const Squad &other)
{
	int i;

	this->nbUnits = other.getCount();
	this->squad = NULL;
	i = -1;
	while (++i < this->nbUnits)
		this->push(other.getUnit(i));
}

Squad::~Squad(void)
{
	this->destroyUnits();
}

int	Squad::getCount() const
{
	return (this->nbUnits);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	t_marine_space *cur;

	if (index < 0 || index > this->nbUnits || !this->squad)
		return (NULL);
	cur = this->squad;
	while (index > 0)
	{
		index--;
		cur = cur->next;
	}
	return (cur->unit);
}

int	Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return (this->nbUnits);

	if (!this->squad)
	{
		this->squad = new t_marine_space;
		this->squad->unit = unit;
		this->squad->next = NULL;
		this->nbUnits += 1;
		return (this->nbUnits);
	}
	t_marine_space *cur;

	cur = this->squad;
	while (cur)
	{
		if (cur->unit == unit)
			return (this->nbUnits);
		else if (!cur->next)
			break;
		cur = cur->next;
	}
	cur->next = new t_marine_space;
	cur->next->unit = unit;
	cur->next->next = NULL;
	this->nbUnits += 1;
	return (this->nbUnits);
}


void Squad::destroyUnits(void)
{
	t_marine_space *tmp;

	if (this->squad == NULL)
		return ;

	tmp = this->squad->next;
	delete this->squad->unit;
	delete this->squad;
	this->squad = tmp;
	this->destroyUnits();
}
