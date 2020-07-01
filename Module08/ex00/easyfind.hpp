# pragma once
# include <iostream>
# include <algorithm>

template<typename T>
void easyfind(T &haystack, int needle)
{
	typename T::iterator it;

	it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::string("Element cannot be founded !");
	else
		std::cout << "Element is exist" << std::endl;
}
