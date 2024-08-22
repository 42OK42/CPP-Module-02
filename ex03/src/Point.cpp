/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:06 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/22 13:31:20 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

Point::Point() : x(0), y(0)
{
	
}


Point::Point(const float xVal, const float yVal) : x(xVal), y(yVal)
{
	
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{

}

Point& Point::operator=(const Point& other) 
{
	if (this == &other)
		return (*this);
	return (*this);
}

Point::~Point()
{
	
}

Fixed Point::getX() const 
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
