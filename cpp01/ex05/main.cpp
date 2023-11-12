#include "harl.hpp"

int main(void)
{
	Harl vieux;

	vieux.complain("debug");
	vieux.complain("info");
	vieux.complain("warning");
	vieux.complain("error");
	return 0;
}