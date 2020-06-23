# pragma once
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion		&operator=(const RadScorpion &other);
					RadScorpion(void);
					RadScorpion(const RadScorpion &other);
					RadScorpion(int hp, std::string const & type);
					~RadScorpion();

	public:
		void			takeDamage(int damage) override;
};
