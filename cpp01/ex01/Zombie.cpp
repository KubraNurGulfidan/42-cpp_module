/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:52 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 14:10:53 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	static int i = 1;
	this->zombieCount = i;
	std::cout << "Create Zombie " << i << std::endl;
	i++;
}

Zombie::~Zombie()
{
	std::cout << "Delete " << this->zombieCount << ". Zombie: " << this->name << std::endl;
}

void Zombie::setName(std::string setName)
{
	name = setName;
}

void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}