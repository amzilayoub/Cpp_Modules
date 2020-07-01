# pragma once
# include <iostream>
# include <algorithm>
# include <vector>
# include <limits.h>

class Span
{
	private:
		int			len;
		std::vector<int>	array;

	public:
		Span			&operator=(const Span &other);
					Span(void);
					Span(unsigned int n);
					Span(const Span &other);
					~Span();

	public:
		unsigned int		getLen(void) const;
		std::vector<int>	getArray(void) const;
		void			addNumber(int number);
		long long		longestSpan(void);
		long long		shortestSpan(void);
};
