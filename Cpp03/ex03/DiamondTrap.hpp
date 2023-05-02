#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
class DiamondTrap: public FragTrap,public ScavTrap {
private:
	std::string name;
public:
	DiamondTrap(std::string name);
    DiamondTrap();
	~DiamondTrap();
	using ScavTrap::attack;
	void whoAmI();
};


#endif //DIAMONDTRAP_HPP
