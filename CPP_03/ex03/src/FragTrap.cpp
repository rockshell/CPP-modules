/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:56:56 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/28 16:08:14 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap (void): ClapTrap () {
	this->_name = "Scavdard";
	this->_frag_hp = 100;
	this->_frag_ep = 100;
	this->_frag_dmg = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
}

FragTrap::FragTrap (std::string name): ClapTrap (name) {
	this->_name = name;
	this->_frag_hp = 100;
	this->_frag_ep = 100;
	this->_frag_dmg = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
}

FragTrap::FragTrap (const FragTrap& src): ClapTrap (src) {
	this->_name = src._name;
	this->_frag_hp = src._hp;
	this->_frag_ep = src._ep;
	this->_frag_dmg = src._damage;
	std::cout << "FragTrap " << this->_name << " was copy-constructed" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap& src) {
	this->_name = src._name;
	this->_frag_hp = src._hp;
	this->_frag_ep = src._ep;
	this->_frag_dmg = src._damage;
	std::cout << "FragTrap " << this->_name << " was copy-assigned" << std::endl;
	return (*this);
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap " << _name << " just blew up!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Frag-five guys!" << std::endl;
}
