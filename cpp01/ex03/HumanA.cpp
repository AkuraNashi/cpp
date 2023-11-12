#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &rifle) : _name(name), _rifle(rifle) {}

HumanA::~HumanA(void)
{
//	std::cout << "Destructor of " << this->name << " called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_rifle.getType() << std::endl;
}

const Weapon& HumanA::getWeapon(void) const
{
	return _rifle;
}

void	HumanA::setWeapon(Weapon& rifle)
{
	_rifle = rifle;
}