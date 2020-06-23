# pragma once
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	name;
		std::string	title;

	public:
				Sorcerer(std::string name, std::string title);
				Sorcerer(Sorcerer &other);
				~Sorcerer(void);

	public:
		Sorcerer	&operator=(Sorcerer &other);
		std::string	getName(void);
		std::string	getTitle(void);
		void		polymorph(Victim const &vic) const;
};

std::ostream	&operator<<(std::ostream &out, Sorcerer &obj);
