/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:01:38 by arch              #+#    #+#             */
/*   Updated: 2025/05/29 18:12:26 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void): 
	ClapTrap ("DDog_clap_name") {
	_name = "DDog";
	_hp = FragTrap::_frag_hp;
	_ep = ScavTrap::_scav_ep;
	_damage = FragTrap::_frag_dmg;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
	std::cout << "HP: " << _hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << _ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << _damage << ". Should be 30" << std::endl;
}

DiamondTrap::DiamondTrap (std::string name): 
	ClapTrap (name + "_clap_name") {
	_name = name;
	_hp = FragTrap::_frag_hp;
	_ep = ScavTrap::_scav_ep;
	_damage = FragTrap::_frag_dmg;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
	std::cout << "HP: " << this->_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_damage << ". Should be 30" << std::endl; 
}

DiamondTrap::DiamondTrap (const DiamondTrap& src): ClapTrap (src), ScavTrap (src), FragTrap (src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "DiamondTrap " << this->_name << " was copy-constructed" << std::endl;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
	std::cout << "HP: " << this->_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_damage << ". Should be 30" << std::endl; 
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap& src) {
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_damage = src._damage;
	std::cout << "DiamondTrap " << this->_name << " was copy-assigned" << std::endl;
	std::cout << "DiamondTrap " << _name << " is locked" << std::endl;
	std::cout << "HP: " << this->_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_ep << ". Should be 50" << std::endl;
	std::cout << "DAMAGE: " << this->_damage << ". Should be 30" << std::endl; 
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
