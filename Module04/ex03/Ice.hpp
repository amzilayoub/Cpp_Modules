# pragma once
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice		&operator=(const Ice &other);
				Ice(void);
				Ice(const Ice &other);
				~Ice(void);

	public:
		AMateria	*clone() const override;
		void		use(ICharacter& target) override;
};
