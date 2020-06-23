# pragma once
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct			s_marine_space
{
	ISpaceMarine		*unit;
	struct s_marine_space	*next;
}				t_marine_space;

class Squad : public ISquad
{
	private:
		int		nbUnits;
		t_marine_space	*squad;

	public:
		Squad		&operator=(const Squad &other);
				Squad(void);
				Squad(const Squad &other);
				~Squad();

	public:
		int		getCount() const;
		ISpaceMarine*	getUnit(int index) const;
		int		push(ISpaceMarine *unit);
		void		destroyUnits(void);
};
