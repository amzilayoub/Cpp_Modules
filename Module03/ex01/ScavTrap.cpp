# include "ScavTrap.hpp"

std::string ScavTrap::msg[5] = {
	"Lick your Ass!",
	"Give me 100$",
	"What about running around the school 10 times",
	"i forgive, but don't challange me again",
	"I don't know"
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::ScavTrap(std::string name)
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
	std::cout << "Constructor With Parameter From This ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other)
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
	std::cout << "Copy Constructor From This ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you, and Btw this msg from ScavTrap!" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attacks " << target << " at range, causing " << this->meleeAttackDamage << " points of damage! :> Scavtrap" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attack " << target << " from MeleeAttack Function :> ScavTrap" << std::endl;
	this->meleeAttackDamage += 1;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4GT-TP " << this->name << "got damage of" << amount << " from takeDamage function" << std::endl;
	if (amount > this->armorDamagedReduction)
		amount -= this->armorDamagedReduction;
	else
		amount = 0;
	if (this->hitPoints > amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;
}


void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4GT-TP " << this->name << "got repaired with " << amount << " from beRepaired Function" << std::endl;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->energyPoints < 25)
	{
		std::cout << "That's Stupid, you can't stop someone cool as me -_-" << std::endl;
		return ;
	}
	this->energyPoints -= 25;
	std::cout << ScavTrap::msg[rand() % 5] << std::endl;
}
