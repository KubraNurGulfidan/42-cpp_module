/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:50:26 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/06 14:59:26 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Clappy");
	clap.attack("Target1");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "---------------------" << std::endl;

	ScavTrap scav("Scavy");
	scav.attack("Target2");
	scav.guardGate();

	return 0;
}
