/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:29:24 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/16 17:48:47 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);
		Fixed& operator= (const Fixed &src);
		~Fixed(void);
		
		float toFloat(void)const;
		int	toInt(void)const;
		int	getRawBits()const;
		void setRawBits(int const raw);
	
	private:
		int _number;
		static const int _bits = 8;
	};
	
std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif