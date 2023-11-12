#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_rifle = NULL;
}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	if (this->_rifle != NULL)
		std::cout << this->_name << " attacks with their " << this->_rifle->getType() << std::endl;
	else
		std::cout << this->_name << " don't possess a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& rifle)
{
	_rifle = &rifle;
}