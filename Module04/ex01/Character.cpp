# include "Character.hpp"

Character &Character::operator=(const Character &other)
{
	this->name = other.getName();
	this->APpoint = other.getAPpoint();
	this->wp = other.getWeapon();

	return (*this);
}

Character::Character(std::string const & name) : name(name), APpoint(40), wp(NULL) { }

Character::Character(const Character &other)
{
	(*this) = other;
}

Character::~Character(void) { }

void Character::recoverAP()
{
	if (this->APpoint + 10 >= 40)
		this->APpoint += 10;
	else
		this->APpoint = 40;
}

void Character::attack(Enemy *enemy)
{
	if (enemy == NULL || this->wp == NULL)
		return ;
	//std::cout << this->APpoint - this->wp->getAPCost() << std::endl;
	if (this->APpoint - this->wp->getAPCost() < 0)
		return ;
	this->wp->attack();
	enemy->takeDamage(this->wp->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	this->APpoint -= this->wp->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->wp->getName() << std::endl;
}

void Character::equip(AWeapon *wp)
{
	this->wp = wp;
}

int const Character::getAPpoint() const
{
	return (this->APpoint);
}

AWeapon *Character::getWeapon() const
{
	return (this->wp);
}

std::string const Character::getName(void) const
{
	return this->name;
}

std::ostream &operator<<(std::ostream &out, const Character &chara)
{
	if (chara.getWeapon())
		out << chara.getName() << " has " << chara.getAPpoint() << " AP and wields a " << chara.getWeapon()->getName() << std::endl;
	else
		out << chara.getName() << " has " << chara.getAPpoint() << " AP and wields and is unarmed " << std::endl;
	return (out);
}
