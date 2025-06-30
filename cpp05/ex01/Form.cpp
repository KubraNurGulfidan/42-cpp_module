/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:08:46 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/30 10:57:29 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Nameless"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::~Form() {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) 
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

Form::Form(const Form& other)
	: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{}

Form& Form::operator=(const Form& other)
{
	if(this != &other)
		this->isSigned=other.isSigned;
	return *this;
}

const std::string& Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getGradeToSigned() const
{
	return gradeToSign;
}

int Form::getGradeToExecute() const
{
	return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
	if(b.getGrade() > this->gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "bureaucrat grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "bureaucrat grade too low!";
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << form.getName() << ", is signed " << (form.getIsSigned() ? "yes" : "no") << "." << std::endl;
    return out;
}