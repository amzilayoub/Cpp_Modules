# include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
	:ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamaged = 15;
	this->armorDamagedReduction = 3;
	std::cout << "Hello,i'm athe constructor with an argument and i'm Frag and Ninja Trap child" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &other)
	: ClapTrap(other), FragTrap(other), NinjaTrap(other)
{
	std::cout << "Hi, i'm the copy constructor of SuperTrap" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Good Bye Sir !" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
