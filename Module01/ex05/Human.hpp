# include "Brain.hpp"

class Human
{
	public:
		const Brain humanBrain;

	public:
		Human(void);

	public:
		const std::string identify(void);
		const Brain &getBrain(void) const;
};
