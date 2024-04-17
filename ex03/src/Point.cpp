/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:06 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/17 15:23:19 by okrahl           ###   ########.fr       */
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

// Copy assignment operator overload
Point& Point::operator=(const Point& other) 
{
	// Self-assignment guard
	if (this == &other)
		return (*this);
	return (*this);
}

// Destructor
Point::~Point()
{
	
}

// Getter functions for x and y
Fixed Point::getX() const 
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
