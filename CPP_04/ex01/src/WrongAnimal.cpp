/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:42:58 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:43:42 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) {
	this->_type = "Unknown";
	std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& src) {
	this->_type = src._type;
	std::cout << "WrongAnimal copy-constructed" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal& src) {
	this->_type = src._type;
	std::cout << "WrongAnimal copy-assigned" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal (void) {
	std::cout << "WrongAnimal destructor was called" << std::endl;
}

std::string WrongAnimal::getType(void)const {
	return (this->_type);
}

void WrongAnimal::makeSound(void)const {
	std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
}