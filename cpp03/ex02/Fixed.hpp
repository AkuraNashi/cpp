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
		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
		Fixed operator+(const Fixed &rhs) const;
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		static Fixed min(Fixed &rhs, Fixed &lhs);
		static const Fixed min(const Fixed &rhs, const Fixed &lhs);
		static Fixed max(Fixed &rhs, Fixed &lhs);
		static const Fixed max(const Fixed &rhs, const Fixed &lhs);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	fixedPoint;
		static const int fracBits;
};
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
