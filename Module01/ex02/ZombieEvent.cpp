# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Good Bye Zoombie Event-san" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void	ZombieEvent::randomChump(void)
{
	int	i;
	std::string name;

	name = "";
	i = -1;
	while (++i < 7)
		name.push_back((char)((rand() % 26) + 'a'));
	Zombie cute_zombie(name, this->type);
	cute_zombie.announce();
}
