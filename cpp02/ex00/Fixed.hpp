#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int fixed);
		Fixed(const Fixed &newFix);
		~Fixed(void);

		Fixed &operator=(const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	fixedPoint;
		static const int fracBits;
};
#endif
