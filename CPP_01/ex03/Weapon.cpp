/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:05:57 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/26 17:08:23 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return(_type);	
}

void Weapon::setType(std::string name) {
	_type = name;
}
