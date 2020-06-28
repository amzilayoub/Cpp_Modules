# include <iostream>
# include <time.h>

struct Data
{
	std::string	s1;
	std::string	s2;
	int		n;
};

void *serialize(void)
{
	Data		*val = new Data;
	std::string	hexa("0123456789ABCDEF");
	int		i;

	i = -1;
	srand(time(0));
	while (++i < 8)
	{
		val->s1 += hexa[rand() % 16];
		val->s2 += hexa[rand() % 16];
	}
	val->n = rand();
	return (val);
}

Data *deserialize(void *raw)
{
	return (static_cast<Data*>(raw));
}

int main(void)
{
	void *seri;

	seri = serialize();
	Data *data = deserialize(seri);
	std::cout << data->s1 << std::endl;
	std::cout << data->s2 << std::endl;
	std::cout << data->n << std::endl;
	return (0);
}
