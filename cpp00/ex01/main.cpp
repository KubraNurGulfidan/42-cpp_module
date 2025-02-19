/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:52:30 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/15 16:42:08 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
    std::string operation, name, lastname, nickname, phone_num;
    PhoneBook phoneBook;

    while (1)
    {        
        std::cout << "Write what you want to do following three operstion:" << std::endl;
        std::cout << "ADD    |    SEARCH    |    EXIT" << std::endl;
        getline(std::cin, operation);
		if(std::cin.eof())
			return 0;
        if(operation == "ADD")
		{
			if(!phoneBook.add())
				return 0;
		}
        else if(operation == "SEARCH")
            std::cout << "search" << std::endl;
        else if(operation == "EXIT")
            phoneBook.exit();
        else
            std::cout << "Input is discarded." << std::endl;
    }
}
