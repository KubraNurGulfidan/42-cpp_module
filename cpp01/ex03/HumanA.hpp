/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:33:59 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/23 18:55:23 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanA();
	~HumanA();
	void  attack();
	void setWeapon(Weapon *input);
	void setName(std::string input){name = input;}
	std::string getName(){return name;}
};

