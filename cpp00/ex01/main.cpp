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
    std::string operation;
    // PhoneBook phoneBook;

    while (1)
    {        
        std::cout << "Write what you want to do following three operstion:" << std::endl;
        std::cout << "ADD, SEARCH, EXIT" << std::endl;
        getline(std::cin, operation);
        if(operation == "ADD")
            std::cout << "add" << std::endl;
        else if(operation == "SEARCH")
            std::cout << "search" << std::endl;
        else if(operation == "EXIT")
            std::cout << "exit" << std::endl;
        else
            std::cout << "Input is discarded." << std::endl;
    }
}
