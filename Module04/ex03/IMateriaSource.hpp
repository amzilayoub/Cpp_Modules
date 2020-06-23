# pragma once
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual		~IMateriaSource() {}

	public:
		virtual void	learnMateria(AMateria*) = 0;
		virtual		AMateria* createMateria(std::string const & type) = 0;
};
