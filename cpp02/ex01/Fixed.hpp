#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int fixed);
		Fixed(const Fixed &newFix);
		Fixed(const float number);
		~Fixed(void);
		Fixed &operator=(const Fixed &rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	fixedPoint;
		static const int fracBits;
};
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
