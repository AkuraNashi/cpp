#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob = ClapTrap("Bob");
	ClapTrap michel = ClapTrap("Michel");

	bob.setAd(10);
	bob.attack("Michel");
	return 0;
}