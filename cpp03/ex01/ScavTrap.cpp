#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap("Default name", 100, 50, 20), guardGateMode(false)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 50, 20), guardGateMode(false)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &newScav)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = newScav;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "Assignement operator called for" << this->getName() << std::endl;
	if (this != &rhs)
		this->ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (!getHp())
		std::cout << getName() << "is dead" << std::endl;
	else if (!getPa())
		std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << "ScavTrap" << getName() << " attacks " << target << ", causing " << getAd()
		<< " points of damage! "  << std::endl;
		this->setPa(this->getPa() - 1);
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " has entered in Gate Keeper mode" << std::endl;
	setGuardGate(true);
}

bool ScavTrap::getGuardGate()
{
	return guardGateMode;
}

void ScavTrap::setGuardGate(bool b)
{
	this->guardGateMode = b;
}

std::ostream &	operator<<(std::ostream &stream, const ScavTrap &rhs)
{
	stream << "ClapTrap " << rhs.getName() << " Infos :\n";
	stream << "HP : " << rhs.getHp() << "\n";
	stream << "Energy points : " << rhs.getPa() << "\n";
	stream << "Attack damage : " << rhs.getAd() << "\n" << std::flush;

	return stream;
}