# include "span.hpp"

Span &Span::operator=(const Span &other)
{
	this->array = other.getArray();
	this->len = other.getLen();
	return (*this);
}

Span::Span(void) : len(0)
{
	this->array.reserve(0);
}

Span::Span(unsigned int n) : len(n)
{
	this->array.reserve(n);
}
Span::Span(const Span &other)
{
	(*this) = other;
}

Span::~Span(void) { }


std::vector<int> Span::getArray(void) const
{
	return (this->array);
}

unsigned int Span::getLen(void) const
{
	return (this->len);
}

void Span::addNumber(int number)
{
	if (this->len == 0)
		throw (std::exception());
	else
		this->array.push_back(number);
	this->len--;
}

long long Span::shortestSpan(void)
{
	long long minDiff;
	long long curDiff;
	std::vector<int>::iterator last;
	std::vector<int>::iterator it;

	minDiff = LLONG_MAX;
	std::sort(this->array.begin(), this->array.end());
	it = this->array.begin();
	last = this->array.begin();
	while (++it != this->array.end())
	{
		curDiff = std::abs(static_cast<long long>(*it) - static_cast<long long>(*last));
		if (curDiff < minDiff)
			minDiff = curDiff;
		last = it;
	}
	return (minDiff);
}


long long Span::longestSpan(void)
{
	long long max;
	long long min;

	max = static_cast<long long>(*std::max_element(this->array.begin(), this->array.end()));
	min = static_cast<long long>(*std::min_element(this->array.begin(), this->array.end()));
	return (max - min);
}
