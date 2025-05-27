/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:56:56 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/27 19:34:30 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap (void): ClapTrap () {
	_name = "Scavdard";
	_hp = 100;
	_ep = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
}

FragTrap::FragTrap (std::string name): ClapTrap (name) {
	_name = name;
	_hp = 100;
	_ep = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
}

FragTrap::FragTrap (const FragTrap& src): ClapTrap (src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "FragTrap " << this->_name << " was copy-constructed" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "FragTrap " << this->_name << " was copy-assigned" << std::endl;
	return (*this);
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap " << _name << " just blew up!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Frag-five guys!" << std::endl;
}
