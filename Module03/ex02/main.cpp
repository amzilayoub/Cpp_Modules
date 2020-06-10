# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main(void)
{
	FragTrap fa("FG67-TP4");
	FragTrap fb(fa);
	fa.rangedAttack("ABCD");
	fa.meleeAttack("ERTD");
	fb.takeDamage(23);
	fb.beRepaired(11);
	fb.vaulthunter_dot_exe("HAHA");


	ScavTrap a("FG67-TP4");
	ScavTrap b(a);

	a.rangedAttack("ABCD");
	a.meleeAttack("ERTD");
	b.takeDamage(23);
	b.beRepaired(11);
	b.challengeNewcomer("HAHA");

	ScavTrap ss("ScavTrapName");
	FragTrap ff("FragTrapName");
	ScavTrap copy(ss);

	ss.takeDamage(100);
	copy = ss;
	std::cout << copy.getHitPoints() << std::endl;
	copy.beRepaired(100);
	std::cout << copy.getHitPoints() << std::endl;
	std::cout << ss.getHitPoints() << std::endl;
	return (0);
}
