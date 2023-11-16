#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed (5.05f) * Fixed(2));

	std::cout << std::endl;
	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of ++a : " << ++a << std::endl;
	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of a++ : " << a++ << std::endl;
	std::cout << "Value of a : " << a << std::endl;
	std::cout << std::endl;
	std::cout << "Value of b : " << b << std::endl;
	std::cout << std::endl;
	std::cout << "Max between a and b : " << Fixed::max(a, b) << std::endl;
	return 0;
}