/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:48 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/15 19:26:27 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base::~Base() {}

Base* generate(void)
{
	std::srand(std::time(NULL));
	if (std::rand() % 3 == 0)
		return new A;
	else if (std::rand() % 3 == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	A* A_p = dynamic_cast<A*>(p);
	B* B_p = dynamic_cast<B*>(p);
	C* C_p = dynamic_cast<C*>(p);

	if (A_p != NULL)
		std::cout << "This is A class" << std::endl;
	else if (B_p != NULL)
		std::cout << "This is B class" << std::endl;
	else if (C_p != NULL)
		std::cout << "This is C class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& Aref = dynamic_cast<A&>(p);
		(void)Aref;
		std::cout << "This is A class" << std::endl;
		return ;
	}
	catch (std::exception& e)
	{}
	try
	{
		B& Bref = dynamic_cast<B&>(p);
		(void)Bref;
		std::cout << "This is B class" << std::endl;
		return ;
	}
	catch (std::exception& e)
	{}
	try
	{
		C& Cref = dynamic_cast<C&>(p);
		(void)Cref;
		std::cout << "This is C class" << std::endl;
	}
	catch (std::exception& e)
	{}
}