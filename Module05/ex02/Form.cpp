# include "Bureaucrat.hpp"

/*
** START GreadeTooHighException
*/

Form::
GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &other)
{
	return (*this);
}

Form::
GradeTooHighException::GradeTooHighException(void) { }

Form::
GradeTooHighException::GradeTooHighException(const GradeTooHighException &other) { }

Form::
GradeTooHighException::~GradeTooHighException(void) { }

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

/*
** START GreadeTooLowException
*/

Form::
GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &other)
{
	return (*this);
}

Form::
GradeTooLowException::GradeTooLowException(void) { }

Form::
GradeTooLowException::GradeTooLowException(const GradeTooLowException &other) { }

Form::
GradeTooLowException::~GradeTooLowException(void) { }

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}

/*
** START Form
*/

Form &Form::operator=(const Form &other)
{
	this->isSigned = other.getIsSigned();
	return (*this);
}

Form::Form(const std::string &target, const std::string &name, const int gradeToSign, const int gradeToExec)
	: name(name),
	isSigned(false),
	gradeToSign(gradeToSign),
	gradeToExec(gradeToExec),
	target(target)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150 )
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
	: name(other.getName()),
	isSigned(other.getIsSigned()),
	gradeToSign(other.getGradeToSign()),
	gradeToExec(other.getGradeToExec()),
	target(other.getTarget())
{
}

Form::~Form(void) { }



const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

const int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

const int Form::getGradeToExec() const
{
	return (this->gradeToExec);
}

std::string Form::getTarget() const
{
	return (this->target);
}

bool Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() < this->gradeToSign)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
	return (true);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->gradeToExec)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "-Name : " << form.getName() << std::endl;
	out << "-Is Signed : " << form.getIsSigned() << std::endl;
	out << "-Grade To SIgn : " << form.getGradeToSign() << std::endl;
	out << "-Grade To Execute : " << form.getGradeToExec() << std::endl;
	return (out);
}
