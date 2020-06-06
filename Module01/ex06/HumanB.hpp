# pragma once
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;

	public:
		HumanB(std::string name);

	public:
		void attack(void);
		void setWeapon(Weapon &weapon);
};
