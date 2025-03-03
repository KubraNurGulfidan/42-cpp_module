/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:20:20 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/03 08:39:08 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float areaOfTriangle(Point const a, Point const b, Point const c)
{
	float area;

	area = fabs((a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()) - (a.getY() * b.getX() + b.getY() * c.getX() + c.getY() * a.getX()));
	area /= 2;

	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float totalArea = areaOfTriangle(a, b, c);
	float threeArea = areaOfTriangle(a, b, point) + areaOfTriangle(a, c, point) + areaOfTriangle(b, c, point);

	if (totalArea == threeArea)
		return true;
	return false;
}