/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:48 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/16 13:34:46 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	int i = std::rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
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
		std::cout << "A class (pointer)" << std::endl;
	else if (B_p != NULL)
		std::cout << "B class (pointer)" << std::endl;
	else if (C_p != NULL)
		std::cout << "C class (pointer)" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& Aref = dynamic_cast<A&>(p);
		(void)Aref;
		std::cout << "A class (reference)" << std::endl;
		return ;
	}
	catch (std::exception& e){}
	
	try
	{
		B& Bref = dynamic_cast<B&>(p);
		(void)Bref;
		std::cout << "B class (reference)" << std::endl;
		return ;
	}
	catch (std::exception& e){}
	
	try
	{
		C& Cref = dynamic_cast<C&>(p);
		(void)Cref;
		std::cout << "C class (reference)" << std::endl;
	}
	catch (std::exception& e){}
}