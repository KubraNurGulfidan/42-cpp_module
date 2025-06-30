/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:08 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/30 12:02:04 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("default") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target)
{}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target)
{}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooHighException();

    std::ofstream file((target + "_shrubbery").c_str());

    if (!file)
    {
        std::cerr << "Error: Could not open file." << std::endl;
        return;
    }

	file << "                   ccee88oo\n"
		<< "             C8O8O8Q8PoOb o8oo\n"
		<< "          dOB69QO8PdUOpugoO9bD\n"
		<< "         CgggbU8OU qOp qOdoUOdcb\n"
		<< "            6OuU  /p u gcoUodpP\n"
		<< "                 \\\\//  /douUP\n"
		<< "                   \\\\\\////\n"
		<< "                    |||/\\\n"
		<< "                    |||\\/\n"
		<< "                    |||||\n"
		<< "              .....//||||\\....." << executor.getName() << std::endl;

    file.close();
}