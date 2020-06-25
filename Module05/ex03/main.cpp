# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat b("BB", 1);
	ShrubberyCreationForm ff("test");
	PresidentialPardonForm ss("dd");
	RobotomyRequestForm rb("aa");
	Intern inte;

	std::string name = "presidential pardon";
	std::string type = "teeeest";
	Form *frm = inte.makeForm(name, type);
	std::cout << frm->getName() << std::endl;
	//b.executeForm(rb);
	//ff.execute(b);
	/*
	Bureaucrat ss("haha", 1);
	try
	{
		ss.incrementGrade();
		std::cout << "Try : " << ss.getGrade() << std::endl;
	} catch (std::exception &e)
	{
		std::cout << ss;
		std::cout << e.what() << std::endl;
	}
	*/
}
