/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:20:40 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/03 08:20:41 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	~Point();

	Point(const float x, const float y);
	Point(const Point &point);
	Point &operator = (const Point &point);

	float getX() const;
	float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif