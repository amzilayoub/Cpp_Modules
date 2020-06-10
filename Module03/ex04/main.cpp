# include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap st("HAHA");

	st.rangedAttack("SASA");
	st.meleeAttack("UAUA");

	SuperTrap copy(st);
	SuperTrap tt("TEEST");

	tt = st;
	return (0);
}
