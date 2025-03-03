/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgulfida <kgulfida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:20:37 by kgulfida          #+#    #+#             */
/*   Updated: 2025/03/03 08:20:38 by kgulfida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(Fixed(0.0f)), y(Fixed(0.0f)){}

Point::~Point(){}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y)){}

Point::Point(const Point &point): x(point.x), y(point.y){}

Point &Point::operator = (const Point &point)
{
	std::cout << "Copy assignment operator called for point" << std::endl;
	if (this == &point)
		return *this;
	return *this;
}

float Point::getX() const{return this->x.toFloat();}
float Point::getY() const{return this->y.toFloat();}