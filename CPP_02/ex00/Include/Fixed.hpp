/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:29:24 by akulikov          #+#    #+#             */
/*   Updated: 2025/04/30 13:14:05 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

// #include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed& src);
		Fixed& operator= (const Fixed &src);
		~Fixed(void);
		
		int	getRawBits()const;
		void setRawBits(int const raw);
	private:
		int _number;
		static const int _bits = 8;
};

#endif