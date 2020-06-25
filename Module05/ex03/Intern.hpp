# pragma once
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	typedef Form *(Intern::*AssosFunc)(std::string&);

	private:
		AssosFunc	func[3];
		std::string	className[3];

	public:
		Intern		&operator=(const Intern &other);
				Intern(void);
				Intern(const Intern &other);
				~Intern(void);

	public:
		void		init(void);
		Form		*makeForm(std::string &formName, std::string &target);
		Form		*objShrubberyCreationForm(std::string &target);
		Form		*objRobotomyRequestForm(std::string &target);
		Form		*objPresidentialPardonForm(std::string &target);
};
