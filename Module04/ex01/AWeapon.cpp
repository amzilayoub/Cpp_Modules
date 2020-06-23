# include "AWeapon.hpp"

AWeapon &AWeapon::operator=(const AWeapon &other)
{
	this->name = other.getName();
	this->damage = other.getDamage();
	this->APCost = other.getAPCost();
	return (*this);
}

AWeapon::AWeapon(void)
	: name(""),
	damage(0),
	APCost(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
	: name(name),
	damage(damage),
	APCost(apcost)
{
}

AWeapon::AWeapon(const AWeapon &other)
	: name(other.getName()),
	damage(other.getDamage()),
	APCost(other.getAPCost())
{
}

AWeapon::~AWeapon(void) { }

const std::string AWeapon::getName(void) const
{
	return (this->name);
}

int AWeapon::getDamage(void) const
{
	return (this->damage);
}

int AWeapon::getAPCost(void) const
{
	return (this->APCost);
}
