/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:41 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/16 12:21:07 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "stdint.h"

struct Data
{
	char c; 
	bool a;
	long d;
	int i;
	int j;
};

class Serializer
{
private:	
	Serializer();
	~Serializer();
	Serializer(const Serializer& obj);
	Serializer& operator=(const Serializer& obj);

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif