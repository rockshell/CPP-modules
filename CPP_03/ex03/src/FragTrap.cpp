/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:56:56 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 18:21:19 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (void): ClapTrap () {
	this->_frag_name = "Frag-A-Bond";
	this->_frag_hp = 100;
	this->_frag_ep = 100;
	this->_frag_dmg = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
	std::cout << "HP: " << this->_frag_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_frag_ep << ". Should be 100" << std::endl;
	std::cout << "DAMAGE: " << this->_frag_dmg << ". Should be 30" << std::endl; 
}

FragTrap::FragTrap (std::string name): ClapTrap (name) {
	this->_frag_name = name;
	this->_frag_hp = 100;
	this->_frag_ep = 100;
	this->_frag_dmg = 30;
	std::cout << "FragTrap " << _name << " locked and ready for action!" << std::endl;
	std::cout << "HP: " << this->_frag_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_frag_ep << ". Should be 100" << std::endl;
	std::cout << "DAMAGE: " << this->_frag_dmg << ". Should be 30" << std::endl;
}

FragTrap::FragTrap (const FragTrap& src): ClapTrap (src) {
	this->_frag_name = src._frag_name;
	this->_frag_hp = src._frag_hp;
	this->_frag_ep = src._frag_ep;
	this->_frag_dmg = src._frag_dmg;
	std::cout << "FragTrap " << this->_frag_name << " was copy-constructed" << std::endl;
	std::cout << "HP: " << this->_frag_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_frag_ep << ". Should be 100" << std::endl;
	std::cout << "DAMAGE: " << this->_frag_dmg << ". Should be 30" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap& src) {
	this->_frag_name = src._frag_name;
	this->_frag_hp = src._frag_hp;
	this->_frag_ep = src._frag_ep;
	this->_frag_dmg = src._frag_dmg;
	std::cout << "FragTrap " << this->_frag_name << " was copy-assigned" << std::endl;
	std::cout << "HP: " << this->_frag_hp << ". Should be 100" << std::endl;
	std::cout << "EP: " << this->_frag_ep << ". Should be 100" << std::endl;
	std::cout << "DAMAGE: " << this->_frag_dmg << ". Should be 30" << std::endl;
	return (*this);
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap " << _name << " just blew up!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->_frag_name << " says Frag-five guys!" << std::endl;
}
