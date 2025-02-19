/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:51:59 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/15 16:36:36 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
public:
	void setFirstName(std::string input){firstName = input;}
	void setLastName(std::string input){lastName = input;}
	void setNickname(std::string input){nickname = input;}
	void setPhoneNumber(std::string input){phoneNumber = input;}

	std::string getFirstName(){return firstName;}
	std::string getLastName(){return lastName;}
	std::string getNickname(){return nickname;}
	std::string getPhoneNumber(){return phoneNumber;}
};

#endif