/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:44:14 by arch              #+#    #+#             */
/*   Updated: 2025/06/02 19:24:26 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void) {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog (const Dog& src): Animal() {
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog copy-constructed" << std::endl;
}

Dog &Dog::operator= (const Dog& src) {
	if (this != &src) {
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << "Dog copy-assigned" << std::endl;
	return (*this);
}

Dog::~Dog (void) {
	delete (this->_brain);
	std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound(void)const {
	std::cout << "Bark" << std::endl;
}

void Dog::readTheMind(void)const {
	std::cout << "How many thoughts are in the dog's brain? Should be around hundred" << std::endl;
	if (this->_brain) {
		std::cout << sizeof(this->_brain->ideas)/sizeof(std::string) << std::endl;
	} else {
		std::cout << "No brain activity detected!" << std::endl;
	}
}
