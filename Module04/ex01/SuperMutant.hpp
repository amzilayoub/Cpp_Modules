# pragma once
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant		&operator=(const SuperMutant &other);
					SuperMutant(void);
					SuperMutant(const SuperMutant &other);
					SuperMutant(int hp, std::string const & type);
					~SuperMutant();

	public:
		void			takeDamage(int damage) override;
};
