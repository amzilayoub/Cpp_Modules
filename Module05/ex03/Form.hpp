# pragma once
# include <iostream>
# include <fstream>
class Bureaucrat;

class Form
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
		const std::string	name;
		bool			isSigned;
		const int		gradeToSign;
		const int		gradeToExec;
		std::string		target;

	public:
		Form			&operator=(const Form &other);
					Form(const std::string &target, const std::string &name, const int gradeToSign, const int gradeToExec);
					Form(const Form &other);
					~Form(void);

	public:
		virtual void		execute(Bureaucrat const &executor) const = 0;
		const std::string	getName() const;
		bool			getIsSigned() const;
		const int		getGradeToSign() const;
		const int		getGradeToExec() const;
		std::string		getTarget() const;
		bool			beSigned(Bureaucrat &bur);
};

std::ostream &operator<<(std::ostream &out, const Form &form);
