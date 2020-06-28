# include "Base.hpp"
# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate(void)
{
	static int	i = 0;
	Base		*ret;

	if (i % 3 == 0)
		ret = new A;
	else if (i % 3 == 1)
		ret = new B;
	else
		ret = new C;
	i++;
	return (ret);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base tmp;

	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &e) { }

	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &e) { }

	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception &e) { }
}

int main()
{
	int	i;
	Base	*tmp;

	i = -1;
	while (++i < 9)
	{
		tmp = generate();
		identify_from_pointer(tmp);
		identify_from_reference(*tmp);
		delete tmp;
	}
}
