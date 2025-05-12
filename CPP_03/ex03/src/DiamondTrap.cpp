/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:01:38 by arch              #+#    #+#             */
/*   Updated: 2025/05/12 18:31:20 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void): ClapTrap ("Default_clap_name") {
	_name = "Default Diamond";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
}

DiamondTrap::DiamondTrap (std::string name): ClapTrap (name + "_clap_name") {
	_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap& src): ClapTrap (src), FragTrap (src), ScavTrap (src)  {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "DiamondTrap " << this->_name << " was copy-constructed" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "DiamondTrap " << this->_name << " was copy-assigned" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap () {
	std::cout << "DiamondTrap " << _name << " lies in shatters" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "My parent ClapTrap is called " << ClapTrap::_name << std::endl;
}