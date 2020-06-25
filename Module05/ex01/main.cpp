# include "Bureaucrat.hpp"

int main(void)
{
	Form ff("", 3, 2);
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
}
