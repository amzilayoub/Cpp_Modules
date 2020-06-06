# include <iostream>

int	main(void)
{
	std::string str;
	std::string *strpointer;
	std::string &strref = str;

	str = "HI THIS IS BRAIN";
	strpointer = &str;

	std::cout << "GREATING FROM POINTER : " << *strpointer << std::endl;
	std::cout << "GREATING FROM REFERENCE : " << strref << std::endl;
	return (0);
}
