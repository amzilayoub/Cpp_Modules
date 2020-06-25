# pragma once
# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
					PresidentialPardonForm(const std::string &target);
					PresidentialPardonForm(const PresidentialPardonForm &other);
					~PresidentialPardonForm();

	public:
		void			execute(Bureaucrat const &executor) const override;
};
