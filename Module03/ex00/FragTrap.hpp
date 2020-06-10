# pragma once
# include <iostream>

class FragTrap
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
					FragTrap &operator=(const FragTrap &other);
					FragTrap(std::string name);
					FragTrap(FragTrap &other);
					~FragTrap(void);

	public:
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);

};

