# pragma once
# include <iostream>

template<typename T>
class Array
{
	class OutOfRange : public std::exception
	{
		public:
			OutOfRange	&operator=(const OutOfRange &other);
					OutOfRange(void);
					OutOfRange(const OutOfRange &other);
					~OutOfRange(void);

		public:
			const char*	what() const throw() override;
	};


	public:
		T		*array;
		unsigned int	len;

	public:
				Array(void);
				Array(unsigned int n);
				Array(const Array &other);
				~Array(void);

	public:
		T		&operator[](unsigned int index) const;
		Array		&operator=(const Array &other);

	public:
		unsigned int	size(void) const;

};

template<typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return ("This Index is Out of Range !");
}

template<typename T>
typename Array<T>::OutOfRange &Array<T>::OutOfRange::operator=(const OutOfRange &other)
{
	return (*this);
}

template<typename T>
Array<T>::OutOfRange::OutOfRange(void) { }

template<typename T>
Array<T>::OutOfRange::OutOfRange(const OutOfRange &other) { }

template<typename T>
Array<T>::OutOfRange::~OutOfRange(void) { }


template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	int i;

	i = -1;
	if (this->size() != other.size())
	{
		delete [] this->array;
		this->array = new T[other.size()];
		this->len = other.size();
	}
	while (++i < other.size())
		this->array[i] = other[i];
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->len)
		throw Array<T>::OutOfRange();
	return (this->array[index]);
}

template<typename T>
Array<T>::Array(void) : array(new T[0]), len(0) { }

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), len(n) { }

template<typename T>
Array<T>::Array(const Array &other)
{
	(*this) = other;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->array;
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->len);
}
