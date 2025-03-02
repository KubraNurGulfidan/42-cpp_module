/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:46 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 14:10:47 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int zCount = 3;
	Zombie *zombiePtr = zombieHorde(zCount, "kubra");

	for(int i = 0; i < zCount; i++)
	{
		zombiePtr[i].announce();
	}
	delete[]zombiePtr;
}
