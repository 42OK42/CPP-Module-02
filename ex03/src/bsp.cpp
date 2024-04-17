/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:03:11 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/17 16:07:34 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

float calculate_size_triangle(Point const a, Point const b, Point const c)
{
	double area = 0.5 * fabs(a.getX().toDouble() * (b.getY().toDouble() - c.getY().toDouble()) \
		+ b.getX().toDouble() * (c.getY().toDouble() - a.getY().toDouble()) + c.getX().toDouble() \
		* (a.getY().toDouble() - b.getY().toDouble()));
	std::cout << "The size of the triangle is: " << area << std::endl;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float size_biggest_triangle;
	float size_triangle1;
	float size_triangle2;
	float size_triangle3;
	
	std::cout << "a.x:" << a.getX() << " a.y:" << a.getY() << std::endl;
	std::cout << "b.x:" << b.getX() << " b.y:" << b.getY() << std::endl;
	std::cout << "c.x:" << c.getX() << " c.y:" << c.getY() << std::endl;
	std::cout << "point.x:" << point.getX() << " point.y:" << point.getY() << std::endl;
	
	size_biggest_triangle = calculate_size_triangle(a, b, c);
	size_triangle1 = calculate_size_triangle(a, b, point);
	size_triangle2 = calculate_size_triangle(a, c, point);
	size_triangle3 = calculate_size_triangle(b, c, point);
	
	if (size_biggest_triangle == 0 || size_triangle1 ==0 || size_triangle2 ==0 || size_triangle3 ==0)
		return(false);
	
	if (size_biggest_triangle == (size_triangle1 + size_triangle2 + size_triangle3))
		return (true);

	else 
		return(false);
}
