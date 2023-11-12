#include "harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "Debugging my code is like facing assassins as an adc";
	std::cout << ": Broken, unpredictable, and always ends with a surprise!" << std::endl;
}

void Harl::info()
{
	std::cout << YELLOW << "Info Update: Our latest patch aims to comfort the ADCs.";
	std::cout << " We've heard their cries from bot lane";
	std::cout << " and are working to balance the tears with some code tweaks!" << NONE << std::endl;
}

void Harl::warning()
{
	std::cout << BLUE << "Warning: Remember, Summoners!";
	std::cout << " Just like in our code, toxicity and intentional feeding are bugs we can do without.";
	std::cout << " Play fair, play smart, and keep the Rift respectful!" << NONE << std::endl;
}

void Harl::error()
{
	std::cout << BOLD_RED << "Error: Oops! Attempting to buff an already broken champion detected.";
	std::cout << " This is not a drill. Repeat, this is not a drill. ";
	std::cout << "Immediate reversal required to maintain balance in the Rift!";
	std::cout << " ...Nevermind, that will make us more money anyway." << NONE << std::endl;
}

void Harl::complain(std::string level)
{
	std::string level_names[4] = {"debug","info","warning","error"};
	void (Harl::*level_funcs[4])( void ) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	for (int i = 0; i < 4; i++)
		if (level_names[i] == level)
		{
			(this->*level_funcs[i])();
			return ;
		}
}