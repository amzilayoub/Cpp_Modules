# include "Intern.hpp"

Intern &Intern::operator=(const Intern &other)
{
	return (*this);
}

Intern::Intern(void)
{
	init();
}

Intern::Intern(const Intern &other)
{
	init();
}

Intern::~Intern(void) { }

void Intern::init()
{
	this->className[0] = "presidential pardon";
	this->className[1] = "robotomy request";
	this->className[2] = "shrubbery creation";

	this->func[0] = &Intern::objPresidentialPardonForm;
	this->func[1] = &Intern::objRobotomyRequestForm;
	this->func[2] = &Intern::objShrubberyCreationForm;
}

Form *Intern::makeForm(std::string &formName, std::string &target)
{
	int i;

	i = -1;
	while (++i < 3)
	{
		if (formName == this->className[i])
			return (((this->*func[i])(target)));
	}
	std::cout << "class name not found !" << std::endl;
	return (NULL);
}

Form *Intern::objShrubberyCreationForm(std::string &target)
{
	std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form *Intern::objRobotomyRequestForm(std::string &target)
{
	std::cout << "Intern creates Robotomy Request Form" << std::endl;
	return (new RobotomyRequestForm(target));
}

Form *Intern::objPresidentialPardonForm(std::string &target)
{
	std::cout << "Intern creates Presidential Pardon Form" << std::endl;
	return (new PresidentialPardonForm(target));
}
