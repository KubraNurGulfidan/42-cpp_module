/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:37:54 by kgulfida          #+#    #+#             */
/*   Updated: 2025/06/30 11:37:55 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "iostream"

class Intern
{
private:
	std::string name;
public:
	Intern();
	~Intern();
	Intern(const std::string& name);
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);

	AForm* makeForm(const std::string& formName, const std::string& target) const;
};

#endif