/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:40:15 by arch              #+#    #+#             */
/*   Updated: 2025/06/02 19:24:16 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat (const Cat& src): Animal() {
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat copy-constructed" << std::endl;
}

Cat &Cat::operator= (const Cat& src) {
	if (this != &src) {
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
	std::cout << "Cat copy-assigned" << std::endl;
	return (*this);
}

Cat::~Cat (void) {
	delete (this->_brain);
	std::cout << "Cat destructor was called" << std::endl;
}

void Cat::makeSound(void)const {
	std::cout << "Meow" << std::endl;
}
