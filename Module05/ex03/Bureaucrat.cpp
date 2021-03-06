# include "Bureaucrat.hpp"

/*
** START GreadeTooHighException
*/

Bureaucrat::
GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &other)
{
	return (*this);
}

Bureaucrat::
GradeTooHighException::GradeTooHighException(void) { }

Bureaucrat::
GradeTooHighException::GradeTooHighException(const GradeTooHighException &other) { }

Bureaucrat::
GradeTooHighException::~GradeTooHighException(void) { }

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

/*
** START GreadeTooLowException
*/

Bureaucrat::
GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &other)
{
	return (*this);
}

Bureaucrat::
GradeTooLowException::GradeTooLowException(void) { }

Bureaucrat::
GradeTooLowException::GradeTooLowException(const GradeTooLowException &other) { }

Bureaucrat::
GradeTooLowException::~GradeTooLowException(void) { }

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}

/*
** START Bureaucrat
*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->name = other.getName();
	this->grade = other.getGrade();

	return (*this);
}

Bureaucrat::Bureaucrat(void) { }

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	(*this) = other;
}

Bureaucrat::~Bureaucrat(void) { }

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form &frm)
{
	try
	{
		frm.beSigned((*this));
		std::cout << this->name << " signs " << frm.getName() << std::endl;
	} catch (std::exception &e)
	{
		std::cout << this->name << " cannot sign " << frm.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute((*this));
		std::cout << "The Form has executed successfully by " << this->name << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "Seems like the form cannot be executed by " << this->name << std::endl;
		std::cout << "Reason : " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &burc)
{
	out << burc.getName() << ", bureaucrat grade " << burc.getGrade() << std::endl;

	return (out);
}
