/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:29:24 by akulikov          #+#    #+#             */
/*   Updated: 2025/02/14 16:52:21 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>

class Fixed {
	public:
		Fixed () {
			_number = 0;
		};
		Fixed (const &Fixed)
		~Fixed () {};
		
		
	private:
		int _number;
		static const int _bits = 8;

		
	
};

#endif