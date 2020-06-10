# pragma once
# include <iostream>

class ScavTrap
{
	private:
		unsigned int		hitPoints;
		unsigned int		maxHitPoints;
		unsigned int		energyPoints;
		unsigned int		maxEnergyPoints;
		unsigned int		level;
		std::string		name;
		unsigned int		meleeAttackDamage;
		unsigned int		rangedAttackDamaged;
		unsigned int		armorDamagedReduction;
		static std::string	msg[5];

	public:
					ScavTrap &operator=(const ScavTrap &other);
					ScavTrap(std::string name);
					ScavTrap(ScavTrap &other);
					~ScavTrap(void);

	public:
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

};

