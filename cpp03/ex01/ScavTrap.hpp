#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &newScav);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &rhs);
		void attack(const std::string &target);
		void guardGate(void);

		bool getGuardGate(void);
		void setGuardGate(bool b);
	private:
		bool guardGateMode;
};
std::ostream & operator<<(std::ostream &stream, const ScavTrap &rhs);
#endif
