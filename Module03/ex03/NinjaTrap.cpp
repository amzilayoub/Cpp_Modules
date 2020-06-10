# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Hello, i'm a new Ninja" << std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamaged = 5;
	this->armorDamagedReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap &other) : ClapTrap(other)
{
	srand((unsigned)time(0));
	std::cout << "Copy Constructor From This NinjaTrap!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you, and Btw this msg from NinjaTrap!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &other)
{
	std::cout << "Hi, i'm one of those useless Multiple Function called NinjaShoeBox and my input type is NinjaTrap" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &other)
{
	std::cout << "Hi, i'm one of those useless Multiple Function called NinjaShoeBox and my input type is ClapTrap" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &other)
{
	std::cout << "Hi, i'm one of those useless Multiple Function called NinjaShoeBox and my input type is FragTrap" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &other)
{
	std::cout << "Hi, i'm one of those useless Multiple Function called NinjaShoeBox and my input type is ScanTrap" << std::endl;
}
