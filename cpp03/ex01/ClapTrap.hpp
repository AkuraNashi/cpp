#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int pa, int ad);
		ClapTrap(const ClapTrap &newClap);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &rhs);
		unsigned int getHp(void) const;
		void setHp(unsigned int hp);
		unsigned int getPa(void) const;
		void setPa(unsigned int pa);
		unsigned int getAd(void) const;
		void setAd(unsigned int ad);
		std::string getName(void) const;
		void setName(std::string name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string name;
		unsigned int hp;
		unsigned int pa;
		unsigned int ad;
};
std::ostream & operator<<(std::ostream &stream, const ClapTrap &rhs);
#endif
