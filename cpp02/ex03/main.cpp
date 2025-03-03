/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:20:32 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/03 08:20:33 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(2.0, 2.0f);
	Point b(2.0f, 4.0f);
	Point c(4.0f, 2.0f);

	Point p(3.5f, 3.0f);
	if (bsp(a, b, c, p))
		std::cout << "True!" << std::endl;
	else
		std::cout << "False!" << std::endl;
	return 0;
}