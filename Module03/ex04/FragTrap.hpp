# pragma once
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
		static std::string	msg[5];

	public:
					FragTrap(std::string name);
					FragTrap(FragTrap &other);
					~FragTrap(void);

	public:
		void			vaulthunter_dot_exe(std::string const & target);

};

