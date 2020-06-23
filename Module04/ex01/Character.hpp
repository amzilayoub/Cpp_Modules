# pragma once
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string		name;
		int			APpoint;
		AWeapon			*wp;

	public:
		Character		&operator=(const Character &other);
					Character(const Character &other);
					Character(std::string const & name);
		virtual			~Character();

	public:
		void			recoverAP();
		void			equip(AWeapon *wp);
		void			attack(Enemy *enemy);
		std::string const	getName() const;
		int const		getAPpoint() const;
		AWeapon			*getWeapon() const;
};

std::ostream &operator<<(std::ostream &out, const Character &chara);
