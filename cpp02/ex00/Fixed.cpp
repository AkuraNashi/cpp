#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed) : fixedPoint(fixed) {}

Fixed::Fixed(const Fixed &newFix) : fixedPoint(newFix.fixedPoint)
{
	std::cout << "Copy constructor called [" << newFix.fixedPoint << "]" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called [" << fixedPoint << "]" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignement operator Called " << this->fixedPoint << "to" << rhs.fixedPoint << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.fixedPoint;
	return *this;
}

int Fixed::getRawBits() const
{
	return fixedPoint;
}

void Fixed::setRawBits(const int raw)
{
	fixedPoint = raw;
}


