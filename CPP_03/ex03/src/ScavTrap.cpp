/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:12:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/28 16:09:22 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void): ClapTrap() {
	this->_name = "Scavdard";
	this->_scav_hp = 100;
	this->_scav_ep = 50;
	this->_scav_dmg = 20;
	std::cout << "ScavTrap " << _name << " is activated" << std::endl;
}

ScavTrap::ScavTrap (std::string name): ClapTrap(name) {
	this->_name = name;
	this->_scav_hp = 100;
	this->_scav_ep = 50;
	this->_scav_dmg = 20;
	std::cout << "ScavTrap " << _name << " is activated" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& src): ClapTrap(src) {
	this->_name = src._name;
	this->_scav_hp = src._hp;
	this->_scav_ep = src._ep;
	this->_scav_dmg = src._damage;
	std::cout << "ScavTrap " << this->_name << " was copy-constructed" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap& src) {
	this->_name = src._name;
	this->_scav_hp = src._hp;
	this->_scav_ep = src._ep;
	this->_scav_dmg = src._damage;
	std::cout << "ScavTrap " << this->_name << " was copy-assigned" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap " << _name << " was destoryed" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is in gatekeeping mode now, beware" << std::endl;
}

void ScavTrap::attack (const std::string& target) {
	if (_ep <= 0)
		std::cout << "ScavTrap " << _name << " is out of Energy" << std::endl;
	else {
		_ep -= 1;
		std::cout << "ScavTrap " << _name << " is kicking " << target << "'s, ass! " << _damage << " points of damage is there!" << std::endl;
		std::cout << "Current energy: " << _ep << std::endl;
	}
}
