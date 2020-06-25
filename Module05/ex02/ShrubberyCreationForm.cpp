# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(target, "Shrubbery", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) { }

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream out;

	Form::execute(executor);
	out.open(this->getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (out.fail())
	{
		std::cout << "Cannot open this file !" << std::endl;
		return ;
	}
	out << "A" << std::endl;
	out << "+- B" << std::endl;
	out << "+- C" << std::endl;
	out << "   +- D" << std::endl;
	out << "   +- E" << std::endl;
	out << "+- F" << std::endl;
	out << "+- G" << std::endl;
	out << "   +- H" << std::endl;
	out << "      +- I" << std::endl;
	out << "      +- J" << std::endl;
	out << "   +- K" << std::endl;
	out << "   +- L" << std::endl;
}
