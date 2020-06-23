# pragma once
# include <iostream>

class AWeapon
{
	private:
		std::string		name;
		int			damage;
		int			APCost;

	public:
					AWeapon(void);
					AWeapon(const AWeapon &other);
					AWeapon(std::string const & name, int apcost, int damage);
		virtual			~AWeapon();

	public:
		AWeapon			&operator=(const AWeapon &other);
		const std::string	getName() const;
		int			getAPCost() const;
		int			getDamage() const;
		virtual void		attack() const = 0;
};
