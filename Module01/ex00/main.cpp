# include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	std::cout << "Allocate a Pony On The HEAP ...." << std::endl;
	Pony* obj = new Pony(10, 150, 160);
	std::cout << "Allocated Successfully !" << std::endl;
	delete obj;
}

void	ponyOnTheStack(void)
{
	std::cout << "Allocate a Pony On The Stack ...." << std::endl;
	Pony obj(10, 150, 160);
	std::cout << "Allocated Successfully !" << std::endl;
}

int	main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();

	return (0);
}
