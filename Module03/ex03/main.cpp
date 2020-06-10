# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

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

	std::cout << "--------------- NINJA CLASS START -------------" << std::endl;
	NinjaTrap ssa("NinjaTrap1Name");
	NinjaTrap ffa("NinjaTrap2Name");
	NinjaTrap copya(ssa);

	ssa.takeDamage(20);
	copya = ssa;
	std::cout << copya.getHitPoints() << std::endl;
	copya.beRepaired(100);
	std::cout << copya.getHitPoints() << std::endl;
	std::cout << ssa.getHitPoints() << std::endl;
	ssa.ninjaShoebox(ffa);
	ssa.ninjaShoebox(a);
	ssa.ninjaShoebox(ss);
	ssa.ninjaShoebox(fa);

	return (0);
}
