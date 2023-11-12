#include "sar.hpp"

int main(int ac, char **av)
{
	(void) av;
	if (ac == 4)
		SearchAndReplace(av[1], av[2], av[3]);
	else
		std::cout << "Wrong number of args !" << std::endl;
	return 0;
}