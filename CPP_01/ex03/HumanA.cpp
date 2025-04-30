/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:22:29 by arch              #+#    #+#             */
/*   Updated: 2025/04/30 13:51:18 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
	HumanA::_name = name;
	HumanA::_weapon = weapon;
}

void HumanA::attack(void) {
	std::cout << _name << " attacks with the " << _weapon.getType() << std::endl;
}