# pragma once
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator	&operator=(const AssaultTerminator &other);
					AssaultTerminator(void);
					AssaultTerminator(const AssaultTerminator &other);
					~AssaultTerminator(void);

	public:
		ISpaceMarine		*clone() const override;
		void			battleCry() const override;
		void			rangedAttack() const override;
		void			meleeAttack() const override;
};
