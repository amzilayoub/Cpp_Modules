# include "Fixed.hpp"

Fixed::Fixed(void)
	: val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val)
{
	this->val = (val << Fixed::nb_fractional);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val)
{
	this->val = (val * (1 << Fixed::nb_fractional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;

	this->val = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int Fixed::toInt(void) const
{
	return (this->val >> Fixed::nb_fractional);
}

float Fixed::toFloat(void) const
{
	return (this->val / (float)(1 << Fixed::nb_fractional));
}

std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return (out);
}
