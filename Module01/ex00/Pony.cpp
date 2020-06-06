# include "Pony.hpp"

Pony::Pony(int age, float height, float weight)
{
	this->age = age;
	this->height = height;
	this->weight = weight;
}

Pony::~Pony(void)
{
	std::cout << "Object Destructed !" << std::endl;
}
