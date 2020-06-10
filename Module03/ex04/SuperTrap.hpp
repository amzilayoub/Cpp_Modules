# pragma once
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
			SuperTrap(std::string name);
			SuperTrap(SuperTrap &other);
			~SuperTrap(void);

	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};
