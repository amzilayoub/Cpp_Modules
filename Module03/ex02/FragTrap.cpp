# include "FragTrap.hpp"

std::string FragTrap::msg[5] = {
	"Round and around and around she goes!",
	"Hey! You're TALKING to me! And I didn't even have an exclamation point over my head! This is the BEST day of my life!",
	"ooooo... how are things?",
	"Magic waits for no one, apprentice!",
	"There's more to learn!"
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	srand((unsigned)time(0));
	std::cout << "Constructor With Parameter From This FragTrap!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
	srand((unsigned)time(0));
	std::cout << "Copy Constructor From This FragTrap!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Good Bye Sir, it was great to meet you, and Btw this msg from FragTrap!" << std::endl;
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
