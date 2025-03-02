/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:54 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 14:10:56 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string name;
	int zombieCount;
public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string setName);
	std::string getName(){return name;}
};
