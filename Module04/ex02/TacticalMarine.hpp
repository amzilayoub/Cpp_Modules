# pragma once
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine	&operator=(const TacticalMarine &other);
				TacticalMarine(void);
				TacticalMarine(const TacticalMarine &other);
				~TacticalMarine(void);

	public:
		ISpaceMarine	*clone() const override;
		void		battleCry() const override;
		void		rangedAttack() const override;
		void		meleeAttack() const override;
};
