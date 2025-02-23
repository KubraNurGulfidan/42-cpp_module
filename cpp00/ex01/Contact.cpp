/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:51:56 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/22 20:10:35 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string input){this->firstName = input;}
void Contact::setLastName(std::string input){this->lastName = input;}
void Contact::setNickname(std::string input){this->nickname = input;}
void Contact::setPhoneNumber(std::string input){this->phoneNumber = input;}
void Contact::setDarkestSecret(std::string input){this->darkestSecret = input;}

std::string Contact::getFirstName(){return this->firstName;}
std::string Contact::getLastName(){return this->lastName;}
std::string Contact::getNickname(){return this->nickname;}
std::string Contact::getPhoneNumber(){return this->phoneNumber;}
std::string Contact::getDarkestSecret(){return this->darkestSecret;}
