#include "Contact.hpp"

//Initialise pour toute la classe une fois
std::string Contact::labels[5] = {
		"First name",
		"Last name",
		"Nickname",
		"Phone number",
		"Darkest secret"
};
//Default constructor
Contact::Contact(void)
{
	fieldsInput[0] = "";
	fieldsInput[1] = "";
	fieldsInput[2] = "";
	fieldsInput[3] = "";
	fieldsInput[4] = "";
//	std::cout << "Constructor Contact called" << std::endl;
	return;
}
//Destructor
Contact::~Contact(void)
{
//	std::cout << "Destructor Contact called" << std::endl;
	return;
}

//Getter
std::string Contact::getfieldsInput(int i)
{
	return this->fieldsInput[i];
}


void	Contact::setContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter contact's : " << labels[i] << std::endl;
		if (!std::getline(std::cin, this->fieldsInput[i]))
		{
			std::cin.clear();
			clearerr(stdin);
			break;
		}
		while (this->fieldsInput[i].empty())
		{
			std::cout << "Please enter contact's : " << labels[i] << std::endl;
			std::getline(std::cin, this->fieldsInput[i]);
		}
	}
}
