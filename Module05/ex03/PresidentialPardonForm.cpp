# include "PresidentialPardonForm.hpp"

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, "Presidental", 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) { }

PresidentialPardonForm::~PresidentialPardonForm(void) { }


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << Form::getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
