# include "Human.hpp"

Human::Human(void)
{
}

const Brain &Human::getBrain(void) const
{
	return ((this->humanBrain));
}

const std::string Human::identify(void)
{
	return (this->humanBrain.identify());
}
