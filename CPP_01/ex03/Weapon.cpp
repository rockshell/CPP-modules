/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:05:57 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/01 19:46:23 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	Weapon::_type = type;
}

Weapon::Weapon() {
	_type = "No weapon";
}

const std::string Weapon::getType() const {
	return(_type);	
}

void Weapon::setType(std::string type) {
	_type = type;
}
