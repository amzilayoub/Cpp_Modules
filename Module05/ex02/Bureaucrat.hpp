# pragma once
# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException	&operator=(const GradeTooHighException &other);
						GradeTooHighException(void);
						GradeTooHighException(const GradeTooHighException &other);
						~GradeTooHighException(void);
		public:
			const char		*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException	&operator=(const GradeTooLowException &other);
						GradeTooLowException(void);
						GradeTooLowException(const GradeTooLowException &other);
						~GradeTooLowException(void);
		public:
			const char		*what() const throw();
	};

	private:
		std::string		name;
		int			grade;

	public:
		Bureaucrat		&operator=(const Bureaucrat &other);
					Bureaucrat(void);
					Bureaucrat(const std::string &name, int grade);
					Bureaucrat(const Bureaucrat &other);
					~Bureaucrat(void);

	public:
		std::string		getName(void) const;
		int			getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
		void			signForm(Form &frm);
		void			executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &burc);
