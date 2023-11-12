#include <iostream>

int main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;
//	std::string *example1; Il peut valoir NULL
//	std::string &example2; Il DOIT etre initialiser

	std::cout << "Memory Address of String Variable:	" << &myString << std::endl;
	std::cout << "Memory Address Held by stringPTR:	" << stringPTR << std::endl;
	std::cout << "Memory Address Held by stringREF:	" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of String Variable: 		" << myString << std::endl;
	std::cout << "Value Pointed to by stringPTR: 		" << *stringPTR << std::endl;
	std::cout << "Value Pointed to by stringREF: 		" << stringREF << std::endl;

	return 0;
}
