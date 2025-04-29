/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:05:57 by akulikov          #+#    #+#             */
/*   Updated: 2025/04/29 16:05:12 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	Weapon::_type = type;
}

const std::string Weapon::getType() const {
	return(_type);	
}

void Weapon::setType(std::string type) {
	_type = type;
}
