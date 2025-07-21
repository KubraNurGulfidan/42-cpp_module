/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 06:10:41 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/20 18:22:49 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try {
	Array<int> a;
	std::cout << "Array created with default constructor.\n";
	std::cout << "Size: " << a.size() << std::endl;

		std::cout << "Trying to access a[0]..." << std::endl;
		std::cout << a[0] << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Caught exception as expected: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------" << std::endl;

	try {
		Array<int> a(5);
		for (unsigned int i = 0; i < a.size(); ++i)
			a[i] = i * 2;

		Array<int> b = a;
		b[0] = 100;

		Array<int> c;
		c = a;
		c[1] = 200;

		std::cout << "Original array: ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Copied array b: ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "Assigned array c: ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "Trying to access a[10]...: " << std::endl;
		std::cout << a[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------------" << std::endl;

	try {
		Array<std::string> a(5);
		a[0] = "merhaba_0";
		a[1] = "merhaba_1";
		a[2] = "merhaba_2";
		a[3] = "merhaba_3";
		a[4] = "merhaba_4";
		
		const Array<std::string> d = a;
		std::cout << "Const array: ";
		// d[2] = 300;
		for (unsigned int i = 0; i < d.size(); ++i)
			std::cout << d[i] << " ";
		std::cout << std::endl;
		
		std::cout << "Trying to access d[10]..." << std::endl;
		std::cout << d[10] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}
