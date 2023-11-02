#include "Zombie.hpp"

int main(void)
{
	std::cout << "=============================" << std::endl;
	std::cout << "  Allocation in the stack" << std::endl;
	std::cout << "(Destruction when out of scope)" << std::endl;
	std::cout << "=============================" << std::endl;
	Zombie jordan("Jordan");
	jordan.announce();
	randomChump("Gaetan");
	std::cout << "===========================" << std::endl;
	std::cout << "  Allocation in the heap" << std::endl;
	std::cout << "  (Need delete called)" << std::endl;
	std::cout << "===========================" << std::endl;
	Zombie *mike;
	mike = newZombie("Mike");
	mike->announce();
	delete mike;
}