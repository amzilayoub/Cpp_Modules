# pragma once
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	private:
		std::string		type;
		unsigned int		xp;

	public:
		AMateria		&operator=(const AMateria &other);
					AMateria(std::string const &type);
					AMateria(const AMateria &other);
		virtual			~AMateria();

	public:
		std::string const	&getType() const;
		unsigned int		getXP() const;
		void			setXP(unsigned int xp);
		void			setType(const std::string type);
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};
