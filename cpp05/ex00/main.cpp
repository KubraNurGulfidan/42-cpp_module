/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:08:35 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/29 17:08:36 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Alice", 1);
	Bureaucrat b("Bella", 150);
	Bureaucrat c("Chris", 75);

	std::cout << a;
	std::cout << b;
	std::cout << c;

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		a.incrementGrade();
		std::cout << "After incrementing grade: " << a.getName() << " has grade " << a.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		b.incrementGrade();
		std::cout << "After incrementing grade: " << b.getName() << " has grade " << b.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		c.incrementGrade();
		std::cout << "After incrementing grade: " << c.getName() << " has grade " << c.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
		a.decrementGrade();
		std::cout << "After decrementing grade: " << a.getName() << " has grade " << a.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		b.decrementGrade();
		std::cout << "After decrementing grade: " << b.getName() << " has grade " << b.getGrade() << std::endl;
		b.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		c.decrementGrade();
		std::cout << "After decrementing grade: " << c.getName() << " has grade " << c.getGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << std::endl << "---------------------------------------" << std::endl << std::endl;

	try
	{
        Bureaucrat d("David", 151);
    }
	catch (std::exception& e)
	{
        std::cerr << "Exception caught while creating " << e.what() << std::endl;
    }

	try
	{
        Bureaucrat d("David", 0);
    }
	catch (std::exception& e)
	{
        std::cerr << "Exception caught while creating " << e.what() << std::endl;
    }

	return 0;
}
