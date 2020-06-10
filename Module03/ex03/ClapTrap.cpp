# include "ClapTrap.hpp"

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Operator = called" << std::endl;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamaged = other.rangedAttackDamaged;
	this->armorDamagedReduction = other.armorDamagedReduction;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
	: hitPoints(100),
	maxHitPoints(100),
	energyPoints(100),
	maxEnergyPoints(100),
	level(1),
	name(name),
	meleeAttackDamage(30),
	rangedAttackDamaged(20),
	armorDamagedReduction(5)
{
	srand((unsigned)time(0));
	std::cout << "Constructor With Parameter From This ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other)
	: hitPoints(other.hitPoints),
	maxHitPoints(other.maxHitPoints),
	energyPoints(other.energyPoints),
	maxEnergyPoints(other.maxEnergyPoints),
	level(other.level),
	name(other.name),
	meleeAttackDamage(other.meleeAttackDamage),
	rangedAttackDamaged(other.rangedAttackDamaged),
	armorDamagedReduction(other.armorDamagedReduction)
{
	srand((unsigned)time(0));
	std::cout << "Copy Constructor From This ClapTrap!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you, and Btw this msg from ClapTrap!" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attacks " << target << " at range, causing " << this->meleeAttackDamage << " points of damage! :> Scavtrap" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attack " << target << " from MeleeAttack Function :> ScavTrap" << std::endl;
	this->meleeAttackDamage += 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4GT-TP " << this->name << "got damage of" << amount << " from takeDamage function" << std::endl;
	amount -= this->armorDamagedReduction;
	if (amount > this->armorDamagedReduction)
		amount -= this->armorDamagedReduction;
	else
		amount = 0;
	if (this->hitPoints > amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4GT-TP " << this->name << "got repaired with " << amount << " from beRepaired Function" << std::endl;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
}
