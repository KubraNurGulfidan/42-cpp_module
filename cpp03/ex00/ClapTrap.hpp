#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
