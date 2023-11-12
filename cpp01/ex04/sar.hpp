#ifndef SAR_HPP
# define SAR_HPP

#include <iostream>
#include <fstream>
#include <sstream>

#define BLACK          "\033[0;30m"
#define RED            "\033[0;31m"
#define GREEN          "\033[0;32m"
#define YELLOW         "\033[0;33m"
#define BLUE           "\033[0;34m"
#define MAGENTA        "\033[0;35m"
#define CYAN           "\033[0;36m"
#define WHITE          "\033[0;37m"
#define BOLD_BLACK     "\033[1m\033[30m"
#define BOLD_RED       "\033[1m\033[31m"
#define BOLD_GREEN     "\033[1m\033[32m"
#define BOLD_YELLOW    "\033[1m\033[33m"
#define BOLD_BLUE      "\033[1m\033[34m"
#define BOLD_MAGENTA   "\033[1m\033[35m"
#define BOLD_CYAN      "\033[1m\033[36m"
#define BOLD_WHITE     "\033[1m\033[37m"
#define NONE           "\033[0m"

void SearchAndReplace(std::string file, std::string target, std::string substitution);


#endif