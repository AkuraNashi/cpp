#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default name"), hp(10), pa(10), ad(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string strName) : hp(10), pa(10), ad(0)
{
	name = strName;
	std::cout << "Claptrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &newClap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = newClap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Assignement operator Called for " << this->name << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hp = rhs.getHp();
		this->pa = rhs.getPa();
		this->ad = rhs.getAd();
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (!getHp())
		std::cout << getName() << "is dead" << std::endl;
	else if (!getPa())
		std::cout << "Not enough energy" << std::endl;
	else
	{
		std::cout << "ClapTrap" << getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage! "  << std::endl;
		this->setPa(this->getPa() - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHp() < 1)
		std::cout << name << " is already dead..." << std::endl;
	if (getPa())
	{
		this->setHp(this->getHp() - 1);
		std::cout << this->getName() << "took " << amount << " damage" <<  std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getHp() < 1)
		std::cout << getName() << " is already dead..." << std::endl;
	if (getPa())
	{
		this->setPa(getPa() - 1);
		std::cout << this->getName() << "healed for " << amount << std::endl;
	}
	else
		std::cout << "Not enough energy" << std::endl;
}

std::string ClapTrap::getName() const
{
	return name;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

unsigned int ClapTrap::getHp() const
{
	return hp;
}

void ClapTrap::setHp(unsigned int hp)
{
	this->hp = hp;
}

unsigned int ClapTrap::getPa() const
{
	return pa;
}

void ClapTrap::setPa(unsigned int pa)
{
	this->pa = pa;
}

unsigned int ClapTrap::getAd() const
{
	return ad;
}

void ClapTrap::setAd(unsigned int ad)
{
	this->ad = ad;
}