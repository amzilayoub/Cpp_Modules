# pragma once
# include "Form.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
					RobotomyRequestForm(const std::string &target);
					RobotomyRequestForm(const RobotomyRequestForm &other);
					~RobotomyRequestForm();

	public:
		void			execute(Bureaucrat const &executor) const override;
};
