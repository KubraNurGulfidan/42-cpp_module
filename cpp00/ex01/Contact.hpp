/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:51:59 by kgulfida          #+#    #+#             */
/*   Updated: 2025/02/22 20:10:51 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	void setFirstName(std::string input);
	void setLastName(std::string input);
	void setNickname(std::string input);
	void setPhoneNumber(std::string input);
	void setDarkestSecret(std::string input);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};
