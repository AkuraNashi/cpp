#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(void)
{
//	std::cout << "Destructor of " << this->name << " called" << std::endl;
}

std::string Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}
