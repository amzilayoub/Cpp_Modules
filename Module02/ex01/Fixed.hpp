# pragma once
# include <iostream>
# include <cmath>
class Fixed
{
	private:
		int val;
		static int const nb_fractional = 8;

	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(Fixed const &other);
		~Fixed();
		Fixed &operator=(Fixed const &other);

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &other);
