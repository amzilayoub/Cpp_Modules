# include "Brain.hpp"

Brain::Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream tmp;

	tmp << this;
	return (tmp.str());
}
