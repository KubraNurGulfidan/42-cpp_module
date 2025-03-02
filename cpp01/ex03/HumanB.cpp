/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:33:54 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 17:15:23 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << name << " created" << std::endl;
	setName(name);
	this->weapon = NULL;
}
HumanB::~HumanB()
{
	std::cout << getName() << " terminated" << std::endl;
}

void HumanB::setWeapon(Weapon& input){this->weapon = &input;}
void HumanB::setName(std::string input){this->name = input;}
std::string HumanB::getName(){return this->name;}

void  HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << getName() << " don't have weapon " << std::endl;
	else
		std::cout << getName() << " attacks with their " << this->weapon->getType() << std::endl;
}

