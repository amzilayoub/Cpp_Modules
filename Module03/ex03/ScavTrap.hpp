# pragma once
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static std::string	msg[5];

	public:
					ScavTrap(std::string name);
					ScavTrap(ScavTrap &other);
					~ScavTrap(void);

	public:
		void			challengeNewcomer(std::string const & target);

};

