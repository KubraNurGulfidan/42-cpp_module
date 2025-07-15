/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:34:35 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/15 17:34:36 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data original;
    original.i = 42;
    original.c = 'K';

	std::cout<< "Size: " << sizeof(original) << std::endl;
    Data* ptr = &original;

    uintptr_t raw = Serializer::serialize(ptr);

    Data* deserialized = Serializer::deserialize(raw);

    if (ptr == deserialized)
        std::cout << "Succesfully: Pointers are same.\n";
    else
        std::cout << "Fail: Pointers are different!\n";

    std::cout << "ptr.i: " << ptr->i << std::endl;
    std::cout << "ptr.c: " << ptr->c << std::endl;
	std::cout << "deserialized.i: " << deserialized->i << std::endl;
    std::cout << "deserialized.c: " << deserialized->c << std::endl;

    return 0;
}
