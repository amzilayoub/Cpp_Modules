# pragma once
# include "Enemy.hpp"
# include <iostream>

class Enemy
{
	protected:
		int			hp;
		std::string		type;

	public:
		Enemy			&operator=(const Enemy &other);
					Enemy(void);
					Enemy(const Enemy &other);
					Enemy(int hp, std::string const & type);
		virtual			~Enemy();

	public:
		const std::string	getType() const;
		int			getHP() const;
		virtual void		takeDamage(int damage);
};
