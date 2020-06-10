# include "ScavTrap.hpp"

std::string ScavTrap::msg[5] = {
	"Lick your Ass!",
	"Give me 100$",
	"What about running around the school 10 times",
	"i forgive, but don't challange me again",
	"I don't know"
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	srand((unsigned)time(0));
	std::cout << "Constructor With Parameter From This ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
	srand((unsigned)time(0));
	std::cout << "Copy Constructor From This ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you, and Btw this msg from ScavTrap!" << std::endl;
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
