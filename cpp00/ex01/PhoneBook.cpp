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

bool isNumber(std::string str)
{
	for(unsigned long i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
			return 0;
	}
	return 1;
}

std::string check_contact(std::string msg, int type)
{
	while (1)
	{
		std::string input;
		std::cout << msg << "= ";
		getline(std::cin, input);
		if (std::cin.eof())
			return NULL;
		if (type == 4 && isNumber(input) == 0)
		{
			std::cout << msg << "must be digit." << std::endl;
			continue;
		}
		if (input.empty())
			std::cout << msg << "can not be empty." << std::endl;
		else
			return input;		
	}
	return NULL;
}

int PhoneBook::add()
{
	static int index = 0;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	firstName = check_contact("First Name ", 1);
	this->contact[index % 8].setFirstName(firstName);
	lastName = check_contact("Last Name ", 2);
	this->contact[index % 8].setLastName(lastName);
	nickname = check_contact("Nickname ", 3);
	this->contact[index % 8].setNickname(nickname);
	phoneNumber = check_contact("Phone Number ", 4);
	this->contact[index % 8].setPhoneNumber(phoneNumber);
	index++;
	if (this->contactCount < 8)
        this->contactCount++;
	return 1;
}

int PhoneBook::search()
{
	std::string takeIndex;
	int searchIndex = 0;
	int flag = 0;
	if (this->contactCount == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return 1;
	}
	std::cout << "------------------PHONEBOOK------------------" << std::endl;
	std::cout << "|     index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 
					<< "|" << std::setw(10) << (contact[i].getFirstName().size() > 10 ? contact[i].getFirstName().substr(0, 9) + "." : contact[i].getFirstName())
					<< "|" << std::setw(10) << (contact[i].getLastName().size() > 10 ? contact[i].getLastName().substr(0,9) + "." : contact[i].getLastName())
					<< "|" << std::setw(10) << (contact[i].getNickname().size() > 10 ? contact[i].getNickname().substr(0, 9) + "." : contact[i].getNickname())
					<< "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	while(1)
	{	
		std::cout << "Search index: ";
		getline(std::cin, takeIndex);
		if(std::cin.eof())
			return 0;
		for (size_t j = 0; j <= takeIndex.size(); j++)
		{
			if(isalpha(takeIndex[j]))
			{
				flag = -1;
				break;
			}
			if (j == takeIndex.size())
				searchIndex = atoi(takeIndex.c_str());
		}
		if (flag == -1)
		{
			std::cout << "Index must be digit." << std::endl;
			flag = 0;
			continue;
		}
		if (searchIndex <= 0 || searchIndex > 8)
		{
			std::cout << "Index count must be between one and eight." << std::endl;
			continue;
		}
		if (searchIndex > this->contactCount)
		{
			std::cout << "Index is empty." << std::endl;
            continue;
		}
		else
		{
			std::cout << "First Name: " << contact[searchIndex - 1].getFirstName() << std::endl;
			std::cout << "Last Name: " << contact[searchIndex - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << contact[searchIndex - 1].getNickname() << std::endl;
			std::cout << "Phone Number: " << contact[searchIndex - 1].getPhoneNumber() << std::endl;
			return 1;
		}
	}
	return 1;
}

void PhoneBook::exit()
{
	std::cout << "Program is terminated." << std::endl;
	std:: exit(0);
}