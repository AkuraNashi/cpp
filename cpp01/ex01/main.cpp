#include "Zombie.hpp"

int main(void)
{
	Zombie		*horde;
	std::string strInput;
	std::string	strName;
	int			iStrInput;

	std::cout << "Name of the Zombies : ";
	std::cin >> strName;
	std::cout << "Number of Zombies to generate : ";
	std::cin >> strInput;
	try {
		iStrInput = std::stoi(strInput);
		horde = zombieHorde(iStrInput, strName);
		for (int i = 0; i < iStrInput ; ++i)
			horde[i].announce();
	}
	catch (const std::invalid_argument& e) {
		std::cout << "Invalid input. Please enter a valid integer." << std::endl;
	}
	catch (const std::out_of_range& e) {
		std::cout << "Input out of range for integer. Please enter a smaller number." << std::endl;
	}
}