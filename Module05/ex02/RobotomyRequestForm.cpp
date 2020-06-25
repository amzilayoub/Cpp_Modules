# include "RobotomyRequestForm.hpp"

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, "Shrubbery", 145, 137)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::ofstream out;

	Form::execute(executor);
	if (rand() % 20 > 10)
		std::cout << Form::getTarget() << " has been robotomized successfully 50% ofthe time." << std::endl;
	else
		std::cout << Form::getTarget() << " can't robotomized, Sorry :(" << std::endl;
}
