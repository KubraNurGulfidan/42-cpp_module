/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:38 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/30 12:28:39 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Nameless"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::~AForm() {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) 
	: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	if (gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(const AForm& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{}

AForm& AForm::operator=(const AForm& other)
{
	if(this != &other)
		this->isSigned=other.isSigned;
	return *this;
}

const std::string& AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getGradeToSigned() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if(b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "bureaucrat grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "bureaucrat grade too low!";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "form is not signed!";
}

std::ostream& operator<<(std::ostream& out, const AForm& Aform)
{
	out << Aform.getName() << ", is signed " << (Aform.getIsSigned() ? "yes" : "no") << "." << std::endl;
	return out;
}