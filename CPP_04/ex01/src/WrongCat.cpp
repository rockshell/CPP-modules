/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:44:15 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:45:10 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void) {
	this->_type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat (const WrongCat& src): WrongAnimal() {
	this->_type = src._type;
	std::cout << "WrongCat copy-constructed" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat& src) {
	this->_type = src._type;
	std::cout << "WrongCat copy-assigned" << std::endl;
	return (*this);
}

WrongCat::~WrongCat (void) {
	std::cout << "WrongCat destructor was called" << std::endl;
}

void WrongCat::makeSound(void)const {
	std::cout << "Meow" << std::endl;
}
