/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:52:03 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/22 20:11:46 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contact[8];
    int contactCount;
public:
	PhoneBook() : contactCount(0){};
    int add();
    int search(); 
    void exit();
};
