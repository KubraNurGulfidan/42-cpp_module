/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:29 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/02 12:34:41 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie;
	Zombie *zombiePtr = zombie.newZombie("Kubra");

	zombie.randomChump("kkk");
	zombiePtr->announce();
	delete(zombiePtr);
}