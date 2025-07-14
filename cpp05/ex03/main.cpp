/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:53 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/08 14:14:11 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat boss("Boss", 1);

    AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "garden");
    AForm* robo = someRandomIntern.makeForm("robotomy request", "Baymax");
    AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Ford Prefect");

    AForm* wrong = someRandomIntern.makeForm("wrong form name", "Nobody");

    std::cout << "\n--- Signing and executing forms ---\n" << std::endl;

    if (shrub) {
        boss.signForm(*shrub);
        boss.executeForm(*shrub);
        delete shrub;
    }
    if (robo) {
        boss.signForm(*robo);
        boss.executeForm(*robo);
        delete robo;
    }
    if (pardon) {
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon;
    }
    if (wrong)
        delete wrong;
	
    return 0;
}
