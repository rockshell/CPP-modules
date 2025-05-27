/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:30:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/16 17:48:52 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructos-destructors
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_number = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_number = value << this->_bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float Constructor called" << std::endl;
	_number = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_number = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

//Operations
float Fixed::toFloat(void)const {
	return ((float)_number / (float)(1 << _bits));
}

int	Fixed::toInt(void)const {
	return (_number >> _bits);
}

//Getter-setters
int	Fixed::getRawBits(void)const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

//Misc
std::ostream &operator<<(std::ostream &output, Fixed const &fixed) {
	output << fixed.toFloat();
	return (output);
}
