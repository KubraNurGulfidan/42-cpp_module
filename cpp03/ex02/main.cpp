/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:50:26 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/06 16:13:23 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << "---------------------" << std::endl;

    FragTrap frag("Fraggy");
    frag.attack("Target3");
    frag.highFivesGuys();

    return 0;
}
