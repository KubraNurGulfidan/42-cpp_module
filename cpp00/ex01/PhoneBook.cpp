/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:50:41 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/10 14:50:42 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::add()
{
	static int index = 0;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::cout << "First Name = ";
	getline(std::cin, firstName);
	if(std::cin.eof())
		return 0;
	this->contact[index].setFirstName(firstName);
	std::cout << "Last Name = ";
	getline(std::cin, lastName);
	if(std::cin.eof())
		return 0;
	this->contact[index].setFirstName(lastName);
	std::cout << "Nickname = ";
	getline(std::cin, nickname);
	if(std::cin.eof())
		return 0;
	this->contact[index].setFirstName(nickname);
	std::cout << "Phone Number = ";
	getline(std::cin, phoneNumber);
	if(std::cin.eof())
		return 0;
	this->contact[index].setFirstName(phoneNumber);
	return 1;
}

// int PhoneBook::search()
// {
	
// }

void PhoneBook::exit()
{
	std::cout << "Prpgram is terminated." << std::endl;
	std:: exit(0);
}