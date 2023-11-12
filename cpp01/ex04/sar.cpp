#include "sar.hpp"

bool AskUser()
{
	std::string userInput;

	std::cout << "Show what i read ? (y/N)" << NONE << std::endl;
	std::getline(std::cin, userInput);
	if (userInput == "y" || userInput == "Y")
		return true;
	else if(userInput.empty() || userInput == "N" || userInput == "n")
		return false;
	else
	{
		std::cout << RED << "Invalid input. Please enter 'y', 'n' or press ENTER." << NONE << std::endl;
		return AskUser();
	}
}

std::string Replace(std::string line, std::string target, std::string substitution)
{
	size_t startPos = 0;
	size_t foundPos;
	std::string	result;
	while ((foundPos = line.find(target, startPos)) != std::string::npos)
	{
		result.append(line, startPos, foundPos - startPos);
		result.append(substitution);
		startPos = foundPos + target.length();
	}
	result.append(line, startPos, line.length() - startPos);
	return result;
}

bool readFile(const std::string& file, std::string& fileContents)
{
	std::ifstream fileStream(file);

	if (!fileStream.is_open())
		return false;
	std::stringstream buffer;
	buffer << fileStream.rdbuf();
	fileContents = buffer.str();
	return true;
}

std::string Search(std::string file)
{
	std::string line;

	std::cout << GREEN << "Reading..." << std::endl;
	if (!readFile(file, line))
		return "";
	std::cout << "Done reading :)" << NONE  << std::endl;
	if (AskUser())
		std::cout << line << std::endl;
	std::cout << MAGENTA << "Replacing..." << NONE << std::endl;
	return line;
}

void create_file(std::string fileName, std::string text)
{
	std::ofstream file;

	file.open(fileName + ".replace");
	if (file.is_open())
	{
		file << text;
		file.close();
		std::cout << GREEN << "Created .replace file" << NONE << std::endl;
	}
	else
		std::cout << RED << "Error while creating .replace file" << NONE << std::endl;
}

void SearchAndReplace(std::string file, std::string target, std::string substitution)
{
	std::string line;
	std::string replacement;

	line = Search(file);
	if (line.empty())
		return ;
	replacement = Replace(line, target, substitution);
	if (line != replacement)
		create_file(file.substr(0, file.find('.')), replacement);
	else
		std::cout << RED << "No replacement was done, I'm not creating useless file" << NONE << std::endl;
}