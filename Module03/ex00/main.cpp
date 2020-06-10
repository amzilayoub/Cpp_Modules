# include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("FG67-TP4");
	FragTrap b(a);

	a.rangedAttack("ABCD");
	a.meleeAttack("ERTD");
	b.takeDamage(23);
	b.beRepaired(11);
	b.vaulthunter_dot_exe("HAHA");
	return (0);
}
