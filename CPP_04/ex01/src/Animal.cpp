/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:02:53 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:51:44 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal (void) {
	this->_type = "Unknown";
	std::cout << "Animal constructed" << std::endl;
}

Animal::Animal (const Animal& src) {
	this->_type = src._type;
	std::cout << "Animal copy-constructed" << std::endl;
}

Animal &Animal::operator= (const Animal& src) {
	this->_type = src._type;
	std::cout << "Animal copy-assigned" << std::endl;
	return (*this);
}

Animal::~Animal (void) {
	std::cout << "Animal destructor was called" << std::endl;
}

std::string Animal::getType(void)const {
	return (this->_type);
}

void Animal::makeSound(void)const {
	std::cout << "*generic animal noises*" << std::endl;
}
