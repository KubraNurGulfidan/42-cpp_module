/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:53 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/30 11:36:33 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 50);
    Bureaucrat charlie("Charlie", 138);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Wall-e");
    PresidentialPardonForm pardon("Arthur Dent");

	// === SHRUBBERY ===
	std::cout << "\n=== Shrubbery ===" << std::endl;
	
	charlie.executeForm(shrub);
	charlie.signForm(shrub);
	charlie.executeForm(shrub);
	bob.executeForm(shrub);

	// === ROBOTOMY ===
	std::cout << "\n=== Robotomy ===" << std::endl;

	bob.signForm(robo);
	bob.executeForm(robo);
	alice.executeForm(robo);

	// === PARDON ===
	std::cout << "\n=== Presidential Pardon ===" << std::endl;
	
	bob.signForm(pardon);
	alice.signForm(pardon);
	bob.executeForm(pardon);
	alice.executeForm(pardon);

    return 0;
}
