# pragma once
# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);

	public:
		const std::string &getType(void) const;
		void setType(std::string type);
};
