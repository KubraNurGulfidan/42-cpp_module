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

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << this->name << " created" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " terminated" << std::endl;
}

void  HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}