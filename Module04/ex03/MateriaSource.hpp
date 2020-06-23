# pragma once
# include "IMateriaSource.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		Character	ch;

	public:
		MateriaSource	&operator=(const MateriaSource &other);
				MateriaSource(void);
				MateriaSource(const MateriaSource &other);
				~MateriaSource(void);

	public:
		void		learnMateria(AMateria*);
				AMateria* createMateria(std::string const &type);
};
