/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:12 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/16 18:35:00 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(const Fixed& other) : _num(other._num)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
	//*this = other;		//also possible
}

Fixed& Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float float_value)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_num = static_cast<int>(roundf(float_value * (1 << this->_fracBits)));
}

Fixed::Fixed(const int int_value)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_num = int_value << this->_fracBits;
}

int Fixed::getRawBits(void) const
{
	return (this->_num);
}

void Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

int Fixed::toInt(void) const
{
	return (this->_num >> _fracBits);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_num) / (1 << _fracBits));
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->_num > other._num);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->_num < other._num);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->_num >= other._num);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->_num <= other._num);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->_num == other._num);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->_num != other._num);
}

	// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

// Increment/Decrement operators
Fixed& Fixed::operator++()
{
	++(this->_num);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	++(this->_num);
	return(tmp);
}

Fixed& Fixed::operator--()
{
	--(this->_num);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	--(this->_num);
	return(tmp);
}

// Min/Max functions
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return ((Fixed&)b);
	else
		return ((Fixed&)a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
		if (a.getRawBits() > b.getRawBits())
		return ((Fixed&)a);
	else
		return ((Fixed&)b);
}


std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}