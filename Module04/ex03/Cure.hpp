# pragma once
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure		&operator=(const Cure &other);
				Cure(void);
				Cure(const Cure &other);
				~Cure(void);

	public:
		AMateria	*clone() const override;
		void		use(ICharacter& target) override;
};
