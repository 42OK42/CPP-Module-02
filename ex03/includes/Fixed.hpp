/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:37:01 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/17 15:55:25 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fixed.hpp
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_num; // Stores the fixed-point value
	static const int	_fracBits = 8; // Number of fractional bits for the fixed-point representation

public:
	// Constructors
	Fixed(); // Default constructor
	Fixed(const int int_value); // Constructs fixed-point value from an integer
	Fixed(const float float_value); // Constructs fixed-point value from a float
	Fixed(const Fixed& other); // Copy constructor

	// Destructor
	~Fixed();

	// Assignment operator
	Fixed& operator=(const Fixed& other);

	// Comparison operators
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	// Arithmetic operators
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	// Increment/Decrement operators
	Fixed& operator++();    // Pre-increment
	Fixed operator++(int);  // Post-increment
	Fixed& operator--();    // Pre-decrement
	Fixed operator--(int);  // Post-decrement

	// Conversion functions
	float toFloat(void) const; // Converts fixed-point value to float
	int toInt(void) const; // Converts fixed-point value to int
	double toDouble(void) const;

	// Member functions to get and set the raw value
	int getRawBits(void) const; // Retrieves the raw fixed-point value
	void setRawBits(int const raw); // Sets the raw fixed-point value

	// Min/Max functions
	static	Fixed& min(Fixed &a, Fixed &b); // Returns the smaller of two fixed-point values
	static const Fixed& min(const Fixed& a, const Fixed& b); // Returns the smaller of two constant fixed-point values
	static	Fixed& max(Fixed &a, Fixed &b); // Returns the larger of two fixed-point values
	static const Fixed& max(const Fixed& a, const Fixed& b); // Returns the larger of two constant fixed-point values

};

// Stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj); // Overloads << to output a Fixed object

#endif // FIXED_HPP