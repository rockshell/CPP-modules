/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:28 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/05 18:40:46 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap (std::string name) {
	_name = name;
	_hp = 10;
	_ep = 10;
	_damage = 0;
	std::cout << "ClapTrap " << _name << " is activated" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "ClapTrap " << this->_name << " was copy-constructed" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "ClapTrap " << this->_name << " was copy-assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap (void) {
	std::cout << "ClapTrap " << _name << " was destoryed" << std::endl;
}

void ClapTrap::attack (const std::string& target) {
	if (_ep <= 0)
		std::cout << "ClapTrap " << _name << " is out of Energy" << std::endl;
	else {
		_ep -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
		std::cout << "Current energy: " << _ep << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount << " damage!" << std::endl;
	std::cout << "Current hit-points: " << _hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_ep <= 0)
		std::cout << "ClapTrap " << _name << " is out of Energy" << std::endl;
	else {
		_hp += amount;
		_ep -= 1;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " damage!" << std::endl;
		std::cout << "Current hit-points: " << _hp << std::endl;
		std::cout << "Current energy: " << _ep << std::endl;
	}
}
