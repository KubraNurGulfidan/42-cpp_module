/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:50:21 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/06 12:44:44 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "ClapTrap " << clapTrap.name << " has been copied!" << std::endl;	
}

ClapTrap &ClapTrap::operator = (const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap " << clapTrap.name << " has been assigned!" << std::endl;
	if (this != &clapTrap)
	{
		name = clapTrap.name;
		hitPoint = clapTrap.hitPoint;
		energyPoint = clapTrap.energyPoint;
		attackDamage = clapTrap.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
					<< this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " could not damage " << target
					<< "because of it has no attack damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoint -= amount;
	if (hitPoint < 0)
		hitPoint = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
        this->hitPoint += amount;
        this->energyPoint--;
        std::cout << "ClapTrap " << name << " repairs itself, restoring " 
                  << amount << " hit points!" << std::endl;
    }
	else
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair itself!" << std::endl;
}