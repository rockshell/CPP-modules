/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:12:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 14:27:51 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) {
	_name = "Scavdard";
	_hp = 100;
	_ep = 50;
	_damage = 20;
	std::cout << "ScavTrap " << _name << " is activated" << std::endl;
}

ScavTrap::ScavTrap (std::string name) {
	_name = name;
	_hp = 100;
	_ep = 50;
	_damage = 20;
	std::cout << "ScavTrap " << _name << " is activated" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "ScavTrap " << this->_name << " was copy-constructed" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
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
