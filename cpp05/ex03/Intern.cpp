/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:37:50 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/08 14:14:03 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() : name("Nameless") {}

Intern::~Intern() {}

Intern::Intern(const std::string& name) : name(name) {}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	int form = -1;
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 3; i++)
	{
		if(forms[i] == formName)
		{
			form = i;
			break;
		}
	}
	switch (form)
	{
		case 0:
		{
			std::cout << "Intern creates " << formName << std::endl;
			return new ShrubberyCreationForm(target);
		}
		case 1:
		{
			std::cout << "Intern creates " << formName << std::endl;
			return new RobotomyRequestForm(target);	
		}
		case 2:
		{
			std::cout << "Intern creates " << formName << std::endl;
			return new PresidentialPardonForm(target);
		}
		default:
		{
			std::cout << "Intern couldn't find the form: " << formName << std::endl;
			return NULL;
		}
	}
}

