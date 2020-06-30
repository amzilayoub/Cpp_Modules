# include "Array.hpp"

int main()
{
	Array<int> r(1);
	Array<int> r2(2);

	try
	{
		r[0] = 2;
		r2[0] = 6;
		r2[1] = 12;
		r = r2;
		std::cout << r[1] << std::endl;
		r[1] = 99;
		std::cout << r[1] << std::endl;
		std::cout << r2[1] << std::endl;
		std::cout << r2[2] << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
