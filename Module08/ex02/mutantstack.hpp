# pragma once
# include <stack>

template<typename T>
class mutantstack : public std::stack<T>
{
	public:
		mutantstack	&operator=(const mutantstack &other);
				mutantstack(void);
				mutantstack(const mutantstack &other);
				~mutantstack(void);
};

template<typename T>
mutantstack<T> &mutantstack<T>::operator=(const mutantstack &other)
{
	(*this) = other;
	return (*other);
}


template<typename T>
mutantstack<T>::mutantstack(void) : std::stack<T>() { }

template<typename T>
mutantstack<T>::mutantstack(const mutantstack &other) : std::stack<T>(other) { }

template<typename T>
mutantstack<T>::~mutantstack(void) { }

