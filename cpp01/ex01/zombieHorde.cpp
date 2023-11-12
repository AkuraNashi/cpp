#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string zombieName = name + std::to_string(i + 1);
		zombies[i] = Zombie(zombieName); // Store the Zombie in the array
	}
	return zombies;
}