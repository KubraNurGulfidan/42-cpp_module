/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:44 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/28 18:07:31 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Nameless"), grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
    return *this;
}

const std::string& Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::setGrade(int &grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <=1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade >=150)
		throw GradeTooLowException();
	this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return out;
}

void Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " execute " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
}
