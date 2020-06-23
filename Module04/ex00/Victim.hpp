# pragma once
# include <iostream>

class Victim
{
	protected:
		std::string	name;

	public:
				Victim(std::string name);
				Victim(Victim &other);
				~Victim(void);

	public:
		Victim		&operator=(Victim &other);
		void		getPolymorphed(void) const;
		std::string	getName(void) const;
};

std::ostream	&operator<<(std::ostream &out, Victim &other);
