/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:36:49 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/02 12:02:26 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	const static int nbrOfFractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};