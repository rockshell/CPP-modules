/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:22:27 by arch              #+#    #+#             */
/*   Updated: 2024/12/27 13:28:40 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) 
	: _name(name) {}

void HumanB::attack(void) {
	std::cout << _name << " attacks with the " << _weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
