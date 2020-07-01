# include "easyfind.hpp"
# include <vector>

int main()
{
	std::vector<int> t;

	t.push_back(1);
	t.push_back(2);
	t.push_back(3);
	t.push_back(4);
	t.push_back(5);
	t.push_back(6);
	t.push_back(7);
	t.push_back(8);

	try
	{
		easyfind<std::vector<int>>(t, 1);
		easyfind<std::vector<int>>(t, 4);
		easyfind<std::vector<int>>(t, 2);
		easyfind<std::vector<int>>(t, 3);
		easyfind<std::vector<int>>(t, 14);
	} catch (std::string &s)
	{
		std::cout << s << std::endl;
	}
}
