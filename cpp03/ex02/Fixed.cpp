#include "Fixed.hpp"

const int	Fixed::fracBits = 8;

//========================= Constructor =========================
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

//========================= Destructor ==========================
Fixed::~Fixed()
{
	std::cout << "Destructor called [" << this->toFloat() << "]" << std::endl;
}

//========================== Operators ==========================
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

bool	Fixed::operator>(const Fixed &rhs) const
{
	return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++()
{
	this->fixedPoint += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(this->fixedPoint);
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->fixedPoint -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(this->fixedPoint);
	return tmp;
}

//====================== Setters // Getter ======================
int Fixed::getRawBits() const
{
	return fixedPoint;
}

void Fixed::setRawBits(const int raw)
{
	fixedPoint = raw;
}

//Convert function
float Fixed::toFloat(void) const
{
	return ((float)fixedPoint) / (1 << fracBits);
}

int Fixed::toInt(void) const
{
	return fixedPoint >> fracBits;
}

//Min and Max function
Fixed Fixed::min(Fixed &rhs, Fixed &lhs)
{
	if (rhs < lhs)
		return rhs.toFloat();
	return lhs.toFloat();
}

const Fixed Fixed::min(const Fixed &rhs, const Fixed &lhs)
{
	if (rhs < lhs)
		return rhs.toFloat();
	return lhs.toFloat();
}

Fixed Fixed::max(Fixed &rhs, Fixed &lhs)
{
	if (rhs > lhs)
		return rhs.toFloat();
	return lhs.toFloat();
}

const Fixed Fixed::max(const Fixed &rhs, const Fixed &lhs)
{
	if (rhs > lhs)
		return rhs.toFloat();
	return lhs.toFloat();
}
