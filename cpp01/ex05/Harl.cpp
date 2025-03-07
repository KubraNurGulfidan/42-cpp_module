/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:11:27 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/25 14:11:28 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is started." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is finished." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
				<< std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
				<< std::endl;
}
void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl
				<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
				<< std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR" << std::endl
				<< "This is unacceptable! I want to speak to the manager now." 
				<< std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*func[i])();
			return;
		}
	}
}

