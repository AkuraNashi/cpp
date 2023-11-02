#include "Phonebook.hpp"

Phonebook::Phonebook()
{
//	std::cout << "Constructor Phonebook Called" << std::endl;
	return;
}

Phonebook::~Phonebook()
{
//	std::cout << "Destructor Phonebook Called" << std::endl;
	return;
}

void	Phonebook::displayPrompt()
{
	std::cout << "||==============||==============||" << std::endl;
	std::cout << "||          PhoneBook           ||" << std::endl;
	std::cout << "||              ||              ||" << std::endl;
	std::cout << "|| ADD : add new||contact       ||" << std::endl;
	std::cout << "|| SEARCH : search for contact  ||" << std::endl;
	std::cout << "|| EXIT : quit program          ||" << std::endl;
	std::cout << "||==============||==============||" << std::endl;
	std::cout << "Your command : ";
}

void	Phonebook::addContact()
{
	this->contacts[index % MAX].setContact();
	this->index++;
}

void	Phonebook::searchContact()
{
	int i = 0;

	std::cout << " | ";
	std::cout << std::setw(10) << "Index";
	std::cout << " | ";
	std::cout << std::setw(10) << "First Name";
	std::cout << " | ";
	std::cout << std::setw(10) << "Last Name";
	std::cout << " | ";
	std::cout <<  std::setw(10) << "Nickname";
	std::cout << " | ";
	std::cout << std::endl;
	while (i < MAX &&  !(this->contacts[i].getfieldsInput(0).empty()))
	{
		std::cout << " | ";
		std::cout << std::setw(10) << i + 1;
		std::cout << " | ";
		for (int j = 0; j < 3; j++)
		{
			std::cout << std::setw(10) << this->contacts[i].getfieldsInput(i);
			std::cout << " | ";
		}
		std::cout << std::endl;
		++i;
	}
}