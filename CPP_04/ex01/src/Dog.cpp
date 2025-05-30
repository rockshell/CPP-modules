/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:44:14 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:39:29 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void) {
	this->_type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog (const Dog& src): Animal() {
	this->_type = src._type;
	std::cout << "Dog copy-constructed" << std::endl;
}

Dog &Dog::operator= (const Dog& src) {
	this->_type = src._type;
	std::cout << "Dog copy-assigned" << std::endl;
	return (*this);
}

Dog::~Dog (void) {
	std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound(void)const {
	std::cout << "Bark" << std::endl;
}
