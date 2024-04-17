/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:22 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/17 16:06:48 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main(void)
{
	Point a(0, 10);
	Point b(5, 5);
	Point c(0, 0);
	Point d(1,2);
	if (bsp(a, b, c, d))
		std::cout << "The Point is in the triangle" << std::endl;
	else
		std::cout << "The Point is not in the triangle" << std::endl;
	return (0);
}
