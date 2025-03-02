/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:57 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 14:10:58 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieH = new Zombie[N];
	zombieH->setName(name);
	for (int i = 0; i < N; i++)
	{
		zombieH[i].setName(name);
	}
	return zombieH;
}
