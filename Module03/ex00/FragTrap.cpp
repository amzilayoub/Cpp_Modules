# include "FragTrap.hpp"

std::string FragTrap::msg[5] = {
	"Round and around and around she goes!",
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"ooooo... how are things?",
	"Magic waits for no one, apprentice!",
	"There's more to learn!"
};

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::FragTrap(std::string name)
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
	std::cout << "Constructor With Parameter!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other)
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
	std::cout << "Copy Constructor !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attacks " << target << " at range, causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << "attack " << target << " from MeleeAttack Function" << std::endl;
	this->meleeAttackDamage += 1;
}

void	FragTrap::takeDamage(unsigned int amount)
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


void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4GT-TP " << this->name << "got repaired with " << amount << " from beRepaired Function" << std::endl;
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energyPoints < 25)
	{
		std::cout << "That's Stupid, you can't stop someone cool as me -_-" << std::endl;
		return ;
	}
	this->energyPoints -= 25;
	std::cout << FragTrap::msg[rand() % 5] << std::endl;
}
