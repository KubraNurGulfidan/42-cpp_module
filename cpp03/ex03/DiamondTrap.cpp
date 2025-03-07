#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	this->name = "Default";
	this->ClapTrap::name = "DiamondTrap_clap_name";
	this->FragTrap::hitPoint = 100;
	this->ScavTrap::energyPoint = 50;
	this->FragTrap::attackDamage = 30;
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->FragTrap::hitPoint = 100;
	this->ScavTrap::energyPoint = 50;
	this->FragTrap::attackDamage = 30;
	std::cout << "DiamondTrap Constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	*this = diamondTrap;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}
DiamondTrap &DiamondTrap::operator = (const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		this->attackDamage = diamondTrap.attackDamage;
		this->hitPoint = diamondTrap.hitPoint;
		this->energyPoint = diamondTrap.energyPoint;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "Hi my name is: " << this->name << ", and my ClapTrap name is: " << ClapTrap::name << std::endl;
}