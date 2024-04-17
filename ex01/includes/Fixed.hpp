/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:14 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/16 15:17:16 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
private:
	int					_num;
	static const int	_fracBits = 8;
	
public:

	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int int_value);
	Fixed(const float float_value);
	~Fixed();

	// Operator overload
	Fixed& operator=(const Fixed& other);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	int		toInt(void) const;
	float	toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
