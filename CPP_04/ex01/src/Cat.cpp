/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:40:15 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:31:45 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void) {
	this->_type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat (const Cat& src): Animal() {
	this->_type = src._type;
	std::cout << "Cat copy-constructed" << std::endl;
}

Cat &Cat::operator= (const Cat& src) {
	this->_type = src._type;
	std::cout << "Cat copy-assigned" << std::endl;
	return (*this);
}

Cat::~Cat (void) {
	std::cout << "Cat destructor was called" << std::endl;
}

void Cat::makeSound(void)const {
	std::cout << "Meow" << std::endl;
}
