#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	public:
		std::string		name;
		AMateria		*inventory[4];
		int			index;

	public:
		Character		&operator=(const Character &other);
					Character(std::string const &name);
					Character(const Character &other);
					~Character(void);

	public:
		std::string const	&getName() const override;
		void			equip(AMateria* m) override;
		void			unequip(int idx) override;
		void 			use(int idx, ICharacter& target) override;
		void			freeInventory(void);
};

#endif
