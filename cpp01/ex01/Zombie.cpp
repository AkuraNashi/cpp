#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
	this->name = name;
//	std::cout << "Constructor of " <<this->name << " called" <<std::endl;
}
Zombie::~Zombie(void)
{
//	std::cout << "Destructor of " << this->name << " called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}