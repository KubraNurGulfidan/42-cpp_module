/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:50:30 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/06 16:46:29 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Default";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	*this = scavTrap;
	std::cout << "ScavTrap " << scavTrap.name << " has been copied!" << std::endl;	
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap " << scavTrap.name << " has been assigned!" << std::endl;
	if (this != &scavTrap)
	{
		this->name = scavTrap.name;
		this->hitPoint = scavTrap.hitPoint;
		this->energyPoint = scavTrap.energyPoint;
		this->attackDamage = scavTrap.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
					<< this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
		std::cout << "ScavTrap " << this->name << " could not damage " << target
					<< "because of it has no attack damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
