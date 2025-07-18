/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 06:10:41 by kgulfida          #+#    #+#             */
/*   Updated: 2025/07/17 07:17:59 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); ++i)
            a[i] = i * 2;

        Array<int> b = a;  // copy constructor
        b[0] = 100;

        Array<int> c;
        c = a;             // assignment operator
        c[1] = 200;

        std::cout << "Original array: ";
        for (unsigned int i = 0; i < a.size(); ++i)
            std::cout << a[i] << " ";
        std::cout << "\n";

        std::cout << "Copied array b: ";
        for (unsigned int i = 0; i < b.size(); ++i)
            std::cout << b[i] << " ";
        std::cout << "\n";

        std::cout << "Assigned array c: ";
        for (unsigned int i = 0; i < c.size(); ++i)
            std::cout << c[i] << " ";
        std::cout << "\n";

        std::cout << "Accessing out-of-bounds index: ";
        std::cout << a[10] << "\n"; // will throw
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << "\n";
    }

    return 0;
}
