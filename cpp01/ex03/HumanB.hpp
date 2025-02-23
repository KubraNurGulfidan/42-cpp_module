/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:33:51 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/23 12:33:52 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	~HumanB();
	void  attack();
	void setWeapon(Weapon *input);
	void setName(std::string input){name = input;}
	std::string getName(){return name;}
};

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}
