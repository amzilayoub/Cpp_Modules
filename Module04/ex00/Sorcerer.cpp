# include "Sorcerer.hpp"

std::ostream	&operator<<(std::ostream &out, Sorcerer &obj)
{
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies" << std::endl;
	return (out);
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: name(name),
	title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &other)
	: name(other.getName()),
	title(other.getTitle())
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer &other)
{
	this->name = other.getName();
	this->title = other.getTitle();
	return (*this);
}

std::string Sorcerer::getName(void)
{
	return (this->name);
}

std::string  Sorcerer::getTitle(void)
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}
