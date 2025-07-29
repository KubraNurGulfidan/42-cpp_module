/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:56:13 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/22 12:47:28 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::cout << (v.empty() ? "Vector is empty!" : "Vector is not empty.") << std::endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	std::cout << (v.empty() ? "Vector is empty" : "Vector is not empty.") << std::endl;	

	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	v.pop_back();
	
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	
    try
	{
        std::cout << "Found in vector: " << *easyfind(v, 3) << std::endl;
        std::cout << "Found in vector: " << *easyfind(v, 1) << std::endl;

        easyfind(v, 42);
    }
	catch (const std::exception& e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
