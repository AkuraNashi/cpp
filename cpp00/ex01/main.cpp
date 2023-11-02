#include "Phonebook.hpp"

int main(void)
{
	Phonebook pb;
	bool bExit = true;
	std::string strInput;

	while (bExit)
	{
		pb.displayPrompt();
		std::getline(std::cin, strInput);
		if (!std::cin.good())
		{
			std::cout << "Error" << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue;
		}
		if (strInput == "ADD" || strInput == "add")
			pb.addContact();
		if (strInput == "SEARCH" || strInput == "search")
			pb.searchContact();
		if (strInput == "EXIT" || strInput == "exit")
			bExit = false;
	}
	return (0);
}