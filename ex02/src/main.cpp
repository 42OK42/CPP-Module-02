/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:22 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/21 19:48:23 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}

/* int main()
{
	// Test der Konstruktoren und Ausgabeoperator
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	// Test der Vergleichsoperatoren
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "b >= d: " << (b >= d) << std::endl;
	std::cout << "b <= d: " << (b <= d) << std::endl;
	std::cout << "b == d: " << (b == d) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;

	// Test der arithmetischen Operatoren
	std::cout << "b + c: " << (b + c) << std::endl;
	std::cout << "b - c: " << (b - c) << std::endl;
	std::cout << "b * c: " << (b * c) << std::endl;
	std::cout << "b / c: " << (b / c) << std::endl;

	// Test der Inkrement- und Dekrement-Operatoren
	std::cout << "Pre-increment: " << ++b << std::endl;
	std::cout << "Post-increment: " << b++ << std::endl;
	std::cout << "After post-increment: " << b << std::endl;

	std::cout << "Pre-decrement: " << --b << std::endl;
	std::cout << "Post-decrement: " << b-- << std::endl;
	std::cout << "After post-decrement: " << b << std::endl;

	// Test der min und max Funktionen
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

	return 0;
} */
