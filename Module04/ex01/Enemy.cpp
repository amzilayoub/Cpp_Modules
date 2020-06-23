# include "Enemy.hpp"

Enemy::Enemy(void) { }

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) { }

Enemy::Enemy(const Enemy &other) : hp(other.hp), type(other.type) { }

Enemy::~Enemy(void) { }

Enemy &Enemy::operator=(const Enemy &other)
{
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

const std::string	Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;

	if (damage > this->hp)
		this->hp = 0;
	else
		this->hp -= damage;
}
