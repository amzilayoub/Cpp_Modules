# pragma once
# include "Form.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
					ShrubberyCreationForm(const std::string &target);
					ShrubberyCreationForm(const ShrubberyCreationForm &other);
					~ShrubberyCreationForm();

	public:
		void			execute(Bureaucrat const &executor) const override;
};
