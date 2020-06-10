# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
			NinjaTrap(std::string name);
			NinjaTrap(NinjaTrap &other);
			~NinjaTrap(void);

	public:
		void	ninjaShoebox(NinjaTrap &other);
		void	ninjaShoebox(ClapTrap &other);
		void	ninjaShoebox(FragTrap &other);
		void	ninjaShoebox(ScavTrap &other);
};
