/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:29:24 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/13 10:40:15 by arch             ###   ########.fr       */
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
		bool operator> (Fixed fixed);
		bool operator< (Fixed fixed);
		bool operator>= (Fixed fixed);
		bool operator<= (Fixed fixed);
		bool operator== (Fixed fixed);
		bool operator!= (Fixed fixed);
		float operator+ (Fixed fixed);
		float operator- (Fixed fixed);
		float operator* (Fixed fixed);
		float operator/ (Fixed fixed);
		Fixed operator++ ();
		Fixed operator-- ();
		Fixed operator++ (int);
		Fixed operator-- (int);
		int	getRawBits ()const;
		int	toInt(void)const;
		void setRawBits(int const raw);
		float toFloat(void)const;
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);
	
	private:
		int _number;
		static const int _bits = 8;
	};
	
std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif