/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:11:14 by okrahl            #+#    #+#             */
/*   Updated: 2024/04/12 14:49:05 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <string>
#include <iostream>
#include <fstream>

class Fixed
{
private:
	int					num;
	static const int	FracBits = 8;
	
public:

	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif
