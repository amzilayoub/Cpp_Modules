# include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("FG67-TP4");
	ScavTrap b(a);

	a.rangedAttack("ABCD");
	a.meleeAttack("ERTD");
	b.takeDamage(23);
	b.beRepaired(11);
	b.challengeNewcomer("HAHA");
	return (0);
}
