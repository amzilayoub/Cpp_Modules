# pragma once
# include <iostream>

class ClapTrap
{
	protected:
		unsigned int		hitPoints;
		unsigned int		maxHitPoints;
		unsigned int		energyPoints;
		unsigned int		maxEnergyPoints;
		unsigned int		level;
		std::string		name;
		unsigned int		meleeAttackDamage;
		unsigned int		rangedAttackDamaged;
		unsigned int		armorDamagedReduction;

	public:
					ClapTrap &operator=(const ClapTrap &other);
					ClapTrap(std::string name);
					ClapTrap(ClapTrap &other);
					~ClapTrap(void);

	public:
			unsigned int getHitPoints(void) const;
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};
