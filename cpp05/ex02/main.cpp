/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:53 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/24 20:21:54 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat alice("Alice", 1);      // En yüksek yetki
    Bureaucrat bob("Bob", 50);         // Orta seviye
    Bureaucrat charlie("Charlie", 130); // Düşük seviye

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Ford Prefect");

    // === SHRUBBERY ===
    std::cout << "\n=== Shrubbery ===" << std::endl;
    try {
        charlie.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Execution failed: " << e.what() << std::endl;
    }

    try {
        charlie.signForm(shrub);
        charlie.executeForm(shrub);
    } catch (const std::exception& e) {
        std::cout << "Execution failed: " << e.what() << std::endl;
    }

    // === ROBOTOMY ===
    std::cout << "\n=== Robotomy ===" << std::endl;
    try {
        bob.signForm(robo);
        bob.executeForm(robo);
    } catch (const std::exception& e) {
        std::cout << "Execution failed: " << e.what() << std::endl;
    }

    // === PARDON ===
    std::cout << "\n=== Presidential Pardon ===" << std::endl;
    try {
        bob.signForm(pardon); // Yetersiz -> exception
    } catch (const std::exception& e) {
        std::cout << "Signing failed: " << e.what() << std::endl;
    }

    try {
        alice.signForm(pardon);
        bob.executeForm(pardon); // Yetersiz
    } catch (const std::exception& e) {
        std::cout << "Execution failed: " << e.what() << std::endl;
    }

    try {
        alice.executeForm(pardon); // Başarılı
    } catch (const std::exception& e) {
        std::cout << "Execution failed: " << e.what() << std::endl;
    }

    return 0;
}
