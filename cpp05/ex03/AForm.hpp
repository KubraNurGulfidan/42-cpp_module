/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:21:41 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/24 20:21:42 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
protected:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
public:
	AForm();
	virtual ~AForm();
	AForm(const std::string& name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

	const std::string& getName() const;
	bool getIsSigned() const;
	int getGradeToSigned() const;
	int getGradeToExecute() const;

	virtual void beSigned(const Bureaucrat& b);
	virtual void execute(Bureaucrat const& executor) const = 0;

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
	class FormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif 