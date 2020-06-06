# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	Zombie *all_zombies = new Zombie[n];
	int	i;
	int	j;
	std::string	name;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < 7)
			name.push_back((rand() % 26) + 'a');
		all_zombies[i].name = name;
		all_zombies[i].type = "Dead";
		all_zombies[i].announce();
	}
	delete [] all_zombies;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Good Bye!" << std::endl;
}
