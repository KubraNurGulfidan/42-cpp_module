#ifndef DIAMONDtRAP_HPP
# define DIAMONDtRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap &operator = (const DiamondTrap &diamondTrap);

	void attack(const std::string &target);
	void whoAmI();
};

#endif