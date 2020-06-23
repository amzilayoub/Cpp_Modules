# include "AssaultTerminator.hpp"

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &other)
{
	return (*this);
}

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other)
{
	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << " attacks with chainfists *" << std::endl;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}
