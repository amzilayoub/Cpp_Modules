# pragma once
# include "Victim.hpp"

class Peon : public Victim
{
	public:
				Peon(std::string name);
				Peon(Peon &other);
				~Peon(void);

	public:
		Peon		&operator=(Peon &other);
		virtual void	getPolymorphed(void) const;
};
