/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/16 19:05:04 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

private:
	Fixed const x;
	Fixed const y;

public:
	// Default constructor that initializes x and y to 0
	Point();

	// Constructor that takes two constant floating-point numbers
	// and initializes x and y with those parameters
	Point(const float x, const float y);

	// Copy constructor
	Point(const Point& other);

	// Copy assignment operator overload
	Point& operator=(const Point& other);

	// Destructor
	~Point();

	// Getter functions for x and y
	Fixed getX() const;
	Fixed getY() const;

};

// Non-member function declaration for bsp
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // POINT_HPP