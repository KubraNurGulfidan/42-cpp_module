/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:34:02 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/23 18:55:18 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	std::cout << name << " created" << std::endl;
	setName(name);
	setWeapon(weapon);
}
HumanA::~HumanA()
{
	std::cout << getName() << " terminated" << std::endl;
}

void HumanA::setWeapon(Weapon& input){this->weapon = &input;}
void HumanA::setName(std::string input){this->name = input;}
std::string	HumanA::getName(){return this->name;}

void  HumanA::attack()
{
	std::cout << getName() << " attacks with their " << this->weapon->getType() << std::endl;
}