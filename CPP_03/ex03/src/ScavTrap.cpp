/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:12:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 18:22:03 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void): ClapTrap() {
	this->_scav_name = "Scavdard";
	this->_scav_hp = 100;
	this->_scav_ep = 50;
	this->_scav_dmg = 20;
	std::cout << "ScavTrap " << _scav_name << " is activated" << std::endl;
	std::cout << "HP: " << this->_scav_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_scav_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_scav_dmg << ". Should be 20" << std::endl;
}

ScavTrap::ScavTrap (std::string name): ClapTrap(name) {
	this->_scav_name = name;
	this->_scav_hp = 100;
	this->_scav_ep = 50;
	this->_scav_dmg = 20;
	std::cout << "ScavTrap " << _scav_name << " is activated" << std::endl;
	std::cout << "HP: " << this->_scav_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_scav_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_scav_dmg << ". Should be 20" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& src): ClapTrap(src) {
	this->_scav_name = src._scav_name;
	this->_scav_hp = src._scav_hp;
	this->_scav_ep = src._scav_ep;
	this->_scav_dmg = src._scav_dmg;
	std::cout << "ScavTrap " << this->_scav_name << " was copy-constructed" << std::endl;
	std::cout << "HP: " << this->_scav_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_scav_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_scav_dmg << ". Should be 20" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap& src) {
	this->_scav_name = src._scav_name;
	this->_scav_hp = src._scav_hp;
	this->_scav_ep = src._scav_ep;
	this->_scav_dmg = src._scav_dmg;
	std::cout << "ScavTrap " << this->_scav_name << " was copy-assigned" << std::endl;
	std::cout << "HP: " << this->_scav_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_scav_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_scav_dmg << ". Should be 20" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap " << _scav_name << " was destoryed" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _scav_name << " is in gatekeeping mode now, beware" << std::endl;
}

void ScavTrap::attack (const std::string& target) {
	if (_scav_ep <= 0)
		std::cout << "ScavTrap " << _scav_name << " is out of Energy" << std::endl;
	else {
		_scav_ep -= 1;
		std::cout << "ScavTrap " << _scav_name << " is kicking " << target << "'s, ass! " << _scav_dmg << " points of damage is there!" << std::endl;
		std::cout << "Current energy: " << _scav_ep << std::endl;
	}
}
