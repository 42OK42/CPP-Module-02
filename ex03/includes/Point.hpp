/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/22 13:30:11 by okrahl           ###   ########.fr       */
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

		Point();

		Point(const float x, const float y);

		Point(const Point& other);

		Point &operator=(const Point& other);

		~Point();

		// Getter functions for x and y
		Fixed getX() const;
		Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
float calculate_size_triangle(Point const a, Point const b, Point const c);

#endif