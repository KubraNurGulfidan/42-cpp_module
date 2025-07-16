/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:53 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/16 13:32:30 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	std::srand(std::time(NULL));
	Base* ptr = generate();
	identify(ptr);
	identify(*ptr);
	std::cout << std::endl;
	delete ptr;

	Base* ptr1 = generate();
	identify(ptr1);
	identify(*ptr1);
	std::cout << std::endl;
	delete ptr1;
}
