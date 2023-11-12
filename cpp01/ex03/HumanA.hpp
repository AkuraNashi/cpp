#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	// Modified constructor to take a Weapon reference
	HumanA(std::string name, Weapon& rifle);
	~HumanA();
	void attack();
	const Weapon& getWeapon() const; // Return a reference to the Weapon
	void setWeapon(Weapon& rifle); // Take a Weapon reference

private:
	std::string _name;
	Weapon &_rifle; // This must be initialized in the constructor
};

#endif