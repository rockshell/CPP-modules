/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:29:46 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/16 19:12:17 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b(10);
	Fixed c = b;
	a = 5;
	
	std::cout << "We should have 5" << std::endl;
	std::cout << a << std::endl;
	std::cout << "We should have 15 now" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << "10 divide by 5 is equal 2" << std::endl;
	std::cout << c / a << std::endl;
	std::cout << "Post-incrementing 5 just by little" << std::endl;
	std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	std::cout << "10 is higher than 5" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "5 is smaller than 10" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	return 0;
}