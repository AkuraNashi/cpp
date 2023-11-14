#include "Fixed.hpp"

const int	Fixed::fracBits = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed) : fixedPoint(fixed << fracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &newFix) : fixedPoint(newFix.fixedPoint)
{
	std::cout << "Copy constructor called [" << newFix.toFloat() << "]" << std::endl;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(number * (1 << fracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called [" << this->toFloat() << "]" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignement operator Called " << this->toFloat() << " to " << rhs.toFloat() << std::endl;
	if (this != &rhs)
		this->fixedPoint = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return o;
}

int Fixed::getRawBits() const
{
	return fixedPoint;
}

void Fixed::setRawBits(const int raw)
{
	fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)fixedPoint) / (1 << fracBits);
}

int Fixed::toInt(void) const
{
	return fixedPoint >> fracBits;
}


