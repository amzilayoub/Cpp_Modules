# pragma once
# include <iostream>

class Fixed
{
	private:
		int fixedPoint;
		static int const nb_fractional = 8;

	public:
		Fixed();
		Fixed(Fixed &other);
		~Fixed();
		Fixed &operator=(Fixed &other);

	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
